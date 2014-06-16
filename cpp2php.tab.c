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
#define YYLAST   2675

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  541

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
      86,    89,    89,    90,    93,    96,    96,    99,   102,   105,
     105,   107,   107,   110,   111,   112,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   129,   132,   135,   138,   138,
     141,   142,   143,   144,   145,   145,   148,   149,   152,   155,
     158,   161,   161,   161,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   206,   206,   207,   210,   211,   212,   213,   214,
     214,   217,   218,   221,   224,   224,   225,   225,   228,   231,
     234,   235,   236,   237,   238,   238,   241,   242,   245,   248,
     249,   250,   251,   251,   252,   252,   253,   254,   255,   256,
     257,   257,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   266,   267,   270,   273,   276,   276,   276,
     279,   279,   280,   280,   282,   283,   283,   286,   286,   287,
     287,   290,   293,   293,   296,   299,   299,   299,   300,   300,
     300,   302,   303,   303,   305,   306,   309,   312,   315,   315,
     315,   315,   315,   318,   318,   319,   319,   322,   322,   322,
     323,   323,   323,   326,   326,   327,   327,   328,   328,   329,
     329,   331,   331,   333,   334,   335,   335,   338,   338,   338,
     341,   341,   342,   342,   344,   345,   346,   348,   348,   348,
     348,   348,   351,   352,   353,   354,   355,   358,   359,   360,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   374,
     375,   376,   377,   378,   379,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   395,   396,   397,   399,
     399,   399,   399,   401,   401,   401,   401,   401,   401,   401,
     404,   405,   406,   407,   408,   408,   409,   409,   410,   410,
     411,   411,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442
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
  "class", "class1", "$@4", "struct", "struct1", "union", "union1",
  "union_body", "extensions", "access_specifier", "class_body",
  "struct_body", "var_declaration", "var_declaration1", "var_definition",
  "var_definition1", "$@5", "var_definition2", "$@6", "var_definition3",
  "function_declaration", "function_declaration1", "function_definition",
  "function_definition1", "$@7", "$@8", "function_body",
  "one_line_function_body", "returning", "$@9", "returning1", "$@10",
  "returning2", "function_call", "function_call1", "$@11", "$@12",
  "assignment", "assignment1", "assignment2", "$@13", "assignment3",
  "operation", "operation1", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "operation2", "comparation", "condition_if",
  "condition_if1", "$@22", "$@23", "condition_if2", "$@24", "$@25",
  "condition_else", "$@26", "condition_else2", "$@27", "$@28",
  "condition_switch", "condition_switch1", "$@29", "switch_body",
  "cases_section", "$@30", "$@31", "$@32", "$@33", "default_section",
  "$@34", "case_body", "switch_value", "loop_for", "loop_for1", "$@35",
  "$@36", "$@37", "$@38", "loop_for2", "$@39", "$@40", "loop_do", "$@41",
  "$@42", "$@43", "$@44", "initial_args", "$@45", "$@46", "$@47", "$@48",
  "action_args", "call_arguments", "$@49", "loop_while", "$@50", "$@51",
  "loop_while2", "$@52", "$@53", "arguments", "template_arguments",
  "value", "operator", "operation_operator", "comparing_operator",
  "assign_operator", "logical_operator", "type", "type_spec", "ident",
  "$@54", "$@55", "$@56", "$@57", "typevar", YY_NULLPTR
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

#define YYPACT_NINF -501

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-501)))

