#include <aterm2.h>
#include <string.h>
#include <stdlib.h>
#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

ATerm xtc_new_file_0_0(StrSL, ATerm);

enum dirs {H, V};

struct position {
  enum dirs direction;
  int is;
  int vs;
  int hs;
  int indent;
  int has_something;
  struct position *previous;
};

static
int hpos;

static
AFun AltFun;
static
AFun SomeFun;
static
AFun NoneFun;
static
AFun AmbFun;

static
FILE *stream;

static int printed;

static
struct position *current;

static
void next(void)
{
  int i;
  struct position *last = current;

  while (!last->has_something) {
    last->has_something = 1;
    if (last->previous != NULL) {
      last->indent += last->is;
      last = last->previous;
    }
  }

  if (last->direction == V)  {
    for (i = 0; i <= last->vs; ++i)
      fputc('\n', stream);
    for (i = 0; i < last->indent; ++i)
      fputc(' ', stream);
    hpos = last->indent;
  }
  else if (last->direction == H) {
    for (i = 0; i < last->hs; ++i)
      fputc(' ', stream);
    hpos += last->hs;
  }
}

static
void print_string(char *str)
{
  next();
  hpos += fprintf(stream, "%s", str);
}

static
void print_int(int i)
{
  next();
  hpos += fprintf(stream, "%d", i);
}

static
void init_cons(void);

static
void init_stack(void)
{
  current->indent = 0;
  current->previous = NULL;
  current->is = 0;
  current->vs = 0;
  current->hs = 0;
  current->has_something = 0;
  hpos = 0;
}

static
void init(void)
{
  current = malloc(sizeof(struct position));

  AltFun = ATmakeAFun("alt", 2, ATfalse);
  ATprotectAFun(AltFun);
  SomeFun = ATmakeAFun("Some", 1, ATfalse);
  ATprotectAFun(SomeFun);
  NoneFun = ATmakeAFun("None", 0, ATfalse);
  ATprotectAFun(NoneFun);
  AmbFun = ATmakeAFun("amb", 1, ATfalse);
  ATprotectAFun(AmbFun);
  init_cons();
}

static
void push_box(enum dirs direction, int is, int vs, int hs)
{
  struct position *newpos = malloc(sizeof(struct position));

  newpos->indent = ((direction == V) && (current->direction == H))
                     ?hpos:current->indent;
  newpos->direction = direction;
  newpos->is = is;
  newpos->vs = vs;
  newpos->hs = hs;
  newpos->has_something = 0;
  newpos->previous = current;
  current = newpos;
}

static
void pop_box(void)
{
  struct position *old = current;
  current = current->previous;
  free(old);
}

static
void unexpected(ATerm tree, int n, char *str)
{
  ATfprintf(stderr,
   "The %dth argument was expected to be %s\n%a\n", n, str, tree);
  exit(1);
}
static AFun var_cons_PointerOf;
static AFun var_cons_Pointer;
static AFun var_cons_ParamListVarArgs;
static AFun var_cons_ParamList;
static AFun var_cons_ArrayDecl;
static AFun var_cons_DeclBracket;
static AFun var_cons_FunType;
static AFun var_cons_ParamDecl;
static AFun var_cons_ParamDecl2;
static AFun var_cons_TypeName;
static AFun var_cons_TypeName1;
static AFun var_cons_Enum;
static AFun var_cons_EnumId;
static AFun var_cons_Enumerator;
static AFun var_cons_EnumVal;
static AFun var_cons_Struct;
static AFun var_cons_StructId;
static AFun var_cons_Union;
static AFun var_cons_UnionId;
static AFun var_cons_MemDecl;
static AFun var_cons_MemDecl1;
static AFun var_cons_BitFieldSize;
static AFun var_cons_ArrayIndex;
static AFun var_cons_FunCall;
static AFun var_cons_Field;
static AFun var_cons_DerefMember;
static AFun var_cons_PostIncr;
static AFun var_cons_PostDecr;
static AFun var_cons_PreIncr;
static AFun var_cons_PreDecr;
static AFun var_cons_Address;
static AFun var_cons_Deref;
static AFun var_cons_Positive;
static AFun var_cons_Negative;
static AFun var_cons_Tilde;
static AFun var_cons_Negation;
static AFun var_cons_SizeofExp;
static AFun var_cons_SizeofType;
static AFun var_cons_TypeCast;
static AFun var_cons_Mul;
static AFun var_cons_Div;
static AFun var_cons_Mod;
static AFun var_cons_Add;
static AFun var_cons_Subt;
static AFun var_cons_ShiftLeft;
static AFun var_cons_ShiftRight;
static AFun var_cons_Lt;
static AFun var_cons_Gt;
static AFun var_cons_Le;
static AFun var_cons_Ge;
static AFun var_cons_Equal;
static AFun var_cons_NotEqual;
static AFun var_cons_And;
static AFun var_cons_ExOr;
static AFun var_cons_IncOr;
static AFun var_cons_LAnd;
static AFun var_cons_LOr;
static AFun var_cons_IfExp;
static AFun var_cons_Assign;
static AFun var_cons_AssignEq;
static AFun var_cons_AssignMul;
static AFun var_cons_AssignDiv;
static AFun var_cons_AssignMod;
static AFun var_cons_AssignPlus;
static AFun var_cons_AssignMin;
static AFun var_cons_AssignSL;
static AFun var_cons_AssignSR;
static AFun var_cons_AssignAnd;
static AFun var_cons_AssignExp;
static AFun var_cons_AssignOr;
static AFun var_cons_Comma;
static AFun var_cons_EmptyExp;
static AFun var_cons_Typedef;
static AFun var_cons_Extern;
static AFun var_cons_Static;
static AFun var_cons_Auto;
static AFun var_cons_Register;
static AFun var_cons_Int;
static AFun var_cons_Char;
static AFun var_cons_Short;
static AFun var_cons_Long;
static AFun var_cons_Float;
static AFun var_cons_Double;
static AFun var_cons_Signed;
static AFun var_cons_Unsigned;
static AFun var_cons_Void;
static AFun var_cons_Const;
static AFun var_cons_Volatile;
static AFun var_cons_Declaration;
static AFun var_cons_Declaration2;
static AFun var_cons_IdDeclInit;
static AFun var_cons_DeclInit;
static AFun var_cons_ArrayInit;
static AFun var_cons_ArrayInitIncomplete;
static AFun var_cons_AssignInit;
static AFun var_cons_TypeSpec;
static AFun var_cons_DQualifiers;
static AFun var_cons_DeclSpec;
static AFun var_cons_Id;
static AFun var_cons_TypeId;
static AFun var_cons_Label;
static AFun var_cons_Case;
static AFun var_cons_Default;
static AFun var_cons_Compound;
static AFun var_cons_Stat;
static AFun var_cons_If;
static AFun var_cons_IfElse;
static AFun var_cons_Switch;
static AFun var_cons_While;
static AFun var_cons_DoWhile;
static AFun var_cons_For;
static AFun var_cons_Goto;
static AFun var_cons_Continue;
static AFun var_cons_Break;
static AFun var_cons_Return;
static AFun var_cons_Exit;
static AFun var_cons_TranslationUnit;
static AFun var_cons_FunDef;
static AFun var_cons_NoTypeSpecifier;
static AFun var_cons_IdDecl;
static AFun var_cons_FunDecl;
static AFun var_cons_TypedefDeclarator1;
static AFun var_cons_TypedefDeclarator2;
static AFun var_cons_OldFunction1;
static AFun var_cons_OldFunction2;
static AFun var_cons_PpControl;
static AFun var_cons_PpIf;
static AFun var_cons_IntConst;
static AFun var_cons_HexConst;
static AFun var_cons_OctConst;
static AFun var_cons_FloatConst;
static AFun var_cons_CharConst;
static AFun var_cons_StringLit;
static void init_cons (void)
{
var_cons_PointerOf = ATmakeAFun("PointerOf", 1, ATfalse);
ATprotectAFun(var_cons_PointerOf);
var_cons_Pointer = ATmakeAFun("Pointer", 2, ATfalse);
ATprotectAFun(var_cons_Pointer);
var_cons_ParamListVarArgs = ATmakeAFun("ParamListVarArgs", 1, ATfalse);
ATprotectAFun(var_cons_ParamListVarArgs);
var_cons_ParamList = ATmakeAFun("ParamList", 1, ATfalse);
ATprotectAFun(var_cons_ParamList);
var_cons_ArrayDecl = ATmakeAFun("ArrayDecl", 2, ATfalse);
ATprotectAFun(var_cons_ArrayDecl);
var_cons_DeclBracket = ATmakeAFun("DeclBracket", 1, ATfalse);
ATprotectAFun(var_cons_DeclBracket);
var_cons_FunType = ATmakeAFun("FunType", 2, ATfalse);
ATprotectAFun(var_cons_FunType);
var_cons_ParamDecl = ATmakeAFun("ParamDecl", 2, ATfalse);
ATprotectAFun(var_cons_ParamDecl);
var_cons_ParamDecl2 = ATmakeAFun("ParamDecl2", 2, ATfalse);
ATprotectAFun(var_cons_ParamDecl2);
var_cons_TypeName = ATmakeAFun("TypeName", 2, ATfalse);
ATprotectAFun(var_cons_TypeName);
var_cons_TypeName1 = ATmakeAFun("TypeName1", 2, ATfalse);
ATprotectAFun(var_cons_TypeName1);
var_cons_Enum = ATmakeAFun("Enum", 2, ATfalse);
ATprotectAFun(var_cons_Enum);
var_cons_EnumId = ATmakeAFun("EnumId", 1, ATfalse);
ATprotectAFun(var_cons_EnumId);
var_cons_Enumerator = ATmakeAFun("Enumerator", 2, ATfalse);
ATprotectAFun(var_cons_Enumerator);
var_cons_EnumVal = ATmakeAFun("EnumVal", 1, ATfalse);
ATprotectAFun(var_cons_EnumVal);
var_cons_Struct = ATmakeAFun("Struct", 2, ATfalse);
ATprotectAFun(var_cons_Struct);
var_cons_StructId = ATmakeAFun("StructId", 1, ATfalse);
ATprotectAFun(var_cons_StructId);
var_cons_Union = ATmakeAFun("Union", 2, ATfalse);
ATprotectAFun(var_cons_Union);
var_cons_UnionId = ATmakeAFun("UnionId", 1, ATfalse);
ATprotectAFun(var_cons_UnionId);
var_cons_MemDecl = ATmakeAFun("MemDecl", 2, ATfalse);
ATprotectAFun(var_cons_MemDecl);
var_cons_MemDecl1 = ATmakeAFun("MemDecl1", 2, ATfalse);
ATprotectAFun(var_cons_MemDecl1);
var_cons_BitFieldSize = ATmakeAFun("BitFieldSize", 2, ATfalse);
ATprotectAFun(var_cons_BitFieldSize);
var_cons_ArrayIndex = ATmakeAFun("ArrayIndex", 2, ATfalse);
ATprotectAFun(var_cons_ArrayIndex);
var_cons_FunCall = ATmakeAFun("FunCall", 2, ATfalse);
ATprotectAFun(var_cons_FunCall);
var_cons_Field = ATmakeAFun("Field", 2, ATfalse);
ATprotectAFun(var_cons_Field);
var_cons_DerefMember = ATmakeAFun("DerefMember", 2, ATfalse);
ATprotectAFun(var_cons_DerefMember);
var_cons_PostIncr = ATmakeAFun("PostIncr", 1, ATfalse);
ATprotectAFun(var_cons_PostIncr);
var_cons_PostDecr = ATmakeAFun("PostDecr", 1, ATfalse);
ATprotectAFun(var_cons_PostDecr);
var_cons_PreIncr = ATmakeAFun("PreIncr", 1, ATfalse);
ATprotectAFun(var_cons_PreIncr);
var_cons_PreDecr = ATmakeAFun("PreDecr", 1, ATfalse);
ATprotectAFun(var_cons_PreDecr);
var_cons_Address = ATmakeAFun("Address", 1, ATfalse);
ATprotectAFun(var_cons_Address);
var_cons_Deref = ATmakeAFun("Deref", 1, ATfalse);
ATprotectAFun(var_cons_Deref);
var_cons_Positive = ATmakeAFun("Positive", 1, ATfalse);
ATprotectAFun(var_cons_Positive);
var_cons_Negative = ATmakeAFun("Negative", 1, ATfalse);
ATprotectAFun(var_cons_Negative);
var_cons_Tilde = ATmakeAFun("Tilde", 1, ATfalse);
ATprotectAFun(var_cons_Tilde);
var_cons_Negation = ATmakeAFun("Negation", 1, ATfalse);
ATprotectAFun(var_cons_Negation);
var_cons_SizeofExp = ATmakeAFun("SizeofExp", 1, ATfalse);
ATprotectAFun(var_cons_SizeofExp);
var_cons_SizeofType = ATmakeAFun("SizeofType", 1, ATfalse);
ATprotectAFun(var_cons_SizeofType);
var_cons_TypeCast = ATmakeAFun("TypeCast", 2, ATfalse);
ATprotectAFun(var_cons_TypeCast);
var_cons_Mul = ATmakeAFun("Mul", 2, ATfalse);
ATprotectAFun(var_cons_Mul);
var_cons_Div = ATmakeAFun("Div", 2, ATfalse);
ATprotectAFun(var_cons_Div);
var_cons_Mod = ATmakeAFun("Mod", 2, ATfalse);
ATprotectAFun(var_cons_Mod);
var_cons_Add = ATmakeAFun("Add", 2, ATfalse);
ATprotectAFun(var_cons_Add);
var_cons_Subt = ATmakeAFun("Subt", 2, ATfalse);
ATprotectAFun(var_cons_Subt);
var_cons_ShiftLeft = ATmakeAFun("ShiftLeft", 2, ATfalse);
ATprotectAFun(var_cons_ShiftLeft);
var_cons_ShiftRight = ATmakeAFun("ShiftRight", 2, ATfalse);
ATprotectAFun(var_cons_ShiftRight);
var_cons_Lt = ATmakeAFun("Lt", 2, ATfalse);
ATprotectAFun(var_cons_Lt);
var_cons_Gt = ATmakeAFun("Gt", 2, ATfalse);
ATprotectAFun(var_cons_Gt);
var_cons_Le = ATmakeAFun("Le", 2, ATfalse);
ATprotectAFun(var_cons_Le);
var_cons_Ge = ATmakeAFun("Ge", 2, ATfalse);
ATprotectAFun(var_cons_Ge);
var_cons_Equal = ATmakeAFun("Equal", 2, ATfalse);
ATprotectAFun(var_cons_Equal);
var_cons_NotEqual = ATmakeAFun("NotEqual", 2, ATfalse);
ATprotectAFun(var_cons_NotEqual);
var_cons_And = ATmakeAFun("And", 2, ATfalse);
ATprotectAFun(var_cons_And);
var_cons_ExOr = ATmakeAFun("ExOr", 2, ATfalse);
ATprotectAFun(var_cons_ExOr);
var_cons_IncOr = ATmakeAFun("IncOr", 2, ATfalse);
ATprotectAFun(var_cons_IncOr);
var_cons_LAnd = ATmakeAFun("LAnd", 2, ATfalse);
ATprotectAFun(var_cons_LAnd);
var_cons_LOr = ATmakeAFun("LOr", 2, ATfalse);
ATprotectAFun(var_cons_LOr);
var_cons_IfExp = ATmakeAFun("IfExp", 3, ATfalse);
ATprotectAFun(var_cons_IfExp);
var_cons_Assign = ATmakeAFun("Assign", 3, ATfalse);
ATprotectAFun(var_cons_Assign);
var_cons_AssignEq = ATmakeAFun("AssignEq", 0, ATfalse);
ATprotectAFun(var_cons_AssignEq);
var_cons_AssignMul = ATmakeAFun("AssignMul", 0, ATfalse);
ATprotectAFun(var_cons_AssignMul);
var_cons_AssignDiv = ATmakeAFun("AssignDiv", 0, ATfalse);
ATprotectAFun(var_cons_AssignDiv);
var_cons_AssignMod = ATmakeAFun("AssignMod", 0, ATfalse);
ATprotectAFun(var_cons_AssignMod);
var_cons_AssignPlus = ATmakeAFun("AssignPlus", 0, ATfalse);
ATprotectAFun(var_cons_AssignPlus);
var_cons_AssignMin = ATmakeAFun("AssignMin", 0, ATfalse);
ATprotectAFun(var_cons_AssignMin);
var_cons_AssignSL = ATmakeAFun("AssignSL", 0, ATfalse);
ATprotectAFun(var_cons_AssignSL);
var_cons_AssignSR = ATmakeAFun("AssignSR", 0, ATfalse);
ATprotectAFun(var_cons_AssignSR);
var_cons_AssignAnd = ATmakeAFun("AssignAnd", 0, ATfalse);
ATprotectAFun(var_cons_AssignAnd);
var_cons_AssignExp = ATmakeAFun("AssignExp", 0, ATfalse);
ATprotectAFun(var_cons_AssignExp);
var_cons_AssignOr = ATmakeAFun("AssignOr", 0, ATfalse);
ATprotectAFun(var_cons_AssignOr);
var_cons_Comma = ATmakeAFun("Comma", 2, ATfalse);
ATprotectAFun(var_cons_Comma);
var_cons_EmptyExp = ATmakeAFun("EmptyExp", 0, ATfalse);
ATprotectAFun(var_cons_EmptyExp);
var_cons_Typedef = ATmakeAFun("Typedef", 0, ATfalse);
ATprotectAFun(var_cons_Typedef);
var_cons_Extern = ATmakeAFun("Extern", 0, ATfalse);
ATprotectAFun(var_cons_Extern);
var_cons_Static = ATmakeAFun("Static", 0, ATfalse);
ATprotectAFun(var_cons_Static);
var_cons_Auto = ATmakeAFun("Auto", 0, ATfalse);
ATprotectAFun(var_cons_Auto);
var_cons_Register = ATmakeAFun("Register", 0, ATfalse);
ATprotectAFun(var_cons_Register);
var_cons_Int = ATmakeAFun("Int", 0, ATfalse);
ATprotectAFun(var_cons_Int);
var_cons_Char = ATmakeAFun("Char", 0, ATfalse);
ATprotectAFun(var_cons_Char);
var_cons_Short = ATmakeAFun("Short", 0, ATfalse);
ATprotectAFun(var_cons_Short);
var_cons_Long = ATmakeAFun("Long", 0, ATfalse);
ATprotectAFun(var_cons_Long);
var_cons_Float = ATmakeAFun("Float", 0, ATfalse);
ATprotectAFun(var_cons_Float);
var_cons_Double = ATmakeAFun("Double", 0, ATfalse);
ATprotectAFun(var_cons_Double);
var_cons_Signed = ATmakeAFun("Signed", 0, ATfalse);
ATprotectAFun(var_cons_Signed);
var_cons_Unsigned = ATmakeAFun("Unsigned", 0, ATfalse);
ATprotectAFun(var_cons_Unsigned);
var_cons_Void = ATmakeAFun("Void", 0, ATfalse);
ATprotectAFun(var_cons_Void);
var_cons_Const = ATmakeAFun("Const", 0, ATfalse);
ATprotectAFun(var_cons_Const);
var_cons_Volatile = ATmakeAFun("Volatile", 0, ATfalse);
ATprotectAFun(var_cons_Volatile);
var_cons_Declaration = ATmakeAFun("Declaration", 2, ATfalse);
ATprotectAFun(var_cons_Declaration);
var_cons_Declaration2 = ATmakeAFun("Declaration2", 2, ATfalse);
ATprotectAFun(var_cons_Declaration2);
var_cons_IdDeclInit = ATmakeAFun("IdDeclInit", 2, ATfalse);
ATprotectAFun(var_cons_IdDeclInit);
var_cons_DeclInit = ATmakeAFun("DeclInit", 2, ATfalse);
ATprotectAFun(var_cons_DeclInit);
var_cons_ArrayInit = ATmakeAFun("ArrayInit", 1, ATfalse);
ATprotectAFun(var_cons_ArrayInit);
var_cons_ArrayInitIncomplete = ATmakeAFun("ArrayInitIncomplete", 1, ATfalse);
ATprotectAFun(var_cons_ArrayInitIncomplete);
var_cons_AssignInit = ATmakeAFun("AssignInit", 1, ATfalse);
ATprotectAFun(var_cons_AssignInit);
var_cons_TypeSpec = ATmakeAFun("TypeSpec", 3, ATfalse);
ATprotectAFun(var_cons_TypeSpec);
var_cons_DQualifiers = ATmakeAFun("DQualifiers", 3, ATfalse);
ATprotectAFun(var_cons_DQualifiers);
var_cons_DeclSpec = ATmakeAFun("DeclSpec", 5, ATfalse);
ATprotectAFun(var_cons_DeclSpec);
var_cons_Id = ATmakeAFun("Id", 1, ATfalse);
ATprotectAFun(var_cons_Id);
var_cons_TypeId = ATmakeAFun("TypeId", 1, ATfalse);
ATprotectAFun(var_cons_TypeId);
var_cons_Label = ATmakeAFun("Label", 2, ATfalse);
ATprotectAFun(var_cons_Label);
var_cons_Case = ATmakeAFun("Case", 2, ATfalse);
ATprotectAFun(var_cons_Case);
var_cons_Default = ATmakeAFun("Default", 1, ATfalse);
ATprotectAFun(var_cons_Default);
var_cons_Compound = ATmakeAFun("Compound", 2, ATfalse);
ATprotectAFun(var_cons_Compound);
var_cons_Stat = ATmakeAFun("Stat", 1, ATfalse);
ATprotectAFun(var_cons_Stat);
var_cons_If = ATmakeAFun("If", 2, ATfalse);
ATprotectAFun(var_cons_If);
var_cons_IfElse = ATmakeAFun("IfElse", 3, ATfalse);
ATprotectAFun(var_cons_IfElse);
var_cons_Switch = ATmakeAFun("Switch", 2, ATfalse);
ATprotectAFun(var_cons_Switch);
var_cons_While = ATmakeAFun("While", 2, ATfalse);
ATprotectAFun(var_cons_While);
var_cons_DoWhile = ATmakeAFun("DoWhile", 2, ATfalse);
ATprotectAFun(var_cons_DoWhile);
var_cons_For = ATmakeAFun("For", 4, ATfalse);
ATprotectAFun(var_cons_For);
var_cons_Goto = ATmakeAFun("Goto", 1, ATfalse);
ATprotectAFun(var_cons_Goto);
var_cons_Continue = ATmakeAFun("Continue", 0, ATfalse);
ATprotectAFun(var_cons_Continue);
var_cons_Break = ATmakeAFun("Break", 0, ATfalse);
ATprotectAFun(var_cons_Break);
var_cons_Return = ATmakeAFun("Return", 1, ATfalse);
ATprotectAFun(var_cons_Return);
var_cons_Exit = ATmakeAFun("Exit", 1, ATfalse);
ATprotectAFun(var_cons_Exit);
var_cons_TranslationUnit = ATmakeAFun("TranslationUnit", 1, ATfalse);
ATprotectAFun(var_cons_TranslationUnit);
var_cons_FunDef = ATmakeAFun("FunDef", 3, ATfalse);
ATprotectAFun(var_cons_FunDef);
var_cons_NoTypeSpecifier = ATmakeAFun("NoTypeSpecifier", 0, ATfalse);
ATprotectAFun(var_cons_NoTypeSpecifier);
var_cons_IdDecl = ATmakeAFun("IdDecl", 3, ATfalse);
ATprotectAFun(var_cons_IdDecl);
var_cons_FunDecl = ATmakeAFun("FunDecl", 3, ATfalse);
ATprotectAFun(var_cons_FunDecl);
var_cons_TypedefDeclarator1 = ATmakeAFun("TypedefDeclarator1", 3, ATfalse);
ATprotectAFun(var_cons_TypedefDeclarator1);
var_cons_TypedefDeclarator2 = ATmakeAFun("TypedefDeclarator2", 3, ATfalse);
ATprotectAFun(var_cons_TypedefDeclarator2);
var_cons_OldFunction1 = ATmakeAFun("OldFunction1", 3, ATfalse);
ATprotectAFun(var_cons_OldFunction1);
var_cons_OldFunction2 = ATmakeAFun("OldFunction2", 3, ATfalse);
ATprotectAFun(var_cons_OldFunction2);
var_cons_PpControl = ATmakeAFun("PpControl", 1, ATfalse);
ATprotectAFun(var_cons_PpControl);
var_cons_PpIf = ATmakeAFun("PpIf", 4, ATfalse);
ATprotectAFun(var_cons_PpIf);
var_cons_IntConst = ATmakeAFun("IntConst", 1, ATfalse);
ATprotectAFun(var_cons_IntConst);
var_cons_HexConst = ATmakeAFun("HexConst", 1, ATfalse);
ATprotectAFun(var_cons_HexConst);
var_cons_OctConst = ATmakeAFun("OctConst", 1, ATfalse);
ATprotectAFun(var_cons_OctConst);
var_cons_FloatConst = ATmakeAFun("FloatConst", 1, ATfalse);
ATprotectAFun(var_cons_FloatConst);
var_cons_CharConst = ATmakeAFun("CharConst", 1, ATfalse);
ATprotectAFun(var_cons_CharConst);
var_cons_StringLit = ATmakeAFun("StringLit", 1, ATfalse);
ATprotectAFun(var_cons_StringLit);
}
static void print (ATerm);
static void print_cons_PointerOf (ATerm);
static void print_cons_PointerOf_1 (ATerm);
static void print_cons_Pointer (ATerm);
static void print_cons_Pointer_1 (ATerm);
static void print_cons_Pointer_2 (ATerm);
static void print_cons_Pointer_2_1 (ATerm);
static void print_cons_ParamListVarArgs (ATerm);
static void print_cons_ParamListVarArgs_1 (ATerm);
static void print_cons_ParamList (ATerm);
static void print_cons_ParamList_1 (ATerm);
static void print_cons_ArrayDecl (ATerm);
static void print_cons_ArrayDecl_1 (ATerm);
static void print_cons_ArrayDecl_2 (ATerm);
static void print_cons_DeclBracket (ATerm);
static void print_cons_FunType (ATerm);
static void print_cons_ParamDecl (ATerm);
static void print_cons_ParamDecl_2 (ATerm);
static void print_cons_ParamDecl_2_1 (ATerm);
static void print_cons_ParamDecl2_1 (ATerm);
static void print_cons_ParamDecl2 (ATerm);
static void print_cons_TypeName (ATerm);
static void print_cons_TypeName1 (ATerm);
static void print_cons_TypeName1_1 (ATerm);
static void print_cons_TypeName_2 (ATerm);
static void print_cons_TypeName1_2 (ATerm);
static void print_cons_Enum (ATerm);
static void print_cons_Enum_1 (ATerm);
static void print_cons_Enum_2 (ATerm);
static void print_cons_EnumId (ATerm);
static void print_cons_Enumerator (ATerm);
static void print_cons_Enumerator_2 (ATerm);
static void print_cons_EnumVal (ATerm);
static void print_cons_Struct (ATerm);
static void print_cons_Struct_1 (ATerm);
static void print_cons_Struct_2 (ATerm);
static void print_cons_StructId (ATerm);
static void print_cons_Union (ATerm);
static void print_cons_Union_1 (ATerm);
static void print_cons_Union_2 (ATerm);
static void print_cons_UnionId (ATerm);
static void print_cons_MemDecl (ATerm);
static void print_cons_MemDecl_2 (ATerm);
static void print_cons_MemDecl1 (ATerm);
static void print_cons_MemDecl1_1 (ATerm);
static void print_cons_MemDecl1_2 (ATerm);
static void print_cons_BitFieldSize (ATerm);
static void print_cons_BitFieldSize_1 (ATerm);
static void print_cons_ArrayIndex (ATerm);
static void print_cons_FunCall (ATerm);
static void print_cons_FunCall_2 (ATerm);
static void print_cons_Field (ATerm);
static void print_cons_DerefMember (ATerm);
static void print_cons_PostIncr (ATerm);
static void print_cons_PostDecr (ATerm);
static void print_cons_PreIncr (ATerm);
static void print_cons_PreDecr (ATerm);
static void print_cons_Address (ATerm);
static void print_cons_Deref (ATerm);
static void print_cons_Positive (ATerm);
static void print_cons_Negative (ATerm);
static void print_cons_Tilde (ATerm);
static void print_cons_Negation (ATerm);
static void print_cons_SizeofExp (ATerm);
static void print_cons_SizeofType (ATerm);
static void print_cons_TypeCast (ATerm);
static void print_cons_Mul (ATerm);
static void print_cons_Div (ATerm);
static void print_cons_Mod (ATerm);
static void print_cons_Add (ATerm);
static void print_cons_Subt (ATerm);
static void print_cons_ShiftLeft (ATerm);
static void print_cons_ShiftRight (ATerm);
static void print_cons_Lt (ATerm);
static void print_cons_Gt (ATerm);
static void print_cons_Le (ATerm);
static void print_cons_Ge (ATerm);
static void print_cons_Equal (ATerm);
static void print_cons_NotEqual (ATerm);
static void print_cons_And (ATerm);
static void print_cons_ExOr (ATerm);
static void print_cons_IncOr (ATerm);
static void print_cons_LAnd (ATerm);
static void print_cons_LOr (ATerm);
static void print_cons_IfExp (ATerm);
static void print_cons_Assign (ATerm);
static void print_cons_AssignEq (ATerm);
static void print_cons_AssignMul (ATerm);
static void print_cons_AssignDiv (ATerm);
static void print_cons_AssignMod (ATerm);
static void print_cons_AssignPlus (ATerm);
static void print_cons_AssignMin (ATerm);
static void print_cons_AssignSL (ATerm);
static void print_cons_AssignSR (ATerm);
static void print_cons_AssignAnd (ATerm);
static void print_cons_AssignExp (ATerm);
static void print_cons_AssignOr (ATerm);
static void print_cons_Comma (ATerm);
static void print_cons_EmptyExp (ATerm);
static void print_cons_Typedef (ATerm);
static void print_cons_Extern (ATerm);
static void print_cons_Static (ATerm);
static void print_cons_Auto (ATerm);
static void print_cons_Register (ATerm);
static void print_cons_Int (ATerm);
static void print_cons_Char (ATerm);
static void print_cons_Short (ATerm);
static void print_cons_Long (ATerm);
static void print_cons_Float (ATerm);
static void print_cons_Double (ATerm);
static void print_cons_Signed (ATerm);
static void print_cons_Unsigned (ATerm);
static void print_cons_Void (ATerm);
static void print_cons_Const (ATerm);
static void print_cons_Volatile (ATerm);
static void print_cons_Declaration (ATerm);
static void print_cons_Declaration_1 (ATerm);
static void print_cons_Declaration_1_2 (ATerm);
static void print_cons_Declaration_2 (ATerm);
static void print_cons_Declaration2 (ATerm);
static void print_cons_Declaration2_2 (ATerm);
static void print_cons_Declaration2_1 (ATerm);
static void print_cons_IdDeclInit (ATerm);
static void print_cons_DeclInit (ATerm);
static void print_cons_ArrayInit (ATerm);
static void print_cons_ArrayInit_1 (ATerm);
static void print_cons_ArrayInitIncomplete (ATerm);
static void print_cons_ArrayInitIncomplete_1 (ATerm);
static void print_cons_AssignInit (ATerm);
static void print_cons_TypeSpec (ATerm);
static void print_cons_TypeSpec_1 (ATerm);
static void print_cons_TypeSpec_3 (ATerm);
static void print_cons_TypeSpec_3_1 (ATerm);
static void print_cons_DQualifiers (ATerm);
static void print_cons_DQualifiers_1 (ATerm);
static void print_cons_DQualifiers_3 (ATerm);
static void print_cons_DeclSpec (ATerm);
static void print_cons_DeclSpec_1 (ATerm);
static void print_cons_DeclSpec_3 (ATerm);
static void print_cons_DeclSpec_5 (ATerm);
static void print_cons_DeclSpec_5_1 (ATerm);
static void print_cons_Id (ATerm);
static void print_cons_TypeId (ATerm);
static void print_cons_Label (ATerm);
static void print_cons_Case (ATerm);
static void print_cons_Default (ATerm);
static void print_cons_Compound (ATerm);
static void print_cons_Compound_1 (ATerm);
static void print_cons_Compound_2 (ATerm);
static void print_cons_Stat (ATerm);
static void print_cons_If (ATerm);
static void print_cons_IfElse (ATerm);
static void print_cons_Switch (ATerm);
static void print_cons_While (ATerm);
static void print_cons_DoWhile (ATerm);
static void print_cons_For (ATerm);
static void print_cons_Goto (ATerm);
static void print_cons_Continue (ATerm);
static void print_cons_Break (ATerm);
static void print_cons_Return (ATerm);
static void print_cons_Exit (ATerm);
static void print_cons_TranslationUnit (ATerm);
static void print_cons_TranslationUnit_1 (ATerm);
static void print_cons_FunDef (ATerm);
static void print_cons_NoTypeSpecifier (ATerm);
static void print_cons_IdDecl (ATerm);
static void print_cons_IdDecl_1 (ATerm);
static void print_cons_IdDecl_3 (ATerm);
static void print_cons_FunDecl (ATerm);
static void print_cons_FunDecl_1 (ATerm);
static void print_cons_FunDecl_3 (ATerm);
static void print_cons_TypedefDeclarator1 (ATerm);
static void print_cons_TypedefDeclarator1_1 (ATerm);
static void print_cons_TypedefDeclarator1_3 (ATerm);
static void print_cons_TypedefDeclarator2 (ATerm);
static void print_cons_TypedefDeclarator2_1 (ATerm);
static void print_cons_TypedefDeclarator2_3 (ATerm);
static void print_cons_OldFunction1 (ATerm);
static void print_cons_OldFunction1_1 (ATerm);
static void print_cons_OldFunction1_3 (ATerm);
static void print_cons_OldFunction2 (ATerm);
static void print_cons_OldFunction2_1 (ATerm);
static void print_cons_OldFunction2_3 (ATerm);
static void print_cons_PpControl (ATerm);
static void print_cons_PpIf (ATerm);
static void print_cons_PpIf_2 (ATerm);
static void print_cons_PpIf_3 (ATerm);
static void print_cons_PpIf_3_1 (ATerm);
static void print_cons_PpIf_3_1_2 (ATerm);
static void print_cons_PpIf_4 (ATerm);
static void print_cons_PpIf_4_1 (ATerm);
static void print_cons_PpIf_4_1_2 (ATerm);
static void print_cons_IntConst (ATerm);
static void print_cons_HexConst (ATerm);
static void print_cons_OctConst (ATerm);
static void print_cons_FloatConst (ATerm);
static void print_cons_CharConst (ATerm);
static void print_cons_StringLit (ATerm);
static void print_cons_StringLit_1 (ATerm);
static void print_cons_PointerOf (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("*");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_PointerOf_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
}
pop_box();
}
static void print_cons_PointerOf_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Pointer (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Pointer_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_Pointer_2(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 2, "a Some(1) or a None(0)");
}
}
static void print_cons_Pointer_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Pointer_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_Pointer_2_1(arg);
}
}
static void print_cons_Pointer_2_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_ParamListVarArgs (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_ParamListVarArgs_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
print_string(",");
print_string("...");
print_string(")");
}
pop_box();
}
static void print_cons_ParamListVarArgs_1 (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
pop_box();
}
static void print_cons_ParamList (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_ParamList_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_ParamList_1 (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
pop_box();
}
static void print_cons_ArrayDecl (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_ArrayDecl_1(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 1, "a Some(1) or a None(0)");
}
print_string("[");
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_ArrayDecl_2(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 2, "a Some(1) or a None(0)");
}
print_string("]");
}
pop_box();
}
static void print_cons_ArrayDecl_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_ArrayDecl_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_DeclBracket (ATerm tree)
{
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
static void print_cons_FunType (ATerm tree)
{
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
static void print_cons_ParamDecl (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_ParamDecl_2(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 2, "a Some(1) or a None(0)");
}
}
pop_box();
}
static void print_cons_ParamDecl_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_ParamDecl_2_1(arg);
}
}
static void print_cons_ParamDecl_2_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_ParamDecl2_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_ParamDecl2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_ParamDecl2_1(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
static void print_cons_TypeName (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_TypeName_2(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 2, "a Some(1) or a None(0)");
}
}
static void print_cons_TypeName1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_TypeName1_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_TypeName1_2(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 2, "a Some(1) or a None(0)");
}
}
static void print_cons_TypeName1_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypeName_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypeName1_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Enum (ATerm tree)
{
print_string("enum");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_Enum_1(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 1, "a Some(1) or a None(0)");
}
print_string("{");
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Enum_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
print_string("}");
}
static void print_cons_Enum_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Enum_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
static void print_cons_EnumId (ATerm tree)
{
print_string("enum");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Enumerator (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_Enumerator_2(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 2, "a Some(1) or a None(0)");
}
}
static void print_cons_Enumerator_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_EnumVal (ATerm tree)
{
print_string("=");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Struct (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
print_string("struct");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_Struct_1(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 1, "a Some(1) or a None(0)");
}
}
pop_box();
print_string("{");
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Struct_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
}
pop_box();
print_string("}");
}
pop_box();
}
static void print_cons_Struct_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Struct_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_StructId (ATerm tree)
{
push_box(H, 0, 0, 1);
{
print_string("struct");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
pop_box();
}
static void print_cons_Union (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
print_string("union");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_Union_1(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 1, "a Some(1) or a None(0)");
}
}
pop_box();
print_string("{");
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Union_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
}
pop_box();
print_string("}");
}
pop_box();
}
static void print_cons_Union_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Union_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_UnionId (ATerm tree)
{
print_string("union");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_MemDecl (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_MemDecl_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
print_string(";");
}
pop_box();
}
pop_box();
}
static void print_cons_MemDecl_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
static void print_cons_MemDecl1 (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_MemDecl1_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_MemDecl1_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
print_string(";");
}
pop_box();
}
pop_box();
}
static void print_cons_MemDecl1_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_MemDecl1_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
static void print_cons_BitFieldSize (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_BitFieldSize_1(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 1, "a Some(1) or a None(0)");
}
print_string(":");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
static void print_cons_BitFieldSize_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_ArrayIndex (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("[");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string("]");
}
pop_box();
}
static void print_cons_FunCall (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_FunCall_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_FunCall_2 (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
pop_box();
}
static void print_cons_Field (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(".");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_DerefMember (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("->");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_PostIncr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("++");
}
pop_box();
}
static void print_cons_PostDecr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("--");
}
pop_box();
}
static void print_cons_PreIncr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("++");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
pop_box();
}
static void print_cons_PreDecr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("--");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
pop_box();
}
static void print_cons_Address (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("&");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_Deref (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("*");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_Positive (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("+");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_Negative (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("-");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_Tilde (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("~");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_Negation (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("!");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_SizeofExp (ATerm tree)
{
print_string("sizeof");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_SizeofType (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("sizeof");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
}
static void print_cons_TypeCast (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
static void print_cons_Mul (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("*");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Div (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("/");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Mod (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("%");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Add (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("+");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Subt (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("-");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_ShiftLeft (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("<<");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_ShiftRight (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(">>");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Lt (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("<");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Gt (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(">");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Le (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("<=");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Ge (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(">=");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Equal (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("==");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_NotEqual (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("!=");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_And (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("&");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_ExOr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("^");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_IncOr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("|");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_LAnd (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("&&");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_LOr (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("||");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_IfExp (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("(");
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("?");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string(":");
{
ATerm arg = ATgetArgument(tree, 2);
print(arg);
}
}
pop_box();
print_string(")");
}
pop_box();
}
static void print_cons_Assign (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 2);
print(arg);
}
}
pop_box();
}
static void print_cons_AssignEq (ATerm tree)
{
print_string("=");
}
static void print_cons_AssignMul (ATerm tree)
{
print_string("*=");
}
static void print_cons_AssignDiv (ATerm tree)
{
print_string("/=");
}
static void print_cons_AssignMod (ATerm tree)
{
print_string("%=");
}
static void print_cons_AssignPlus (ATerm tree)
{
print_string("+=");
}
static void print_cons_AssignMin (ATerm tree)
{
print_string("-=");
}
static void print_cons_AssignSL (ATerm tree)
{
print_string("<<=");
}
static void print_cons_AssignSR (ATerm tree)
{
print_string(">>=");
}
static void print_cons_AssignAnd (ATerm tree)
{
print_string("&=");
}
static void print_cons_AssignExp (ATerm tree)
{
print_string("^=");
}
static void print_cons_AssignOr (ATerm tree)
{
print_string("|=");
}
static void print_cons_Comma (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
static void print_cons_EmptyExp (ATerm tree)
{
}
static void print_cons_Typedef (ATerm tree)
{
print_string("typedef");
}
static void print_cons_Extern (ATerm tree)
{
print_string("extern");
}
static void print_cons_Static (ATerm tree)
{
print_string("static");
}
static void print_cons_Auto (ATerm tree)
{
print_string("auto");
}
static void print_cons_Register (ATerm tree)
{
print_string("register");
}
static void print_cons_Int (ATerm tree)
{
print_string("int");
}
static void print_cons_Char (ATerm tree)
{
print_string("char");
}
static void print_cons_Short (ATerm tree)
{
print_string("short");
}
static void print_cons_Long (ATerm tree)
{
print_string("long");
}
static void print_cons_Float (ATerm tree)
{
print_string("float");
}
static void print_cons_Double (ATerm tree)
{
print_string("double");
}
static void print_cons_Signed (ATerm tree)
{
print_string("signed");
}
static void print_cons_Unsigned (ATerm tree)
{
print_string("unsigned");
}
static void print_cons_Void (ATerm tree)
{
print_string("void");
}
static void print_cons_Const (ATerm tree)
{
print_string("const");
}
static void print_cons_Volatile (ATerm tree)
{
print_string("volatile");
}
static void print_cons_Declaration (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_Declaration_1(arg);
}
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Declaration_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
print_string(";");
}
pop_box();
}
pop_box();
}
static void print_cons_Declaration_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_Declaration_1_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Declaration_2 (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
pop_box();
}
static void print_cons_Declaration2 (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_Declaration2_1(arg);
}
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Declaration2_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
print_string(";");
}
pop_box();
}
pop_box();
}
static void print_cons_Declaration2_2 (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
pop_box();
}
static void print_cons_Declaration2_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_IdDeclInit (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("=");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_DeclInit (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string("=");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_ArrayInit (ATerm tree)
{
print_string("{");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_ArrayInit_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
print_string("}");
}
static void print_cons_ArrayInit_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
static void print_cons_ArrayInitIncomplete (ATerm tree)
{
print_string("{");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_ArrayInitIncomplete_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
print_string(",");
print_string("}");
}
static void print_cons_ArrayInitIncomplete_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
static void print_cons_AssignInit (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypeSpec (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_TypeSpec_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_TypeSpec_3((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 3, "a list");
}
}
pop_box();
}
static void print_cons_TypeSpec_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypeSpec_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_TypeSpec_3_1(arg);
}
}
static void print_cons_TypeSpec_3_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_DQualifiers (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_DQualifiers_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_DQualifiers_3((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 3, "a list");
}
}
static void print_cons_DQualifiers_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_DQualifiers_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_DeclSpec (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_DeclSpec_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_DeclSpec_3((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 3, "a list");
}
{
ATerm arg = ATgetArgument(tree, 3);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 4);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_DeclSpec_5((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 5, "a list");
}
}
static void print_cons_DeclSpec_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_DeclSpec_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_DeclSpec_5 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_DeclSpec_5_1(arg);
}
}
static void print_cons_DeclSpec_5_1 (ATerm tree)
{
if((ATgetAFun(tree) == AltFun))
{
ATerm arg = ATgetArgument(tree, 0);
int n;
if((ATgetType(arg) != AT_INT))
return(unexpected(tree, 1, "an integer"));
n = ATgetInt((ATermInt) arg);
arg = ATgetArgument(tree, 1);
if((ATgetType(arg) != AT_LIST))
unexpected(tree, 2, "a list");
if(ATisEmpty((ATermList) arg))
unexpected(tree, 2, "a non empty list");
{
ATerm tree = ATgetFirst((ATermList) arg);
if((n == 1))
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
else
if((n == 2))
{
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
else
{
ATfprintf(stderr, "Too big alt parameter in %a\n", tree);
exit(1);
}
}
}
else
print(tree);
}
static void print_cons_Id (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypeId (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Label (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(":");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_Case (ATerm tree)
{
push_box(H, 0, 0, 1);
{
print_string("case");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(":");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_Default (ATerm tree)
{
push_box(H, 0, 0, 1);
{
print_string("default");
print_string(":");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
pop_box();
}
static void print_cons_Compound (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(V, 0, 0, 1);
{
print_string("{");
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Compound_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_Compound_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
}
pop_box();
print_string("}");
}
pop_box();
}
static void print_cons_Compound_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Compound_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_Stat (ATerm tree)
{
push_box(H, 0, 0, 0);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(";");
}
pop_box();
}
static void print_cons_If (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 0);
{
print_string("if");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_IfElse (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 0);
{
print_string("if");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
push_box(V, 0, 0, 1);
{
print_string("else");
{
ATerm arg = ATgetArgument(tree, 2);
print(arg);
}
}
pop_box();
}
pop_box();
}
static void print_cons_Switch (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
print_string("switch");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_While (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
print_string("while");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
}
static void print_cons_DoWhile (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(V, 0, 0, 1);
{
print_string("do");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
pop_box();
push_box(H, 0, 0, 1);
{
print_string("while");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string(")");
print_string(";");
}
pop_box();
}
pop_box();
}
static void print_cons_For (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
print_string("for");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(";");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string(";");
{
ATerm arg = ATgetArgument(tree, 2);
print(arg);
}
print_string(")");
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 3);
print(arg);
}
}
pop_box();
}
static void print_cons_Goto (ATerm tree)
{
push_box(H, 0, 0, 1);
{
print_string("goto");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(";");
}
pop_box();
}
static void print_cons_Continue (ATerm tree)
{
push_box(H, 0, 0, 1);
{
print_string("continue");
print_string(";");
}
pop_box();
}
static void print_cons_Break (ATerm tree)
{
push_box(H, 0, 0, 1);
{
print_string("break");
print_string(";");
}
pop_box();
}
static void print_cons_Return (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("return");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
print_string(";");
}
pop_box();
}
static void print_cons_Exit (ATerm tree)
{
push_box(H, 0, 0, 0);
{
print_string("exit");
print_string("(");
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(")");
print_string(";");
}
pop_box();
}
static void print_cons_TranslationUnit (ATerm tree)
{
push_box(V, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_TranslationUnit_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
}
pop_box();
}
static void print_cons_TranslationUnit_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_FunDef (ATerm tree)
{
push_box(V, 0, 0, 1);
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
}
pop_box();
{
ATerm arg = ATgetArgument(tree, 2);
print(arg);
}
}
pop_box();
}
static void print_cons_NoTypeSpecifier (ATerm tree)
{
}
static void print_cons_IdDecl (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_IdDecl_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_IdDecl_3(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 3, "a Some(1) or a None(0)");
}
}
pop_box();
}
static void print_cons_IdDecl_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_IdDecl_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_FunDecl (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_FunDecl_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
print_string("(");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string(")");
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_FunDecl_3(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 3, "a Some(1) or a None(0)");
}
}
pop_box();
}
static void print_cons_FunDecl_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_FunDecl_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypedefDeclarator1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_TypedefDeclarator1_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_TypedefDeclarator1_3(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 3, "a Some(1) or a None(0)");
}
}
static void print_cons_TypedefDeclarator1_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypedefDeclarator1_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypedefDeclarator2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_TypedefDeclarator2_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
print_string("(");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string(")");
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_TypedefDeclarator2_3(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 3, "a Some(1) or a None(0)");
}
}
static void print_cons_TypedefDeclarator2_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_TypedefDeclarator2_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_OldFunction1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_OldFunction1_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string("(");
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_OldFunction1_3((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 3, "a list");
}
print_string(")");
}
static void print_cons_OldFunction1_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_OldFunction1_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
print_string(",");
}
static void print_cons_OldFunction2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_OldFunction2_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
print_string("(");
{
ATerm arg = ATgetArgument(tree, 1);
print(arg);
}
print_string(")");
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_OldFunction2_3(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 3, "a Some(1) or a None(0)");
}
}
static void print_cons_OldFunction2_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_OldFunction2_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_PpControl (ATerm tree)
{
push_box(H, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
pop_box();
}
static void print_cons_PpIf (ATerm tree)
{
push_box(V, 0, 0, 1);
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_PpIf_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
{
ATerm arg = ATgetArgument(tree, 2);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_PpIf_3((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 3, "a list");
}
{
ATerm arg = ATgetArgument(tree, 3);
if((ATgetAFun(arg) == SomeFun))
{
print_cons_PpIf_4(arg);
}
else
if((ATgetAFun(arg) != NoneFun))
unexpected(tree, 4, "a Some(1) or a None(0)");
}
push_box(H, 0, 0, 0);
{
print_string("#");
print_string("endif");
}
pop_box();
}
pop_box();
}
static void print_cons_PpIf_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_PpIf_3 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_PpIf_3_1(arg);
}
}
static void print_cons_PpIf_3_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_PpIf_3_1_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
}
static void print_cons_PpIf_3_1_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_PpIf_4 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print_cons_PpIf_4_1(arg);
}
}
static void print_cons_PpIf_4_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
{
ATerm arg = ATgetArgument(tree, 1);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_PpIf_4_1_2((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 2, "a list");
}
}
static void print_cons_PpIf_4_1_2 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_IntConst (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_HexConst (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_OctConst (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_FloatConst (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_CharConst (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print_cons_StringLit (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
if((ATgetType(arg) == AT_LIST))
{
ATermList l = (ATermList) arg;
while ( (ATgetLength(l) > 1) )
{
print_cons_StringLit_1((ATerm) l);
l = ATgetNext(l);
}
if(!(ATisEmpty(l)))
print(ATgetFirst(l));
}
else
unexpected(tree, 1, "a list");
}
}
static void print_cons_StringLit_1 (ATerm tree)
{
{
ATerm arg = ATgetArgument(tree, 0);
print(arg);
}
}
static void print (ATerm tree)
{
if((ATgetType(tree) == AT_BLOB))
{
print_string((char*) ATgetBlobData((ATermBlob) tree));
}
else
if((ATgetType(tree) == AT_INT))
print_int(ATgetInt((ATermInt) tree));
else
{
AFun cons = ATgetAFun(tree);
if((ATisQuoted(cons) && (ATgetArity(cons) == 0)))
print_string(ATgetName(cons));
else
if((cons == AmbFun))
{
ATerm a = ATgetArgument(tree, 0);
if((ATgetType(a) == AT_LIST))
{
ATermList l = (ATermList) a;
if(ATisEmpty(l))
unexpected(tree, 1, "a non empty list");
else
{
ATerm elt = ATgetFirst(l);
print(elt);
}
}
else
unexpected(tree, 1, "a list");
}
else
if((cons == var_cons_PointerOf))
print_cons_PointerOf(tree);
else
if((cons == var_cons_Pointer))
print_cons_Pointer(tree);
else
if((cons == var_cons_ParamListVarArgs))
print_cons_ParamListVarArgs(tree);
else
if((cons == var_cons_ParamList))
print_cons_ParamList(tree);
else
if((cons == var_cons_ArrayDecl))
print_cons_ArrayDecl(tree);
else
if((cons == var_cons_DeclBracket))
print_cons_DeclBracket(tree);
else
if((cons == var_cons_FunType))
print_cons_FunType(tree);
else
if((cons == var_cons_ParamDecl))
print_cons_ParamDecl(tree);
else
if((cons == var_cons_ParamDecl2))
print_cons_ParamDecl2(tree);
else
if((cons == var_cons_TypeName))
print_cons_TypeName(tree);
else
if((cons == var_cons_TypeName1))
print_cons_TypeName1(tree);
else
if((cons == var_cons_Enum))
print_cons_Enum(tree);
else
if((cons == var_cons_EnumId))
print_cons_EnumId(tree);
else
if((cons == var_cons_Enumerator))
print_cons_Enumerator(tree);
else
if((cons == var_cons_EnumVal))
print_cons_EnumVal(tree);
else
if((cons == var_cons_Struct))
print_cons_Struct(tree);
else
if((cons == var_cons_StructId))
print_cons_StructId(tree);
else
if((cons == var_cons_Union))
print_cons_Union(tree);
else
if((cons == var_cons_UnionId))
print_cons_UnionId(tree);
else
if((cons == var_cons_MemDecl))
print_cons_MemDecl(tree);
else
if((cons == var_cons_MemDecl1))
print_cons_MemDecl1(tree);
else
if((cons == var_cons_BitFieldSize))
print_cons_BitFieldSize(tree);
else
if((cons == var_cons_ArrayIndex))
print_cons_ArrayIndex(tree);
else
if((cons == var_cons_FunCall))
print_cons_FunCall(tree);
else
if((cons == var_cons_Field))
print_cons_Field(tree);
else
if((cons == var_cons_DerefMember))
print_cons_DerefMember(tree);
else
if((cons == var_cons_PostIncr))
print_cons_PostIncr(tree);
else
if((cons == var_cons_PostDecr))
print_cons_PostDecr(tree);
else
if((cons == var_cons_PreIncr))
print_cons_PreIncr(tree);
else
if((cons == var_cons_PreDecr))
print_cons_PreDecr(tree);
else
if((cons == var_cons_Address))
print_cons_Address(tree);
else
if((cons == var_cons_Deref))
print_cons_Deref(tree);
else
if((cons == var_cons_Positive))
print_cons_Positive(tree);
else
if((cons == var_cons_Negative))
print_cons_Negative(tree);
else
if((cons == var_cons_Tilde))
print_cons_Tilde(tree);
else
if((cons == var_cons_Negation))
print_cons_Negation(tree);
else
if((cons == var_cons_SizeofExp))
print_cons_SizeofExp(tree);
else
if((cons == var_cons_SizeofType))
print_cons_SizeofType(tree);
else
if((cons == var_cons_TypeCast))
print_cons_TypeCast(tree);
else
if((cons == var_cons_Mul))
print_cons_Mul(tree);
else
if((cons == var_cons_Div))
print_cons_Div(tree);
else
if((cons == var_cons_Mod))
print_cons_Mod(tree);
else
if((cons == var_cons_Add))
print_cons_Add(tree);
else
if((cons == var_cons_Subt))
print_cons_Subt(tree);
else
if((cons == var_cons_ShiftLeft))
print_cons_ShiftLeft(tree);
else
if((cons == var_cons_ShiftRight))
print_cons_ShiftRight(tree);
else
if((cons == var_cons_Lt))
print_cons_Lt(tree);
else
if((cons == var_cons_Gt))
print_cons_Gt(tree);
else
if((cons == var_cons_Le))
print_cons_Le(tree);
else
if((cons == var_cons_Ge))
print_cons_Ge(tree);
else
if((cons == var_cons_Equal))
print_cons_Equal(tree);
else
if((cons == var_cons_NotEqual))
print_cons_NotEqual(tree);
else
if((cons == var_cons_And))
print_cons_And(tree);
else
if((cons == var_cons_ExOr))
print_cons_ExOr(tree);
else
if((cons == var_cons_IncOr))
print_cons_IncOr(tree);
else
if((cons == var_cons_LAnd))
print_cons_LAnd(tree);
else
if((cons == var_cons_LOr))
print_cons_LOr(tree);
else
if((cons == var_cons_IfExp))
print_cons_IfExp(tree);
else
if((cons == var_cons_Assign))
print_cons_Assign(tree);
else
if((cons == var_cons_AssignEq))
print_cons_AssignEq(tree);
else
if((cons == var_cons_AssignMul))
print_cons_AssignMul(tree);
else
if((cons == var_cons_AssignDiv))
print_cons_AssignDiv(tree);
else
if((cons == var_cons_AssignMod))
print_cons_AssignMod(tree);
else
if((cons == var_cons_AssignPlus))
print_cons_AssignPlus(tree);
else
if((cons == var_cons_AssignMin))
print_cons_AssignMin(tree);
else
if((cons == var_cons_AssignSL))
print_cons_AssignSL(tree);
else
if((cons == var_cons_AssignSR))
print_cons_AssignSR(tree);
else
if((cons == var_cons_AssignAnd))
print_cons_AssignAnd(tree);
else
if((cons == var_cons_AssignExp))
print_cons_AssignExp(tree);
else
if((cons == var_cons_AssignOr))
print_cons_AssignOr(tree);
else
if((cons == var_cons_Comma))
print_cons_Comma(tree);
else
if((cons == var_cons_EmptyExp))
print_cons_EmptyExp(tree);
else
if((cons == var_cons_Typedef))
print_cons_Typedef(tree);
else
if((cons == var_cons_Extern))
print_cons_Extern(tree);
else
if((cons == var_cons_Static))
print_cons_Static(tree);
else
if((cons == var_cons_Auto))
print_cons_Auto(tree);
else
if((cons == var_cons_Register))
print_cons_Register(tree);
else
if((cons == var_cons_Int))
print_cons_Int(tree);
else
if((cons == var_cons_Char))
print_cons_Char(tree);
else
if((cons == var_cons_Short))
print_cons_Short(tree);
else
if((cons == var_cons_Long))
print_cons_Long(tree);
else
if((cons == var_cons_Float))
print_cons_Float(tree);
else
if((cons == var_cons_Double))
print_cons_Double(tree);
else
if((cons == var_cons_Signed))
print_cons_Signed(tree);
else
if((cons == var_cons_Unsigned))
print_cons_Unsigned(tree);
else
if((cons == var_cons_Void))
print_cons_Void(tree);
else
if((cons == var_cons_Const))
print_cons_Const(tree);
else
if((cons == var_cons_Volatile))
print_cons_Volatile(tree);
else
if((cons == var_cons_Declaration))
print_cons_Declaration(tree);
else
if((cons == var_cons_Declaration2))
print_cons_Declaration2(tree);
else
if((cons == var_cons_IdDeclInit))
print_cons_IdDeclInit(tree);
else
if((cons == var_cons_DeclInit))
print_cons_DeclInit(tree);
else
if((cons == var_cons_ArrayInit))
print_cons_ArrayInit(tree);
else
if((cons == var_cons_ArrayInitIncomplete))
print_cons_ArrayInitIncomplete(tree);
else
if((cons == var_cons_AssignInit))
print_cons_AssignInit(tree);
else
if((cons == var_cons_TypeSpec))
print_cons_TypeSpec(tree);
else
if((cons == var_cons_DQualifiers))
print_cons_DQualifiers(tree);
else
if((cons == var_cons_DeclSpec))
print_cons_DeclSpec(tree);
else
if((cons == var_cons_Id))
print_cons_Id(tree);
else
if((cons == var_cons_TypeId))
print_cons_TypeId(tree);
else
if((cons == var_cons_Label))
print_cons_Label(tree);
else
if((cons == var_cons_Case))
print_cons_Case(tree);
else
if((cons == var_cons_Default))
print_cons_Default(tree);
else
if((cons == var_cons_Compound))
print_cons_Compound(tree);
else
if((cons == var_cons_Stat))
print_cons_Stat(tree);
else
if((cons == var_cons_If))
print_cons_If(tree);
else
if((cons == var_cons_IfElse))
print_cons_IfElse(tree);
else
if((cons == var_cons_Switch))
print_cons_Switch(tree);
else
if((cons == var_cons_While))
print_cons_While(tree);
else
if((cons == var_cons_DoWhile))
print_cons_DoWhile(tree);
else
if((cons == var_cons_For))
print_cons_For(tree);
else
if((cons == var_cons_Goto))
print_cons_Goto(tree);
else
if((cons == var_cons_Continue))
print_cons_Continue(tree);
else
if((cons == var_cons_Break))
print_cons_Break(tree);
else
if((cons == var_cons_Return))
print_cons_Return(tree);
else
if((cons == var_cons_Exit))
print_cons_Exit(tree);
else
if((cons == var_cons_TranslationUnit))
print_cons_TranslationUnit(tree);
else
if((cons == var_cons_FunDef))
print_cons_FunDef(tree);
else
if((cons == var_cons_NoTypeSpecifier))
print_cons_NoTypeSpecifier(tree);
else
if((cons == var_cons_IdDecl))
print_cons_IdDecl(tree);
else
if((cons == var_cons_FunDecl))
print_cons_FunDecl(tree);
else
if((cons == var_cons_TypedefDeclarator1))
print_cons_TypedefDeclarator1(tree);
else
if((cons == var_cons_TypedefDeclarator2))
print_cons_TypedefDeclarator2(tree);
else
if((cons == var_cons_OldFunction1))
print_cons_OldFunction1(tree);
else
if((cons == var_cons_OldFunction2))
print_cons_OldFunction2(tree);
else
if((cons == var_cons_PpControl))
print_cons_PpControl(tree);
else
if((cons == var_cons_PpIf))
print_cons_PpIf(tree);
else
if((cons == var_cons_IntConst))
print_cons_IntConst(tree);
else
if((cons == var_cons_HexConst))
print_cons_HexConst(tree);
else
if((cons == var_cons_OctConst))
print_cons_OctConst(tree);
else
if((cons == var_cons_FloatConst))
print_cons_FloatConst(tree);
else
if((cons == var_cons_CharConst))
print_cons_CharConst(tree);
else
if((cons == var_cons_StringLit))
print_cons_StringLit(tree);
else
{
ATfprintf(stderr, "Unknown constructor: %a\n", tree);
exit(1);
}
}
}
ATerm pp_c_0_0 (StrSL sl, ATerm t)
{
ATerm out;
static int was_init = 0;
if(!(was_init))
{
init();
was_init = 1;
}
init_stack();
out = xtc_new_file_0_0(NULL, t);
if((out == NULL))
return(NULL);
stream = fopen(ATgetName(ATgetAFun(out)), "w");
if((stream == NULL))
return(NULL);
print(t);
print_string("\n");
fclose(stream);
return(ATmake("FILE(<term>)", out));
}
