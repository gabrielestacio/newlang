%{
/*
  (1) Estrutura sintática:
    (A) Introdução e detecção de erros léxicos e sintáticos;
    (B) Como o programa/estrutura pode ser derivado das regras sintáticas?
    (C) Gerar fontes que incluam instruções que originam conflito shift-reduce. Ações corretas?

  (2) Variáveis:
    (A) Variáveis omitidas - detectar erros;
    (B) Variáveis duplicadas no mesmo escopo - detectar erros;
    (C) Variáveis duplicadas em escopos distintos e não-aninhados - testar acessos;
    (D) Variáveis duplicadas em escopos distintos e aninhados - testar acessos.
 
  (3) Expressões:
    (A) Identificar e testar coerções permitidas. Mostrar operações para compatibilização de tipos.
    (B) Misturar tipos incompatíveis e testar detecção de erros.
 
  (4) Passagem de parâmetros:
    (A) Corretamente transmitidos ao subprograma chamado?
    (B) Alterados/inalterados corretamente após retorno do subprograma chamado?
*/

#define SYMBOLS create_table()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "record.h"
#include "hash_table.h"

int yylex(void);
int yyerror(char *s);
int yywrap();
extern int yylineno;
extern char * yytext;
extern FILE * yyin, * yyout;

char * cat(char *, char *, char *, char *, char *);
char * convert(char * type);

%}

%union {
	char * sValue; 
	struct record * rec;
};

%token <sValue> ID
%token <sValue> INT REAL BOOLEAN CHAR STRING VOID TYPE
%token PRINT READ
%token NULO CONSTANT
%token MAIN_FUN FUNCTION
%token FOR WHILE IF ELSE_IF ELSE SWITCH CASE DEFAULT BREAK RETURN
%token PLUS_ASSIGN MINUS_ASSIGN DIV_ASSIGN TIMES_ASSIGN DOUBLE_PLUS DOUBLE_MINUS POWER
%token AND OR EOR EQUAL NOT_EQUAL EQ_GREATER EQ_SMALLER

%type <rec> declarations_list declaration id_list id_declaration id dimensions dimensions_novalue dimensions_value
%type <rec> expression expression_operator term term_operator factor base id_value literal double_sign function_call arguments arguments_list argument
%type <rec> subprograms_section subprogram subprogram_type subprogram_id subprogram_main signature parameters parameter_list parameter statement_list statement return
%type <rec> block body header
%type <rec> print print_content read
%type <rec> assignment assignment_operation assignment_sign
%type <rec> conditional if_else if else_section else_if else switch_case switch case_section case default_section default
%type <rec> loop while for for_structure for_expression for_assignment
%type <rec> evaluation evaluation_operator comparation comparison compare logic_operator

%start program

%%

program : declarations_list subprograms_section	{fprintf(yyout, "%s\n%s", $1->code, $2->code);
																								free_Record($1);
																								free_Record($2);}	
				| subprograms_section										{fprintf(yyout, "%s", $1->code);
																								free_Record($1);}
				;

declarations_list : declaration ';'										{char * s = cat($1->code, ";\n", "", "", "");
																											free_Record($1);
																											$$ = create_Record(s, "");
																											free(s);}
          		 	  | declaration ';' declarations_list	{char * s = cat($1->code, ";\n", $3->code, "", "");
																											free_Record($1);
																											free_Record($3);
																											$$ = create_Record(s, "");
																											free(s);}
		     	  			;

declaration: TYPE id_list						{char * s = cat(convert($1), " ", $2->code, "", "");
																		record * rec = create_Record($2->code, $1);
																		$$ = create_Record(s, $1);
																		insert_record(SYMBOLS, rec);
																		free_Record($2);
																		free($1);
																		free(s);}
	 	   			| CONSTANT TYPE id_list	{char * s = cat("const ", convert($2), " ", $3->code, "");
																		record * rec = create_Record($3->code, $2);
																		insert_record(SYMBOLS, rec);
																		$$ = create_Record(s, $2);
																		free_Record($3);
																		free($2);
																		free(s);}
		   			;


