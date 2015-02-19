/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_NUM = 258,
     T_INT = 259,
     T_EXTENDS = 260,
     T_OPENCURLY = 261,
     T_CLOSECURLY = 262,
     T_OPENPAREN = 263,
     T_CLOSEPAREN = 264,
     T_RETURN = 265,
     T_ID = 266,
     T_BOOL = 267,
     T_IF = 268,
     T_ELSE = 269,
     T_WHILE = 270,
     T_PRINT = 271,
     T_DOT = 272,
     T_OR = 273,
     T_AND = 274,
     T_LESSEQUAL = 275,
     T_LESS = 276,
     T_PLUS = 277,
     T_MINUS = 278,
     T_TIMES = 279,
     T_DIV = 280,
     T_NOT = 281,
     T_ARROW = 282,
     T_EQUAL = 283,
     T_NONE = 284,
     T_NEW = 285,
     T_COMMA = 286,
     T_TRUE = 287,
     T_FALSE = 288,
     T_COLON = 289,
     T_E = 290
   };
#endif
/* Tokens.  */
#define T_NUM 258
#define T_INT 259
#define T_EXTENDS 260
#define T_OPENCURLY 261
#define T_CLOSECURLY 262
#define T_OPENPAREN 263
#define T_CLOSEPAREN 264
#define T_RETURN 265
#define T_ID 266
#define T_BOOL 267
#define T_IF 268
#define T_ELSE 269
#define T_WHILE 270
#define T_PRINT 271
#define T_DOT 272
#define T_OR 273
#define T_AND 274
#define T_LESSEQUAL 275
#define T_LESS 276
#define T_PLUS 277
#define T_MINUS 278
#define T_TIMES 279
#define T_DIV 280
#define T_NOT 281
#define T_ARROW 282
#define T_EQUAL 283
#define T_NONE 284
#define T_NEW 285
#define T_COMMA 286
#define T_TRUE 287
#define T_FALSE 288
#define T_COLON 289
#define T_E 290




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include <cstdlib>
    #include <cstdio>
    #include <iostream>
    #include "ast.hpp"

    #define YYDEBUG 1

    int yylex(void);
    void yyerror(const char *);

    extern ASTNode* astRoot;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 190 "parser.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    18,    24,    27,    28,
      31,    33,    35,    37,    40,    41,    51,    55,    58,    59,
      63,    66,    70,    71,    75,    77,    80,    81,    83,    85,
      87,    89,    91,    94,    95,   101,   105,   112,   117,   123,
     133,   139,   142,   145,   147,   151,   155,   159,   163,   167,
     171,   175,   179,   183,   186,   189,   191,   195,   197,   201,
     203,   205,   207,   210,   216,   218,   220,   225,   232,   234,
     235,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    38,    -1,    39,    38,    -1,    39,    -1,
      11,     5,    11,     6,    40,    43,     7,    -1,    11,     6,
      40,    43,     7,    -1,    40,    41,    -1,    -1,    42,    11,
      -1,     4,    -1,    12,    -1,    11,    -1,    44,    43,    -1,
      -1,    11,     8,    46,     9,    27,    60,     6,    45,     7,
      -1,    48,    50,    52,    -1,    47,    46,    -1,    -1,    11,
      34,    42,    -1,    47,    31,    -1,    48,    42,    49,    -1,
      -1,    49,    31,    11,    -1,    11,    -1,    51,    50,    -1,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    10,    59,    -1,    -1,    11,    17,    11,    35,    59,
      -1,    11,    35,    59,    -1,    11,    17,    11,     8,    62,
       9,    -1,    11,     8,    62,     9,    -1,    13,    59,     6,
      58,     7,    -1,    13,    59,     6,    58,     7,    14,     6,
      58,     7,    -1,    15,    59,     6,    58,     7,    -1,    16,
      59,    -1,    51,    58,    -1,    51,    -1,    59,    22,    59,
      -1,    59,    23,    59,    -1,    59,    24,    59,    -1,    59,
      25,    59,    -1,    59,    21,    59,    -1,    59,    20,    59,
      -1,    59,    28,    59,    -1,    59,    19,    59,    -1,    59,
      18,    59,    -1,    26,    59,    -1,    23,    59,    -1,    11,
      -1,    11,    17,    11,    -1,    61,    -1,     8,    59,     9,
      -1,     3,    -1,    32,    -1,    33,    -1,    30,    11,    -1,
      30,    11,     8,    62,     9,    -1,    29,    -1,    42,    -1,
      11,     8,    62,     9,    -1,    11,    17,    11,     8,    62,
       9,    -1,    63,    -1,    -1,    63,    31,    59,    -1,    59,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    97,    97,    99,   100,   105,   106,   109,   110,   113,
     115,   116,   117,   120,   121,   124,   127,   130,   131,   134,
     135,   138,   139,   142,   143,   146,   147,   150,   151,   152,
     153,   154,   157,   158,   161,   162,   165,   166,   169,   170,
     173,   176,   179,   180,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   205,   206,   210,   211,   214,   215,
     218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUM", "T_INT", "T_EXTENDS",
  "T_OPENCURLY", "T_CLOSECURLY", "T_OPENPAREN", "T_CLOSEPAREN", "T_RETURN",
  "T_ID", "T_BOOL", "T_IF", "T_ELSE", "T_WHILE", "T_PRINT", "T_DOT",
  "T_OR", "T_AND", "T_LESSEQUAL", "T_LESS", "T_PLUS", "T_MINUS", "T_TIMES",
  "T_DIV", "T_NOT", "T_ARROW", "T_EQUAL", "T_NONE", "T_NEW", "T_COMMA",
  "T_TRUE", "T_FALSE", "T_COLON", "T_E", "$accept", "Start", "Classes",
  "Class", "Members", "Member", "Type", "Methods", "Method", "Body",
  "Parameters", "Parameter", "Declarations", "Declaration", "Statements",
  "Statement", "Return", "Assignment", "Method_Call", "ifelse", "While",
  "print", "Block", "Expressions", "ReturnType", "MethodCall", "Arguments",
  "Arguments_p", 0
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
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      42,    42,    42,    43,    43,    44,    45,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     7,     5,     2,     0,     2,
       1,     1,     1,     2,     0,     9,     3,     2,     0,     3,
       2,     3,     0,     3,     1,     2,     0,     1,     1,     1,
       1,     1,     2,     0,     5,     3,     6,     4,     5,     9,
       5,     2,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     3,     1,     3,     1,
       1,     1,     2,     5,     1,     1,     4,     6,     1,     0,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     8,     1,     3,     0,
      14,     8,    10,    12,    11,     7,     0,     0,    14,    14,
      18,     9,     6,     0,    13,     0,     0,     0,    18,     5,
       0,     0,    20,    17,    12,    19,     0,    64,    65,     0,
      22,     0,    26,    15,    12,     0,     0,     0,     0,    33,
      26,    27,    28,    29,    30,    31,    69,     0,     0,    59,
       0,    55,     0,     0,     0,    60,    61,     0,    57,     0,
      41,    24,    21,     0,    16,     0,    25,    71,     0,    68,
       0,    35,     0,    69,     0,    54,    53,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    37,     0,    69,     0,    58,     0,    56,    69,    43,
       0,    52,    51,    49,    48,    44,    45,    46,    47,    50,
       0,    23,    70,     0,    34,    66,    69,     0,    42,    38,
      40,    36,     0,    63,     0,    67,     0,     0,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    15,    16,    17,    18,    41,
      27,    28,    42,    72,    49,   109,    74,    51,    52,    53,
      54,    55,   110,    77,    39,    68,    78,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
       8,    16,    23,   -96,     8,    14,   -96,   -96,   -96,     2,
      52,   -96,   -96,    50,   -96,   -96,    51,    53,    54,    52,
      64,   -96,   -96,    50,   -96,    69,    27,    81,    -5,   -96,
     105,    66,   -96,   -96,   -96,   -96,    25,   -96,   -96,    88,
     -96,    97,    99,   -96,     3,     1,     1,     1,    95,   114,
      76,   -96,   -96,   -96,   -96,   -96,     1,    96,     1,   -96,
       1,    -1,     1,     1,   107,   -96,   -96,    49,   -96,    60,
     108,   -96,   104,     1,   -96,     3,   -96,   108,   125,   113,
      -3,   108,    77,     1,   143,   -96,   -96,   100,    76,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    76,   145,
     108,   -96,     1,     1,     1,   -96,   148,   150,     1,    76,
     152,   118,   127,    98,    98,    15,    15,   -96,   -96,    98,
     153,   -96,   108,   154,   108,   -96,     1,   155,   -96,   147,
     -96,   -96,   156,   -96,   160,   -96,    76,   161,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   158,   -96,   159,   -96,    83,    24,   -96,   -96,
     139,   -96,   -96,   -96,   119,   103,   -96,   -96,   -96,   -96,
     -96,   -96,   -95,   -45,   -96,   -96,   -73,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      67,    69,    70,   120,    59,   103,    26,    83,    11,    60,
     106,    56,    61,    81,   128,    82,    84,    85,    86,     1,
      57,     5,     6,     7,    62,     9,    32,    63,   100,    12,
     123,    64,   104,    65,    66,   127,    34,    14,    58,    95,
      96,   137,    24,    25,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   132,    37,    88,    12,   122,    20,   124,
      22,    30,    21,    13,    14,    23,    98,    89,    90,    91,
      92,    93,    94,    95,    96,    26,    29,    97,    89,    90,
      91,    92,    93,    94,    95,    96,   105,    75,    97,    45,
      31,    46,    47,    36,    40,    89,    90,    91,    92,    93,
      94,    95,    96,    12,    43,    97,    71,    80,   108,    12,
      44,    14,    45,    35,    46,    47,    34,    14,    87,    38,
      93,    94,    95,    96,    73,    48,    89,    90,    91,    92,
      93,    94,    95,    96,   101,    99,    97,    90,    91,    92,
      93,    94,    95,    96,   102,    50,    97,    91,    92,    93,
      94,    95,    96,    50,   107,    97,   121,   125,   126,   129,
     130,   134,     8,   131,   133,   135,   136,    33,   138,    76,
      19
};

