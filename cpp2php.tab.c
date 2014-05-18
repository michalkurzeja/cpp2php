/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "cpp2php.y"

#include <cstdio>
#include <iostream>
using namespace std;

#include "cpp2php.tab.h"  // to get the token types that we return

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern int line_num;
 
void yyerror(const char *s);


/* Line 268 of yacc.c  */
#line 88 "cpp2php.tab.c"

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
     INCLUDE_TOK = 258,
     DEFINE_TOK = 259,
     ABSTRACT_TOK = 260,
     AUTO_TOK = 261,
     BOOL_TOK = 262,
     BREAK_TOK = 263,
     CASE_TOK = 264,
     CATCH_TOK = 265,
     CHAR_TOK = 266,
     CLASS_TOK = 267,
     CONST_TOK = 268,
     CONTINUE_TOK = 269,
     DEFAULT_TOK = 270,
     DELETE_TOK = 271,
     DIV_ASSIGN_TOK = 272,
     DO_TOK = 273,
     DOUBLE_TOK = 274,
     ELSE_TOK = 275,
     ENUM_TOK = 276,
     EXTERN_TOK = 277,
     FALSE_TOK = 278,
     FINALLY_TOK = 279,
     FLOAT_TOK = 280,
     EACH_TOK = 281,
     FOR_TOK = 282,
     IN_TOK = 283,
     FRIEND_TOK = 284,
     IF_TOK = 285,
     INLINE_TOK = 286,
     INT_TOK = 287,
     INTERFACE_TOK = 288,
     LITERAL_TOK = 289,
     LONG_TOK = 290,
     MUTABLE_TOK = 291,
     NAMESPACE_TOK = 292,
     NEW_TOK = 293,
     PRIVATE_TOK = 294,
     PROTECTED_TOK = 295,
     PUBLIC_TOK = 296,
     REGISTER_TOK = 297,
     RETURN_TOK = 298,
     SHORT_TOK = 299,
     SIGNED_TOK = 300,
     SIZEOF_TOK = 301,
     STATIC_TOK = 302,
     STRUCT_TOK = 303,
     SWITCH_TOK = 304,
     TEMPLATE_TOK = 305,
     THIS_TOK = 306,
     THREAD_TOK = 307,
     THROW_TOK = 308,
     TRUE_TOK = 309,
     TRY_TOK = 310,
     TYPEDEF_TOK = 311,
     UNION_TOK = 312,
     UNSIGNED_TOK = 313,
     USING_TOK = 314,
     VIRTUAL_TOK = 315,
     VOID_TOK = 316,
     VOLATILE_TOK = 317,
     WHILE_TOK = 318,
     ENDL = 319,
     NOT_EQUAL_TOK = 320,
     MOD_ASSIGN_TOK = 321,
     AND_TOK = 322,
     BIN_AND_ASSIGN_TOK = 323,
     MULTIPLY_ASSIGN_TOK = 324,
     INC_TOK = 325,
     ADD_ASSIGN_TOK = 326,
     DEC_TOK = 327,
     SUB_ASSIGN_TOK = 328,
     DIV_ASSGN_TOK = 329,
     LEFT_SHIFT_TOK = 330,
     LEFT_SHIFT_ASSIGN_TOK = 331,
     LESS_OR_EQUAL_TOK = 332,
     EQUAL_TOK = 333,
     GREATER_OR_EQUAL_TOK = 334,
     RIGHT_SHIFT_TOK = 335,
     RIGHT_SHIFT_ASSIGN_TOK = 336,
     EXCLUSIVE_OR_ASSIGN_TOK = 337,
     BITWISE_INCLUSIVE_OR_ASSIGN_TOK = 338,
     OR_TOK = 339,
     SCOPE_TOK = 340,
     INT_NUM_TOK = 341,
     FLOAT_NUM_TOK = 342,
     STRING_TOK = 343,
     IDENT_TOK = 344,
     OPERATOR_FUN_TOK = 345
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 22 "cpp2php.y"

	int ival;
	float fval;
	char *sval;