#define YYTABLE_NINF -323

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -501,    11,  1991,  -501,   -48,  2363,  -501,  -501,   -40,  2363,
    -501,  2363,  -501,  -501,  -501,  2363,    25,   149,  2363,    57,
      22,     1,   235,  -501,  2363,  -501,  -501,  1991,   126,  2050,
    -501,  2103,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,    75,
     -34,  -501,   122,   101,   111,   116,  -501,    46,  -501,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,    60,   175,  -501,  -501,
    2156,   222,  2209,  -501,  2156,  -501,  -501,  -501,  -501,   180,
     193,  -501,   126,  2050,  2103,   -24,  -501,   142,  2103,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,   196,  -501,   -28,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,   222,  -501,
    -501,  1758,  -501,  -501,  -501,  -501,  -501,  -501,  -501,    36,
     153,   158,    35,   160,  1811,  -501,   162,  -501,  -501,  -501,
    2103,   164,   164,   122,  -501,  -501,  2156,   144,  -501,   222,
      90,  -501,  -501,  -501,  -501,  -501,  2156,   222,  -501,  -501,
     226,  2262,  -501,  -501,  -501,   166,  -501,    -7,    24,  -501,
     560,  2156,   -88,   179,  -501,  2156,     3,   222,  1864,   183,
      53,   184,   187,  -501,   188,  -501,  -501,  -501,  -501,    64,
    -501,  -501,   191,   192,   203,  -501,  2565,  -501,   208,   -53,
       6,  2156,   209,  -501,  -501,  -501,  -501,  -501,  -501,  1700,
      15,  -501,  -501,   222,   222,  -501,  -501,  -501,  2315,  2315,
     -80,   -80,  -501,   194,  -501,   163,   200,  1844,  1844,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,   630,
    -501,  -501,  -501,  -501,  -501,  -501,   201,  -501,  -501,  -501,
    -501,  -501,  -501,  -501,    84,   103,   -66,  -501,  -501,  -501,
    -501,  -501,  -501,   139,  -501,  -501,   -80,   197,   -80,  1844,
     219,   204,  -501,  -501,  2335,  -501,    87,  2565,  -501,  -501,
    -501,  -501,  -501,  -501,   218,  -501,  -501,   222,   194,  -501,
    -501,  -501,  -501,  2565,    28,  -501,   223,  -501,   230,  1844,
    1844,  1370,    99,  1844,  -501,  -501,   -80,  -501,   -66,  -501,
    2381,  2565,   221,   227,   232,   234,   225,   238,   239,   170,
    -501,  -501,  -501,   770,  -501,   228,  -501,  -501,  2427,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,   245,   145,  -501,
      81,  1844,  -501,   -80,  -501,  -501,  -501,  1570,  -501,  -501,
    -501,  1880,   247,  -501,   242,  -501,  -501,  -501,  -501,  -501,
     243,  -501,  2473,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
     120,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  1905,  -501,  2565,  -501,  1370,   244,  -501,  -501,
     281,  -501,   249,  -501,  2519,  -501,  -501,  -501,  -501,  -501,
    1642,  1844,  -501,   251,   252,  2565,   256,   -52,   254,  1844,
    -501,  -501,  -501,  -501,   258,   260,  2565,   262,   -46,   870,
    -501,   261,  -501,  -501,   199,   137,   257,   264,  2565,   265,
    2315,  -501,   274,   268,  2315,  -501,   309,  -501,  2156,  -501,
     273,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,   276,  1844,   -80,   285,  1844,  -501,   122,   280,   372,
     287,  -501,   283,   290,   291,   288,   122,  -501,  -501,   373,
    1570,  -501,   299,    30,  -501,  -501,  1570,  1844,   300,   122,
    -501,  -501,  -501,  1370,  -501,  -501,  -501,   312,  -501,  -501,
     304,  -501,  1370,  -501,   301,  -501,  -501,   122,  1844,   970,
     310,  -501,   307,   312,  -501,  1070,   311,  -501,  2565,    89,
    -501,  -501,  -501,  1570,  -501,   314,  1370,  -501,  -501,  1844,
    -501,  1370,  -501,  1370,  -501,  1470,  -501,  2565,   313,  1170,
    -501,  1370,  -501,  -501,  1570,  -501,  -501,  1370,  -501,  1270,
    -501
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,   329,   323,     0,     0,
     327,     0,   328,   325,   326,     0,   330,     0,     0,     0,
       0,     0,     0,   331,     0,   322,     3,     8,    12,     0,
      17,     7,    20,    23,    37,    24,    40,    25,    44,    26,
      47,    21,    75,    22,    77,    28,    88,    27,    90,     0,
     299,   303,     0,     0,     0,     0,   308,   348,   309,   307,
     305,   324,   332,   337,   338,   333,   339,   340,   306,   349,
      66,     0,   257,   350,     0,   341,   344,   345,   334,   346,
     347,   304,    12,     0,     5,     0,    11,     0,     6,    31,
      32,    33,    34,    29,    30,    35,    36,     0,   300,     0,
     266,   265,   262,   263,   264,    19,   348,    41,     0,   336,
     335,     0,    71,    72,    73,    74,    55,    54,    53,     0,
       0,   322,     0,     0,     0,    50,     0,   343,   342,     9,
       4,     0,     0,     0,    76,    78,    91,     0,   301,    56,
       0,    45,    67,    68,    69,    70,    66,     0,    52,   261,
       0,     0,   259,    48,    49,     0,    16,     0,     0,    18,
       0,   254,     0,     0,   302,     0,     0,    56,     0,     0,
       0,   322,     0,    13,     0,    14,    84,   170,   173,   310,
     177,   179,     0,     0,   167,   143,    82,   158,   168,   166,
       0,     0,     0,   256,    58,    59,    60,    61,    42,     0,
       0,    46,    51,    56,     0,   260,   258,    15,     0,     0,
       0,     0,   320,   314,   144,   311,     0,     0,     0,   313,
      79,   284,   296,   275,   282,   283,   281,   276,   297,   279,
     280,   298,   270,   271,   272,   273,   274,   277,   278,     0,
     267,   268,   269,   169,   172,    92,     0,    89,    57,    62,
      63,    64,    65,    43,     0,     0,   322,    85,    86,    87,
     184,   165,   183,   310,   171,   174,     0,     0,     0,   243,
       0,     0,   164,   167,     0,   168,   166,   180,   162,   175,
     181,   160,   161,   159,     0,   255,    38,    56,     0,   314,
     321,   146,   315,   244,     0,   316,   312,   178,     0,     0,
       0,     0,     0,   243,   245,   145,     0,   318,     0,   163,
       0,   182,     0,   230,     0,     0,   132,     0,     0,   310,
     119,   106,   107,     0,   117,   167,   109,   148,     0,   111,
     186,   112,   201,   113,   217,   115,   114,     0,   166,    39,
       0,     0,   317,     0,   176,   116,   227,     0,   218,   187,
     134,     0,     0,   247,     0,    93,   118,    94,    95,   105,
     167,    97,     0,    99,   100,   101,   103,   102,   108,   110,
       0,   289,   290,   291,   287,   286,   288,   292,   293,   294,
     295,   285,     0,   147,   246,   319,     0,     0,   120,   121,
       0,   131,   167,   123,     0,   125,   126,   127,   129,   128,
       0,     0,   139,     0,   167,   137,   168,   166,     0,     0,
     104,    96,    98,   154,   167,     0,   152,   168,   166,     0,
     130,     0,   122,   124,   310,     0,     0,     0,   185,     0,
       0,   133,     0,     0,     0,   149,     0,   231,   235,   219,
       0,   239,   188,   140,   141,   142,   202,   248,   156,   155,
     157,     0,     0,     0,     0,     0,   237,     0,   192,     0,
     252,   228,     0,     0,     0,     0,     0,   240,   190,   194,
       0,   208,     0,   211,   250,   249,     0,     0,     0,     0,
     233,   220,   238,     0,   195,   189,   193,     0,   203,   205,
       0,   204,     0,   253,     0,   232,   236,     0,     0,     0,
     199,   216,     0,     0,   212,     0,     0,   234,   242,     0,
     191,   197,   196,     0,   209,     0,   214,   251,   229,     0,
     221,     0,   200,   214,   206,   215,   213,   241,   225,     0,
     210,   214,   223,   222,     0,   198,   207,     0,   226,     0,
     224
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -501,  -501,  -501,  -501,  -501,  -501,  -501,   327,   286,   386,
    -501,    23,  -501,   -23,  -501,   -18,  -501,  -501,   -10,  -501,
       7,  -501,  -501,  -102,   -68,  -166,   269,    -2,  -501,     5,
    -501,  -501,  -501,  -501,  -501,   295,  -501,   509,  -501,  -501,
    -501,  -289,  -454,  -247,  -501,  -501,  -501,  -501,  -145,  -501,
    -501,  -501,  -176,  -501,  -501,  -501,  -501,    97,  -501,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -404,   -17,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,    65,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  -500,   -89,   167,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  -501,   168,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  -501,  -501,   118,  -501,   233,  -501,  -501,  -501,
    -501,  -501,   266,  -501,   -50,  -501,  -501,  -501,  -501,  -501,
      31,  -501,   282,  -501,  -501,  -501,  -501,   294
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    27,    82,    28,    86,   157,    29,
      30,    31,    32,    33,    34,    35,    36,   139,    37,    38,
      39,    40,   124,   119,   165,   166,   111,   321,    42,   322,
      44,   160,   183,   208,   257,    45,    46,    47,    48,   161,
     284,   525,   390,   324,   351,   403,   430,   443,   273,   185,
     269,   303,   326,   327,   415,   434,   449,   328,   187,   298,
     209,   210,   211,   299,   217,   218,   300,   261,   429,   329,
     330,   401,   458,   469,   483,   470,   485,   500,   512,   521,
     513,   331,   332,   459,   472,   473,   503,   531,   487,   523,
     491,   516,   526,   502,   333,   334,   400,   455,   498,   528,
     533,   537,   534,   335,   386,   477,   347,   452,   425,   497,
     453,   466,   457,   509,   294,   341,   336,   409,   460,   475,
     492,   476,   162,   122,   275,   239,   240,   241,   382,   242,
     337,    50,   338,   268,   306,   343,   266,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   200,   105,   120,   137,   433,   140,    43,    89,   263,
     191,     3,   323,    90,   192,   184,   486,   243,   243,   244,
     244,    91,   493,   530,   243,    41,   244,    41,   288,    93,
     182,   536,    43,    49,    43,   214,    94,   254,    92,   489,
     120,    52,   116,   117,   118,   490,   -80,  -135,   462,    57,
      84,   465,    88,  -150,   116,   117,   118,    61,    49,   522,
      49,    89,    49,   258,   260,    89,    90,   131,   112,   132,
      90,    98,   125,   494,    91,   113,   359,    99,    91,   169,
     538,    41,    93,   159,   138,   173,    93,   174,    43,    94,
      73,    92,   109,    94,   281,    92,    74,   419,   199,   198,
     391,    49,   255,   123,   191,   126,   130,    89,   245,   142,
     188,   253,    90,    72,    49,    49,   143,   175,   174,    49,
      91,   302,   154,   116,   117,   118,   304,   150,    93,    85,
     305,   146,   199,   151,   147,    94,   120,    92,   116,   117,
     118,   107,    49,   108,   112,   100,    69,   361,   203,   212,
     204,   113,    70,   309,    71,   126,   325,   243,   213,   244,
      62,    49,   371,   194,    97,   214,   142,   163,    63,   215,
     195,   393,   359,   143,    64,   216,   101,    49,   360,   304,
     286,    65,   172,   383,    66,   167,   199,   519,   147,   282,
     106,   520,   163,    67,   499,   339,    49,   249,   287,    49,
      69,   147,   392,   505,   250,    73,   404,   110,   102,   103,
     104,   372,   127,   373,   374,   243,   375,   244,   376,   134,
     135,   377,   246,   391,   212,   128,   378,   379,   380,   391,
      49,   133,   529,   289,   199,   438,   439,   414,   170,   259,
     262,   325,   148,   361,   215,   381,    75,   149,   539,   152,
     216,   155,   359,   156,    76,   212,   164,   186,   359,  -322,
      77,   116,   117,   118,   213,   134,   391,    78,   193,   270,
      79,   214,   202,   205,   360,   215,   206,   207,   359,    80,
     219,   216,   359,   267,   212,   444,   271,   391,  -322,   448,
     285,   220,   359,   289,   393,   134,   135,   136,   291,    56,
     393,   406,   -81,    58,   215,    59,   363,   -83,   247,    60,
     216,   295,    68,   301,   274,   277,   296,   307,    81,   308,
     345,   357,   346,   361,   350,   392,    95,   368,   358,   361,
     395,   392,   417,   348,   370,   349,   408,   393,   325,   352,
     353,   410,   411,   420,   421,   388,   440,   325,   422,   361,
     431,  -136,   389,   361,   360,  -138,   432,  -151,   393,   435,
     360,  -153,   437,   361,   441,   114,   293,   442,   392,   446,
     447,   325,   451,   456,   464,   468,   325,   461,   325,    95,
     360,   471,   474,    95,   360,   478,   325,   481,   364,   392,
     479,   480,   325,   484,   360,   488,   310,   311,   501,   495,
     293,   504,   363,   506,   514,   511,   144,   467,   532,   129,
     518,   524,   396,    83,   515,   168,   482,   357,   158,     0,
     362,   340,     0,     0,   358,    95,     0,   190,     0,   496,
       0,   426,     0,     0,     0,     0,     0,     0,   384,     0,
       0,   114,   189,     0,   394,     0,     0,   507,   405,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,   395,
     196,   445,     0,   144,     0,   450,     0,     0,   388,   454,
       0,     0,     0,     0,   388,   389,     0,     0,     0,   416,
       0,   389,   363,     0,   364,     0,     0,     0,   363,     0,
     365,   366,   264,   265,   251,     0,   395,   357,   428,   276,
     276,     0,     0,   357,   358,     0,   428,     0,   363,     0,
     358,   388,   363,     0,   397,   398,   362,   395,   389,     0,
       0,   283,   363,   357,     0,     0,     0,   357,     0,     0,
     358,     0,   388,     0,   358,   396,     0,   357,     0,   389,
      96,   396,     0,     0,   358,     0,     0,     0,   290,   428,
     292,   276,   428,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,   364,     0,     0,   394,     0,     0,
     364,     0,     0,   394,   428,     0,     0,     0,   396,   115,
     399,   276,   276,   100,     0,   276,   365,   366,   342,     0,
     364,     0,     0,    96,   364,   508,   362,    96,   176,   396,
       0,     0,   362,     0,   364,     0,     0,     0,     0,     0,
     394,     0,     0,     0,   101,     0,   527,     0,     0,     0,
     145,     0,   362,   276,     0,   385,   362,     0,     0,     0,
     177,   394,   178,   407,     0,     0,   362,   397,   398,    96,
       0,     0,     0,   397,   398,     0,   102,   103,   104,   179,
       0,     0,   367,   100,     0,   115,     0,     0,     0,     0,
       0,   180,     0,   181,   418,     0,   365,   366,   278,     0,
     182,     0,   365,   366,   197,     0,     0,   145,     0,     0,
     397,   398,   427,   276,   101,     0,     0,     0,     0,     0,
       0,   276,   365,   366,     0,     0,   365,   366,     0,     0,
       0,   397,   398,   399,     0,     0,   365,   366,   252,   399,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,   367,   280,   276,   463,     0,   276,   367,     0,
     182,     0,     0,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,   276,
       0,     0,   367,     0,     0,     0,     0,   399,     0,     0,
       0,     0,   367,     0,     0,     0,     5,     6,   354,     0,
     276,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,   276,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,   355,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   354,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,   436,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   354,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,   510,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   354,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,   517,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   354,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,   535,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   354,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,   540,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   312,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   320,
       0,   180,     0,   181,     0,     0,     5,     6,   354,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   319,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
       0,   180,     0,   181,     0,     0,     5,     6,   387,     0,
     182,     7,    53,     9,     0,     0,     0,     0,   313,    10,
       0,     0,    11,   100,     0,    12,     0,   314,     0,     0,
     315,     0,    13,     0,     0,    14,     0,     0,   272,     0,
       0,     0,    15,   316,    16,    17,     0,    18,    54,   317,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   318,     0,     0,     0,     0,     0,     0,
     177,     0,   178,     0,     0,     0,     0,     0,     5,     6,
       0,     0,     0,     7,    53,     9,   102,   103,   104,   319,
       0,    10,     0,     0,    11,     0,     0,    12,     0,     0,
       0,   180,     0,   181,    13,     0,     0,    14,     0,     0,
     182,     0,     0,     0,    15,     0,    16,    17,     0,    18,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      22,     0,     0,    23,    24,     0,     5,     6,     0,     0,
       0,     7,    53,     9,     0,     0,     0,     0,     0,    10,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
       0,   424,    13,     0,     0,    14,     0,     0,     0,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,     0,
       0,     0,   182,     0,     0,     0,     0,    55,    22,     0,
       0,    23,    24,     0,     5,     6,     0,     0,     0,     7,
      53,     9,     0,     0,     0,     0,     0,    10,     0,     0,
      11,     0,     0,    12,     0,     0,     0,     0,     0,    25,
      13,     0,     0,    14,     0,     0,     0,   248,     0,     0,
      15,     0,    16,    17,     0,    18,    54,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    22,     5,     6,    23,
      24,     0,     7,    53,     9,     0,     0,     0,     0,     0,
      10,     0,     0,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    14,    25,     0,     0,
       0,     0,     0,    15,   141,    16,    17,     0,    18,    54,
       0,     0,     0,     0,     0,     0,     0,   100,    55,    22,
       5,     6,    23,    24,     0,     7,    53,     9,     0,     0,
       0,     0,   272,    10,     0,     0,    11,     0,     0,    12,
       0,     0,     0,     0,     0,     0,    13,     0,   101,    14,
      25,     0,     0,   100,     0,     0,    15,   153,    16,    17,
       0,    18,    54,     0,   177,     0,   178,     0,   402,     0,
       0,    55,    22,     0,     0,    23,    24,     0,   100,     0,
     102,   103,   104,   179,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   413,     0,   180,     0,   181,     0,     0,
     177,     0,   178,    25,   182,     0,     0,     0,     0,   101,
     201,     0,     0,     0,     0,     0,   102,   103,   104,   179,
       0,     0,     0,     0,     0,   177,     0,   178,     0,     0,
       0,   180,     0,   181,     0,     0,     0,     0,     0,     0,
     182,   102,   103,   104,   179,     4,     0,     5,     6,     0,
       0,     0,     7,     8,     9,     0,   180,     0,   181,     0,
      10,     0,     0,    11,     0,   182,    12,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    14,     0,     0,     0,
       0,     0,     0,    15,     0,    16,    17,     0,    18,    19,
       0,    20,     0,     0,     0,     0,     0,     0,    21,    22,
       0,     0,    23,    24,    87,     0,     5,     6,     0,     0,
       0,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
      25,     0,    13,     0,     0,    14,     0,     0,     0,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    19,     0,
      20,     0,     0,     0,     0,     0,     0,    21,    22,     5,
       6,    23,    24,     0,     7,     8,     9,     0,     0,     0,
       0,     0,    10,     0,     0,    11,     0,     0,    12,     0,
       0,     0,     0,     0,     0,    13,     0,     0,    14,    25,
       0,     0,     0,     0,     0,    15,     0,    16,    17,     0,
      18,    19,     0,    20,     0,     0,     0,     0,     0,     0,
      21,    22,     5,     6,    23,    24,     0,     7,    53,     9,
       0,     0,     0,     0,     0,    10,     0,     0,    11,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    14,    25,     0,     0,     0,     0,     0,    15,     0,
      16,    17,     0,    18,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    22,     5,     6,    23,    24,     0,
       7,    53,     9,     0,     0,     0,     0,     0,    10,     0,
       0,    11,     0,     0,    12,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    14,    25,     0,     0,     0,     0,
       0,    15,     0,    16,    17,     0,    18,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    22,     5,     6,
      23,    24,     0,     7,    53,     9,     0,     0,     0,     0,
       0,    10,     0,     0,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     0,    13,     0,     0,    14,   121,     0,
       0,     0,     0,     0,    15,     0,    16,    17,     0,    18,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      22,     5,     6,    23,    24,     0,     7,    53,     9,     0,
       0,     0,     0,     0,    10,     0,     0,    11,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    13,     0,     0,
      14,   171,     0,     0,     0,     0,     0,    15,     0,    16,
      17,     0,    18,    54,     0,     0,     0,     0,     0,     0,
       6,     0,    55,    22,     7,    53,    23,    24,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,    13,     0,     0,    14,     0,
     221,     0,   222,     0,   256,     0,     0,    16,    17,     0,
     223,    54,   224,   225,   226,   227,     0,     0,     0,   228,
      55,    22,     0,     0,    23,     0,   229,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   297,   231,   232,
     233,   234,   235,   236,   237,   238,   221,     0,   222,     0,
       0,     0,    25,     0,     0,     0,   223,     0,   224,   225,
     226,   227,     0,     0,     0,   228,     0,     0,     0,     0,
       0,     0,   229,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,   231,   232,   233,   234,   235,   236,
     237,   238,   221,     0,   222,     0,     0,     0,     0,     0,
       0,     0,   223,     0,   224,   225,   226,   227,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,   229,   230,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
     231,   232,   233,   234,   235,   236,   237,   238,   221,     0,
     222,     0,     0,     0,     0,     0,     0,     0,   223,     0,
     224,   225,   226,   227,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,   229,   230,     0,     0,     0,     0,
       0,     0,   412,     0,     0,     0,   231,   232,   233,   234,
     235,   236,   237,   238,   221,     0,   222,     0,     0,     0,
       0,     0,     0,     0,   223,     0,   224,   225,   226,   227,
       0,     0,     0,   228,     0,     0,     0,     0,     0,     0,
     229,   230,     0,     0,     0,     0,     0,     0,   423,     0,
       0,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     221,     0,   222,     0,     0,     0,     0,     0,     0,     0,
     223,     0,   224,   225,   226,   227,     0,     0,     0,   228,
       0,     0,     0,     0,     0,     0,   229,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,   232,
     233,   234,   235,   236,   237,   238
};