static const yytype_uint8 yycheck[] =
{
      45,    46,    47,    98,     3,     8,    11,     8,     6,     8,
      83,     8,    11,    58,   109,    60,    17,    62,    63,    11,
      17,     5,     6,     0,    23,    11,    31,    26,    73,     4,
     103,    30,    35,    32,    33,   108,    11,    12,    35,    24,
      25,   136,    18,    19,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   126,    29,     6,     4,   102,     8,   104,
       7,    34,    11,    11,    12,    11,     6,    18,    19,    20,
      21,    22,    23,    24,    25,    11,     7,    28,    18,    19,
      20,    21,    22,    23,    24,    25,     9,    11,    28,    13,
       9,    15,    16,    27,     6,    18,    19,    20,    21,    22,
      23,    24,    25,     4,     7,    28,    11,    11,     8,     4,
      11,    12,    13,    30,    15,    16,    11,    12,    11,    36,
      22,    23,    24,    25,    10,    42,    18,    19,    20,    21,
      22,    23,    24,    25,     9,    31,    28,    19,    20,    21,
      22,    23,    24,    25,    31,    42,    28,    20,    21,    22,
      23,    24,    25,    50,    11,    28,    11,     9,     8,     7,
       7,    14,     4,     9,     9,     9,     6,    28,     7,    50,
      11
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    37,    38,    39,     5,     6,     0,    38,    11,
      40,     6,     4,    11,    12,    41,    42,    43,    44,    40,
       8,    11,     7,    11,    43,    43,    11,    46,    47,     7,
      34,     9,    31,    46,    11,    42,    27,    29,    42,    60,
       6,    45,    48,     7,    11,    13,    15,    16,    42,    50,
      51,    53,    54,    55,    56,    57,     8,    17,    35,     3,
       8,    11,    23,    26,    30,    32,    33,    59,    61,    59,
      59,    11,    49,    10,    52,    11,    50,    59,    62,    63,
      11,    59,    59,     8,    17,    59,    59,    11,     6,    18,
      19,    20,    21,    22,    23,    24,    25,    28,     6,    31,
      59,     9,    31,     8,    35,     9,    62,    11,     8,    51,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      58,    11,    59,    62,    59,     9,     8,    62,    58,     7,
       7,     9,    62,     9,    14,     9,     6,    58,     7
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 97 "parser.y"
    { (yyval.program_ptr) = new ProgramNode((yyvsp[(1) - (1)].class_list_ptr)); astRoot = (yyval.program_ptr); ;}
    break;

  case 3:
#line 99 "parser.y"
    { (yyval.class_list_ptr) = (yyvsp[(2) - (2)].class_list_ptr); (yyval.class_list_ptr)->push_front((yyvsp[(1) - (2)].class_ptr)); ;}
    break;

  case 4:
#line 100 "parser.y"
    { (yyval.class_list_ptr) = new std::list<ClassNode*>(); (yyval.class_list_ptr)->push_back((yyvsp[(1) - (1)].class_ptr)); ;}
    break;

  case 5:
#line 105 "parser.y"
    { (yyval.class_ptr) = new ClassNode(new IdentifierNode((yyvsp[(1) - (7)].base_char_ptr)), new IdentifierNode((yyvsp[(3) - (7)].base_char_ptr)), (yyvsp[(5) - (7)].declaration_list_ptr), (yyvsp[(6) - (7)].method_list_ptr)); ;}
    break;

  case 6:
#line 106 "parser.y"
    { (yyval.class_ptr) = new ClassNode(new IdentifierNode((yyvsp[(1) - (5)].base_char_ptr)), NULL, (yyvsp[(3) - (5)].declaration_list_ptr), (yyvsp[(4) - (5)].method_list_ptr)); ;}
    break;

  case 7:
#line 109 "parser.y"
    { (yyval.declaration_list_ptr) = (yyvsp[(1) - (2)].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[(2) - (2)].declaration_ptr)); ;}
    break;

  case 8:
#line 110 "parser.y"
    { (yyval.declaration_list_ptr) = new std::list<DeclarationNode*>(); ;}
    break;

  case 9:
#line 113 "parser.y"
    { (yyval.declaration_ptr) = new DeclarationNode((yyvsp[(1) - (2)].type_ptr),new std::list<IdentifierNode*>(1, new IdentifierNode((yyvsp[(2) - (2)].base_char_ptr)))); ;}
    break;

  case 10:
#line 115 "parser.y"
    { (yyval.type_ptr) = new IntegerTypeNode(); ;}
    break;

  case 11:
#line 116 "parser.y"
    { (yyval.type_ptr) = new BooleanTypeNode(); ;}
    break;

  case 12:
#line 117 "parser.y"
    { (yyval.type_ptr) = new ObjectTypeNode(new IdentifierNode((yyvsp[(1) - (1)].base_char_ptr))); ;}
    break;

  case 13:
#line 120 "parser.y"
    { (yyval.method_list_ptr) = (yyvsp[(2) - (2)].method_list_ptr); (yyval.method_list_ptr)->push_front((yyvsp[(1) - (2)].method_ptr)); ;}
    break;

  case 14:
#line 121 "parser.y"
    { (yyval.method_list_ptr) = new std::list<MethodNode*>(); ;}
    break;

  case 15:
#line 124 "parser.y"
    { (yyval.method_ptr) = new MethodNode(new IdentifierNode((yyvsp[(1) - (9)].base_char_ptr)), (yyvsp[(3) - (9)].parameter_list_ptr), (yyvsp[(6) - (9)].type_ptr), (yyvsp[(8) - (9)].methodbody_ptr)); ;}
    break;

  case 16:
#line 127 "parser.y"
    { (yyval.methodbody_ptr) = new MethodBodyNode( (yyvsp[(1) - (3)].declaration_list_ptr), (yyvsp[(2) - (3)].statement_list_ptr), (yyvsp[(3) - (3)].returnstatement_ptr)); ;}
    break;

  case 17:
#line 130 "parser.y"
    { (yyval.parameter_list_ptr) = (yyvsp[(2) - (2)].parameter_list_ptr); (yyval.parameter_list_ptr)->push_front((yyvsp[(1) - (2)].parameter_ptr)); ;}
    break;

  case 18:
#line 131 "parser.y"
    { (yyval.parameter_list_ptr) = NULL; ;}
    break;

  case 19:
#line 134 "parser.y"
    {(yyval.parameter_ptr) = new ParameterNode((yyvsp[(3) - (3)].type_ptr),new IdentifierNode((yyvsp[(1) - (3)].base_char_ptr))); ;}
    break;

  case 20:
#line 135 "parser.y"
    { (yyval.parameter_ptr) = new std::list<ParameterNode*>(); (yyval.parameter_ptr)->push_back((yyvsp[(1) - (2)].parameter_ptr)); ;}
    break;

  case 21:
