/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "cpp2php.y" /* yacc.c:339  */

#include <cstdio>
#include <iostream>
#include <fstream>
using namespace std;

#include "cpp2php.tab.h"  // to get the token types that we return

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C++" int yyparse(void);
extern "C" FILE *yyin;
extern "C" FILE *yyout;
extern int line_num;

void yyerror(const char *s);

#define write(...) fprintf (yyout, __VA_ARGS__)

#line 86 "cpp2php.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cpp2php.tab.h".  */
#ifndef YY_YY_CPP2PHP_TAB_H_INCLUDED
# define YY_YY_CPP2PHP_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "cpp2php.y" /* yacc.c:355  */

	int ival;
	float fval;
	char *sval;

#line 223 "cpp2php.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPP2PHP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "cpp2php.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  539

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    48,    51,    52,    53,    54,    57,    57,
      58,    58,    60,    61,    62,    65,    66,    69,    72,    72,
      75,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    81,    84,    84,
      86,    88,    88,    91,    94,    94,    97,   100,   103,   103,
     105,   105,   107,   107,   107,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   115,   118,   121,   124,   124,   127,
     128,   129,   130,   131,   131,   134,   135,   138,   141,   144,
     147,   147,   147,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   192,   192,   193,   196,   197,   198,   199,   200,   200,
     203,   204,   207,   210,   210,   211,   211,   214,   217,   220,
     221,   222,   223,   224,   224,   227,   228,   231,   234,   235,
     236,   237,   237,   238,   238,   239,   240,   241,   242,   243,
     243,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   249,   252,   253,   256,   259,   262,   262,   262,   265,
     265,   266,   266,   268,   269,   269,   272,   272,   273,   273,
     276,   279,   279,   282,   285,   285,   285,   286,   286,   286,
     288,   289,   289,   291,   292,   295,   298,   301,   301,   301,
     301,   301,   304,   304,   305,   305,   308,   308,   308,   309,
     309,   309,   312,   312,   313,   313,   314,   314,   315,   315,
     317,   317,   319,   320,   321,   321,   324,   324,   324,   327,
     327,   328,   328,   330,   331,   332,   334,   334,   334,   334,
     334,   337,   338,   339,   340,   341,   344,   345,   346,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   360,   361,
     362,   363,   364,   365,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   381,   382,   383,   385,   385,
     385,   385,   387,   387,   387,   387,   387,   387,   387,   390,
     391,   392,   393,   394,   394,   395,   395,   396,   396,   397,
     397,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "'%'", "'|'", "'&'", "'['", "']'", "$accept", "parse", "$@1", "cpp",
  "including", "$@2", "$@3", "including1", "include_arg", "defining",
  "defining1", "definitions", "definitions1", "template", "template1",
  "class", "class1", "struct", "struct1", "union", "union1", "union_body",
  "extensions", "access_specifier", "class_body", "struct_body",
  "var_declaration", "var_declaration1", "var_definition",
  "var_definition1", "$@4", "var_definition2", "$@5", "var_definition3",
  "function_declaration", "function_declaration1", "function_definition",
  "function_definition1", "$@6", "$@7", "function_body",
  "one_line_function_body", "returning", "$@8", "returning1", "$@9",
  "returning2", "function_call", "function_call1", "$@10", "$@11",
  "assignment", "assignment1", "assignment2", "$@12", "assignment3",
  "operation", "operation1", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "$@19", "$@20", "operation2", "comparation", "condition_if",
  "condition_if1", "$@21", "$@22", "condition_if2", "$@23", "$@24",
  "condition_else", "$@25", "condition_else2", "$@26", "$@27",
  "condition_switch", "condition_switch1", "$@28", "switch_body",
  "cases_section", "$@29", "$@30", "$@31", "$@32", "default_section",
  "$@33", "case_body", "switch_value", "loop_for", "loop_for1", "$@34",
  "$@35", "$@36", "$@37", "loop_for2", "$@38", "$@39", "loop_do", "$@40",
  "$@41", "$@42", "$@43", "initial_args", "$@44", "$@45", "$@46", "$@47",
  "action_args", "call_arguments", "$@48", "loop_while", "$@49", "$@50",
  "loop_while2", "$@51", "$@52", "arguments", "template_arguments",
  "value", "operator", "operation_operator", "comparing_operator",
  "assign_operator", "logical_operator", "type", "type_spec", "ident",
  "$@53", "$@54", "$@55", "$@56", "typevar", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -492

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-492)))