static const yytype_int16 yycheck[] =
{
       2,   167,    52,    71,    32,   409,   108,     2,    31,    89,
      98,     0,   301,    31,   102,   160,   470,    70,    70,    72,
      72,    31,   476,   523,    70,    27,    72,    29,    94,    31,
     110,   531,    27,     2,    29,   101,    31,   203,    31,     9,
     108,    89,    39,    40,    41,    15,    99,    99,   452,    89,
      27,   455,    29,    99,    39,    40,    41,    32,    27,   513,
      29,    84,    31,   208,   209,    88,    84,    91,    70,    93,
      88,   105,    74,   477,    84,    70,   323,   111,    88,   147,
     534,    83,    84,   133,   112,    92,    88,    94,    83,    84,
      89,    84,    32,    88,   239,    88,    95,   386,   166,    96,
     347,    70,   204,    72,    98,    74,    83,   130,   102,   111,
     160,    96,   130,    91,    83,    84,   111,    93,    94,    88,
     130,   287,   124,    39,    40,    41,    98,    92,   130,     3,
     102,    95,   200,    98,    98,   130,   204,   130,    39,    40,
      41,    95,   111,    97,   146,    23,    89,   323,    95,    85,
      97,   146,    95,   298,    97,   124,   301,    70,    94,    72,
      11,   130,    17,   165,    89,   101,   168,   136,    19,   105,
     165,   347,   419,   168,    25,   111,    54,   146,   323,    98,
      96,    32,   151,   102,    35,    95,   254,    98,    98,   239,
      89,   102,   161,    44,   483,    96,   165,   199,    95,   168,
      89,    98,   347,   492,   199,    89,   351,    32,    86,    87,
      88,    66,    32,    68,    69,    70,    71,    72,    73,    99,
     100,    76,   191,   470,    85,    32,    81,    82,    83,   476,
     199,    89,   521,    94,   302,    98,    99,   382,    12,   208,
     209,   386,    89,   419,   105,   100,    11,    89,   537,    89,
     111,    89,   499,    89,    19,    85,   112,   160,   505,    89,
      25,    39,    40,    41,    94,    99,   513,    32,    89,   106,
      35,   101,    89,    89,   419,   105,    89,    89,   525,    44,
      89,   111,   529,    89,    85,   430,    86,   534,    89,   434,
      89,    99,   539,    94,   470,    99,   100,   101,   101,     5,
     476,   351,    99,     9,   105,    11,   323,    99,    99,    15,
     111,    92,    18,    95,   217,   218,   112,    94,    24,    89,
      99,   323,    95,   499,    99,   470,    31,    99,   323,   505,
     347,   476,   382,   101,    89,   101,    89,   513,   483,   101,
     101,    99,    99,    99,    63,   347,    89,   492,    99,   525,
      99,    99,   347,   529,   499,    99,   102,    99,   534,    99,
     505,    99,   101,   539,   100,    70,   269,   102,   513,    95,
     102,   516,    63,   100,    89,    95,   521,   101,   523,    84,
     525,     9,    95,    88,   529,   102,   531,    99,   323,   534,
     100,   100,   537,    20,   539,    96,   299,   300,    86,    99,
     303,    97,   419,   102,    97,    95,   111,   457,    95,    82,
      99,    97,   347,    27,   503,   146,   466,   419,   132,    -1,
     323,   303,    -1,    -1,   419,   130,    -1,   161,    -1,   479,
      -1,   400,    -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,
      -1,   146,   160,    -1,   347,    -1,    -1,   497,   351,    -1,
      -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,   476,
     165,   430,    -1,   168,    -1,   434,    -1,    -1,   470,   438,
      -1,    -1,    -1,    -1,   476,   470,    -1,    -1,    -1,   382,
      -1,   476,   499,    -1,   419,    -1,    -1,    -1,   505,    -1,
     323,   323,   210,   211,   199,    -1,   513,   499,   401,   217,
     218,    -1,    -1,   505,   499,    -1,   409,    -1,   525,    -1,
     505,   513,   529,    -1,   347,   347,   419,   534,   513,    -1,
      -1,   239,   539,   525,    -1,    -1,    -1,   529,    -1,    -1,
     525,    -1,   534,    -1,   529,   470,    -1,   539,    -1,   534,
      31,   476,    -1,    -1,   539,    -1,    -1,    -1,   266,   452,
     268,   269,   455,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,   470,    -1,    -1,
     505,    -1,    -1,   476,   477,    -1,    -1,    -1,   513,    70,
     347,   299,   300,    23,    -1,   303,   419,   419,   306,    -1,
     525,    -1,    -1,    84,   529,   498,   499,    88,    38,   534,
      -1,    -1,   505,    -1,   539,    -1,    -1,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    54,    -1,   519,    -1,    -1,    -1,
     111,    -1,   525,   341,    -1,   343,   529,    -1,    -1,    -1,
      70,   534,    72,   351,    -1,    -1,   539,   470,   470,   130,
      -1,    -1,    -1,   476,   476,    -1,    86,    87,    88,    89,
      -1,    -1,   419,    23,    -1,   146,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,   382,    -1,   499,   499,    38,    -1,
     110,    -1,   505,   505,   165,    -1,    -1,   168,    -1,    -1,
     513,   513,   400,   401,    54,    -1,    -1,    -1,    -1,    -1,
      -1,   409,   525,   525,    -1,    -1,   529,   529,    -1,    -1,
      -1,   534,   534,   470,    -1,    -1,   539,   539,   199,   476,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   499,   103,   452,   453,    -1,   455,   505,    -1,
     110,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   525,   477,
      -1,    -1,   529,    -1,    -1,    -1,    -1,   534,    -1,    -1,
      -1,    -1,   539,    -1,    -1,    -1,     6,     7,     8,    -1,
     498,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,   519,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    86,    87,    88,    89,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,   101,    -1,   103,    32,    -1,    -1,    35,    -1,    -1,
     110,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    -1,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    89,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    -1,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    89,
      32,    -1,    -1,    35,    -1,    -1,    -1,    97,    -1,    -1,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,     6,     7,    61,
      62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    89,    -1,    -1,
      -1,    -1,    -1,    42,    96,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    57,    58,
       6,     7,    61,    62,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    38,    19,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    54,    35,
      89,    -1,    -1,    23,    -1,    -1,    42,    96,    44,    45,
      -1,    47,    48,    -1,    70,    -1,    72,    -1,    38,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    -1,    23,    -1,
      86,    87,    88,    89,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,   101,    -1,   103,    -1,    -1,
      70,    -1,    72,    89,   110,    -1,    -1,    -1,    -1,    54,
      96,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    86,    87,    88,    89,     4,    -1,     6,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,   101,    -1,   103,    -1,
      19,    -1,    -1,    22,    -1,   110,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,     4,    -1,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      89,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,     6,
       7,    61,    62,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    89,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
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
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,     6,     7,    61,    62,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    89,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    57,    58,    11,    12,    61,    62,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      65,    -1,    67,    -1,    89,    -1,    -1,    44,    45,    -1,
      75,    48,    77,    78,    79,    80,    -1,    -1,    -1,    84,
      57,    58,    -1,    -1,    61,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    65,    -1,    67,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,   107,   108,   109,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   114,   115,     0,     4,     6,     7,    11,    12,    13,
      19,    22,    25,    32,    35,    42,    44,    45,    47,    48,
      50,    57,    58,    61,    62,    89,   116,   117,   119,   122,
     123,   124,   125,   126,   127,   128,   129,   131,   132,   133,
     134,   140,   141,   142,   143,   148,   149,   150,   151,   243,
     244,   250,    89,    12,    48,    57,   250,    89,   250,   250,
     250,    32,    11,    19,    25,    32,    35,    44,   250,    89,
      95,    97,    91,    89,    95,    11,    19,    25,    32,    35,
      44,   250,   118,   122,   124,     3,   120,     4,   124,   126,
     128,   131,   133,   140,   142,   148,   150,    89,   105,   111,
      23,    54,    86,    87,    88,   237,    89,    95,    97,    32,
      32,   139,   140,   142,   148,   150,    39,    40,    41,   136,
     137,    89,   236,   243,   135,   140,   243,    32,    32,   120,
     124,    91,    93,    89,    99,   100,   101,    32,   112,   130,
     136,    96,   140,   142,   148,   150,    95,    98,    89,    89,
      92,    98,    89,    96,   140,    89,    89,   121,   121,   237,
     144,   152,   235,   243,   112,   137,   138,    95,   139,   137,
      12,    89,   243,    92,    94,    93,    38,    70,    72,    89,
     101,   103,   110,   145,   161,   162,   170,   171,   237,   245,
     235,    98,   102,    89,   140,   142,   148,   150,    96,   137,
     138,    96,    89,    95,    97,    89,    89,    89,   146,   173,
     174,   175,    85,    94,   101,   105,   111,   177,   178,    89,
      99,    65,    67,    75,    77,    78,    79,    80,    84,    91,
      92,   103,   104,   105,   106,   107,   108,   109,   110,   238,
     239,   240,   242,    70,    72,   102,   243,    99,    97,   140,
     142,   148,   150,    96,   138,   136,    89,   147,   161,   243,
     161,   180,   243,    89,   245,   245,   249,    89,   246,   163,
     106,    86,    38,   161,   170,   237,   245,   170,    38,   101,
     103,   161,   237,   245,   153,    89,    96,    95,    94,    94,
     245,   101,   245,   170,   227,    92,   112,   102,   172,   176,
     179,    95,   138,   164,    98,   102,   247,    94,    89,   161,
     170,   170,     8,    18,    27,    30,    43,    49,    63,    89,
      99,   140,   142,   154,   156,   161,   165,   166,   170,   182,
     183,   194,   195,   207,   208,   216,   229,   243,   245,    96,
     227,   228,   245,   248,   102,    99,    95,   219,   101,   101,
      99,   157,   101,   101,     8,    96,    99,   140,   142,   156,
     161,   165,   170,   182,   194,   207,   216,   229,    99,    99,
      89,    17,    66,    68,    69,    71,    73,    76,    81,    82,
      83,   100,   241,   102,   170,   245,   217,     8,   140,   142,
     155,   156,   161,   165,   170,   182,   194,   207,   216,   229,
     209,   184,    38,   158,   161,   170,   237,   245,    89,   230,
      99,    99,    99,    38,   161,   167,   170,   237,   245,   154,
      99,    63,    99,    99,    89,   221,   243,   245,   170,   181,
     159,    99,   102,   181,   168,    99,    96,   101,    98,    99,
      89,   100,   102,   160,   161,   243,    95,   102,   161,   169,
     243,    63,   220,   223,   243,   210,   100,   225,   185,   196,
     231,   101,   181,   245,    89,   181,   224,   237,    95,   186,
     188,     9,   197,   198,    95,   232,   234,   218,   102,   100,
     100,    99,   237,   187,    20,   189,   155,   201,    96,     9,
      15,   203,   233,   155,   181,    99,   237,   222,   211,   154,
     190,    86,   206,   199,    97,   154,   102,   237,   170,   226,
      96,    95,   191,   193,    97,   206,   204,    96,    99,    98,
     102,   192,   155,   202,    97,   154,   205,   170,   212,   154,
     205,   200,    95,   213,   215,    96,   205,   214,   155,   154,
      96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   115,   114,   116,   116,   116,   116,   118,   117,
     119,   117,   120,   120,   120,   121,   121,   122,   123,   123,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   127,   127,
     128,   130,   129,   129,   131,   132,   132,   133,   134,   135,
     135,   136,   136,   137,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   141,   142,   144,   143,
     145,   145,   145,   145,   146,   145,   147,   147,   148,   149,
     150,   152,   153,   151,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   157,   156,   156,   158,   158,   158,   158,   159,
     158,   160,   160,   161,   163,   162,   164,   162,   165,   166,
     167,   167,   167,   167,   168,   167,   169,   169,   170,   171,
     171,   171,   172,   171,   173,   171,   171,   171,   171,   171,
     174,   171,   171,   175,   171,   176,   171,   177,   171,   178,
     171,   179,   171,   180,   180,   181,   182,   184,   185,   183,
     187,   186,   188,   186,   189,   190,   189,   192,   191,   193,
     191,   194,   196,   195,   197,   199,   200,   198,   201,   202,
     198,   203,   204,   203,   205,   205,   206,   207,   209,   210,
     211,   212,   208,   214,   213,   215,   213,   217,   218,   216,
     219,   220,   216,   222,   221,   223,   221,   224,   221,   225,
     221,   226,   226,   227,   227,   228,   227,   230,   231,   229,
     233,   232,   234,   232,   235,   235,   235,   236,   236,   236,
     236,   236,   237,   237,   237,   237,   237,   238,   238,   238,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   240,
     240,   240,   240,   240,   240,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   242,   242,   242,   243,
     243,   243,   243,   244,   244,   244,   244,   244,   244,   244,
     245,   245,   245,   245,   246,   245,   247,   245,   248,   245,
     249,   245,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     2,     1,     0,     3,
       0,     2,     0,     4,     4,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     8,    10,
       1,     0,     6,     7,     1,     4,     6,     1,     4,     2,
       1,     4,     2,     1,     1,     1,     0,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     0,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     0,     6,
       1,     1,     1,     1,     0,     3,     1,     1,     1,     6,
       1,     0,     0,    10,     2,     2,     3,     2,     3,     2,
       2,     2,     2,     2,     3,     2,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     0,     4,     2,     1,     1,     1,     1,     0,
       3,     1,     1,     1,     0,     5,     0,     7,     1,     4,
       1,     1,     1,     1,     0,     3,     1,     1,     1,     3,
       3,     3,     0,     5,     0,     3,     1,     1,     1,     2,
       0,     3,     2,     0,     3,     0,     6,     0,     4,     0,
       3,     0,     5,     1,     1,     1,     1,     0,     0,     8,
       0,     4,     0,     2,     0,     0,     3,     0,     4,     0,
       2,     1,     0,     8,     2,     0,     0,     7,     0,     0,
       6,     0,     0,     4,     0,     1,     1,     1,     0,     0,
       0,     0,    13,     0,     4,     0,     2,     0,     0,    11,
       0,     0,     9,     0,     7,     0,     6,     0,     5,     0,
       4,     3,     1,     0,     1,     0,     4,     0,     0,     7,
       0,     4,     0,     2,     0,     4,     2,     0,     4,     2,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     4,     1,     2,     2,     2,     2,     2,     2,
       1,     2,     4,     2,     0,     4,     0,     6,     0,     7,
       0,     4,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2
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
#line 2196 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Parsing was complited successfully" << endl; }
#line 2202 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "cpp2php.y" /* yacc.c:1646  */
    { write("include '"); }
#line 2208 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "cpp2php.y" /* yacc.c:1646  */
    { write("';\n"); }
#line 2214 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "cpp2php.y" /* yacc.c:1646  */
    { write("include '"); }
#line 2220 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 58 "cpp2php.y" /* yacc.c:1646  */
    { write("';\n"); }
#line 2226 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "cpp2php.y" /* yacc.c:1646  */
    { write(".%s",(yyvsp[0].sval));}
#line 2232 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "cpp2php.y" /* yacc.c:1646  */
    { write((yyvsp[0].sval));}
#line 2238 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Defining" << endl; }
#line 2244 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Definitions" << endl; }
#line 2250 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 81 "cpp2php.y" /* yacc.c:1646  */
    { cout << "template" << endl; }
#line 2256 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 86 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Class" << endl; }
#line 2262 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 89 "cpp2php.y" /* yacc.c:1646  */
    {write("class %s {\n",(yyvsp[-1].sval));}
#line 2268 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 89 "cpp2php.y" /* yacc.c:1646  */
    {write("}\n");}
#line 2274 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 93 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Struct" << endl; }
#line 2280 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 99 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Union" << endl; }
#line 2286 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 110 "cpp2php.y" /* yacc.c:1646  */
    { write("public "); }
#line 2292 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 111 "cpp2php.y" /* yacc.c:1646  */
    { write("protected "); }
#line 2298 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 112 "cpp2php.y" /* yacc.c:1646  */
    { write("private "); }
#line 2304 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 129 "cpp2php.y" /* yacc.c:1646  */
    { cout << "var_declaration" << endl; }
#line 2310 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 132 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s;\n", (yyvsp[-1].sval)); }
#line 2316 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 135 "cpp2php.y" /* yacc.c:1646  */
    { cout << "var_definition" << endl; }
#line 2322 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 138 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s = ", (yyvsp[-1].sval)); }
#line 2328 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 138 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2334 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 145 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2340 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 152 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Function declaration" << endl; }
#line 2346 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 158 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Function definition" << endl; }
#line 2352 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 161 "cpp2php.y" /* yacc.c:1646  */
    { write("function %s(", (yyvsp[-1].sval)); }
#line 2358 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 161 "cpp2php.y" /* yacc.c:1646  */
    { write(") {\n"); }
#line 2364 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 161 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2370 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 166 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2376 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 168 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2382 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 174 "cpp2php.y" /* yacc.c:1646  */
    { write("break;\n"); }
#line 2388 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 178 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2394 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 180 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2400 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 186 "cpp2php.y" /* yacc.c:1646  */
    { write("break;\n"); }
#line 2406 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 188 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2412 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 189 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2418 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 206 "cpp2php.y" /* yacc.c:1646  */
    { write("return "); }
#line 2424 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 206 "cpp2php.y" /* yacc.c:1646  */
    {write(";\n"); }
#line 2430 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 207 "cpp2php.y" /* yacc.c:1646  */
    { write("return;\n"); }
#line 2436 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 214 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2442 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 221 "cpp2php.y" /* yacc.c:1646  */
    { cout << "function_call" << endl; }
#line 2448 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 224 "cpp2php.y" /* yacc.c:1646  */
    { write("%s(", (yyvsp[-1].sval)); }
#line 2454 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 224 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2460 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 225 "cpp2php.y" /* yacc.c:1646  */
    { write("%s.%s(", (yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 2466 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 225 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2472 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 228 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Assignment" << endl; }
#line 2478 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 231 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2484 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 238 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2490 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 245 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Operation" << endl; }
#line 2496 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 251 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2502 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 252 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2508 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 256 "cpp2php.y" /* yacc.c:1646  */
    { write("++"); }
#line 2514 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 257 "cpp2php.y" /* yacc.c:1646  */
    { write("++"); }
#line 2520 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 258 "cpp2php.y" /* yacc.c:1646  */
    { write("--"); }
#line 2526 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 259 "cpp2php.y" /* yacc.c:1646  */
    { write("--"); }
#line 2532 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 260 "cpp2php.y" /* yacc.c:1646  */
    { write("("); }
#line 2538 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 260 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2544 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 261 "cpp2php.y" /* yacc.c:1646  */
    { write("("); }
#line 2550 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 261 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2556 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2562 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 263 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2568 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 273 "cpp2php.y" /* yacc.c:1646  */
    { cout << "If" << endl; }
#line 2574 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 276 "cpp2php.y" /* yacc.c:1646  */
    { write("if ("); }
#line 2580 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 276 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2586 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 276 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2592 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 279 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2598 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 279 "cpp2php.y" /* yacc.c:1646  */
    { write("}"); }
#line 2604 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 280 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2610 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 283 "cpp2php.y" /* yacc.c:1646  */
    { write(" else"); }
#line 2616 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 283 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2622 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 286 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2628 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 286 "cpp2php.y" /* yacc.c:1646  */
    { write("}"); }
#line 2634 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 287 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2640 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 290 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Switch" << endl; }
#line 2646 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 293 "cpp2php.y" /* yacc.c:1646  */
    { write("switch (%s) {\n", (yyvsp[-2].sval)); }
#line 2652 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 293 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2658 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 299 "cpp2php.y" /* yacc.c:1646  */
    { write("case "); }
#line 2664 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 299 "cpp2php.y" /* yacc.c:1646  */
    { write(":\n"); }
#line 2670 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 300 "cpp2php.y" /* yacc.c:1646  */
    { write("case "); }
#line 2676 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 300 "cpp2php.y" /* yacc.c:1646  */
    { write(":\n"); }
#line 2682 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 303 "cpp2php.y" /* yacc.c:1646  */
    { write("default:\n"); }
#line 2688 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 309 "cpp2php.y" /* yacc.c:1646  */
    { write("%d", (yyvsp[0].ival)); }
#line 2694 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 312 "cpp2php.y" /* yacc.c:1646  */
    { cout << "For" << endl; }
#line 2700 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 315 "cpp2php.y" /* yacc.c:1646  */
    { write("for ("); }
#line 2706 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 315 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2712 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 315 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2718 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 315 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2724 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 318 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2730 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 318 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2736 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 319 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2742 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 319 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2748 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 322 "cpp2php.y" /* yacc.c:1646  */
    { write("do {\n"); }
#line 2754 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 322 "cpp2php.y" /* yacc.c:1646  */
    { write("} while ("); }
#line 2760 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 322 "cpp2php.y" /* yacc.c:1646  */
    { write(");\n"); }
#line 2766 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 323 "cpp2php.y" /* yacc.c:1646  */
    { write("do\n"); }
#line 2772 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 323 "cpp2php.y" /* yacc.c:1646  */
    { write("while ("); }
#line 2778 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 323 "cpp2php.y" /* yacc.c:1646  */
    { write(");\n"); }
#line 2784 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 326 "cpp2php.y" /* yacc.c:1646  */
    { write(", $%s = ", (yyvsp[-1].sval)); }
#line 2790 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 327 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2796 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 328 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s = ", (yyvsp[-1].sval)); }
#line 2802 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 329 "cpp2php.y" /* yacc.c:1646  */
    { write(" = "); }
#line 2808 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 335 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2814 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 338 "cpp2php.y" /* yacc.c:1646  */
    { write("while ("); }
#line 2820 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 338 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2826 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 341 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2832 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 341 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2838 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 342 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2844 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 342 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2850 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 345 "cpp2php.y" /* yacc.c:1646  */
    { write(", $%s", (yyvsp[0].sval)); }
#line 2856 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 346 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[0].sval)); }
#line 2862 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 351 "cpp2php.y" /* yacc.c:1646  */
    { write("%d", (yyvsp[0].ival)); }
#line 2868 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 352 "cpp2php.y" /* yacc.c:1646  */
    { write("%f", (yyvsp[0].fval)); }
#line 2874 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 353 "cpp2php.y" /* yacc.c:1646  */
    { write("%s", (yyvsp[0].sval)); }
#line 2880 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 354 "cpp2php.y" /* yacc.c:1646  */
    { write("true"); }
#line 2886 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 355 "cpp2php.y" /* yacc.c:1646  */
    { write("false"); }
#line 2892 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 363 "cpp2php.y" /* yacc.c:1646  */
    { write("+"); }
#line 2898 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 364 "cpp2php.y" /* yacc.c:1646  */
    { write("*"); }
#line 2904 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 365 "cpp2php.y" /* yacc.c:1646  */
    { write("-"); }
#line 2910 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 366 "cpp2php.y" /* yacc.c:1646  */
    { write("/"); }
#line 2916 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 367 "cpp2php.y" /* yacc.c:1646  */
    { write("\%"); }
#line 2922 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 368 "cpp2php.y" /* yacc.c:1646  */
    { write("<<"); }
#line 2928 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 369 "cpp2php.y" /* yacc.c:1646  */
    { write(">>"); }
#line 2934 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 370 "cpp2php.y" /* yacc.c:1646  */
    { write("|"); }
#line 2940 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 371 "cpp2php.y" /* yacc.c:1646  */
    { write("&"); }
#line 2946 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 374 "cpp2php.y" /* yacc.c:1646  */
    { write(" < "); }
#line 2952 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 375 "cpp2php.y" /* yacc.c:1646  */
    { write(" > "); }
#line 2958 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 376 "cpp2php.y" /* yacc.c:1646  */
    { write(" >= "); }
#line 2964 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 377 "cpp2php.y" /* yacc.c:1646  */
    { write(" <= "); }
#line 2970 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 378 "cpp2php.y" /* yacc.c:1646  */
    { write(" == "); }
#line 2976 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 379 "cpp2php.y" /* yacc.c:1646  */
    { write(" != "); }
#line 2982 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 382 "cpp2php.y" /* yacc.c:1646  */
    { write(" = "); }
#line 2988 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 383 "cpp2php.y" /* yacc.c:1646  */
    { write(" += "); }
#line 2994 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 384 "cpp2php.y" /* yacc.c:1646  */
    { write(" *= "); }
#line 3000 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 385 "cpp2php.y" /* yacc.c:1646  */
    { write(" -= "); }
#line 3006 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 386 "cpp2php.y" /* yacc.c:1646  */
    { write(" /= "); }
#line 3012 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 387 "cpp2php.y" /* yacc.c:1646  */
    { write(" \%= "); }
#line 3018 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 388 "cpp2php.y" /* yacc.c:1646  */
    { write(" &= "); }
#line 3024 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 389 "cpp2php.y" /* yacc.c:1646  */
    { write(" <<= "); }
#line 3030 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 390 "cpp2php.y" /* yacc.c:1646  */
    { write(" >>= "); }
#line 3036 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 391 "cpp2php.y" /* yacc.c:1646  */
    { write(" ^= "); }
#line 3042 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 392 "cpp2php.y" /* yacc.c:1646  */
    { write(" |= "); }
#line 3048 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 395 "cpp2php.y" /* yacc.c:1646  */
    { write(" && "); }
#line 3054 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 396 "cpp2php.y" /* yacc.c:1646  */
    { write(" || "); }
#line 3060 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 397 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 3066 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 404 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[0].sval)); }
#line 3072 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 405 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[-1].sval)); }
#line 3078 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 406 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s[%d]", (yyvsp[-3].sval), (yyvsp[-1].ival)); }
#line 3084 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 407 "cpp2php.y" /* yacc.c:1646  */
    { write("&$%s", (yyvsp[0].sval)); }
#line 3090 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 408 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s->", (yyvsp[-1].sval)); }
#line 3096 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 409 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s->", (yyvsp[-3].sval)); }
#line 3102 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 410 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s[%d]->", (yyvsp[-4].sval), (yyvsp[-2].ival)); }
#line 3108 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 411 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s::", (yyvsp[-1].sval)); }
#line 3114 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 414 "cpp2php.y" /* yacc.c:1646  */
    { write("%s", (yyvsp[0].sval)); }
#line 3120 "cpp2php.tab.c" /* yacc.c:1646  */
    break;


#line 3124 "cpp2php.tab.c" /* yacc.c:1646  */
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
#line 443 "cpp2php.y" /* yacc.c:1906  */


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
