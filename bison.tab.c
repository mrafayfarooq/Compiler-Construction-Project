
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
#line 1 "bison.y"

#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;
void yyerror(const char *s);
extern int lineNumber;



/* Line 189 of yacc.c  */
#line 93 "bison.tab.c"

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
     STRING = 258,
     INTEGER = 259,
     CHARACTER = 260,
     FLOATPOINT = 261,
     IDENTIFIER = 262,
     INT = 263,
     CHAR = 264,
     FLOAT = 265,
     VOID = 266,
     COMMA = 267,
     OPENINGROUNDBRACKET = 268,
     CLOSINGROUNDBRACKET = 269,
     OPENINGCURLYBRACKET = 270,
     CLOSINGCURLYBRACKET = 271,
     CLOSINGSQUAREBRACKET = 272,
     OPENINGSQUAREBRACKET = 273,
     DEFAULT = 274,
     WHILE = 275,
     BREAK = 276,
     CONTINUE = 277,
     IF = 278,
     FOR = 279,
     SWITCH = 280,
     RETURN = 281,
     DO = 282,
     CASE = 283,
     CONDITIONALOPERATOR = 284,
     MULTIPLY = 285,
     COLON = 286,
     INCREAMENT = 287,
     DECREAMENT = 288,
     GREATERTHAN = 289,
     LESSTHAN = 290,
     GREATERTHANEQUAL = 291,
     ISNOTEQUALTO = 292,
     LESSTHANEQUAL = 293,
     ISEQUALTO = 294,
     ENDOFSTATEMENT = 295,
     ELSE = 296,
     THAN = 297,
     SUB = 298,
     ADD = 299,
     MODULUS = 300,
     DIVIDE = 301,
     MODULUSANDASSIGN = 302,
     DIVIDEANDASSIGN = 303,
     MULTIPLYANDASSIGN = 304,
     SUBANDASSIGN = 305,
     ADDANDASSIGN = 306,
     ASSIGN = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "bison.y"

	int ival;
	float fval;
	char *sval;
	char charval;
	



/* Line 214 of yacc.c  */
#line 191 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 118 "bison.y"

int size=0;
string scoper="Global";
string prev_scope="Global";
int reported=0;
int iWasHere=0;
int foundedArray=0;
int foundedArrayIndex=0;
int findme=0;
char isFunction=' ';
string myType=" ";
string assignmentOp=" ";
int myArraySize=-1;
bool check=false;
int param=0;
int savedFunction=0;
string theLex=" ";
int go=0;
int iFollowedOtherPath=0;
int justPassedHere=0;
string returnType;



class myClass{
public:
string lexeme;
string type;
string scope;
int arraySize;
string functionName;
int lineNumbers;
int parameterslength;




void initArray()
{
		lexeme=" ";
		type=" ";
		scope=scoper;
		arraySize=-1;
		functionName=" ";
		lineNumbers=lineNumber;
		parameterslength=0;
		
	
}




void printArray(){
		if(arraySize==-1)
		cout<<lexeme<<"\t\t"<<type<<"\t\t"<<scope<<"\t\t"<<" "<<"\t\t"<<functionName<<"\t\t"<<lineNumbers<<endl;
		else
		cout<<lexeme<<"\t\t"<<type<<"\t\t"<<scope<<"\t\t"<<arraySize<<"\t\t"<<functionName<<"\t\t"<<lineNumbers<<endl;
}
};
myClass tabElem[500];




class Stack {
   int MaxStack;
   int EmptyStack;
   int top;
   myClass* items;
public:
   Stack(int);
   ~Stack();
   void push(myClass);
   myClass pop();
   int empty();
   int full();
};
Stack::Stack(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = EmptyStack;
   items = new myClass[MaxStack];
}

Stack::~Stack() {delete[] items;}

void Stack::push(myClass c) {
   items[++top] = c;
}

myClass Stack::pop() {
   return items[top--];
}

int Stack::full()  {
   return top + 1 == MaxStack;
}

int Stack::empty()  {
   return top == EmptyStack;
}

Stack s(20);



class Queue {
   int MaxStack;
   int EmptyStack;
   int top;
   string* items;
public:
   Queue(int);
   ~Queue();
   void Add(string);
   void Print();
   string Delete();
   int empty();
   int full();
};
Queue::Queue(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = -1;
   items = new string[MaxStack];
}

Queue::~Queue() {delete[] items;}

void Queue::Add(string item)
{
             if(EmptyStack == MaxStack-1)
            {
                  cout<<endl<< "Queue is full";
                   return;
            }
 
            EmptyStack++;
            items[EmptyStack] = item;
 
             if( top == -1 )
                  top = 0;
}



string Queue::Delete()
{
    if(top == -1)
    {
                  cout<<endl<< "Queue is empty";
                   return NULL;
    }
 
    string data = items[top];
 
    if( top == EmptyStack)
                  top = EmptyStack = -1;
    else
                  top++;
 
        return data;
}
 


int Queue::full()  {
   return top + 1 == MaxStack;
}

int Queue::empty()  {
   return top == EmptyStack;
}

void Queue::Print(){

	for(int i=0;i<=EmptyStack;i++){
		
		cout<<items[i]<<endl;
	}
}

Queue qu(20);







class StackForScope {
   int MaxStack;
   int EmptyStack;
   int top;
   string* items;
public:
   StackForScope(int);
   ~StackForScope();
   void push(string);
   string pop();
   int empty();
   int full();
};
StackForScope::StackForScope(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = EmptyStack;
   items = new string[MaxStack];
}

StackForScope::~StackForScope() {delete[] items;}

void StackForScope::push(string c) {
   items[++top] = c;
}

string StackForScope::pop() {
   return items[top--];
}

int StackForScope::full()  {
   return top + 1 == MaxStack;
}

int StackForScope::empty()  {
   return top == EmptyStack;
}

StackForScope sc(20);


