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
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"
#include "cleanBuffer.c"
FILE *arq;
FILE *arq2;


/* Line 268 of yacc.c  */
#line 37 "yacc.y"

char str1 [1000];
char buffer [1000];


/* Line 268 of yacc.c  */
#line 89 "yacc.tab.c"

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
     COMPARATOR = 258,
     SYSTEMTOK = 259,
     OUTTOK = 260,
     PRINTLNTOK = 261,
     QUOTE = 262,
     INT = 263,
     DOUBLE = 264,
     CHAR = 265,
     FLOAT = 266,
     CLASS = 267,
     IF = 268,
     ELSE = 269,
     ELSEIF = 270,
     NUMBER = 271,
     NAME = 272,
     NAMECLASS = 273,
     QUOTEDTEXT = 274,
     DOT = 275,
     DOTCOMMA = 276,
     COMMA = 277,
     OPARENTHESES = 278,
     EPARENTHESES = 279,
     OBRACKET = 280,
     EBRACKET = 281
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 157 "yacc.tab.c"

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   73
=======
#define YYLAST   82
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
<<<<<<< HEAD
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  83
=======
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNRULES -- Number of states.  */
#define YYNSTATES  80
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

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
      25,    26
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    19,    22,
<<<<<<< HEAD
      25,    28,    31,    34,    35,    44,    50,    52,    54,    57,
      59,    61,    66,    69,    73,    77,    79,    82,    85,    89,
      91,    95,    97,    99,   101,   103,   105,   107,   111,   115,
     119,   123,   125,   127,   129,   131,   134,   137,   140,   143,
     145
=======
      25,    28,    31,    32,    41,    47,    49,    51,    54,    56,
      58,    63,    66,    70,    74,    76,    79,    82,    86,    88,
      92,    94,    96,    98,   100,   102,   104,   107,   111,   114,
     118,   121,   125,   128,   132,   134
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
<<<<<<< HEAD
      28,     0,    -1,    -1,    28,    29,    -1,    28,    30,    -1,
      28,    33,    -1,    28,    34,    -1,    28,    35,    -1,    28,
      37,    -1,    28,    38,    -1,    28,    41,    -1,    28,    46,
      -1,    28,    51,    -1,    -1,     4,    20,     5,    20,     6,
      23,    36,    24,    -1,    12,    18,    25,    31,    26,    -1,
      32,    -1,    37,    -1,    32,    37,    -1,    41,    -1,    32,
      -1,    18,    20,    35,    38,    -1,    35,    38,    -1,    17,
      20,    17,    -1,    17,    20,    35,    -1,    19,    -1,    46,
      38,    -1,    17,    38,    -1,    23,    39,    24,    -1,    40,
      -1,    39,    22,    40,    -1,    46,    -1,    17,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,     8,    17,    21,
      -1,     9,    17,    21,    -1,    10,    17,    21,    -1,    11,
      17,    21,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,     8,    17,    -1,     9,    17,    -1,    10,    17,    -1,
      11,    17,    -1,    17,    -1,    51,    22,    17,    -1
=======
      28,     0,    -1,    -1,    29,    28,    -1,    30,    28,    -1,
      33,    28,    -1,    34,    28,    -1,    35,    28,    -1,    37,
      28,    -1,    38,    28,    -1,    41,    28,    -1,    46,    28,
      -1,    -1,     4,    20,     5,    20,     6,    23,    36,    24,
      -1,    12,    18,    25,    31,    26,    -1,    32,    -1,    37,
      -1,    32,    37,    -1,    41,    -1,    32,    -1,    18,    20,
      35,    38,    -1,    35,    38,    -1,    17,    20,    17,    -1,
      17,    20,    35,    -1,    19,    -1,    41,    38,    -1,    17,
      38,    -1,    23,    39,    24,    -1,    40,    -1,    39,    22,
      40,    -1,    41,    -1,    17,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,     8,    17,    -1,     8,    17,    21,
      -1,     9,    17,    -1,     9,    17,    21,    -1,    10,    17,
      -1,    10,    17,    21,    -1,    11,    17,    -1,    11,    17,
      21,    -1,    17,    -1,    46,    22,    17,    -1
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    44,    44,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    59,    60,    69,    78,    79,    80,    85,
      86,    90,   106,   113,   117,   124,   133,   138,   145,   149,
     153,   161,   165,   172,   173,   174,   175,   179,   186,   193,
     200,   207,   208,   209,   210,   214,   221,   228,   236,   243,
     244
