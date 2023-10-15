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
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORTS = 259,                 /* IMPORTS  */
    FUNCTION = 260,                /* FUNCTION  */
    id = 261,                      /* id  */
    VAR = 262,                     /* VAR  */
    EOL = 263,                     /* EOL  */
    CONST = 264,                   /* CONST  */
    METHOD = 265,                  /* METHOD  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    SWITCH = 268,                  /* SWITCH  */
    CASE = 269,                    /* CASE  */
    FALLTHROUGH = 270,             /* FALLTHROUGH  */
    DEFAULT = 271,                 /* DEFAULT  */
    FOR = 272,                     /* FOR  */
    BREAK = 273,                   /* BREAK  */
    RANGE = 274,                   /* RANGE  */
    NEW = 275,                     /* NEW  */
    SELECT = 276,                  /* SELECT  */
    RETURN = 277,                  /* RETURN  */
    MAP = 278,                     /* MAP  */
    GO = 279,                      /* GO  */
    GOTO = 280,                    /* GOTO  */
    INTERFACE = 281,               /* INTERFACE  */
    CHAN = 282,                    /* CHAN  */
    CONTINUE = 283,                /* CONTINUE  */
    DEFER = 284,                   /* DEFER  */
    CONST_INT = 285,               /* CONST_INT  */
    CONST_CHAR = 286,              /* CONST_CHAR  */
    CONST_STRING = 287,            /* CONST_STRING  */
    BOOL = 288,                    /* BOOL  */
    IOTA = 289,                    /* IOTA  */
    CONST_OCTAL = 290,             /* CONST_OCTAL  */
    CONST_HEX = 291,               /* CONST_HEX  */
    CONST_BIN = 292,               /* CONST_BIN  */
    FLOAT_HEX = 293,               /* FLOAT_HEX  */
    DECIMAL_FLOAT_LIT = 294,       /* DECIMAL_FLOAT_LIT  */
    HEX_FLOAT_LIT = 295,           /* HEX_FLOAT_LIT  */
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
    AMP_EXP = 331,                 /* AMP_EXP  */
    POINT = 332                    /* POINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PACKAGE 258
#define IMPORTS 259
#define FUNCTION 260
#define id 261
#define VAR 262
#define EOL 263
#define CONST 264
#define METHOD 265
#define IF 266
#define ELSE 267
#define SWITCH 268
#define CASE 269
#define FALLTHROUGH 270
#define DEFAULT 271
#define FOR 272
#define BREAK 273
#define RANGE 274
#define NEW 275
#define SELECT 276
#define RETURN 277
#define MAP 278
#define GO 279
#define GOTO 280
#define INTERFACE 281
#define CHAN 282
#define CONTINUE 283
#define DEFER 284
#define CONST_INT 285
#define CONST_CHAR 286
#define CONST_STRING 287
#define BOOL 288
#define IOTA 289
#define CONST_OCTAL 290
#define CONST_HEX 291
#define CONST_BIN 292
#define FLOAT_HEX 293
#define DECIMAL_FLOAT_LIT 294
#define HEX_FLOAT_LIT 295
#define CONST_INT_ERR 296
#define CONST_BIN_ERR 297
#define INT 298
#define STRING 299
#define COMPLEXTYPE 300
#define BYTE 301
#define FLOAT 302
#define RUNE 303
#define UINT 304
#define BOOL_TYPE 305
#define TYPE 306
#define STRUCT 307
#define UINTPTR 308
#define ERRORTYPE 309
#define ANYTYPE 310
#define COMPARABLE 311
#define EQ 312
#define INC 313
#define DEC 314
#define SUBEQ 315
#define PLUSEQ 316
#define MULEQ 317
#define DIVEQ 318
#define MODEQ 319
#define EQUAL 320
#define NOTEQUAL 321
#define GREATEROREQUAL 322
#define LESSOREQUAL 323
#define AND 324
#define OR 325
#define LSHIFT 326
#define RSHIFT 327
#define PEQ 328
#define XOR 329
#define SEMICOLON 330
#define AMP_EXP 331
#define POINT 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