/* Line 293 of yacc.c  */
#line 222 "cpp2php.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 234 "cpp2php.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNRULES -- Number of states.  */
#define YYNSTATES  483

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,    93,     2,     2,   108,   110,     2,
     101,   102,   105,   104,    98,   106,    94,   107,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,    99,
      91,   100,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   111,     2,   112,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,   109,    96,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    12,    15,    17,    19,    25,
      30,    36,    41,    45,    47,    49,    54,    58,    60,    62,
      64,    66,    68,    70,    72,    74,    76,    79,    82,    85,
      88,    91,    94,    97,   100,   102,   111,   122,   124,   130,
     138,   140,   145,   152,   154,   159,   162,   164,   169,   172,
     174,   176,   178,   179,   183,   185,   187,   189,   191,   194,
     197,   200,   203,   204,   207,   210,   213,   216,   218,   220,
     222,   224,   226,   230,   232,   238,   244,   250,   256,   263,
     270,   272,   279,   281,   290,   293,   296,   300,   303,   307,
     310,   313,   316,   319,   322,   326,   329,   331,   333,   336,
     338,   341,   343,   345,   347,   349,   351,   354,   356,   359,
     361,   363,   366,   368,   371,   373,   375,   377,   379,   381,
     384,   386,   388,   391,   395,   399,   403,   407,   412,   417,
     419,   424,   431,   433,   438,   443,   448,   453,   459,   465,
     467,   471,   475,   479,   484,   487,   489,   491,   493,   496,
     499,   502,   505,   508,   514,   518,   521,   526,   528,   530,
     538,   544,   546,   554,   557,   559,   564,   568,   572,   574,
     586,   596,   606,   614,   621,   627,   632,   636,   640,   642,
     643,   645,   649,   657,   663,   664,   669,   672,   673,   678,
     681,   686,   689,   691,   693,   695,   697,   699,   701,   703,
     705,   707,   709,   711,   713,   715,   717,   719,   721,   723,
     725,   727,   729,   731,   733,   735,   737,   739,   741,   743,
     745,   747,   749,   751,   753,   755,   757,   759,   761,   763,
     765,   768,   772,   777,   779,   782,   785,   788,   791,   794,
     797,   799,   802,   807,   810,   814,   820,   827,   831,   833,
     835,   838,   840,   843,   845,   847,   849,   851,   853,   855,
     858,   861,   864,   868,   872,   875,   878,   881,   884,   887,
     891,   895,   898,   901,   904,   907,   910,   913
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     114,     0,    -1,   115,    -1,   116,   119,   121,    -1,   116,
     121,    -1,   119,   121,    -1,   121,    -1,   117,    -1,   116,
       3,    91,   118,    92,    -1,     3,    91,   118,    92,    -1,
     116,     3,    93,   118,    93,    -1,     3,    93,   118,    93,
      -1,   118,    94,    89,    -1,    89,    -1,   120,    -1,   119,
       4,    89,   171,    -1,     4,    89,   171,    -1,   122,    -1,
     136,    -1,   138,    -1,   123,    -1,   125,    -1,   127,    -1,
     129,    -1,   142,    -1,   140,    -1,   121,   136,    -1,   121,
     138,    -1,   121,   123,    -1,   121,   125,    -1,   121,   127,
      -1,   121,   129,    -1,   121,   140,    -1,   121,   142,    -1,
     124,    -1,    50,    91,   170,    92,    12,    95,   134,    96,
      -1,    50,    91,   170,    92,    12,    97,   132,    95,   134,
      96,    -1,   126,    -1,    12,    89,    95,   134,    96,    -1,
      12,    89,    97,   132,    95,   134,    96,    -1,   128,    -1,
      48,    95,   135,    96,    -1,    48,    97,   132,    95,   135,
      96,    -1,   130,    -1,    57,    95,   131,    96,    -1,   131,
     136,    -1,   136,    -1,   132,    98,   133,    89,    -1,   133,
      89,    -1,    41,    -1,    40,    -1,    39,    -1,    -1,   134,
     133,    97,    -1,   136,    -1,   138,    -1,   140,    -1,   142,
      -1,   134,   136,    -1,   134,   138,    -1,   134,   140,    -1,
     134,   142,    -1,    -1,   135,   136,    -1,   135,   138,    -1,
     135,   140,    -1,   135,   142,    -1,   136,    -1,   138,    -1,
     140,    -1,   142,    -1,   137,    -1,   177,    89,    99,    -1,
     139,    -1,   177,    89,   100,   179,    99,    -1,   177,    89,
     100,   148,    99,    -1,   177,    89,   100,   152,    99,    -1,
     177,    89,   100,   171,    99,    -1,   177,    89,   100,    38,
     148,    99,    -1,   177,    89,   100,    38,   177,    99,    -1,
     141,    -1,   177,    89,   101,   169,   102,    99,    -1,   143,
      -1,   177,    89,   101,   169,   102,    95,   144,    96,    -1,
     144,   136,    -1,   144,   138,    -1,   144,   148,    99,    -1,
     144,   150,    -1,   144,   152,    99,    -1,   144,   155,    -1,
     144,   157,    -1,   144,   162,    -1,   144,   168,    -1,   144,
     164,    -1,   144,     8,    99,    -1,   144,   146,    -1,   136,
      -1,   138,    -1,   148,    99,    -1,   150,    -1,   152,    99,
      -1,   155,    -1,   157,    -1,   162,    -1,   168,    -1,   164,
      -1,     8,    99,    -1,   146,    -1,   144,    99,    -1,   136,
      -1,   138,    -1,   148,    99,    -1,   150,    -1,   152,    99,
      -1,   155,    -1,   157,    -1,   162,    -1,   168,    -1,   164,
      -1,     8,    99,    -1,   146,    -1,   147,    -1,    43,    99,
      -1,    43,   171,    99,    -1,    43,   179,    99,    -1,    43,
     152,    99,    -1,    43,   148,    99,    -1,    43,    38,   148,
      99,    -1,    43,    38,   177,    99,    -1,   149,    -1,    89,
     101,   167,   102,    -1,    89,    94,    89,   101,   167,   102,
      -1,   151,    -1,   179,   175,   179,    99,    -1,   179,   175,
     148,    99,    -1,   179,   175,   152,    99,    -1,   179,   175,
     171,    99,    -1,   179,   175,    38,   148,    99,    -1,   179,
     175,    38,   177,    99,    -1,   153,    -1,   152,   172,   179,
      -1,   152,   172,   148,    -1,   152,   172,   171,    -1,   152,
     172,    38,   148,    -1,    38,   177,    -1,   179,    -1,   148,
      -1,   171,    -1,    38,   148,    -1,   179,    70,    -1,    70,
     179,    -1,   179,    72,    -1,    72,   179,    -1,   152,   172,
     101,   152,   102,    -1,   101,   152,   102,    -1,   103,   152,
      -1,   152,   172,   103,   152,    -1,   152,    -1,   156,    -1,
      30,   101,   154,   102,    95,   144,    96,    -1,    30,   101,
     154,   102,   145,    -1,   158,    -1,    49,   101,    89,   102,
      95,   159,    96,    -1,   160,   161,    -1,   160,    -1,   160,
       9,    97,   144,    -1,     9,    97,   144,    -1,    15,    97,
     144,    -1,   163,    -1,    27,   101,   165,    99,   154,    99,
     166,   102,    95,   144,    96,    -1,    27,   101,   165,    99,
     154,    99,   166,   102,   145,    -1,    18,    95,   144,    96,
      63,   101,   154,   102,    99,    -1,    18,   145,    63,   101,
     154,   102,    99,    -1,   165,    98,   177,    89,   100,   171,
      -1,   165,    98,   179,   100,   171,    -1,   177,    89,   100,
     171,    -1,   179,   100,   171,    -1,   166,    98,   152,    -1,
     152,    -1,    -1,   152,    -1,   167,    98,   152,    -1,    63,
     101,   154,   102,    95,   144,    96,    -1,    63,   101,   154,
     102,   145,    -1,    -1,   169,    98,   177,    89,    -1,   177,
      89,    -1,    -1,   170,    98,   177,    89,    -1,   177,    89,
      -1,   170,    98,    89,    89,    -1,    89,    89,    -1,    86,
      -1,    87,    -1,    88,    -1,    54,    -1,    23,    -1,   173,
      -1,   174,    -1,   176,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   108,    -1,    75,    -1,    80,    -1,   109,
      -1,   110,    -1,    91,    -1,    92,    -1,    79,    -1,    77,
      -1,    78,    -1,    65,    -1,   100,    -1,    71,    -1,    69,
      -1,    73,    -1,    17,    -1,    66,    -1,    68,    -1,    76,
      -1,    81,    -1,    82,    -1,    83,    -1,    67,    -1,    84,
      -1,   103,    -1,   178,    -1,   178,   105,    -1,   178,   111,
     112,    -1,   178,   111,    32,   112,    -1,   180,    -1,    62,
     180,    -1,    42,   180,    -1,    47,   180,    -1,    22,   180,
      -1,     6,   180,    -1,    13,   180,    -1,    89,    -1,    89,
     105,    -1,    89,   111,    86,   112,    -1,   110,    89,    -1,
      89,    94,   179,    -1,    89,   105,   106,    92,   179,    -1,
      89,   111,    86,   112,    94,   179,    -1,    89,    85,   179,
      -1,    89,    -1,    11,    -1,    44,    32,    -1,    32,    -1,
      35,    32,    -1,    19,    -1,    25,    -1,    35,    -1,     7,
      -1,    44,    -1,    61,    -1,    45,    11,    -1,    45,    32,
      -1,    58,    32,    -1,    45,    44,    32,    -1,    45,    35,
      32,    -1,    45,    19,    -1,    45,    25,    -1,    45,    35,
      -1,    45,    44,    -1,    58,    11,    -1,    58,    44,    32,
      -1,    58,    35,    32,    -1,    58,    19,    -1,    58,    25,
      -1,    58,    35,    -1,    58,    44,    -1,    12,    89,    -1,
      48,    89,    -1,    57,    89,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    45,    45,    45,    45,    47,    49,    49,
      49,    49,    51,    51,    53,    55,    55,    57,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    61,    63,    63,    65,    67,    67,
      69,    71,    71,    73,    75,    77,    77,    79,    79,    81,
      81,    81,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    87,    89,    91,    93,    93,    93,    93,    93,    93,
      95,    97,    99,   101,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   107,   109,   109,   109,   109,   109,   109,   109,   111,
     113,   113,   115,   117,   117,   117,   117,   117,   117,   119,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   123,   125,   127,
     127,   129,   131,   133,   133,   135,   135,   137,   139,   141,
     141,   143,   143,   145,   145,   145,   145,   147,   147,   149,
     149,   149,   151,   151,   153,   153,   153,   155,   155,   155,
     155,   155,   157,   157,   157,   157,   157,   159,   159,   159,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   163,
     163,   163,   163,   163,   163,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   167,   167,   167,   169,
     169,   169,   169,   171,   171,   171,   171,   171,   171,   171,
     173,   173,   173,   173,   173,   173,   173,   173,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE_TOK", "DEFINE_TOK",
  "ABSTRACT_TOK", "AUTO_TOK", "BOOL_TOK", "BREAK_TOK", "CASE_TOK",
  "CATCH_TOK", "CHAR_TOK", "CLASS_TOK", "CONST_TOK", "CONTINUE_TOK",
  "DEFAULT_TOK", "DELETE_TOK", "DIV_ASSIGN_TOK", "DO_TOK", "DOUBLE_TOK",
  "ELSE_TOK", "ENUM_TOK", "EXTERN_TOK", "FALSE_TOK", "FINALLY_TOK",
  "FLOAT_TOK", "EACH_TOK", "FOR_TOK", "IN_TOK", "FRIEND_TOK", "IF_TOK",
  "INLINE_TOK", "INT_TOK", "INTERFACE_TOK", "LITERAL_TOK", "LONG_TOK",
  "MUTABLE_TOK", "NAMESPACE_TOK", "NEW_TOK", "PRIVATE_TOK",
  "PROTECTED_TOK", "PUBLIC_TOK", "REGISTER_TOK", "RETURN_TOK", "SHORT_TOK",
  "SIGNED_TOK", "SIZEOF_TOK", "STATIC_TOK", "STRUCT_TOK", "SWITCH_TOK",
  "TEMPLATE_TOK", "THIS_TOK", "THREAD_TOK", "THROW_TOK", "TRUE_TOK",
  "TRY_TOK", "TYPEDEF_TOK", "UNION_TOK", "UNSIGNED_TOK", "USING_TOK",
  "VIRTUAL_TOK", "VOID_TOK", "VOLATILE_TOK", "WHILE_TOK", "ENDL",
  "NOT_EQUAL_TOK", "MOD_ASSIGN_TOK", "AND_TOK", "BIN_AND_ASSIGN_TOK",
  "MULTIPLY_ASSIGN_TOK", "INC_TOK", "ADD_ASSIGN_TOK", "DEC_TOK",
  "SUB_ASSIGN_TOK", "DIV_ASSGN_TOK", "LEFT_SHIFT_TOK",
  "LEFT_SHIFT_ASSIGN_TOK", "LESS_OR_EQUAL_TOK", "EQUAL_TOK",
  "GREATER_OR_EQUAL_TOK", "RIGHT_SHIFT_TOK", "RIGHT_SHIFT_ASSIGN_TOK",
  "EXCLUSIVE_OR_ASSIGN_TOK", "BITWISE_INCLUSIVE_OR_ASSIGN_TOK", "OR_TOK",
  "SCOPE_TOK", "INT_NUM_TOK", "FLOAT_NUM_TOK", "STRING_TOK", "IDENT_TOK",
  "OPERATOR_FUN_TOK", "'<'", "'>'", "'\"'", "'.'", "'{'", "'}'", "':'",
  "','", "';'", "'='", "'('", "')'", "'!'", "'+'", "'*'", "'-'", "'/'",
  "'%'", "'|'", "'&'", "'['", "']'", "$accept", "parse", "cpp",
  "including", "including1", "include_arg", "defining", "defining1",
  "definitions", "definitions1", "template", "template1", "class",
  "class1", "struct", "struct1", "union", "union1", "union_body",
  "extensions", "access_specifier", "class_body", "struct_body",
  "var_declaration", "var_declaration1", "var_definition",
  "var_definition1", "function_declaration", "function_declaration1",
  "function_definition", "function_definition1", "function_body",
  "one_line_function_body", "returning", "returning1", "function_call",
  "function_call1", "assignment", "assignment1", "operation", "operation1",
  "comparation", "condition_if", "condition_if1", "condition_switch",
  "condition_switch1", "switch_body", "cases_section", "default_section",
  "loop_for", "loop_for1", "loop_do", "initial_args", "action_args",
  "call_arguments", "loop_while", "arguments", "template_arguments",
  "value", "operator", "operation_operator", "comparing_operator",
  "assign_operator", "logical_operator", "type", "type_spec", "ident",
  "typevar", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    60,    62,    34,    46,   123,   125,    58,    44,    59,
      61,    40,    41,    33,    43,    42,    45,    47,    37,   124,
      38,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   115,   115,   115,   115,   116,   117,   117,
     117,   117,   118,   118,   119,   120,   120,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   123,   124,   124,   125,   126,   126,
     127,   128,   128,   129,   130,   131,   131,   132,   132,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   137,   138,   139,   139,   139,   139,   139,   139,
     140,   141,   142,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   147,   147,   147,   147,   147,   147,   147,   148,
     149,   149,   150,   151,   151,   151,   151,   151,   151,   152,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   155,   156,
     156,   157,   158,   159,   159,   160,   160,   161,   162,   163,
     163,   164,   164,   165,   165,   165,   165,   166,   166,   167,
     167,   167,   168,   168,   169,   169,   169,   170,   170,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   177,
     177,   177,   177,   178,   178,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   179,   179,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     1,     1,     5,     4,
       5,     4,     3,     1,     1,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     8,    10,     1,     5,     7,
       1,     4,     6,     1,     4,     2,     1,     4,     2,     1,
       1,     1,     0,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     0,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     1,     5,     5,     5,     5,     6,     6,
       1,     6,     1,     8,     2,     2,     3,     2,     3,     2,
       2,     2,     2,     2,     3,     2,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     3,     3,     3,     3,     4,     4,     1,
       4,     6,     1,     4,     4,     4,     4,     5,     5,     1,
       3,     3,     3,     4,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     5,     3,     2,     4,     1,     1,     7,
       5,     1,     7,     2,     1,     4,     3,     3,     1,    11,
       9,     9,     7,     6,     5,     4,     3,     3,     1,     0,
       1,     3,     7,     5,     0,     4,     2,     0,     4,     2,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     4,     1,     2,     2,     2,     2,     2,     2,
       1,     2,     4,     2,     3,     5,     6,     3,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   256,   249,     0,     0,   253,     0,
     254,   251,   255,     0,   257,     0,     0,     0,     0,     0,
       0,   258,     0,   248,     0,     2,     0,     7,     0,    14,
       6,    17,    20,    34,    21,    37,    22,    40,    23,    43,
      18,    71,    19,    73,    25,    80,    24,    82,     0,   229,
     233,     0,     0,     0,     0,     0,     0,   238,   275,   239,
     237,   252,   235,   250,   259,   264,   265,   260,   266,   267,
     236,   276,    62,     0,   187,   277,     0,   268,   271,   272,
     261,   273,   274,   234,     1,     0,     0,     4,     0,     5,
      28,    29,    30,    31,    26,    27,    32,    33,     0,   230,
       0,    13,     0,     0,   196,   195,   192,   193,   194,    16,
     275,    52,     0,   263,   262,     0,    67,    68,    69,    70,
      51,    50,    49,     0,     0,   248,     0,     0,     0,    46,
       0,   270,   269,     0,     0,     3,     0,    72,     0,   184,
       0,   231,     9,     0,    11,     0,    54,    55,    56,    57,
       0,    41,    63,    64,    65,    66,    62,     0,    48,   191,
       0,     0,   189,    44,    45,     0,     0,     0,    15,     0,
       0,     0,   240,     0,     0,     0,   146,   129,     0,   139,
     147,   145,     0,     0,   232,    12,    38,     0,    58,    59,
      60,    61,    52,     0,     0,     0,   248,     0,     8,    10,
     248,   148,   144,   240,   150,   152,     0,     0,   179,   241,
       0,     0,   146,     0,   147,   145,   155,   243,    75,   214,
     226,   205,   212,   213,   211,   206,   227,   209,   210,    76,
     228,   200,   201,   202,   203,   204,   207,   208,     0,   197,
     198,   199,    77,   149,   151,    74,     0,     0,   186,    53,
       0,    42,    47,    52,     0,   190,   188,     0,    78,    79,
       0,   247,   240,   244,   180,     0,     0,     0,   148,   144,
     154,     0,     0,     0,   141,   142,   140,     0,     0,    81,
      39,     0,     0,     0,   179,     0,   130,     0,   242,     0,
     143,     0,   156,   185,     0,     0,     0,     0,     0,     0,
       0,   240,    96,    97,     0,   107,   121,   146,    99,   132,
       0,   101,   158,   102,   161,   103,   168,   105,   104,     0,
     145,    35,    52,     0,   181,   245,     0,   153,   106,     0,
       0,   109,   110,     0,   120,   146,   112,     0,   114,   115,
     116,   118,   117,     0,     0,     0,   122,   146,     0,   147,
     145,     0,     0,     0,    83,   108,    84,    85,    95,   146,
      87,     0,    89,    90,    91,    93,    92,    98,   100,     0,
     219,   220,   221,   217,   216,   218,   222,   223,   224,   225,
     215,     0,     0,   131,   246,   119,     0,     0,   111,   113,
     240,     0,     0,     0,   157,     0,   148,   144,   126,   125,
     123,   124,     0,     0,    94,    86,    88,     0,   146,     0,
     147,   145,    36,     0,     0,     0,     0,     0,     0,     0,
     127,   128,     0,     0,   148,   144,   134,   135,   136,   133,
       0,     0,     0,     0,     0,     0,   176,     0,   160,     0,
       0,   183,   137,   138,     0,     0,     0,     0,     0,   175,
       0,     0,     0,   164,     0,     0,   172,     0,   174,   178,
       0,   159,     0,   162,     0,     0,   163,   182,     0,   173,
       0,     0,   166,     0,     0,   171,   177,     0,   170,   165,
     167,     0,   169
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,   102,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   128,   123,
     187,   145,   115,   302,    41,   303,    43,    44,    45,    46,
      47,   304,   333,   305,   306,   212,   177,   308,   309,   310,
     179,   395,   311,   312,   313,   314,   452,   453,   466,   315,
     316,   317,   391,   460,   265,   318,   182,   126,   214,   238,
     239,   240,   381,   241,    48,    49,   320,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -413