id_list : id_declaration							{$$ = $1;}
	    	| id_declaration ',' id_list	{char * s = cat($1->code, ",", $3->code, "", "");
																			free_Record($1);
																			free_Record($3);
																			$$ = create_Record(s, "");
																			free(s);}
	    	;

id_declaration	: id 								{$$ = $1;}
			  				| id '=' expression	{char * s = cat($1->code, "=", $3->code, "", "");
																		free_Record($1);
																		free_Record($3);
																		$$ = create_Record(s, $3->type);
																		free(s);}
			  				;

id : ID dimensions	{char * s = cat($1, " ", $2->code, "", "");
										free($1);
										free_Record($2);
										$$ = create_Record(s, "");
										free(s);}
   ;

dimensions :	{$$ = create_Record("","");}
					| 	dimensions_novalue	{$$ = $1;}
					| 	dimensions_value		{$$ = $1;}
					;

dimensions_novalue : '[' ']'  									{$$ = create_Record("[]", "");}
		   		   			| '[' ']' dimensions_novalue	{char * s = cat("[]", $3->code, "", "", "");
																								free_Record($3);
																								$$ = create_Record(s, "");}
		           		;

dimensions_value : '[' INT ']'  									{char * s = cat("[", $2, "]", "", "");
																									free($2);
																									$$ = create_Record(s, "");
																									free(s);}
			     				| '[' INT ']' dimensions_value	{char * s = cat("[", $2, "]", $4->code, "");
																									free($2);
																									free_Record($4);
																									$$ = create_Record(s, "");
																									free(s);}
			     				;

expression : expression expression_operator expression	{char * s = cat($1->code, $2->code, $3->code, "", "");
																												char * t;
																												if(strcmp($1->type, $3->type) != 0){
																													if((strcmp($1->type, "int") == 0 && strcmp($3->type, "real") == 0) || (strcmp($3->type, "int") == 0 && strcmp($1->type, "real") == 0)){
																														t = "real";
																													} else{
																														return yyerror("Expression error: type mismatch");
																													}
																												} else{
																													t = $1->type;
																												}
																												free_Record($1);
																												free_Record($2);
																												free_Record($3);
																												$$ = create_Record(s, t);
																												free(s);}
						| term 																			{$$ = $1;}
						;

expression_operator : '+'	{$$ = create_Record("+", "");}
	 									| '-' {$$ = create_Record("-", "");}
	  								;

term : term term_operator factor	{char * s = cat($1->code, $2->code, $3->code, "", "");
																	char * t;
																	if(strcmp($1->type, $3->type) != 0){
																		if((strcmp($1->type, "int") == 0 && strcmp($3->type, "real") == 0) || (strcmp($3->type, "int") == 0 && strcmp($1->type, "real") == 0)){
																			t = "real";
																		}
																		else{
																			return yyerror("Term error: type mismatch");
																		}
																	} else{
																		t = $1->type;
																	}
																	free_Record($1);
																	free_Record($2);
																	free_Record($3);
																	$$ = create_Record(s, t);
																	free(s);}
	 | factor 											{$$ = $1;}
	 ;

term_operator : '*'	{$$ = create_Record("*", "");}
							| '/'	{$$ = create_Record("/", "");}
							| '%'	{$$ = create_Record("%", "");}
							;

factor : base POWER factor	{char * s = cat("pow(", $1->code, ",", $3->code, ")");
														free_Record($3);
														$$ = create_Record(s, $1->type);
														free_Record($1);
														free(s);}
	   		| base 							{$$ = $1;}
	   		;

base : '(' expression ')'		{char * s = cat("(", $2->code, ")", "", "");
														$$ = create_Record(s, $2->type);
														free_Record($2);
														free(s);}
		| literal 							{$$ = $1;}
		| id			 							{$$ = $1;}
		| id_value 							{$$ = $1;}
		| id_value double_sign	{char * s = cat($1->code, $2->code, "", "", "");
														free_Record($2);
														$$ = create_Record(s, $1->type);
														free_Record($1);
														free(s);}
	 	;

