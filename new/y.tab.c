/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lab2.yacc"

    #include <iostream>
	extern int yylineno;
	extern int line_counter;
	extern int yylex();
	bool error_ = 0;
    extern FILE* yyin;
    int num_error = 0;
    void yyerror(const char *s)
	{
        std::cout << "NO OK" << std::endl;
		std::cout << s << "line=" << yylineno << std::endl;
		error_ = 1;
	}

#line 87 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORTS = 4,                    /* IMPORTS  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_id = 6,                         /* id  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_EOL = 8,                        /* EOL  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_METHOD = 10,                    /* METHOD  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_SWITCH = 13,                    /* SWITCH  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_FALLTHROUGH = 15,               /* FALLTHROUGH  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_BREAK = 18,                     /* BREAK  */
  YYSYMBOL_RANGE = 19,                     /* RANGE  */
  YYSYMBOL_NEW = 20,                       /* NEW  */
  YYSYMBOL_SELECT = 21,                    /* SELECT  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_MAP = 23,                       /* MAP  */
  YYSYMBOL_GO = 24,                        /* GO  */
  YYSYMBOL_GOTO = 25,                      /* GOTO  */
  YYSYMBOL_INTERFACE = 26,                 /* INTERFACE  */
  YYSYMBOL_CHAN = 27,                      /* CHAN  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_DEFER = 29,                     /* DEFER  */
  YYSYMBOL_CONST_INT = 30,                 /* CONST_INT  */
  YYSYMBOL_CONST_CHAR = 31,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 32,              /* CONST_STRING  */
  YYSYMBOL_BOOL = 33,                      /* BOOL  */
  YYSYMBOL_IOTA = 34,                      /* IOTA  */
  YYSYMBOL_CONST_OCTAL = 35,               /* CONST_OCTAL  */
  YYSYMBOL_CONST_HEX = 36,                 /* CONST_HEX  */
  YYSYMBOL_CONST_BIN = 37,                 /* CONST_BIN  */
  YYSYMBOL_FLOAT_HEX = 38,                 /* FLOAT_HEX  */
  YYSYMBOL_DECIMAL_FLOAT_LIT = 39,         /* DECIMAL_FLOAT_LIT  */
  YYSYMBOL_HEX_FLOAT_LIT = 40,             /* HEX_FLOAT_LIT  */
  YYSYMBOL_RUNE_LIT = 41,                  /* RUNE_LIT  */
  YYSYMBOL_IMAGINARY_LIT = 42,             /* IMAGINARY_LIT  */
  YYSYMBOL_CONST_INT_ERR = 43,             /* CONST_INT_ERR  */
  YYSYMBOL_CONST_BIN_ERR = 44,             /* CONST_BIN_ERR  */
  YYSYMBOL_INT = 45,                       /* INT  */
  YYSYMBOL_STRING = 46,                    /* STRING  */
  YYSYMBOL_COMPLEXTYPE = 47,               /* COMPLEXTYPE  */
  YYSYMBOL_BYTE = 48,                      /* BYTE  */
  YYSYMBOL_FLOAT = 49,                     /* FLOAT  */
  YYSYMBOL_RUNE = 50,                      /* RUNE  */
  YYSYMBOL_UINT = 51,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 52,                 /* BOOL_TYPE  */
  YYSYMBOL_TYPE = 53,                      /* TYPE  */
  YYSYMBOL_STRUCT = 54,                    /* STRUCT  */
  YYSYMBOL_UINTPTR = 55,                   /* UINTPTR  */
  YYSYMBOL_ERRORTYPE = 56,                 /* ERRORTYPE  */
  YYSYMBOL_ANYTYPE = 57,                   /* ANYTYPE  */
  YYSYMBOL_COMPARABLE = 58,                /* COMPARABLE  */
  YYSYMBOL_EQ = 59,                        /* EQ  */
  YYSYMBOL_INC = 60,                       /* INC  */
  YYSYMBOL_DEC = 61,                       /* DEC  */
  YYSYMBOL_SUBEQ = 62,                     /* SUBEQ  */
  YYSYMBOL_PLUSEQ = 63,                    /* PLUSEQ  */
  YYSYMBOL_MULEQ = 64,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 65,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 66,                     /* MODEQ  */
  YYSYMBOL_EQUAL = 67,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 68,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 69,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 70,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 71,                       /* AND  */
  YYSYMBOL_OR = 72,                        /* OR  */
  YYSYMBOL_LSHIFT = 73,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 74,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 75,                       /* PEQ  */
  YYSYMBOL_XOR = 76,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 77,                 /* SEMICOLON  */
  YYSYMBOL_AMP_EXP = 78,                   /* AMP_EXP  */
  YYSYMBOL_POINT = 79,                     /* POINT  */
  YYSYMBOL_POINTER = 80,                   /* POINTER  */
  YYSYMBOL_81_ = 81,                       /* '+'  */
  YYSYMBOL_82_ = 82,                       /* '-'  */
  YYSYMBOL_83_ = 83,                       /* '*'  */
  YYSYMBOL_84_ = 84,                       /* '/'  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_87_ = 87,                       /* ':'  */
  YYSYMBOL_88_ = 88,                       /* '.'  */
  YYSYMBOL_89_ = 89,                       /* '('  */
  YYSYMBOL_90_ = 90,                       /* ')'  */
  YYSYMBOL_91_ = 91,                       /* '['  */
  YYSYMBOL_92_ = 92,                       /* ']'  */
  YYSYMBOL_93_ = 93,                       /* ','  */
  YYSYMBOL_94_ = 94,                       /* '!'  */
  YYSYMBOL_95_ = 95,                       /* '&'  */
  YYSYMBOL_96_ = 96,                       /* '|'  */
  YYSYMBOL_97_ = 97,                       /* '~'  */
  YYSYMBOL_98_ = 98,                       /* '%'  */
  YYSYMBOL_99_ = 99,                       /* '<'  */
  YYSYMBOL_100_ = 100,                     /* '>'  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_prog = 102,                     /* prog  */
  YYSYMBOL_TopLevelDecl = 103,             /* TopLevelDecl  */
  YYSYMBOL_FunctionDecl = 104,             /* FunctionDecl  */
  YYSYMBOL_FunctionName = 105,             /* FunctionName  */
  YYSYMBOL_MethodDecl = 106,               /* MethodDecl  */
  YYSYMBOL_Receiver = 107,                 /* Receiver  */
  YYSYMBOL_Statement = 108,                /* Statement  */
  YYSYMBOL_ForStmt = 109,                  /* ForStmt  */
  YYSYMBOL_Condition = 110,                /* Condition  */
  YYSYMBOL_InitStmt = 111,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 112,                 /* PostStmt  */
  YYSYMBOL_ForClause = 113,                /* ForClause  */
  YYSYMBOL_RangeClause = 114,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 115,                /* DeferStmt  */
  YYSYMBOL_Declaration = 116,              /* Declaration  */
  YYSYMBOL_GoStmt = 117,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 118,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 119,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 120,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 121,                 /* GotoStmt  */
  YYSYMBOL_Label = 122,                    /* Label  */
  YYSYMBOL_SelectStmt = 123,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 124,           /* CommClauseList  */
  YYSYMBOL_CommClause = 125,               /* CommClause  */
  YYSYMBOL_CommCase = 126,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 127,                 /* RecvStmt  */
  YYSYMBOL_RecvExpr = 128,                 /* RecvExpr  */
  YYSYMBOL_IfStmt = 129,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 130,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 131,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 132,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 133,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 134,           /* ExprSwitchCase  */
  YYSYMBOL_TypeSwitchStmt = 135,           /* TypeSwitchStmt  */
  YYSYMBOL_TypeSwitchGuard = 136,          /* TypeSwitchGuard  */
  YYSYMBOL_TypeCaseClauseList = 137,       /* TypeCaseClauseList  */
  YYSYMBOL_TypeCaseClause = 138,           /* TypeCaseClause  */
  YYSYMBOL_TypeSwitchCase = 139,           /* TypeSwitchCase  */
  YYSYMBOL_ConstDecl = 140,                /* ConstDecl  */
  YYSYMBOL_ConstStmt = 141,                /* ConstStmt  */
  YYSYMBOL_ConstSpecList = 142,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 143,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 144,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 145,                 /* TypeDecl  */
  YYSYMBOL_TypeStmt = 146,                 /* TypeStmt  */
  YYSYMBOL_TypeSpecList = 147,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 148,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 149,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 150,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 151,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 152,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 153,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 154,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 155,                  /* VarDecl  */
  YYSYMBOL_VarStmt = 156,                  /* VarStmt  */
  YYSYMBOL_VarSpecList = 157,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 158,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 159,               /* SimpleStmt  */
  YYSYMBOL_ShortVarDecl = 160,             /* ShortVarDecl  */
  YYSYMBOL_EmptyStatement = 161,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 162,                 /* SendStmt  */
  YYSYMBOL_Channel = 163,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 164,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 165,               /* Assignment  */
  YYSYMBOL_Expression = 166,               /* Expression  */
  YYSYMBOL_UnaryExpr = 167,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 168,              /* PrimaryExpr  */
  YYSYMBOL_Conversion = 169,               /* Conversion  */
  YYSYMBOL_MethodExpr = 170,               /* MethodExpr  */
  YYSYMBOL_ReceiverType = 171,             /* ReceiverType  */
  YYSYMBOL_MethodName = 172,               /* MethodName  */
  YYSYMBOL_Operand = 173,                  /* Operand  */
  YYSYMBOL_Literal = 174,                  /* Literal  */
  YYSYMBOL_BasicLit = 175,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 176,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 177,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 178,             /* LiteralValue  */
  YYSYMBOL_ElementList = 179,              /* ElementList  */
  YYSYMBOL_KeyedElement = 180,             /* KeyedElement  */
  YYSYMBOL_Key = 181,                      /* Key  */
  YYSYMBOL_FieldName = 182,                /* FieldName  */
  YYSYMBOL_Element = 183,                  /* Element  */
  YYSYMBOL_OperandName = 184,              /* OperandName  */
  YYSYMBOL_QualifiedIdent = 185,           /* QualifiedIdent  */
  YYSYMBOL_int_lit = 186,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 187,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 188,                /* float_lit  */
  YYSYMBOL_FunctionLit = 189,              /* FunctionLit  */
  YYSYMBOL_Block = 190,                    /* Block  */
  YYSYMBOL_Statements = 191,               /* Statements  */
  YYSYMBOL_Selector = 192,                 /* Selector  */
  YYSYMBOL_Index = 193,                    /* Index  */
  YYSYMBOL_Slice = 194,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 195,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 196,                /* Arguments  */
  YYSYMBOL_ExpressionList = 197,           /* ExpressionList  */
  YYSYMBOL_Type = 198,                     /* Type  */
  YYSYMBOL_TypeArgs = 199,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 200,                 /* TypeList  */
  YYSYMBOL_TypeName = 201,                 /* TypeName  */
  YYSYMBOL_TypeLit = 202,                  /* TypeLit  */
  YYSYMBOL_ArrayType = 203,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 204,              /* ArrayLength  */
  YYSYMBOL_ElementType = 205,              /* ElementType  */
  YYSYMBOL_StructType = 206,               /* StructType  */
  YYSYMBOL_FieldDeclList = 207,            /* FieldDeclList  */
  YYSYMBOL_DeclList = 208,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 209,                /* FieldDecl  */
  YYSYMBOL_Tag = 210,                      /* Tag  */
  YYSYMBOL_EmbeddedField = 211,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 212,              /* PointerType  */
  YYSYMBOL_FunctionType = 213,             /* FunctionType  */
  YYSYMBOL_Signature = 214,                /* Signature  */
  YYSYMBOL_Result = 215,                   /* Result  */
  YYSYMBOL_Parameters = 216,               /* Parameters  */
  YYSYMBOL_ParameterList = 217,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 218,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 219,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 220,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 221,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 222,            /* InterfaceElem  */
  YYSYMBOL_MethodElem = 223,               /* MethodElem  */
  YYSYMBOL_TypeElem = 224,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 225,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 226,                /* SliceType  */
  YYSYMBOL_MapType = 227,                  /* MapType  */
  YYSYMBOL_ChannelType = 228,              /* ChannelType  */
  YYSYMBOL_ChanMix = 229,                  /* ChanMix  */
  YYSYMBOL_ChanValues = 230,               /* ChanValues  */
  YYSYMBOL_binary_op = 231,                /* binary_op  */
  YYSYMBOL_mul_op = 232,                   /* mul_op  */
  YYSYMBOL_add_op = 233,                   /* add_op  */
  YYSYMBOL_rel_op = 234                    /* rel_op  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2971

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  540

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,     2,     2,     2,    98,    95,     2,
      89,    90,    83,    81,    93,    82,    88,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,     2,
      99,     2,   100,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    96,    86,    97,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    31,    34,    35,    36,    38,    39,    40,
      41,    42,    44,    45,    47,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    66,    67,
      68,    69,    71,    72,    73,    76,    77,    78,    79,    80,
      81,    82,    86,    87,    88,    90,    92,    93,    94,    96,
      98,    99,   101,   102,   104,   105,   107,   108,   110,   112,
     113,   115,   116,   117,   118,   119,   120,   122,   123,   124,
     126,   129,   130,   131,   132,   133,   134,   139,   140,   143,
     144,   145,   146,   148,   149,   151,   152,   152,   154,   155,
     157,   158,   159,   160,   161,   162,   162,   167,   168,   169,
     170,   172,   173,   174,   175,   176,   177,   180,   181,   182,
     183,   185,   186,   187,   187,   189,   191,   192,   194,   195,
     196,   197,   198,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   211,   212,   213,   214,   215,   216,   220,   223,
     225,   226,   228,   229,   231,   232,   233,   239,   240,   243,
     244,   245,   246,   247,   248,   249,   250,   253,   254,   255,
     256,   257,   258,   259,   260,   262,   263,   265,   266,   267,
     269,   270,   271,   272,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   286,   287,   288,   289,   290,   291,   292,
     293,   295,   296,   297,   299,   300,   302,   303,   305,   306,
     307,   309,   311,   312,   314,   315,   317,   319,   320,   321,
     322,   325,   326,   327,   330,   332,   334,   335,   338,   340,
     341,   343,   344,   345,   346,   347,   348,   351,   354,   355,
     356,   357,   358,   359,   360,   361,   363,   364,   366,   367,
     368,   369,   371,   372,   374,   375,   377,   378,   380,   381,
     382,   383,   384,   385,   386,   387,   390,   391,   392,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   410,   413,   414,   415,   416,   417,   419,   420,
     421,   424,   425,   427,   428,   429,   430,   432,   435,   436,
     439,   440,   442,   443,   445,   446,   448,   450,   451,   453,
     454,   458,   461,   464,   465,   466,   467,   468,   469,   472,
     473,   474,   475,   476,   478,   479,   480,   481,   482,   483,
     484,   486,   487,   488,   489,   491,   492,   493,   494,   495,
     496
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PACKAGE", "IMPORTS",
  "FUNCTION", "id", "VAR", "EOL", "CONST", "METHOD", "IF", "ELSE",
  "SWITCH", "CASE", "FALLTHROUGH", "DEFAULT", "FOR", "BREAK", "RANGE",
  "NEW", "SELECT", "RETURN", "MAP", "GO", "GOTO", "INTERFACE", "CHAN",
  "CONTINUE", "DEFER", "CONST_INT", "CONST_CHAR", "CONST_STRING", "BOOL",
  "IOTA", "CONST_OCTAL", "CONST_HEX", "CONST_BIN", "FLOAT_HEX",
  "DECIMAL_FLOAT_LIT", "HEX_FLOAT_LIT", "RUNE_LIT", "IMAGINARY_LIT",
  "CONST_INT_ERR", "CONST_BIN_ERR", "INT", "STRING", "COMPLEXTYPE", "BYTE",
  "FLOAT", "RUNE", "UINT", "BOOL_TYPE", "TYPE", "STRUCT", "UINTPTR",
  "ERRORTYPE", "ANYTYPE", "COMPARABLE", "EQ", "INC", "DEC", "SUBEQ",
  "PLUSEQ", "MULEQ", "DIVEQ", "MODEQ", "EQUAL", "NOTEQUAL",
  "GREATEROREQUAL", "LESSOREQUAL", "AND", "OR", "LSHIFT", "RSHIFT", "PEQ",
  "XOR", "SEMICOLON", "AMP_EXP", "POINT", "POINTER", "'+'", "'-'", "'*'",
  "'/'", "'{'", "'}'", "':'", "'.'", "'('", "')'", "'['", "']'", "','",
  "'!'", "'&'", "'|'", "'~'", "'%'", "'<'", "'>'", "$accept", "prog",
  "TopLevelDecl", "FunctionDecl", "FunctionName", "MethodDecl", "Receiver",
  "Statement", "ForStmt", "Condition", "InitStmt", "PostStmt", "ForClause",
  "RangeClause", "DeferStmt", "Declaration", "GoStmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "GotoStmt", "Label", "SelectStmt",
  "CommClauseList", "CommClause", "CommCase", "RecvStmt", "RecvExpr",
  "IfStmt", "SwitchStmt", "ExprSwitchStmt", "ExprCaseClauseList",
  "ExprCaseClause", "ExprSwitchCase", "TypeSwitchStmt", "TypeSwitchGuard",
  "TypeCaseClauseList", "TypeCaseClause", "TypeSwitchCase", "ConstDecl",
  "ConstStmt", "ConstSpecList", "ConstSpec", "ConstExpr", "TypeDecl",
  "TypeStmt", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "TypeParameters", "TypeParamList", "TypeParamDecl", "TypeConstraint",
  "VarDecl", "VarStmt", "VarSpecList", "VarSpec", "SimpleStmt",
  "ShortVarDecl", "EmptyStatement", "SendStmt", "Channel", "IncDecStmt",
  "Assignment", "Expression", "UnaryExpr", "PrimaryExpr", "Conversion",
  "MethodExpr", "ReceiverType", "MethodName", "Operand", "Literal",
  "BasicLit", "CompositeLit", "LiteralType", "LiteralValue", "ElementList",
  "KeyedElement", "Key", "FieldName", "Element", "OperandName",
  "QualifiedIdent", "int_lit", "imaginary_lit", "float_lit", "FunctionLit",
  "Block", "Statements", "Selector", "Index", "Slice", "TypeAssertion",
  "Arguments", "ExpressionList", "Type", "TypeArgs", "TypeList",
  "TypeName", "TypeLit", "ArrayType", "ArrayLength", "ElementType",
  "StructType", "FieldDeclList", "DeclList", "FieldDecl", "Tag",
  "EmbeddedField", "PointerType", "FunctionType", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "IdentifierList",
  "InterfaceType", "InterfaceElemList", "InterfaceElem", "MethodElem",
  "TypeElem", "TypeTerm", "SliceType", "MapType", "ChannelType", "ChanMix",
  "ChanValues", "binary_op", "mul_op", "add_op", "rel_op", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-436)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-289)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,    78,   251,  -436,  -436,    26,    27,    33,    46,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,   799,   -45,    87,
    -436,    25,     8,  -436,  -436,  2176,    20,  -436,  -436,  2191,
    2214,    24,  -436,  -436,  -436,  -436,    36,   539,    66,    79,
     127,    83,  2303,   178,  2303,  2303,  -436,  1189,  -436,   129,
    -436,  -436,  -436,  -436,  -436,   125,  -436,  2252,  -436,  -436,
    -436,  -436,  2303,  -436,   219,    36,   145,  2310,  -436,    36,
     219,  -436,   153,   219,   161,  1984,   194,  -436,   165,   219,
    1984,  -436,   198,  2303,  1262,  2303,  -436,  -436,   171,   257,
    -436,   258,  -436,  2303,   208,  -436,     9,  -436,  -436,  -436,
     177,    36,   181,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  1984,  2057,  1984,  1984,  1984,  1984,  1070,
    2303,  1984,  1984,  2871,  -436,    -8,  -436,  -436,   184,  -436,
    -436,  -436,  -436,   180,   129,  -436,  -436,  -436,  -436,  -436,
     191,    67,   202,   197,   207,   211,   217,  2303,  -436,  -436,
    1854,  2303,  -436,  -436,  -436,  -436,   215,   210,   372,   145,
     997,  -436,   799,  -436,  -436,  -436,   145,  -436,  -436,  -436,
    2633,  -436,  1984,  -436,  -436,  -436,  1984,  -436,   102,  -436,
    -436,  -436,  -436,   216,    58,  -436,  2303,  -436,   585,  -436,
    -436,  -436,   214,     3,   305,   129,   226,  -436,     9,   282,
    2303,  -436,   145,   309,  -436,   127,  -436,  -436,  -436,  -436,
      91,  2667,   104,   224,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  1984,  -436,  -436,  -436,
      49,  1285,  1358,  -436,  -436,  -436,  -436,  -436,    87,  1093,
    -436,  -436,  1381,   232,  2303,   228,   130,  -436,  -436,  -436,
    -436,   219,  -436,  -436,  -436,  2080,  1454,  -436,   832,   316,
     241,  1984,  1984,   316,   316,  1984,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,   247,  -436,  -436,  2462,  -436,   674,
     400,   255,   177,  -436,  1984,  -436,  -436,  2303,  -436,  -436,
    -436,  -436,   372,   129,  -436,  -436,  -436,  -436,  -436,   282,
    -436,  -436,  -436,  2303,  2871,  -436,  2303,  -436,    61,   157,
    1477,  2531,  -436,   -24,  -436,  2701,   246,    62,  -436,   253,
    -436,  -436,  -436,   254,  -436,  2303,  -436,   259,  -436,   266,
    2336,   103,    88,   260,   271,  2378,    96,  1984,  1550,   145,
     275,   145,   145,  -436,  2420,  -436,   903,   278,  -436,  -436,
      37,  -436,  2871,  -436,  -436,  2871,  1984,  -436,  -436,  -436,
    -436,  1984,   296,   297,  1984,  -436,  -436,  -436,  -436,  -436,
    -436,   268,   270,  -436,   273,   274,  -436,  1623,  -436,  2565,
    1646,  -436,   276,  -436,  1166,  1719,  -436,  -436,  -436,  1984,
     353,  2153,  1984,  -436,   280,    88,   283,   172,  1742,    88,
      53,  2871,  2080,   290,  2871,  -436,  1815,  -436,  -436,  1888,
    1961,  2080,  -436,  -436,    51,  -436,   284,  2871,  -436,  1984,
    1984,  -436,  -436,  -436,  -436,  -436,  -436,   279,  1984,  -436,
    -436,  2599,  -436,  -436,  -436,  2871,  -436,  -436,  2735,    32,
     120,  -436,  -436,  -436,   997,  2303,  -436,   286,   172,   288,
      -3,    88,   295,  2769,   299,  2264,  -436,  -436,  2080,  2080,
     304,  1984,  1984,  -436,  -436,  -436,  2497,   323,   308,  -436,
    -436,   997,  -436,  -436,  -436,  2803,  1984,  -436,   374,  -436,
    -436,    54,   997,  -436,  -436,  -436,   997,   301,   172,    88,
    -436,   298,  -436,  -436,  2080,  2871,  2871,  1984,  1984,   997,
    -436,  2837,    32,  2296,   997,  -436,   306,   307,  -436,  -436,
    -436,  2871,  -436,  -436,  -436,  -436,   300,  -436,  -436,  -436
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    46,    47,    48,    11,     0,     0,     0,
      13,   288,     0,   123,   124,     0,     0,    97,    98,   106,
       0,     0,   107,   108,   113,   114,     0,   246,     0,     0,
     306,     0,     0,     0,     0,     0,   279,     0,   286,   238,
     240,   248,   249,   250,   251,     0,   282,     0,   252,   253,
     254,   255,     0,   305,     0,     0,     9,   274,   169,     0,
       0,   126,     0,   128,   246,     0,   129,   100,     0,   102,
       0,   103,     0,     0,     0,     0,   116,   110,     0,   112,
     273,     0,   287,     0,     0,   307,   260,   285,   308,   272,
       0,     0,   204,   210,   181,   182,   209,   208,   207,   212,
     213,   180,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,   147,   149,   159,   158,     0,   157,
     172,   174,   175,     0,   170,   205,   177,   179,   178,   176,
     168,   238,   248,     0,   249,   253,   254,     0,   239,   278,
       0,     0,   284,   258,   303,   304,     0,   120,     0,    10,
     139,     8,     0,   277,   275,   276,     0,   289,   125,   127,
     237,   131,     0,    99,   101,   105,     0,   115,   204,   117,
     109,   111,   247,     0,   246,   291,     0,   299,     0,   293,
     294,   295,   298,   288,     0,   271,     0,   261,   263,   266,
       0,   241,   273,     0,   153,   306,   156,   150,   151,   154,
     272,     0,   168,     0,   301,   152,   155,   325,   326,   330,
     329,   310,   309,   317,   318,   321,   320,   323,   324,   314,
     315,   319,   322,   316,   327,   328,     0,   313,   312,   311,
       0,     0,     0,   160,   161,   162,   163,   164,     0,     0,
     183,   171,     0,   239,     0,   245,     0,   280,   281,   283,
     118,     0,   121,   122,     7,   139,   139,    21,     0,    53,
       0,    51,     0,    57,    55,     0,   217,    26,    27,    14,
      16,    17,    18,    19,    20,    25,    23,    24,    77,    78,
      15,   133,   132,   135,     0,   136,   137,   134,    22,     0,
       0,     0,   286,    12,     0,   130,   104,     0,   296,   300,
     290,   292,     0,   270,   269,   259,   262,   267,   265,   266,
     214,   206,   173,     0,   148,   218,     0,   235,     0,   168,
       0,     0,   167,   204,   193,   202,   203,     0,   195,     0,
     198,   197,   166,     0,   256,     0,   242,     0,   119,     0,
     134,   204,     0,     0,     0,   134,   149,     0,     0,     0,
       0,     0,     0,    33,    32,    31,     0,     0,    58,    52,
       0,    50,    49,    56,    54,    45,     0,   142,   143,   215,
     216,     0,     0,     0,     0,   236,   302,   297,   268,   264,
     186,     0,     0,   228,     0,     0,   233,     0,   224,     0,
       0,   219,     0,   192,     0,     0,   165,   244,   243,     0,
      76,     0,     0,    87,     0,    84,     0,     0,     0,     0,
       0,    44,   139,     0,    32,    28,     0,    29,    30,     0,
       0,     0,    66,    60,     0,    62,     0,   140,   144,     0,
       0,   138,   227,   230,   229,   232,   231,     0,     0,   222,
     223,     0,   220,   191,   194,   202,   203,   196,     0,     0,
       0,    86,    82,    83,   139,     0,    96,     0,    93,     0,
     204,     0,     0,     0,     0,     0,    41,    34,    39,    36,
       0,     0,     0,    65,    69,    64,    70,     0,     0,    59,
      61,   139,   146,   145,   234,     0,     0,   221,    73,    74,
      75,     0,    85,    95,    89,    92,   139,     0,     0,     0,
      81,     0,    40,    38,    37,    42,    43,     0,     0,    63,
     226,     0,     0,     0,    94,    80,     0,     0,    91,    35,
      67,    70,    68,   225,    71,    72,     0,    88,    79,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -298,  -436,  -336,
    -436,  -358,  -436,  -436,  -436,   389,  -436,  -436,  -436,  -436,
    -436,   -46,  -436,  -436,   -38,  -436,  -436,  -276,  -435,  -436,
    -436,  -396,  -436,  -436,  -436,   -21,  -420,  -436,  -436,  -436,
    -436,   322,   397,  -436,  -436,  -436,   320,   404,  -436,  -436,
     383,   154,  -436,  -436,  -436,  -436,   343,   411,  -262,  -436,
    -436,   -12,  -436,  -436,  -436,   476,   162,  -245,  -436,  -436,
    -436,   173,  -436,  -436,  -436,  -436,  -436,  -131,  -436,    16,
    -436,  -436,    17,  -436,  -436,  -436,  -436,  -436,  -436,   -30,
    -433,  -436,  -436,  -436,  -436,  -436,   355,   -17,  -124,  -334,
      12,  -436,    82,  -436,  -104,   256,  -436,   225,  -436,   105,
    -436,  -436,  -436,   -31,  -436,    42,  -436,   281,   175,  -436,
    -436,   237,  -436,  -151,  -436,   317,   484,  -436,  -436,   370,
    -436,  -282,  -238,  -436
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    18,    11,    19,   276,   277,   359,
     360,   476,   361,   362,   278,   279,   280,   281,   282,   283,
     284,   369,   285,   434,   435,   436,   483,   484,   286,   287,
     288,   414,   415,   416,   289,   353,   467,   468,   469,    13,
      27,    78,    79,    81,    14,    32,    88,    89,    34,    35,
      65,   156,   157,   262,    15,    23,    72,    73,   290,   291,
     292,   293,   294,   295,   296,   170,   124,   125,   126,   127,
     128,    69,   129,   130,   131,   132,   133,   336,   337,   338,
     339,   340,   341,   134,   135,   136,   137,   138,   139,   298,
     299,   243,   244,   245,   246,   247,   300,   140,   148,   256,
     141,    50,   142,   143,   154,   144,   196,   197,   198,   318,
     199,    53,    54,    66,   164,    67,    55,    56,   301,    58,
     188,   189,   190,   191,   192,   145,   146,    61,    62,    63,
     236,   237,   238,   239
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   380,   250,   349,   354,    90,   363,   263,    76,  -246,
     251,   407,    82,    86,    21,   193,   214,   253,   382,   463,
      92,   356,   423,   474,   499,    97,    21,    99,   100,    49,
      30,   502,    16,    21,   159,  -246,   161,    49,   166,    21,
     152,    49,    49,   265,    17,   153,    64,    20,   505,    49,
     163,   431,    30,   432,    49,   325,    49,    49,   519,   325,
     325,  -246,   383,  -201,   203,   431,   177,   432,   179,    49,
     202,   314,   411,   524,    49,   507,   183,   187,     1,    49,
     240,   241,     3,   242,   382,   203,  -246,   534,   526,  -246,
     480,    91,   194,    68,  -246,    49,    70,    49,    71,    51,
     210,   212,   412,   153,   413,    49,    49,    51,   195,   165,
      77,    51,    51,   527,    87,    17,    22,   160,    70,    51,
     512,   513,    26,   433,    51,    17,    51,    51,   383,   264,
     255,   503,    49,    48,   259,    31,   303,   489,   326,    51,
     392,   187,   475,   523,    51,   302,    91,    17,   403,    51,
     344,   393,  -189,   308,   394,   404,   529,    93,   147,    49,
     477,   387,    49,    49,    94,    51,   460,    51,    96,   309,
      49,   187,   320,   356,    49,    51,    51,  -288,   411,  -168,
     252,    25,    29,   319,   420,   241,   465,   242,   466,   388,
     203,   203,    57,   252,   201,    70,    70,    25,    49,  -288,
      49,    29,    51,   386,   380,    98,   313,    95,   501,   241,
     195,   242,    49,    36,   184,   149,   477,   477,   150,   390,
     147,   380,   346,   347,   329,    21,   380,   373,   374,    51,
     160,    38,    51,    51,    39,    40,   395,   153,   365,   158,
      51,   530,   532,   168,    51,   167,   252,   396,    25,    91,
     397,     4,   477,   172,    29,   173,     5,   176,     6,   158,
       7,   180,    41,    30,   182,   249,    49,   201,    51,   203,
      51,   200,   248,    52,   456,   204,   206,   207,   208,   209,
     252,    52,    51,   215,   216,    52,    52,  -185,    43,   254,
     153,    44,  -184,    52,   185,   187,  -187,    45,    52,    47,
      52,    52,  -188,   261,     8,   186,   153,   260,   307,   391,
     312,    74,   315,    52,   317,   321,   323,  -190,    52,    49,
     410,   345,   368,    52,    49,    57,   370,   376,   255,   425,
     384,   427,   428,  -200,    59,    49,    51,    57,    49,    52,
     405,    52,    59,   409,   406,   417,    59,    59,   418,    52,
      52,   408,   426,   430,    59,   439,   440,    49,   442,    59,
     443,    59,    59,   444,   445,   459,   462,   478,   452,   494,
     464,   491,   504,   200,    59,   506,    52,    36,    74,    59,
     508,   514,   517,   518,    59,   510,   522,   525,   528,    51,
     539,    12,   537,   538,    51,    38,   490,   472,    39,    40,
      59,   174,    59,    52,    28,    51,    52,    52,    51,   181,
      59,    59,    33,    85,    52,   348,   169,    24,    52,   485,
     454,   332,   457,   316,   389,   311,    41,    51,   498,   500,
     171,   258,   155,     0,     0,   175,   158,    59,     0,     0,
       0,     0,    52,   367,    52,     0,     0,     0,   255,     0,
       0,     0,    43,     0,     0,    44,    52,     0,   391,   381,
       0,    45,     0,    47,    59,     0,     0,    59,    59,   186,
       0,     0,     0,   223,   224,    59,   225,    49,   226,    59,
       0,   227,   228,   229,   230,     0,     0,    49,     0,     0,
       0,     0,   535,     0,     0,   231,   232,     0,   233,     0,
       0,    60,     0,    59,     0,    59,   391,     0,     0,    60,
      52,     0,     0,    60,    60,     0,     0,    59,     0,     0,
       0,    60,     0,   123,     0,     0,    60,   305,    60,    60,
       0,   306,     0,     0,     0,    49,     0,     0,     0,     0,
       0,    60,     0,     0,    36,    74,    60,    51,     0,     0,
       0,    60,     0,     0,     0,     0,     0,    51,     0,     0,
     123,     0,    38,    52,     0,    39,    40,    60,    52,    60,
       0,    59,     0,     0,     0,     0,     0,    60,    60,    52,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
      36,   184,     0,    41,   211,   123,   328,     0,     0,     0,
       0,    52,     0,     0,    60,    51,   488,   343,    38,     0,
       0,    39,    40,     0,     0,     0,     0,     0,  -288,    43,
       0,     0,    44,   366,    59,     0,   371,    91,    45,    59,
      47,    60,    70,     0,    60,    60,   297,     0,     0,    41,
      59,     0,    60,    59,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
       0,     0,    59,     0,     0,    43,     0,     0,    44,     0,
      60,   310,    60,     0,    45,     0,    47,     0,     0,   101,
     178,     6,   186,     7,    60,   265,     0,   266,     0,   267,
       0,   268,   269,     0,     0,   270,   271,    38,   272,   273,
      39,    40,   274,   275,   103,     0,   104,   105,     0,   106,
     107,   108,   324,   109,   110,   111,   112,     0,   331,     0,
       0,    52,     0,     0,     0,   335,     0,     8,    41,     0,
       0,    52,     0,     0,     0,     0,   438,     0,    60,   441,
       0,   350,   355,     0,   364,     0,     0,     0,   372,     0,
     113,   375,   447,     0,   114,   115,   116,   117,     0,   160,
     379,     0,     0,   118,     0,   119,     0,   461,   121,   122,
       0,     0,     0,     0,     0,   297,     0,     0,     0,    52,
       0,     0,    59,     0,   438,   441,   487,     0,     0,     0,
       0,    60,    59,     0,   492,   493,    60,     0,     0,     0,
       0,     0,     0,     0,    36,    37,   399,    60,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,    39,    40,     0,     0,    60,
       0,     0,     0,   421,   424,     0,     0,   101,   178,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   357,   437,    41,     0,    38,     0,     0,    39,    40,
       0,     0,   103,     0,   104,   105,     0,   106,   107,   108,
       0,   109,   110,   111,   112,     0,   451,     0,    42,    43,
     335,   455,    44,     0,     0,   458,    41,     0,    45,    46,
      47,     0,     0,     0,   473,     0,     0,     0,   297,     0,
       0,     0,   424,     0,     0,     0,     0,   486,   113,   358,
       0,     0,   114,   115,   116,   117,     0,   160,     0,     0,
       0,   118,     0,   119,   495,     0,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     297,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,     0,   297,   297,     0,   515,   516,    60,
       0,     0,   429,     0,     0,     0,     0,   297,     0,     0,
       0,     0,   521,     0,     0,     0,   223,   224,   297,   225,
       0,   226,   297,     0,   227,   228,   229,   230,     0,     0,
     297,     0,     0,   531,   531,   297,     0,     0,   231,   232,
     297,   233,   101,   178,     6,     0,     7,    60,   265,     0,
     266,     0,   267,     0,   268,   269,     0,     0,   270,   271,
      38,   272,   273,    39,    40,   274,   275,   103,     0,   104,
     105,     0,   106,   107,   108,     0,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,   101,   102,   114,   115,   116,
     117,     0,   160,     0,     0,     0,   118,     0,   119,     0,
       0,   121,   122,    38,     0,     0,    39,    40,   101,   333,
     103,     0,   104,   105,     0,   106,   107,   108,     0,   109,
     110,   111,   112,     0,     0,     0,    38,     0,     0,    39,
      40,     0,     0,   103,    41,   104,   105,     0,   106,   107,
     108,     0,   109,   110,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,    41,     0,   213,
     114,   115,   116,   117,     0,     0,     0,     0,     0,   118,
       0,   119,   120,     0,   121,   122,     0,     0,     0,   113,
       0,   101,   333,   114,   115,   116,   117,     0,   249,   334,
       0,     0,   118,     0,   119,     0,     0,   121,   122,    38,
       0,     0,    39,    40,   101,   102,   103,     0,   104,   105,
       0,   106,   107,   108,     0,   109,   110,   111,   112,     0,
       0,     0,    38,     0,     0,    39,    40,     0,     0,   103,
      41,   104,   105,     0,   106,   107,   108,     0,   109,   110,
     111,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,    41,     0,     0,   114,   115,   116,   117,
       0,   249,   453,     0,     0,   118,     0,   119,     0,     0,
     121,   122,     0,     0,     0,   113,     0,   101,   178,   114,
     115,   116,   117,     0,     0,     0,     0,     0,   118,     0,
     119,   120,     0,   121,   122,    38,     0,     0,    39,    40,
     101,   102,   103,     0,   104,   105,     0,   106,   107,   108,
       0,   109,   110,   111,   112,     0,     0,     0,    38,     0,
       0,    39,    40,     0,     0,   103,    41,   104,   105,     0,
     106,   107,   108,     0,   109,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,    41,
       0,     0,   114,   115,   116,   117,     0,     0,     0,     0,
       0,   118,     0,   119,   120,     0,   121,   122,     0,     0,
       0,   113,     0,   101,   102,   114,   115,   116,   117,     0,
       0,     0,     0,     0,   118,   327,   119,     0,     0,   121,
     122,    38,     0,     0,    39,    40,   101,   102,   103,     0,
     104,   105,     0,   106,   107,   108,     0,   109,   110,   111,
     112,     0,     0,     0,    38,     0,     0,    39,    40,     0,
       0,   103,    41,   104,   105,     0,   106,   107,   108,     0,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,    41,     0,     0,   114,   115,
     116,   117,     0,     0,     0,   330,     0,   118,     0,   119,
       0,     0,   121,   122,     0,     0,     0,   113,     0,   101,
     351,   114,   115,   116,   117,     0,     0,     0,     0,     0,
     118,   342,   119,     0,     0,   121,   122,    38,     0,     0,
      39,    40,   101,   102,   103,     0,   104,   105,     0,   106,
     107,   108,     0,   109,   110,   111,   112,     0,     0,     0,
      38,     0,     0,    39,    40,     0,     0,   103,    41,   104,
     105,     0,   106,   107,   108,     0,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,    41,     0,     0,   114,   115,   116,   117,     0,   352,
       0,     0,     0,   118,     0,   119,     0,     0,   121,   122,
       0,     0,     0,   113,     0,   101,   102,   114,   115,   116,
     117,     0,     0,     0,     0,     0,   118,     0,   119,   398,
       0,   121,   122,    38,     0,     0,    39,    40,     0,     0,
     103,     0,   104,   105,     0,   106,   107,   108,     0,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   422,   101,   102,
     114,   115,   116,   117,     0,     0,     0,     0,     0,   118,
       0,   119,     0,     0,   121,   122,    38,     0,     0,    39,
      40,   101,   102,   103,     0,   104,   105,     0,   106,   107,
     108,     0,   109,   110,   111,   112,     0,     0,     0,    38,
       0,     0,    39,    40,     0,     0,   103,    41,   104,   105,
       0,   106,   107,   108,     0,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
      41,     0,     0,   114,   115,   116,   117,     0,     0,     0,
       0,     0,   118,   446,   119,     0,     0,   121,   122,     0,
       0,     0,   113,     0,   101,   102,   114,   115,   116,   117,
       0,     0,     0,     0,     0,   118,     0,   119,   450,     0,
     121,   122,    38,     0,     0,    39,    40,   101,   470,   103,
       0,   104,   105,     0,   106,   107,   108,     0,   109,   110,
     111,   112,     0,     0,     0,    38,     0,     0,    39,    40,
       0,     0,   103,    41,   104,   105,     0,   106,   107,   108,
       0,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,    41,     0,     0,   114,
     115,   116,   117,     0,   249,     0,     0,     0,   118,     0,
     119,     0,     0,   121,   122,     0,     0,     0,   113,     0,
     101,   102,   114,   115,   116,   117,     0,   471,     0,     0,
       0,   118,     0,   119,     0,     0,   121,   122,    38,     0,
       0,    39,    40,     0,     0,   103,     0,   104,   105,     0,
     106,   107,   108,     0,   109,   110,   111,   112,     0,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   479,   101,   102,   114,   115,   116,   117,     0,
       0,     0,     0,     0,   118,     0,   119,   481,    41,   121,
     122,    38,     0,     0,    39,    40,     0,     0,   103,     0,
     104,   105,     0,   106,   107,   108,     0,   109,   110,   111,
     112,     0,     0,    42,    43,     0,     0,    44,     0,     0,
       0,     0,    41,    45,   257,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,   101,   102,   114,   115,
     116,   117,     0,     0,     0,     0,     0,   118,     0,   119,
     482,     0,   121,   122,    38,     0,     0,    39,    40,   101,
     102,   103,     0,   104,   105,     0,   106,   107,   108,     0,
     109,   110,   111,   112,     0,     0,     0,    38,     0,     0,
      39,    40,     0,     0,   103,    41,   104,   105,     0,   106,
     107,   108,     0,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,    41,     0,
       0,   114,   115,   116,   117,     0,     0,     0,     0,     0,
     118,     0,   119,     0,     0,   121,   122,     0,     0,     0,
     113,     0,   101,   102,   114,   115,   116,   117,     0,     0,
       0,     0,     0,   118,     0,   119,     0,     0,   121,   122,
      38,     0,     0,    39,   205,   101,   178,   103,     0,   104,
     105,     0,   106,   107,   108,     0,   109,   110,   111,   112,
       0,     0,     0,    38,     0,     0,    39,    40,     0,     0,
     103,    41,   104,   105,     0,   106,   107,   108,     0,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,    41,     0,     0,   114,   115,   116,
     117,     0,     0,     0,     0,     0,   118,     0,   119,     0,
       0,   121,   122,     0,     0,     0,   113,     0,   101,   102,
     114,   115,   116,   117,     0,     0,     0,     0,     0,   118,
       0,   119,     0,     0,   121,   122,    38,     0,     0,    39,
      40,    36,    74,   103,     0,   104,   105,     0,   106,   107,
     108,     0,   109,   110,   111,   112,    36,    74,     0,    38,
       0,     0,    39,    40,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    38,     0,     0,    39,    40,    36,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,    43,     0,    75,    44,    38,     0,     0,
      39,    40,   118,     0,   119,    41,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,    43,    36,    74,    44,
       0,     0,     0,     0,     0,    45,     0,    47,    41,    36,
      74,    43,     0,    83,    44,    38,     0,     0,    39,    40,
      45,     0,    47,     0,     0,     0,     0,    38,     0,     0,
      39,    40,     0,     0,    43,     0,     0,    44,     0,     0,
       0,    36,    74,    45,     0,    84,    41,     0,    36,    74,
       0,     0,     0,     0,     0,    36,    74,   511,    41,    38,
       0,     0,    39,    40,     0,     0,    38,     0,     0,    39,
      40,   151,    43,    38,     0,    44,    39,    40,     0,     0,
       0,    45,     0,    47,    43,     0,     0,    44,     0,   536,
      41,     0,     0,    45,     0,    47,     0,    41,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,    44,
       0,     0,     0,    43,     0,    45,    44,    47,     0,     0,
      43,     0,    45,    44,    47,  -237,   377,   378,     0,   162,
       0,    47,     0,   217,   218,   219,   220,   221,   222,   223,
     224,     0,   225,     0,   226,     0,  -141,   227,   228,   229,
     230,   160,     0,     0,     0,     0,     0,     0,     0,   304,
       0,   231,   232,     0,   233,   234,   235,  -237,   377,   378,
       0,     0,     0,     0,     0,   217,   218,   219,   220,   221,
     222,   223,   224,     0,   225,     0,   226,     0,  -141,   227,
     228,   229,   230,   419,     0,     0,     0,     0,     0,     0,
       0,   304,     0,   231,   232,     0,   233,   234,   235,  -237,
     377,   378,     0,     0,     0,     0,     0,   217,   218,   219,
     220,   221,   222,   223,   224,     0,   225,  -134,   226,     0,
    -141,   227,   228,   229,   230,     0,     0,     0,     0,     0,
       0,     0,     0,   304,     0,   231,   232,     0,   233,   234,
     235,  -237,   377,   378,     0,     0,     0,     0,     0,   217,
     218,   219,   220,   221,   222,   223,   224,     0,   225,     0,
     226,     0,     0,   227,   228,   229,   230,     0,     0,     0,
       0,     0,     0,     0,     0,   304,  -237,   231,   232,     0,
     233,   234,   235,     0,   217,   218,   219,   220,   221,   222,
     223,   224,     0,   225,     0,   226,     0,  -141,   227,   228,
     229,   230,     0,     0,     0,     0,     0,     0,     0,     0,
     304,     0,   231,   232,     0,   233,   234,   235,   217,   218,
     219,   220,   221,   222,   223,   224,     0,   225,     0,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   400,     0,
       0,     0,     0,   401,   402,     0,   231,   232,     0,   233,
     234,   235,   217,   218,   219,   220,   221,   222,   223,   224,
       0,   225,     0,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   448,     0,     0,     0,     0,   449,     0,     0,
     231,   232,     0,   233,   234,   235,   217,   218,   219,   220,
     221,   222,   223,   224,     0,   225,     0,   226,     0,     0,
     227,   228,   229,   230,     0,     0,   496,     0,     0,     0,
       0,   497,     0,     0,   231,   232,     0,   233,   234,   235,
     217,   218,   219,   220,   221,   222,   223,   224,     0,   225,
       0,   226,     0,     0,   227,   228,   229,   230,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,   231,   232,
       0,   233,   234,   235,   217,   218,   219,   220,   221,   222,
     223,   224,     0,   225,     0,   226,     0,     0,   227,   228,
     229,   230,     0,     0,     0,     0,     0,   322,     0,     0,
       0,     0,   231,   232,     0,   233,   234,   235,   217,   218,
     219,   220,   221,   222,   223,   224,     0,   225,     0,   226,
       0,     0,   227,   228,   229,   230,     0,     0,  -199,     0,
       0,     0,     0,     0,     0,     0,   231,   232,     0,   233,
     234,   235,   217,   218,   219,   220,   221,   222,   223,   224,
       0,   225,     0,   226,     0,     0,   227,   228,   229,   230,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,   232,     0,   233,   234,   235,   217,   218,   219,   220,
     221,   222,   223,   224,     0,   225,     0,   226,     0,     0,
     227,   228,   229,   230,   509,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,   232,     0,   233,   234,   235,
     217,   218,   219,   220,   221,   222,   223,   224,     0,   225,
       0,   226,     0,     0,   227,   228,   229,   230,     0,     0,
       0,     0,     0,     0,     0,   520,     0,     0,   231,   232,
       0,   233,   234,   235,   217,   218,   219,   220,   221,   222,
     223,   224,     0,   225,     0,   226,     0,     0,   227,   228,
     229,   230,     0,     0,     0,     0,     0,     0,     0,   533,
       0,     0,   231,   232,     0,   233,   234,   235,   217,   218,
     219,   220,   221,   222,   223,   224,     0,   225,     0,   226,
       0,     0,   227,   228,   229,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,     0,   233,
     234,   235
};

static const yytype_int16 yycheck[] =
{
      17,   299,   133,   265,   266,    36,   268,   158,    25,     6,
     134,   345,    29,    30,     6,     6,   120,   141,   300,   415,
      37,   266,   358,   419,   459,    42,     6,    44,    45,    17,
       6,   464,     6,     6,    65,    32,    66,    25,    69,     6,
      57,    29,    30,    11,    89,    62,    91,     5,   468,    37,
      67,    14,     6,    16,    42,     6,    44,    45,   491,     6,
       6,    85,   300,    87,    88,    14,    83,    16,    85,    57,
     101,   195,    75,   506,    62,   471,    93,    94,     3,    67,
      88,    89,     4,    91,   366,    88,    83,   522,   508,    86,
     426,    88,    83,     6,    91,    83,    93,    85,    90,    17,
     117,   118,    14,   120,    16,    93,    94,    25,    96,    67,
      90,    29,    30,   509,    90,    89,    89,    85,    93,    37,
     478,   479,    89,    86,    42,    89,    44,    45,   366,   159,
     147,   465,   120,   150,   151,    89,   166,    86,    89,    57,
      79,   158,    89,    89,    62,   162,    88,    89,    86,    67,
     254,    90,    85,   184,    93,    93,   514,    91,    91,   147,
     422,   312,   150,   151,    85,    83,   411,    85,    85,   186,
     158,   188,   202,   418,   162,    93,    94,    75,    75,    88,
      89,     6,     7,   200,    88,    89,    14,    91,    16,   313,
      88,    88,    17,    89,    90,    93,    93,    22,   186,    97,
     188,    26,   120,   307,   502,    27,   194,    80,    88,    89,
     198,    91,   200,     5,     6,    90,   478,   479,    93,   323,
      91,   519,    92,    93,   241,     6,   524,   273,   274,   147,
      85,    23,   150,   151,    26,    27,    79,   254,   268,    64,
     158,   517,   518,    90,   162,    70,    89,    90,    73,    88,
      93,     0,   514,    59,    79,    90,     5,    59,     7,    84,
       9,    90,    54,     6,     6,    85,   254,    90,   186,    88,
     188,    96,    88,    17,   405,   113,   114,   115,   116,   117,
      89,    25,   200,   121,   122,    29,    30,    85,    80,    92,
     307,    83,    85,    37,    86,   312,    85,    89,    42,    91,
      44,    45,    85,    93,    53,    97,   323,    92,    92,   326,
      96,     6,    86,    57,    32,     6,    92,    85,    62,   307,
     350,    93,     6,    67,   312,   150,    85,    80,   345,   359,
      75,   361,   362,    87,    17,   323,   254,   162,   326,    83,
      87,    85,    25,    77,    90,    85,    29,    30,    77,    93,
      94,    92,    77,    75,    37,    59,    59,   345,    90,    42,
      90,    44,    45,    90,    90,    12,    86,    77,    92,    90,
      87,    87,    86,   198,    57,    87,   120,     5,     6,    62,
      85,    77,    59,    75,    67,    86,    12,    86,    90,   307,
      90,     2,    86,    86,   312,    23,   434,   418,    26,    27,
      83,    79,    85,   147,     7,   323,   150,   151,   326,    89,
      93,    94,     8,    30,   158,   261,    73,     6,   162,   431,
     404,   248,   405,   198,   319,   188,    54,   345,   458,   459,
      75,   150,    62,    -1,    -1,    80,   261,   120,    -1,    -1,
      -1,    -1,   186,   268,   188,    -1,    -1,    -1,   465,    -1,
      -1,    -1,    80,    -1,    -1,    83,   200,    -1,   475,    59,
      -1,    89,    -1,    91,   147,    -1,    -1,   150,   151,    97,
      -1,    -1,    -1,    73,    74,   158,    76,   465,    78,   162,
      -1,    81,    82,    83,    84,    -1,    -1,   475,    -1,    -1,
      -1,    -1,   522,    -1,    -1,    95,    96,    -1,    98,    -1,
      -1,    17,    -1,   186,    -1,   188,   523,    -1,    -1,    25,
     254,    -1,    -1,    29,    30,    -1,    -1,   200,    -1,    -1,
      -1,    37,    -1,    47,    -1,    -1,    42,   172,    44,    45,
      -1,   176,    -1,    -1,    -1,   523,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,     5,     6,    62,   465,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,
      84,    -1,    23,   307,    -1,    26,    27,    83,   312,    85,
      -1,   254,    -1,    -1,    -1,    -1,    -1,    93,    94,   323,
      -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    54,   118,   119,   241,    -1,    -1,    -1,
      -1,   345,    -1,    -1,   120,   523,   431,   252,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    83,   268,   307,    -1,   271,    88,    89,   312,
      91,   147,    93,    -1,   150,   151,   160,    -1,    -1,    54,
     323,    -1,   158,   326,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,   345,    -1,    -1,    80,    -1,    -1,    83,    -1,
     186,    86,   188,    -1,    89,    -1,    91,    -1,    -1,     5,
       6,     7,    97,     9,   200,    11,    -1,    13,    -1,    15,
      -1,    17,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,   236,    39,    40,    41,    42,    -1,   242,    -1,
      -1,   465,    -1,    -1,    -1,   249,    -1,    53,    54,    -1,
      -1,   475,    -1,    -1,    -1,    -1,   381,    -1,   254,   384,
      -1,   265,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,
      76,   275,   397,    -1,    80,    81,    82,    83,    -1,    85,
      86,    -1,    -1,    89,    -1,    91,    -1,   412,    94,    95,
      -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,    -1,   523,
      -1,    -1,   465,    -1,   429,   430,   431,    -1,    -1,    -1,
      -1,   307,   475,    -1,   439,   440,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,   330,   323,    -1,    -1,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,   345,
      -1,    -1,    -1,   357,   358,    -1,    -1,     5,     6,    -1,
     523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,   376,    54,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,   400,    -1,    79,    80,
     404,   405,    83,    -1,    -1,   409,    54,    -1,    89,    90,
      91,    -1,    -1,    -1,   418,    -1,    -1,    -1,   422,    -1,
      -1,    -1,   426,    -1,    -1,    -1,    -1,   431,    76,    77,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,    -1,
      -1,    89,    -1,    91,   448,    -1,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     464,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,    -1,    -1,    -1,   478,   479,    -1,   481,   482,   475,
      -1,    -1,    59,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,   496,    -1,    -1,    -1,    73,    74,   502,    76,
      -1,    78,   506,    -1,    81,    82,    83,    84,    -1,    -1,
     514,    -1,    -1,   517,   518,   519,    -1,    -1,    95,    96,
     524,    98,     5,     6,     7,    -1,     9,   523,    11,    -1,
      13,    -1,    15,    -1,    17,    18,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,     5,     6,    80,    81,    82,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    91,    -1,
      -1,    94,    95,    23,    -1,    -1,    26,    27,     5,     6,
      30,    -1,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    54,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    54,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    76,
      -1,     5,     6,    80,    81,    82,    83,    -1,    85,    86,
      -1,    -1,    89,    -1,    91,    -1,    -1,    94,    95,    23,
      -1,    -1,    26,    27,     5,     6,    30,    -1,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      54,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    54,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    86,    -1,    -1,    89,    -1,    91,    -1,    -1,
      94,    95,    -1,    -1,    -1,    76,    -1,     5,     6,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      91,    92,    -1,    94,    95,    23,    -1,    -1,    26,    27,
       5,     6,    30,    -1,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    54,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    54,
      -1,    -1,    80,    81,    82,    83,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    91,    92,    -1,    94,    95,    -1,    -1,
      -1,    76,    -1,     5,     6,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    -1,    -1,    94,
      95,    23,    -1,    -1,    26,    27,     5,     6,    30,    -1,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    54,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    54,    -1,    -1,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    95,    -1,    -1,    -1,    76,    -1,     5,
       6,    80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    -1,    -1,    94,    95,    23,    -1,    -1,
      26,    27,     5,     6,    30,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    54,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    54,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      -1,    -1,    -1,    89,    -1,    91,    -1,    -1,    94,    95,
      -1,    -1,    -1,    76,    -1,     5,     6,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    92,
      -1,    94,    95,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,     5,     6,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    91,    -1,    -1,    94,    95,    23,    -1,    -1,    26,
      27,     5,     6,    30,    -1,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    54,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      54,    -1,    -1,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    -1,    76,    -1,     5,     6,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    92,    -1,
      94,    95,    23,    -1,    -1,    26,    27,     5,     6,    30,
      -1,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    54,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    54,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    -1,    -1,    -1,    89,    -1,
      91,    -1,    -1,    94,    95,    -1,    -1,    -1,    76,    -1,
       5,     6,    80,    81,    82,    83,    -1,    85,    -1,    -1,
      -1,    89,    -1,    91,    -1,    -1,    94,    95,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    -1,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,     5,     6,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    91,    19,    54,    94,
      95,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    79,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    54,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,     5,     6,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,
      19,    -1,    94,    95,    23,    -1,    -1,    26,    27,     5,
       6,    30,    -1,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    54,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    54,    -1,
      -1,    80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    91,    -1,    -1,    94,    95,    -1,    -1,    -1,
      76,    -1,     5,     6,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    91,    -1,    -1,    94,    95,
      23,    -1,    -1,    26,    27,     5,     6,    30,    -1,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    54,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    54,    -1,    -1,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    -1,
      -1,    94,    95,    -1,    -1,    -1,    76,    -1,     5,     6,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    91,    -1,    -1,    94,    95,    23,    -1,    -1,    26,
      27,     5,     6,    30,    -1,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    80,    -1,    59,    83,    23,    -1,    -1,
      26,    27,    89,    -1,    91,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    80,     5,     6,    83,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    54,     5,
       6,    80,    -1,    59,    83,    23,    -1,    -1,    26,    27,
      89,    -1,    91,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,     5,     6,    89,    -1,    91,    54,    -1,     5,     6,
      -1,    -1,    -1,    -1,    -1,     5,     6,    53,    54,    23,
      -1,    -1,    26,    27,    -1,    -1,    23,    -1,    -1,    26,
      27,    79,    80,    23,    -1,    83,    26,    27,    -1,    -1,
      -1,    89,    -1,    91,    80,    -1,    -1,    83,    -1,    53,
      54,    -1,    -1,    89,    -1,    91,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    80,    -1,    89,    83,    91,    -1,    -1,
      80,    -1,    89,    83,    91,    59,    60,    61,    -1,    89,
      -1,    91,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    95,    96,    -1,    98,    99,   100,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    -1,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    95,    96,    -1,    98,    99,   100,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    95,    96,    -1,    98,    99,
     100,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    59,    95,    96,    -1,
      98,    99,   100,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    96,    -1,    98,    99,   100,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    92,    93,    -1,    95,    96,    -1,    98,
      99,   100,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      95,    96,    -1,    98,    99,   100,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    95,    96,    -1,    98,    99,   100,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,
      -1,    98,    99,   100,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    95,    96,    -1,    98,    99,   100,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    98,
      99,   100,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    98,    99,   100,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    98,    99,   100,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    99,   100,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    95,    96,    -1,    98,    99,   100,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    98,
      99,   100
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   102,     4,     0,     5,     7,     9,    53,   103,
     104,   106,   116,   140,   145,   155,     6,    89,   105,   107,
     216,     6,    89,   156,   158,   219,    89,   141,   143,   219,
       6,    89,   146,   148,   149,   150,     5,     6,    23,    26,
      27,    54,    79,    80,    83,    89,    90,    91,   198,   201,
     202,   203,   206,   212,   213,   217,   218,   219,   220,   226,
     227,   228,   229,   230,    91,   151,   214,   216,     6,   172,
      93,    90,   157,   158,     6,    59,   198,    90,   142,   143,
      59,   144,   198,    59,    91,   151,   198,    90,   147,   148,
     214,    88,   198,    91,    85,    80,    85,   198,    27,   198,
     198,     5,     6,    30,    32,    33,    35,    36,    37,    39,
      40,    41,    42,    76,    80,    81,    82,    83,    89,    91,
      92,    94,    95,   166,   167,   168,   169,   170,   171,   173,
     174,   175,   176,   177,   184,   185,   186,   187,   188,   189,
     198,   201,   203,   204,   206,   226,   227,    91,   199,    90,
      93,    79,   198,   198,   205,   230,   152,   153,   219,   214,
      85,   190,    89,   198,   215,   216,   214,   219,    90,   157,
     166,   197,    59,    90,   142,   197,    59,   198,     6,   198,
      90,   147,     6,   198,     6,    86,    97,   198,   221,   222,
     223,   224,   225,     6,    83,   201,   207,   208,   209,   211,
     219,    90,   214,    88,   167,    27,   167,   167,   167,   167,
     198,   166,   198,    79,   205,   167,   167,    67,    68,    69,
      70,    71,    72,    73,    74,    76,    78,    81,    82,    83,
      84,    95,    96,    98,    99,   100,   231,   232,   233,   234,
      88,    89,    91,   192,   193,   194,   195,   196,    88,    85,
     178,   199,    89,   199,    92,   198,   200,    90,   218,   198,
      92,    93,   154,   224,   190,    11,    13,    15,    17,    18,
      21,    22,    24,    25,    28,    29,   108,   109,   115,   116,
     117,   118,   119,   120,   121,   123,   129,   130,   131,   135,
     159,   160,   161,   162,   163,   164,   165,   166,   190,   191,
     197,   219,   198,   190,    93,   197,   197,    92,   214,   198,
      86,   222,    96,   201,   199,    86,   208,    32,   210,   198,
     190,     6,    90,    92,   166,     6,    89,    90,   197,   198,
      87,   166,   172,     6,    86,   166,   178,   179,   180,   181,
     182,   183,    90,   197,   205,    93,    92,    93,   152,   159,
     166,     6,    85,   136,   159,   166,   168,    19,    77,   110,
     111,   113,   114,   159,   166,   190,   197,   219,     6,   122,
      85,   197,   166,   122,   122,   166,    80,    60,    61,    86,
     108,    59,   232,   233,    75,   197,   205,   224,   199,   210,
     205,   198,    79,    90,    93,    79,    90,    93,    92,   166,
      87,    92,    93,    86,    93,    87,    90,   200,    92,    77,
     190,    75,    14,    16,   132,   133,   134,    85,    77,    85,
      88,   166,    77,   110,   166,   190,    77,   190,   190,    59,
      75,    14,    16,    86,   124,   125,   126,   166,   197,    59,
      59,   197,    90,    90,    90,    90,    90,   197,    87,    92,
      92,   166,    92,    86,   180,   166,   178,   183,   166,    12,
     168,   197,    86,   132,    87,    14,    16,   137,   138,   139,
       6,    85,   136,   166,   132,    89,   112,   159,    77,    77,
     110,    19,    19,   127,   128,   162,   166,   197,   219,    86,
     125,    87,   197,   197,    90,   166,    87,    92,   190,   129,
     190,    88,   191,   200,    86,   137,    87,   132,    85,    85,
      86,    53,   112,   112,    77,   166,   166,    59,    75,   191,
      92,   166,    12,    89,   191,    86,   137,   132,    90,   112,
     128,   166,   128,    92,   129,   190,    53,    86,    86,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   103,   103,   103,   104,   104,   104,
     104,   105,   106,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   109,   110,   111,   112,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   114,   115,   116,   116,   116,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   123,
     123,   124,   124,   125,   126,   126,   126,   127,   127,   127,
     128,   129,   129,   129,   129,   129,   129,   130,   130,   131,
     131,   131,   131,   132,   132,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   139,   139,   140,   141,   141,
     141,   142,   142,   143,   144,   144,   144,   145,   146,   146,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   152,
     152,   153,   154,   155,   156,   156,   156,   157,   157,   158,
     158,   158,   159,   159,   159,   159,   159,   159,   160,   161,
     162,   163,   164,   164,   165,   165,   165,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   170,   171,   172,
     173,   173,   173,   173,   174,   174,   174,   175,   175,   175,
     175,   175,   175,   176,   177,   177,   177,   177,   177,   177,
     177,   178,   178,   178,   179,   179,   180,   180,   181,   181,
     181,   182,   183,   183,   184,   184,   185,   186,   186,   186,
     186,   187,   188,   188,   189,   190,   191,   191,   192,   193,
     193,   194,   194,   194,   194,   194,   194,   195,   196,   196,
     196,   196,   196,   196,   196,   196,   197,   197,   198,   198,
     198,   198,   199,   199,   200,   200,   201,   201,   202,   202,
     202,   202,   202,   202,   202,   202,   203,   204,   205,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     211,   211,   212,   213,   214,   214,   215,   215,   216,   216,
     216,   217,   217,   218,   218,   218,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   224,   224,   225,
     225,   226,   227,   228,   229,   229,   230,   230,   230,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   233,   233,   233,   233,   234,   234,   234,   234,   234,
     234
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     1,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     2,     1,     1,     1,     5,     3,     4,     4,     3,
       4,     3,     4,     4,     2,     2,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     4,
       3,     2,     1,     3,     2,     2,     1,     3,     3,     1,
       1,     7,     7,     5,     5,     5,     3,     1,     1,     7,
       6,     5,     4,     2,     1,     3,     2,     1,     7,     5,
       7,     5,     2,     1,     3,     2,     1,     2,     1,     3,
       2,     2,     1,     2,     3,     2,     0,     2,     1,     3,
       2,     2,     1,     1,     1,     3,     2,     3,     3,     3,
       1,     2,     1,     2,     1,     3,     2,     2,     1,     2,
       4,     3,     1,     1,     1,     1,     1,     1,     3,     0,
       3,     1,     2,     2,     3,     4,     4,     1,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     4,     3,     3,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     4,     1,     1,     1,
       2,     4,     3,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     2,     3,
       4,     5,     4,     4,     3,     7,     6,     4,     3,     4,
       4,     4,     4,     3,     5,     2,     3,     1,     1,     2,
       1,     3,     3,     4,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     4,
       0,     1,     2,     1,     3,     2,     0,     1,     3,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     3,     2,
       4,     3,     1,     3,     2,     2,     1,     2,     1,     3,
       4,     3,     2,     1,     1,     1,     2,     3,     1,     1,
       2,     3,     5,     2,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: PACKAGE IMPORTS  */
#line 30 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2420 "y.tab.c"
    break;

  case 80: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 144 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2426 "y.tab.c"
    break;


#line 2430 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 499 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
