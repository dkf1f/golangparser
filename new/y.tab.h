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
    RUNE_LIT = 296,                /* RUNE_LIT  */
    IMAGINARY_LIT = 297,           /* IMAGINARY_LIT  */
    CONST_INT_ERR = 298,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 299,           /* CONST_BIN_ERR  */
    INT = 300,                     /* INT  */
    STRING = 301,                  /* STRING  */
    COMPLEXTYPE = 302,             /* COMPLEXTYPE  */
    BYTE = 303,                    /* BYTE  */
    FLOAT = 304,                   /* FLOAT  */
    RUNE = 305,                    /* RUNE  */
    UINT = 306,                    /* UINT  */
    BOOL_TYPE = 307,               /* BOOL_TYPE  */
    TYPE = 308,                    /* TYPE  */
    STRUCT = 309,                  /* STRUCT  */
    UINTPTR = 310,                 /* UINTPTR  */
    ERRORTYPE = 311,               /* ERRORTYPE  */
    ANYTYPE = 312,                 /* ANYTYPE  */
    COMPARABLE = 313,              /* COMPARABLE  */
    EQ = 314,                      /* EQ  */
    INC = 315,                     /* INC  */
    DEC = 316,                     /* DEC  */
    SUBEQ = 317,                   /* SUBEQ  */
    PLUSEQ = 318,                  /* PLUSEQ  */
    MULEQ = 319,                   /* MULEQ  */
    DIVEQ = 320,                   /* DIVEQ  */
    MODEQ = 321,                   /* MODEQ  */
    EQUAL = 322,                   /* EQUAL  */
    NOTEQUAL = 323,                /* NOTEQUAL  */
    GREATEROREQUAL = 324,          /* GREATEROREQUAL  */
    LESSOREQUAL = 325,             /* LESSOREQUAL  */
    AND = 326,                     /* AND  */
    OR = 327,                      /* OR  */
    LSHIFT = 328,                  /* LSHIFT  */
    RSHIFT = 329,                  /* RSHIFT  */
    PEQ = 330,                     /* PEQ  */
    XOR = 331,                     /* XOR  */
    SEMICOLON = 332,               /* SEMICOLON  */
    AMP_EXP = 333,                 /* AMP_EXP  */
    POINT = 334,                   /* POINT  */
    POINTER = 335                  /* POINTER  */
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
#define RUNE_LIT 296
#define IMAGINARY_LIT 297
#define CONST_INT_ERR 298
#define CONST_BIN_ERR 299
#define INT 300
#define STRING 301
#define COMPLEXTYPE 302
#define BYTE 303
#define FLOAT 304
#define RUNE 305
#define UINT 306
#define BOOL_TYPE 307
#define TYPE 308
#define STRUCT 309
#define UINTPTR 310
#define ERRORTYPE 311
#define ANYTYPE 312
#define COMPARABLE 313
#define EQ 314
#define INC 315
#define DEC 316
#define SUBEQ 317
#define PLUSEQ 318
#define MULEQ 319
#define DIVEQ 320
#define MODEQ 321
#define EQUAL 322
#define NOTEQUAL 323
#define GREATEROREQUAL 324
#define LESSOREQUAL 325
#define AND 326
#define OR 327
#define LSHIFT 328
#define RSHIFT 329
#define PEQ 330
#define XOR 331
#define SEMICOLON 332
#define AMP_EXP 333
#define POINT 334
#define POINTER 335

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