literal : INT			{$$ = create_Record($1, "int");
									free($1);}
				| REAL		{$$ = create_Record($1, "real");
									free($1);}
				| BOOLEAN	{$$ = create_Record($1, "boolean");
									free($1);}
				| CHAR		{$$ = create_Record($1, "char");
									free($1);}
				| STRING 	{$$ = create_Record($1, "string");
									free($1);}
				| NULO 		{$$ = create_Record("NULL", "null");}
				;

id_value : id						{record * rec = search_record(SYMBOLS, $1->code);
												$$ = create_Record($1->code, rec->type);}
				| function_call	{$$ = $1;}
				;

function_call : ID '(' arguments ')'	{char * s = cat($1, "(", $3->code, ")", "");
																			record * rec = search_record(SYMBOLS, $1);
																			free($1);
																			free_Record($3);
																			$$ = create_Record(s, rec->type);
																			free(s);}
		      		;

arguments : 								{$$ = create_Record("","");}
					| arguments_list	{$$ = $1;} 	
					;

arguments_list : argument 										{$$ = $1;}
								| argument ',' arguments_list	{char * s = cat($1->code, ",", $3->code, "", "");
																							free_Record($3);
																							free_Record($1);
																							$$ = create_Record(s, "");
																							free(s);}
		  	   			;

argument : id_declaration	{record * rec = search_record(SYMBOLS, $1->code);
													$$ = create_Record($1->code, rec->type);}
		 		| literal 				{$$ = $1;}
		 		| function_call		{$$ = $1;}
		 		;

double_sign : DOUBLE_PLUS		{$$ = create_Record("++", "");}
						| DOUBLE_MINUS	{$$ = create_Record("--", "");}
						;

subprograms_section : subprogram 											{$$ = $1;}
										| subprogram subprograms_section	{char * s = cat($1->code, $2->code, "", "", "");
																											free_Record($1);
																											free_Record($2);
																											$$ = create_Record(s, "");
																											free(s);}
	  								;

subprogram : header block {char * s = cat($1->code, $2->code, "", "", "");
													free_Record($1);
													$$ = create_Record(s, $2->type);
													free_Record($2);
													free(s);}
	      		;

header : FUNCTION signature	{$$ = $2;}
			;

signature : subprogram_type subprogram_id '(' parameters ')'	{char * s = cat($1->code, $2->code, "(", $4->code, ")");
																															record * rec = create_Record($2->code, $1->type);
																															insert_record(SYMBOLS, rec);
																															$$ = create_Record(s, $1->type);
																															free_Record($2);
																															free_Record($4);
																															free_Record($1);
																															free(s);}
		  		| subprogram_main '(' ')'														{char * s = cat($1->code, "()", "", "", "");
																															$$ = create_Record(s, "void");
																															free_Record($1);
																															free(s);}
					;

subprogram_type : TYPE	{$$ = create_Record(convert($1), $1);
												free($1);}
		  					| VOID	{$$ = create_Record("void", "void");}
		  					;

subprogram_main :  MAIN_FUN	{$$ = create_Record("main", "void");}
								;

subprogram_id : ID	{record * rec = search_record(SYMBOLS, $1);
										if(rec != NULL){
											$$ = create_Record($1, "");
										} else {
											$$ = create_Record($1, rec->type);
										}}
							;

parameters : 									{$$ = create_Record("","");}
	   	  		| parameter_list	{$$ = $1;}
	       		;

parameter_list : parameter 										{$$ = $1;}
		       		| parameter ',' parameter_list	{char * s = cat($1->code, ",", $3->code, "", "");
																							free_Record($1);
																							free_Record($3);
																							$$ = create_Record(s, "");
																							free(s);}
		       		;

parameter : TYPE id	{char * s = cat(convert($1), $2->code, "", "", "");
										record * rec = create_Record($2->code, convert($1));
										$$ = create_Record(s, $1);
										insert_record(SYMBOLS, rec);
										free_Record($2);
										free($1);
										free(s);}
	  	  ;

block : '{' body '}'	{char * s = cat("{", $2->code, "}", "", "");
											free_Record($2);
											$$ = create_Record(s, "");
											free(s);}
	  ;

