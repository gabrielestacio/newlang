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
    PRINT = 266,                   /* PRINT  */
    READ = 267,                    /* READ  */
    NULO = 268,                    /* NULO  */
    CONSTANT = 269,                /* CONSTANT  */
    MAIN_FUN = 270,                /* MAIN_FUN  */
    FUNCTION = 271,                /* FUNCTION  */
    FOR = 272,                     /* FOR  */
    WHILE = 273,                   /* WHILE  */
    IF = 274,                      /* IF  */
    ELSE_IF = 275,                 /* ELSE_IF  */
    ELSE = 276,                    /* ELSE  */
    SWITCH = 277,                  /* SWITCH  */
    CASE = 278,                    /* CASE  */
    DEFAULT = 279,                 /* DEFAULT  */
    BREAK = 280,                   /* BREAK  */
    RETURN = 281,                  /* RETURN  */
    PLUS_ASSIGN = 282,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 283,            /* MINUS_ASSIGN  */
    DIV_ASSIGN = 284,              /* DIV_ASSIGN  */
    TIMES_ASSIGN = 285,            /* TIMES_ASSIGN  */
    DOUBLE_PLUS = 286,             /* DOUBLE_PLUS  */
    DOUBLE_MINUS = 287,            /* DOUBLE_MINUS  */
    POWER = 288,                   /* POWER  */
    AND = 289,                     /* AND  */
    OR = 290,                      /* OR  */
    EOR = 291,                     /* EOR  */
    EQUAL = 292,                   /* EQUAL  */
    NOT_EQUAL = 293,               /* NOT_EQUAL  */
    EQ_GREATER = 294,              /* EQ_GREATER  */
    EQ_SMALLER = 295               /* EQ_SMALLER  */
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
#define PRINT 266
#define READ 267
#define NULO 268
#define CONSTANT 269
#define MAIN_FUN 270
#define FUNCTION 271
#define FOR 272
#define WHILE 273
#define IF 274
#define ELSE_IF 275
#define ELSE 276
#define SWITCH 277
#define CASE 278
#define DEFAULT 279
#define BREAK 280
#define RETURN 281
#define PLUS_ASSIGN 282
#define MINUS_ASSIGN 283
#define DIV_ASSIGN 284
#define TIMES_ASSIGN 285
#define DOUBLE_PLUS 286
#define DOUBLE_MINUS 287
#define POWER 288
#define AND 289
#define OR 290
#define EOR 291
#define EQUAL 292
#define NOT_EQUAL 293
#define EQ_GREATER 294
#define EQ_SMALLER 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "parser.y"

	char * sValue; 
	struct record * rec;

#line 152 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
