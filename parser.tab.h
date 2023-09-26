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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORTS = 259,                 /* IMPORTS  */
    FUNCTION = 260,                /* FUNCTION  */
    id = 261,                      /* id  */
    VAR = 262,                     /* VAR  */
    EOL = 263,                     /* EOL  */
    CONST = 264,                   /* CONST  */
    CONST_ID = 265,                /* CONST_ID  */
    METHOD = 266,                  /* METHOD  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    SWITCH = 269,                  /* SWITCH  */
    CASE = 270,                    /* CASE  */
    FALLTHROUGH = 271,             /* FALLTHROUGH  */
    DEFAULT = 272,                 /* DEFAULT  */
    FOR = 273,                     /* FOR  */
    BREAK = 274,                   /* BREAK  */
    RANGE = 275,                   /* RANGE  */
    CONST_INT = 276,               /* CONST_INT  */
    CONST_FLOAT = 277,             /* CONST_FLOAT  */
    CONST_CHAR = 278,              /* CONST_CHAR  */
    CONST_STRING = 279,            /* CONST_STRING  */
    BOOL = 280,                    /* BOOL  */
    INT = 281,                     /* INT  */
    STRING = 282,                  /* STRING  */
    COMPLEX = 283,                 /* COMPLEX  */
    BYTE = 284,                    /* BYTE  */
    FLOAT = 285,                   /* FLOAT  */
    RUNE = 286,                    /* RUNE  */
    UINT = 287,                    /* UINT  */
    BOOL_TYPE = 288,               /* BOOL_TYPE  */
    EQ = 289,                      /* EQ  */
    INC = 290,                     /* INC  */
    DEC = 291,                     /* DEC  */
    SUBEQ = 292,                   /* SUBEQ  */
    PLUSEQ = 293,                  /* PLUSEQ  */
    MULEQ = 294,                   /* MULEQ  */
    DIVEQ = 295,                   /* DIVEQ  */
    MODEQ = 296,                   /* MODEQ  */
    EQUAL = 297,                   /* EQUAL  */
    NOTEQUAL = 298,                /* NOTEQUAL  */
    GREATEROREQUAL = 299,          /* GREATEROREQUAL  */
    LESSOREQUAL = 300,             /* LESSOREQUAL  */
    AND = 301,                     /* AND  */
    OR = 302,                      /* OR  */
    LSHIFT = 303,                  /* LSHIFT  */
    RSHIFT = 304,                  /* RSHIFT  */
    PEQ = 305,                     /* PEQ  */
    XOR = 306,                     /* XOR  */
    SEMICOLON = 307                /* SEMICOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
