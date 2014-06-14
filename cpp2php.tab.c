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
#define YYLAST   2975

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  512

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
     128,   129,   130,   131,   132,   135,   138,   141,   144,   144,
     144,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   188,   188,
     188,   191,   192,   193,   194,   195,   196,   197,   200,   203,
     203,   204,   204,   207,   210,   213,   214,   215,   216,   217,
     218,   221,   224,   225,   226,   227,   227,   228,   228,   229,
     230,   231,   232,   233,   234,   234,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   242,   244,   246,
     246,   248,   250,   252,   252,   254,   254,   256,   259,   262,
     262,   262,   262,   262,   265,   265,   266,   266,   269,   269,
     269,   270,   270,   270,   273,   273,   274,   274,   275,   275,
     276,   276,   278,   278,   280,   281,   282,   282,   285,   285,
     285,   288,   288,   289,   289,   291,   292,   293,   295,   295,
     295,   295,   295,   298,   299,   300,   301,   302,   305,   306,
     307,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     321,   322,   323,   324,   325,   326,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   342,   343,   344,
     346,   346,   346,   346,   348,   348,   348,   348,   348,   348,
     348,   351,   352,   353,   354,   355,   355,   356,   356,   357,
     357,   358,   358,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389
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
  "var_definition1", "$@4", "var_definition2", "function_declaration",
  "function_declaration1", "function_definition", "function_definition1",
  "$@5", "$@6", "function_body", "one_line_function_body", "returning",
  "$@7", "$@8", "returning1", "function_call", "function_call1", "$@9",
  "$@10", "assignment", "assignment1", "assignment2", "operation",
  "operation1", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "comparation", "condition_if", "condition_if1",
  "condition_switch", "condition_switch1", "switch_body", "cases_section",
  "default_section", "loop_for", "loop_for1", "$@19", "$@20", "$@21",
  "$@22", "loop_for2", "$@23", "$@24", "loop_do", "$@25", "$@26", "$@27",
  "$@28", "initial_args", "$@29", "$@30", "$@31", "$@32", "action_args",
  "call_arguments", "$@33", "loop_while", "$@34", "$@35", "loop_while2",
  "$@36", "$@37", "arguments", "template_arguments", "value", "operator",
  "operation_operator", "comparing_operator", "assign_operator",
  "logical_operator", "type", "type_spec", "ident", "$@38", "$@39", "$@40",
  "$@41", "typevar", YY_NULLPTR
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

#define YYPACT_NINF -415

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-415)))