static const yytype_int16 yypact[] =
{
    2290,    48,   -80,  2722,  -413,  -413,   -75,  2722,  -413,  2722,
    -413,  -413,   -13,  2722,    -3,   205,  2722,   -46,     4,   -51,
     227,  -413,  2722,  -413,    24,  -413,  2350,  -413,  2409,  -413,
    2462,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,    15,   -49,
    -413,    25,    25,    89,    35,    57,    63,  -413,   -12,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   131,   138,
    -413,  -413,  2515,   193,  2568,  -413,  2515,  -413,  -413,  -413,
    -413,   151,   157,  -413,  -413,   130,  2409,  2462,    91,  2462,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   164,  -413,
     -19,  -413,   149,   -40,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  2515,   193,  -413,  -413,  2056,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,     7,   105,   110,    21,   120,  2109,  -413,
     126,  -413,  -413,    25,    25,  2462,    89,  -413,  2142,  2515,
     123,  -413,  -413,   155,  -413,  1844,  -413,  -413,  -413,  -413,
      38,  -413,  -413,  -413,  -413,  -413,  2515,   193,  -413,  -413,
     208,  2621,  -413,  -413,  -413,   152,   162,   135,  -413,  2674,
     -50,   -50,   340,  2178,  2178,   177,   170,  -413,  2694,  -413,
     175,   -62,    51,   189,  -413,  -413,  -413,   186,  -413,  -413,
    -413,  -413,  2515,  2162,   198,   182,   200,   201,  -413,  -413,
     -31,   199,   202,    96,  -413,  -413,   -50,   -43,  2178,   197,
     211,  2674,  -413,  2740,  -413,   212,  3062,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   237,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  2515,    65,  -413,  -413,
    1897,  -413,  -413,  2515,   193,  -413,  -413,   210,  -413,  -413,
     -50,  -413,   341,  -413,  3062,    69,   213,   194,  -413,  -413,
    -413,   221,  2178,  2178,  -413,  -413,  -413,   222,  1714,  -413,
    -413,  1950,    59,   214,  2178,  2178,  -413,   -50,   218,   -31,
    -413,  2786,  3062,  -413,   217,  1270,   216,   219,   479,   228,
     229,   191,  -413,  -413,   770,  -413,  -413,   220,  -413,  -413,
    2832,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   242,
     290,  -413,  2515,    93,  3062,  -413,   -50,  -413,  -413,   233,
    1714,  -413,  -413,   270,  -413,   236,  -413,  2878,  -413,  -413,
    -413,  -413,  -413,  1786,  2178,  2674,  -413,   238,  2924,   240,
     -52,   247,  2178,   244,  -413,  -413,  -413,  -413,  -413,   245,
    -413,  2970,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   148,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  2203,  2003,  -413,  -413,  -413,   870,   248,  -413,  -413,
     -37,   195,   263,   253,  3062,   239,   256,   258,  -413,  -413,
    -413,  -413,   267,   268,  -413,  -413,  -413,  2674,   266,  3016,
     276,   -38,  -413,   313,  2178,  1786,  2178,   278,    89,  1356,
    -413,  -413,   223,  1442,   284,   285,  -413,  -413,  -413,  -413,
     292,   283,   303,   294,   297,    89,  -413,  1714,  -413,   388,
    1714,  -413,  -413,  -413,  2178,   304,   302,    89,  2178,  -413,
     970,   312,   314,   114,  1070,   309,  -413,    89,  -413,  3062,
     108,  -413,  1714,  -413,   315,   316,  -413,  -413,   317,  -413,
    2178,  1528,  1614,  1714,  1714,  -413,  3062,  1714,  -413,  1614,
    1614,  1170,  -413
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -413,  -413,  -413,  -413,  -413,   -35,   392,  -413,    14,  -413,
     -18,  -413,    -9,  -413,    -5,  -413,    79,  -413,  -413,  -110,
     -67,  -188,   264,     0,  -413,     5,  -413,   -14,  -413,    -8,
    -413,  -315,  -412,  -268,  -413,    50,  -413,  -254,  -413,   241,
    -413,  -242,   134,  -413,   252,  -413,  -413,  -413,  -413,   255,
    -413,   275,  -413,  -413,   137,   291,  -413,  -413,   -30,  -413,
    -413,  -413,  -413,  -413,   -73,  -413,   336,   594
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -249
static const yytype_int16 yytable[] =
{
      40,   127,   150,   130,   250,    42,   124,   438,   243,    53,
     244,   441,    90,   140,    58,   386,    96,   103,   243,    61,
     244,    91,    97,   109,    84,    92,    40,   334,    40,    63,
      94,    42,   243,    42,   244,    95,   358,   245,    75,   203,
      87,   336,    89,    71,    76,   124,   262,   401,   206,    72,
     360,    73,  -248,   144,   143,   130,    99,   260,   118,   478,
     175,   429,   100,   257,   119,   281,   183,   175,   209,    90,
     208,    90,   116,    96,   210,    96,   129,   117,    91,    97,
      91,    97,    92,   111,    92,   112,    40,    94,   197,    94,
     194,    42,    95,   141,    95,    74,   202,   148,   166,   167,
     135,   154,   156,   149,    98,   157,   168,   155,   180,    93,
     403,   146,   104,   160,   101,   152,   147,    90,   358,   161,
     153,    96,   450,   464,   110,   454,    91,    97,   164,   465,
      92,   190,   360,   192,   382,    94,   157,   191,   269,    51,
      95,    52,   118,   105,   282,   188,    71,   472,   119,   246,
     189,   334,    75,   247,   322,   334,   116,   157,   479,   480,
     278,   117,   481,   113,   279,   336,    93,   285,    93,   336,
     114,   286,   431,   277,   434,   106,   107,   108,   148,   154,
     136,   206,   358,   131,   149,   155,   358,   124,   176,   132,
     260,   285,   146,   152,   158,   383,   360,   147,   153,   159,
     360,   209,   455,   334,   358,   319,   470,   210,   275,   162,
     471,   358,   358,   358,    93,   165,    64,   336,   360,   201,
     195,   133,   319,   134,    65,   360,   360,   360,   199,   143,
      66,   319,   120,   121,   122,   184,   190,    67,    77,   148,
      68,   142,   191,   143,   185,   149,    78,   137,   138,    69,
     188,   137,    79,   146,   198,   189,   143,   319,   147,    80,
     104,   268,    81,   137,   138,   139,   217,   190,   349,   218,
     392,    82,   397,   191,   242,   271,   206,   253,   248,   254,
    -248,   188,   243,   249,   244,   207,   189,   252,   274,   255,
     256,   105,   208,   415,   416,   331,   209,   267,   258,   283,
     332,   259,   210,   266,   356,   287,   288,   370,   148,   357,
     289,   293,   326,   319,   149,   284,   328,   343,   439,   367,
     344,   290,   146,   106,   107,   108,   172,   147,   307,   351,
     352,   369,   385,   387,   425,   388,   402,   398,   272,   400,
     273,   419,   432,   404,   405,   335,   319,   175,   347,   414,
     319,   410,   417,   418,   359,   420,   371,   421,   372,   373,
     243,   374,   244,   375,   319,   426,   376,   319,   190,   422,
     423,   377,   378,   379,   191,   428,   430,   319,   435,   178,
     307,   319,   188,   442,   443,   445,   356,   189,   436,   319,
     380,   357,   446,   444,   447,   396,   448,   451,   319,   319,
     319,   319,   457,   456,   319,   449,   319,   319,   319,   462,
     463,   468,   473,   474,   213,   216,   475,   458,    86,   331,
     193,   323,     0,   331,   332,   206,   206,   469,   332,   338,
       0,   408,     0,     0,   207,   260,   359,     0,   362,     0,
       0,   208,   284,     0,     0,   209,   209,     0,     0,   264,
     356,   210,   210,     0,   356,   357,     0,   424,     0,   357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,   331,   356,   335,   181,     0,   332,   357,     0,   356,
     356,   356,     0,     0,   357,   357,   357,   307,     0,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,   104,     0,   359,     0,   204,   205,     0,   215,
     215,     0,   307,   291,   292,     0,     0,   345,     0,     0,
     362,   335,   359,   307,   307,   264,   324,   307,     0,   359,
     359,   359,     0,   105,     0,     0,   337,     0,     0,   348,
       0,     0,   261,   263,   215,   361,     0,   339,     0,   170,
     340,   171,     0,   338,     0,     0,   363,   338,     0,   364,
       0,     0,     0,     0,     0,   106,   107,   108,   172,     0,
     341,     0,     0,     0,   276,     0,     0,     0,   346,   365,
     173,     0,   174,     0,   362,   394,   342,     0,   362,   175,
       0,     0,     0,   394,     0,   366,   263,    57,     0,     0,
       0,    59,     0,    60,     0,   338,   362,    62,   215,   215,
      70,     0,     0,   362,   362,   362,    83,     0,     0,     0,
     215,   215,   409,   325,     0,     0,     0,   361,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,   363,     0,
       0,   364,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,     0,   394,     0,     0,
     337,   365,   384,     0,   337,     0,     0,     0,     0,     0,
       0,   339,     0,     0,   340,   339,     0,   366,   340,   393,
     215,     0,     0,     0,     0,   394,     0,     0,   215,   459,
       0,   361,     0,     0,   341,   361,     0,     0,   341,     0,
       0,     0,   363,     0,     0,   364,   363,     0,     0,   364,
     342,   476,   337,   361,   342,     0,     0,   411,     0,     0,
     361,   361,   361,   339,   363,   365,   340,   364,     0,   365,
       0,   363,   363,   363,   364,   364,   364,     0,     0,     0,
       0,   366,     0,     0,     0,   366,   341,   365,     0,     0,
     215,   433,   215,     0,   365,   365,   365,     0,     0,     0,
       0,     0,   342,   366,     0,     0,     0,     0,     0,     0,
     366,   366,   366,     0,     0,     0,     3,     4,   353,     0,
     215,     5,    54,     7,   215,     0,     0,     0,   295,     8,
       0,     0,     9,   104,     0,    10,     0,   296,     0,     0,
     297,     0,    11,     0,     0,    12,   215,     0,   211,     0,
       0,     0,    13,   298,    14,    15,     0,    16,    55,   299,
       0,     0,     0,     0,   105,     0,     0,    56,    20,     0,
       0,    21,    22,   300,     0,     0,     0,     0,     0,     0,
     170,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   301,
       0,     0,     0,     0,     0,     0,   354,     0,     0,   355,
       0,   173,     0,   174,     0,     0,     3,     4,   353,     0,
     175,     5,    54,     7,     0,     0,     0,     0,   295,     8,
       0,     0,     9,   104,     0,    10,     0,   296,     0,     0,
     297,     0,    11,     0,     0,    12,     0,     0,   211,     0,
       0,     0,    13,   298,    14,    15,     0,    16,    55,   299,
       0,     0,     0,     0,   105,     0,     0,    56,    20,     0,
       0,    21,    22,   300,     0,     0,     0,     0,     0,     0,
     170,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   301,
       0,     0,     0,     0,     0,     0,   413,     0,     0,   355,
       0,   173,     0,   174,     0,     0,     3,     4,   353,     0,
     175,     5,    54,     7,     0,     0,     0,     0,   295,     8,
       0,     0,     9,   104,     0,    10,     0,   296,     0,     0,
     297,     0,    11,     0,     0,    12,     0,     0,   211,     0,
       0,     0,    13,   298,    14,    15,     0,    16,    55,   299,
       0,     0,     0,     0,   105,     0,     0,    56,    20,     0,
       0,    21,    22,   300,     0,     0,     0,     0,     0,     0,
     170,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   301,
       0,     0,     0,     0,     0,     0,   461,     0,     0,   355,
       0,   173,     0,   174,     0,     0,     3,     4,   353,     0,
     175,     5,    54,     7,     0,     0,     0,     0,   295,     8,
       0,     0,     9,   104,     0,    10,     0,   296,     0,     0,
     297,     0,    11,     0,     0,    12,     0,     0,   211,     0,
       0,     0,    13,   298,    14,    15,     0,    16,    55,   299,
       0,     0,     0,     0,   105,     0,     0,    56,    20,     0,
       0,    21,    22,   300,     0,     0,     0,     0,     0,     0,
     170,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   301,
       0,     0,     0,     0,     0,     0,   467,     0,     0,   355,
       0,   173,     0,   174,     0,     0,     3,     4,   353,     0,
     175,     5,    54,     7,     0,     0,     0,     0,   295,     8,
       0,     0,     9,   104,     0,    10,     0,   296,     0,     0,
     297,     0,    11,     0,     0,    12,     0,     0,   211,     0,
       0,     0,    13,   298,    14,    15,     0,    16,    55,   299,
       0,     0,     0,     0,   105,     0,     0,    56,    20,     0,
       0,    21,    22,   300,     0,     0,     0,     0,     0,     0,
     170,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   301,
       0,     0,     0,     0,     0,     0,   482,     0,     0,   355,
       0,   173,     0,   174,     0,     0,     3,     4,   329,     0,
     175,     5,    54,     7,     0,     0,     0,     0,   295,     8,
       0,     0,     9,   104,     0,    10,     0,   296,     0,     0,
     297,     0,    11,     0,     0,    12,     0,     0,   211,     0,
       0,     0,    13,   298,    14,    15,     0,    16,    55,   299,
       0,     0,     0,     0,   105,     0,     0,    56,    20,     0,
       0,    21,    22,   300,     0,     0,     0,     0,     0,     0,
     170,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   301,
       0,     0,     3,     4,   329,   330,     0,     5,    54,     7,
       0,   173,     0,   174,   295,     8,     0,     0,     9,   104,
     175,    10,     0,   296,     0,     0,   297,     0,    11,     0,
       0,    12,     0,     0,   211,     0,     0,     0,    13,   298,
      14,    15,     0,    16,    55,   299,     0,     0,     0,     0,
     105,     0,     0,    56,    20,     0,     0,    21,    22,   300,
       0,     0,     0,     0,     0,     0,   170,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   301,     0,     0,     3,     4,
     329,   437,     0,     5,    54,     7,     0,   173,     0,   174,
     295,     8,     0,     0,     9,   104,   175,    10,     0,   296,
       0,     0,   297,     0,    11,     0,     0,    12,     0,     0,
     211,     0,     0,     0,    13,   298,    14,    15,     0,    16,
      55,   299,     0,     0,     0,     0,   105,     0,     0,    56,
      20,     0,     0,    21,    22,   300,     0,     0,     0,     0,
       0,     0,   170,     0,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   301,     0,     0,     3,     4,   329,   440,     0,     5,
      54,     7,     0,   173,     0,   174,   295,     8,     0,     0,
       9,   104,   175,    10,     0,   296,     0,     0,   297,     0,
      11,     0,     0,    12,     0,     0,   211,     0,     0,     0,
      13,   298,    14,    15,     0,    16,    55,   299,     0,     0,
       0,     0,   105,     0,     0,    56,    20,     0,     0,    21,
      22,   300,     0,     0,     0,     0,     0,     0,   170,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   301,     0,     0,
       3,     4,   353,   477,     0,     5,    54,     7,     0,   173,
       0,   174,   295,     8,     0,     0,     9,   104,   175,    10,
       0,   296,     0,     0,   297,     0,    11,     0,     0,    12,
       0,     0,   211,     0,     0,     0,    13,   298,    14,    15,
       0,    16,    55,   299,     0,     0,     0,     0,   105,     0,
       0,    56,    20,     0,     0,    21,    22,   300,     0,     0,
       0,     0,     0,     0,   170,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   301,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,     0,   173,     0,   174,     0,     0,
       3,     4,   294,     0,   175,     5,    54,     7,     0,     0,
       0,     0,   295,     8,     0,     0,     9,   104,     0,    10,
       0,   296,     0,     0,   297,     0,    11,     0,     0,    12,
       0,     0,   211,     0,     0,     0,    13,   298,    14,    15,
       0,    16,    55,   299,     0,     0,     0,     0,   105,     0,
       0,    56,    20,     0,     0,    21,    22,   300,     0,     0,
       0,     0,     0,     0,   170,     0,   171,     0,     0,     0,
       0,     0,     3,     4,     0,     0,     0,     5,    54,     7,
     106,   107,   108,   301,     0,     8,     0,     0,     9,     0,
       0,    10,     0,     0,     0,   173,     0,   174,    11,     0,
       0,    12,     0,     0,   175,     0,     0,     0,    13,     0,
      14,    15,     0,    16,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    20,     0,     0,    21,    22,     0,
       3,     4,     0,     0,     0,     5,    54,     7,     0,     0,
       0,     0,     0,     8,     0,     0,     9,     0,     0,    10,
       0,     0,     0,     0,     0,   390,    11,     0,     0,    12,
       0,     0,     0,   120,   121,   122,    13,     0,    14,    15,
       0,    16,    55,     0,     0,     0,   175,     0,     0,     0,
       0,    56,    20,     3,     4,    21,    22,     0,     5,    54,
       7,     0,     0,     0,     0,     0,     8,     0,     0,     9,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,     0,    12,    23,     0,     0,   120,   121,   122,    13,
     186,    14,    15,     0,    16,    55,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    20,     3,     4,    21,    22,
       0,     5,    54,     7,     0,     0,     0,     0,     0,     8,
       0,     0,     9,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    23,     0,     0,   120,
     121,   122,    13,   280,    14,    15,     0,    16,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    20,     3,
       4,    21,    22,     0,     5,    54,     7,     0,     0,     0,
       0,     0,     8,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    11,     0,     0,    12,    23,
       0,     0,   120,   121,   122,    13,   321,    14,    15,     0,
      16,    55,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    20,     3,     4,    21,    22,     0,     5,    54,     7,
       0,     0,     0,     0,     0,     8,     0,     0,     9,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    23,     0,     0,     0,     0,     0,    13,   412,
      14,    15,     0,    16,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    20,     3,     4,    21,    22,     0,
       5,    54,     7,     0,     0,     0,     0,     0,     8,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,     0,    12,    23,     0,     0,     0,     0,
       0,    13,   151,    14,    15,     0,    16,    55,     0,     0,
       0,     0,     0,     0,     0,   104,    56,    20,     3,     4,
      21,    22,     0,     5,    54,     7,     0,     0,     0,     0,
     169,     8,     0,     0,     9,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,   105,    12,    23,     0,
       0,   104,     0,     0,    13,   163,    14,    15,     0,    16,
      55,     0,   170,     0,   171,     0,   211,     0,     0,    56,
      20,     0,     0,    21,    22,     0,   104,     0,   106,   107,
     108,   172,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,   173,     0,   174,     0,     0,   170,     0,
     171,    23,   175,     0,     0,     0,     0,   105,   251,     0,
       0,     0,     0,     0,   106,   107,   108,   172,     0,     0,
       0,     0,     0,   170,     0,   171,     0,     0,     0,   173,
       0,   174,     0,     0,     0,     0,     0,     0,   175,   106,
     107,   108,   172,     1,     2,     0,     3,     4,     0,     0,
       0,     5,     6,     7,   173,     0,   174,     0,     0,     8,
       0,     0,     9,   175,     0,    10,     0,     0,     0,     0,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,    14,    15,     0,    16,    17,     0,
      18,     0,     0,     0,     0,     0,     0,    19,    20,     0,
       0,    21,    22,    85,     2,     0,     3,     4,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,     8,
       0,     0,     9,     0,     0,    10,     0,     0,     0,    23,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,    14,    15,     0,    16,    17,     0,
      18,     0,     0,     0,     0,     0,     0,    19,    20,     0,
       0,    21,    22,    88,     0,     3,     4,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,     8,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,    23,
       0,    11,     0,     0,    12,     0,     0,     0,     0,     0,
       0,    13,     0,    14,    15,     0,    16,    17,     0,    18,
       0,     0,     0,     0,     0,     0,    19,    20,     3,     4,
      21,    22,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     8,     0,     0,     9,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    23,     0,
       0,     0,     0,     0,    13,     0,    14,    15,     0,    16,
      17,     0,    18,     0,     0,     0,     0,     0,     0,    19,
      20,     3,     4,    21,    22,     0,     5,    54,     7,     0,
       0,     0,     0,     0,     8,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,     0,
      12,    23,     0,     0,     0,     0,     0,    13,     0,    14,
      15,     0,    16,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    20,     3,     4,    21,    22,     0,     5,
      54,     7,     0,     0,     0,     0,     0,     8,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,     0,    12,    23,     0,     0,     0,     0,     0,
      13,     0,    14,    15,     0,    16,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    20,     3,     4,    21,
      22,     0,     5,    54,     7,     0,     0,     0,     0,     0,
       8,     0,     0,     9,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    11,     0,     0,    12,   125,     0,     0,
       0,     0,     0,    13,     0,    14,    15,     0,    16,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    20,
       3,     4,    21,    22,     0,     5,    54,     7,     0,     0,
       0,     0,     0,     8,     0,     0,     9,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    12,
     196,     0,     0,     0,     0,     0,    13,     0,    14,    15,
       0,    16,    55,     0,     0,     0,     0,     0,     0,     4,
       0,    56,    20,     5,    54,    21,    22,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,     0,    12,     0,   219,
       0,   220,     0,   200,     0,     0,    14,    15,     0,   221,
      55,   222,   223,   224,   225,     0,     0,     0,   226,    56,
      20,     0,     0,    21,     0,   227,   228,     0,     0,     0,
       0,     0,     0,   229,     0,     0,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   219,     0,   220,     0,     0,
       0,    23,     0,     0,     0,   221,     0,   222,   223,   224,
     225,     0,     0,     0,   226,     0,     0,     0,     0,     0,
       0,   227,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,   230,   231,   232,   233,   234,   235,   236,
     237,   219,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,   222,   223,   224,   225,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,   227,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   327,   230,
     231,   232,   233,   234,   235,   236,   237,   219,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,   222,
     223,   224,   225,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,   227,   228,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   219,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,   222,   223,   224,   225,     0,
       0,     0,   226,     0,     0,     0,     0,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,   389,     0,     0,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   219,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,   222,   223,   224,   225,     0,     0,     0,   226,     0,
       0,     0,     0,     0,     0,   227,   228,     0,     0,     0,
       0,     0,     0,   399,     0,     0,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   219,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,   222,   223,   224,
     225,     0,     0,     0,   226,     0,     0,     0,     0,     0,
       0,   227,   228,     0,     0,     0,     0,     0,     0,   406,
       0,     0,     0,   230,   231,   232,   233,   234,   235,   236,
     237,   219,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,   222,   223,   224,   225,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,   227,   228,     0,
       0,     0,     0,     0,     0,   427,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   219,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,   222,
     223,   224,   225,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,   227,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,   231,   232,   233,   234,
     235,   236,   237
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-413))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    74,   112,    76,   192,     0,    73,   419,    70,    89,
      72,   423,    30,    32,    89,   330,    30,    52,    70,    32,
      72,    30,    30,    53,     0,    30,    26,   295,    28,    32,
      30,    26,    70,    28,    72,    30,   304,    99,    89,    89,
      26,   295,    28,    89,    95,   112,    89,    99,    85,    95,
     304,    97,    89,    93,    94,   128,   105,    94,    72,   471,
     110,    99,   111,    94,    72,   253,   139,   110,   105,    87,
     101,    89,    72,    87,   111,    89,    76,    72,    87,    87,
      89,    89,    87,    95,    89,    97,    86,    87,   161,    89,
     157,    86,    87,   112,    89,    91,   169,   111,   133,   134,
      86,   115,    95,   111,    89,    98,   136,   115,   138,    30,
     352,   111,    23,    92,    89,   115,   111,   135,   386,    98,
     115,   135,   437,     9,    89,   440,   135,   135,   128,    15,
     135,   145,   386,    95,   322,   135,    98,   145,   211,    91,
     135,    93,   156,    54,   254,   145,    89,   462,   156,    98,
     145,   419,    89,   102,    95,   423,   156,    98,   473,   474,
      95,   156,   477,    32,    99,   419,    87,    98,    89,   423,
      32,   102,   414,   246,   416,    86,    87,    88,   192,   193,
      89,    85,   450,    32,   192,   193,   454,   254,   138,    32,
      94,    98,   192,   193,    89,   102,   450,   192,   193,    89,
     454,   105,   444,   471,   472,   278,    98,   111,   238,    89,
     102,   479,   480,   481,   135,    89,    11,   471,   472,   169,
      12,    91,   295,    93,    19,   479,   480,   481,    93,    94,
      25,   304,    39,    40,    41,   112,   250,    32,    11,   253,
      35,    92,   250,    94,    89,   253,    19,    99,   100,    44,
     250,    99,    25,   253,    92,   250,    94,   330,   253,    32,
      23,   211,    35,    99,   100,   101,    89,   281,   298,    99,
     343,    44,   345,   281,    99,    38,    85,    95,    89,    97,
      89,   281,    70,    97,    72,    94,   281,    89,   238,    89,
      89,    54,   101,    98,    99,   295,   105,    86,    99,    89,
     295,    99,   111,   106,   304,    92,   112,    17,   322,   304,
      89,    89,    94,   386,   322,   101,    99,   101,    95,    99,
     101,   271,   322,    86,    87,    88,    89,   322,   278,   101,
     101,    89,    99,    63,   407,    99,    89,    99,   101,    99,
     103,   102,   415,    99,    99,   295,   419,   110,   298,   101,
     423,   381,    89,   100,   304,    99,    66,    99,    68,    69,
      70,    71,    72,    73,   437,    99,    76,   440,   382,   102,
     102,    81,    82,    83,   382,    99,    63,   450,   100,   138,
     330,   454,   382,    99,    99,   102,   386,   382,   418,   462,
     100,   386,    89,   101,   100,   345,    99,     9,   471,   472,
     473,   474,   100,    99,   477,   435,   479,   480,   481,    97,
      96,   102,    97,    97,   173,   174,    99,   447,    26,   419,
     156,   284,    -1,   423,   419,    85,    85,   457,   423,   295,
      -1,   381,    -1,    -1,    94,    94,   386,    -1,   304,    -1,
      -1,   101,   101,    -1,    -1,   105,   105,    -1,    -1,   208,
     450,   111,   111,    -1,   454,   450,    -1,   407,    -1,   454,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,
      -1,   471,   472,   423,   138,    -1,   471,   472,    -1,   479,
     480,   481,    -1,    -1,   479,   480,   481,   437,    -1,    -1,
     440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     450,    -1,    23,    -1,   454,    -1,   170,   171,    -1,   173,
     174,    -1,   462,   272,   273,    -1,    -1,    38,    -1,    -1,
     386,   471,   472,   473,   474,   284,   285,   477,    -1,   479,
     480,   481,    -1,    54,    -1,    -1,   295,    -1,    -1,   298,
      -1,    -1,   206,   207,   208,   304,    -1,   295,    -1,    70,
     295,    72,    -1,   419,    -1,    -1,   304,   423,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,
     295,    -1,    -1,    -1,   238,    -1,    -1,    -1,    99,   304,
     101,    -1,   103,    -1,   450,   344,   295,    -1,   454,   110,
      -1,    -1,    -1,   352,    -1,   304,   260,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,   471,   472,    13,   272,   273,
      16,    -1,    -1,   479,   480,   481,    22,    -1,    -1,    -1,
     284,   285,   381,   287,    -1,    -1,    -1,   386,    -1,    -1,
      -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,   386,    -1,
      -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,    -1,   416,    -1,    -1,
     419,   386,   326,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,   419,   423,    -1,   386,   423,   343,
     344,    -1,    -1,    -1,    -1,   444,    -1,    -1,   352,   448,
      -1,   450,    -1,    -1,   419,   454,    -1,    -1,   423,    -1,
      -1,    -1,   450,    -1,    -1,   450,   454,    -1,    -1,   454,
     419,   470,   471,   472,   423,    -1,    -1,   381,    -1,    -1,
     479,   480,   481,   471,   472,   450,   471,   472,    -1,   454,
      -1,   479,   480,   481,   479,   480,   481,    -1,    -1,    -1,
      -1,   450,    -1,    -1,    -1,   454,   471,   472,    -1,    -1,
     414,   415,   416,    -1,   479,   480,   481,    -1,    -1,    -1,
      -1,    -1,   471,   472,    -1,    -1,    -1,    -1,    -1,    -1,
     479,   480,   481,    -1,    -1,    -1,     6,     7,     8,    -1,
     444,    11,    12,    13,   448,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,   470,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,     6,     7,     8,    95,    -1,    11,    12,    13,
      -1,   101,    -1,   103,    18,    19,    -1,    -1,    22,    23,
     110,    25,    -1,    27,    -1,    -1,    30,    -1,    32,    -1,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,     6,     7,
       8,    95,    -1,    11,    12,    13,    -1,   101,    -1,   103,
      18,    19,    -1,    -1,    22,    23,   110,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,     6,     7,     8,    95,    -1,    11,
      12,    13,    -1,   101,    -1,   103,    18,    19,    -1,    -1,
      22,    23,   110,    25,    -1,    27,    -1,    -1,    30,    -1,
      32,    -1,    -1,    35,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    45,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
       6,     7,     8,    95,    -1,    11,    12,    13,    -1,   101,
      -1,   103,    18,    19,    -1,    -1,    22,    23,   110,    25,
      -1,    27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,
       6,     7,     8,    -1,   110,    11,    12,    13,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,
      -1,    27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      86,    87,    88,    89,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,   101,    -1,   103,    32,    -1,
      -1,    35,    -1,    -1,   110,    -1,    -1,    -1,    42,    -1,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    -1,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    89,    32,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    57,    58,     6,     7,    61,    62,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    89,    -1,    -1,    39,    40,    41,    42,
      96,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,     6,     7,    61,    62,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    89,    -1,    -1,    39,
      40,    41,    42,    96,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,     6,
       7,    61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    89,
      -1,    -1,    39,    40,    41,    42,    96,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,     6,     7,    61,    62,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    89,    -1,    -1,    -1,    -1,    -1,    42,    96,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,     6,     7,    61,    62,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    89,    -1,    -1,    -1,    -1,
      -1,    42,    96,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    57,    58,     6,     7,
      61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      38,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    54,    35,    89,    -1,
      -1,    23,    -1,    -1,    42,    96,    44,    45,    -1,    47,
      48,    -1,    70,    -1,    72,    -1,    38,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    -1,    23,    -1,    86,    87,
      88,    89,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,   101,    -1,   103,    -1,    -1,    70,    -1,
      72,    89,   110,    -1,    -1,    -1,    -1,    54,    96,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,   101,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,    86,
      87,    88,    89,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    11,    12,    13,   101,    -1,   103,    -1,    -1,    19,
      -1,    -1,    22,   110,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    89,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,     4,    -1,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    89,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,     6,     7,
      61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    89,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,     6,     7,    61,    62,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    89,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,     6,     7,    61,    62,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    89,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,     6,     7,    61,
      62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    89,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
       6,     7,    61,    62,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      89,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    57,    58,    11,    12,    61,    62,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    65,
      -1,    67,    -1,    89,    -1,    -1,    44,    45,    -1,    75,
      48,    77,    78,    79,    80,    -1,    -1,    -1,    84,    57,
      58,    -1,    -1,    61,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    65,    -1,    67,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    75,    -1,    77,    78,    79,
      80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    77,    78,    79,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    77,    78,    79,
      80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,    11,    12,    13,    19,    22,
      25,    32,    35,    42,    44,    45,    47,    48,    50,    57,
      58,    61,    62,    89,   114,   115,   116,   117,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     136,   137,   138,   139,   140,   141,   142,   143,   177,   178,
     180,    91,    93,    89,    12,    48,    57,   180,    89,   180,
     180,    32,   180,    32,    11,    19,    25,    32,    35,    44,
     180,    89,    95,    97,    91,    89,    95,    11,    19,    25,
      32,    35,    44,   180,     0,     3,   119,   121,     4,   121,
     123,   125,   127,   129,   136,   138,   140,   142,    89,   105,
     111,    89,   118,   118,    23,    54,    86,    87,    88,   171,
      89,    95,    97,    32,    32,   135,   136,   138,   140,   142,
      39,    40,    41,   132,   133,    89,   170,   177,   131,   136,
     177,    32,    32,    91,    93,   121,    89,    99,   100,   101,
      32,   112,    92,    94,    93,   134,   136,   138,   140,   142,
     132,    96,   136,   138,   140,   142,    95,    98,    89,    89,
      92,    98,    89,    96,   136,    89,   118,   118,   171,    38,
      70,    72,    89,   101,   103,   110,   148,   149,   152,   153,
     171,   179,   169,   177,   112,    89,    96,   133,   136,   138,
     140,   142,    95,   135,   133,    12,    89,   177,    92,    93,
      89,   148,   177,    89,   179,   179,    85,    94,   101,   105,
     111,    38,   148,   152,   171,   179,   152,    89,    99,    65,
      67,    75,    77,    78,    79,    80,    84,    91,    92,    99,
     103,   104,   105,   106,   107,   108,   109,   110,   172,   173,
     174,   176,    99,    70,    72,    99,    98,   102,    89,    97,
     134,    96,    89,    95,    97,    89,    89,    94,    99,    99,
      94,   179,    89,   179,   152,   167,   106,    86,   148,   177,
     102,    38,   101,   103,   148,   171,   179,   177,    95,    99,
      96,   134,   132,    89,   101,    98,   102,    92,   112,    89,
     148,   152,   152,    89,     8,    18,    27,    30,    43,    49,
      63,    89,   136,   138,   144,   146,   147,   148,   150,   151,
     152,   155,   156,   157,   158,   162,   163,   164,   168,   177,
     179,    96,    95,   167,   152,   179,    94,   102,    99,     8,
      95,   136,   138,   145,   146,   148,   150,   152,   155,   157,
     162,   164,   168,   101,   101,    38,    99,   148,   152,   171,
     179,   101,   101,     8,    96,    99,   136,   138,   146,   148,
     150,   152,   155,   157,   162,   164,   168,    99,    99,    89,
      17,    66,    68,    69,    71,    73,    76,    81,    82,    83,
     100,   175,   134,   102,   179,    99,   144,    63,    99,    99,
      89,   165,   177,   179,   152,   154,   148,   177,    99,    99,
      99,    99,    89,   154,    99,    99,    99,    38,   148,   152,
     171,   179,    96,    96,   101,    98,    99,    89,   100,   102,
      99,    99,   102,   102,   148,   177,    99,    99,    99,    99,
      63,   154,   177,   179,   154,   100,   171,    95,   145,    95,
      95,   145,    99,    99,   101,   102,    89,   100,    99,   171,
     144,     9,   159,   160,   144,   154,    99,   100,   171,   152,
     166,    96,    97,    96,     9,    15,   161,    96,   102,   171,
      98,   102,   144,    97,    97,    99,   152,    95,   145,   144,
     144,   144,    96
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 43 "cpp2php.y"
    { cout << "Parsing was complited successfully" << endl; }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 47 "cpp2php.y"
    { cout << "Including" << endl; }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 53 "cpp2php.y"
    { cout << "Defining" << endl; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 57 "cpp2php.y"
    { cout << "Definitions" << endl; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 61 "cpp2php.y"
    { cout << "template" << endl; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 65 "cpp2php.y"
    { cout << "Class" << endl; }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 69 "cpp2php.y"
    { cout << "Struct" << endl; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 73 "cpp2php.y"
    { cout << "Union" << endl; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 87 "cpp2php.y"
    { cout << "var_declaration" << endl; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 91 "cpp2php.y"
    { cout << "var_definition" << endl; }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 95 "cpp2php.y"
    { cout << "Function declaration" << endl; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 99 "cpp2php.y"
    { cout << "Function definition" << endl; }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 107 "cpp2php.y"
    { cout << "Returning" << endl; }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 111 "cpp2php.y"
    { cout << "function_call" << endl; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 115 "cpp2php.y"
    { cout << "Assignment" << endl; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 119 "cpp2php.y"
    { cout << "Operation" << endl; }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 125 "cpp2php.y"
    { cout << "If" << endl; }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 129 "cpp2php.y"
    { cout << "Switch" << endl; }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 139 "cpp2php.y"
    { cout << "For" << endl; }
    break;



/* Line 1806 of yacc.c  */
#line 2622 "cpp2php.tab.c"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 176 "cpp2php.y"


main() {
	// open a file handle to a particular file:
	FILE *myfile = fopen("in.cpp", "r");
	// make sure it's valid:
	if (!myfile) {
		cout << "I can't open a.snazzle.file!" << endl;
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	// parse through the input until there is no more:
	
	do {
		yyparse();
	} while (!feof(yyin));
	
}

void yyerror(const char *s) {
	cout << "EEK, parse error on line " << line_num << "!  Message: " << s << endl;
	// might as well halt now:
	//exit(-1);
}

