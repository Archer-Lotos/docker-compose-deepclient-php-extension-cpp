/* A Bison parser, made by GNU Bison 3.7.5.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_ZEND_APP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_APP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 49 "/app/php-src/Zend/zend_language_parser.y"


#line 52 "/app/php-src/Zend/zend_language_parser.h"

/* Token kinds.  */
#include "zend.h"
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    END = 0,                       /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PREC_ARROW_FUNCTION = 258,     /* PREC_ARROW_FUNCTION  */
    T_NOELSE = 259,                /* T_NOELSE  */
    T_LNUMBER = 260,               /* "integer number (T_LNUMBER)"  */
    T_DNUMBER = 261,               /* "floating-point number (T_DNUMBER)"  */
    T_STRING = 262,                /* "identifier (T_STRING)"  */
    T_VARIABLE = 263,              /* "variable (T_VARIABLE)"  */
    T_INLINE_HTML = 264,           /* T_INLINE_HTML  */
    T_ENCAPSED_AND_WHITESPACE = 265, /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
    T_CONSTANT_ENCAPSED_STRING = 266, /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
    T_STRING_VARNAME = 267,        /* "variable name (T_STRING_VARNAME)"  */
    T_NUM_STRING = 268,            /* "number (T_NUM_STRING)"  */
    T_INCLUDE = 269,               /* "include (T_INCLUDE)"  */
    T_INCLUDE_ONCE = 270,          /* "include_once (T_INCLUDE_ONCE)"  */
    T_EVAL = 271,                  /* "eval (T_EVAL)"  */
    T_REQUIRE = 272,               /* "require (T_REQUIRE)"  */
    T_REQUIRE_ONCE = 273,          /* "require_once (T_REQUIRE_ONCE)"  */
    T_LOGICAL_OR = 274,            /* "or (T_LOGICAL_OR)"  */
    T_LOGICAL_XOR = 275,           /* "xor (T_LOGICAL_XOR)"  */
    T_LOGICAL_AND = 276,           /* "and (T_LOGICAL_AND)"  */
    T_PRINT = 277,                 /* "print (T_PRINT)"  */
    T_YIELD = 278,                 /* "yield (T_YIELD)"  */
    T_YIELD_FROM = 279,            /* "yield from (T_YIELD_FROM)"  */
    T_PLUS_EQUAL = 280,            /* "+= (T_PLUS_EQUAL)"  */
    T_MINUS_EQUAL = 281,           /* "-= (T_MINUS_EQUAL)"  */
    T_MUL_EQUAL = 282,             /* "*= (T_MUL_EQUAL)"  */
    T_DIV_EQUAL = 283,             /* "/= (T_DIV_EQUAL)"  */
    T_CONCAT_EQUAL = 284,          /* ".= (T_CONCAT_EQUAL)"  */
    T_MOD_EQUAL = 285,             /* "%= (T_MOD_EQUAL)"  */
    T_AND_EQUAL = 286,             /* "&= (T_AND_EQUAL)"  */
    T_OR_EQUAL = 287,              /* "|= (T_OR_EQUAL)"  */
    T_XOR_EQUAL = 288,             /* "^= (T_XOR_EQUAL)"  */
    T_SL_EQUAL = 289,              /* "<<= (T_SL_EQUAL)"  */
    T_SR_EQUAL = 290,              /* ">>= (T_SR_EQUAL)"  */
    T_COALESCE_EQUAL = 291,        /* "??= (T_COALESCE_EQUAL)"  */
    T_BOOLEAN_OR = 292,            /* "|| (T_BOOLEAN_OR)"  */
    T_BOOLEAN_AND = 293,           /* "&& (T_BOOLEAN_AND)"  */
    T_IS_EQUAL = 294,              /* "== (T_IS_EQUAL)"  */
    T_IS_NOT_EQUAL = 295,          /* "!= (T_IS_NOT_EQUAL)"  */
    T_IS_IDENTICAL = 296,          /* "=== (T_IS_IDENTICAL)"  */
    T_IS_NOT_IDENTICAL = 297,      /* "!== (T_IS_NOT_IDENTICAL)"  */
    T_IS_SMALLER_OR_EQUAL = 298,   /* "<= (T_IS_SMALLER_OR_EQUAL)"  */
    T_IS_GREATER_OR_EQUAL = 299,   /* ">= (T_IS_GREATER_OR_EQUAL)"  */
    T_SPACESHIP = 300,             /* "<=> (T_SPACESHIP)"  */
    T_SL = 301,                    /* "<< (T_SL)"  */
    T_SR = 302,                    /* ">> (T_SR)"  */
    T_INSTANCEOF = 303,            /* "instanceof (T_INSTANCEOF)"  */
    T_INC = 304,                   /* "++ (T_INC)"  */
    T_DEC = 305,                   /* "-- (T_DEC)"  */
    T_INT_CAST = 306,              /* "(int) (T_INT_CAST)"  */
    T_DOUBLE_CAST = 307,           /* "(double) (T_DOUBLE_CAST)"  */
    T_STRING_CAST = 308,           /* "(string) (T_STRING_CAST)"  */
    T_ARRAY_CAST = 309,            /* "(array) (T_ARRAY_CAST)"  */
    T_OBJECT_CAST = 310,           /* "(object) (T_OBJECT_CAST)"  */
    T_BOOL_CAST = 311,             /* "(bool) (T_BOOL_CAST)"  */
    T_UNSET_CAST = 312,            /* "(unset) (T_UNSET_CAST)"  */
    T_NEW = 313,                   /* "new (T_NEW)"  */
    T_CLONE = 314,                 /* "clone (T_CLONE)"  */
    T_EXIT = 315,                  /* "exit (T_EXIT)"  */
    T_IF = 316,                    /* "if (T_IF)"  */
    T_ELSEIF = 317,                /* "elseif (T_ELSEIF)"  */
    T_ELSE = 318,                  /* "else (T_ELSE)"  */
    T_ENDIF = 319,                 /* "endif (T_ENDIF)"  */
    T_ECHO = 320,                  /* "echo (T_ECHO)"  */
    T_DO = 321,                    /* "do (T_DO)"  */
    T_WHILE = 322,                 /* "while (T_WHILE)"  */
    T_ENDWHILE = 323,              /* "endwhile (T_ENDWHILE)"  */
    T_FOR = 324,                   /* "for (T_FOR)"  */
    T_ENDFOR = 325,                /* "endfor (T_ENDFOR)"  */
    T_FOREACH = 326,               /* "foreach (T_FOREACH)"  */
    T_ENDFOREACH = 327,            /* "endforeach (T_ENDFOREACH)"  */
    T_DECLARE = 328,               /* "declare (T_DECLARE)"  */
    T_ENDDECLARE = 329,            /* "enddeclare (T_ENDDECLARE)"  */
    T_AS = 330,                    /* "as (T_AS)"  */
    T_SWITCH = 331,                /* "switch (T_SWITCH)"  */
    T_ENDSWITCH = 332,             /* "endswitch (T_ENDSWITCH)"  */
    T_CASE = 333,                  /* "case (T_CASE)"  */
    T_DEFAULT = 334,               /* "default (T_DEFAULT)"  */
    T_BREAK = 335,                 /* "break (T_BREAK)"  */
    T_CONTINUE = 336,              /* "continue (T_CONTINUE)"  */
    T_GOTO = 337,                  /* "goto (T_GOTO)"  */
    T_FUNCTION = 338,              /* "function (T_FUNCTION)"  */
    T_FN = 339,                    /* "fn (T_FN)"  */
    T_CONST = 340,                 /* "const (T_CONST)"  */
    T_RETURN = 341,                /* "return (T_RETURN)"  */
    T_TRY = 342,                   /* "try (T_TRY)"  */
    T_CATCH = 343,                 /* "catch (T_CATCH)"  */
    T_FINALLY = 344,               /* "finally (T_FINALLY)"  */
    T_THROW = 345,                 /* "throw (T_THROW)"  */
    T_USE = 346,                   /* "use (T_USE)"  */
    T_INSTEADOF = 347,             /* "insteadof (T_INSTEADOF)"  */
    T_GLOBAL = 348,                /* "global (T_GLOBAL)"  */
    T_STATIC = 349,                /* "static (T_STATIC)"  */
    T_ABSTRACT = 350,              /* "abstract (T_ABSTRACT)"  */
    T_FINAL = 351,                 /* "final (T_FINAL)"  */
    T_PRIVATE = 352,               /* "private (T_PRIVATE)"  */
    T_PROTECTED = 353,             /* "protected (T_PROTECTED)"  */
    T_PUBLIC = 354,                /* "public (T_PUBLIC)"  */
    T_VAR = 355,                   /* "var (T_VAR)"  */
    T_UNSET = 356,                 /* "unset (T_UNSET)"  */
    T_ISSET = 357,                 /* "isset (T_ISSET)"  */
    T_EMPTY = 358,                 /* "empty (T_EMPTY)"  */
    T_HALT_COMPILER = 359,         /* "__halt_compiler (T_HALT_COMPILER)"  */
    T_CLASS = 360,                 /* "class (T_CLASS)"  */
    T_TRAIT = 361,                 /* "trait (T_TRAIT)"  */
    T_INTERFACE = 362,             /* "interface (T_INTERFACE)"  */
    T_EXTENDS = 363,               /* "extends (T_EXTENDS)"  */
    T_IMPLEMENTS = 364,            /* "implements (T_IMPLEMENTS)"  */
    T_OBJECT_OPERATOR = 365,       /* "-> (T_OBJECT_OPERATOR)"  */
    T_DOUBLE_ARROW = 366,          /* "=> (T_DOUBLE_ARROW)"  */
    T_LIST = 367,                  /* "list (T_LIST)"  */
    T_ARRAY = 368,                 /* "array (T_ARRAY)"  */
    T_CALLABLE = 369,              /* "callable (T_CALLABLE)"  */
    T_LINE = 370,                  /* "__LINE__ (T_LINE)"  */
    T_FILE = 371,                  /* "__FILE__ (T_FILE)"  */
    T_DIR = 372,                   /* "__DIR__ (T_DIR)"  */
    T_CLASS_C = 373,               /* "__CLASS__ (T_CLASS_C)"  */
    T_TRAIT_C = 374,               /* "__TRAIT__ (T_TRAIT_C)"  */
    T_METHOD_C = 375,              /* "__METHOD__ (T_METHOD_C)"  */
    T_FUNC_C = 376,                /* "__FUNCTION__ (T_FUNC_C)"  */
    T_COMMENT = 377,               /* "comment (T_COMMENT)"  */
    T_DOC_COMMENT = 378,           /* "doc comment (T_DOC_COMMENT)"  */
    T_OPEN_TAG = 379,              /* "open tag (T_OPEN_TAG)"  */
    T_OPEN_TAG_WITH_ECHO = 380,    /* "open tag with echo (T_OPEN_TAG_WITH_ECHO)"  */
    T_CLOSE_TAG = 381,             /* "close tag (T_CLOSE_TAG)"  */
    T_WHITESPACE = 382,            /* "whitespace (T_WHITESPACE)"  */
    T_START_HEREDOC = 383,         /* "heredoc start (T_START_HEREDOC)"  */
    T_END_HEREDOC = 384,           /* "heredoc end (T_END_HEREDOC)"  */
    T_DOLLAR_OPEN_CURLY_BRACES = 385, /* "${ (T_DOLLAR_OPEN_CURLY_BRACES)"  */
    T_CURLY_OPEN = 386,            /* "{$ (T_CURLY_OPEN)"  */
    T_PAAMAYIM_NEKUDOTAYIM = 387,  /* ":: (T_PAAMAYIM_NEKUDOTAYIM)"  */
    T_NAMESPACE = 388,             /* "namespace (T_NAMESPACE)"  */
    T_NS_C = 389,                  /* "__NAMESPACE__ (T_NS_C)"  */
    T_NS_SEPARATOR = 390,          /* "\\ (T_NS_SEPARATOR)"  */
    T_ELLIPSIS = 391,              /* "... (T_ELLIPSIS)"  */
    T_COALESCE = 392,              /* "?? (T_COALESCE)"  */
    T_POW = 393,                   /* "** (T_POW)"  */
    T_POW_EQUAL = 394,             /* "**= (T_POW_EQUAL)"  */
    T_BAD_CHARACTER = 395,         /* "invalid character (T_BAD_CHARACTER)"  */
    T_ERROR = 396                  /* T_ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_APP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */
