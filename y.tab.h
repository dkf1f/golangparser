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
    NEG_CONST_INT = 290,           /* NEG_CONST_INT  */
    CONST_OCTAL = 291,             /* CONST_OCTAL  */
    CONST_HEX = 292,               /* CONST_HEX  */
    CONST_BIN = 293,               /* CONST_BIN  */
    FLOAT_HEX = 294,               /* FLOAT_HEX  */
    CONST_INT_ERR = 295,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 296,           /* CONST_BIN_ERR  */
    INT = 297,                     /* INT  */
    STRING = 298,                  /* STRING  */
    COMPLEXTYPE = 299,             /* COMPLEXTYPE  */
    BYTE = 300,                    /* BYTE  */
    FLOAT = 301,                   /* FLOAT  */
    RUNE = 302,                    /* RUNE  */
    UINT = 303,                    /* UINT  */
    BOOL_TYPE = 304,               /* BOOL_TYPE  */
    TYPE = 305,                    /* TYPE  */
    STRUCT = 306,                  /* STRUCT  */
    UINTPTR = 307,                 /* UINTPTR  */
    ERRORTYPE = 308,               /* ERRORTYPE  */
    ANYTYPE = 309,                 /* ANYTYPE  */
    COMPARABLE = 310,              /* COMPARABLE  */
    EQ = 311,                      /* EQ  */
    INC = 312,                     /* INC  */
    DEC = 313,                     /* DEC  */
    SUBEQ = 314,                   /* SUBEQ  */
    PLUSEQ = 315,                  /* PLUSEQ  */
    MULEQ = 316,                   /* MULEQ  */
    DIVEQ = 317,                   /* DIVEQ  */
    MODEQ = 318,                   /* MODEQ  */
    EQUAL = 319,                   /* EQUAL  */
    NOTEQUAL = 320,                /* NOTEQUAL  */
    GREATEROREQUAL = 321,          /* GREATEROREQUAL  */
    LESSOREQUAL = 322,             /* LESSOREQUAL  */
    AND = 323,                     /* AND  */
    OR = 324,                      /* OR  */
    LSHIFT = 325,                  /* LSHIFT  */
    RSHIFT = 326,                  /* RSHIFT  */
    PEQ = 327,                     /* PEQ  */
    XOR = 328,                     /* XOR  */
    SEMICOLON = 329,               /* SEMICOLON  */
    EXPONENT = 330,                /* EXPONENT  */
    HEX_EXPONENT = 331             /* HEX_EXPONENT  */
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
#define NEG_CONST_INT 290
#define CONST_OCTAL 291
#define CONST_HEX 292
#define CONST_BIN 293
#define FLOAT_HEX 294
#define CONST_INT_ERR 295
#define CONST_BIN_ERR 296
#define INT 297
#define STRING 298
#define COMPLEXTYPE 299
#define BYTE 300
#define FLOAT 301
#define RUNE 302
#define UINT 303
#define BOOL_TYPE 304
#define TYPE 305
#define STRUCT 306
#define UINTPTR 307
#define ERRORTYPE 308
#define ANYTYPE 309
#define COMPARABLE 310
#define EQ 311
#define INC 312
#define DEC 313
#define SUBEQ 314
#define PLUSEQ 315
#define MULEQ 316
#define DIVEQ 317
#define MODEQ 318
#define EQUAL 319
#define NOTEQUAL 320
#define GREATEROREQUAL 321
#define LESSOREQUAL 322
#define AND 323
#define OR 324
#define LSHIFT 325
#define RSHIFT 326
#define PEQ 327
#define XOR 328
#define SEMICOLON 329
#define EXPONENT 330
#define HEX_EXPONENT 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
