/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 26 "cpp2php.y" /* yacc.c:1909  */

	int ival;
	float fval;
	char *sval;

#line 151 "cpp2php.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPP2PHP_TAB_H_INCLUDED  */