=======
       0,    43,    43,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    56,    57,    66,    75,    76,    77,    82,    83,
      87,   103,   110,   114,   121,   129,   133,   140,   144,   148,
     156,   160,   167,   168,   169,   170,   174,   178,   185,   189,
     196,   200,   207,   211,   218,   219
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMPARATOR", "SYSTEMTOK", "OUTTOK",
  "PRINTLNTOK", "QUOTE", "INT", "DOUBLE", "CHAR", "FLOAT", "CLASS", "IF",
  "ELSE", "ELSEIF", "NUMBER", "NAME", "NAMECLASS", "QUOTEDTEXT", "DOT",
  "DOTCOMMA", "COMMA", "OPARENTHESES", "EPARENTHESES", "OBRACKET",
  "EBRACKET", "$accept", "inicio", "print", "class", "class_content",
<<<<<<< HEAD
  "variables", "chamada_metodo_estatico", "chamada_metodo_parametro",
  "chamada_metodo", "String", "metodo", "ready_parameters_list",
  "parameters_list", "parameters", "typevariable", "inttypevariable",
  "doubletypevariable", "chartypevariable", "floattypevariable",
  "typeparameter", "inttypeparameter", "doubletypeparameter",
  "chartypeparameter", "floattypeparameter", "name_recursive", 0
=======
  "variables", "chamada_method_estatico", "chamada_method_parametro",
  "chamada_method", "String", "method", "ready_parameters_list",
  "parameters_list", "parameters", "type", "inttype", "doubletype",
  "chartype", "floattype", "name_recursive", 0
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    27,    28,    28,    28,    28,    28,    28,    28,    28,
<<<<<<< HEAD
      28,    28,    28,    29,    29,    30,    31,    31,    31,    32,
      32,    33,    34,    35,    35,    36,    37,    37,    38,    39,
      39,    40,    40,    41,    41,    41,    41,    42,    43,    44,
      45,    46,    46,    46,    46,    47,    48,    49,    50,    51,
      51
=======
      28,    28,    29,    29,    30,    31,    31,    31,    32,    32,
      33,    34,    35,    35,    36,    37,    37,    38,    39,    39,
      40,    40,    41,    41,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    45,    46,    46
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
       2,     2,     2,     0,     8,     5,     1,     1,     2,     1,
       1,     4,     2,     3,     3,     1,     2,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       3
=======
       2,     2,     0,     8,     5,     1,     1,     2,     1,     1,
       4,     2,     3,     3,     1,     2,     2,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     3,
       2,     3,     2,     3,     1,     3
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,     0,     1,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    34,    35,    36,    11,    41,    42,    43,    44,    12,
       0,    45,    46,    47,    48,     0,     0,    27,     0,     0,
       0,     0,     0,    32,     0,    29,    31,    22,    26,     0,
       0,    37,    38,    39,    40,     0,    23,    24,     0,     0,
      45,    46,    47,    48,     0,    28,    50,     0,     0,     0,
      16,    17,    19,     0,    21,    30,     0,    15,    18,     0,
      25,     0,    14
=======
       2,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     2,     2,     2,     2,     2,     2,     2,     2,    32,
      33,    34,    35,     2,     0,    36,    38,    40,    42,     0,
       0,    26,     0,    31,     0,    28,    30,     1,     3,     4,
       5,     6,     7,     2,     8,     9,    10,     2,     0,    11,
       0,    37,    39,    41,    43,     0,    22,    23,     0,     0,
       0,    27,    45,     0,     0,     0,    15,    16,    18,    20,
      29,     0,    14,    17,     0,    25,     0,    24,     0,    13
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     1,    12,    13,    69,    70,    14,    15,    16,    81,
      17,    37,    44,    45,    19,    20,    21,    22,    23,    46,
      25,    26,    27,    28,    29
