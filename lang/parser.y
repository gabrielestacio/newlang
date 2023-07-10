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

/*
REGRAS PRA LER E IMPRIMIR
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
//hash_table * SYMBOLS = create_table();

char * cat(char *, char *, char *, char *, char *);
char * convert(char * type);

%}

%union {
	char * sValue; 
	struct record * rec;
};

%token <sValue> ID
%token <sValue> INT REAL BOOLEAN CHAR STRING VOID TYPE
%token <sValue> PRINT READ
%token NULO CONSTANT
%token MAIN_FUN FUNCTION
%token FOR WHILE IF ELSE_IF ELSE SWITCH CASE DEFAULT BREAK RETURN
%token PLUS_ASSIGN MINUS_ASSIGN DIV_ASSIGN TIMES_ASSIGN DOUBLE_PLUS DOUBLE_MINUS
%token POWER
%token AND OR EOR EQUAL NOT_EQUAL EQ_GREATER EQ_SMALLER

%type <rec> declarations_section declarations_list declaration id_list id_declaration id dimensions dimensions_novalue dimensions_value
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

program : declarations_section subprograms_section	{fprintf(yyout, "%s\n%s", $1->code, $2->code);
																										freeRecord($1);
																										freeRecord($2);}	
				| subprograms_section												{fprintf(yyout, "%s", $1->code);
																										freeRecord($1);}
				;

declarations_section :	declarations_list	{$$ = $1;}
		 	 		 					;

declarations_list : declaration ';'									{char * s = cat($1->code, ";\n", "", "", "");
																										freeRecord($1);
																										$$ = createRecord(s, "");
																										free(s);}
          		 	  | declaration ';' declarations_list	{char * s = cat($1->code, ";\n", $3->code, "", "");
																										freeRecord($1);
																										freeRecord($3);
																										$$ = createRecord(s, "");
																										free(s);}
		     	  			;

declaration: TYPE id_list														{char * s = cat(convert($1), " ", $2->code, "", "");
																				record * rec = createRecord($2->code, $1);
																				free($1);
																				freeRecord($2);
																				insert_record(SYMBOLS, rec);
																				$$ = createRecord(s, $1);
																				free(s);}
	 	   | CONSTANT TYPE id_list												{char * s = cat("const ", convert($2), " ", $3->code, "");
																				record * rec = createRecord($3->code, $2);
																				freeRecord($3);
																				insert_record(SYMBOLS, rec);
																				$$ = createRecord(s, $2);
																				free($2);
																				free(s);}
		   ;


id_list : id_declaration														{$$ = $1;}
	    | id_declaration ',' id_list  											{char * s = cat($1->code, ",", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
	    ;

//Como fazer a verificação de tipos aqui?
id_declaration: id 																{$$ = $1;}
			  | id '=' expression 												{char * s = cat($1->code, "=", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, $3->type);
																				free(s);}
			  ;

//Como fazer a verificação de tipos aqui?
id : ID dimensions																{char * s = cat($1, " ", $2->code, "", "");
																				free($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
   ;

dimensions :  																	{$$ = createRecord("","");}
		   | dimensions_novalue 												{$$ = $1;}
		   | dimensions_value  													{$$ = $1;}
		   ;

dimensions_novalue : '[' ']'  													{$$ = createRecord("[]", "");}
		   		   | '[' ']' dimensions_novalue 								{char * s = cat("[]", $3->code, "", "", "");
																				freeRecord($3);
																				$$ = createRecord(s, "");}
		           ;

dimensions_value : '[' INT ']'  												{char * s = cat("[", $2, "]", "", "");
																				free($2);
																				$$ = createRecord(s, "");}
			     | '[' INT ']' dimensions_value 								{char * s = cat("[", $2, "]", $4->code, "");
																				free($2);
																				freeRecord($4);
																				$$ = createRecord(s, "");}
			     ;

//Recursão à esquerda permitida
//Verificação de tipos
expression : expression expression_operator term 								{char * s = cat($1->code, $2->code, $3->code, "", "");
																				char * t;
																				if($1->type != $3->type){
																					if((($1->type == "int") && ($3->type == "real")) || (($1->type == "real") && ($3->type == "int"))){
																						t = "float";
																					}
																					else{
																						break; //?
																					}
																				} else{
																					t = $1->type;
																				}
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, t);
																				free(s);}
		   | term 																{$$ = $1;}
		   ;

expression_operator : '+'  														{$$ = createRecord("+", "");}
	 				| '-' 														{$$ = createRecord("-", "");}
	  				;

//Recursão à esquerda permitida
//Verificação de tipos
term : term term_operator factor 												{char * s = cat($1->code, $2->code, $3->code, "", "");
																				char * t;
																				if($1->type != $3->type){
																					if((($1->type == "int") && ($3->type == "real")) || (($1->type == "real") && ($3->type == "int"))){
																						t = "float";
																					}
																					else{
																						break; //?
																					}
																				} else{
																					t = $1->type;
																				}
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, t);
																				free(s);}
	 | factor 																	{$$ = $1;}
	 ;

term_operator : '*'  															{$$ = createRecord("*", "");}
	   		  | '/'  															{$$ = createRecord("/", "");}
	   		  | '%'																{$$ = createRecord("%", "");}
	   		  ;

//Verificação de tipos
factor : base POWER factor 														{char * s = cat("pow(", $1->code, ",", $3->code, ")");
																				freeRecord($3);
																				$$ = createRecord(s, $1->type);
																				freeRecord($1);
																				free(s);}
	   | base 																	{$$ = $1;}
	   ;

base : '(' expression ')' 														{char * s = cat("(", $2->code, ")", "", "");
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
	 | literal 																	{$$ = $1;}
	 | id_value 																{$$ = $1;}
	 | id_value double_sign 													{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, $1->type);
																				freeRecord($1);
																				free(s);}
	 ;

literal : INT 																	{$$ = createRecord($1, "int");
																				free($1);}
	    | REAL																	{$$ = createRecord($1, "real");
																				free($1);}
	    | BOOLEAN																{$$ = createRecord($1, "boolean");
																				free($1);}
	    | CHAR																	{$$ = createRecord($1, "char");
																				free($1);}
	    | STRING 																{$$ = createRecord($1, "string");
																				free($1);}
	    ;

id_value : id																	{record * rec = search_record(SYMBOLS, $1->code);
																				$$ = createRecord($1->code, rec->type);}
		 | function_call														{$$ = $1;}
		 ;

function_call : ID '(' arguments ')' 											{char * s = cat($1, "(", $3->code, ")", "");
																				record * rec = search_record(SYMBOLS, $1);
																				free($1);
																				freeRecord($3);
																				$$ = createRecord(s, rec->type);
																				free(s);}
		      ;

arguments : 																	{$$ = createRecord("","");}
	 	  | arguments_list														{$$ = $1;} 	
	 	  ;

arguments_list : argument 														{$$ = $1;}
		  	   | argument ',' arguments_list 									{char * s = cat($1->code, ",", $3->code, "", "");
																				freeRecord($3);
																				freeRecord($1);
																				$$ = createRecord(s, "");
																				free(s);}
		  	   ;

argument : id_declaration														{record * rec = search_record(SYMBOLS, $1->code);
																				$$ = createRecord($1->code, rec->type);}
		 | literal 																{$$ = $1;}
		 | function_call														{$$ = $1;}
		 ;

double_sign : DOUBLE_PLUS 														{$$ = createRecord("++", "");}
			| DOUBLE_MINUS 														{$$ = createRecord("--", "");}
			;

subprograms_section : subprogram 												{$$ = $1;}
				    | subprogram subprograms_section 							{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	  				;

subprogram : header block 														{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
	       ;

header : FUNCTION signature														{char * s = cat($2->code, "", "", "", "");
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
	   ;

signature : subprogram_type subprogram_id '(' parameters ')'	{char * s = cat($1->code, $2->code, "(", $4->code, ")");
																															record * rec = createRecord($2->code, $1->type);
																															insert_record(SYMBOLS, rec);
																															freeRecord($2);
																															freeRecord($4);
																															$$ = createRecord(s, $1->type);
																															freeRecord($1);
																															free(s);}
		  		| subprogram_main '(' ')'														{char * s = cat($1->code, "()", "", "", "");
																															freeRecord($1);
																															$$ = createRecord(s, "void");
																															free(s);}
					;

subprogram_type : TYPE	{$$ = createRecord(convert($1), $1);
												free($1);}
		  					| VOID	{$$ = createRecord("void", "void");}
		  					;

subprogram_main :  MAIN_FUN	{$$ = createRecord("main", "void");}
								;

subprogram_id : ID	{record * rec = search_record(SYMBOLS, $1);
										$$ = createRecord($1, rec->type);}
							;

parameters : 																	{$$ = createRecord("","");}
	   	  		| parameter_list 													{$$ = $1;}
	       		;

parameter_list : parameter 														{$$ = $1;}
		       		| parameter ',' parameter_list 									{char * s = cat($1->code, ",", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		       		;

parameter : TYPE id 															{char * s = cat(convert($1), $2->code, "", "", "");
																				record * rec = createRecord($2->code, convert($1));
																				insert_record(SYMBOLS, rec);
																				free($1);
																				freeRecord($2);
																				$$ = createRecord(s, $1);
																				free(s);}
	  	  ;

block : '{' body '}'															{char * s = cat("{", $2->code, "}", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	  ;

body : 																			{$$ = createRecord("","");}
	 | declarations_list														{$$ = $1;}
	 | declarations_list statement_list											{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	 | statement_list															{$$ = $1;}
	 ;

statement_list : statement ';'													{char * s = cat($1->code, ";\n", "", "", "");
																				freeRecord($1);
																				$$ = createRecord(s, "");
																				free(s);}
	    	   | statement ';' statement_list 									{char * s = cat($1->code, ";\n", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		       ;

statement : assignment 															{$$ = $1;}
		  | print 																{$$ = $1;}
		  | read																{$$ = $1;}
	 	  | conditional 														{$$ = $1;}
	 	  | loop 																{$$ = $1;}
	 	  | return																{$$ = $1;}
	 	  | BREAK																{$$ = createRecord("break", "");}
	 	  ;

assignment : id assignment_operation											{char * s = cat($1->code, $2->code, "", "", "");
																				char * t;
																				if($1->type != $2->type){
																					if((($1->type == "int") && ($2->type == "real")) || (($1->type == "real") && ($2->type == "int"))){
																						t = "float";
																					}
																					else if($1->type == ""){
																						t = $2->type;
																					}
																					else{
																						break; //?
																					}
																				} else{
																					t = $1->type;
																				}
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, t);
																				free(s);}
		   ;

assignment_operation : assignment_sign expression 								{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
		   			 | double_sign 												{$$ = $1;}
		   			 ;

assignment_sign : '=' 															{$$ = createRecord("=", "");}
				| PLUS_ASSIGN 													{$$ = createRecord("+=", "");}
				| MINUS_ASSIGN 													{$$ = createRecord("-=", "");}
				| DIV_ASSIGN 													{$$ = createRecord("/=", "");}
				| TIMES_ASSIGN 													{$$ = createRecord("*=", "");}
				;

evaluation : comparation 														{$$ = $1;}
		   | comparation logic_operator evaluation 								{char * s = cat($1->code, $2->code, $3->code, "", "");
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, $1->type);
																				free(s);}
		   ;

comparation : comparison 														{$$ = $1;}
			| '!' comparison 													{char * s = cat("!", $2->code, "", "", "");
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
			;

comparison : '(' compare ')' 													{char * s = cat("(", $2->code, ")", "", "");
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
		   | compare 															{$$ = $1;}
		   ;

compare : id evaluation_operator expression 									{char * s = cat($1->code, $2->code, $3->code, "", "");
																				char * t;
																				if($1->type != $3->type){
																					if((($1->type == "int") && ($3->type == "real")) || (($1->type == "real") && ($3->type == "int"))){
																						t = "float";
																					}
																					else{
																						break; //?
																					}
																				} else{
																					t = $1->type;
																				}
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, "boolean");
																				free(s);}
		;

evaluation_operator : EQUAL 													{$$ = createRecord("==", "");}
				    | NOT_EQUAL 												{$$ = createRecord("!=", "");}
				    | '>' 														{$$ = createRecord(">", "");}
				    | '<'														{$$ = createRecord("<", "");}
				    | EQ_GREATER 												{$$ = createRecord(">=", "");}
				    | EQ_SMALLER 												{$$ = createRecord("<=", "");}
				    ;

logic_operator : AND 															{$$ = createRecord("&&", "");}
			   | OR 															{$$ = createRecord("||", "");}
			   | EOR 															{$$ = createRecord("^", "");}
			   ;

//Não tá funcionando
print : PRINT '(' print_content ')'												{char * s = cat("printf(", $3->code, ")", "", "");
																				free($3);
																				$$ = createRecord(s, "");
																				free(s);}
	  ;

print_content : expression														{$$ = $1;}
			  | expression ',' print_content									{char * s = cat($1->code, ",", $3->code, "", "");
			  																	freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
			  ;

//Tem que ver a questão dos tipos
read : READ '(' ID ')'															{record * rec = search_record(SYMBOLS, $3);
																				char * s;
																				if(rec->type == "string"){
																					s = cat("scanf(%s),", "&", $3, "", "");
																					$$ = createRecord(s, "string");
																				} else if(rec->type == "int"){
																					s = cat("scanf(%d),", "&", $3, "", "");
																					$$ = createRecord(s, "int");
																				} else if(rec->type == "real"){
																					s = cat("scanf(%f),", "&", $3, "", "");
																					$$ = createRecord(s, "real");
																				} else if(rec->type == "char"){
																					s = cat("scanf(%c),", "&", $3, "", "");
																					$$ = createRecord(s, "char");
																				} else if(rec->type == "boolean"){
																					s = cat("scanf(%d),", "&", $3, "", ""); //Boolean deve ser passado como 0 ou outro número maior que 0 na entrada
																					$$ = createRecord(s, "boolean");
																				} else{
																					break; //?
																				}}
	 | READ '(' ')'																{}
	 ;

conditional : if_else															{$$ = $1;}
			| switch_case														{$$ = $1;}
			;

if_else : if else_section 														{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	    ;

if : IF '(' evaluation ')' block 												{char * s = cat("if ", "(", $3->code, ")", $5->code);
																				freeRecord($3);
																				freeRecord($5);
																				$$ = createRecord(s, "");
																				free(s);}
   ;

else_section :  																{$$ = createRecord("","");}
			 | else_if else_section												{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
			 | else 															{$$ = $1;}
			 ;

else_if : ELSE_IF '(' evaluation ')' block										{char * s = cat("else if ", "(", $3->code, ")", $5->code);
																				freeRecord($3);
																				freeRecord($5);
																				$$ = createRecord(s, "");
																				free(s);}
		;

else : ELSE block																{char * s = cat("else ", $2->code, "", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	 ;

switch_case : switch '{' case_section default_section '}' 						{char * s = cat($1->code, "{", $3->code, $4->code, "}");
																				freeRecord($1);
																				freeRecord($3);
																				freeRecord($4);
																				$$ = createRecord(s, "");
																				free(s);}
			;

switch : SWITCH '(' id_value ')'												{char * s = cat("switch ", "(", $3->code, ")", "");
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
	   ;

case_section : case 															{$$ = $1;}
			 | case case_section 												{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
			 ;

case : CASE literal ':' body													{char * s = cat("case ", $2->code, ":", $4->code, "");
																				freeRecord($2);
																				freeRecord($4);
																				$$ = createRecord(s, "");
																				free(s);}
     ;

default_section : 																{$$ = createRecord("","");}
				| default														{$$ = $1;}
				;

default : DEFAULT ':' body														{char * s = cat("default", ":", $3->code, "", "");
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		;

loop : while																	{$$ = $1;}
	 | for																		{$$ = $1;}
	 ;

while : WHILE evaluation block													{char * s = cat("while ", $2->code, $3->code, "", "");
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
	  ;

for : FOR for_structure block													{char * s = cat("for ", $2->code, $3->code, "", "");
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
	;

for_structure : '(' for_expression ')'											{char * s = cat("(", $2->code, ")", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
			  ;

for_expression : for_assignment ';' evaluation ';' assignment					{char * s = cat($1->code, ";", $3->code, ";", $5->code);
																				freeRecord($1);
																				freeRecord($3);
																				freeRecord($5);
																				$$ = createRecord(s, "");
																				free(s);}
			   ;
			   
for_assignment : id '=' expression												{char * s = cat($1->code, "=", $3->code, "", "");
																				record * rec = search_record(SYMBOLS, $1->code);
																				char * t = "";
																				if(rec->type != $3->type){
																					if(((rec->type == "int") && ($3->type == "real")) || ((rec->type == "real") && ($3->type == "int"))){
																						t = "float";
																					}
																					else{
																						break; //?
																					}
																				} else{
																					t = rec->type;
																				}
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, t);
																				free(s);}
			   | TYPE id '=' expression											{char * s = cat(convert($1), " ", $2->code, "=", $4->code);
																				char * t;
																				if(convert($1) != $4->type){
																					if(((convert($1) == "int") && ($4->type == "real")) || ((convert($1) == "real") && ($4->type == "int"))){
																						t = "float";
																					}
																					else{
																						break; //?
																					}
																				} else{
																					t = convert($1);
																				}
																				record * rec = createRecord($2->code, t);
																				insert_record(SYMBOLS, rec);
																				free($1);
																				freeRecord($2);
																				freeRecord($4);
																				$$ = createRecord(s, t);
																				free(s);}
			   ;

return : RETURN expression 														{char * s = cat("return ", $2->code, "", "", "");
																				$$ = createRecord(s, $2->type);
																				freeRecord($2);
																				free(s);}
	   ;

%%

int main(int argc, char ** argv){
	int codigo;

	if (argc != 3) {
       printf("Closing application...\n");
       exit(0);
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    codigo = yyparse();

    fclose(yyin);
    fclose(yyout);

	return codigo;
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
	if (strcmp(type, "string") != 0) {
		char * output = "string";
		return output;
	};
	if (strcmp(type, "int") != 0) {
		char * output = "int";
		return output;
	};
	if (strcmp(type, "char") != 0) {
		char * output = "char";
		return output;
	};
	if (strcmp(type, "boolean") != 0) {
		char * output = "bool";
		return output;
	};
	if (strcmp(type, "real") != 0) {
		char * output = "float";
		return output;
	};
	return type;
}