string findType(int size,string lexeme)
{
	for(int i=0;i<size;i++)
	{
		if(tabElem[i].lexeme==lexeme)
		{
			
			return tabElem[i].type;
		}
	}
	yyerror("The Identifier Was Not Declared.");
	return "void";
}

bool isDecArray(int size,string lexeme)
{
	for(int i=0;i<=size;i++)
	{
		if(tabElem[i].lexeme==lexeme)
		{

			if(tabElem[i].arraySize>=0)
				return true;
			else
				return false;
		}
	}
}




void PrintAll(){
	cout<<"Lexeme"<<"\t	"<<"Type"<<"\t	"<<"Scope"<<"\t	"<<"Array Size"<<"\t"<<"Function"<<"\t"<<"Line Number"<<endl;
	cout<<"------"<<"\t	"<<"----"<<"\t	"<<"-----"<<"\t	"<<"----------"<<"\t"<<"--------"<<"\t"<<"------------"<<endl;
	
	for(int i=0;i<size;i++)
	{
		tabElem[i].printArray();
	}
}

void SetAll(){
	for(int i=0;i<500;i++)
	{
		tabElem[i].initArray();
	}
}
string convertInt(int number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
string convertFloat(float number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
char * conversionConstChar(string type){
		string s1 = type;
		char *s2 = new char[s1.size()+1];
		strcpy(s2, s1.c_str());
		return s2;
}
		
void findFunctionAndGivePara(string lexeme,int size,string *returnType)
{

	for(int i=0;i<size;i++){
		if(tabElem[i].lexeme==lexeme){
			for(int j=i+1;j<=(tabElem[i].parameterslength);j++){
					
				if(tabElem[j].scope==tabElem[i].lexeme ){
					string tk=qu.Delete();
					if(tabElem[j].type!=tk)
					{
						yyerror("The Function parameter type does not match.");
						*returnType="typeerr";
						//string err="typeerr";
						//return "typeerr";
					}
					
					//cout<<tabElem[j].lexeme<<endl;
				}
				
			}
			*returnType=tabElem[i].type;
			
			
		}
	}
}

bool isFunc(int size, string lexeme){
	for(int i=0;i<size;i++){
		if(tabElem[i].lexeme==lexeme){
			return tabElem[i].functionName=="Y";
		}
	}
}

bool findID(int size,string lexeme,string scoper){
	for(int i=0;i<=size;i++)
	{
		if(tabElem[i].lexeme==lexeme && tabElem[i].scope==scoper){
			return true;
		}
	}
	return false;
}



/* Line 264 of yacc.c  */
#line 551 "bison.tab.c"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   392

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    13,    14,    16,    19,
      20,    25,    28,    31,    33,    36,    38,    40,    42,    44,
      46,    48,    51,    54,    55,    59,    62,    63,    67,    71,
      75,    78,    81,    84,    87,    91,    95,    98,   100,   101,
     105,   109,   113,   114,   117,   119,   120,   123,   127,   128,
     131,   134,   135,   137,   141,   146,   148,   152,   155,   159,
     160,   163,   165,   166,   169,   171,   174,   177,   180,   182,
     185,   188,   189,   191,   193,   195,   197,   199,   201,   206,
     210,   212,   215,   217,   224,   227,   228,   234,   240,   243,
     246,   249,   252,   255,   258,   261,   267,   275,   285,   288,
     293,   294,   297,   301,   302,   304,   308,   312,   315,   319,
     323,   324,   327,   331,   335,   339,   343,   344,   347,   351,
     355,   356,   359,   363,   367,   371,   372,   374,   376,   378,
     380,   382,   384,   386,   388,   390,   392,   394,   397,   400,
     403,   408,   411,   414,   417,   418,   422,   425,   428,   431,
     435,   439,   440,   442
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    58,    55,    56,    -1,    -1,    58,
      57,    56,    -1,    -1,    59,    -1,    74,    40,    -1,    -1,
      63,    64,    60,    61,    -1,    64,    62,    -1,    72,    86,
      -1,    86,    -1,    72,    86,    -1,    86,    -1,    11,    -1,
       9,    -1,     8,    -1,    10,    -1,    65,    -1,    70,    65,
      -1,     7,    66,    -1,    -1,    13,    67,    68,    -1,    18,
      69,    -1,    -1,    64,    14,    66,    -1,    82,    14,    66,
      -1,    82,     1,    66,    -1,    14,    66,    -1,     1,    66,
      -1,    17,    66,    -1,     1,    66,    -1,     4,    17,    66,
      -1,     4,     1,    66,    -1,    30,    71,    -1,    70,    -1,
      -1,    74,    40,    73,    -1,    74,     1,    73,    -1,    74,
      40,    73,    -1,    -1,    63,    75,    -1,    76,    -1,    -1,
      78,    77,    -1,    12,    78,    77,    -1,    -1,    64,    79,
      -1,    52,    80,    -1,    -1,   113,    -1,    15,    81,    16,
      -1,    15,    81,    12,    16,    -1,    80,    -1,    81,    12,
      80,    -1,    84,    83,    -1,    12,    84,    83,    -1,    -1,
      63,    85,    -1,    64,    -1,    -1,    15,    87,    -1,    16,
      -1,    89,    16,    -1,    72,    88,    -1,    89,    16,    -1,
      16,    -1,    91,    90,    -1,    91,    90,    -1,    -1,    92,
      -1,    86,    -1,    93,    -1,    94,    -1,    98,    -1,    96,
      -1,    28,   113,    31,    91,    -1,    19,    31,    91,    -1,
      40,    -1,   101,    40,    -1,     1,    -1,    23,    13,   101,
      14,    91,    95,    -1,    41,    91,    -1,    -1,    25,    13,
     101,    14,    91,    -1,    25,     1,   101,    14,    91,    -1,
      22,    40,    -1,    22,     1,    -1,    21,    40,    -1,    21,
       1,    -1,    26,    97,    -1,   101,    40,    -1,     1,    40,
      -1,    20,    13,   101,    14,    91,    -1,    27,    91,    20,
      13,   101,    14,    40,    -1,    24,    13,   101,    40,   101,
      40,   101,    14,    91,    -1,   104,   100,    -1,    29,   101,
      31,    99,    -1,    -1,   103,   102,    -1,    12,   103,   102,
      -1,    -1,    99,    -1,   114,   112,   103,    -1,   114,     1,
     103,    -1,   106,   105,    -1,    39,   106,   105,    -1,    37,
     106,   105,    -1,    -1,   108,   107,    -1,    35,   108,   107,
      -1,    34,   108,   107,    -1,    38,   108,   107,    -1,    36,
     108,   107,    -1,    -1,   110,   109,    -1,    43,   110,   109,
      -1,    44,   110,   109,    -1,    -1,   114,   111,    -1,    30,
     114,   111,    -1,    46,   114,   111,    -1,    45,   114,   111,
      -1,    -1,    52,    -1,    51,    -1,    50,    -1,    49,    -1,
      48,    -1,    47,    -1,     4,    -1,     5,    -1,     6,    -1,
       3,    -1,   115,    -1,    32,   114,    -1,    33,   114,    -1,
     120,   116,    -1,    18,   101,    17,   116,    -1,    13,   117,
      -1,    32,   116,    -1,    33,   116,    -1,    -1,   118,    14,
     116,    -1,    14,   116,    -1,     1,   116,    -1,   108,   119,
      -1,    12,   108,   119,    -1,     1,   108,   119,    -1,    -1,
       7,    -1,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   476,   476,   475,   487,   486,   492,   496,   497,   501,
     501,   524,   530,   531,   536,   537,   541,   545,   549,   553,
     560,   563,   571,   617,   617,   624,   627,   635,   636,   637,
     638,   639,   644,   647,   648,   651,   656,   659,   660,   664,
     665,   669,   670,   674,   678,   679,   682,   686,   687,   691,
     695,   696,   699,   699,   699,   700,   700,   705,   708,   709,
     713,   716,   717,   722,   726,   730,   734,   740,   744,   751,
     757,   761,   766,   767,   768,   769,   770,   771,   775,   805,
     810,   811,   812,   816,   823,   824,   827,   836,   840,   841,
     842,   843,   844,   850,   851,   855,   864,   872,   885,   891,
     892,   896,   902,   903,   907,   910,   950,   954,   992,  1030,
    1068,  1074,  1113,  1154,  1192,  1230,  1268,  1274,  1323,  1361,
    1400,  1406,  1411,  1412,  1413,  1414,  1418,  1419,  1420,  1421,
    1422,  1423,  1427,  1432,  1437,  1442,  1450,  1454,  1470,  1488,
    1555,  1570,  1574,  1575,  1576,  1582,  1587,  1590,  1594,  1602,
    1610,  1611,  1616,  1638
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "INTEGER", "CHARACTER",
  "FLOATPOINT", "IDENTIFIER", "INT", "CHAR", "FLOAT", "VOID", "COMMA",
  "OPENINGROUNDBRACKET", "CLOSINGROUNDBRACKET", "OPENINGCURLYBRACKET",
  "CLOSINGCURLYBRACKET", "CLOSINGSQUAREBRACKET", "OPENINGSQUAREBRACKET",
  "DEFAULT", "WHILE", "BREAK", "CONTINUE", "IF", "FOR", "SWITCH", "RETURN",
  "DO", "CASE", "CONDITIONALOPERATOR", "MULTIPLY", "COLON", "INCREAMENT",
  "DECREAMENT", "GREATERTHAN", "LESSTHAN", "GREATERTHANEQUAL",
  "ISNOTEQUALTO", "LESSTHANEQUAL", "ISEQUALTO", "ENDOFSTATEMENT", "ELSE",
  "THAN", "SUB", "ADD", "MODULUS", "DIVIDE", "MODULUSANDASSIGN",
  "DIVIDEANDASSIGN", "MULTIPLYANDASSIGN", "SUBANDASSIGN", "ADDANDASSIGN",
  "ASSIGN", "$accept", "transitionunit", "$@1", "transitionunit_a", "$@2",
  "externaldeclaration", "functiondefinition", "$@3",
  "functiondefinition_a", "functiondefinition_b", "typespecifier",
  "declarator", "directdeclarator", "directdeclarator_a", "$@4",
  "directdeclarator_b", "directdeclarator_c", "pointer", "pointer_a",
  "declarationlist", "declarationlist_a", "declaration", "declaration_a",
  "initdeclaratorlist", "initdeclaratorlist_a", "initdeclarator",
  "initdeclarator_a", "initializer", "initializerlist", "parameterlist",
  "parameterlist_a", "parameterdeclaration", "parameterdeclaration_a",
  "compoundstatement", "compoundstatement_a", "compoundstatement_b",
  "statementlist", "statementlist_a", "statement", "labeledstatement",
  "expressionstatement", "selectionstatement", "selectionstatement_a",
  "jumpstatement", "jumpstatement_a", "iterationstatement",
  "conditionalexpression", "conditionalexpression_a", "expression",
  "expression_a", "assignmentexpression", "equalityexpression",
  "equalityexpression_a", "relationalexpression", "relationalexpression_a",
  "additiveexpression", "additiveexpression_a", "multiplicativeexpression",
  "multiplicativeexpression_a", "assignmentoperator", "constant",
  "unaryexpression", "postfixexpression", "postfixexpression_a",
  "postfixexpression_b", "argumentexpressionlist",
  "argumentexpressionlist_a", "primaryexpression", 0
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    57,    56,    56,    58,    58,    60,
      59,    59,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    67,    66,    66,    66,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    77,    77,    78,
      79,    79,    80,    80,    80,    81,    81,    82,    83,    83,
      84,    85,    85,    86,    87,    87,    87,    88,    88,    89,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    94,    95,    95,    94,    94,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    98,    99,   100,
     100,   101,   102,   102,   103,   103,   103,   104,   105,   105,
     105,   106,   107,   107,   107,   107,   107,   108,   109,   109,
     109,   110,   111,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   113,   113,   113,   113,   114,   114,   114,   115,
     116,   116,   116,   116,   116,   117,   117,   117,   118,   119,
     119,   119,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     3,     0,     1,     2,     0,
       4,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     3,     2,     0,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     2,     1,     0,     3,
       3,     3,     0,     2,     1,     0,     2,     3,     0,     2,
       2,     0,     1,     3,     4,     1,     3,     2,     3,     0,
       2,     1,     0,     2,     1,     2,     2,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     2,     1,     6,     2,     0,     5,     5,     2,     2,
       2,     2,     2,     2,     2,     5,     7,     9,     2,     4,
       0,     2,     3,     0,     1,     3,     3,     2,     3,     3,
       0,     2,     3,     3,     3,     3,     0,     2,     3,     3,
       0,     2,     3,     3,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       4,     2,     2,     2,     0,     3,     2,     2,     2,     3,
       3,     0,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,    18,    17,    19,    16,    38,     0,     2,     7,
      45,     0,    20,     0,     0,    23,     0,    22,    37,    36,
       1,     6,     9,    43,    44,    48,     0,    11,    45,     0,
       0,    15,    21,     8,     0,    26,     0,    26,    25,     3,
       4,     0,     0,    49,     0,    46,    82,   135,   132,   133,
     134,   152,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,    73,    63,     0,
       0,    72,    74,    75,    77,    76,   104,     0,   103,   100,
     110,   116,   120,   153,     0,   136,   144,    51,    14,    42,
      42,    26,    26,    62,     0,    24,     0,    59,    33,    26,
      26,    32,     6,     0,    50,    52,    10,     0,    13,    48,
       0,     0,    91,    90,    89,    88,     0,     0,     0,     0,
       0,    92,     0,     0,     0,   137,   138,    68,    66,     0,
      65,    69,     0,    81,     0,   101,     0,    98,     0,     0,
     107,     0,     0,     0,     0,   111,     0,     0,   117,     0,
       0,     0,     0,   131,   130,   129,   128,   127,   126,   121,
       0,     0,     0,   144,   144,   139,    40,     0,    39,    31,
      30,    61,    60,    26,    26,    26,     0,    57,    35,    34,
       5,    55,     0,    12,    47,    79,     0,     0,     0,     0,
       0,    94,    93,     0,     0,    67,    70,   103,     0,   110,
     125,   110,   116,   116,   116,   116,   120,   120,   106,   125,
     125,   125,   105,   144,   144,     0,   141,     0,     0,   142,
     143,    42,    27,    29,    28,    59,     0,    53,     0,     0,
       0,     0,     0,     0,    78,   102,     0,   109,   108,   113,
     112,   115,   114,   118,   119,   122,   124,   123,   147,   146,
       0,     0,   148,   144,   144,    41,    58,    54,    56,    95,
      85,     0,    87,    86,     0,    99,     0,     0,   145,   140,
       0,    83,     0,     0,   150,   149,    84,     0,    96,     0,
      97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    21,    39,   102,    40,     9,    42,   106,    27,
      28,    11,    12,    17,    34,    95,    38,    13,    19,    29,
     166,    14,    23,    24,    45,    25,    43,   104,   182,    96,
     177,    97,   172,    67,    68,   128,    69,   131,    70,    71,
      72,    73,   271,    74,   121,    75,    76,   137,    77,   135,
      78,    79,   140,    80,   145,    81,   148,    82,   159,   160,
      83,    84,    85,   165,   216,   217,   252,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
     134,    27,  -142,  -142,  -142,  -142,    -3,    48,  -142,  -142,
      26,   197,  -142,    82,    -6,  -142,    34,  -142,  -142,  -142,
    -142,   134,     3,  -142,  -142,    72,   238,  -142,    26,    95,
      10,  -142,  -142,  -142,    92,    27,    13,    27,  -142,  -142,
    -142,   187,   197,  -142,    26,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,    61,   112,    24,    28,   161,   163,    41,
     133,   352,   156,   150,   150,  -142,   276,  -142,  -142,   153,
     314,  -142,  -142,  -142,  -142,  -142,  -142,   139,   173,   160,
      77,   252,    54,  -142,   186,  -142,   145,   144,  -142,   302,
     302,    27,    27,    26,   190,  -142,    62,   189,  -142,    27,
      27,  -142,   134,   187,  -142,  -142,  -142,    95,  -142,    72,
     352,   150,  -142,  -142,  -142,  -142,   150,   150,   150,   150,
     170,  -142,   179,   193,   209,  -142,  -142,  -142,  -142,   236,
    -142,  -142,   314,  -142,   150,  -142,   150,  -142,   150,   150,
    -142,   150,   150,   150,   150,  -142,   150,   150,  -142,   150,
     150,   150,   150,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
     150,   114,   150,   145,   145,  -142,  -142,   215,  -142,  -142,
    -142,  -142,  -142,    27,    27,    27,   302,  -142,  -142,  -142,
    -142,  -142,    65,  -142,  -142,  -142,   242,   253,   228,   255,
     262,  -142,  -142,   280,   352,  -142,  -142,   173,   258,    77,
      78,    77,   252,   252,   252,   252,    54,    54,  -142,    78,
      78,    78,  -142,   145,   145,   172,  -142,   291,   277,  -142,
    -142,   302,  -142,  -142,  -142,   189,   269,  -142,   352,   352,
     150,   352,   352,   150,  -142,  -142,   150,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
     150,   150,  -142,   145,   145,  -142,  -142,  -142,  -142,  -142,
     265,   267,  -142,  -142,   300,  -142,   172,   172,  -142,  -142,
     352,  -142,   150,   286,  -142,  -142,  -142,   313,  -142,   352,
    -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   226,  -142,   331,  -142,  -142,  -142,  -142,
       5,    18,   319,   -25,  -142,  -142,  -142,   337,  -142,    15,
     -86,   -10,  -142,  -142,   235,   301,  -142,   -97,  -142,  -142,
     123,   174,  -142,     2,  -142,  -142,   283,   219,   -61,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,   116,  -142,   -58,   164,
    -113,  -142,    -2,   -69,   120,  -124,   -55,    81,   -79,  -142,
     -38,   -56,  -142,  -141,  -142,  -142,   -16,  -142
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -152
static const yytype_int16 yytable[] =
{
     123,    30,   122,   105,   168,    10,   181,   125,   126,   132,
      98,    89,   101,    31,    99,   -51,    30,   202,   203,   204,
     205,   197,   219,   220,   124,   112,    10,     6,    22,   114,
     100,    88,    30,     1,    33,    35,   208,   215,    36,    93,
      15,    66,   118,   -51,   108,    16,    87,   212,    20,   185,
      90,    37,    94,   186,   119,    41,     6,   107,   187,   188,
     189,   190,    87,   174,   113,   105,   169,   170,   115,   199,
     201,   132,   248,   249,   178,   179,   175,   226,   198,   167,
     167,   227,   200,   200,    44,   200,   200,   200,   200,     1,
     200,   200,   110,    91,   209,   210,   211,   146,   147,     1,
       2,     3,     4,     5,   218,   200,    92,    10,   150,   183,
      26,   171,   268,   269,   138,   213,   139,    47,    48,    49,
      50,    51,     6,   151,   152,   111,   266,   267,   214,   258,
     245,   246,   247,   234,   120,   255,    47,    48,    49,    50,
      51,     1,     2,     3,     4,     5,    63,    64,   222,   223,
     224,   243,   244,    47,    48,    49,    50,    51,   161,    47,
      48,    49,    50,   162,     6,    63,    64,   259,   260,   130,
     262,   263,   261,   250,   116,   264,   117,   163,   164,   133,
     200,    93,    63,    64,   251,   134,  -151,   149,   105,   136,
      47,    48,    49,    50,   200,   200,    41,   237,  -125,   238,
    -125,   176,   103,  -125,   173,     2,     3,     4,     5,   276,
     191,   167,    26,   193,   277,  -125,   150,  -125,   280,   192,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   206,   207,  -125,
    -125,   151,   152,   153,   154,   155,   156,   157,   158,    46,
     194,    47,    48,    49,    50,    51,     2,     3,     4,     5,
     274,   275,   195,    26,    52,   221,   228,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,   229,   230,   231,
      63,    64,    47,    48,    49,    50,   232,    46,    65,    47,
      48,    49,    50,    51,   103,   257,   141,   142,   143,   236,
     144,    26,   127,   233,   254,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   253,   270,   272,    63,    64,
       2,     3,     4,     5,   273,    46,    65,    47,    48,    49,
      50,    51,   239,   240,   241,   242,   278,   279,   180,    26,
     -71,     8,    32,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    18,   184,   109,    63,    64,   256,   129,
     225,   196,   265,    46,    65,    47,    48,    49,    50,    51,
       0,   235,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,    63,    64,     0,     0,     0,     0,
       0,     0,    65
};

static const yytype_int16 yycheck[] =
{
      61,    11,    60,    41,    90,     0,   103,    63,    64,    70,
      35,     1,    37,    11,     1,    12,    26,   141,   142,   143,
     144,   134,   163,   164,    62,     1,    21,    30,    10,     1,
      17,    29,    42,     7,    40,     1,   149,   161,     4,    34,
      13,    26,     1,    40,    42,    18,    28,   160,     0,   110,
      40,    17,    34,   111,    13,    52,    30,    42,   116,   117,
     118,   119,    44,     1,    40,   103,    91,    92,    40,   138,
     139,   132,   213,   214,    99,   100,    14,    12,   136,    89,
      90,    16,   138,   139,    12,   141,   142,   143,   144,     7,
     146,   147,    31,     1,   150,   151,   152,    43,    44,     7,
       8,     9,    10,    11,   162,   161,    14,   102,    30,   107,
      15,    93,   253,   254,    37,     1,    39,     3,     4,     5,
       6,     7,    30,    45,    46,    13,   250,   251,    14,   226,
     209,   210,   211,   194,     1,   221,     3,     4,     5,     6,
       7,     7,     8,     9,    10,    11,    32,    33,   173,   174,
     175,   206,   207,     3,     4,     5,     6,     7,    13,     3,
       4,     5,     6,    18,    30,    32,    33,   228,   229,    16,
     231,   232,   230,     1,    13,   233,    13,    32,    33,    40,
     236,   176,    32,    33,    12,    12,    14,     1,   226,    29,
       3,     4,     5,     6,   250,   251,    52,   199,    12,   201,
      14,    12,    15,    17,    14,     8,     9,    10,    11,   270,
      40,   221,    15,    20,   272,    29,    30,    31,   279,    40,
      34,    35,    36,    37,    38,    39,    40,   146,   147,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     1,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     266,   267,    16,    15,    16,    40,    14,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    40,    14,
      32,    33,     3,     4,     5,     6,    14,     1,    40,     3,
       4,     5,     6,     7,    15,    16,    34,    35,    36,    31,
      38,    15,    16,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    14,    41,    40,    32,    33,
       8,     9,    10,    11,    14,     1,    40,     3,     4,     5,
       6,     7,   202,   203,   204,   205,    40,    14,   102,    15,
      16,     0,    13,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     6,   109,    44,    32,    33,   225,    66,
     176,   132,   236,     1,    40,     3,     4,     5,     6,     7,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    30,    54,    58,    59,
      63,    64,    65,    70,    74,    13,    18,    66,    70,    71,
       0,    55,    64,    75,    76,    78,    15,    62,    63,    72,
      74,    86,    65,    40,    67,     1,     4,    17,    69,    56,
      58,    52,    60,    79,    12,    77,     1,     3,     4,     5,
       6,     7,    16,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    32,    33,    40,    72,    86,    87,    89,
      91,    92,    93,    94,    96,    98,    99,   101,   103,   104,
     106,   108,   110,   113,   114,   115,   120,    64,    86,     1,
      40,     1,    14,    63,    64,    68,    82,    84,    66,     1,
      17,    66,    57,    15,    80,   113,    61,    72,    86,    78,
      31,    13,     1,    40,     1,    40,    13,    13,     1,    13,
       1,    97,   101,    91,   113,   114,   114,    16,    88,    89,
      16,    90,    91,    40,    12,   102,    29,   100,    37,    39,
     105,    34,    35,    36,    38,   107,    43,    44,   109,     1,
      30,    45,    46,    47,    48,    49,    50,    51,    52,   111,
     112,    13,    18,    32,    33,   116,    73,    74,    73,    66,
      66,    64,    85,    14,     1,    14,    12,    83,    66,    66,
      56,    80,    81,    86,    77,    91,   101,   101,   101,   101,
     101,    40,    40,    20,    31,    16,    90,   103,   101,   106,
     114,   106,   108,   108,   108,   108,   110,   110,   103,   114,
     114,   114,   103,     1,    14,   108,   117,   118,   101,   116,
     116,    40,    66,    66,    66,    84,    12,    16,    14,    14,
      40,    14,    14,    13,    91,   102,    31,   105,   105,   107,
     107,   107,   107,   109,   109,   111,   111,   111,   116,   116,
       1,    12,   119,    14,    17,    73,    83,    16,    80,    91,
      91,   101,    91,    91,   101,    99,   108,   108,   116,   116,
      41,    95,    40,    14,   119,   119,    91,   101,    40,    14,
      91
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
#line 476 "bison.y"
    {
	if(!sc.empty())
	scoper=sc.pop();
	//cout<<scoper<<endl;
	
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 487 "bison.y"
    {
	scoper=sc.pop();
	/*cout<<scoper<<endl;*/
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 501 "bison.y"
    {
sc.push(scoper);
scoper=(yyvsp[(2) - (2)].sval);

myClass e1;
while(!s.empty())
{
	e1=s.pop();
	
	
	tabElem[size].lexeme=e1.lexeme;
	tabElem[size].scope=scoper;
	tabElem[size].type=e1.type;
	tabElem[size].arraySize=e1.arraySize;
	tabElem[size].functionName=e1.functionName;


	tabElem[size].lineNumbers=lineNumber;
	size++;
	
}

;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 524 "bison.y"
    {
scoper=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 541 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 545 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 549 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 553 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 560 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 563 "bison.y"
    {
(yyval.sval)=(yyvsp[(2) - (2)].sval);
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 571 "bison.y"
    {

string thisLex=(yyvsp[(1) - (2)].sval);
if(findID(size,thisLex,scoper)){
	yyerror("The identifier was already declared.");
}
else{



if(findme!=-1){
tabElem[size].lexeme=(yyvsp[(1) - (2)].sval);
tabElem[size].scope=scoper;
tabElem[size].type=myType;
tabElem[size].arraySize=myArraySize;
tabElem[size].functionName=(yyvsp[(2) - (2)].charval);
if(tabElem[size].functionName=="Y"){
tabElem[size].parameterslength=param;
param=0;
}
myArraySize=-1;
tabElem[size].lineNumbers=lineNumber;
size++;
(yyval.sval)=(yyvsp[(1) - (2)].sval);
}
else if(findme==-1){
//cout<<$1<<" "<<findme<<endl;
myClass temperory;
temperory.lexeme=(yyvsp[(1) - (2)].sval);
temperory.type=myType;
temperory.arraySize=myArraySize;
myArraySize=-1;
temperory.functionName=(yyvsp[(2) - (2)].charval);
temperory.lineNumbers=lineNumber;
s.push(temperory);
param++;

(yyval.sval)=(yyvsp[(1) - (2)].sval);
}

}
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 617 "bison.y"
    {
 findme=-1;
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 620 "bison.y"
    {
(yyval.charval)='Y';
findme=0;
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 624 "bison.y"
    {
(yyval.charval)=' ';
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 627 "bison.y"
    {
(yyval.charval)=' ';
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 637 "bison.y"
    { yyerror("Closing Bracket Missing");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 639 "bison.y"
    { yyerror("Closing Bracket Missing");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 644 "bison.y"
    {
myArraySize=0;
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 647 "bison.y"
    { yyerror("Closing Square Bracket Missing");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 648 "bison.y"
    {
myArraySize=(yyvsp[(1) - (3)].ival);
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 651 "bison.y"
    { yyerror("Closing Bracket Missing");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 665 "bison.y"
    { yyerror("Semicolon Missing");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 722 "bison.y"
    {
	(yyval.sval)=(yyvsp[(2) - (2)].sval);
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 727 "bison.y"
    {
	(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 731 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 735 "bison.y"
    {
	(yyval.sval)=(yyvsp[(2) - (2)].sval);
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 741 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 745 "bison.y"
    {
	(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 751 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 757 "bison.y"
    {
	
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 761 "bison.y"
    {
	(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 766 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 767 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 768 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); /* cout<<"Exp: "<<$1<<endl; */ foundedArray=0; justPassedHere=0; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 769 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 770 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 771 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (1)].sval); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 775 "bison.y"
    {

	string secOp=(yyvsp[(2) - (4)].sval);
	string thrOp=(yyvsp[(4) - (4)].sval);
	cout<<secOp<<" "<<thrOp<<endl;
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	else {
		yyerror("Invalid Constant Used In Case Statement.");
		(yyval.sval)=conversionConstChar("typeerr");
	}
	
	
	
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 805 "bison.y"
    {
	(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 810 "bison.y"
    { (yyval.sval)=conversionConstChar("void"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 811 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (2)].sval); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 812 "bison.y"
    { yyerror("Missing Expression Or Semicolon");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 817 "bison.y"
    {
	(yyval.sval)=(yyvsp[(3) - (6)].sval);
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 827 "bison.y"
    {
	string firstOp=(yyvsp[(3) - (5)].sval);
	string SecOp=(yyvsp[(5) - (5)].sval);
	
	if(firstOp!=SecOp){
		yyerror("Switch Case Constant And Paramenter Doesn't Match.");
		(yyval.sval)=conversionConstChar("typeerr");
	}
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 836 "bison.y"
    { yyerror("Opening Bracket Missing");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 840 "bison.y"
    { (yyval.sval)=conversionConstChar("void"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 841 "bison.y"
    { yyerror("Semicolon Missing");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 842 "bison.y"
    { (yyval.sval)=conversionConstChar("void");  ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 843 "bison.y"
    { yyerror("Semicolon Missing");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 844 "bison.y"
    {
	(yyval.sval)=(yyvsp[(2) - (2)].sval);
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 850 "bison.y"
    { (yyval.sval)=(yyvsp[(1) - (2)].sval); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 851 "bison.y"
    { yyerror("Expression Missing/Invalid");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 856 "bison.y"
    {
	string firstOp=(yyvsp[(3) - (5)].sval);
	if(firstOp!="int"){
		yyerror("Invalid Relational Operator Used In While");
		
	}
	
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 865 "bison.y"
    {
	string firstOp=(yyvsp[(5) - (7)].sval);
	if(firstOp!="int"){
	yyerror("Invalid Relational Operator Used In Do While");
	}
	
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 873 "bison.y"
    {
	string firstOp=(yyvsp[(5) - (9)].sval);
	string secondOp=(yyvsp[(3) - (9)].sval);
	string thirdOp=(yyvsp[(7) - (9)].sval);
	if(firstOp!="int" || secondOp!="int" || thirdOp!="int"){
	yyerror("Non Integer Type Variable Used In For Condition");
	}
	
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 885 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 897 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 907 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (1)].sval); 
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 910 "bison.y"
    { 
string firstOp=(yyvsp[(1) - (3)].sval);
string secondOp=(yyvsp[(3) - (3)].sval);
if(secondOp!="typeerr"){

if(assignmentOp=="Assign"){
if(firstOp=="int" && secondOp=="float")
{
yyerror("Invalid Assignment Float To Int.");
		(yyval.sval)=conversionConstChar("typeerr");
}

else if(firstOp=="float" && secondOp=="char")
{
yyerror("Invalid Assignment Char To Float.");
		(yyval.sval)=conversionConstChar("typeerr");
}
else if(firstOp=="char" && secondOp=="int")
{
yyerror("Invalid Assignment Int To Char.");
		(yyval.sval)=conversionConstChar("typeerr");
}
else if(firstOp=="char" && secondOp=="float")
{
yyerror("Invalid Assignment Float To Char.");
		(yyval.sval)=conversionConstChar("typeerr");
}
else if(firstOp=="int" && secondOp=="char")
{
yyerror("Invalid Assignment Char To Int.");
		(yyval.sval)=conversionConstChar("typeerr");
}
}
}
else{
		(yyval.sval)=conversionConstChar("typeerr");
}
assignmentOp=" ";
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 950 "bison.y"
    { yyerror("Missing Assignment Operator");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 954 "bison.y"
    {
	string secOp=(yyvsp[(1) - (2)].sval);
	string thrOp=(yyvsp[(2) - (2)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	else{
		if(reported==0)
		yyerror("Invalid Equality Operation.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=0;
	}
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 992 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1030 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1068 "bison.y"
    {
(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1074 "bison.y"
    {
	string secOp=(yyvsp[(1) - (2)].sval);
	string thrOp=(yyvsp[(2) - (2)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	else{
		if(reported==0)
		yyerror("Invalid Relational Operands.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=1;
	}
;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1113 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else{
		(yyval.sval)=conversionConstChar("typeerr");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1154 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1192 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1230 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1268 "bison.y"
    {
(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1274 "bison.y"
    {
	string secOp=(yyvsp[(1) - (2)].sval);
	string thrOp=(yyvsp[(2) - (2)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
	}
	else if(secOp=="float" && thrOp=="void"){
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		(yyval.sval)=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="float"){
		(yyval.sval)=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="char"){
		yyerror("Invalid Assignment Char To Int.");
		
		(yyval.sval)=conversionConstChar("typeerr");
	}
	
	else if(secOp=="char" && thrOp=="float"){
		yyerror("Invalid Assignment Float To Char.");
		(yyval.sval)=conversionConstChar("typeerr");
	}
	
	else if(secOp=="float" && thrOp=="int"){
		//yyerror("Invalid Assignment Int To Float.");
		(yyval.sval)=conversionConstChar("float");
	}
	
;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1323 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	
	
;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1361 "bison.y"
    {
	string secOp=(yyvsp[(2) - (3)].sval);
	string thrOp=(yyvsp[(3) - (3)].sval);
	if(secOp=="int" && thrOp=="void")
	{
		
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="float"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	
	
	
;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1400 "bison.y"
    {
(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1406 "bison.y"
    {
	(yyval.sval)=(yyvsp[(1) - (2)].sval);
;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1418 "bison.y"
    {assignmentOp="Assign";;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1427 "bison.y"
    {string s1 = "int";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
(yyval.sval)=s2;
;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1432 "bison.y"
    {string s1 = "char";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
(yyval.sval)=s2;
;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1437 "bison.y"
    {string s1 = "flaot";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
(yyval.sval)=s2;
;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1442 "bison.y"
    {string s1 = "string";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
(yyval.sval)=s2;
;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1450 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);  

;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1455 "bison.y"
    {
	string secOp=(yyvsp[(2) - (2)].sval);
	if(secOp=="int" )
	{
		(yyval.sval)=conversionConstChar("int");
	}
	else if( secOp=="float" ){
		(yyval.sval)=conversionConstChar("float");
	}
	else{
		yyerror("Invalid Pre-Increment Operand.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=1;
	}
;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1470 "bison.y"
    {
	string secOp=(yyvsp[(2) - (2)].sval);
	if(secOp=="int" )
	{
		(yyval.sval)=conversionConstChar("int");
	}
	else if( secOp=="float" ){
		(yyval.sval)=conversionConstChar("float");
	}
	else{
		yyerror("Invalid Pre-Decrement Operand.");
		(yyval.sval)=conversionConstChar("typeerr");
		
	}
;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1488 "bison.y"
    {
	string secOp=(yyvsp[(1) - (2)].sval);
	string thrOp=(yyvsp[(2) - (2)].sval);
	//qu.Print();
	//findFunctionAndGivePara(theLex,size);
	//cout<<"A: "<<theLex<<endl;
	//cout<<foundedArray<<" "<<iWasHere<<" "<<foundedArrayIndex<<" "<<justPassedHere<<endl;
	
	if((foundedArray==1 && iWasHere==1) || (foundedArray==0 && iWasHere==0) || (foundedArray==1 && iWasHere==0 && foundedArrayIndex==1) || iFollowedOtherPath==1){
	if(secOp=="int" && thrOp=="void")
	{
		
		(yyval.sval)=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		(yyval.sval)=conversionConstChar("char");
	}
	else if(secOp=="float" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("float");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		(yyval.sval)=conversionConstChar("int");
	}
	
	
	else{
		if(reported==0)
		yyerror("Invalid Operands Used In Increment Or Decrement.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=1;
	}
	}
	else if((foundedArray==0 && iWasHere==1)){
		yyerror("Non-array is used with indexes.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=1;
	}
	else if((foundedArray==1 && iWasHere==0 )){
		yyerror("Array is not used with indexes.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=1;
	}
	if(iWasHere==1){
		iWasHere=0;foundedArrayIndex=0;
	}
	
	if(go==0){
	findFunctionAndGivePara(theLex,size,&returnType);
	theLex=" ";
	//$$=conversionConstChar(returnType);
	//cout<<<<endl;
	
	}
	
	
;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1555 "bison.y"
    {
	//cout<<"In Brackets "<<$2<<endl;
	string secOp=(yyvsp[(2) - (4)].sval);
	if(secOp=="int"){
		(yyval.sval)=conversionConstChar("int");
		
	}
	else{
		yyerror("Array being accessed by invalid type constant.");
		(yyval.sval)=conversionConstChar("typeerr");
		reported=1;
	}
	iWasHere=1;
	justPassedHere=1;
;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1570 "bison.y"
    {
	(yyval.sval)=(yyvsp[(2) - (2)].sval); 
	//cout<<"Done"<<endl;
;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1574 "bison.y"
    { (yyval.sval)=conversionConstChar("int");  iFollowedOtherPath=1; ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1575 "bison.y"
    { (yyval.sval)=conversionConstChar("int"); iFollowedOtherPath=1; ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1576 "bison.y"
    {
(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1582 "bison.y"
    {
	(yyval.sval)=(yyvsp[(3) - (3)].sval); go=0; 
	//cout<<"A : "<<$3<<endl;
	//qu.Print();
;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1587 "bison.y"
    {
	(yyval.sval)=(yyvsp[(2) - (2)].sval); go=0;
;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1590 "bison.y"
    { yyerror("Closing Bracket Missing");;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1594 "bison.y"
    {
	string curr=(yyvsp[(1) - (2)].sval);
	qu.Add(curr);
	//cout<<$1<<endl;
;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1602 "bison.y"
    {
	
	(yyval.sval)=(yyvsp[(2) - (3)].sval);
	string curr=(yyvsp[(2) - (3)].sval);
	qu.Add(curr);
	
	//cout<<$2<<endl;
;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1610 "bison.y"
    { yyerror("Comma Missing");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1611 "bison.y"
    {
	(yyval.sval)=conversionConstChar("void");
;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1616 "bison.y"
    {string s1 = findType(size,(yyvsp[(1) - (1)].sval));
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
(yyval.sval)=s2;
int mfoundedArray=isDecArray(size,(yyvsp[(1) - (1)].sval));
if(foundedArray!=1){
foundedArray=mfoundedArray;


//cout<<$1<<" "<<savedFunction<<endl;
}
else{
foundedArrayIndex=1;
}
savedFunction=isFunc(size,(yyvsp[(1) - (1)].sval));
if(savedFunction==1){
	theLex=(yyvsp[(1) - (1)].sval);
	go=-1;
}

/*cout<<"In ID: "<<foundedArray<<" "<<iWasHere<<" "<<foundedArrayIndex<<$1<<endl; */
;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1638 "bison.y"
    { /*cout<<"SLast: "<<$1<<endl;*/ if(foundedArray==1)foundedArrayIndex=1; (yyval.sval)=(yyvsp[(1) - (1)].sval);;}
    break;



/* Line 1455 of yacc.c  */
#line 3552 "bison.tab.c"
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
#line 1648 "bison.y"


main() {
	SetAll();
	// open a file handle to a particular file:
	FILE *myfile = fopen("input.c", "r");
	FILE *yourFile=fopen("output.txt","w");
	yyout = yourFile;
	
	
	// make sure it is valid:
	if (!myfile) {
		cout << "I can't open a.snazzle.file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	PrintAll();
	fclose(yyout);
}