=======
      -1,    45,    11,    12,    65,    66,    13,    14,    15,    78,
      16,    17,    34,    35,    18,    19,    20,    21,    22,    23
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -53
static const yytype_int8 yypact[] =
{
     -53,     2,   -53,   -15,    -9,    -8,     4,    20,    -2,   -16,
      -3,    18,   -53,   -53,   -53,   -53,    15,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,    15,   -53,   -53,   -53,   -53,    23,
      39,    25,    26,    27,    29,    28,    34,   -53,    35,    37,
      40,    42,    43,   -53,    12,   -53,   -53,   -53,   -53,    44,
      36,   -53,   -53,   -53,   -53,    22,    45,   -53,    45,    15,
     -53,   -53,   -53,   -53,    18,   -53,   -53,    56,    15,    38,
      32,   -53,   -53,    15,   -53,   -53,    46,   -53,   -53,    47,
     -53,    49,   -53
=======
#define YYPACT_NINF -49
static const yytype_int8 yypact[] =
{
      33,   -11,     6,    13,    14,    15,    -8,   -18,    16,    54,
      38,    33,    33,    33,    33,    33,    33,    33,    33,   -49,
     -49,   -49,   -49,    17,    28,    25,    26,    27,    32,    30,
      41,   -49,    42,   -49,    -2,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,    33,   -49,   -49,   -49,    33,    49,   -49,
      48,   -49,   -49,   -49,   -49,    64,    50,   -49,    50,    46,
      54,   -49,   -49,    70,    46,    51,    64,   -49,    46,   -49,
     -49,    55,   -49,   -49,    46,   -49,    60,   -49,    56,   -49
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
<<<<<<< HEAD
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -14,   -53,
     -52,    -1,   -53,     3,     8,   -53,   -53,   -53,   -53,     0,
     -53,   -53,   -53,   -53,   -53
=======
     -49,     1,   -49,   -49,   -49,   -49,   -49,   -49,   -26,   -49,
     -48,    -7,   -49,    22,    -6,   -49,   -49,   -49,   -49,   -49
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
<<<<<<< HEAD
      18,    24,     2,    71,    36,    30,     3,    11,    31,    32,
       4,     5,     6,     7,     8,    47,    35,    38,    78,     9,
      10,    33,    57,    48,    59,    11,    39,    40,    41,    42,
       4,     5,     6,     7,    64,    43,    65,    34,    11,    68,
      39,    40,    41,    42,    50,    49,    51,    52,    53,    68,
      54,    56,    58,    55,    60,    73,    67,    61,    74,    62,
      63,    66,    76,    72,    77,    36,    80,    75,     0,    79,
      73,     0,    48,    82
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-53))
=======
      31,    10,    30,    36,    57,     9,    59,    67,    43,    24,
      29,    47,    38,    39,    40,    41,    42,    44,    73,    46,
      60,     1,    61,    25,    49,     2,     3,     4,     5,     6,
      26,    27,    28,    50,     7,     8,    32,     1,    37,    48,
       9,     2,     3,     4,     5,     6,    51,    52,    53,    68,
       7,     8,    69,    54,    36,    55,     9,    31,    56,    58,
      74,    75,     2,     3,     4,     5,    62,    75,    63,     9,
      30,    33,     2,     3,     4,     5,    71,    72,    76,    77,
      79,    64,    70
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-49))
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
<<<<<<< HEAD
       1,     1,     0,    55,    20,    20,     4,    23,    17,    17,
       8,     9,    10,    11,    12,    16,    18,    20,    70,    17,
      18,    17,    36,    24,    38,    23,     8,     9,    10,    11,
       8,     9,    10,    11,    22,    17,    24,    17,    23,    17,
       8,     9,    10,    11,     5,    22,    21,    21,    21,    17,
      21,    17,    17,    25,    17,    55,    20,    17,    59,    17,
      17,    17,     6,    55,    26,    20,    19,    64,    -1,    23,
      70,    -1,    73,    24
