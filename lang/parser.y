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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "record.h"

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
%token <sValue> PRINT READ
%token NULO CONSTANT
%token MAIN_FUN FUNCTION
%token FOR WHILE IF ELSE_IF ELSE SWITCH CASE DEFAULT BREAK RETURN
%token PLUS_ASSIGN MINUS_ASSIGN DIV_ASSIGN TIMES_ASSIGN DOUBLE_PLUS DOUBLE_MINUS
%token POWER
%token AND OR EOR EQUAL NOT_EQUAL EQ_GREATER EQ_SMALLER

%type <rec> declarations_section declarations_list declaration id_list id_declaration id dimensions dimensions_novalue dimensions_value
%type <rec> expression expression_operator term term_operator factor base id_value literal double_sign function_call arguments arguments_list argument
%type <rec> subprograms_section subprogram subprogram_type subprogram_id signature parameters parameter_list parameter statement_list statement return
%type <rec> block body header
%type <rec> print print_content read
%type <rec> assignment assignment_operation assignment_sign
%type <rec> conditional if_else if else_section else_if else switch_case switch case_section case default_section default
%type <rec> loop while for for_structure for_expression for_assignment
%type <rec> evaluation evaluation_operator comparation comparison compare logic_operator

%start program

%%

program : declarations_section subprograms_section								{fprintf(yyout, "%s\n%s", $1->code, $2->code);
																				freeRecord($1);
																				freeRecord($2);}	
		;

declarations_section :  														{$$ = createRecord("","");}
         	 		 | declarations_list										{$$ = $1;}
		 	 		 ;

declarations_list : declaration ';'												{char * s = cat($1->code, ";\n", "", "", "");
																				freeRecord($1);
																				$$ = createRecord(s, "");
																				free(s);}
          	 	  | declaration ';' declarations_list							{char * s = cat($1->code, ";\n", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		     	  ;

declaration: TYPE id_list														{char * s = cat(convert($1), " ", $2->code, "", "");
																				free($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	 	   | CONSTANT TYPE id_list												{char * s = cat("const ", convert($2), " ", $3->code, "");
																				free($2);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		   ;


id_list : id_declaration														{$$ = $1;}
	    | id_declaration ',' id_list  											{char * s = cat($1->code, ",", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
	    ;

//Verificação de tipos
id_declaration: id 																{$$ = $1;}
			  | id '=' expression 												{char * s = cat($1->code, "=", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
			  ;

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
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		   | term 																{$$ = $1;}
		   ;

expression_operator : '+'  														{$$ = createRecord("+", "");}
	 				| '-' 														{$$ = createRecord("-", "");}
	  				;

//Recursão à esquerda permitida
//Verificação de tipos
term : term term_operator factor 												{char * s = cat($1->code, $2->code, $3->code, "", "");
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
	 | factor 																	{$$ = $1;}
	 ;

term_operator : '*'  															{$$ = createRecord("*", "");}
	   		  | '/'  															{$$ = createRecord("/", "");}
	   		  | '%'																{$$ = createRecord("%", "");}
	   		  ;

//Verificação de tipos
factor : base POWER factor 														{char * s = cat("pow(", $1->code, ",", $3->code, ")");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
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
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, $1->type);
																				free(s);}
	 ;

literal : INT 																	{$$ = createRecord($1, "");
																				free($1);}
	    | REAL																	{$$ = createRecord($1, "");
																				free($1);}
	    | BOOLEAN																{$$ = createRecord($1, "");
																				free($1);}
	    | CHAR																	{$$ = createRecord($1, "");
																				free($1);}
	    | STRING 																{$$ = createRecord($1, "");
																				free($1);}
	    ;

id_value : id																	{$$ = $1;}
		 | function_call														{$$ = $1;}
		 ;

function_call : ID '(' arguments ')' 											{char * s = cat($1, "(", $3->code, ")", "");
																				free($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		      ;

arguments : 																	{$$ = createRecord("","");}
	 	  | arguments_list														{$$ = $1;} 	
	 	  ;

arguments_list : argument 														{$$ = $1;}
		  	   | argument ',' arguments_list 									{char * s = cat($1->code, ",", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
		  	   ;

argument : id_declaration														{$$ = $1;}
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
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	       ;

header : FUNCTION signature														{char * s = cat($2->code, "", "", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
	   ;

signature : subprogram_type subprogram_id '(' parameters ')'					{char * s = cat($1->code, $2->code, "(", $4->code, ")");
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($4);
																				$$ = createRecord(s, "");
																				free(s);}
		  ;

subprogram_type : TYPE 															{$$ = createRecord(convert($1), "");
																				free($1);}
		  		| VOID 															{$$ = createRecord("void", "");}
		  		;

subprogram_id : ID																{$$ = createRecord($1, "");
																				free($1);}
			  | MAIN_FUN														{$$ = createRecord("main", "");}
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
																				free($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
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
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
		   ;

assignment_operation : assignment_sign expression 								{char * s = cat($1->code, $2->code, "", "", "");
																				freeRecord($1);
																				freeRecord($2);
																				$$ = createRecord(s, "");
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
																				$$ = createRecord(s, "");
																				free(s);}
		   ;

comparation : comparison 														{$$ = $1;}
			| '!' comparison 													{char * s = cat("!", $2->code, "", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
			;

comparison : '(' compare ')' 													{char * s = cat("(", $2->code, ")", "", "");
																				freeRecord($2);
																				$$ = createRecord(s, "");
																				free(s);}
		   | compare 															{$$ = $1;}
		   ;

compare : id evaluation_operator expression 									{char * s = cat($1->code, $2->code, $3->code, "", "");
																				freeRecord($1);
																				freeRecord($2);
																				freeRecord($3);
																				$$ = createRecord(s, "");
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
read : READ '(' ID ')'															{/*char * s = cat("scanf()");*/}
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
			   
//Verificação de tipos
for_assignment : id '=' expression												{char * s = cat($1->code, "=", $3->code, "", "");
																				freeRecord($1);
																				freeRecord($3);
																				$$ = createRecord(s, "");
																				free(s);}
			   | TYPE id '=' expression											{char * s = cat(convert($1), " ", $2->code, "=", $4->code);
																				free($1);
																				freeRecord($2);
																				freeRecord($4);
																				$$ = createRecord(s, "");
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
	if (strcmp(type, "string")) {
		char * output = "string";
		return output;
	};
	if (strcmp(type, "int")) {
		char * output = "int";
		return output;
	};
	if (strcmp(type, "char")) {
		char * output = "char";
		return output;
	};
	if (strcmp(type, "boolean")) {
		char * output = "bool";
		return output;
	};
	if (strcmp(type, "real")) {
		char * output = "float";
		return output;
	};
	return type;
}