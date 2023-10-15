
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PACKAGE = 258,
     IMPORTS = 259,
     FUNCTION = 260,
     id = 261,
     VAR = 262,
     EOL = 263,
     CONST = 264,
     METHOD = 265,
     IF = 266,
     ELSE = 267,
     SWITCH = 268,
     CASE = 269,
     FALLTHROUGH = 270,
     DEFAULT = 271,
     FOR = 272,
     BREAK = 273,
     RANGE = 274,
     NEW = 275,
     SELECT = 276,
     RETURN = 277,
     MAP = 278,
     GO = 279,
     GOTO = 280,
     INTERFACE = 281,
     CHAN = 282,
     CONTINUE = 283,
     DEFER = 284,
     CONST_INT = 285,
     CONST_CHAR = 286,
     CONST_STRING = 287,
     BOOL = 288,
     IOTA = 289,
     NEG_CONST_INT = 290,
     CONST_OCTAL = 291,
     CONST_HEX = 292,
     CONST_BIN = 293,
     FLOAT_HEX = 294,
     CONST_INT_ERR = 295,
     CONST_BIN_ERR = 296,
     INT = 297,
     STRING = 298,
     COMPLEXTYPE = 299,
     BYTE = 300,
     FLOAT = 301,
     RUNE = 302,
     UINT = 303,
     BOOL_TYPE = 304,
     TYPE = 305,
     STRUCT = 306,
     UINTPTR = 307,
     ERRORTYPE = 308,
     ANYTYPE = 309,
     COMPARABLE = 310,
     EQ = 311,
     INC = 312,
     DEC = 313,
     SUBEQ = 314,
     PLUSEQ = 315,
     MULEQ = 316,
     DIVEQ = 317,
     MODEQ = 318,
     EQUAL = 319,
     NOTEQUAL = 320,
     GREATEROREQUAL = 321,
     LESSOREQUAL = 322,
     AND = 323,
     OR = 324,
     LSHIFT = 325,
     RSHIFT = 326,
     PEQ = 327,
     XOR = 328,
     SEMICOLON = 329,
     AMP_EXP = 330,
     POINT = 331,
     EXPONENT = 332,
     HEX_EXPONENT = 333
   };
#endif
/* Tokens.  */
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
#define AMP_EXP 330
#define POINT 331
#define EXPONENT 332
#define HEX_EXPONENT 333




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


