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
    NEW = 276,                     /* NEW  */
    SELECT = 277,                  /* SELECT  */
    RETURN = 278,                  /* RETURN  */
    MAP = 279,                     /* MAP  */
    GO = 280,                      /* GO  */
    GOTO = 281,                    /* GOTO  */
    INTERFACE = 282,               /* INTERFACE  */
    CHAN = 283,                    /* CHAN  */
    CONTINUE = 284,                /* CONTINUE  */
    DEFER = 285,                   /* DEFER  */
    CONST_INT = 286,               /* CONST_INT  */
    CONST_CHAR = 287,              /* CONST_CHAR  */
    CONST_STRING = 288,            /* CONST_STRING  */
    BOOL = 289,                    /* BOOL  */
    IOTA = 290,                    /* IOTA  */
    NEG_CONST_INT = 291,           /* NEG_CONST_INT  */
    CONST_OCTAL = 292,             /* CONST_OCTAL  */
    CONST_HEX = 293,               /* CONST_HEX  */
    CONST_BIN = 294,               /* CONST_BIN  */
    FLOAT_HEX = 295,               /* FLOAT_HEX  */
    CONST_INT_ERR = 296,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 297,           /* CONST_BIN_ERR  */
    INT = 298,                     /* INT  */
    STRING = 299,                  /* STRING  */
    COMPLEXTYPE = 300,             /* COMPLEXTYPE  */
    BYTE = 301,                    /* BYTE  */
    FLOAT = 302,                   /* FLOAT  */
    RUNE = 303,                    /* RUNE  */
    UINT = 304,                    /* UINT  */
    BOOL_TYPE = 305,               /* BOOL_TYPE  */
    TYPE = 306,                    /* TYPE  */
    STRUCT = 307,                  /* STRUCT  */
    UINTPTR = 308,                 /* UINTPTR  */
    ERRORTYPE = 309,               /* ERRORTYPE  */
    ANYTYPE = 310,                 /* ANYTYPE  */
    COMPARABLE = 311,              /* COMPARABLE  */
    EQ = 312,                      /* EQ  */
    INC = 313,                     /* INC  */
    DEC = 314,                     /* DEC  */
    SUBEQ = 315,                   /* SUBEQ  */
    PLUSEQ = 316,                  /* PLUSEQ  */
    MULEQ = 317,                   /* MULEQ  */
    DIVEQ = 318,                   /* DIVEQ  */
    MODEQ = 319,                   /* MODEQ  */
    EQUAL = 320,                   /* EQUAL  */
    NOTEQUAL = 321,                /* NOTEQUAL  */
    GREATEROREQUAL = 322,          /* GREATEROREQUAL  */
    LESSOREQUAL = 323,             /* LESSOREQUAL  */
    AND = 324,                     /* AND  */
    OR = 325,                      /* OR  */
    LSHIFT = 326,                  /* LSHIFT  */
    RSHIFT = 327,                  /* RSHIFT  */
    PEQ = 328,                     /* PEQ  */
    XOR = 329,                     /* XOR  */
    SEMICOLON = 330,               /* SEMICOLON  */
    EXPONENT = 331,                /* EXPONENT  */
    HEX_EXPONENT = 332             /* HEX_EXPONENT  */
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
