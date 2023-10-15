
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "lab.yacc"

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


/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 288 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNRULES -- Number of states.  */
#define YYNSTATES  352

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    94,    95,     2,
      83,    84,    81,    79,    85,    80,    97,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,     2,
      93,     2,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    96,    87,     2,     2,     2,     2,
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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    19,    23,    26,
      31,    36,    41,    43,    45,    47,    49,    50,    52,    55,
      58,    61,    65,    69,    74,    79,    83,    87,    91,    95,
     100,   104,   107,   111,   115,   118,   122,   125,   129,   134,
     137,   140,   143,   147,   150,   152,   156,   159,   164,   168,
     170,   174,   178,   182,   187,   189,   192,   198,   202,   205,
     208,   212,   214,   216,   218,   220,   225,   227,   229,   236,
     237,   239,   242,   244,   247,   253,   258,   262,   266,   268,
     270,   273,   275,   279,   282,   285,   289,   293,   297,   301,
     306,   309,   313,   316,   320,   321,   323,   325,   329,   331,
     334,   339,   341,   352,   362,   363,   368,   374,   376,   377,
     382,   385,   389,   391,   392,   395,   397,   403,   407,   411,
     413,   417,   419,   421,   424,   428,   432,   437,   441,   442,
     444,   446,   449,   451,   453,   455,   457,   459,   461,   463,
     473,   479,   482,   485,   487,   489,   490,   492,   494,   496,
     498,   500,   502,   504,   506,   508,   510,   515,   521,   523,
     525,   527,   529,   531,   533,   535,   537,   539,   541,   543,
     545,   547,   549,   551,   553,   555,   557,   559,   561,   563,
     565,   567,   570,   572,   574,   576,   578,   580,   582,   584,
     586,   588,   590,   592,   594,   598,   601,   604,   609,   611,
     612,   616,   618,   620,   622,   625,   627,   629,   632,   636,
     638,   640,   642
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      99,     0,    -1,     3,     4,    -1,    99,   100,    -1,    99,
     130,    -1,    99,   117,    -1,     7,   129,   101,    -1,     9,
     129,   101,    -1,   129,   101,    -1,     7,    83,   102,    84,
      -1,     9,    83,   129,    84,    -1,     9,    83,   103,    84,
      -1,   114,    -1,   112,    -1,   113,    -1,   109,    -1,    -1,
     104,    -1,   129,   129,    -1,   103,   104,    -1,   103,   129,
      -1,   129,    56,   122,    -1,   129,    56,   123,    -1,   129,
     149,    56,   122,    -1,   129,   149,    56,   123,    -1,   104,
      85,   122,    -1,   104,    85,   123,    -1,    86,   129,    87,
      -1,    86,   111,    87,    -1,    86,   111,    85,    87,    -1,
      86,   108,    87,    -1,    86,    87,    -1,    88,   123,    89,
      -1,    88,   122,    89,    -1,    88,    89,    -1,    88,    76,
      89,    -1,   106,    81,    -1,    88,   150,    89,    -1,   107,
      88,   150,    89,    -1,   150,    90,    -1,   108,   115,    -1,
     108,    85,    -1,   108,   150,    90,    -1,   109,   110,    -1,
     110,    -1,   129,    56,   111,    -1,   129,   149,    -1,   129,
     149,    56,   111,    -1,   111,    85,   150,    -1,   150,    -1,
     149,    56,   111,    -1,   149,    56,   122,    -1,   149,    56,
     139,    -1,   149,    56,   149,   105,    -1,   149,    -1,    72,
     111,    -1,    72,     6,    86,   116,    87,    -1,    72,   149,
     105,    -1,    56,   115,    -1,    56,   139,    -1,    56,   149,
     105,    -1,   129,    -1,   122,    -1,   111,    -1,    10,    -1,
       6,    86,   116,    87,    -1,   111,    -1,   119,    -1,    50,
       6,    51,    86,   118,    87,    -1,    -1,   119,    -1,   119,
     120,    -1,   120,    -1,     6,   149,    -1,     6,    51,    86,
     118,    87,    -1,     6,    86,   111,    87,    -1,   122,   148,
     123,    -1,   123,   148,   123,    -1,     6,    -1,   150,    -1,
       6,   107,    -1,    10,    -1,    83,   122,    84,    -1,     6,
      57,    -1,     6,    58,    -1,     6,   107,    57,    -1,     6,
     107,    58,    -1,   125,   128,   126,    -1,   126,   128,   126,
      -1,    91,    83,   125,    84,    -1,     6,   127,    -1,     6,
     107,   127,    -1,   141,     6,    -1,   141,     6,   107,    -1,
      -1,    68,    -1,    69,    -1,   129,    85,     6,    -1,     6,
      -1,     6,   107,    -1,   129,    85,     6,   107,    -1,    77,
      -1,     5,   131,     6,    83,   132,    84,   149,    86,   134,
      87,    -1,     5,   131,     6,    83,   132,    84,    86,   134,
      87,    -1,    -1,    83,     6,   149,    84,    -1,    83,     6,
     107,   149,    84,    -1,   133,    -1,    -1,   133,    85,   149,
       6,    -1,   149,     6,    -1,   149,     6,   107,    -1,   135,
      -1,    -1,   135,   146,    -1,   146,    -1,    11,   138,    86,
     134,    87,    -1,   136,    12,   137,    -1,    86,   134,    87,
      -1,   136,    -1,   138,    74,   139,    -1,   139,    -1,     6,
      -1,     6,   107,    -1,   140,   141,   140,    -1,     6,    72,
     150,    -1,     6,   107,    72,   150,    -1,   139,   128,   139,
      -1,    -1,   150,    -1,     6,    -1,     6,   107,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    75,    -1,    92,
      -1,    93,    -1,    17,   143,    74,   144,    74,   145,    86,
     135,    87,    -1,    17,   144,    86,   134,    87,    -1,   129,
     113,    -1,   129,   114,    -1,    72,    -1,   139,    -1,    -1,
     124,    -1,   122,    -1,   100,    -1,   155,    -1,   136,    -1,
     122,    -1,   124,    -1,   147,    -1,   125,    -1,   142,    -1,
       6,    83,   156,    84,    -1,     6,   107,    83,   156,    84,
      -1,    79,    -1,    80,    -1,    94,    -1,    82,    -1,    81,
      -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    95,    -1,    96,    -1,    73,    -1,    70,    -1,    71,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,   106,   149,    -1,
      38,    -1,    36,    -1,    37,    -1,    30,    -1,    35,    -1,
      31,    -1,    32,    -1,    33,    -1,   151,    -1,    34,    -1,
     152,    -1,   154,    -1,    30,    97,    30,    -1,    78,    30,
      -1,    39,   153,    -1,    10,    83,   156,    84,    -1,   157,
      -1,    -1,   157,    85,   158,    -1,   158,    -1,   150,    -1,
       6,    -1,     6,   107,    -1,   155,    -1,   122,    -1,    95,
       6,    -1,    95,     6,   107,    -1,   139,    -1,   125,    -1,
     121,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    33,    34,    38,    39,    40,    41,
      42,    43,    48,    49,    50,    52,    53,    57,    58,    59,
      60,    62,    63,    64,    65,    66,    67,    72,    73,    74,
      75,    76,    79,    80,    81,    82,    83,    85,    86,    88,
      89,    90,    91,    96,    97,    99,   100,   101,   104,   105,
     107,   108,   109,   110,   111,   114,   115,   116,   119,   120,
     121,   124,   125,   126,   127,   128,   130,   131,   134,   137,
     138,   140,   141,   143,   144,   146,   152,   153,   156,   157,
     158,   159,   160,   163,   164,   165,   166,   169,   170,   171,
     173,   174,   176,   177,   178,   180,   181,   183,   184,   185,
     186,   187,   191,   192,   199,   200,   201,   204,   205,   207,
     208,   209,   211,   212,   215,   216,   221,   222,   225,   226,
     228,   229,   230,   231,   235,   236,   237,   238,   240,   241,
     242,   243,   281,   282,   283,   284,   285,   286,   287,   291,
     292,   295,   296,   297,   301,   302,   304,   305,   308,   309,
     310,   311,   312,   313,   314,   315,   320,   321,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   366,   367,   370,   376,   378,   382,   384,   385,
     387,   388,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PACKAGE", "IMPORTS", "FUNCTION", "id",
  "VAR", "EOL", "CONST", "METHOD", "IF", "ELSE", "SWITCH", "CASE",
  "FALLTHROUGH", "DEFAULT", "FOR", "BREAK", "RANGE", "NEW", "SELECT",
  "RETURN", "MAP", "GO", "GOTO", "INTERFACE", "CHAN", "CONTINUE", "DEFER",
  "CONST_INT", "CONST_CHAR", "CONST_STRING", "BOOL", "IOTA",
  "NEG_CONST_INT", "CONST_OCTAL", "CONST_HEX", "CONST_BIN", "FLOAT_HEX",
  "CONST_INT_ERR", "CONST_BIN_ERR", "INT", "STRING", "COMPLEXTYPE", "BYTE",
  "FLOAT", "RUNE", "UINT", "BOOL_TYPE", "TYPE", "STRUCT", "UINTPTR",
  "ERRORTYPE", "ANYTYPE", "COMPARABLE", "EQ", "INC", "DEC", "SUBEQ",
  "PLUSEQ", "MULEQ", "DIVEQ", "MODEQ", "EQUAL", "NOTEQUAL",
  "GREATEROREQUAL", "LESSOREQUAL", "AND", "OR", "LSHIFT", "RSHIFT", "PEQ",
  "XOR", "SEMICOLON", "AMP_EXP", "POINT", "EXPONENT", "HEX_EXPONENT",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "','", "'{'", "'}'", "'['",
  "']'", "':'", "'!'", "'>'", "'<'", "'%'", "'&'", "'|'", "'.'", "$accept",
  "prog", "variables", "definitions", "var_definition", "const_definition",
  "begin_const_definition", "mass", "mass_len", "mass_index",
  "mass_len_list", "var_def_list", "var_def", "data_list",
  "simple_definition", "typeless_def", "other_definitions", "other",
  "list", "struct_def", "struct_body", "struct_list", "struct_contain",
  "struct_init", "expression", "expression_args", "single_expression",
  "logical_expression", "log_arguments", "logical_condition",
  "logical_operator", "id_list", "body", "return_value", "parameters",
  "parameter_list", "statements", "statement", "if_block", "else_block",
  "conditions", "condition", "cond_args", "eq_op", "for_loop", "for_def",
  "for_cond", "for_act", "actions", "function_call", "operator", "type",
  "data", "float_lit", "decimal_float_lit", "hex_exponent",
  "hex_float_lit", "methods", "method_arguments", "arg_list", "arguments", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    43,
      45,    42,    47,    40,    41,    44,   123,   125,    91,    93,
      58,    33,    62,    60,    37,    38,   124,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   110,   110,   110,   111,   111,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   116,   116,   117,   118,
     118,   119,   119,   120,   120,   121,   122,   122,   123,   123,
     123,   123,   123,   124,   124,   124,   124,   125,   125,   125,
     126,   126,   127,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   130,   130,   131,   131,   131,   132,   132,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   138,   138,   139,   139,   139,   139,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   146,   146,   146,   146,   146,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   152,   153,   154,   155,   156,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     3,     3,     2,     4,
       4,     4,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     3,     4,     4,     3,     3,     3,     3,     4,
       3,     2,     3,     3,     2,     3,     2,     3,     4,     2,
       2,     2,     3,     2,     1,     3,     2,     4,     3,     1,
       3,     3,     3,     4,     1,     2,     5,     3,     2,     2,
       3,     1,     1,     1,     1,     4,     1,     1,     6,     0,
       1,     2,     1,     2,     5,     4,     3,     3,     1,     1,
       2,     1,     3,     2,     2,     3,     3,     3,     3,     4,
       2,     3,     2,     3,     0,     1,     1,     3,     1,     2,
       4,     1,    10,     9,     0,     4,     5,     1,     0,     4,
       2,     3,     1,     0,     2,     1,     5,     3,     3,     1,
       3,     1,     1,     2,     3,     3,     4,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     9,
       5,     2,     2,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     4,     1,     0,
       3,     1,     1,     1,     2,     1,     1,     2,     3,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,   104,    98,     0,     0,     0,
     101,     3,     5,     0,     4,     0,     0,     0,    99,    16,
       0,     0,     0,     0,   173,   174,   175,   176,   177,   178,
     179,   180,   128,     0,     0,     0,     8,     0,    13,    14,
      12,    54,     0,     0,   185,   187,   188,   189,   191,   186,
     183,   184,   182,     0,     0,   190,   192,   193,     0,     0,
      15,    44,     0,     6,     0,    17,     0,     7,     0,    98,
      64,     0,    63,    58,    62,     0,    61,    59,     0,     0,
      49,     0,    55,     0,    49,    97,    78,    81,     0,    34,
       0,     0,    79,    36,   181,   128,     0,     0,     0,   108,
       0,     0,   196,    37,     0,     9,    43,     0,    46,    11,
      19,    20,     0,     0,    10,    18,     0,    69,     0,     0,
      99,     0,     0,   163,   164,   165,   166,   167,   171,   172,
     170,   158,   159,   162,   161,   160,   168,   169,     0,     0,
      95,    96,   128,   132,   133,   134,   135,   136,   137,   138,
     128,     0,    60,     0,    57,   100,    80,    35,    33,    32,
      78,    50,    51,    52,     0,    79,     0,     0,   105,     0,
     107,     0,   194,   195,    38,    45,     0,    25,    26,    21,
      22,     0,     0,     0,    70,    72,   125,    66,     0,    67,
       0,    82,    48,    76,    77,   130,   127,   129,   130,   124,
      31,     0,     0,     0,    49,     0,    80,    53,    79,   106,
       0,     0,   110,    47,    23,    24,     0,    73,    68,    71,
      65,   126,   131,   131,    98,    41,    30,    40,    49,     0,
      28,    27,    39,    56,   113,     0,     0,   111,    69,    99,
      42,    29,    78,    81,   128,   128,     0,   148,   151,   152,
     154,     0,     0,   112,   150,   155,   115,   153,   149,   113,
     109,     0,    83,    84,   128,    80,    90,     0,   128,   130,
       0,   121,   130,   143,     0,   144,     0,     0,     0,     0,
       0,   103,   114,     0,     0,    74,    78,    81,     0,   211,
     206,   210,   209,    79,   205,     0,   198,   201,    85,    86,
     128,    91,    92,     0,   131,   128,   113,   131,   141,   142,
     128,   113,    94,     0,    87,    88,   113,   119,   117,   102,
       0,    80,   207,   156,   128,     0,    93,   197,   120,     0,
       0,     0,    94,    89,     0,     0,   208,   200,   157,   116,
       0,   140,   118,    75,    78,   147,   146,     0,    80,     0,
       0,   139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   247,    36,    59,    64,    65,   152,    37,    18,
     201,    60,    61,    72,    38,    39,    40,    73,   188,    12,
     183,   184,   185,   289,   248,    75,   249,   250,   251,   266,
     142,    13,    14,    16,   169,   170,   252,   253,   254,   318,
     270,   292,    78,   267,   255,   276,   277,   347,   256,   257,
     138,    41,    92,    55,    56,   102,    57,   258,   295,   296,
     297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -255