#define YYTABLE_NINF -322

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -492,    23,  2198,  -492,   -43,  2570,  -492,  -492,   -39,  2570,
    -492,  2570,  -492,  -492,  -492,  2570,    -4,    88,  2570,   -54,
     -36,   -44,   131,  -492,  2570,  -492,  -492,  2198,    34,  2257,
    -492,  2310,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,   -19,
     -42,  -492,   -10,     6,    35,    57,  -492,    81,  -492,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,    47,    74,  -492,  -492,
    2363,   150,  2416,  -492,  2363,  -492,  -492,  -492,  -492,   120,
     137,  -492,    34,  2257,  2310,   -26,  -492,    90,  2310,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,   114,  -492,   -18,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  2363,   150,  -492,
    -492,  1965,  -492,  -492,  -492,  -492,  -492,  -492,  -492,    36,
     109,   121,    -1,   133,  2018,  -492,   136,  -492,  -492,  -492,
    2310,   140,   140,   -10,  -492,  -492,  2363,   -25,  -492,  1753,
    -492,  -492,  -492,  -492,    38,  -492,  -492,  -492,  -492,  -492,
    2363,   150,  -492,  -492,   208,  2469,  -492,  -492,  -492,   122,
    -492,    92,    66,  -492,   349,  2363,    17,   143,  -492,  -492,
     139,  -492,  -492,  -492,  -492,  2363,  2071,   148,   100,   149,
     152,  -492,   154,  -492,  -492,  -492,  -492,    16,  -492,  -492,
     157,   146,   153,  -492,  2772,  -492,   155,   -52,    27,  2363,
     159,  -492,  -492,  1806,  -492,  -492,  2363,   150,  -492,  -492,
    -492,  2522,  2522,   -79,   -79,  -492,   164,  -492,   142,   169,
    2051,  2051,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
    -492,  -492,   469,  -492,  -492,  -492,  -492,  -492,  -492,   167,
    -492,  -492,  1859,    69,   -61,  -492,  -492,  -492,  -492,  -492,
    -492,   -21,  -492,  -492,   -79,   158,   -79,  2051,   168,   160,
    -492,  -492,  2542,  -492,   163,  2772,  -492,  -492,  -492,  -492,
    -492,  -492,   166,  -492,  -492,  2363,   164,  -492,  -492,  -492,
    -492,  2772,    28,  -492,   170,  -492,   176,  2051,  2051,  1423,
    1912,  2051,  -492,  -492,   -79,  -492,   -61,  -492,  2588,  2772,
     171,   173,   165,   174,   172,   175,   177,    60,  -492,  -492,
    -492,   823,  -492,   180,  -492,  -492,  2634,  -492,  -492,  -492,
    -492,  -492,  -492,  -492,  -492,   185,   832,  -492,    49,  2051,
    -492,   -79,  -492,  -492,  -492,  1623,  -492,  -492,  -492,  2087,
     192,  -492,   183,  -492,  -492,  -492,  -492,  -492,   190,  -492,
    2680,  -492,  -492,  -492,  -492,  -492,  -492,  -492,   107,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
    2112,  -492,  2772,  -492,  1423,   195,  -492,  -492,   206,  -492,
     201,  -492,  2726,  -492,  -492,  -492,  -492,  -492,  1695,  2051,
    -492,   202,   203,  2772,   204,   -51,   182,  2051,  -492,  -492,
    -492,  -492,   205,   210,  2772,   211,   -46,   923,  -492,   196,
    -492,  -492,    83,   118,   218,   193,  2772,   214,  2522,  -492,
     222,   220,  2522,  -492,   250,  -492,  2363,  -492,   223,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,   224,
    2051,   -79,   238,  2051,  -492,   -10,   234,   324,   239,  -492,
     233,   236,   237,   240,   -10,  -492,  -492,   318,  1623,  -492,
     245,    89,  -492,  -492,  1623,  2051,   243,   -10,  -492,  -492,
    -492,  1423,  -492,  -492,  -492,   260,  -492,  -492,   251,  -492,
    1423,  -492,   249,  -492,  -492,   -10,  2051,  1023,   252,  -492,
     261,   260,  -492,  1123,   258,  -492,  2772,    55,  -492,  -492,
    -492,  1623,  -492,   264,  1423,  -492,  -492,  2051,  -492,  1423,
    -492,  1423,  -492,  1523,  -492,  2772,   270,  1223,  -492,  1423,
    -492,  -492,  1623,  -492,  -492,  1423,  -492,  1323,  -492
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,   328,   322,     0,     0,
     326,     0,   327,   324,   325,     0,   329,     0,     0,     0,
       0,     0,     0,   330,     0,   321,     3,     8,    12,     0,
      17,     7,    20,    23,    37,    24,    40,    25,    43,    26,
      46,    21,    74,    22,    76,    28,    87,    27,    89,     0,
     298,   302,     0,     0,     0,     0,   307,   347,   308,   306,
     304,   323,   331,   336,   337,   332,   338,   339,   305,   348,
      65,     0,   256,   349,     0,   340,   343,   344,   333,   345,
     346,   303,    12,     0,     5,     0,    11,     0,     6,    31,
      32,    33,    34,    29,    30,    35,    36,     0,   299,     0,
     265,   264,   261,   262,   263,    19,   347,    55,     0,   335,
     334,     0,    70,    71,    72,    73,    54,    53,    52,     0,
       0,   321,     0,     0,     0,    49,     0,   342,   341,     9,
       4,     0,     0,     0,    75,    77,    90,     0,   300,     0,
      57,    58,    59,    60,     0,    44,    66,    67,    68,    69,
      65,     0,    51,   260,     0,     0,   258,    47,    48,     0,
      16,     0,     0,    18,     0,   253,     0,     0,   301,    41,
       0,    61,    62,    63,    64,    55,     0,     0,     0,   321,
       0,    13,     0,    14,    83,   169,   172,   309,   176,   178,
       0,     0,   166,   142,    81,   157,   167,   165,     0,     0,
       0,   255,    56,     0,    45,    50,    55,     0,   259,   257,
      15,     0,     0,     0,     0,   319,   313,   143,   310,     0,
       0,     0,   312,    78,   283,   295,   274,   281,   282,   280,
     275,   296,   278,   279,   297,   269,   270,   271,   272,   273,
     276,   277,     0,   266,   267,   268,   168,   171,    91,     0,
      88,    42,     0,     0,   321,    84,    85,    86,   183,   164,
     182,   309,   170,   173,     0,     0,     0,   242,     0,     0,
     163,   166,     0,   167,   165,   179,   161,   174,   180,   159,
     160,   158,     0,   254,    38,    55,     0,   313,   320,   145,
     314,   243,     0,   315,   311,   177,     0,     0,     0,     0,
       0,   242,   244,   144,     0,   317,     0,   162,     0,   181,
       0,   229,     0,     0,   131,     0,     0,   309,   118,   105,
     106,     0,   116,   166,   108,   147,     0,   110,   185,   111,
     200,   112,   216,   114,   113,     0,   165,    39,     0,     0,
     316,     0,   175,   115,   226,     0,   217,   186,   133,     0,
       0,   246,     0,    92,   117,    93,    94,   104,   166,    96,
       0,    98,    99,   100,   102,   101,   107,   109,     0,   288,
     289,   290,   286,   285,   287,   291,   292,   293,   294,   284,
       0,   146,   245,   318,     0,     0,   119,   120,     0,   130,
     166,   122,     0,   124,   125,   126,   128,   127,     0,     0,
     138,     0,   166,   136,   167,   165,     0,     0,   103,    95,
      97,   153,   166,     0,   151,   167,   165,     0,   129,     0,
     121,   123,   309,     0,     0,     0,   184,     0,     0,   132,
       0,     0,     0,   148,     0,   230,   234,   218,     0,   238,
     187,   139,   140,   141,   201,   247,   155,   154,   156,     0,
       0,     0,     0,     0,   236,     0,   191,     0,   251,   227,
       0,     0,     0,     0,     0,   239,   189,   193,     0,   207,
       0,   210,   249,   248,     0,     0,     0,     0,   232,   219,
     237,     0,   194,   188,   192,     0,   202,   204,     0,   203,
       0,   252,     0,   231,   235,     0,     0,     0,   198,   215,
       0,     0,   211,     0,     0,   233,   241,     0,   190,   196,
     195,     0,   208,     0,   213,   250,   228,     0,   220,     0,
     199,   213,   205,   214,   212,   240,   224,     0,   209,   213,
     222,   221,     0,   197,   206,     0,   225,     0,   223
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -492,  -492,  -492,  -492,  -492,  -492,  -492,   284,   241,   342,
    -492,   -12,  -492,   -30,  -492,   -28,  -492,   -27,  -492,   -22,
    -492,  -492,   -96,   -66,  -167,   221,    -2,  -492,     5,  -492,
    -492,  -492,  -492,  -492,   112,  -492,   293,  -492,  -492,  -492,
    -288,  -452,  -183,  -492,  -492,  -492,  -492,   -72,  -492,  -492,
    -492,    72,  -492,  -492,  -492,  -492,   132,  -492,  -492,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  -401,   179,  -492,
    -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
     198,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
    -492,  -491,  -131,   229,  -492,  -492,  -492,  -492,  -492,  -492,
    -492,  -492,   276,  -492,  -492,  -492,  -492,  -492,  -492,  -492,
    -492,  -492,  -492,    73,  -492,   291,  -492,  -492,  -492,  -492,
    -492,   213,  -492,   -50,  -492,  -492,  -492,  -492,  -492,   156,
    -492,   347,  -492,  -492,  -492,  -492,   194
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    27,    82,    28,    86,   161,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   124,   119,   170,   139,   111,   319,    42,   320,    44,
     164,   191,   211,   255,    45,    46,    47,    48,   165,   282,
     523,   388,   322,   349,   401,   428,   441,   271,   193,   267,
     301,   324,   325,   413,   432,   447,   326,   195,   296,   212,
     213,   214,   297,   220,   221,   298,   259,   427,   327,   328,
     399,   456,   467,   481,   468,   483,   498,   510,   519,   511,
     329,   330,   457,   470,   471,   501,   529,   485,   521,   489,
     514,   524,   500,   331,   332,   398,   453,   496,   526,   531,
     535,   532,   333,   384,   475,   345,   450,   423,   495,   451,
     464,   455,   507,   292,   339,   334,   407,   458,   473,   490,
     474,   166,   122,   273,   242,   243,   244,   380,   245,   335,
      50,   336,   266,   304,   341,   264,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    89,   105,    90,    91,   120,   431,    43,   203,    92,
     261,   321,   144,   100,   137,    84,   484,    88,   246,   246,
     247,   247,   491,     3,   246,    41,   247,    41,    61,    93,
     528,   190,    43,   286,    43,    69,    94,    85,   534,   252,
     217,    70,   120,    71,   101,    73,    52,   -79,  -134,   460,
      57,    74,   463,  -149,    89,    72,    90,    91,    89,   520,
      90,    91,    92,    98,   215,   131,    92,   132,   112,    99,
      97,   130,   125,   287,   492,   113,   102,   103,   104,   109,
     536,    41,    93,   163,   218,   177,    93,   168,    43,    94,
     219,   154,   192,    94,   138,   106,   417,   155,   487,    62,
      89,   215,    90,    91,   488,   140,   110,    63,    92,   146,
     216,   253,   141,    64,   196,   199,   147,   217,   300,   200,
      65,   218,   158,    66,    69,   199,   302,   219,    93,   248,
     303,   150,    67,   175,   151,    94,   151,   171,   357,   256,
     258,   120,    75,    95,   172,   215,    73,   302,   112,  -321,
      76,   381,   127,   517,   216,   113,    77,   518,    49,   183,
     182,   217,   389,    78,   285,   218,    79,   151,   215,   128,
     279,   219,  -321,   140,   146,    80,   107,   287,   108,   133,
     141,   147,   114,    49,   181,    49,   182,    49,   218,   116,
     117,   118,   280,   497,   219,   206,    95,   207,   152,    56,
      95,   171,   503,    58,   140,    59,   134,   135,   172,    60,
     153,   141,    68,   134,   135,   136,   436,   437,    81,   142,
     178,   134,   156,   148,   307,   159,    49,   323,   123,   160,
     126,   527,   201,   246,   357,   247,   202,   205,   208,    49,
      49,   209,    95,   210,    49,   223,   222,   537,   268,   358,
     171,   173,   -80,   265,   -82,   269,   283,   172,   250,   289,
     293,   299,   114,    49,   305,   306,   346,    49,   344,   419,
     343,   348,   294,   390,   368,   347,   350,   402,   351,   366,
     126,   406,   408,   140,   430,   389,    49,   142,   148,   409,
     141,   389,   167,   439,   418,    49,   194,   435,   171,   404,
     420,   429,  -135,  -137,  -150,   172,    49,   438,   412,   433,
    -152,   180,   323,   449,   357,   173,   440,   444,   142,   355,
     357,   167,   445,   454,    96,   459,   356,   462,   389,   466,
     415,    49,    49,   469,   472,   476,   477,   478,   482,   479,
     357,   486,   493,   386,   357,   358,   499,   509,   502,   389,
     387,   504,   272,   275,   357,   249,   442,   516,   512,    49,
     446,   522,    49,   115,   173,   530,   129,   257,   260,    83,
     513,   176,   100,   162,   338,     0,     0,    96,   198,     0,
       0,    96,     0,     0,     0,     0,     0,   184,     0,     0,
       0,     0,     0,   359,     0,     0,   390,   142,     0,   291,
     143,     0,   390,   101,   149,   465,     0,     0,    49,   323,
       0,     0,   173,     0,   480,   355,     0,   391,   323,   185,
       0,   186,   356,    96,     0,   358,     0,   494,     0,   308,
     309,   358,   174,   291,     0,   102,   103,   104,   187,   390,
       0,    49,   323,   115,     0,   505,     0,   323,     0,   323,
     188,   358,   189,   360,     0,   358,    49,   323,     0,   190,
     390,     0,     0,   323,     0,   358,   386,     0,   143,   149,
       0,   382,   386,   387,     0,     0,     0,   392,     0,   387,
       0,   403,     0,     0,     0,     0,     0,     0,     0,   359,
       0,     0,   100,     0,     0,   355,   174,     0,     0,   143,
     361,   355,   356,     0,     0,     0,     0,   276,   356,   386,
       0,   197,   414,     0,     0,     0,   387,     0,     0,   362,
       0,   355,     0,   101,   393,   355,     0,     0,   356,     0,
     386,   426,   356,     0,     0,   355,     0,   387,     0,   426,
     391,     0,   356,   394,     0,   174,   391,     0,     0,   360,
     363,     0,     0,     0,   424,   102,   103,   104,   187,     0,
     262,   263,     0,     0,     0,     0,     0,   274,   274,   359,
     277,     0,   278,     0,   395,   359,     0,     0,   143,   190,
       0,     0,   426,   391,   443,   426,     0,     0,   448,   281,
       0,     0,   452,   174,     0,   359,   361,   364,     0,   359,
     392,     0,     0,     0,   391,     0,   392,   426,     0,   359,
       0,   288,   365,   290,   274,   362,     0,     0,     0,     0,
       0,   396,     0,     0,     0,     0,     0,     0,   506,   360,
       0,     0,     0,     0,     0,   360,   397,     0,     0,     0,
       0,     0,     0,   392,   274,   274,   363,   393,   274,   525,
       0,   340,     0,   393,     0,   360,     0,     0,     0,   360,
       0,     0,     0,     0,   392,     0,   394,     0,     0,   360,
       0,     0,   394,     0,     0,     0,   361,     0,     0,     0,
       0,     0,   361,     0,     0,     0,   274,     0,   383,     0,
     393,     0,     0,   364,     0,   362,   405,   395,     0,     0,
       0,   362,   361,   395,     0,     0,   361,     0,   365,   394,
       0,   393,     0,     0,     0,     0,   361,     0,     0,     0,
       0,   362,     0,     0,     0,   362,   363,   416,     0,     0,
     394,     0,   363,     0,     0,   362,     0,     0,     0,     0,
     395,     0,     0,     0,   396,   425,   274,     0,     0,     0,
     396,     0,   363,     0,   274,     0,   363,     0,     0,   397,
       0,   395,     0,     0,     0,   397,   363,     0,     0,     0,
       0,     0,     0,   364,     0,     0,     0,     0,     0,   364,
       0,     0,     0,     0,     0,     0,     0,   396,   365,     0,
       0,     0,     0,     0,   365,     0,     0,   274,   461,   364,
     274,     0,   397,   364,     0,     0,     0,     0,   396,     0,
       0,     0,     0,   364,   365,     0,     0,     0,   365,     0,
       0,     0,   274,   397,     0,     0,     0,     0,   365,     5,
       6,   352,     0,     0,     7,    53,     9,     0,     0,     0,
       0,   311,    10,   274,     0,    11,   100,     0,    12,   369,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,   274,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,   370,     0,
     371,   372,   246,   373,   247,   374,     0,     0,   375,   102,
     103,   104,   317,   376,   377,   378,     0,     0,     0,   353,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   352,   379,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,   434,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   352,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,   508,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   352,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,   515,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   352,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,   533,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   352,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,   538,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   310,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,   188,     0,   189,     0,     0,     5,
       6,   352,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   188,     0,   189,     0,     0,     5,
       6,   385,     0,   190,     7,    53,     9,     0,     0,     0,
       0,   311,    10,     0,     0,    11,   100,     0,    12,     0,
     312,     0,     0,   313,     0,    13,     0,     0,    14,     0,
       0,   270,     0,     0,     0,    15,   314,    16,    17,     0,
      18,    54,   315,     0,     0,     0,     0,   101,     0,     0,
      55,    22,     0,     0,    23,    24,   316,     0,     0,     0,
       0,     0,     0,   185,     0,   186,     0,     0,     0,     0,
       0,     5,     6,     0,     0,     0,     7,    53,     9,   102,
     103,   104,   317,     0,    10,     0,     0,    11,     0,     0,
      12,     0,     0,     0,   188,     0,   189,    13,     0,     0,
      14,     0,     0,   190,     0,     0,     0,    15,     0,    16,
      17,     0,    18,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    22,     0,     0,    23,    24,     0,     5,
       6,     0,     0,     0,     7,    53,     9,     0,     0,     0,
       0,     0,    10,     0,     0,    11,     0,     0,    12,     0,
       0,     0,     0,     0,   422,    13,     0,     0,    14,     0,
       0,     0,   116,   117,   118,    15,     0,    16,    17,     0,
      18,    54,     0,     0,     0,   190,     0,     0,     0,     0,
      55,    22,     5,     6,    23,    24,     0,     7,    53,     9,
       0,     0,     0,     0,     0,    10,     0,     0,    11,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    14,    25,     0,     0,   116,   117,   118,    15,   169,
      16,    17,     0,    18,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    22,     5,     6,    23,    24,     0,
       7,    53,     9,     0,     0,     0,     0,     0,    10,     0,
       0,    11,     0,     0,    12,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    14,    25,     0,     0,   116,   117,
     118,    15,   251,    16,    17,     0,    18,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    22,     5,     6,
      23,    24,     0,     7,    53,     9,     0,     0,     0,     0,
       0,    10,     0,     0,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     0,    13,     0,     0,    14,    25,     0,
       0,   116,   117,   118,    15,   284,    16,    17,     0,    18,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      22,     5,     6,    23,    24,     0,     7,    53,     9,     0,
       0,     0,     0,     0,    10,     0,     0,    11,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    13,     0,     0,
      14,    25,     0,     0,     0,     0,     0,    15,   337,    16,
      17,     0,    18,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    22,     5,     6,    23,    24,     0,     7,
      53,     9,     0,     0,     0,     0,     0,    10,     0,     0,
      11,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      13,     0,     0,    14,    25,     0,     0,     0,     0,     0,
      15,   145,    16,    17,     0,    18,    54,     0,     0,     0,
       0,     0,     0,     0,   100,    55,    22,     5,     6,    23,
      24,     0,     7,    53,     9,     0,     0,     0,     0,   270,
      10,     0,     0,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    13,     0,   101,    14,    25,     0,     0,
     100,     0,     0,    15,   157,    16,    17,     0,    18,    54,
       0,   185,     0,   186,     0,   400,     0,     0,    55,    22,
       0,     0,    23,    24,     0,   100,     0,   102,   103,   104,
     187,   101,     0,     0,     0,     0,     0,     0,     0,     0,
     411,     0,   188,     0,   189,     0,     0,   185,     0,   186,
      25,   190,     0,     0,     0,     0,   101,   204,     0,     0,
       0,     0,     0,   102,   103,   104,   187,     0,     0,     0,
       0,     0,   185,     0,   186,     0,     0,     0,   188,     0,
     189,     0,     0,     0,     0,     0,     0,   190,   102,   103,
     104,   187,     4,     0,     5,     6,     0,     0,     0,     7,
       8,     9,     0,   188,     0,   189,     0,    10,     0,     0,
      11,     0,   190,    12,     0,     0,     0,     0,     0,     0,
      13,     0,     0,    14,     0,     0,     0,     0,     0,     0,
      15,     0,    16,    17,     0,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,    23,
      24,    87,     0,     5,     6,     0,     0,     0,     7,     8,
       9,     0,     0,     0,     0,     0,    10,     0,     0,    11,
       0,     0,    12,     0,     0,     0,     0,    25,     0,    13,
       0,     0,    14,     0,     0,     0,     0,     0,     0,    15,
       0,    16,    17,     0,    18,    19,     0,    20,     0,     0,
       0,     0,     0,     0,    21,    22,     5,     6,    23,    24,
       0,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,     0,    14,    25,     0,     0,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    19,     0,
      20,     0,     0,     0,     0,     0,     0,    21,    22,     5,
       6,    23,    24,     0,     7,    53,     9,     0,     0,     0,
       0,     0,    10,     0,     0,    11,     0,     0,    12,     0,
       0,     0,     0,     0,     0,    13,     0,     0,    14,    25,
       0,     0,     0,     0,     0,    15,     0,    16,    17,     0,
      18,    54,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    22,     5,     6,    23,    24,     0,     7,    53,     9,
       0,     0,     0,     0,     0,    10,     0,     0,    11,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    14,    25,     0,     0,     0,     0,     0,    15,     0,
      16,    17,     0,    18,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    22,     5,     6,    23,    24,     0,
       7,    53,     9,     0,     0,     0,     0,     0,    10,     0,
       0,    11,     0,     0,    12,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    14,   121,     0,     0,     0,     0,
       0,    15,     0,    16,    17,     0,    18,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    22,     5,     6,
      23,    24,     0,     7,    53,     9,     0,     0,     0,     0,
       0,    10,     0,     0,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     0,    13,     0,     0,    14,   179,     0,
       0,     0,     0,     0,    15,     0,    16,    17,     0,    18,
      54,     0,     0,     0,     0,     0,     0,     6,     0,    55,
      22,     7,    53,    23,    24,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,     0,    14,     0,   224,     0,   225,
       0,   254,     0,     0,    16,    17,     0,   226,    54,   227,
     228,   229,   230,     0,     0,     0,   231,    55,    22,     0,
       0,    23,     0,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,   234,   235,   236,   237,   238,
     239,   240,   241,   224,     0,   225,     0,     0,     0,    25,
       0,     0,     0,   226,     0,   227,   228,   229,   230,     0,
       0,     0,   231,     0,     0,     0,     0,     0,     0,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,   234,   235,   236,   237,   238,   239,   240,   241,   224,
       0,   225,     0,     0,     0,     0,     0,     0,     0,   226,
       0,   227,   228,   229,   230,     0,     0,     0,   231,     0,
       0,     0,     0,     0,     0,   232,   233,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,   234,   235,   236,
     237,   238,   239,   240,   241,   224,     0,   225,     0,     0,
       0,     0,     0,     0,     0,   226,     0,   227,   228,   229,
     230,     0,     0,     0,   231,     0,     0,     0,     0,     0,
       0,   232,   233,     0,     0,     0,     0,     0,     0,   410,
       0,     0,     0,   234,   235,   236,   237,   238,   239,   240,
     241,   224,     0,   225,     0,     0,     0,     0,     0,     0,
       0,   226,     0,   227,   228,   229,   230,     0,     0,     0,
     231,     0,     0,     0,     0,     0,     0,   232,   233,     0,
       0,     0,     0,     0,     0,   421,     0,     0,     0,   234,
     235,   236,   237,   238,   239,   240,   241,   224,     0,   225,
       0,     0,     0,     0,     0,     0,     0,   226,     0,   227,
     228,   229,   230,     0,     0,     0,   231,     0,     0,     0,
       0,     0,     0,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,   235,   236,   237,   238,
     239,   240,   241
};