=======
       7,     0,    20,     9,    30,    23,    32,    55,    15,    20,
      18,    18,    11,    12,    13,    14,    15,    16,    66,    18,
      22,     4,    24,    17,    23,     8,     9,    10,    11,    12,
      17,    17,    17,     5,    17,    18,    20,     4,     0,    22,
      23,     8,     9,    10,    11,    12,    21,    21,    21,    55,
      17,    18,    59,    21,    60,    25,    23,    64,    17,    17,
      66,    68,     8,     9,    10,    11,    17,    74,    20,    23,
      20,    17,     8,     9,    10,    11,     6,    26,    23,    19,
      24,    17,    60
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    28,     0,     4,     8,     9,    10,    11,    12,    17,
      18,    23,    29,    30,    33,    34,    35,    37,    38,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      20,    17,    17,    17,    17,    18,    20,    38,    20,     8,
       9,    10,    11,    17,    39,    40,    46,    38,    38,    22,
       5,    21,    21,    21,    21,    25,    17,    35,    17,    35,
      17,    17,    17,    17,    22,    24,    17,    20,    17,    31,
      32,    37,    41,    46,    38,    40,     6,    26,    37,    23,
      19,    36,    24
=======
       0,     4,     8,     9,    10,    11,    12,    17,    18,    23,
      28,    29,    30,    33,    34,    35,    37,    38,    41,    42,
      43,    44,    45,    46,    20,    17,    17,    17,    17,    18,
      20,    38,    20,    17,    39,    40,    41,     0,    28,    28,
      28,    28,    28,    38,    28,    28,    28,    38,    22,    28,
       5,    21,    21,    21,    21,    25,    17,    35,    17,    35,
      22,    24,    17,    20,    17,    31,    32,    37,    41,    38,
      40,     6,    26,    37,    41,    38,    23,    19,    36,    24
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
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
        case 14:

/* Line 1806 of yacc.c  */
#line 62 "yacc.y"
    {
	printf("printf reconhecido");
	fprintf(arq,"printf(%s);",str1);
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 70 "yacc.y"
    {
		printf("reconheceu o class");
		strcpy(buffer, yytext);
		fprintf(arq2,"typedef struct %s {}_%s",buffer,buffer);
	}
    break;

<<<<<<< HEAD
  case 21:

/* Line 1806 of yacc.c  */
#line 91 "yacc.y"
=======
  case 20:

/* Line 1806 of yacc.c  */
#line 88 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
		printf("reconheceu a chamada de method estático com parametros");			
	}
    break;

<<<<<<< HEAD
  case 22:

/* Line 1806 of yacc.c  */
#line 107 "yacc.y"
=======
  case 21:

/* Line 1806 of yacc.c  */
#line 104 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
		printf("reconheceu a chamada de methods com parametros");			
	}
    break;

<<<<<<< HEAD
  case 23:

/* Line 1806 of yacc.c  */
#line 114 "yacc.y"
=======
  case 22:

/* Line 1806 of yacc.c  */
#line 111 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
		printf("reconheceu a chamada de methods");			
	}
    break;

<<<<<<< HEAD
  case 24:

/* Line 1806 of yacc.c  */
#line 118 "yacc.y"
=======
  case 23:

/* Line 1806 of yacc.c  */
#line 115 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
		printf("reconheceu a chamada de methods");			
	}
    break;

<<<<<<< HEAD
  case 25:

/* Line 1806 of yacc.c  */
#line 126 "yacc.y"
=======
  case 24:

/* Line 1806 of yacc.c  */
#line 123 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    { strcpy(buffer, yytext);
	  strcat(str1, buffer);
	}
    break;