static const yytype_int16 yypact[] =
{
      27,    19,   167,  -255,  -255,   -70,   -47,    20,    53,    52,
    -255,  -255,  -255,   809,  -255,    73,    92,  1258,   -19,     6,
     809,     6,   809,    24,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,   498,   310,    95,   438,  -255,   177,  -255,  -255,
    -255,    50,   509,    32,    35,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,    57,    55,  -255,  -255,  -255,  1258,    64,
       6,  -255,   637,  -255,     9,    74,   565,  -255,    66,   870,
    1119,   696,    78,  -255,  1157,  1157,    90,   119,   572,    99,
     946,   103,    78,    99,  -255,   -47,   -47,  -255,   116,  -255,
     973,  1011,  -255,  -255,  -255,   557,   438,   856,   108,   871,
     178,   180,  -255,  -255,   118,  -255,  -255,  1258,   153,  -255,
      74,   824,   696,   696,  -255,    90,   156,   210,  1258,  1225,
     908,  1049,  1258,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,   696,   696,
    -255,  -255,  1235,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    1248,    18,  -255,  1225,  -255,   -19,   -19,  -255,  -255,  -255,
     625,    78,  1157,   119,    99,    55,   438,   145,  -255,   146,
     157,   235,  -255,  -255,  -255,    78,  1258,  1157,  1157,  1157,
    1157,   696,   151,   160,   210,  -255,  -255,    78,   163,   210,
    1258,  -255,  -255,  -255,  -255,   -53,   119,  -255,   -47,  -255,
    -255,   624,    41,    58,   173,   182,   693,  -255,   118,  -255,
     840,   871,   -47,    78,  1157,  1157,   184,  -255,  -255,  -255,
    -255,  -255,    22,   -19,   430,  -255,  -255,  -255,  1076,   330,
    -255,  -255,  -255,  -255,   404,   186,   260,   -19,   210,  1114,
    -255,  -255,   705,   190,  1269,   638,   191,  -255,  1157,  -255,
     119,   119,   189,   404,   267,  -255,  -255,  -255,  -255,   404,
    -255,   195,  -255,  -255,   287,   757,  -255,   277,   287,   166,
     -13,   119,   171,  -255,   -45,   119,   211,   198,     1,   280,
     280,  -255,  -255,     5,   200,  -255,  1245,   -51,   282,  -255,
    1157,   119,   119,   743,  -255,   206,   213,  -255,  -255,  -255,
     287,  -255,   -47,   212,   174,  1235,   404,   179,  -255,  -255,
     393,   404,  1260,    69,  -255,  -255,   404,   267,  -255,  -255,
    1258,  1275,   -47,  -255,   300,   216,   -19,  -255,   119,   208,
     227,   215,  1290,  -255,   217,    83,   -19,  -255,  -255,  -255,
     706,  -255,  -255,  -255,   -20,  1157,  -255,   219,    63,   404,
     370,  -255
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,   305,   164,  -255,  -255,   247,   -75,  -255,   -41,
    -255,  -255,   252,   -29,  -255,    40,    54,   114,   176,  -255,
      89,  -110,  -122,  -255,   -32,   -25,    11,   -87,   -76,  -205,
    -133,    10,  -255,  -255,  -255,  -255,  -234,    23,    91,  -255,
    -255,   -30,   223,   272,  -255,  -255,    65,  -255,  -248,  -255,
     -55,    67,   -11,  -255,  -255,  -255,  -255,  -118,  -254,  -255,
      60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -213
static const yytype_int16 yytable[] =
{
      74,    97,    77,    90,    82,   282,    54,   312,   154,   189,
      91,    32,     6,    15,   303,     6,   244,    20,    22,   118,
     139,    80,    84,     3,     6,   284,     6,    33,   120,    62,
       1,    66,   268,  -212,  -212,    17,   139,   262,   263,   121,
      34,    17,    76,   189,   155,   156,   325,   104,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    23,     6,
     301,   305,   219,   162,    90,   163,   161,   219,    17,    58,
      62,    91,   329,   306,   111,    68,   115,   331,   175,    42,
     177,   179,   334,    10,    80,   165,    10,   178,   180,   207,
     187,   316,   246,   109,   190,    10,    84,    10,    43,    79,
      83,    85,   282,    19,    94,   200,    95,   186,    84,    98,
      58,   192,   196,   193,   194,    99,   301,   279,   280,   206,
     298,   299,   202,   139,   187,   139,   229,   301,   230,   108,
      10,   197,   100,   116,    90,   101,    21,   140,   141,   197,
     204,    91,    84,    34,   103,   231,   294,   213,   105,   214,
     294,    58,   117,   333,   222,   208,   215,   223,   279,   112,
     139,   203,   164,   122,   167,    84,   171,     4,   122,    74,
     343,   237,     5,     6,     7,    34,     8,   291,   116,   221,
     279,   291,   294,   239,    63,   151,    67,   140,   141,   153,
     228,   313,   168,    24,    25,    26,    27,    28,    29,    30,
      31,   265,   216,   314,   315,   157,   294,   174,   172,   176,
     173,    76,   181,   291,   271,   275,   182,     9,   192,    24,
      25,    26,    27,    28,    29,    30,    31,   -98,   304,   209,
     210,   307,   290,   197,   197,   -99,   290,   291,   118,    35,
    -122,   212,   211,   118,    10,   321,   190,   218,  -123,   217,
     220,   190,  -122,   293,    17,   274,   -98,   293,    93,    17,
    -123,   326,    58,   232,   -99,    35,   260,    58,   290,   233,
     238,   332,   259,   268,   278,   328,   281,   235,   236,   283,
     275,   336,   285,   302,   311,   310,   312,   319,   322,   293,
     323,   335,   290,   286,   197,   339,   327,   287,   324,   197,
     338,   340,   341,   348,   342,   349,   286,    11,   345,    84,
     287,   110,   106,   293,   308,   227,    81,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   261,   309,   205,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     150,   346,    24,    25,    26,    27,    28,    29,    30,    31,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      71,  -199,   350,   199,   317,   330,   242,     7,   246,     8,
     243,   244,   288,    71,   337,     0,     0,   245,     0,     0,
       0,   246,     0,     0,     0,   288,     0,     0,    35,   195,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     242,     7,     0,     8,   243,   244,     0,   241,     0,     0,
       0,   245,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    86,     0,     0,    10,    87,     0,
       0,     0,     0,    71,     0,     0,     0,   351,     0,     0,
       0,   246,     0,     0,     0,     0,     0,  -145,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,    10,     0,     0,     0,     0,     0,    71,     0,   -78,
     -78,   -78,   -78,   -78,     0,   246,     0,     0,     0,     0,
     -78,   -78,     0,   -78,    69,     0,     0,     0,    70,   -78,
     -78,   -78,   -78,     0,    88,     0,   119,     0,    17,     0,
       0,    71,     0,     0,   -78,   -78,   -78,    89,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,     0,
       0,     0,     0,   160,     0,     0,     0,    87,     0,     0,
       0,     6,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    35,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    96,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    24,    25,    26,
      27,    28,    29,    30,    31,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,    70,     0,   143,   144,   145,   146,
      71,     0,    10,     0,   272,    35,     0,   147,     0,   114,
      34,     0,     0,    35,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   148,   149,     0,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,  -130,
    -130,  -130,  -130,   107,     0,     0,     0,   118,     0,     0,
    -130,    10,    86,     0,     0,     0,    87,    71,     0,   225,
     273,   226,   344,    17,     0,    10,    87,  -130,  -130,     0,
       0,     0,    34,     0,  -145,    35,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,     0,     0,  -131,  -131,  -131,
    -131,   -98,   262,   263,     0,   190,     0,     0,  -131,   143,
     144,   145,   146,   -94,   -94,     0,     0,   -98,     0,    71,
     147,    58,     0,     0,     0,  -131,  -131,     0,   264,    71,
     -98,     0,     0,    17,     0,     0,     0,   148,   149,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,  -129,  -129,  -129,
    -129,     0,     0,   -99,   298,   299,     0,     0,  -129,     0,
       0,   143,   144,   145,   146,   -94,   -94,  -202,  -202,   -99,
       0,     0,   147,     0,     0,  -129,  -129,     0,     0,     0,
     300,     0,   -99,     0,     0,    58,     0,     0,     0,   148,
     149,    24,    25,    26,    27,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,    32,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
     113,    33,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,     0,    34,     0,     0,    35,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    34,
       0,     0,    35,    24,    25,    26,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,   234,     0,    35,   -78,
     -78,   -78,   -78,   -78,  -130,  -130,  -130,  -130,     0,     0,
     -78,   -78,   118,   -78,   166,  -130,     0,     0,     0,   -78,
     -78,   -78,   -78,     0,     0,     0,   119,     0,    17,    35,
       0,     0,  -130,  -130,   -78,   -78,   -78,   -80,   -80,   -80,
     -80,   -80,  -131,  -131,  -131,  -131,     0,     0,   -80,   -80,
     190,   -80,     0,  -131,     0,     0,     0,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,    58,     0,     0,     0,
    -131,  -131,   -80,   -80,   -80,   -79,   -79,   -79,   -79,   -79,
    -129,  -129,  -129,  -129,     0,     0,   -79,   -79,     0,   -79,
       0,  -129,     0,     0,     0,   -79,   -79,   -79,   -79,     0,
       0,     0,   123,   124,   125,   126,   127,     0,  -129,  -129,
     -79,   -79,   -79,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,   132,   133,   134,     0,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,   135,   136,   137,
     123,   124,   125,   126,   127,     0,     0,     0,     0,     0,
       0,   128,   129,     0,   130,     0,     0,     0,     0,     0,
     131,   132,   133,   134,     0,     0,     0,     0,     0,     0,
     159,     0,     0,     0,     0,   135,   136,   137,   123,   124,
     125,   126,   127,     0,     0,     0,     0,     0,     0,   128,
     129,     0,   130,     0,     0,     0,     0,     0,   131,   132,
     133,   134,     0,   191,     0,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,   135,   136,   137,   -79,   -79,     0,   -79,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
     -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,   -81,   -81,
     -81,   -81,   -81,     0,   -80,   -80,     0,   -80,     0,   -81,
     -81,     0,   -81,   -80,   -80,   -80,   -80,     0,   -81,   -81,
     -81,   -81,    58,     0,     0,     0,     0,     0,   -80,   -80,
     -80,     0,     0,   -81,   -81,   -81,   123,   124,   125,   126,
     127,     0,     0,     0,     0,     0,     0,   128,   129,     0,
     130,   182,     0,     0,     0,     0,   131,   132,   133,   134,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,   198,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   269,     0,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   143,
     144,   145,   146,   -94,   -94,     0,     0,   118,     0,     0,
     147,     0,     0,     0,   143,   144,   145,   146,     0,  -203,
    -203,   320,     0,    17,     0,   147,     0,   148,   149,   143,
     144,   145,   146,   -94,   -94,     0,     0,   190,    17,     0,
     147,     0,   148,   149,   143,   144,   145,   146,     0,  -204,
    -204,     0,     0,    58,     0,   147,     0,   148,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,   148,   149
};

static const yytype_int16 yycheck[] =
{
      32,    42,    32,    35,    33,   253,    17,     6,    83,   119,
      35,    56,     6,    83,   268,     6,    11,     7,     8,    72,
      75,    32,    33,     4,     6,   259,     6,    72,    69,    19,
       3,    21,    83,    84,    85,    88,    91,    57,    58,    71,
      85,    88,    32,   153,    85,    86,   300,    58,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     6,     6,
     265,    74,   184,    95,    96,    95,    95,   189,    88,    88,
      60,    96,   306,    86,    64,    51,    66,   311,   107,     6,
     112,   113,   316,    77,    95,    96,    77,   112,   113,   164,
     119,    86,    91,    84,    72,    77,   107,    77,     6,    32,
      33,     6,   350,    83,    37,    87,    56,   118,   119,    42,
      88,   122,   142,   138,   139,    83,   321,   250,   251,   160,
      57,    58,   151,   178,   153,   180,    85,   332,    87,    62,
      77,   142,    97,    66,   166,    78,    83,    68,    69,   150,
     151,   166,   153,    85,    89,    87,   264,   176,    84,   181,
     268,    88,    86,    84,   195,   166,   181,   198,   291,    85,
     215,   151,    95,    85,    97,   176,    99,     0,    85,   201,
      87,   212,     5,     6,     7,    85,     9,   264,   111,   190,
     313,   268,   300,   224,    20,    86,    22,    68,    69,    86,
     201,   278,    84,    42,    43,    44,    45,    46,    47,    48,
      49,   242,    51,   279,   280,    89,   324,    89,    30,    56,
      30,   201,    56,   300,   244,   245,     6,    50,   229,    42,
      43,    44,    45,    46,    47,    48,    49,    56,   269,    84,
      84,   272,   264,   244,   245,    56,   268,   324,    72,    88,
      74,     6,    85,    72,    77,   286,    72,    87,    74,   182,
      87,    72,    86,   264,    88,   245,    85,   268,    81,    88,
      86,   302,    88,    90,    85,    88,     6,    88,   300,    87,
      86,   312,    86,    83,    83,   305,    87,   210,   211,    12,
     310,   322,    87,     6,    86,    74,     6,    87,     6,   300,
      84,   320,   324,     6,   305,    87,    84,    10,    85,   310,
      84,    74,    87,   344,    87,    86,     6,     2,   340,   320,
      10,    64,    60,   324,   274,   201,     6,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   238,   274,   153,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      78,   340,    42,    43,    44,    45,    46,    47,    48,    49,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      83,    84,   349,   150,   283,   310,     6,     7,    91,     9,
      10,    11,    95,    83,   324,    -1,    -1,    17,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    95,    -1,    -1,    88,     6,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       6,     7,    -1,     9,    10,    11,    -1,    87,    -1,    -1,
      -1,    17,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    -1,    -1,    77,    10,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    74,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    59,
      60,    61,    62,    63,    -1,    91,    -1,    -1,    -1,    -1,
      70,    71,    -1,    73,     6,    -1,    -1,    -1,    10,    79,
      80,    81,    82,    -1,    76,    -1,    86,    -1,    88,    -1,
      -1,    83,    -1,    -1,    94,    95,    96,    89,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    88,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    10,    -1,    64,    65,    66,    67,
      83,    -1,    77,    -1,     6,    88,    -1,    75,    -1,    84,
      85,    -1,    -1,    88,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    92,    93,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    64,
      65,    66,    67,    56,    -1,    -1,    -1,    72,    -1,    -1,
      75,    77,     6,    -1,    -1,    -1,    10,    83,    -1,    85,
      72,    87,     6,    88,    -1,    77,    10,    92,    93,    -1,
      -1,    -1,    85,    -1,    86,    88,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    64,    65,    66,
      67,    56,    57,    58,    -1,    72,    -1,    -1,    75,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    -1,    83,
      75,    88,    -1,    -1,    -1,    92,    93,    -1,    83,    83,
      85,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,    42,
      43,    44,    45,    46,    47,    48,    49,    64,    65,    66,
      67,    -1,    -1,    56,    57,    58,    -1,    -1,    75,    -1,
      -1,    64,    65,    66,    67,    68,    69,    84,    85,    72,
      -1,    -1,    75,    -1,    -1,    92,    93,    -1,    -1,    -1,
      83,    -1,    85,    -1,    -1,    88,    -1,    -1,    -1,    92,
      93,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    72,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    85,
      -1,    -1,    88,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      70,    71,    72,    73,    88,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    -1,    -1,    86,    -1,    88,    88,
      -1,    -1,    92,    93,    94,    95,    96,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    71,    -1,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    92,    93,
      94,    95,    96,    70,    71,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    94,    95,    96,    70,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      94,    95,    96,    59,    60,    61,    62,    63,    59,    60,
      61,    62,    63,    -1,    70,    71,    -1,    73,    -1,    70,
      71,    -1,    73,    79,    80,    81,    82,    -1,    79,    80,
      81,    82,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    -1,    -1,    94,    95,    96,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      73,     6,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,     6,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    84,
      85,    86,    -1,    88,    -1,    75,    -1,    92,    93,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    88,    -1,
      75,    -1,    92,    93,    64,    65,    66,    67,    -1,    84,
      85,    -1,    -1,    88,    -1,    75,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    99,     4,     0,     5,     6,     7,     9,    50,
      77,   100,   117,   129,   130,    83,   131,    88,   107,    83,
     129,    83,   129,     6,    42,    43,    44,    45,    46,    47,
      48,    49,    56,    72,    85,    88,   101,   106,   112,   113,
     114,   149,     6,     6,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   150,   151,   152,   154,    88,   102,
     109,   110,   129,   101,   103,   104,   129,   101,    51,     6,
      10,    83,   111,   115,   122,   123,   129,   139,   140,   149,
     150,     6,   111,   149,   150,     6,     6,    10,    76,    89,
     122,   123,   150,    81,   149,    56,    88,   107,   149,    83,
      97,    78,   153,    89,   150,    84,   110,    56,   149,    84,
     104,   129,    85,    56,    84,   129,   149,    86,    72,    86,
     107,   122,    85,    59,    60,    61,    62,    63,    70,    71,
      73,    79,    80,    81,    82,    94,    95,    96,   148,   148,
      68,    69,   128,    64,    65,    66,    67,    75,    92,    93,
     141,    86,   105,    86,   105,   107,   107,    89,    89,    89,
       6,   111,   122,   139,   149,   150,    88,   149,    84,   132,
     133,   149,    30,    30,    89,   111,    56,   122,   123,   122,
     123,    56,     6,   118,   119,   120,   150,   111,   116,   119,
      72,    84,   150,   123,   123,     6,   139,   150,     6,   140,
      87,   108,   111,   129,   150,   116,   107,   105,   150,    84,
      84,    85,     6,   111,   122,   123,    51,   149,    87,   120,
      87,   150,   107,   107,     6,    85,    87,   115,   150,    85,
      87,    87,    90,    87,    86,   149,   149,   107,    86,   107,
      90,    87,     6,    10,    11,    17,    91,   100,   122,   124,
     125,   126,   134,   135,   136,   142,   146,   147,   155,    86,
       6,   118,    57,    58,    83,   107,   127,   141,    83,     6,
     138,   139,     6,    72,   129,   139,   143,   144,    83,   128,
     128,    87,   146,    12,   134,    87,     6,    10,    95,   121,
     122,   125,   139,   150,   155,   156,   157,   158,    57,    58,
      83,   127,     6,   156,   107,    74,    86,   107,   113,   114,
      74,    86,     6,   125,   126,   126,    86,   136,   137,    87,
      86,   107,     6,    84,    85,   156,   107,    84,   139,   134,
     144,   134,   107,    84,   134,   111,   107,   158,    84,    87,
      74,    87,    87,    87,     6,   122,   124,   145,   107,    86,
     135,    87
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 31 "lab.yacc"
    {printf("Find package and import\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 41 "lab.yacc"
    {printf("varblock\n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 111 "lab.yacc"
    {printf("type def\n");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 114 "lab.yacc"
    {printf("typeless definition\n");}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 153 "lab.yacc"
    {printf("expression\n");}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 191 "lab.yacc"
    {printf("Find function defenition\n");}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 192 "lab.yacc"
    {printf("Find function defenition\n");}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 221 "lab.yacc"
    {printf("ifblock!\n");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 382 "lab.yacc"
    {printf("Method match\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2111 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 406 "lab.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}