#define YYTABLE_NINF -294

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -415,     8,  2288,  -415,   -52,   230,  -415,  -415,     1,   230,
    -415,   230,  -415,  -415,  -415,   230,    85,     9,   230,   -32,
      15,   -59,   131,  -415,   230,  -415,  -415,  2288,   115,  2347,
    -415,  2400,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,    55,
     -27,  -415,   -11,    83,    98,   122,  -415,   -46,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,   100,   158,  -415,  -415,
    2453,   -18,  2506,  -415,  2453,  -415,  -415,  -415,  -415,   181,
     189,  -415,   115,  2347,  2400,    34,  -415,   140,  2400,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,   119,  -415,   -21,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  2453,   -18,  -415,
    -415,  2024,  -415,  -415,  -415,  -415,  -415,  -415,  -415,    87,
     146,   150,    63,   156,  2077,  -415,   161,  -415,  -415,  -415,
    2400,   162,   162,   -11,  -415,  -415,  2453,   144,  -415,  1812,
    -415,  -415,  -415,  -415,    93,  -415,  -415,  -415,  -415,  -415,
    2453,   -18,  -415,  -415,   242,  2559,  -415,  -415,  -415,   160,
    -415,    65,    74,  -415,  2146,  2453,   -56,   172,  -415,  -415,
     167,  -415,  -415,  -415,  -415,  2453,  2130,   177,   111,   178,
     179,  -415,   180,  -415,  2612,  -415,  -415,   142,  -415,  -415,
     182,   173,   183,  -415,  2865,  -415,   185,   -54,   -42,  2453,
     186,  -415,  -415,  1865,  -415,  -415,  2453,   -18,  -415,  -415,
    -415,   -77,   190,  2453,  -415,   -63,   -63,  -415,   187,  -415,
     175,   193,  2183,  2183,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,   357,  -415,  -415,  -415,  -415,  -415,
    -415,   201,  -415,  -415,  1918,    94,   187,  -415,   129,  -415,
    -415,   -63,   192,   -63,  2183,   203,   191,   208,  -415,  2588,
    -415,   154,  2865,  -415,  -415,  -415,  -415,  -415,  -415,   204,
    -415,  -415,  2453,  -415,  -415,  -415,  -415,  2865,    -3,  -415,
     211,   -77,  -415,  -415,   208,  2183,  2183,  1596,  1971,  2183,
    -415,  -415,   -63,  -415,  -415,  2635,  2865,   207,   213,   210,
     214,   215,   220,    92,  -415,  -415,   810,  -415,   266,   219,
    -415,  -415,  2681,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,   233,   529,  -415,     0,  2183,  -415,   -63,  -415,  -415,
    -415,  1682,  -415,  2183,   235,  -415,   226,  -415,  -415,  -415,
    -415,  -415,   227,  -415,  2727,  -415,  -415,  -415,  -415,  -415,
    2110,  -415,  -415,  -415,   -20,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  2187,  -415,  2865,  -415,
    1596,   228,  -415,  -415,   267,  -415,   234,  -415,  2773,  -415,
    -415,  -415,  -415,  -415,  1754,  2865,   232,   236,  2183,  -415,
    -415,  -415,  2612,  -415,   243,  2819,   248,    24,  -415,  2612,
     249,   250,  2865,   255,    61,   910,  -415,   231,  -415,  -415,
      35,   101,   240,   241,  1510,   260,   254,   258,   259,  -415,
    -415,  -415,  -415,   265,  -415,  -415,   272,  -415,  2453,  -415,
     268,  -415,  1596,  -415,   350,  -415,  -415,  -415,   264,  2183,
     -63,   277,  2183,  -415,   -11,  1010,   270,   273,   155,   275,
    -415,   271,   274,   279,   283,   -11,  -415,  -415,  1596,  -415,
     286,   287,  -415,  -415,  -415,  1682,  2183,   288,   -11,  -415,
    -415,  -415,  1110,  1596,  1596,  1596,  -415,   290,  -415,  -415,
     -11,  2183,  1110,  1210,  1310,   291,  -415,  2865,    43,  -415,
    -415,  2183,  -415,  2865,   294,  -415,  -415,  1682,  1596,  -415,
    1410,  -415
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,   300,   294,     0,     0,
     298,     0,   299,   296,   297,     0,   301,     0,     0,     0,
       0,     0,     0,   302,     0,   293,     3,     8,    12,     0,
      17,     7,    20,    23,    37,    24,    40,    25,    43,    26,
      46,    21,    74,    22,    76,    28,    85,    27,    87,     0,
     270,   274,     0,     0,     0,     0,   279,   319,   280,   278,
     276,   295,   303,   308,   309,   304,   310,   311,   277,   320,
      65,     0,   228,   321,     0,   312,   315,   316,   305,   317,
     318,   275,    12,     0,     5,     0,    11,     0,     6,    31,
      32,    33,    34,    29,    30,    35,    36,     0,   271,     0,
     237,   236,   233,   234,   235,    19,   319,    55,     0,   307,
     306,     0,    70,    71,    72,    73,    54,    53,    52,     0,
       0,   293,     0,     0,     0,    49,     0,   314,   313,     9,
       4,     0,     0,     0,    75,    77,    88,     0,   272,     0,
      57,    58,    59,    60,     0,    44,    66,    67,    68,    69,
      65,     0,    51,   232,     0,     0,   230,    47,    48,     0,
      16,     0,     0,    18,     0,   225,     0,     0,   273,    41,
       0,    61,    62,    63,    64,    55,     0,     0,     0,   293,
       0,    13,     0,    14,     0,   164,   167,   281,   171,   173,
       0,     0,   160,   138,    81,   151,   161,   159,     0,     0,
       0,   227,    56,     0,    45,    50,    55,     0,   231,   229,
      15,   293,   162,     0,    84,     0,     0,   291,   285,   139,
     282,     0,     0,     0,   284,    78,   255,   267,   246,   253,
     254,   252,   247,   268,   250,   251,   269,   241,   242,   243,
     244,   245,   248,   249,     0,   238,   239,   240,   163,   166,
      89,     0,    86,    42,     0,     0,     0,   158,   281,   165,
     168,     0,     0,     0,   214,     0,     0,   157,   160,     0,
     161,   159,   174,   155,   169,   175,   153,   154,   152,     0,
     226,    38,    55,   285,   292,   141,   286,   215,     0,   287,
     283,     0,   162,   172,     0,     0,     0,   128,     0,   214,
     216,   140,     0,   289,   156,     0,   176,     0,   201,     0,
       0,     0,     0,   281,   103,   104,   128,   114,     0,   160,
     106,   143,     0,   108,   178,   109,   181,   110,   188,   112,
     111,     0,   159,    39,     0,     0,   288,     0,   170,   113,
     198,   128,   189,     0,     0,   218,     0,    90,   115,    91,
      92,   102,   160,    94,     0,    96,    97,    98,   100,    99,
       0,   129,   105,   107,     0,   260,   261,   262,   258,   257,
     259,   263,   264,   265,   266,   256,     0,   142,   217,   290,
     128,     0,   116,   117,     0,   127,   160,   119,     0,   121,
     122,   123,   125,   124,     0,   177,     0,     0,     0,   101,
      93,    95,     0,   131,   160,     0,   161,   159,   130,     0,
     160,     0,   147,   161,   159,   128,   126,     0,   118,   120,
     281,     0,     0,     0,   128,     0,     0,   162,     0,   135,
     134,   132,   133,   162,   150,   144,     0,   202,   206,   190,
       0,   210,   128,   180,     0,   219,   136,   137,     0,     0,
       0,     0,     0,   208,     0,   128,     0,     0,   184,   223,
     199,     0,     0,     0,     0,     0,   211,   179,   128,   182,
       0,     0,   183,   221,   220,   128,     0,     0,     0,   204,
     191,   209,   186,   128,   128,   128,   224,     0,   203,   207,
       0,     0,   185,   128,   128,     0,   205,   213,     0,   222,
     200,     0,   192,   212,   196,   194,   193,   128,   128,   197,
     128,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -415,  -415,  -415,  -415,  -415,  -415,  -415,   303,   261,   345,
    -415,   -14,  -415,   -30,  -415,   -29,  -415,   -22,  -415,   -17,
    -415,  -415,  -103,   -68,  -168,   244,    -2,  -415,     4,  -415,
    -415,  -415,    19,  -415,   538,  -415,  -415,  -415,  -332,  -414,
    -277,  -415,  -415,  -415,  -132,  -415,  -415,  -415,   -84,  -415,
    -415,   217,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -379,   -78,  -415,   141,  -415,  -415,  -415,  -415,   246,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,   276,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,    97,
    -415,   302,  -415,  -415,  -415,  -415,  -415,   221,  -415,   -48,
    -415,  -415,  -415,  -415,  -415,    47,  -415,   284,  -415,  -415,
    -415,  -415,   289
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    27,    82,    28,    86,   161,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   124,   119,   170,   139,   111,   314,    42,   315,    44,
     164,   191,    45,    46,    47,    48,   165,   279,   316,   384,
     317,   318,   408,   361,   268,   193,   264,   299,   320,   321,
     411,   322,   195,   294,   213,   215,   216,   295,   222,   223,
     296,   396,   323,   324,   325,   326,   457,   458,   472,   327,
     328,   394,   452,   491,   504,   506,   508,   507,   329,   380,
     476,   341,   449,   421,   490,   450,   465,   454,   498,   288,
     335,   330,   398,   459,   474,   485,   475,   166,   122,   270,
     244,   245,   246,   376,   247,    49,    50,   332,   263,   302,
     337,   261,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    89,    90,   120,   105,   144,    43,   203,     3,    91,
     443,   137,   100,    84,    92,    88,   248,   256,   249,   426,
      62,   116,   117,   118,   219,    41,   258,    41,    63,    93,
      73,    43,   192,    43,    64,    94,    74,    52,   254,   351,
     120,    65,   199,   101,    66,   -79,   200,   190,   415,   107,
      95,   108,   212,    67,    89,    90,   199,    69,    89,    90,
     250,   486,    91,    70,   385,    71,    91,    92,   112,   130,
     461,    92,   125,   464,   113,   102,   103,   104,    98,   134,
     135,    41,    93,   177,    99,   163,    93,    43,    94,   114,
      57,   138,    94,   509,   248,   300,   249,   487,   300,   301,
      89,    90,   377,    95,   255,   140,    72,    95,    91,   146,
     455,   141,   276,    92,   298,   147,   196,    61,    85,   123,
     217,   126,   158,   432,  -293,   131,   142,   132,    93,   283,
     148,   248,   109,   249,    94,   292,   482,   171,   351,   120,
     220,   501,    75,   172,    97,   502,   221,   385,   112,    95,
      76,   492,   493,   494,   113,   154,    77,   181,   173,   182,
    -145,   155,   304,    78,   470,   319,    79,   183,   182,   114,
     471,   126,   106,   140,   146,    80,   510,   217,   351,   141,
     147,  -293,   150,   167,   352,   151,   218,    69,   175,   282,
     110,   151,   151,   219,   142,   148,   277,   220,   385,   438,
     439,   171,   180,   221,   140,   351,   206,   172,   207,   386,
     141,    73,   167,   127,   217,   351,   351,   351,   134,   135,
     136,   128,   173,   283,   248,   142,   249,   217,   404,   133,
     385,   214,   353,   351,   220,   152,   218,     6,   355,   153,
     221,     7,    53,   219,   410,   156,   251,   220,   319,    10,
     159,   160,   171,   221,   178,    12,   168,   387,   172,   134,
     257,   201,    13,   389,   202,    14,   205,   208,   209,   210,
     427,   224,   225,   173,    16,    17,   262,   433,    54,   266,
     140,   265,   -80,   352,   -82,   252,   141,    55,    22,   -83,
     280,    23,   386,   285,    56,   289,   171,   291,    58,   297,
      59,   142,   172,   290,    60,   303,   339,    68,   340,   360,
     319,   342,   406,    81,   349,   343,   344,   173,   362,    25,
     350,   345,   364,   352,   397,   399,   400,   416,   413,   440,
     417,   353,   437,   418,   424,   448,   319,   355,   425,   382,
     387,   441,   429,   386,   331,   383,   389,   431,  -146,   435,
     352,   319,   319,   319,  -148,   444,   445,   446,   447,   456,
     352,   352,   352,   331,  -149,   460,   463,   468,   453,   469,
     473,   353,    83,   477,   478,   386,   319,   355,   352,   479,
     100,   194,   480,   483,   484,   129,   198,   488,   331,   505,
     500,   387,   495,   162,   176,   273,   334,   389,   353,     0,
       0,     0,     0,     0,   355,     0,   466,     0,   353,   353,
     353,   101,     0,   349,   355,   355,   355,   481,     0,   350,
       0,     0,   382,   387,     0,     0,   353,   331,   383,   389,
     489,     0,   355,     0,     0,     0,     0,     0,     0,   269,
     272,   422,   496,   102,   103,   104,   187,     0,   197,   428,
       0,     0,     0,   349,     0,     0,   434,   356,   274,   350,
     275,     0,   331,     0,     0,     0,     0,   190,     0,     0,
       0,   331,     0,   382,     0,     0,     0,     0,     0,   383,
     349,   287,   390,     0,     0,   451,   350,     0,     0,   331,
     349,   349,   349,     0,     0,     0,   350,   350,   350,   259,
     260,     0,   331,     0,     0,   382,   271,   271,   349,     0,
       0,   383,   305,   306,   350,   331,   287,     0,     0,     0,
       0,     0,   331,     0,     0,     0,     0,     0,   278,   331,
     331,   331,   331,   354,     0,     0,     0,     0,     0,   331,
     331,   331,     0,     0,     0,   284,   365,   286,   271,     0,
       0,     0,   378,     0,   331,   331,   356,   331,   388,     0,
     395,     0,   357,     0,     0,   390,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,   405,     0,   271,
     271,     0,     0,   271,     0,     0,   336,   391,     0,     0,
       0,     0,   358,   412,     0,   366,   356,   367,   368,   248,
     369,   249,   370,     0,     0,   371,     0,     0,   115,     0,
     372,   373,   374,     0,     0,   395,   390,   392,   359,   271,
       0,   379,    96,   356,     0,     0,    96,   271,     0,   375,
       0,     0,   354,   356,   356,   356,     0,     0,     0,     0,
       0,   388,     0,   393,   407,   143,     0,     0,   390,   149,
       0,   356,     0,     0,     0,     0,     0,     0,     0,     0,
     414,   357,     0,     0,     0,     0,   395,     0,    96,   395,
     391,     0,   354,     0,     0,     0,     0,   174,   423,     0,
       0,     0,   271,     0,     0,     0,     0,     0,   115,     0,
       0,   358,   388,   395,     0,     0,     0,     0,     0,   354,
     392,   357,     0,     0,     0,     0,     0,     0,   497,   354,
     354,   354,     0,   143,   149,     0,     0,   359,   503,     0,
       0,   391,     0,     0,   388,     0,   393,   354,   357,     0,
       0,   358,     0,   271,   462,     0,   271,     0,   357,   357,
     357,   174,     0,     0,   143,     0,     0,     0,     0,     0,
       0,   392,     0,   391,     0,     0,   357,   359,   358,     0,
     271,     0,     0,     0,     0,     0,     0,     0,   358,   358,
     358,     0,     0,     0,     0,   271,     0,   393,     0,     0,
       0,     0,     0,   392,   359,   271,   358,     0,     0,     0,
       0,     0,   174,     0,   359,   359,   359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   393,
       0,     0,   359,     0,     0,     0,     5,     6,   346,     0,
     143,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,   174,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,   347,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   346,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,   436,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   346,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,   467,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   346,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,  -128,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   346,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,  -187,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   346,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,   499,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   346,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     0,     0,     0,     0,   511,     0,     0,   348,
       0,   188,     0,   189,     0,     0,     5,     6,   381,     0,
     190,     7,    53,     9,     0,     0,     0,     0,   308,    10,
       0,     0,    11,   100,     0,    12,     0,   309,     0,     0,
     310,     0,    13,     0,     0,    14,     0,     0,   267,     0,
       0,     0,    15,     0,    16,    17,     0,    18,    54,   311,
       0,     0,     0,     0,   101,     0,     0,    55,    22,     0,
       0,    23,    24,   312,     0,     0,     0,     0,     0,     0,
     185,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   313,
       0,     0,     5,     6,   307,   442,     0,     7,    53,     9,
       0,   188,     0,   189,   308,    10,     0,     0,    11,   100,
     190,    12,     0,   309,     0,     0,   310,     0,    13,     0,
       0,    14,     0,     0,   267,     0,     0,     0,    15,     0,
      16,    17,     0,    18,    54,   311,     0,     0,     0,     0,
     101,     0,     0,    55,    22,     0,     0,    23,    24,   312,
       0,     0,     0,     0,     0,     0,   185,     0,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   313,     0,     0,     5,     6,
     381,     0,     0,     7,    53,     9,     0,   188,     0,   189,
     308,    10,     0,     0,    11,   100,   190,    12,     0,   309,
       0,     0,   310,     0,    13,     0,     0,    14,     0,     0,
     267,     0,     0,     0,    15,     0,    16,    17,     0,    18,
      54,   311,     0,     0,     0,     0,   101,     0,     0,    55,
      22,     0,     0,    23,    24,   312,     0,     0,     0,     0,
       0,     0,   185,     0,   186,     0,     0,     0,     0,     0,
       5,     6,     0,     0,     0,     7,    53,     9,   102,   103,
     104,   313,     0,    10,     0,     0,    11,     0,     0,    12,
       0,     0,     0,   188,     0,   189,    13,     0,     0,    14,
       0,     0,   190,     0,     0,     0,    15,     0,    16,    17,
       0,    18,    54,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    22,     0,     0,    23,    24,     0,     5,     6,
       0,     0,     0,     7,    53,     9,     0,     0,     0,     0,
       0,    10,     0,     0,    11,     0,     0,    12,     0,     0,
       0,     0,     0,   420,    13,     0,     0,    14,     0,     0,
       0,   116,   117,   118,    15,     0,    16,    17,     0,    18,
      54,     0,     0,     0,   190,     0,     0,     0,     0,    55,
      22,     5,     6,    23,    24,     0,     7,    53,     9,     0,
       0,     0,     0,     0,    10,     0,     0,    11,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    13,     0,     0,
      14,    25,     0,     0,   116,   117,   118,    15,   169,    16,
      17,     0,    18,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    22,     5,     6,    23,    24,     0,     7,
      53,     9,     0,     0,     0,     0,     0,    10,     0,     0,
      11,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      13,     0,     0,    14,    25,     0,     0,   116,   117,   118,
      15,   253,    16,    17,     0,    18,    54,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    22,     5,     6,    23,
      24,     0,     7,    53,     9,     0,     0,     0,     0,     0,
      10,     0,     0,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    14,    25,     0,     0,
     116,   117,   118,    15,   281,    16,    17,     0,    18,    54,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    22,
       5,     6,    23,    24,     0,     7,    53,     9,     0,     0,
       0,     0,     0,    10,     0,     0,    11,     0,     0,    12,
       0,     0,     0,     0,     0,     0,    13,     0,     0,    14,
      25,     0,     0,     0,     0,     0,    15,   333,    16,    17,
       0,    18,    54,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    22,     5,     6,    23,    24,     0,     7,    53,
       9,     0,     0,     0,     0,     0,    10,     0,     0,    11,
       0,     0,    12,     0,     0,     0,     0,     0,     0,    13,
       0,     0,    14,    25,     0,     0,     0,     0,     0,    15,
     145,    16,    17,     0,    18,    54,     0,     0,     0,     0,
       0,     0,     0,   100,    55,    22,     5,     6,    23,    24,
       0,     7,    53,     9,     0,     0,     0,     0,   402,    10,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,   101,    14,    25,     0,     0,   100,
       0,     0,    15,   157,    16,    17,     0,    18,    54,     0,
     185,     0,   186,     0,   184,     0,     0,    55,    22,     0,
       0,    23,    24,     0,     0,     0,   102,   103,   104,   187,
     101,     0,     0,     0,     0,     0,   100,     0,     0,   403,
     100,   188,     0,   189,     0,     0,   185,     0,   186,    25,
     190,   267,     0,     0,     0,   409,   204,     0,     0,     0,
       0,     0,   102,   103,   104,   187,     0,   101,     0,     0,
       0,   101,     0,     0,     0,     0,     0,   188,     0,   189,
       0,     0,     0,   185,     0,   186,   190,   185,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   187,   102,   103,   104,   187,     0,     0,     0,
       0,     0,     0,     0,   188,     0,   189,     0,   188,     0,
     189,     0,     4,   190,     5,     6,     0,   190,     0,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
      11,     0,     0,    12,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   226,    15,   227,    16,    17,     0,    18,
      54,     0,     0,   228,     0,   229,   230,   231,   232,    55,
      22,     0,   233,    23,    24,     0,     0,     0,     0,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,   236,   237,   238,   239,   240,   241,   242,   243,     0,
     226,   211,   227,     0,     0,     0,     0,     0,     0,     0,
     228,     0,   229,   230,   231,   232,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   236,   237,
     238,   239,   240,   241,   242,   243,   226,     0,   227,     0,
       0,     0,     0,     0,     0,     0,   228,     0,   229,   230,
     231,   232,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,   234,   235,     0,     0,     0,     0,     0,     0,
     363,     0,     0,     0,   236,   237,   238,   239,   240,   241,
     242,   243,   226,     0,   227,     0,     0,     0,     0,     0,
       0,     0,   228,     0,   229,   230,   231,   232,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,   401,     0,     0,     0,
     236,   237,   238,   239,   240,   241,   242,   243,   226,     0,
     227,     0,     0,     0,     0,     0,     0,     0,   228,     0,
     229,   230,   231,   232,     0,     0,     0,   233,     0,     0,
       0,     0,     0,     0,   234,   235,     0,     0,     0,     0,
       0,     0,   419,     0,     0,     0,   236,   237,   238,   239,
     240,   241,   242,   243,   226,     0,   227,     0,     0,     0,
       0,     0,     0,     0,   228,     0,   229,   230,   231,   232,
       0,     0,     0,   233,     0,     0,     0,     0,     0,     0,
     234,   235,     0,     0,     0,     0,     0,     0,   430,     0,
       0,     0,   236,   237,   238,   239,   240,   241,   242,   243,
     226,     0,   227,     0,     0,     0,     0,     0,     0,     0,
     228,     0,   229,   230,   231,   232,     0,     0,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   237,
     238,   239,   240,   241,   242,   243
};

