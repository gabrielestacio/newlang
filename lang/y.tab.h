/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    REAL = 260,                    /* REAL  */
    BOOLEAN = 261,                 /* BOOLEAN  */
    CHAR = 262,                    /* CHAR  */
    STRING = 263,                  /* STRING  */
    VOID = 264,                    /* VOID  */
    TYPE = 265,                    /* TYPE  */
    NULO = 266,                    /* NULO  */
    CONSTANT = 267,                /* CONSTANT  */
    MAIN = 268,                    /* MAIN  */
    FUNCTION = 269,                /* FUNCTION  */
    FOR = 270,                     /* FOR  */
    WHILE = 271,                   /* WHILE  */
    IF = 272,                      /* IF  */
    ELSE_IF = 273,                 /* ELSE_IF  */
    ELSE = 274,                    /* ELSE  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    DEFAULT = 277,                 /* DEFAULT  */
    BREAK = 278,                   /* BREAK  */
    RETURN = 279,                  /* RETURN  */
    PLUS_ASSIGN = 280,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 281,            /* MINUS_ASSIGN  */
    DIV_ASSIGN = 282,              /* DIV_ASSIGN  */
    TIMES_ASSIGN = 283,            /* TIMES_ASSIGN  */
    DOUBLE_PLUS = 284,             /* DOUBLE_PLUS  */
    DOUBLE_MINUS = 285,            /* DOUBLE_MINUS  */
    POWER = 286,                   /* POWER  */
    AND = 287,                     /* AND  */
    OR = 288,                      /* OR  */
    EOR = 289,                     /* EOR  */
    EQUAL = 290,                   /* EQUAL  */
    NOT_EQUAL = 291,               /* NOT_EQUAL  */
    EQ_GREATER = 292,              /* EQ_GREATER  */
    EQ_SMALLER = 293               /* EQ_SMALLER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT 259
#define REAL 260
#define BOOLEAN 261
#define CHAR 262
#define STRING 263
#define VOID 264
#define TYPE 265
#define NULO 266
#define CONSTANT 267
#define MAIN 268
#define FUNCTION 269
#define FOR 270
#define WHILE 271
#define IF 272
#define ELSE_IF 273
#define ELSE 274
#define SWITCH 275
#define CASE 276
#define DEFAULT 277
#define BREAK 278
#define RETURN 279
#define PLUS_ASSIGN 280
#define MINUS_ASSIGN 281
#define DIV_ASSIGN 282
#define TIMES_ASSIGN 283
#define DOUBLE_PLUS 284
#define DOUBLE_MINUS 285
#define POWER 286
#define AND 287
#define OR 288
#define EOR 289
#define EQUAL 290
#define NOT_EQUAL 291
#define EQ_GREATER 292
#define EQ_SMALLER 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "parser.y"

	char * sValue; 
	struct record * rec;

#line 148 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