static const yytype_int16 yycheck[] =
{
       2,    31,    52,    31,    31,    71,   407,     2,   175,    31,
      89,   299,   108,    23,    32,    27,   468,    29,    70,    70,
      72,    72,   474,     0,    70,    27,    72,    29,    32,    31,
     521,   110,    27,    94,    29,    89,    31,     3,   529,   206,
     101,    95,   108,    97,    54,    89,    89,    99,    99,   450,
      89,    95,   453,    99,    84,    91,    84,    84,    88,   511,
      88,    88,    84,   105,    85,    91,    88,    93,    70,   111,
      89,    83,    74,    94,   475,    70,    86,    87,    88,    32,
     532,    83,    84,   133,   105,   151,    88,   112,    83,    84,
     111,    92,   164,    88,   112,    89,   384,    98,     9,    11,
     130,    85,   130,   130,    15,   107,    32,    19,   130,   111,
      94,   207,   107,    25,   164,    98,   111,   101,   285,   102,
      32,   105,   124,    35,    89,    98,    98,   111,   130,   102,
     102,    95,    44,    95,    98,   130,    98,   139,   321,   211,
     212,   207,    11,    31,   139,    85,    89,    98,   150,    89,
      19,   102,    32,    98,    94,   150,    25,   102,     2,    93,
      94,   101,   345,    32,    95,   105,    35,    98,    85,    32,
     242,   111,    89,   175,   176,    44,    95,    94,    97,    89,
     175,   176,    70,    27,    92,    29,    94,    31,   105,    39,
      40,    41,   242,   481,   111,    95,    84,    97,    89,     5,
      88,   203,   490,     9,   206,    11,    99,   100,   203,    15,
      89,   206,    18,    99,   100,   101,    98,    99,    24,   107,
      12,    99,    89,   111,   296,    89,    70,   299,    72,    89,
      74,   519,    89,    70,   417,    72,    97,    89,    89,    83,
      84,    89,   130,    89,    88,    99,    89,   535,   106,   321,
     252,   139,    99,    89,    99,    86,    89,   252,    99,   101,
      92,    95,   150,   107,    94,    89,   101,   111,    95,    63,
      99,    99,   112,   345,    89,   101,   101,   349,   101,    99,
     124,    89,    99,   285,   102,   468,   130,   175,   176,    99,
     285,   474,   136,   100,    99,   139,   164,   101,   300,   349,
      99,    99,    99,    99,    99,   300,   150,    89,   380,    99,
      99,   155,   384,    63,   497,   203,   102,    95,   206,   321,
     503,   165,   102,   100,    31,   101,   321,    89,   511,    95,
     380,   175,   176,     9,    95,   102,   100,   100,    20,    99,
     523,    96,    99,   345,   527,   417,    86,    95,    97,   532,
     345,   102,   220,   221,   537,   199,   428,    99,    97,   203,
     432,    97,   206,    70,   252,    95,    82,   211,   212,    27,
     501,   150,    23,   132,   301,    -1,    -1,    84,   165,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,   468,   285,    -1,   267,
     107,    -1,   474,    54,   111,   455,    -1,    -1,   252,   481,
      -1,    -1,   300,    -1,   464,   417,    -1,   345,   490,    70,
      -1,    72,   417,   130,    -1,   497,    -1,   477,    -1,   297,
     298,   503,   139,   301,    -1,    86,    87,    88,    89,   511,
      -1,   285,   514,   150,    -1,   495,    -1,   519,    -1,   521,
     101,   523,   103,   321,    -1,   527,   300,   529,    -1,   110,
     532,    -1,    -1,   535,    -1,   537,   468,    -1,   175,   176,
      -1,   339,   474,   468,    -1,    -1,    -1,   345,    -1,   474,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    23,    -1,    -1,   497,   203,    -1,    -1,   206,
     321,   503,   497,    -1,    -1,    -1,    -1,    38,   503,   511,
      -1,   164,   380,    -1,    -1,    -1,   511,    -1,    -1,   321,
      -1,   523,    -1,    54,   345,   527,    -1,    -1,   523,    -1,
     532,   399,   527,    -1,    -1,   537,    -1,   532,    -1,   407,
     468,    -1,   537,   345,    -1,   252,   474,    -1,    -1,   417,
     321,    -1,    -1,    -1,   398,    86,    87,    88,    89,    -1,
     213,   214,    -1,    -1,    -1,    -1,    -1,   220,   221,   497,
     101,    -1,   103,    -1,   345,   503,    -1,    -1,   285,   110,
      -1,    -1,   450,   511,   428,   453,    -1,    -1,   432,   242,
      -1,    -1,   436,   300,    -1,   523,   417,   321,    -1,   527,
     468,    -1,    -1,    -1,   532,    -1,   474,   475,    -1,   537,
      -1,   264,   321,   266,   267,   417,    -1,    -1,    -1,    -1,
      -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,   496,   497,
      -1,    -1,    -1,    -1,    -1,   503,   345,    -1,    -1,    -1,
      -1,    -1,    -1,   511,   297,   298,   417,   468,   301,   517,
      -1,   304,    -1,   474,    -1,   523,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,   532,    -1,   468,    -1,    -1,   537,
      -1,    -1,   474,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,    -1,   503,    -1,    -1,    -1,   339,    -1,   341,    -1,
     511,    -1,    -1,   417,    -1,   497,   349,   468,    -1,    -1,
      -1,   503,   523,   474,    -1,    -1,   527,    -1,   417,   511,
      -1,   532,    -1,    -1,    -1,    -1,   537,    -1,    -1,    -1,
      -1,   523,    -1,    -1,    -1,   527,   497,   380,    -1,    -1,
     532,    -1,   503,    -1,    -1,   537,    -1,    -1,    -1,    -1,
     511,    -1,    -1,    -1,   468,   398,   399,    -1,    -1,    -1,
     474,    -1,   523,    -1,   407,    -1,   527,    -1,    -1,   468,
      -1,   532,    -1,    -1,    -1,   474,   537,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,   503,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   511,   497,    -1,
      -1,    -1,    -1,    -1,   503,    -1,    -1,   450,   451,   523,
     453,    -1,   511,   527,    -1,    -1,    -1,    -1,   532,    -1,
      -1,    -1,    -1,   537,   523,    -1,    -1,    -1,   527,    -1,
      -1,    -1,   475,   532,    -1,    -1,    -1,    -1,   537,     6,
       7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,   496,    -1,    22,    23,    -1,    25,    17,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,   517,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    76,    86,
      87,    88,    89,    81,    82,    83,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,   100,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,     6,
       7,     8,    -1,   110,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    12,    13,    86,
      87,    88,    89,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,   101,    -1,   103,    32,    -1,    -1,
      35,    -1,    -1,   110,    -1,    -1,    -1,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    62,    -1,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    89,    32,    -1,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      57,    58,     6,     7,    61,    62,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    89,    -1,    -1,    39,    40,    41,    42,    96,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,     6,     7,    61,    62,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    89,    -1,    -1,    39,    40,
      41,    42,    96,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,     6,     7,
      61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    89,    -1,
      -1,    39,    40,    41,    42,    96,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,     6,     7,    61,    62,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    89,    -1,    -1,    -1,    -1,    -1,    42,    96,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,     6,     7,    61,    62,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    89,    -1,    -1,    -1,    -1,    -1,
      42,    96,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    57,    58,     6,     7,    61,
      62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    38,
      19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    54,    35,    89,    -1,    -1,
      23,    -1,    -1,    42,    96,    44,    45,    -1,    47,    48,
      -1,    70,    -1,    72,    -1,    38,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    -1,    23,    -1,    86,    87,    88,
      89,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,   101,    -1,   103,    -1,    -1,    70,    -1,    72,
      89,   110,    -1,    -1,    -1,    -1,    54,    96,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,    86,    87,
      88,    89,     4,    -1,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,   101,    -1,   103,    -1,    19,    -1,    -1,
      22,    -1,   110,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,     4,    -1,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    89,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    -1,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,     6,     7,    61,    62,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    89,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,     6,
       7,    61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    89,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,     6,     7,    61,    62,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    89,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,     6,     7,    61,    62,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    89,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,     6,     7,
      61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    89,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    57,
      58,    11,    12,    61,    62,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    65,    -1,    67,
      -1,    89,    -1,    -1,    44,    45,    -1,    75,    48,    77,
      78,    79,    80,    -1,    -1,    -1,    84,    57,    58,    -1,
      -1,    61,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    65,    -1,    67,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    65,
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
       0,   114,   115,     0,     4,     6,     7,    11,    12,    13,
      19,    22,    25,    32,    35,    42,    44,    45,    47,    48,
      50,    57,    58,    61,    62,    89,   116,   117,   119,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   139,   140,   141,   142,   147,   148,   149,   150,   242,
     243,   249,    89,    12,    48,    57,   249,    89,   249,   249,
     249,    32,    11,    19,    25,    32,    35,    44,   249,    89,
      95,    97,    91,    89,    95,    11,    19,    25,    32,    35,
      44,   249,   118,   122,   124,     3,   120,     4,   124,   126,
     128,   130,   132,   139,   141,   147,   149,    89,   105,   111,
      23,    54,    86,    87,    88,   236,    89,    95,    97,    32,
      32,   138,   139,   141,   147,   149,    39,    40,    41,   135,
     136,    89,   235,   242,   134,   139,   242,    32,    32,   120,
     124,    91,    93,    89,    99,   100,   101,    32,   112,   137,
     139,   141,   147,   149,   135,    96,   139,   141,   147,   149,
      95,    98,    89,    89,    92,    98,    89,    96,   139,    89,
      89,   121,   121,   236,   143,   151,   234,   242,   112,    96,
     136,   139,   141,   147,   149,    95,   138,   136,    12,    89,
     242,    92,    94,    93,    38,    70,    72,    89,   101,   103,
     110,   144,   160,   161,   169,   170,   236,   244,   234,    98,
     102,    89,    97,   137,    96,    89,    95,    97,    89,    89,
      89,   145,   172,   173,   174,    85,    94,   101,   105,   111,
     176,   177,    89,    99,    65,    67,    75,    77,    78,    79,
      80,    84,    91,    92,   103,   104,   105,   106,   107,   108,
     109,   110,   237,   238,   239,   241,    70,    72,   102,   242,
      99,    96,   137,   135,    89,   146,   160,   242,   160,   179,
     242,    89,   244,   244,   248,    89,   245,   162,   106,    86,
      38,   160,   169,   236,   244,   169,    38,   101,   103,   160,
     236,   244,   152,    89,    96,    95,    94,    94,   244,   101,
     244,   169,   226,    92,   112,   102,   171,   175,   178,    95,
     137,   163,    98,   102,   246,    94,    89,   160,   169,   169,
       8,    18,    27,    30,    43,    49,    63,    89,    99,   139,
     141,   153,   155,   160,   164,   165,   169,   181,   182,   193,
     194,   206,   207,   215,   228,   242,   244,    96,   226,   227,
     244,   247,   102,    99,    95,   218,   101,   101,    99,   156,
     101,   101,     8,    96,    99,   139,   141,   155,   160,   164,
     169,   181,   193,   206,   215,   228,    99,    99,    89,    17,
      66,    68,    69,    71,    73,    76,    81,    82,    83,   100,
     240,   102,   169,   244,   216,     8,   139,   141,   154,   155,
     160,   164,   169,   181,   193,   206,   215,   228,   208,   183,
      38,   157,   160,   169,   236,   244,    89,   229,    99,    99,
      99,    38,   160,   166,   169,   236,   244,   153,    99,    63,
      99,    99,    89,   220,   242,   244,   169,   180,   158,    99,
     102,   180,   167,    99,    96,   101,    98,    99,    89,   100,
     102,   159,   160,   242,    95,   102,   160,   168,   242,    63,
     219,   222,   242,   209,   100,   224,   184,   195,   230,   101,
     180,   244,    89,   180,   223,   236,    95,   185,   187,     9,
     196,   197,    95,   231,   233,   217,   102,   100,   100,    99,
     236,   186,    20,   188,   154,   200,    96,     9,    15,   202,
     232,   154,   180,    99,   236,   221,   210,   153,   189,    86,
     205,   198,    97,   153,   102,   236,   169,   225,    96,    95,
     190,   192,    97,   205,   203,    96,    99,    98,   102,   191,
     154,   201,    97,   153,   204,   169,   211,   153,   204,   199,
      95,   212,   214,    96,   204,   213,   154,   153,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   115,   114,   116,   116,   116,   116,   118,   117,
     119,   117,   120,   120,   120,   121,   121,   122,   123,   123,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   127,   127,
     128,   129,   129,   130,   131,   131,   132,   133,   134,   134,
     135,   135,   136,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   140,   141,   143,   142,   144,
     144,   144,   144,   145,   144,   146,   146,   147,   148,   149,
     151,   152,   150,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   156,   155,   155,   157,   157,   157,   157,   158,   157,
     159,   159,   160,   162,   161,   163,   161,   164,   165,   166,
     166,   166,   166,   167,   166,   168,   168,   169,   170,   170,
     170,   171,   170,   172,   170,   170,   170,   170,   170,   173,
     170,   170,   174,   170,   175,   170,   176,   170,   177,   170,
     178,   170,   179,   179,   180,   181,   183,   184,   182,   186,
     185,   187,   185,   188,   189,   188,   191,   190,   192,   190,
     193,   195,   194,   196,   198,   199,   197,   200,   201,   197,
     202,   203,   202,   204,   204,   205,   206,   208,   209,   210,
     211,   207,   213,   212,   214,   212,   216,   217,   215,   218,
     219,   215,   221,   220,   222,   220,   223,   220,   224,   220,
     225,   225,   226,   226,   227,   226,   229,   230,   228,   232,
     231,   233,   231,   234,   234,   234,   235,   235,   235,   235,
     235,   236,   236,   236,   236,   236,   237,   237,   237,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   239,   239,
     239,   239,   239,   239,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   241,   241,   241,   242,   242,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   244,
     244,   244,   244,   245,   244,   246,   244,   247,   244,   248,
     244,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     2,     1,     0,     3,
       0,     2,     0,     4,     4,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     8,    10,
       1,     5,     7,     1,     4,     6,     1,     4,     2,     1,
       4,     2,     1,     1,     1,     0,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     0,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     1,     0,     6,     1,
       1,     1,     1,     0,     3,     1,     1,     1,     6,     1,
       0,     0,    10,     2,     2,     3,     2,     3,     2,     2,
       2,     2,     2,     3,     2,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     0,     4,     2,     1,     1,     1,     1,     0,     3,
       1,     1,     1,     0,     5,     0,     7,     1,     4,     1,
       1,     1,     1,     0,     3,     1,     1,     1,     3,     3,
       3,     0,     5,     0,     3,     1,     1,     1,     2,     0,
       3,     2,     0,     3,     0,     6,     0,     4,     0,     3,
       0,     5,     1,     1,     1,     1,     0,     0,     8,     0,
       4,     0,     2,     0,     0,     3,     0,     4,     0,     2,
       1,     0,     8,     2,     0,     0,     7,     0,     0,     6,
       0,     0,     4,     0,     1,     1,     1,     0,     0,     0,
       0,    13,     0,     4,     0,     2,     0,     0,    11,     0,
       0,     9,     0,     7,     0,     6,     0,     5,     0,     4,
       3,     1,     0,     1,     0,     4,     0,     0,     7,     0,
       4,     0,     2,     0,     4,     2,     0,     4,     2,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     4,     1,     2,     2,     2,     2,     2,     2,     1,
       2,     4,     2,     0,     4,     0,     6,     0,     7,     0,
       4,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     3,     2,     2,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 48 "cpp2php.y" /* yacc.c:1646  */
    { write("<?php\n"); }
#line 2232 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Parsing was complited successfully" << endl; }
#line 2238 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "cpp2php.y" /* yacc.c:1646  */
    { write("include '"); }
#line 2244 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "cpp2php.y" /* yacc.c:1646  */
    { write("';\n"); }
#line 2250 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "cpp2php.y" /* yacc.c:1646  */
    { write("include '"); }
#line 2256 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 58 "cpp2php.y" /* yacc.c:1646  */
    { write("';\n"); }
#line 2262 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "cpp2php.y" /* yacc.c:1646  */
    { write(".%s",(yyvsp[0].sval));}
#line 2268 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "cpp2php.y" /* yacc.c:1646  */
    { write((yyvsp[0].sval));}
#line 2274 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Defining" << endl; }
#line 2280 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Definitions" << endl; }
#line 2286 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 81 "cpp2php.y" /* yacc.c:1646  */
    { cout << "template" << endl; }
#line 2292 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 86 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Class" << endl; }
#line 2298 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 91 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Struct" << endl; }
#line 2304 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 97 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Union" << endl; }
#line 2310 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 115 "cpp2php.y" /* yacc.c:1646  */
    { cout << "var_declaration" << endl; }
#line 2316 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 118 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s;\n", (yyvsp[-1].sval)); }
#line 2322 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 121 "cpp2php.y" /* yacc.c:1646  */
    { cout << "var_definition" << endl; }
#line 2328 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 124 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s = ", (yyvsp[-1].sval)); }
#line 2334 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 124 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2340 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 131 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2346 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 138 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Function declaration" << endl; }
#line 2352 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 144 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Function definition" << endl; }
#line 2358 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 147 "cpp2php.y" /* yacc.c:1646  */
    { write("function %s(", (yyvsp[-1].sval)); }
#line 2364 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 147 "cpp2php.y" /* yacc.c:1646  */
    { write(") {\n"); }
#line 2370 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 147 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2376 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 152 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2382 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 154 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2388 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 160 "cpp2php.y" /* yacc.c:1646  */
    { write("break;\n"); }
#line 2394 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 164 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2400 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 166 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2406 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 172 "cpp2php.y" /* yacc.c:1646  */
    { write("break;\n"); }
#line 2412 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 174 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2418 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 175 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2424 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 192 "cpp2php.y" /* yacc.c:1646  */
    { write("return "); }
#line 2430 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 192 "cpp2php.y" /* yacc.c:1646  */
    {write(";\n"); }
#line 2436 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 193 "cpp2php.y" /* yacc.c:1646  */
    { write("return;\n"); }
#line 2442 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 200 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2448 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 207 "cpp2php.y" /* yacc.c:1646  */
    { cout << "function_call" << endl; }
#line 2454 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 210 "cpp2php.y" /* yacc.c:1646  */
    { write("%s(", (yyvsp[-1].sval)); }
#line 2460 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 210 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2466 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 211 "cpp2php.y" /* yacc.c:1646  */
    { write("%s.%s(", (yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 2472 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 211 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2478 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 214 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Assignment" << endl; }
#line 2484 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 217 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2490 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 224 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2496 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 231 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Operation" << endl; }
#line 2502 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 237 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2508 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 238 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2514 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 242 "cpp2php.y" /* yacc.c:1646  */
    { write("++"); }
#line 2520 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 243 "cpp2php.y" /* yacc.c:1646  */
    { write("++"); }
#line 2526 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 244 "cpp2php.y" /* yacc.c:1646  */
    { write("--"); }
#line 2532 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 245 "cpp2php.y" /* yacc.c:1646  */
    { write("--"); }
#line 2538 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 246 "cpp2php.y" /* yacc.c:1646  */
    { write("("); }
#line 2544 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 246 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2550 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 247 "cpp2php.y" /* yacc.c:1646  */
    { write("("); }
#line 2556 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 247 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2562 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 248 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2568 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 249 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2574 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 259 "cpp2php.y" /* yacc.c:1646  */
    { cout << "If" << endl; }
#line 2580 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write("if ("); }
#line 2586 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2592 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2598 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 265 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2604 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 265 "cpp2php.y" /* yacc.c:1646  */
    { write("}"); }
#line 2610 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 266 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2616 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 269 "cpp2php.y" /* yacc.c:1646  */
    { write(" else"); }
#line 2622 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 269 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2628 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 272 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2634 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 272 "cpp2php.y" /* yacc.c:1646  */
    { write("}"); }
#line 2640 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 273 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2646 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 276 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Switch" << endl; }
#line 2652 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 279 "cpp2php.y" /* yacc.c:1646  */
    { write("switch (%s) {\n", (yyvsp[-2].sval)); }
#line 2658 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 279 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2664 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 285 "cpp2php.y" /* yacc.c:1646  */
    { write("case "); }
#line 2670 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 285 "cpp2php.y" /* yacc.c:1646  */
    { write(":\n"); }
#line 2676 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 286 "cpp2php.y" /* yacc.c:1646  */
    { write("case "); }
#line 2682 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 286 "cpp2php.y" /* yacc.c:1646  */
    { write(":\n"); }
#line 2688 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 289 "cpp2php.y" /* yacc.c:1646  */
    { write("default:\n"); }
#line 2694 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 295 "cpp2php.y" /* yacc.c:1646  */
    { write("%d", (yyvsp[0].ival)); }
#line 2700 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 298 "cpp2php.y" /* yacc.c:1646  */
    { cout << "For" << endl; }
#line 2706 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 301 "cpp2php.y" /* yacc.c:1646  */
    { write("for ("); }
#line 2712 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 301 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2718 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 301 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2724 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 301 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2730 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 304 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2736 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 304 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2742 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 305 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2748 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 305 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2754 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 308 "cpp2php.y" /* yacc.c:1646  */
    { write("do {\n"); }
#line 2760 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 308 "cpp2php.y" /* yacc.c:1646  */
    { write("} while ("); }
#line 2766 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 308 "cpp2php.y" /* yacc.c:1646  */
    { write(");\n"); }
#line 2772 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 309 "cpp2php.y" /* yacc.c:1646  */
    { write("do\n"); }
#line 2778 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 309 "cpp2php.y" /* yacc.c:1646  */
    { write("while ("); }
#line 2784 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 309 "cpp2php.y" /* yacc.c:1646  */
    { write(");\n"); }
#line 2790 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 312 "cpp2php.y" /* yacc.c:1646  */
    { write(", $%s = ", (yyvsp[-1].sval)); }
#line 2796 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 313 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2802 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 314 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s = ", (yyvsp[-1].sval)); }
#line 2808 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 315 "cpp2php.y" /* yacc.c:1646  */
    { write(" = "); }
#line 2814 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 321 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2820 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 324 "cpp2php.y" /* yacc.c:1646  */
    { write("while ("); }
#line 2826 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 324 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2832 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 327 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2838 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 327 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2844 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 328 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2850 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 328 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2856 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 331 "cpp2php.y" /* yacc.c:1646  */
    { write(", $%s", (yyvsp[0].sval)); }
#line 2862 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 332 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[0].sval)); }
#line 2868 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 337 "cpp2php.y" /* yacc.c:1646  */
    { write("%d", (yyvsp[0].ival)); }
#line 2874 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 338 "cpp2php.y" /* yacc.c:1646  */
    { write("%f", (yyvsp[0].fval)); }
#line 2880 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 339 "cpp2php.y" /* yacc.c:1646  */
    { write("%s", (yyvsp[0].sval)); }
#line 2886 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 340 "cpp2php.y" /* yacc.c:1646  */
    { write("true"); }
#line 2892 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 341 "cpp2php.y" /* yacc.c:1646  */
    { write("false"); }
#line 2898 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 349 "cpp2php.y" /* yacc.c:1646  */
    { write("+"); }
#line 2904 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 350 "cpp2php.y" /* yacc.c:1646  */
    { write("*"); }
#line 2910 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 351 "cpp2php.y" /* yacc.c:1646  */
    { write("-"); }
#line 2916 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 352 "cpp2php.y" /* yacc.c:1646  */
    { write("/"); }
#line 2922 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 353 "cpp2php.y" /* yacc.c:1646  */
    { write("\%"); }
#line 2928 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 354 "cpp2php.y" /* yacc.c:1646  */
    { write("<<"); }
#line 2934 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 355 "cpp2php.y" /* yacc.c:1646  */
    { write(">>"); }
#line 2940 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 356 "cpp2php.y" /* yacc.c:1646  */
    { write("|"); }
#line 2946 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 357 "cpp2php.y" /* yacc.c:1646  */
    { write("&"); }
#line 2952 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 360 "cpp2php.y" /* yacc.c:1646  */
    { write(" < "); }
#line 2958 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 361 "cpp2php.y" /* yacc.c:1646  */
    { write(" > "); }
#line 2964 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 362 "cpp2php.y" /* yacc.c:1646  */
    { write(" >= "); }
#line 2970 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 363 "cpp2php.y" /* yacc.c:1646  */
    { write(" <= "); }
#line 2976 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 364 "cpp2php.y" /* yacc.c:1646  */
    { write(" == "); }
#line 2982 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 365 "cpp2php.y" /* yacc.c:1646  */
    { write(" != "); }
#line 2988 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 368 "cpp2php.y" /* yacc.c:1646  */
    { write(" = "); }
#line 2994 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 369 "cpp2php.y" /* yacc.c:1646  */
    { write(" += "); }
#line 3000 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 370 "cpp2php.y" /* yacc.c:1646  */
    { write(" *= "); }
#line 3006 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 371 "cpp2php.y" /* yacc.c:1646  */
    { write(" -= "); }
#line 3012 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 372 "cpp2php.y" /* yacc.c:1646  */
    { write(" /= "); }
#line 3018 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 373 "cpp2php.y" /* yacc.c:1646  */
    { write(" \%= "); }
#line 3024 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 374 "cpp2php.y" /* yacc.c:1646  */
    { write(" &= "); }
#line 3030 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 375 "cpp2php.y" /* yacc.c:1646  */
    { write(" <<= "); }
#line 3036 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 376 "cpp2php.y" /* yacc.c:1646  */
    { write(" >>= "); }
#line 3042 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 377 "cpp2php.y" /* yacc.c:1646  */
    { write(" ^= "); }
#line 3048 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 378 "cpp2php.y" /* yacc.c:1646  */
    { write(" |= "); }
#line 3054 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 381 "cpp2php.y" /* yacc.c:1646  */
    { write(" && "); }
#line 3060 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 382 "cpp2php.y" /* yacc.c:1646  */
    { write(" || "); }
#line 3066 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 383 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 3072 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 390 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[0].sval)); }
#line 3078 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 391 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[-1].sval)); }
#line 3084 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 392 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s[%d]", (yyvsp[-3].sval), (yyvsp[-1].ival)); }
#line 3090 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 393 "cpp2php.y" /* yacc.c:1646  */
    { write("&$%s", (yyvsp[0].sval)); }
#line 3096 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 394 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s->", (yyvsp[-1].sval)); }
#line 3102 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 395 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s->", (yyvsp[-3].sval)); }
#line 3108 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 396 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s[%d]->", (yyvsp[-4].sval), (yyvsp[-2].ival)); }
#line 3114 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 397 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s::", (yyvsp[-1].sval)); }
#line 3120 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 400 "cpp2php.y" /* yacc.c:1646  */
    { write("%s", (yyvsp[0].sval)); }
#line 3126 "cpp2php.tab.c" /* yacc.c:1646  */
    break;


#line 3130 "cpp2php.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 429 "cpp2php.y" /* yacc.c:1906  */


main(int argc, char ** argv) {
    // check if there's at least 1 argument specified
    if (argc < 2) {
        cout << "This program requires at least 1 argument. Please provide the file name to compile." << endl;
        return -1;
    }

	// open a file handle to a particular file:
    yyin = fopen(argv[1], "r");

    // make sure it's valid:
	if (!yyin) {
		cout << "Can't open a file: '" << argv[1] << "'" << endl;
		return -1;
	}

    // get output file name
    string outputname = "output.php";
    if (argc > 2) {
        outputname = argv[2];
    }

    cout << outputname << endl;

    // create output file
    yyout = fopen(outputname.c_str(), "w");

    if (!yyout) {
        cout << "Can't open a file: '" << outputname << "'" << endl;
        return -1;
    }

    cout << "Writing output to " << outputname << endl;

	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));

    fclose(yyout);
}

void yyerror(const char *s) {
	cout << "EEK, parse error on line " << line_num << "!  Message: " << s << endl;
    fclose(yyout);

	// might as well halt now:
	exit(-1);
}
