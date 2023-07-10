%{
  #include <stdio.h>
  #include "y.tab.h"
  
  extern int yyerror (char *msg);  
%}

%%

[ \t\n]                                    {yylineno++;}
[0-9]+         	                           {yylval.sValue = strdup(yytext); return INT;}
[0-9]+"."[0-9]+         	                 {yylval.sValue = strdup(yytext); return REAL;}
([Tt][Rr][Uu][Ee]|[Ff][Aa][Ll][Ss][Ee])    {yylval.sValue = strdup(yytext); return BOOLEAN;}
\[a-zA-Z]                                  {yylval.sValue = strdup(yytext); return CHAR;}
\"(\\.|[^"\\])*\"                          {yylval.sValue = strdup(yytext); return STRING;}
"void"                                     {return VOID;}  
("int"|"char"|"string"|"real"|"boolean")	 {yylval.sValue = strdup(yytext); return TYPE;}
"null"                                     {return NULO;}
"const"                                    {return CONSTANT;}
"main"                                     {return MAIN_FUN;}
"for"                             			   {return FOR;}
"while"      			                         {return WHILE;}
"if"                                       {return IF;}
"else if"                                  {return ELSE_IF;}
"else"                                     {return ELSE;}
"switch"                                   {return SWITCH;}
"case"                                     {return CASE;}
"default"                                  {return DEFAULT;}
"break"                                    {return BREAK;}
"return"                                   {return RETURN;}
("fun"|"function")                         {return FUNCTION;}
"print"                                    {return PRINT;}
"read"                                     {return READ;}
"{"                                        {return yytext[0];}
"}"                                        {return yytext[0];}
"("                                        {return yytext[0];}
")"                                        {return yytext[0];}
"["                                        {return yytext[0];}
"]"                                        {return yytext[0];}
":"                                        {return yytext[0];}
","                                        {return yytext[0];}
";"                                        {return yytext[0];}
"$"                                        {return yytext[0];}
"="					                               {return yytext[0];}
"+="										                   {return PLUS_ASSIGN;}
"-="										                   {return MINUS_ASSIGN;}
"/="										                   {return DIV_ASSIGN;}
"*="										                   {return TIMES_ASSIGN;}
"++"										                   {return DOUBLE_PLUS;}
"--"										                   {return DOUBLE_MINUS;}
"+"                                        {return yytext[0];}
"-"                                        {return yytext[0];}
"/"                                        {return yytext[0];}
"*"                                        {return yytext[0];}
"**"                                       {return POWER;}
"%"                                        {return yytext[0];}
"&&"					                             {return AND;}
"||"					                             {return OR;}
"^^"					                             {return EOR;}
"!"						                             {return yytext[0];}                       
"=="                                       {return EQUAL;}
"!="                                       {return NOT_EQUAL;}
">"                                        {return yytext[0];}
"<"                                        {return yytext[0];}
">="                                       {return EQ_GREATER;}
"<="                                       {return EQ_SMALLER;}
(\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/)|(\/\/.*) {printf("Comment: %s.\n", yytext);}
[a-zA-Z][a-zA-Z0-9]*                       {yylval.sValue = strdup(yytext); return ID;}
.                                          {yyerror("invalid character");}

%%

#ifndef yywrap

int yywrap (void){
  return 1;
}

#endif