body : 																	{$$ = create_Record("","");}
		| declarations_list									{$$ = $1;}
		| declarations_list statement_list	{char * s = cat($1->code, $2->code, "", "", "");
																				free_Record($1);
																				free_Record($2);
																				$$ = create_Record(s, "");
																				free(s);}
		| statement_list										{$$ = $1;}
		;

statement_list : statement ';'						{char * s = cat($1->code, ";\n", "", "", "");
																					free_Record($1);
																					$$ = create_Record(s, "");
																					free(s);}
	    	   | statement ';' statement_list	{char * s = cat($1->code, ";\n", $3->code, "", "");
																					free_Record($1);
																					free_Record($3);
																					$$ = create_Record(s, "");
																					free(s);}
		       ;

statement : assignment 	{$$ = $1;}
					| print 			{$$ = $1;}
					| conditional	{$$ = $1;}
					| read				{$$ = $1;}
					| loop 				{$$ = $1;}
					| return			{$$ = $1;}
					| BREAK				{$$ = create_Record("break", "");}
					;

assignment : id assignment_operation	{char * s = cat($1->code, $2->code, "", "", "");
																			char * t;
																			if(strcmp($1->type, $2->type) != 0){
																				if((strcmp($1->type, "int") == 0 && strcmp($2->type, "real") == 0) || (strcmp($2->type, "int") == 0 && strcmp($1->type, "real") == 0)){
																					t = "real";
																				}
																				else if(strcmp($1->type, "") == 0){
																					t = $2->type;
																				} else{
																					return yyerror("Assignment error: type mismatch");
																				}
																			} else{
																				t = $1->type;
																			}
																			free_Record($1);
																			free_Record($2);
																			$$ = create_Record(s, t);
																			free(s);}
		   			;

assignment_operation : assignment_sign expression	{char * s = cat($1->code, $2->code, "", "", "");
																									free_Record($1);
																									$$ = create_Record(s, $2->type);
																									free_Record($2);
																									free(s);}
		   			 				| double_sign 								{$$ = $1;}
		   			 				;

assignment_sign : '=' 					{$$ = create_Record("=", "");}
								| PLUS_ASSIGN		{$$ = create_Record("+=", "");}
								| MINUS_ASSIGN	{$$ = create_Record("-=", "");}
								| DIV_ASSIGN 		{$$ = create_Record("/=", "");}
								| TIMES_ASSIGN 	{$$ = create_Record("*=", "");}
								;

evaluation : comparation													{$$ = $1;}
					| comparation logic_operator evaluation	{char * s = cat($1->code, $2->code, $3->code, "", "");
																									$$ = create_Record(s, $1->type);
																									free_Record($1);
																									free_Record($2);
																									free_Record($3);
																									free(s);}
					;

comparation : comparison			{$$ = $1;}
						| '!' comparison	{char * s = cat("!", $2->code, "", "", "");
															$$ = create_Record(s, $2->type);
															free_Record($2);
															free(s);}
						;

comparison : '(' compare ')'	{char * s = cat("(", $2->code, ")", "", "");
															$$ = create_Record(s, $2->type);
															free_Record($2);
															free(s);}
					| compare						{$$ = $1;}
					;

compare : expression evaluation_operator expression	{char * s = cat($1->code, $2->code, $3->code, "", "");
																										char * t;
																										if(strcmp($1->type, $3->type) != 0){
																											if((strcmp($1->type, "int") == 0 && strcmp($3->type, "real") == 0) || (strcmp($3->type, "int") == 0 && strcmp($1->type, "real") == 0)){
																												t = "real";
																											}
																											else{
																												return yyerror("Compare error: type mismatch");
																											}
																										} else{
																											t = $1->type;
																										}
																										free_Record($1);
																										free_Record($2);
																										free_Record($3);
																										$$ = create_Record(s, "boolean");
																										free(s);}
				;

evaluation_operator : EQUAL				{$$ = create_Record("==", "");}
										| NOT_EQUAL 	{$$ = create_Record("!=", "");}
										| '>' 				{$$ = create_Record(">", "");}
										| '<'					{$$ = create_Record("<", "");}
										| EQ_GREATER	{$$ = create_Record(">=", "");}
										| EQ_SMALLER	{$$ = create_Record("<=", "");}
										;