static const yytype_int16 yycheck[] =
{
       2,    31,    31,    71,    52,   108,     2,   175,     0,    31,
     424,    32,    23,    27,    31,    29,    70,    94,    72,   398,
      11,    39,    40,    41,   101,    27,    89,    29,    19,    31,
      89,    27,   164,    29,    25,    31,    95,    89,   206,   316,
     108,    32,    98,    54,    35,    99,   102,   110,   380,    95,
      31,    97,   184,    44,    84,    84,    98,    89,    88,    88,
     102,   475,    84,    95,   341,    97,    88,    84,    70,    83,
     449,    88,    74,   452,    70,    86,    87,    88,   105,    99,
     100,    83,    84,   151,   111,   133,    88,    83,    84,    70,
      89,   112,    88,   507,    70,    98,    72,   476,    98,   102,
     130,   130,   102,    84,   207,   107,    91,    88,   130,   111,
     442,   107,   244,   130,   282,   111,   164,    32,     3,    72,
      85,    74,   124,    99,    89,    91,   107,    93,   130,    94,
     111,    70,    32,    72,   130,   267,   468,   139,   415,   207,
     105,    98,    11,   139,    89,   102,   111,   424,   150,   130,
      19,   483,   484,   485,   150,    92,    25,    92,   139,    94,
      99,    98,   294,    32,     9,   297,    35,    93,    94,   150,
      15,   124,    89,   175,   176,    44,   508,    85,   455,   175,
     176,    89,    95,   136,   316,    98,    94,    89,    95,    95,
      32,    98,    98,   101,   175,   176,   244,   105,   475,    98,
      99,   203,   155,   111,   206,   482,    95,   203,    97,   341,
     206,    89,   165,    32,    85,   492,   493,   494,    99,   100,
     101,    32,   203,    94,    70,   206,    72,    85,   360,    89,
     507,   184,   316,   510,   105,    89,    94,     7,   316,    89,
     111,    11,    12,   101,   376,    89,   199,   105,   380,    19,
      89,    89,   254,   111,    12,    25,   112,   341,   254,    99,
     213,    89,    32,   341,    97,    35,    89,    89,    89,    89,
     402,    89,    99,   254,    44,    45,    89,   409,    48,    86,
     282,   106,    99,   415,    99,    99,   282,    57,    58,    99,
      89,    61,   424,   101,     5,    92,   298,    89,     9,    95,
      11,   282,   298,   112,    15,    94,    99,    18,    95,    43,
     442,   101,   360,    24,   316,   101,   101,   298,    99,    89,
     316,   101,    89,   455,    89,    99,    99,    99,   376,    89,
      63,   415,   101,    99,   102,    63,   468,   415,   102,   341,
     424,   100,    99,   475,   297,   341,   424,    99,    99,    99,
     482,   483,   484,   485,    99,    95,   102,    99,    99,     9,
     492,   493,   494,   316,    99,   101,    89,    97,   100,    96,
      95,   455,    27,   102,   100,   507,   508,   455,   510,   100,
      23,   164,    99,    97,    97,    82,   165,    99,   341,    95,
      99,   475,   102,   132,   150,    38,   299,   475,   482,    -1,
      -1,    -1,    -1,    -1,   482,    -1,   454,    -1,   492,   493,
     494,    54,    -1,   415,   492,   493,   494,   465,    -1,   415,
      -1,    -1,   424,   507,    -1,    -1,   510,   380,   424,   507,
     478,    -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,   222,
     223,   394,   490,    86,    87,    88,    89,    -1,   164,   402,
      -1,    -1,    -1,   455,    -1,    -1,   409,   316,   101,   455,
     103,    -1,   415,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,   424,    -1,   475,    -1,    -1,    -1,    -1,    -1,   475,
     482,   264,   341,    -1,    -1,   438,   482,    -1,    -1,   442,
     492,   493,   494,    -1,    -1,    -1,   492,   493,   494,   215,
     216,    -1,   455,    -1,    -1,   507,   222,   223,   510,    -1,
      -1,   507,   295,   296,   510,   468,   299,    -1,    -1,    -1,
      -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,   244,   482,
     483,   484,   485,   316,    -1,    -1,    -1,    -1,    -1,   492,
     493,   494,    -1,    -1,    -1,   261,    17,   263,   264,    -1,
      -1,    -1,   335,    -1,   507,   508,   415,   510,   341,    -1,
     343,    -1,   316,    -1,    -1,   424,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,   295,
     296,    -1,    -1,   299,    -1,    -1,   302,   341,    -1,    -1,
      -1,    -1,   316,   376,    -1,    66,   455,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    70,    -1,
      81,    82,    83,    -1,    -1,   398,   475,   341,   316,   335,
      -1,   337,    84,   482,    -1,    -1,    88,   343,    -1,   100,
      -1,    -1,   415,   492,   493,   494,    -1,    -1,    -1,    -1,
      -1,   424,    -1,   341,   360,   107,    -1,    -1,   507,   111,
      -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     376,   415,    -1,    -1,    -1,    -1,   449,    -1,   130,   452,
     424,    -1,   455,    -1,    -1,    -1,    -1,   139,   394,    -1,
      -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,   150,    -1,
      -1,   415,   475,   476,    -1,    -1,    -1,    -1,    -1,   482,
     424,   455,    -1,    -1,    -1,    -1,    -1,    -1,   491,   492,
     493,   494,    -1,   175,   176,    -1,    -1,   415,   501,    -1,
      -1,   475,    -1,    -1,   507,    -1,   424,   510,   482,    -1,
      -1,   455,    -1,   449,   450,    -1,   452,    -1,   492,   493,
     494,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,   507,    -1,    -1,   510,   455,   482,    -1,
     476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,   493,
     494,    -1,    -1,    -1,    -1,   491,    -1,   475,    -1,    -1,
      -1,    -1,    -1,   507,   482,   501,   510,    -1,    -1,    -1,
      -1,    -1,   254,    -1,   492,   493,   494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   507,
      -1,    -1,   510,    -1,    -1,    -1,     6,     7,     8,    -1,
     282,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,   298,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
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
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,     6,     7,     8,    -1,
     110,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,     6,     7,     8,    95,    -1,    11,    12,    13,
      -1,   101,    -1,   103,    18,    19,    -1,    -1,    22,    23,
     110,    25,    -1,    27,    -1,    -1,    30,    -1,    32,    -1,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
      44,    45,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,     6,     7,
       8,    -1,    -1,    11,    12,    13,    -1,   101,    -1,   103,
      18,    19,    -1,    -1,    22,    23,   110,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    86,    87,
      88,    89,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,   101,    -1,   103,    32,    -1,    -1,    35,
      -1,    -1,   110,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    -1,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    89,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    57,
      58,     6,     7,    61,    62,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    89,    -1,    -1,    39,    40,    41,    42,    96,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,     6,     7,    61,    62,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    89,    -1,    -1,    39,    40,    41,
      42,    96,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,     6,     7,    61,
      62,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    89,    -1,    -1,
      39,    40,    41,    42,    96,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
       6,     7,    61,    62,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      89,    -1,    -1,    -1,    -1,    -1,    42,    96,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,     6,     7,    61,    62,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    89,    -1,    -1,    -1,    -1,    -1,    42,
      96,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    57,    58,     6,     7,    61,    62,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    38,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    54,    35,    89,    -1,    -1,    23,
      -1,    -1,    42,    96,    44,    45,    -1,    47,    48,    -1,
      70,    -1,    72,    -1,    38,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    86,    87,    88,    89,
      54,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    99,
      23,   101,    -1,   103,    -1,    -1,    70,    -1,    72,    89,
     110,    38,    -1,    -1,    -1,    38,    96,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    54,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    70,    -1,    72,   110,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,   103,    -1,   101,    -1,
     103,    -1,     4,   110,     6,     7,    -1,   110,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    65,    42,    67,    44,    45,    -1,    47,
      48,    -1,    -1,    75,    -1,    77,    78,    79,    80,    57,
      58,    -1,    84,    61,    62,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      65,    89,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
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
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   139,   140,   141,   142,   145,   146,   147,   148,   218,
     219,   225,    89,    12,    48,    57,   225,    89,   225,   225,
     225,    32,    11,    19,    25,    32,    35,    44,   225,    89,
      95,    97,    91,    89,    95,    11,    19,    25,    32,    35,
      44,   225,   118,   122,   124,     3,   120,     4,   124,   126,
     128,   130,   132,   139,   141,   145,   147,    89,   105,   111,
      23,    54,    86,    87,    88,   212,    89,    95,    97,    32,
      32,   138,   139,   141,   145,   147,    39,    40,    41,   135,
     136,    89,   211,   218,   134,   139,   218,    32,    32,   120,
     124,    91,    93,    89,    99,   100,   101,    32,   112,   137,
     139,   141,   145,   147,   135,    96,   139,   141,   145,   147,
      95,    98,    89,    89,    92,    98,    89,    96,   139,    89,
      89,   121,   121,   212,   143,   149,   210,   218,   112,    96,
     136,   139,   141,   145,   147,    95,   138,   136,    12,    89,
     218,    92,    94,    93,    38,    70,    72,    89,   101,   103,
     110,   144,   157,   158,   164,   165,   212,   220,   210,    98,
     102,    89,    97,   137,    96,    89,    95,    97,    89,    89,
      89,    89,   157,   167,   218,   168,   169,    85,    94,   101,
     105,   111,   171,   172,    89,    99,    65,    67,    75,    77,
      78,    79,    80,    84,    91,    92,   103,   104,   105,   106,
     107,   108,   109,   110,   213,   214,   215,   217,    70,    72,
     102,   218,    99,    96,   137,   135,    94,   218,    89,   220,
     220,   224,    89,   221,   159,   106,    86,    38,   157,   164,
     212,   220,   164,    38,   101,   103,   157,   212,   220,   150,
      89,    96,    95,    94,   220,   101,   220,   164,   202,    92,
     112,    89,   157,   102,   166,   170,   173,    95,   137,   160,
      98,   102,   222,    94,   157,   164,   164,     8,    18,    27,
      30,    49,    63,    89,   139,   141,   151,   153,   154,   157,
     161,   162,   164,   175,   176,   177,   178,   182,   183,   191,
     204,   218,   220,    96,   202,   203,   220,   223,   102,    99,
      95,   194,   101,   101,   101,   101,     8,    96,    99,   139,
     141,   153,   157,   161,   164,   175,   177,   182,   191,   204,
      43,   156,    99,    99,    89,    17,    66,    68,    69,    71,
      73,    76,    81,    82,    83,   100,   216,   102,   164,   220,
     192,     8,   139,   141,   152,   153,   157,   161,   164,   175,
     177,   182,   191,   204,   184,   164,   174,    89,   205,    99,
      99,    99,    38,    99,   157,   164,   212,   220,   155,    38,
     157,   163,   164,   212,   220,   151,    99,    63,    99,    99,
      89,   196,   218,   220,   102,   102,   174,   157,   218,    99,
      99,    99,    99,   157,   218,    99,    96,   101,    98,    99,
      89,   100,    95,   152,    95,   102,    99,    99,    63,   195,
     198,   218,   185,   100,   200,   151,     9,   179,   180,   206,
     101,   174,   220,    89,   174,   199,   212,    96,    97,    96,
       9,    15,   181,    95,   207,   209,   193,   102,   100,   100,
      99,   212,   151,    97,    97,   208,   152,   174,    99,   212,
     197,   186,   151,   151,   151,   102,   212,   164,   201,    96,
      99,    98,   102,   164,   187,    95,   188,   190,   189,   152,
     151,    96
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
     144,   144,   144,   144,   144,   145,   146,   147,   149,   150,
     148,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   154,   155,
     153,   156,   156,   156,   156,   156,   156,   156,   157,   159,
     158,   160,   158,   161,   162,   163,   163,   163,   163,   163,
     163,   164,   165,   165,   165,   166,   165,   167,   165,   165,
     165,   165,   165,   165,   168,   165,   165,   169,   165,   170,
     165,   171,   165,   172,   165,   173,   165,   174,   175,   176,
     176,   177,   178,   179,   179,   180,   180,   181,   182,   184,
     185,   186,   187,   183,   189,   188,   190,   188,   192,   193,
     191,   194,   195,   191,   197,   196,   198,   196,   199,   196,
     200,   196,   201,   201,   202,   202,   203,   202,   205,   206,
     204,   208,   207,   209,   207,   210,   210,   210,   211,   211,
     211,   211,   211,   212,   212,   212,   212,   212,   213,   213,
     213,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     215,   215,   215,   215,   215,   215,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   217,   217,   217,
     218,   218,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   220,   220,   220,   220,   221,   220,   222,   220,   223,
     220,   224,   220,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225
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
       1,     1,     1,     2,     2,     1,     6,     1,     0,     0,
      10,     2,     2,     3,     2,     3,     2,     2,     2,     2,
       2,     3,     2,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     2,     1,     0,     0,
       3,     2,     3,     3,     3,     3,     4,     4,     1,     0,
       5,     0,     7,     1,     4,     1,     1,     1,     1,     2,
       2,     1,     3,     3,     3,     0,     5,     0,     3,     1,
       1,     1,     2,     2,     0,     3,     2,     0,     3,     0,
       6,     0,     4,     0,     3,     0,     5,     1,     1,     7,
       5,     1,     7,     2,     1,     4,     3,     3,     1,     0,
       0,     0,     0,    13,     0,     4,     0,     2,     0,     0,
      11,     0,     0,     9,     0,     7,     0,     6,     0,     5,
       0,     4,     3,     1,     0,     1,     0,     4,     0,     0,
       7,     0,     4,     0,     2,     0,     4,     2,     0,     4,
       2,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     4,     1,     2,     2,     2,     2,     2,
       2,     1,     2,     4,     2,     0,     4,     0,     6,     0,
       7,     0,     4,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     3,     2,     2,
       2,     2,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2
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
#line 2230 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Parsing was complited successfully" << endl; }
#line 2236 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "cpp2php.y" /* yacc.c:1646  */
    { write("include '"); }
#line 2242 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "cpp2php.y" /* yacc.c:1646  */
    { write("';\n"); }
#line 2248 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "cpp2php.y" /* yacc.c:1646  */
    { write("include '"); }
#line 2254 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 58 "cpp2php.y" /* yacc.c:1646  */
    { write("';\n"); }
#line 2260 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "cpp2php.y" /* yacc.c:1646  */
    { write(".%s",(yyvsp[0].sval));}
#line 2266 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "cpp2php.y" /* yacc.c:1646  */
    { write((yyvsp[0].sval));}
#line 2272 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Defining" << endl; }
#line 2278 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Definitions" << endl; }
#line 2284 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 81 "cpp2php.y" /* yacc.c:1646  */
    { cout << "template" << endl; }
#line 2290 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 86 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Class" << endl; }
#line 2296 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 91 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Struct" << endl; }
#line 2302 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 97 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Union" << endl; }
#line 2308 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 115 "cpp2php.y" /* yacc.c:1646  */
    { cout << "var_declaration" << endl; }
#line 2314 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 118 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s;\n", (yyvsp[-1].sval)); }
#line 2320 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 121 "cpp2php.y" /* yacc.c:1646  */
    { cout << "var_definition" << endl; }
#line 2326 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 124 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s = ", (yyvsp[-1].sval)); }
#line 2332 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 124 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2338 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 135 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Function declaration" << endl; }
#line 2344 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 141 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Function definition" << endl; }
#line 2350 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 144 "cpp2php.y" /* yacc.c:1646  */
    { write("function %s(", (yyvsp[-1].sval)); }
#line 2356 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 144 "cpp2php.y" /* yacc.c:1646  */
    { write(") {\n"); }
#line 2362 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 144 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2368 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 149 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2374 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 151 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2380 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 157 "cpp2php.y" /* yacc.c:1646  */
    { write("break;\n"); }
#line 2386 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 161 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2392 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 163 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2398 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 169 "cpp2php.y" /* yacc.c:1646  */
    { write("break;\n"); }
#line 2404 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 171 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2410 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 188 "cpp2php.y" /* yacc.c:1646  */
    { write("return "); }
#line 2416 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 188 "cpp2php.y" /* yacc.c:1646  */
    {write(";\n"); }
#line 2422 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 188 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Returning" << endl; }
#line 2428 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 200 "cpp2php.y" /* yacc.c:1646  */
    { cout << "function_call" << endl; }
#line 2434 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 203 "cpp2php.y" /* yacc.c:1646  */
    { write("%s(", (yyvsp[-1].sval)); }
#line 2440 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 203 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2446 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 204 "cpp2php.y" /* yacc.c:1646  */
    { write("%s.%s(", (yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 2452 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 204 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2458 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 207 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Assignment" << endl; }
#line 2464 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 210 "cpp2php.y" /* yacc.c:1646  */
    { write(";\n"); }
#line 2470 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 221 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Operation" << endl; }
#line 2476 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 227 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2482 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 228 "cpp2php.y" /* yacc.c:1646  */
    { write("new "); }
#line 2488 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 233 "cpp2php.y" /* yacc.c:1646  */
    { write("++"); }
#line 2494 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 234 "cpp2php.y" /* yacc.c:1646  */
    { write("++"); }
#line 2500 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 235 "cpp2php.y" /* yacc.c:1646  */
    { write("--"); }
#line 2506 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 236 "cpp2php.y" /* yacc.c:1646  */
    { write("--"); }
#line 2512 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 237 "cpp2php.y" /* yacc.c:1646  */
    { write("("); }
#line 2518 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 237 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2524 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 238 "cpp2php.y" /* yacc.c:1646  */
    { write("("); }
#line 2530 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 238 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2536 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 239 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2542 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 240 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2548 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 244 "cpp2php.y" /* yacc.c:1646  */
    { cout << "If" << endl; }
#line 2554 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 248 "cpp2php.y" /* yacc.c:1646  */
    { cout << "Switch" << endl; }
#line 2560 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 259 "cpp2php.y" /* yacc.c:1646  */
    { cout << "For" << endl; }
#line 2566 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write("for ("); }
#line 2572 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2578 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2584 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 262 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2590 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 265 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2596 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 265 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2602 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 266 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2608 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 266 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2614 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 269 "cpp2php.y" /* yacc.c:1646  */
    { write("do {\n"); }
#line 2620 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 269 "cpp2php.y" /* yacc.c:1646  */
    { write("} while ("); }
#line 2626 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 269 "cpp2php.y" /* yacc.c:1646  */
    { write(");\n"); }
#line 2632 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 270 "cpp2php.y" /* yacc.c:1646  */
    { write("do\n"); }
#line 2638 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 270 "cpp2php.y" /* yacc.c:1646  */
    { write("while ("); }
#line 2644 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 270 "cpp2php.y" /* yacc.c:1646  */
    { write(");\n"); }
#line 2650 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 273 "cpp2php.y" /* yacc.c:1646  */
    { write(", $%s = ", (yyvsp[-1].sval)); }
#line 2656 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 274 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2662 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 275 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s = ", (yyvsp[-1].sval)); }
#line 2668 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 276 "cpp2php.y" /* yacc.c:1646  */
    { write(" = "); }
#line 2674 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 282 "cpp2php.y" /* yacc.c:1646  */
    { write(", "); }
#line 2680 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 285 "cpp2php.y" /* yacc.c:1646  */
    { write("while ("); }
#line 2686 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 285 "cpp2php.y" /* yacc.c:1646  */
    { write(")"); }
#line 2692 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 288 "cpp2php.y" /* yacc.c:1646  */
    { write(" {\n"); }
#line 2698 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 288 "cpp2php.y" /* yacc.c:1646  */
    { write("}\n"); }
#line 2704 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 289 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2710 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 289 "cpp2php.y" /* yacc.c:1646  */
    { write("\n"); }
#line 2716 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 292 "cpp2php.y" /* yacc.c:1646  */
    { write(", $%s", (yyvsp[0].sval)); }
#line 2722 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 293 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[0].sval)); }
#line 2728 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 298 "cpp2php.y" /* yacc.c:1646  */
    { write("%d", (yyvsp[0].ival)); }
#line 2734 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 299 "cpp2php.y" /* yacc.c:1646  */
    { write("%f", (yyvsp[0].fval)); }
#line 2740 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 300 "cpp2php.y" /* yacc.c:1646  */
    { write("%s", (yyvsp[0].sval)); }
#line 2746 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 301 "cpp2php.y" /* yacc.c:1646  */
    { write("true"); }
#line 2752 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 302 "cpp2php.y" /* yacc.c:1646  */
    { write("false"); }
#line 2758 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 310 "cpp2php.y" /* yacc.c:1646  */
    { write("+"); }
#line 2764 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 311 "cpp2php.y" /* yacc.c:1646  */
    { write("*"); }
#line 2770 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 312 "cpp2php.y" /* yacc.c:1646  */
    { write("-"); }
#line 2776 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 313 "cpp2php.y" /* yacc.c:1646  */
    { write("/"); }
#line 2782 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 314 "cpp2php.y" /* yacc.c:1646  */
    { write("\%"); }
#line 2788 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 315 "cpp2php.y" /* yacc.c:1646  */
    { write("<<"); }
#line 2794 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 316 "cpp2php.y" /* yacc.c:1646  */
    { write(">>"); }
#line 2800 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 317 "cpp2php.y" /* yacc.c:1646  */
    { write("|"); }
#line 2806 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 318 "cpp2php.y" /* yacc.c:1646  */
    { write("&"); }
#line 2812 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 321 "cpp2php.y" /* yacc.c:1646  */
    { write(" < "); }
#line 2818 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 322 "cpp2php.y" /* yacc.c:1646  */
    { write(" > "); }
#line 2824 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 323 "cpp2php.y" /* yacc.c:1646  */
    { write(" >= "); }
#line 2830 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 324 "cpp2php.y" /* yacc.c:1646  */
    { write(" <= "); }
#line 2836 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 325 "cpp2php.y" /* yacc.c:1646  */
    { write(" == "); }
#line 2842 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 326 "cpp2php.y" /* yacc.c:1646  */
    { write(" != "); }
#line 2848 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 329 "cpp2php.y" /* yacc.c:1646  */
    { write(" = "); }
#line 2854 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 330 "cpp2php.y" /* yacc.c:1646  */
    { write(" += "); }
#line 2860 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 331 "cpp2php.y" /* yacc.c:1646  */
    { write(" *= "); }
#line 2866 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 332 "cpp2php.y" /* yacc.c:1646  */
    { write(" -= "); }
#line 2872 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 333 "cpp2php.y" /* yacc.c:1646  */
    { write(" /= "); }
#line 2878 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 334 "cpp2php.y" /* yacc.c:1646  */
    { write(" \%= "); }
#line 2884 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 335 "cpp2php.y" /* yacc.c:1646  */
    { write(" &= "); }
#line 2890 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 336 "cpp2php.y" /* yacc.c:1646  */
    { write(" <<= "); }
#line 2896 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 337 "cpp2php.y" /* yacc.c:1646  */
    { write(" >>= "); }
#line 2902 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 338 "cpp2php.y" /* yacc.c:1646  */
    { write(" ^= "); }
#line 2908 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 339 "cpp2php.y" /* yacc.c:1646  */
    { write(" |= "); }
#line 2914 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 342 "cpp2php.y" /* yacc.c:1646  */
    { write(" && "); }
#line 2920 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 343 "cpp2php.y" /* yacc.c:1646  */
    { write(" || "); }
#line 2926 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 344 "cpp2php.y" /* yacc.c:1646  */
    { write("!"); }
#line 2932 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 351 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[0].sval)); }
#line 2938 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 352 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s", (yyvsp[-1].sval)); }
#line 2944 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 353 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s[%d]", (yyvsp[-3].sval), (yyvsp[-1].ival)); }
#line 2950 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 354 "cpp2php.y" /* yacc.c:1646  */
    { write("&$%s", (yyvsp[0].sval)); }
#line 2956 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 355 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s->", (yyvsp[-1].sval)); }
#line 2962 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 356 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s->", (yyvsp[-3].sval)); }
#line 2968 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 357 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s[%d]->", (yyvsp[-4].sval), (yyvsp[-2].ival)); }
#line 2974 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 358 "cpp2php.y" /* yacc.c:1646  */
    { write("$%s::", (yyvsp[-1].sval)); }
#line 2980 "cpp2php.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 361 "cpp2php.y" /* yacc.c:1646  */
    { write("%s", (yyvsp[0].sval)); }
#line 2986 "cpp2php.tab.c" /* yacc.c:1646  */
    break;


#line 2990 "cpp2php.tab.c" /* yacc.c:1646  */
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
#line 390 "cpp2php.y" /* yacc.c:1906  */


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