<<<<<<< HEAD
  case 26:

/* Line 1806 of yacc.c  */
#line 135 "yacc.y"
=======
  case 25:

/* Line 1806 of yacc.c  */
#line 130 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
		printf("method reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 27:

/* Line 1806 of yacc.c  */
#line 139 "yacc.y"
=======
  case 26:

/* Line 1806 of yacc.c  */
#line 134 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
		printf("method reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 29:

/* Line 1806 of yacc.c  */
#line 150 "yacc.y"
=======
  case 28:

/* Line 1806 of yacc.c  */
#line 145 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {	
	printf("parameter list reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 30:

/* Line 1806 of yacc.c  */
#line 154 "yacc.y"
=======
  case 29:

/* Line 1806 of yacc.c  */
#line 149 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("multiple parameter list reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 31:

/* Line 1806 of yacc.c  */
#line 162 "yacc.y"
=======
  case 30:

/* Line 1806 of yacc.c  */
#line 157 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("type parameter reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 32:

/* Line 1806 of yacc.c  */
#line 166 "yacc.y"
=======
  case 31:

/* Line 1806 of yacc.c  */
#line 161 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("NAME reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 37:

/* Line 1806 of yacc.c  */
#line 180 "yacc.y"
    {
	 fprintf(arq,"%s\n",(yyvsp[(1) - (3)]));
	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 187 "yacc.y"
    {

	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 194 "yacc.y"
    {

	}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 201 "yacc.y"
    {

	}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 215 "yacc.y"
=======
  case 36:

/* Line 1806 of yacc.c  */
#line 175 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("%s %s ", (yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));
	}
    break;

<<<<<<< HEAD
  case 46:

/* Line 1806 of yacc.c  */
#line 222 "yacc.y"
=======
  case 37:

/* Line 1806 of yacc.c  */
#line 179 "yacc.y"
    {
	printf("INT NAME reconhecido\n");
	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 186 "yacc.y"
    {
	printf("DOUBLE NAME reconhecido\n");
	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 190 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("DOUBLE NAME reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 47:

/* Line 1806 of yacc.c  */
#line 229 "yacc.y"
=======
  case 40:

/* Line 1806 of yacc.c  */
#line 197 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("CHAR NAME reconhecido\n");
	}
    break;

<<<<<<< HEAD
  case 48:

/* Line 1806 of yacc.c  */
#line 237 "yacc.y"
=======
  case 41:

/* Line 1806 of yacc.c  */
#line 201 "yacc.y"
    {
	printf("CHAR NAME reconhecido\n");
	}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 208 "yacc.y"
    {
	printf("FLOAT NAME reconhecido\n");
	}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 212 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
    {
	printf("FLOAT NAME reconhecido\n");
	}
    break;



/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 1648 "yacc.tab.c"
=======
#line 1637 "yacc.tab.c"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
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
<<<<<<< HEAD
#line 247 "yacc.y"
=======
#line 222 "yacc.y"
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414


int yywrap(void){
	return 1;
}

int yyerror(char *s){
	printf("%s\n", s);
}

int main(int argc, char** argv){
	
	FILE *input = fopen("Aluno.java", "r");
	if(!input){
		fprintf(stderr,"arquivo nao encontrado");
		return -1;
	}
	yyin = input;
	do{
		arq = fopen ("teste.c","w");//criar arquivo com permissão de escrita
		arq2 = fopen ("teste.h","w");//criar arquivo com permissão de escrita
		fflush (arq);//limpa o buffer 
		fflush (arq2);//limpa o buffer 
	
		fprintf(arq, "#include <stdio.h> \n");
		fprintf(arq, "#include <stdio.h> \n");
		fprintf(arq, "int main (){ \n");

		yyparse();

		fprintf(arq, "\n}");

		fclose(arq);//nao pode mais escrever
		fclose(arq2);//nao pode mais escreve	

	}while(!feof(yyin));

	return 0;

}