logic_operator : AND 	{$$ = create_Record("&&", "");}
								| OR 	{$$ = create_Record("||", "");}
								| EOR	{$$ = create_Record("^", "");}
								;

//Não tá funcionando
print : PRINT '(' print_content ')'	{char * s = cat("printf(", $3->code, ")", "", "");
																		free_Record($3);
																		$$ = create_Record(s, "");
																		free(s);}
	  	;

print_content : expression										{$$ = $1;}
							| expression ',' print_content	{char * s = cat($1->code, ",", $3->code, "", "");
																							free_Record($1);
																							free_Record($3);
																							$$ = create_Record(s, "");
																							free(s);}
							;

read : READ '(' ID ')'	{record * rec = search_record(SYMBOLS, $3);
												char * s;
												if(rec->type == "string"){
													s = cat("scanf(%s),", "&", $3, "", "");
													$$ = create_Record(s, "string");
												} else if(rec->type == "int"){
													s = cat("scanf(%d),", "&", $3, "", "");
													$$ = create_Record(s, "int");
												} else if(rec->type == "real"){
													s = cat("scanf(%f),", "&", $3, "", "");
													$$ = create_Record(s, "real");
												} else if(rec->type == "char"){
													s = cat("scanf(%c),", "&", $3, "", "");
													$$ = create_Record(s, "char");
												} else if(rec->type == "boolean"){
													s = cat("scanf(%d),", "&", $3, "", ""); //Boolean deve ser passado como 0 ou outro número maior que 0 na entrada
													$$ = create_Record(s, "boolean");
												} else{
													return yyerror("Read error");
												}}
	 		| READ '(' ')'		{}
	 		;

conditional : if_else	{$$ = $1;}
			| switch_case		{$$ = $1;}
			;

if_else : if else_section {char * s = cat($1->code, $2->code, "", "", "");
													free_Record($1);
													free_Record($2);
													$$ = create_Record(s, "");
													free(s);}
	    ;

if : IF '(' evaluation ')' block	{char * s = cat("if ", "(", $3->code, ")", $5->code);
																	free_Record($3);
																	free_Record($5);
																	$$ = create_Record(s, "");
																	free(s);}
   ;

else_section :  										{$$ = create_Record("","");}
						| else_if else_section	{char * s = cat($1->code, $2->code, "", "", "");
																		free_Record($1);
																		free_Record($2);
																		$$ = create_Record(s, "");
																		free(s);}
						| else 									{$$ = $1;}
						;

else_if : ELSE_IF '(' evaluation ')' block	{char * s = cat("else if ", "(", $3->code, ")", $5->code);
																						free_Record($3);
																						free_Record($5);
																						$$ = create_Record(s, "");
																						free(s);}
				;

else : ELSE block	{char * s = cat("else ", $2->code, "", "", "");
									free_Record($2);
									$$ = create_Record(s, "");
									free(s);}
	 	;

switch_case : switch '{' case_section default_section '}'	{char * s = cat($1->code, "{", $3->code, $4->code, "}");
																													free_Record($1);
																													free_Record($3);
																													free_Record($4);
																													$$ = create_Record(s, "");
																													free(s);}
						;

switch : SWITCH '(' id_value ')'	{char * s = cat("switch ", "(", $3->code, ")", "");
																	free_Record($3);
																	$$ = create_Record(s, "");
																	free(s);}
	   ;

case_section : case							{$$ = $1;}
			 			| case case_section	{char * s = cat($1->code, $2->code, "", "", "");
																free_Record($1);
																free_Record($2);
																$$ = create_Record(s, "");
																free(s);}
			 			;

case : CASE literal ':' body	{char * s = cat("case ", $2->code, ":", $4->code, "");
															free_Record($2);
															free_Record($4);
															$$ = create_Record(s, "");
															free(s);}
     ;

default_section :					{$$ = create_Record("","");}
								| default	{$$ = $1;}
								;