#line 138 "parser.y"
    { (yyval.declaration_list_ptr) = (yyvsp[(1) - (3)].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back(new DeclarationNode((yyvsp[(2) - (3)].type_ptr),(yyvsp[(3) - (3)].identifier_list_ptr))); ;}
    break;

  case 22:
#line 139 "parser.y"
    { (yyval.declaration_list_ptr) = new std::list<DeclarationNode*>(); ;}
    break;

  case 23:
#line 142 "parser.y"
    { (yyval.identifier_list_ptr) = (yyvsp[(1) - (3)].identifier_list_ptr); (yyval.identifier_list_ptr)->push_back(new IdentifierNode((yyvsp[(3) - (3)].base_char_ptr))); ;}
    break;

  case 24:
#line 143 "parser.y"
    { (yyval.identifier_list_ptr) = new std::list<IdentifierNode*>(); (yyval.identifier_list_ptr)->push_back(new IdentifierNode((yyvsp[(1) - (1)].base_char_ptr)));;}
    break;

  case 25:
#line 146 "parser.y"
    { (yyval.statement_list_ptr) = (yyvsp[(2) - (2)].statement_list_ptr); (yyval.statement_list_ptr)->push_front((yyvsp[(1) - (2)].statement_ptr)); ;}
    break;

  case 26:
#line 147 "parser.y"
    { (yyval.statement_list_ptr) = new std::list<StatementNode*>(); ;}
    break;

  case 27:
#line 150 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].assignment_ptr); ;}
    break;

  case 28:
#line 151 "parser.y"
    { (yyval.statement_ptr) = new CallNode((yyvsp[(1) - (1)].methodcall_ptr)); ;}
    break;

  case 29:
#line 152 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].ifelse_ptr); ;}
    break;

  case 30:
#line 153 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].while_ptr); ;}
    break;

  case 31:
#line 154 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].print_ptr); ;}
    break;

  case 32:
#line 157 "parser.y"
    { (yyval.returnstatement_ptr) = new ReturnStatementNode((yyvsp[(2) - (2)].expression_ptr)); ;}
    break;

  case 33:
#line 158 "parser.y"
    { (yyval.returnstatement_ptr) = NULL; ;}
    break;

  case 34:
#line 161 "parser.y"
    { (yyval.assignment_ptr) = new AssignmentNode(new IdentifierNode((yyvsp[(1) - (5)].base_char_ptr)), new IdentifierNode((yyvsp[(3) - (5)].base_char_ptr)), (yyvsp[(5) - (5)].expression_ptr)); ;}
    break;

  case 35:
#line 162 "parser.y"
    { (yyval.assignment_ptr) = new AssignmentNode(new IdentifierNode((yyvsp[(1) - (3)].base_char_ptr)), NULL, (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 36:
#line 165 "parser.y"
    { (yyval.methodcall_ptr) = new MethodCallNode(new IdentifierNode((yyvsp[(1) - (6)].base_char_ptr)), new IdentifierNode((yyvsp[(3) - (6)].base_char_ptr)), (yyvsp[(5) - (6)].expression_list_ptr)); ;}
    break;

  case 37:
#line 166 "parser.y"
    { (yyval.methodcall_ptr) = new MethodCallNode(new IdentifierNode((yyvsp[(1) - (4)].base_char_ptr)), NULL, (yyvsp[(3) - (4)].expression_list_ptr)); ;}
    break;

  case 38:
#line 169 "parser.y"
    { (yyval.ifelse_ptr) = new IfElseNode ((yyvsp[(2) - (5)].expression_ptr),(yyvsp[(4) - (5)].statement_list_ptr), NULL); ;}
    break;

  case 39:
#line 170 "parser.y"
    { (yyval.ifelse_ptr) = new IfElseNode((yyvsp[(2) - (9)].expression_ptr), (yyvsp[(4) - (9)].statement_list_ptr), (yyvsp[(8) - (9)].statement_list_ptr)); ;}
    break;

  case 40:
#line 173 "parser.y"
    {(yyval.while_ptr) = new WhileNode((yyvsp[(1) - (5)]),(yyvsp[(2) - (5)].expression_ptr)); ;}
    break;

  case 41:
#line 176 "parser.y"
    { (yyval.print_ptr) = new PrintNode((yyvsp[(2) - (2)].expression_ptr)); ;}
    break;

  case 42:
#line 179 "parser.y"
    { (yyval.statement_list_ptr) = (yyvsp[(2) - (2)].statement_list_ptr); (yyval.statement_list_ptr)->push_front((yyvsp[(1) - (2)].statement_ptr)); ;}
    break;

  case 43:
#line 180 "parser.y"
    { (yyval.statement_list_ptr) = new std::list<StatementNode*>(); (yyval.statement_list_ptr)->push_back((yyvsp[(1) - (1)].statement_ptr)); ;}
    break;

  case 44:
#line 183 "parser.y"
    { (yyval.expression_ptr) = new PlusNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 45:
#line 184 "parser.y"
    { (yyval.expression_ptr) = new MinusNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 46:
#line 185 "parser.y"
    { (yyval.expression_ptr) = new TimesNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 47:
#line 186 "parser.y"
    { (yyval.expression_ptr) = new DivideNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 48:
#line 187 "parser.y"
    { (yyval.expression_ptr) = new LessNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 49:
#line 188 "parser.y"
    { (yyval.expression_ptr) = new LessEqualNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 50:
#line 189 "parser.y"
    { (yyval.expression_ptr) = new EqualNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 51:
#line 190 "parser.y"
    { (yyval.expression_ptr) = new AndNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 52:
#line 191 "parser.y"
    { (yyval.expression_ptr) = new OrNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 53:
#line 192 "parser.y"
    { (yyval.expression_ptr) = new NotNode((yyvsp[(2) - (2)].expression_ptr)); ;}
    break;

  case 54:
#line 193 "parser.y"
    { (yyval.expression_ptr) = new NegationNode((yyvsp[(2) - (2)].expression_ptr)); ;}
    break;

  case 55:
#line 194 "parser.y"
    { (yyval.expression_ptr) = new VariableNode(new IdentifierNode((yyvsp[(1) - (1)].base_char_ptr))); ;}
    break;

  case 56:
#line 195 "parser.y"
    { (yyval.expression_ptr) = new MemberAccessNode(new IdentifierNode((yyvsp[(1) - (3)].base_char_ptr)), new IdentifierNode((yyvsp[(3) - (3)].base_char_ptr))); ;}
    break;

  case 57:
#line 196 "parser.y"
    { (yyval.expression_ptr) = new CallNode((yyvsp[(1) - (1)].methodcall_ptr)); ;}
    break;

  case 59:
#line 198 "parser.y"
    { (yyval.expression_ptr) = new IntegerLiteralNode((yyvsp[(1) - (1)].base_int)); ;}
    break;

  case 60:
#line 199 "parser.y"
    { (yyval.expression_ptr) = new BooleanLiteralNode((yyvsp[(1) - (1)].base_int)); ;}
    break;

  case 61:
#line 200 "parser.y"
    { (yyval.expression_ptr) = new BooleanLiteralNode((yyvsp[(1) - (1)].base_int)); ;}
    break;

  case 62:
#line 201 "parser.y"
    { (yyval.expression_ptr) = new NewNode(new IdentifierNode((yyvsp[(2) - (2)].base_char_ptr)), NULL); ;}
    break;

  case 63:
#line 202 "parser.y"
    { (yyval.expression_ptr) = new NewNode(new IdentifierNode((yyvsp[(2) - (5)].base_char_ptr)), (yyvsp[(4) - (5)].expression_list_ptr)); ;}
    break;

  case 64:
#line 205 "parser.y"
    { (yyval.type_ptr) = new NoneNode; ;}
    break;

  case 65:
#line 206 "parser.y"
    { (yyval.type_ptr) = (yyvsp[(1) - (1)].type_ptr); astRoot = (yyval.type_ptr); ;}
    break;

  case 66:
#line 210 "parser.y"
    { (yyval.methodcall_ptr) = new MethodCallNode(new IdentifierNode((yyvsp[(1) - (4)].base_char_ptr)), NULL, (yyvsp[(3) - (4)].expression_list_ptr)); ;}
    break;

  case 67:
#line 211 "parser.y"
    { (yyval.methodcall_ptr) = new MethodCallNode(new IdentifierNode((yyvsp[(1) - (6)].base_char_ptr)), new IdentifierNode((yyvsp[(3) - (6)].base_char_ptr)), (yyvsp[(5) - (6)].expression_list_ptr)); ;}
    break;

  case 68:
#line 214 "parser.y"
    { (yyval.expression_list_ptr) = (yyvsp[(1) - (1)].expression_list_ptr); ;}
    break;

  case 69:
#line 215 "parser.y"
    { (yyval.expression_list_ptr) = new std::list<ExpressionNode*>(); ;}
    break;

  case 70:
#line 218 "parser.y"
    { (yyval.expression_list_ptr) = (yyvsp[(1) - (3)].expression_list_ptr); (yyval.expression_list_ptr)->push_back((yyvsp[(3) - (3)].expression_ptr)); ;}
    break;

  case 71:
#line 219 "parser.y"
    {(yyval.expression_list_ptr) = new std::list<ExpressionNode*>(); (yyval.expression_list_ptr)->push_back((yyvsp[(1) - (1)].expression_ptr)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1859 "parser.cpp"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 222 "parser.y"


extern int yylineno;

void yyerror(const char *s) {
  fprintf(stderr, "%s at line %d\n", s, yylineno);
  exit(1);
}