default : DEFAULT ':' body	{char * s = cat("default", ":", $3->code, "", "");
														free_Record($3);
														$$ = create_Record(s, "");
														free(s);}
				;

loop : while	{$$ = $1;}
		| for			{$$ = $1;}
		;

while : WHILE evaluation block	{char * s = cat("while ", $2->code, $3->code, "", "");
																free_Record($2);
																free_Record($3);
																$$ = create_Record(s, "");
																free(s);}
	  ;

for : FOR for_structure block	{char * s = cat("for ", $2->code, $3->code, "", "");
															free_Record($2);
															free_Record($3);
															$$ = create_Record(s, "");
															free(s);}
		;

for_structure : '(' for_expression ')'	{char * s = cat("(", $2->code, ")", "", "");
																				free_Record($2);
																				$$ = create_Record(s, "");
																				free(s);}
			  			;

for_expression : for_assignment ';' evaluation ';' assignment	{char * s = cat($1->code, ";", $3->code, ";", $5->code);
																															free_Record($1);
																															free_Record($3);
																															free_Record($5);
																															$$ = create_Record(s, "");
																															free(s);}
			   			;
			   
for_assignment 	: id '=' expression				{char * s = cat($1->code, "=", $3->code, "", "");
																					record * rec = search_record(SYMBOLS, $1->code);
																					char * t = "";
																					if(strcmp(rec->type, $3->type) != 0){
																						if((strcmp(rec->type, "int") == 0 && strcmp($3->type, "real") == 0) || (strcmp($3->type, "int") == 0 && strcmp(rec->type, "real") == 0)){
																							t = "real";
																						}
																						else{
																							return yyerror("For error: type mismatch");
																						}
																					} else{
																						t = rec->type;
																					}
																					free_Record($1);
																					free_Record($3);
																					$$ = create_Record(s, t);
																					free(s);}
								| TYPE id '=' expression	{char * s = cat(convert($1), " ", $2->code, "=", $4->code);
																					char * t;
																					if(strcmp(convert($1), $4->type) != 0){
																						if((strcmp(convert($1), "int") == 0 && strcmp($4->type, "real") == 0) || (strcmp($4->type, "int") == 0 && strcmp(convert($1), "real") == 0)){
																							t = "real";
																						}
																						else{
																							return yyerror("For assignment error: type mismatch");
																						}
																					} else{
																						t = convert($1);
																					}
																					record * rec = create_Record($2->code, t);
																					insert_record(SYMBOLS, rec);
																					free($1);
																					free_Record($2);
																					free_Record($4);
																					$$ = create_Record(s, t);
																					free(s);}
			  				;

return 	: RETURN expression	{char * s = cat("return ", $2->code, "", "", "");
														$$ = create_Record(s, $2->type);
														free_Record($2);
														free(s);}
	   		;

%%

int main(int argc, char ** argv){
	int code;

	if (argc != 3) {
		printf("Please provide a input file and an output destination. Closing application...\n");
		exit(0);
	}
    
	yyin = fopen(argv[1], "r");
	yyout = fopen(argv[2], "w");

	code = yyparse();

	fclose(yyin);
	fclose(yyout);

	return code;
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

char * cat(char * s1, char * s2, char * s3, char * s4, char * s5){
  int tam;
  char * output;

  tam = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4) + strlen(s5)+ 1;
  output = (char *) malloc(sizeof(char) * tam);
  
  if (!output){
    printf("Allocation problem. Closing application...\n");
    exit(0);
  }
  
  sprintf(output, "%s%s%s%s%s", s1, s2, s3, s4, s5);
  
  return output;
}

char * convert(char * type){
	if (strcmp(type, "string") == 0) {
		char * output = "char *";
		return output;
	};
	if (strcmp(type, "int") == 0) {
		char * output = "int";
		return output;
	};
	if (strcmp(type, "char") == 0) {
		char * output = "char";
		return output;
	};
	if (strcmp(type, "boolean") == 0) {
		char * output = "bool";
		return output;
	};
	if (strcmp(type, "real") == 0) {
		char * output = "float";
		return output;
	};
	return type;
}