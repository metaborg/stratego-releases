#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_True_0;
static Symbol sym_False_0;
static Symbol sym_Var_1;
static Symbol sym_Int_1;
static Symbol sym_String_1;
static Symbol sym_Mul_2;
static Symbol sym_Div_2;
static Symbol sym_Mod_2;
static Symbol sym_Add_2;
static Symbol sym_Sub_2;
static Symbol sym_Lt_2;
static Symbol sym_Gt_2;
static Symbol sym_Equ_2;
static Symbol sym_Neq_2;
static Symbol sym_FunCall_2;
static Symbol sym_TypeName_1;
static Symbol sym_Declaration_1;
static Symbol sym_DeclarationTyped_2;
static Symbol sym_Assign_2;
static Symbol sym_Block_1;
static Symbol sym_IfThen_2;
static Symbol sym_IfElse_3;
static Symbol sym_While_2;
static Symbol sym_For_4;
static Symbol sym_Break_1;
static Symbol sym_Continue_1;
static Symbol sym_Labeled_2;
static Symbol sym_Try_2;
static Symbol sym_Try_3;
static Symbol sym_Throw_1;
static Symbol sym_Catch_3;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_True_0 = ATmakeSymbol("True", 0, ATfalse);
ATprotectSymbol(sym_True_0);
sym_False_0 = ATmakeSymbol("False", 0, ATfalse);
ATprotectSymbol(sym_False_0);
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
ATprotectSymbol(sym_Int_1);
sym_String_1 = ATmakeSymbol("String", 1, ATfalse);
ATprotectSymbol(sym_String_1);
sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
ATprotectSymbol(sym_Mul_2);
sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
ATprotectSymbol(sym_Div_2);
sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
ATprotectSymbol(sym_Mod_2);
sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
ATprotectSymbol(sym_Add_2);
sym_Sub_2 = ATmakeSymbol("Sub", 2, ATfalse);
ATprotectSymbol(sym_Sub_2);
sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
ATprotectSymbol(sym_Lt_2);
sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
ATprotectSymbol(sym_Gt_2);
sym_Equ_2 = ATmakeSymbol("Equ", 2, ATfalse);
ATprotectSymbol(sym_Equ_2);
sym_Neq_2 = ATmakeSymbol("Neq", 2, ATfalse);
ATprotectSymbol(sym_Neq_2);
sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
ATprotectSymbol(sym_FunCall_2);
sym_TypeName_1 = ATmakeSymbol("TypeName", 1, ATfalse);
ATprotectSymbol(sym_TypeName_1);
sym_Declaration_1 = ATmakeSymbol("Declaration", 1, ATfalse);
ATprotectSymbol(sym_Declaration_1);
sym_DeclarationTyped_2 = ATmakeSymbol("DeclarationTyped", 2, ATfalse);
ATprotectSymbol(sym_DeclarationTyped_2);
sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
ATprotectSymbol(sym_Assign_2);
sym_Block_1 = ATmakeSymbol("Block", 1, ATfalse);
ATprotectSymbol(sym_Block_1);
sym_IfThen_2 = ATmakeSymbol("IfThen", 2, ATfalse);
ATprotectSymbol(sym_IfThen_2);
sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
ATprotectSymbol(sym_IfElse_3);
sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
ATprotectSymbol(sym_While_2);
sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
ATprotectSymbol(sym_For_4);
sym_Break_1 = ATmakeSymbol("Break", 1, ATfalse);
ATprotectSymbol(sym_Break_1);
sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
ATprotectSymbol(sym_Continue_1);
sym_Labeled_2 = ATmakeSymbol("Labeled", 2, ATfalse);
ATprotectSymbol(sym_Labeled_2);
sym_Try_2 = ATmakeSymbol("Try", 2, ATfalse);
ATprotectSymbol(sym_Try_2);
sym_Try_3 = ATmakeSymbol("Try", 3, ATfalse);
ATprotectSymbol(sym_Try_3);
sym_Throw_1 = ATmakeSymbol("Throw", 1, ATfalse);
ATprotectSymbol(sym_Throw_1);
sym_Catch_3 = ATmakeSymbol("Catch", 3, ATfalse);
ATprotectSymbol(sym_Catch_3);
}
static ATerm term135;
static ATerm term134;
static ATerm term133;
static ATerm term132;
static ATerm term131;
static ATerm term130;
static ATerm term129;
static ATerm term128;
static ATerm term127;
static ATerm term126;
static ATerm term125;
static ATerm term124;
static ATerm term123;
static ATerm term122;
static ATerm term121;
static ATerm term120;
static ATerm term119;
static ATerm term118;
static ATerm term117;
static ATerm term116;
static ATerm term115;
static ATerm term114;
static ATerm term113;
static ATerm term112;
static ATerm term111;
static ATerm term110;
static ATerm term109;
static ATerm term108;
static ATerm term107;
static ATerm term106;
static ATerm term105;
static ATerm term104;
static ATerm term103;
static ATerm term102;
static ATerm term101;
static ATerm term100;
static ATerm term99;
static ATerm term98;
static ATerm term97;
static ATerm term96;
static ATerm term95;
static ATerm term94;
static ATerm term93;
static ATerm term92;
static ATerm term91;
static ATerm term90;
static ATerm term89;
static ATerm term88;
static ATerm term87;
static ATerm term86;
static ATerm term85;
static ATerm term84;
static ATerm term83;
static ATerm term82;
static ATerm term81;
static ATerm term80;
static ATerm term79;
static ATerm term78;
static ATerm term77;
static ATerm term76;
static ATerm term75;
static ATerm term74;
static ATerm term73;
static ATerm term72;
static ATerm term71;
static ATerm term70;
static ATerm term69;
static ATerm term68;
static ATerm term67;
static ATerm term66;
static ATerm term65;
static ATerm term64;
static ATerm term63;
static ATerm term62;
static ATerm term61;
static ATerm term60;
static ATerm term59;
static ATerm term58;
static ATerm term57;
static ATerm term56;
static ATerm term55;
static ATerm term54;
static ATerm term53;
static ATerm term52;
static ATerm term51;
static ATerm term50;
static ATerm term49;
static ATerm term48;
static ATerm term47;
static ATerm term46;
static ATerm term45;
static ATerm term44;
static ATerm term43;
static ATerm term42;
static ATerm term41;
static ATerm term40;
static ATerm term39;
static ATerm term38;
static ATerm term37;
static ATerm term36;
static ATerm term35;
static ATerm term34;
static ATerm term33;
static ATerm term32;
static ATerm term31;
static ATerm term30;
static ATerm term29;
static ATerm term28;
static ATerm term27;
static ATerm term26;
static ATerm term25;
static ATerm term24;
static ATerm term23;
static ATerm term22;
static ATerm term21;
static ATerm term20;
static ATerm term19;
static ATerm term18;
static ATerm term17;
static ATerm term16;
static ATerm term15;
static ATerm term14;
static ATerm term13;
static ATerm term12;
static ATerm term11;
static ATerm term10;
static ATerm term9;
static ATerm term8;
static ATerm term7;
static ATerm term6;
static ATerm term5;
static ATerm term4;
static ATerm term3;
static ATerm term2;
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("VarUnion", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("select", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("1dda526076b6bdeb66a3b8571d42fbad", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_True_0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_False_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Program", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("til/syn/TIL.tbl", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("MemoTILParseTable", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("701969a6c1bc9c512283507cd9faf808", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Dynamic Rules Library -- Var Union (meaningless trasformation for testing only)", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("Check basic union test #3", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       f(x);", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       f(1);", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("Check basic union test #1", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       if c() then x := 1; else x := 2; end\n       f(x);", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       if c() then x := 1; else x := 2; end\n       f(selectx(2, 1));", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Check basic union test #2", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         if c() then x := 2; end\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         if c() then x := 2; end\n       end\n       f(selectx(2, 1));", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("Check exception union test #2", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         if c() then x := 2; break; end\n         if c() then x := 3; break; end\n         x := 1;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         if c() then x := 2; break; end\n         if c() then x := 3; break; end\n         x := 1;\n       end\n       f(selectx(1, 3, 2));", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break union test #1", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 1; break;\n         else if c() then x := 1; else x := 1; break; end\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(1);\n         if c() then x := 1; break;\n         else if c() then x := 1; else x := 1; break; end\n         end\n         f(1);\n       end\n       f(1);", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break union test #2", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 2; break;\n         else if c() then x := 1; else x := 2; break; end\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(1);\n         if c() then x := 2; break;\n         else if c() then x := 1; else x := 2; break; end\n         end\n         f(1);\n       end\n       f(selectx(1, 2));", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break union test #3", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 1; break;\n         else if c() then x := 2; else x := 1; break; end\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(selectx(2, 1));\n         if c() then x := 1; break;\n         else if c() then x := 2; else x := 1; break; end\n         end\n         f(2);\n       end\n       f(selectx(2, 1));", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break union test #4", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 1; break;\n         else if c() then x := 2; else x := 3; break; end\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(selectx(2, 1));\n         if c() then x := 1; break;\n         else if c() then x := 2; else x := 3; break; end\n         end\n         f(2);\n       end\n       f(selectx(2, 3, 1));", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break union test #5", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 2; break;\n         else if c() then x := 1; else x := 3; break; end\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(1);\n         if c() then x := 2; break;\n         else if c() then x := 1; else x := 3; break; end\n         end\n         f(1);\n       end\n       f(selectx(1, 3, 2));", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break union test #6", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: while c() do\n         if c() then x := 1; break; else x := 1; end\n         f(x); x := 2;\n         l2 : while c() do\n           if c() then x := 3; break l1; end\n           x := 2;\n         end\n         f(x); x := 1;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: while c() do\n         if c() then x := 1; break; else x := 1; end\n         f(1); x := 2;\n         l2 : while c() do\n           if c() then x := 3; break l1; end\n           x := 2;\n         end\n         f(2); x := 1;\n       end\n       f(selectx(3, 1));", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break to label union test #1", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       x := 1;\n       l1: while c() do\n         if c() then x := 0; break l1; else x := 1; end\n         f(x); x := 2;\n         l2 : while c() do\n           if c() then x := 1; break l1; end\n           if c() then x := 6; break l2; end\n           f(x); x := 3;\n           l3: while c() do\n             if c() then x := 3; break l1; end\n             if c() then x := 4; break l2; end\n             if c() then x := 5; break l3; end\n             f(x); x := 3;\n           end\n           f(x); x := 2;\n         end\n         f(x); x := 1;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       x := 1;\n       l1: while c() do\n         if c() then x := 0; break l1; else x := 1; end\n         f(1); x := 2;\n         l2 : while c() do\n           if c() then x := 1; break l1; end\n           if c() then x := 6; break l2; end\n           f(2); x := 3;\n           l3: while c() do\n             if c() then x := 3; break l1; end\n             if c() then x := 4; break l2; end\n             if c() then x := 5; break l3; end\n             f(3); x := 3;\n           end\n           f(selectx(3, 5)); x := 2;\n         end\n         f(selectx(2, 4, 6)); x := 1;\n       end\n       f(selectx(3, 1, 0));", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break to label union test #2", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: begin\n         if c() then x := 1; break l1; else x := 1; break; end\n         if c() then x := 2; break l1; end\n         f(x); x := 2;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: begin\n         if c() then x := 1; break l1; else x := 1; break; end\n         if c() then x := 2; break l1; end\n         f(1); x := 2;\n       end\n       f(selectx(2, 1));", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break to label union test #3", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 2;\n       l1: begin\n         if c() then x := 1; break l1; else x := 2; end\n         l2: begin\n           x := 2;\n           if c() then x := 2; else x := 2; break l2; end\n           if c() then x := 2; else x := 3; break l1; end\n           if c() then x := 4; break; end\n           f(x);\n         end\n         f(x);\n         if c() then x := 2; else x := 5; break; end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 2;\n       l1: begin\n         if c() then x := 1; break l1; else x := 2; end\n         l2: begin\n           x := 2;\n           if c() then x := 2; else x := 2; break l2; end\n           if c() then x := 2; else x := 3; break l1; end\n           if c() then x := 4; break; end\n           f(2);\n         end\n         f(selectx(4, 2));\n         if c() then x := 2; else x := 5; break; end\n         f(2);\n       end\n       f(selectx(2, 5, 3, 1));", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break to label union test #4", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 2; continue; else x := 1; end\n         if c() then x := 5; else if c() then x := 3; continue; else x := 5; end end\n         f(x); x := 4;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(selectx(4, 3, 2, 1));\n         if c() then x := 2; continue; else x := 1; end\n         if c() then x := 5; else if c() then x := 3; continue; else x := 5; end end\n         f(5); x := 4;\n       end\n       f(selectx(4, 3, 2, 1));", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Check continue union test #1", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(x);\n         if c() then x := 2; continue;\n         else if c() then x := 3; else x := 2; continue; end\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       while c() do\n         f(selectx(3, 2, 1));\n         if c() then x := 2; continue;\n         else if c() then x := 3; else x := 2; continue; end\n         end\n         f(3);\n       end\n       f(selectx(3, 2, 1));", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("Check continuing union test #2", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: while c() do\n         f(x);\n         if c() then x := 2; continue; else x := 3; end\n         f(x); x := 4;\n         l2 : while c() do\n           f(x);\n           if c() then x := 5; continue l1; end\n           if c() then x := 8; continue; end\n           x := 6;\n         end\n         f(x); x := 7;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: while c() do\n         f(selectx(7, 5, 2, 1));\n         if c() then x := 2; continue; else x := 3; end\n         f(3); x := 4;\n         l2 : while c() do\n           f(selectx(6, 8, 4));\n           if c() then x := 5; continue l1; end\n           if c() then x := 8; continue; end\n           x := 6;\n         end\n         f(selectx(6, 8, 4)); x := 7;\n       end\n       f(selectx(7, 5, 2, 1));", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("Check continue union test #3", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: while c() do\n         f(x); if c() then x := 2; break; else x := 3; end\n         l2: while c() do\n           f(x); if c() then x := 4; continue l1; end\n           if c() then x := 5; break; end\n           if c() then x := 6; continue; end\n           l3: while c() do\n             f(x); if c() then x := 7; break l2; end\n             if c() then x := 8; continue l3; end\n             if c() then x := 9; break l1; end\n             if c() then x := 10; continue l2; end\n             if c() then x := 11; continue l1; end\n             if c() then x := 12; break l3; end\n           end\n           f(x);\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 1;\n       l1: while c() do\n         f(selectx(8, 12, 10, 6, 3, 7, 5, 11, 4, 1));\n         if c() then x := 2; break; else x := 3; end\n         l2: while c() do\n           f(selectx(8, 12, 10, 6, 3)); if c() then x := 4; continue l1; end\n           if c() then x := 5; break; end\n           if c() then x := 6; continue; end\n           l3: while c() do\n             f(selectx(8, 12, 10, 6, 3)); if c() then x := 7; break l2; end\n             if c() then x := 8; continue l3; end\n             if c() then x := 9; break l1; end\n             if c() then x := 10; continue l2; end\n             if c() then x := 11; continue l1; end\n             if c() then x := 12; break l3; end\n           end\n           f(selectx(8, 10, 6, 3, 12));\n         end\n         f(selectx(8, 12, 10, 6, 3, 7, 5));\n       end\n       f(selectx(8, 12, 10, 6, 3, 7, 5, 11, 4, 1, 9, 2));", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break/continue union test #1", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       try\n         x := 1;\n         try\n           if c() then x := 2; throw A; end\n           if c() then x := 3; throw E; end\n           if c() then x := 4; throw F; end\n           if c() then\n             if c() then x := 5; throw A; else x := 6; throw E; end\n           else\n             x := 7;\n           end\n         catch (a: A)\n           f(x); x := 8;\n           if c() then throw E; end\n         end\n         f(x);\n         if c() then throw F; end\n         x := 9;\n       catch (e: E)\n         f(x);\n         try\n           if c() then x := 10; throw B; else x := 11; end\n         catch (b: B)\n           f(x);\n         end\n       catch (f: F)\n         f(x); x := 12;\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       try\n         x := 1;\n         try\n           if c() then x := 2; throw A; end\n           if c() then x := 3; throw E; end\n           if c() then x := 4; throw F; end\n           if c() then\n             if c() then x := 5; throw A; else x := 6; throw E; end\n           else\n             x := 7;\n           end\n         catch (a: A)\n           f(selectx(5, 2)); x := 8;\n           if c() then throw E; end\n         end\n         f(selectx(7, 8));\n         if c() then throw F; end\n         x := 9;\n       catch (e: E)\n         f(selectx(8, 6, 3));\n         try\n           if c() then x := 10; throw B; else x := 11; end\n         catch (b: B)\n           f(10);\n         end\n       catch (f: F)\n         f(selectx(7, 8, 4)); x := 12;\n       end\n       f(selectx(9, 12, 11, 10));", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("Check exception union test #1", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       try\n         x := 1;\n         try\n           if c() then x := 2; throw A; end\n           if c() then x := 3; throw E; end\n           if c() then x := 4; throw F; end\n           if c() then\n             if c() then x := 5; throw A; else x := 6; throw E; end\n           else\n             x := 7;\n           end\n         catch (a: A)\n           f(x); x := 8;\n           if c() then throw E; end\n         finally\n           f(x); if c() then x := 9; throw E; else x := 10; throw F; end\n         end\n       catch (e: E)\n         f(x);\n         try\n           if c() then x := 11; throw B; else x := 12; end\n         catch (b: B)\n           f(x);\n         end\n       catch (f: F)\n         f(x); x := 13;\n       finally\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("var x;\n       try\n         x := 1;\n         try\n           if c() then x := 2; throw A; end\n           if c() then x := 3; throw E; end\n           if c() then x := 4; throw F; end\n           if c() then\n             if c() then x := 5; throw A; else x := 6; throw E; end\n           else\n             x := 7;\n           end\n         catch (a: A)\n           f(selectx(5, 2)); x := 8;\n           if c() then throw E; end\n         finally\n           f(selectx(7, 8, 6, 4, 3));\n           if c() then x := 9; throw E; else x := 10; throw F; end\n         end\n       catch (e: E)\n         f(9);\n         try\n           if c() then x := 11; throw B; else x := 12; end\n         catch (b: B)\n           f(11);\n         end\n       catch (f: F)\n         f(10); x := 13;\n       finally\n         f(selectx(13, 12, 11));\n       end\n       f(selectx(13, 12, 11));", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm fetch_elem_1_0 (StrSL sl, StrCL a_160, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL r_159, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL v_157, ATerm t);
ATerm zip_1_1 (StrSL sl, StrCL y_153, ATerm x_153, ATerm t);
ATerm dr_complete_exception_block_union_0_1 (StrSL sl, ATerm y_148, ATerm t);
ATerm dr_complete_finally_union_1_1 (StrSL sl, StrCL u_148, ATerm t_148, ATerm t);
ATerm dr_complete_catch_union_1_1 (StrSL sl, StrCL s_148, ATerm p_148, ATerm t);
ATerm dr_label_union_1_2 (StrSL sl, StrCL c_148, ATerm y_147, ATerm z_147, ATerm t);
ATerm dr_fix_and_union_1_2 (StrSL sl, StrCL q_147, ATerm o_147, ATerm p_147, ATerm t);
ATerm dr_fix_and_union_1_1 (StrSL sl, StrCL l_147, ATerm k_147, ATerm t);
ATerm dr_fork_and_union_2_1 (StrSL sl, StrCL z_146, StrCL a_147, ATerm y_146, ATerm t);
ATerm dr_throw_1_2 (StrSL sl, StrCL f_146, ATerm d_146, ATerm e_146, ATerm t);
ATerm dr_init_exception_block_1_2 (StrSL sl, StrCL c_146, ATerm a_146, ATerm b_146, ATerm t);
ATerm dr_continue_0_2 (StrSL sl, ATerm y_145, ATerm z_145, ATerm t);
ATerm dr_continue_0_1 (StrSL sl, ATerm x_145, ATerm t);
ATerm dr_break_0_2 (StrSL sl, ATerm r_145, ATerm s_145, ATerm t);
ATerm dr_break_0_1 (StrSL sl, ATerm q_145, ATerm t);
ATerm dr_destroy_change_set_0_0 (StrSL sl, ATerm t);
ATerm dr_destroy_scope_0_0 (StrSL sl, ATerm t);
ATerm dr_new_rule_set_0_0 (StrSL sl, ATerm t);
ATerm dr_undefine_rule_vis_0_3 (StrSL sl, ATerm g_137, ATerm h_137, ATerm i_137, ATerm t);
ATerm dr_undefine_rule_0_2 (StrSL sl, ATerm v_136, ATerm z_136, ATerm t);
ATerm dr_set_rule_vis_0_4 (StrSL sl, ATerm v_135, ATerm i_136, ATerm j_136, ATerm n_136, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm o_135, ATerm p_135, ATerm q_135, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm h_135, ATerm i_135, ATerm t);
ATerm dr_label_scope_0_2 (StrSL sl, ATerm v_134, ATerm w_134, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL l_134, ATerm h_134, ATerm t);
ATerm dr_switch_rule_set_0_1 (StrSL sl, ATerm g_134, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL w_129, ATerm t);
ATerm eq_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm ltS_0_0 (StrSL sl, ATerm t);
ATerm gtS_0_0 (StrSL sl, ATerm t);
ATerm modS_0_0 (StrSL sl, ATerm t);
ATerm divS_0_0 (StrSL sl, ATerm t);
ATerm mulS_0_0 (StrSL sl, ATerm t);
ATerm subtS_0_0 (StrSL sl, ATerm t);
ATerm addS_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL b_105, StrCL c_105, StrCL d_105, StrCL e_105, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL z_104, StrCL a_105, ATerm t);
ATerm open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm parse_string_0_2 (StrSL sl, ATerm u_85, ATerm g_86, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
ATerm MemoTILParseTable_0_0 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
ATerm bagof_VarUnion_0_0 (StrSL sl, ATerm t);
ATerm Assign_2_0 (StrSL sl, StrCL p_39, StrCL q_39, ATerm t);
ATerm IfThen_2_0 (StrSL sl, StrCL m_39, StrCL n_39, ATerm t);
ATerm IfElse_3_0 (StrSL sl, StrCL j_39, StrCL k_39, StrCL l_39, ATerm t);
ATerm While_2_0 (StrSL sl, StrCL h_39, StrCL i_39, ATerm t);
ATerm For_4_0 (StrSL sl, StrCL d_39, StrCL e_39, StrCL f_39, StrCL g_39, ATerm t);
ATerm Labeled_2_0 (StrSL sl, StrCL z_38, StrCL a_39, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
ATerm vu_break_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
ATerm vu_basic_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
ATerm dr_ignore_state_cleanup_1_1 (StrSL sl, StrCL g_84, ATerm h_84, ATerm t);
ATerm get_til_parse_table_0_0 (StrSL sl, ATerm t);
ATerm parse_til_0_0 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
ATerm apply_varunion_test_1_2 (StrSL sl, StrCL m_27, ATerm k_27, ATerm l_27, ATerm t);
ATerm EvalExp_0_0 (StrSL sl, ATerm t);
ATerm EvalIf_0_0 (StrSL sl, ATerm t);
ATerm compare_1_0 (StrSL sl, StrCL d_15, ATerm t);
ATerm EvalNeq_0_0 (StrSL sl, ATerm t);
ATerm EvalMod_0_0 (StrSL sl, ATerm t);
ATerm EvalDiv_0_0 (StrSL sl, ATerm t);
ATerm EvalMul_0_0 (StrSL sl, ATerm t);
ATerm EvalSub_0_0 (StrSL sl, ATerm t);
ATerm EvalAdd_0_0 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm varunion_try_catch_finally_0_0 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
ATerm varunion_try_catch_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm varunion_labeled_stm_0_0 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
ATerm varunion_for_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
ATerm varunion_labeled_while_0_0 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm varunion_while_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm varunion_if_then_else_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm varunion_if_then_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm varunion_assign_0_0 (StrSL sl, ATerm t);
ATerm varunion_declaration_0_0 (StrSL sl, ATerm t);
ATerm apply_VarUnion_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm varunion_0_0 (StrSL sl, ATerm t);
ATerm MemoTILParseTable_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MemoTILParseTable_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm r_83 = NULL,s_83 = NULL,u_83 = NULL,v_83 = NULL,x_83 = NULL,y_83 = NULL,a_84 = NULL;
sl_init_var(0, r_83);
{
struct str_closure u_196 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(u_196);
if((r_83 == NULL))
{
r_83 = t;
}
else
if((r_83 != t))
goto fail94 ;
u_83 = t;
y_83 = t;
t = term17;
v_83 = t;
t = y_83;
a_84 = t;
t = (ATerm) ATinsert(ATempty, term5);
x_83 = t;
t = a_84;
t = dr_lookup_rule_0_2(sl, v_83, x_83, t);
if((t == NULL))
goto fail94 ;
s_83 = t;
t = u_83;
t = s_83;
t = fetch_elem_1_0(sl, lifted100_cl, t);
if((t == NULL))
goto fail94 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_192 = NULL,o_192 = NULL,l_192 = NULL,n_192 = NULL;
o_192 = t;
if((sl_readvar(0, sl) == NULL))
goto fail95 ;
else
{
t = sl_readvar(0, sl);
}
k_192 = t;
t = o_192;
if(match_cons(t, sym__2))
{
ATerm trm98 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm98) == ATmakeSymbol("701969a6c1bc9c512283507cd9faf808", 0, ATtrue))))
goto fail95 ;
l_192 = ATgetArgument(t, 1);
}
else
goto fail95 ;
n_192 = t;
t = k_192;
t = n_192;
t = l_192;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm bagof_VarUnion_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_VarUnion_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
sl_init_var(0, r_43);
sl_init_var(1, s_43);
{
struct str_closure t_196 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(t_196);
if((r_43 == NULL))
{
r_43 = t;
}
else
if((r_43 != t))
goto fail92 ;
if(match_cons(t, sym_Var_1))
{
if((s_43 == NULL))
{
s_43 = ATgetArgument(t, 0);
}
else
if((s_43 != ATgetArgument(t, 0)))
goto fail92 ;
}
else
goto fail92 ;
u_43 = t;
{
ATerm trm97 = t;
ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
x_43 = t;
t = term1;
v_43 = t;
t = x_43;
y_43 = t;
if((s_43 == NULL))
goto label68 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, s_43), (ATerm) ATinsert(ATempty, term5));
}
w_43 = t;
t = y_43;
t = dr_lookup_rule_0_2(sl, v_43, w_43, t);
if((t == NULL))
goto label68 ;
goto label67 ;
label68 :
t = trm97;
t = (ATerm) ATempty;
goto label67 ;
label67 :
;
t_43 = t;
t = u_43;
t = t_43;
t = filter_1_0(sl, lifted99_cl, t);
if((t == NULL))
goto fail92 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_192 = NULL,f_192 = NULL,i_192 = NULL,j_192 = NULL,g_192 = NULL,h_192 = NULL;
i_192 = t;
if((sl_readvar(1, sl) == NULL))
goto fail93 ;
else
{
t = sl_readvar(1, sl);
}
e_192 = t;
t = i_192;
j_192 = t;
if((sl_readvar(0, sl) == NULL))
goto fail93 ;
else
{
t = sl_readvar(0, sl);
}
f_192 = t;
t = j_192;
if(match_cons(t, sym__2))
{
ATerm trm96 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm96) == ATmakeSymbol("1dda526076b6bdeb66a3b8571d42fbad", 0, ATtrue))))
goto fail93 ;
g_192 = ATgetArgument(t, 1);
}
else
goto fail93 ;
h_192 = t;
t = f_192;
t = h_192;
t = g_192;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
ATerm Assign_2_0 (StrSL sl, StrCL p_39, StrCL q_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Assign_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_184 = NULL,u_184 = NULL,v_184 = NULL,x_184 = NULL,y_184 = NULL;
ATerm trm95;
trm95 = (ATerm) ATgetAnnotations(t);
if((trm95 == NULL))
trm95 = (ATerm) ATempty;
if(match_cons(t, sym_Assign_2))
{
u_184 = ATgetArgument(t, 0);
v_184 = ATgetArgument(t, 1);
}
else
goto fail91 ;
w_184 = trm95;
t = u_184;
t = cl_fun(p_39)(cl_sl(p_39), t);
if((t == NULL))
goto fail91 ;
x_184 = t;
t = v_184;
t = cl_fun(q_39)(cl_sl(q_39), t);
if((t == NULL))
goto fail91 ;
y_184 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Assign_2, x_184, y_184), w_184);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
ATerm IfThen_2_0 (StrSL sl, StrCL m_39, StrCL n_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "IfThen_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_184 = NULL,m_184 = NULL,n_184 = NULL,p_184 = NULL,q_184 = NULL;
ATerm trm94;
trm94 = (ATerm) ATgetAnnotations(t);
if((trm94 == NULL))
trm94 = (ATerm) ATempty;
if(match_cons(t, sym_IfThen_2))
{
m_184 = ATgetArgument(t, 0);
n_184 = ATgetArgument(t, 1);
}
else
goto fail90 ;
o_184 = trm94;
t = m_184;
t = cl_fun(m_39)(cl_sl(m_39), t);
if((t == NULL))
goto fail90 ;
p_184 = t;
t = n_184;
t = cl_fun(n_39)(cl_sl(n_39), t);
if((t == NULL))
goto fail90 ;
q_184 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_IfThen_2, p_184, q_184), o_184);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
ATerm IfElse_3_0 (StrSL sl, StrCL j_39, StrCL k_39, StrCL l_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "IfElse_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_184 = NULL,f_184 = NULL,g_184 = NULL,h_184 = NULL,j_184 = NULL,k_184 = NULL,l_184 = NULL;
ATerm trm93;
trm93 = (ATerm) ATgetAnnotations(t);
if((trm93 == NULL))
trm93 = (ATerm) ATempty;
if(match_cons(t, sym_IfElse_3))
{
f_184 = ATgetArgument(t, 0);
g_184 = ATgetArgument(t, 1);
h_184 = ATgetArgument(t, 2);
}
else
goto fail89 ;
i_184 = trm93;
t = f_184;
t = cl_fun(j_39)(cl_sl(j_39), t);
if((t == NULL))
goto fail89 ;
j_184 = t;
t = g_184;
t = cl_fun(k_39)(cl_sl(k_39), t);
if((t == NULL))
goto fail89 ;
k_184 = t;
t = h_184;
t = cl_fun(l_39)(cl_sl(l_39), t);
if((t == NULL))
goto fail89 ;
l_184 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_IfElse_3, j_184, k_184, l_184), i_184);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
ATerm While_2_0 (StrSL sl, StrCL h_39, StrCL i_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "While_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_184 = NULL,a_184 = NULL,b_184 = NULL,d_184 = NULL,e_184 = NULL;
ATerm trm92;
trm92 = (ATerm) ATgetAnnotations(t);
if((trm92 == NULL))
trm92 = (ATerm) ATempty;
if(match_cons(t, sym_While_2))
{
a_184 = ATgetArgument(t, 0);
b_184 = ATgetArgument(t, 1);
}
else
goto fail88 ;
c_184 = trm92;
t = a_184;
t = cl_fun(h_39)(cl_sl(h_39), t);
if((t == NULL))
goto fail88 ;
d_184 = t;
t = b_184;
t = cl_fun(i_39)(cl_sl(i_39), t);
if((t == NULL))
goto fail88 ;
e_184 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_While_2, d_184, e_184), c_184);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm For_4_0 (StrSL sl, StrCL d_39, StrCL e_39, StrCL f_39, StrCL g_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "For_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_183 = NULL,r_183 = NULL,s_183 = NULL,t_183 = NULL,u_183 = NULL,w_183 = NULL,x_183 = NULL,y_183 = NULL,z_183 = NULL;
ATerm trm91;
trm91 = (ATerm) ATgetAnnotations(t);
if((trm91 == NULL))
trm91 = (ATerm) ATempty;
if(match_cons(t, sym_For_4))
{
r_183 = ATgetArgument(t, 0);
s_183 = ATgetArgument(t, 1);
t_183 = ATgetArgument(t, 2);
u_183 = ATgetArgument(t, 3);
}
else
goto fail87 ;
v_183 = trm91;
t = r_183;
t = cl_fun(d_39)(cl_sl(d_39), t);
if((t == NULL))
goto fail87 ;
w_183 = t;
t = s_183;
t = cl_fun(e_39)(cl_sl(e_39), t);
if((t == NULL))
goto fail87 ;
x_183 = t;
t = t_183;
t = cl_fun(f_39)(cl_sl(f_39), t);
if((t == NULL))
goto fail87 ;
y_183 = t;
t = u_183;
t = cl_fun(g_39)(cl_sl(g_39), t);
if((t == NULL))
goto fail87 ;
z_183 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_For_4, w_183, x_183, y_183, z_183), v_183);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
ATerm Labeled_2_0 (StrSL sl, StrCL z_38, StrCL a_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Labeled_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_183 = NULL,f_183 = NULL,g_183 = NULL,i_183 = NULL,j_183 = NULL;
ATerm trm90;
trm90 = (ATerm) ATgetAnnotations(t);
if((trm90 == NULL))
trm90 = (ATerm) ATempty;
if(match_cons(t, sym_Labeled_2))
{
f_183 = ATgetArgument(t, 0);
g_183 = ATgetArgument(t, 1);
}
else
goto fail86 ;
h_183 = trm90;
t = f_183;
t = cl_fun(z_38)(cl_sl(z_38), t);
if((t == NULL))
goto fail86 ;
i_183 = t;
t = g_183;
t = cl_fun(a_39)(cl_sl(a_39), t);
if((t == NULL))
goto fail86 ;
j_183 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Labeled_2, i_183, j_183), h_183);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm vu_break_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "vu_break_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
struct str_closure c_196 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(c_196);
e_36 = t;
t = term43;
c_36 = t;
t = e_36;
f_36 = t;
t = term45;
d_36 = t;
t = f_36;
{
struct str_closure d_196 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(d_196);
t = apply_varunion_test_1_2(sl, lifted83_cl, c_36, d_36, t);
if((t == NULL))
goto fail69 ;
i_36 = t;
t = term49;
g_36 = t;
t = i_36;
j_36 = t;
t = term51;
h_36 = t;
t = j_36;
{
struct str_closure e_196 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(e_196);
t = apply_varunion_test_1_2(sl, lifted84_cl, g_36, h_36, t);
if((t == NULL))
goto fail69 ;
m_36 = t;
t = term55;
k_36 = t;
t = m_36;
n_36 = t;
t = term57;
l_36 = t;
t = n_36;
{
struct str_closure f_196 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(f_196);
t = apply_varunion_test_1_2(sl, lifted85_cl, k_36, l_36, t);
if((t == NULL))
goto fail69 ;
q_36 = t;
t = term61;
o_36 = t;
t = q_36;
r_36 = t;
t = term63;
p_36 = t;
t = r_36;
{
struct str_closure g_196 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(g_196);
t = apply_varunion_test_1_2(sl, lifted86_cl, o_36, p_36, t);
if((t == NULL))
goto fail69 ;
u_36 = t;
t = term67;
s_36 = t;
t = u_36;
v_36 = t;
t = term69;
t_36 = t;
t = v_36;
{
struct str_closure h_196 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(h_196);
t = apply_varunion_test_1_2(sl, lifted87_cl, s_36, t_36, t);
if((t == NULL))
goto fail69 ;
y_36 = t;
t = term73;
w_36 = t;
t = y_36;
z_36 = t;
t = term75;
x_36 = t;
t = z_36;
{
struct str_closure i_196 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(i_196);
t = apply_varunion_test_1_2(sl, lifted88_cl, w_36, x_36, t);
if((t == NULL))
goto fail69 ;
c_37 = t;
t = term79;
a_37 = t;
t = c_37;
d_37 = t;
t = term81;
b_37 = t;
t = d_37;
{
struct str_closure k_196 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(k_196);
t = apply_varunion_test_1_2(sl, lifted89_cl, a_37, b_37, t);
if((t == NULL))
goto fail69 ;
g_37 = t;
t = term85;
e_37 = t;
t = g_37;
h_37 = t;
t = term87;
f_37 = t;
t = h_37;
{
struct str_closure l_196 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(l_196);
t = apply_varunion_test_1_2(sl, lifted90_cl, e_37, f_37, t);
if((t == NULL))
goto fail69 ;
k_37 = t;
t = term91;
i_37 = t;
t = k_37;
l_37 = t;
t = term93;
j_37 = t;
t = l_37;
{
struct str_closure m_196 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(m_196);
t = apply_varunion_test_1_2(sl, lifted91_cl, i_37, j_37, t);
if((t == NULL))
goto fail69 ;
o_37 = t;
t = term97;
m_37 = t;
t = o_37;
p_37 = t;
t = term99;
n_37 = t;
t = p_37;
{
struct str_closure n_196 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(n_196);
t = apply_varunion_test_1_2(sl, lifted92_cl, m_37, n_37, t);
if((t == NULL))
goto fail69 ;
s_37 = t;
t = term103;
q_37 = t;
t = s_37;
t_37 = t;
t = term105;
r_37 = t;
t = t_37;
{
struct str_closure o_196 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(o_196);
t = apply_varunion_test_1_2(sl, lifted93_cl, q_37, r_37, t);
if((t == NULL))
goto fail69 ;
w_37 = t;
t = term109;
u_37 = t;
t = w_37;
x_37 = t;
t = term111;
v_37 = t;
t = x_37;
{
struct str_closure p_196 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(p_196);
t = apply_varunion_test_1_2(sl, lifted94_cl, u_37, v_37, t);
if((t == NULL))
goto fail69 ;
a_38 = t;
t = term115;
y_37 = t;
t = a_38;
b_38 = t;
t = term117;
z_37 = t;
t = b_38;
{
struct str_closure q_196 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(q_196);
t = apply_varunion_test_1_2(sl, lifted95_cl, y_37, z_37, t);
if((t == NULL))
goto fail69 ;
e_38 = t;
t = term121;
c_38 = t;
t = e_38;
f_38 = t;
t = term123;
d_38 = t;
t = f_38;
{
struct str_closure r_196 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(r_196);
t = apply_varunion_test_1_2(sl, lifted96_cl, c_38, d_38, t);
if((t == NULL))
goto fail69 ;
i_38 = t;
t = term127;
g_38 = t;
t = i_38;
j_38 = t;
t = term129;
h_38 = t;
t = j_38;
{
struct str_closure s_196 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(s_196);
t = apply_varunion_test_1_2(sl, lifted97_cl, g_38, h_38, t);
if((t == NULL))
goto fail69 ;
m_38 = t;
t = term133;
k_38 = t;
t = m_38;
n_38 = t;
t = term135;
l_38 = t;
t = n_38;
t = apply_varunion_test_1_2(sl, lifted98_cl, k_38, l_38, t);
if((t == NULL))
goto fail69 ;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term125;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term119;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm vu_basic_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "vu_basic_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
struct str_closure z_195 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(z_195);
s_35 = t;
t = term25;
q_35 = t;
t = s_35;
t_35 = t;
t = term27;
r_35 = t;
t = t_35;
{
struct str_closure a_196 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(a_196);
t = apply_varunion_test_1_2(sl, lifted80_cl, q_35, r_35, t);
if((t == NULL))
goto fail65 ;
w_35 = t;
t = term31;
u_35 = t;
t = w_35;
x_35 = t;
t = term33;
v_35 = t;
t = x_35;
{
struct str_closure b_196 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(b_196);
t = apply_varunion_test_1_2(sl, lifted81_cl, u_35, v_35, t);
if((t == NULL))
goto fail65 ;
a_36 = t;
t = term37;
y_35 = t;
t = a_36;
b_36 = t;
t = term39;
z_35 = t;
t = b_36;
t = apply_varunion_test_1_2(sl, lifted82_cl, y_35, z_35, t);
if((t == NULL))
goto fail65 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_195 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(x_195);
struct str_closure y_195 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(y_195);
t = test_suite_2_0(sl, lifted78_cl, lifted79_cl, t);
if((t == NULL))
goto fail62 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = vu_basic_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail64 ;
t = vu_break_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail64 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm dr_ignore_state_cleanup_1_1 (StrSL sl, StrCL g_84, ATerm h_84, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dr_ignore_state_cleanup_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm81 = t;
ATerm b_34 = NULL,d_34 = NULL,e_34 = NULL;
b_34 = t;
t = h_84;
{
ATerm trm82 = t;
ATerm trm83 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm84 = ATgetFirst((ATermList) t);
ATerm trm85 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm85) == AT_LIST) && ATisEmpty(trm85))))
goto label62 ;
}
else
goto label62 ;
goto label61 ;
label62 :
t = trm83;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label61 ;
else
goto label60 ;
label61 :
;
goto label58 ;
label60 :
t = trm82;
goto label59 ;
label59 :
;
t = b_34;
e_34 = t;
t = (ATerm) ATinsert(ATempty, h_84);
d_34 = t;
t = e_34;
t = dr_ignore_state_cleanup_1_1(sl, g_84, d_34, t);
if((t == NULL))
goto label58 ;
}
goto label57 ;
label58 :
t = trm81;
{
ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
w_33 = t;
t = h_84;
{
ATerm trm86 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm87 = ATgetFirst((ATermList) t);
ATerm trm88 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm88) == AT_LIST) && ATisEmpty(trm88))))
goto label64 ;
}
else
goto label64 ;
goto label63 ;
label64 :
t = trm86;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label63 ;
else
goto fail59 ;
label63 :
;
t = w_33;
x_33 = t;
t = h_84;
{
struct str_closure p_195 = { &(dr_new_rule_set_0_0) , sl };
StrCL lifted73_cl = &(p_195);
t = map_1_0(sl, lifted73_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure r_195 = { &(dr_switch_rule_set_0_1) , sl };
StrCL lifted74_cl = &(r_195);
t = zip_1_1(sl, lifted74_cl, h_84, t);
if((t == NULL))
goto fail59 ;
v_33 = t;
t = x_33;
t = cl_fun(g_84)(cl_sl(g_84), t);
if((t == NULL))
goto fail59 ;
y_33 = t;
t = v_33;
{
struct str_closure s_195 = { &(dr_switch_rule_set_0_1) , sl };
StrCL lifted75_cl = &(s_195);
t = zip_1_1(sl, lifted75_cl, h_84, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure w_195 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(w_195);
t = map_1_0(sl, lifted76_cl, t);
if((t == NULL))
goto fail59 ;
t = y_33;
goto label57 ;
}
}
}
}
}
}
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_195 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(t_195);
t = map_1_0(sl_up(sl), lifted77_cl, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm89 = t;
t = dr_destroy_scope_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label66 ;
goto label65 ;
label66 :
t = trm89;
t = dr_destroy_change_set_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail61 ;
else
goto label65 ;
label65 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_til_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_til_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_29 = NULL;
ATerm trm80 = t;
t = MemoTILParseTable_0_0(sl, t);
if((t == NULL))
goto label56 ;
goto label55 ;
label56 :
t = trm80;
{
ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
t = term15;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail58 ;
t = open_parse_table_0_0(sl, t);
if((t == NULL))
goto fail58 ;
a_29 = t;
b_29 = t;
f_29 = t;
t = term17;
c_29 = t;
t = f_29;
g_29 = t;
t = (ATerm) ATinsert(ATempty, term5);
d_29 = t;
t = g_29;
h_29 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, a_29);
e_29 = t;
t = h_29;
t = dr_set_rule_0_3(sl, c_29, d_29, e_29, t);
if((t == NULL))
goto fail58 ;
t = b_29;
goto label55 ;
}
label55 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_til_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_til_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
v_28 = t;
x_28 = t;
t = get_til_parse_table_0_0(sl, t);
if((t == NULL))
goto fail57 ;
w_28 = t;
t = x_28;
t = w_28;
q_28 = t;
t = v_28;
y_28 = t;
t = term13;
u_28 = t;
t = y_28;
t = parse_string_0_2(sl, q_28, u_28, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_varunion_test_1_2 (StrSL sl, StrCL m_27, ATerm k_27, ATerm l_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_varunion_test_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, k_27);
sl_init_var(1, l_27);
{
struct str_closure m_195 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(m_195);
struct str_closure n_195 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(n_195);
struct str_closure o_195 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(o_195);
t = apply_test_4_0(sl, m_27, lifted69_cl, lifted71_cl, lifted72_cl, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail56 ;
else
{
t = sl_readvar(1, sl);
}
t = parse_til_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail55 ;
else
{
t = sl_readvar(0, sl);
}
t = parse_til_0_0(sl_up(sl), t);
if((t == NULL))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_27 = NULL,o_27 = NULL;
struct str_closure l_195 = { &(varunion_0_0) , sl_up(sl) };
StrCL lifted70_cl = &(l_195);
o_27 = t;
t = term1;
n_27 = t;
t = o_27;
t = dr_ignore_state_cleanup_1_1(sl_up(sl), lifted70_cl, n_27, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalExp_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalExp_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm65 = t;
t = EvalAdd_0_0(sl, t);
if((t == NULL))
goto label45 ;
goto label44 ;
label45 :
t = trm65;
{
ATerm trm66 = t;
t = EvalMul_0_0(sl, t);
if((t == NULL))
goto label46 ;
goto label44 ;
label46 :
t = trm66;
{
ATerm trm67 = t;
t = EvalSub_0_0(sl, t);
if((t == NULL))
goto label47 ;
goto label44 ;
label47 :
t = trm67;
{
ATerm trm68 = t;
t = EvalDiv_0_0(sl, t);
if((t == NULL))
goto label48 ;
goto label44 ;
label48 :
t = trm68;
{
ATerm trm69 = t;
t = EvalMod_0_0(sl, t);
if((t == NULL))
goto label49 ;
goto label44 ;
label49 :
t = trm69;
{
ATerm trm70 = t;
ATerm w_191 = NULL,x_191 = NULL;
if(match_cons(t, sym_Lt_2))
{
ATerm trm71 = ATgetArgument(t, 0);
if(match_cons(trm71, sym_Int_1))
{
w_191 = ATgetArgument(trm71, 0);
}
else
goto label50 ;
{
ATerm trm72 = ATgetArgument(t, 1);
if(match_cons(trm72, sym_Int_1))
{
x_191 = ATgetArgument(trm72, 0);
}
else
goto label50 ;
}
}
else
goto label50 ;
t = (ATerm) ATmakeAppl(sym__2, w_191, x_191);
{
ATerm trm73 = t;
ATerm y_191 = NULL;
y_191 = t;
t = ltS_0_0(sl, t);
if((t == NULL))
goto label52 ;
t = y_191;
t = term9;
goto label51 ;
label52 :
t = trm73;
t = term11;
goto label51 ;
label51 :
;
}
goto label44 ;
label50 :
t = trm70;
{
ATerm trm74 = t;
ATerm a_192 = NULL,b_192 = NULL;
struct str_closure j_195 = { &(gtS_0_0) , sl };
StrCL lifted67_cl = &(j_195);
if(match_cons(t, sym_Gt_2))
{
ATerm trm75 = ATgetArgument(t, 0);
if(match_cons(trm75, sym_Int_1))
{
a_192 = ATgetArgument(trm75, 0);
}
else
goto label53 ;
{
ATerm trm76 = ATgetArgument(t, 1);
if(match_cons(trm76, sym_Int_1))
{
b_192 = ATgetArgument(trm76, 0);
}
else
goto label53 ;
}
}
else
goto label53 ;
t = (ATerm) ATmakeAppl(sym__2, a_192, b_192);
t = compare_1_0(sl, lifted67_cl, t);
if((t == NULL))
goto label53 ;
goto label44 ;
label53 :
t = trm74;
{
ATerm trm77 = t;
ATerm c_192 = NULL,d_192 = NULL;
struct str_closure k_195 = { &(eq_0_0) , sl };
StrCL lifted68_cl = &(k_195);
if(match_cons(t, sym_Equ_2))
{
ATerm trm78 = ATgetArgument(t, 0);
if(match_cons(trm78, sym_Int_1))
{
c_192 = ATgetArgument(trm78, 0);
}
else
goto label54 ;
{
ATerm trm79 = ATgetArgument(t, 1);
if(match_cons(trm79, sym_Int_1))
{
d_192 = ATgetArgument(trm79, 0);
}
else
goto label54 ;
}
}
else
goto label54 ;
t = (ATerm) ATmakeAppl(sym__2, c_192, d_192);
t = compare_1_0(sl, lifted68_cl, t);
if((t == NULL))
goto label54 ;
goto label44 ;
label54 :
t = trm77;
t = EvalNeq_0_0(sl, t);
if((t == NULL))
goto fail52 ;
else
goto label44 ;
}
}
}
}
}
}
}
label44 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalIf_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalIf_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm62 = t;
ATerm r_15 = NULL,t_15 = NULL;
if(match_cons(t, sym_IfElse_3))
{
ATerm trm63 = ATgetArgument(t, 0);
if(!(match_cons(trm63, sym_False_0)))
goto label43 ;
r_15 = ATgetArgument(t, 1);
t_15 = ATgetArgument(t, 2);
}
else
goto label43 ;
t = (ATerm) ATmakeAppl(sym_Block_1, t_15);
goto label42 ;
label43 :
t = trm62;
{
ATerm p_15 = NULL,q_15 = NULL;
if(match_cons(t, sym_IfElse_3))
{
ATerm trm64 = ATgetArgument(t, 0);
if(!(match_cons(trm64, sym_True_0)))
goto fail51 ;
q_15 = ATgetArgument(t, 1);
p_15 = ATgetArgument(t, 2);
}
else
goto fail51 ;
t = (ATerm) ATmakeAppl(sym_Block_1, q_15);
goto label42 ;
}
label42 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm compare_1_0 (StrSL sl, StrCL d_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "compare_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm61 = t;
ATerm c_15 = NULL;
c_15 = t;
t = cl_fun(d_15)(cl_sl(d_15), t);
if((t == NULL))
goto label41 ;
t = c_15;
t = term9;
goto label40 ;
label41 :
t = trm61;
t = term11;
goto label40 ;
label40 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalNeq_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalNeq_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_15 = NULL,b_15 = NULL;
if(match_cons(t, sym_Neq_2))
{
ATerm trm57 = ATgetArgument(t, 0);
if(match_cons(trm57, sym_Int_1))
{
a_15 = ATgetArgument(trm57, 0);
}
else
goto fail49 ;
{
ATerm trm58 = ATgetArgument(t, 1);
if(match_cons(trm58, sym_Int_1))
{
b_15 = ATgetArgument(trm58, 0);
}
else
goto fail49 ;
}
}
else
goto fail49 ;
t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
{
ATerm trm59 = t;
ATerm u_191 = NULL;
u_191 = t;
{
ATerm trm60 = t;
t = eq_0_0(sl, t);
if((t == NULL))
goto label39 ;
goto label37 ;
label39 :
t = trm60;
goto label38 ;
label38 :
;
t = u_191;
}
t = term9;
goto label36 ;
label37 :
t = trm59;
t = term11;
goto label36 ;
label36 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalMod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalMod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
if(match_cons(t, sym_Mod_2))
{
ATerm trm55 = ATgetArgument(t, 0);
if(match_cons(trm55, sym_Int_1))
{
m_14 = ATgetArgument(trm55, 0);
}
else
goto fail48 ;
{
ATerm trm56 = ATgetArgument(t, 1);
if(match_cons(trm56, sym_Int_1))
{
n_14 = ATgetArgument(trm56, 0);
}
else
goto fail48 ;
}
}
else
goto fail48 ;
p_14 = t;
t = (ATerm) ATmakeAppl(sym__2, m_14, n_14);
t = modS_0_0(sl, t);
if((t == NULL))
goto fail48 ;
o_14 = t;
t = p_14;
t = (ATerm) ATmakeAppl(sym_Int_1, o_14);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalDiv_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalDiv_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
if(match_cons(t, sym_Div_2))
{
ATerm trm53 = ATgetArgument(t, 0);
if(match_cons(trm53, sym_Int_1))
{
i_14 = ATgetArgument(trm53, 0);
}
else
goto fail47 ;
{
ATerm trm54 = ATgetArgument(t, 1);
if(match_cons(trm54, sym_Int_1))
{
j_14 = ATgetArgument(trm54, 0);
}
else
goto fail47 ;
}
}
else
goto fail47 ;
l_14 = t;
t = (ATerm) ATmakeAppl(sym__2, i_14, j_14);
t = divS_0_0(sl, t);
if((t == NULL))
goto fail47 ;
k_14 = t;
t = l_14;
t = (ATerm) ATmakeAppl(sym_Int_1, k_14);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalMul_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalMul_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
if(match_cons(t, sym_Mul_2))
{
ATerm trm51 = ATgetArgument(t, 0);
if(match_cons(trm51, sym_Int_1))
{
e_14 = ATgetArgument(trm51, 0);
}
else
goto fail46 ;
{
ATerm trm52 = ATgetArgument(t, 1);
if(match_cons(trm52, sym_Int_1))
{
f_14 = ATgetArgument(trm52, 0);
}
else
goto fail46 ;
}
}
else
goto fail46 ;
h_14 = t;
t = (ATerm) ATmakeAppl(sym__2, e_14, f_14);
t = mulS_0_0(sl, t);
if((t == NULL))
goto fail46 ;
g_14 = t;
t = h_14;
t = (ATerm) ATmakeAppl(sym_Int_1, g_14);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalSub_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalSub_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
if(match_cons(t, sym_Sub_2))
{
ATerm trm49 = ATgetArgument(t, 0);
if(match_cons(trm49, sym_Int_1))
{
a_14 = ATgetArgument(trm49, 0);
}
else
goto fail45 ;
{
ATerm trm50 = ATgetArgument(t, 1);
if(match_cons(trm50, sym_Int_1))
{
b_14 = ATgetArgument(trm50, 0);
}
else
goto fail45 ;
}
}
else
goto fail45 ;
d_14 = t;
t = (ATerm) ATmakeAppl(sym__2, a_14, b_14);
t = subtS_0_0(sl, t);
if((t == NULL))
goto fail45 ;
c_14 = t;
t = d_14;
t = (ATerm) ATmakeAppl(sym_Int_1, c_14);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm EvalAdd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EvalAdd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm44 = t;
ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
if(match_cons(t, sym_Add_2))
{
ATerm trm45 = ATgetArgument(t, 0);
if(match_cons(trm45, sym_Int_1))
{
w_13 = ATgetArgument(trm45, 0);
}
else
goto label35 ;
{
ATerm trm46 = ATgetArgument(t, 1);
if(match_cons(trm46, sym_Int_1))
{
x_13 = ATgetArgument(trm46, 0);
}
else
goto label35 ;
}
}
else
goto label35 ;
z_13 = t;
t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
t = addS_0_0(sl, t);
if((t == NULL))
goto label35 ;
y_13 = t;
t = z_13;
t = (ATerm) ATmakeAppl(sym_Int_1, y_13);
goto label34 ;
label35 :
t = trm44;
{
ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
if(match_cons(t, sym_Add_2))
{
ATerm trm47 = ATgetArgument(t, 0);
if(match_cons(trm47, sym_String_1))
{
s_13 = ATgetArgument(trm47, 0);
}
else
goto fail44 ;
{
ATerm trm48 = ATgetArgument(t, 1);
if(match_cons(trm48, sym_String_1))
{
t_13 = ATgetArgument(trm48, 0);
}
else
goto fail44 ;
}
}
else
goto fail44 ;
v_13 = t;
t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail44 ;
u_13 = t;
t = v_13;
t = (ATerm) ATmakeAppl(sym_String_1, u_13);
goto label34 ;
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_try_catch_finally_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_try_catch_finally_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
if(match_cons(t, sym_Try_3))
{
h_9 = ATgetArgument(t, 0);
i_9 = ATgetArgument(t, 1);
j_9 = ATgetArgument(t, 2);
}
else
goto fail40 ;
p_9 = t;
t = i_9;
{
ATerm trm39 = t;
struct str_closure d_195 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(d_195);
t = map_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto label33 ;
goto label32 ;
label33 :
t = trm39;
{
struct str_closure e_195 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(e_195);
t = map_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail40 ;
else
goto label32 ;
}
label32 :
;
n_9 = t;
t = p_9;
q_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
o_9 = t;
t = q_9;
{
struct str_closure f_195 = { &(_Id) , sl };
StrCL lifted63_cl = &(f_195);
t = dr_init_exception_block_1_2(sl, lifted63_cl, n_9, o_9, t);
if((t == NULL))
goto fail40 ;
t = h_9;
t = varunion_0_0(sl, t);
if((t == NULL))
goto fail40 ;
k_9 = t;
t = i_9;
{
struct str_closure h_195 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(h_195);
t = map_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto fail40 ;
l_9 = t;
t = j_9;
u_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
t_9 = t;
t = u_9;
{
struct str_closure i_195 = { &(varunion_0_0) , sl };
StrCL lifted66_cl = &(i_195);
t = dr_complete_finally_union_1_1(sl, lifted66_cl, t_9, t);
if((t == NULL))
goto fail40 ;
m_9 = t;
w_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
v_9 = t;
t = w_9;
t = dr_complete_exception_block_union_0_1(sl, v_9, t);
if((t == NULL))
goto fail40 ;
t = (ATerm) ATmakeAppl(sym_Try_3, k_9, l_9, m_9);
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_9 = NULL,s_9 = NULL;
struct str_closure g_195 = { &(varunion_0_0) , sl_up(sl) };
StrCL lifted65_cl = &(g_195);
s_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
r_9 = t;
t = s_9;
t = dr_complete_catch_union_1_1(sl_up(sl), lifted65_cl, r_9, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_191 = NULL;
if(match_cons(t, sym_Catch_3))
{
ATerm trm42 = ATgetArgument(t, 0);
f_191 = ATgetArgument(t, 1);
{
ATerm trm43 = ATgetArgument(t, 2);
}
}
else
goto fail42 ;
t = f_191;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_191 = NULL;
if(match_cons(t, sym_Catch_3))
{
ATerm trm40 = ATgetArgument(t, 0);
e_191 = ATgetArgument(t, 1);
{
ATerm trm41 = ATgetArgument(t, 2);
}
}
else
goto fail41 ;
t = e_191;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_try_catch_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_try_catch_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL;
if(match_cons(t, sym_Try_2))
{
v_8 = ATgetArgument(t, 0);
w_8 = ATgetArgument(t, 1);
}
else
goto fail36 ;
b_9 = t;
t = w_8;
{
ATerm trm34 = t;
struct str_closure y_194 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(y_194);
t = map_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto label31 ;
goto label30 ;
label31 :
t = trm34;
{
struct str_closure z_194 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(z_194);
t = map_1_0(sl, lifted57_cl, t);
if((t == NULL))
goto fail36 ;
else
goto label30 ;
}
label30 :
;
z_8 = t;
t = b_9;
c_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
a_9 = t;
t = c_9;
{
struct str_closure a_195 = { &(_Fail) , sl };
StrCL lifted58_cl = &(a_195);
t = dr_init_exception_block_1_2(sl, lifted58_cl, z_8, a_9, t);
if((t == NULL))
goto fail36 ;
t = v_8;
t = varunion_0_0(sl, t);
if((t == NULL))
goto fail36 ;
x_8 = t;
t = w_8;
{
struct str_closure c_195 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(c_195);
t = map_1_0(sl, lifted59_cl, t);
if((t == NULL))
goto fail36 ;
y_8 = t;
g_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
f_9 = t;
t = g_9;
t = dr_complete_exception_block_union_0_1(sl, f_9, t);
if((t == NULL))
goto fail36 ;
t = (ATerm) ATmakeAppl(sym_Try_2, x_8, y_8);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_9 = NULL,e_9 = NULL;
struct str_closure b_195 = { &(varunion_0_0) , sl_up(sl) };
StrCL lifted60_cl = &(b_195);
e_9 = t;
t = (ATerm) ATinsert(ATempty, term1);
d_9 = t;
t = e_9;
t = dr_complete_catch_union_1_1(sl_up(sl), lifted60_cl, d_9, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_191 = NULL;
if(match_cons(t, sym_Catch_3))
{
ATerm trm37 = ATgetArgument(t, 0);
d_191 = ATgetArgument(t, 1);
{
ATerm trm38 = ATgetArgument(t, 2);
}
}
else
goto fail38 ;
t = d_191;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_191 = NULL;
if(match_cons(t, sym_Catch_3))
{
ATerm trm35 = ATgetArgument(t, 0);
c_191 = ATgetArgument(t, 1);
{
ATerm trm36 = ATgetArgument(t, 2);
}
}
else
goto fail37 ;
t = c_191;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_labeled_stm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_labeled_stm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm q_8 = NULL;
sl_init_var(0, q_8);
{
struct str_closure w_194 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(w_194);
struct str_closure x_194 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(x_194);
t = Labeled_2_0(sl, lifted53_cl, lifted54_cl, t);
if((t == NULL))
goto fail33 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_8 = NULL,s_8 = NULL;
struct str_closure v_194 = { &(varunion_0_0) , sl_up(sl) };
StrCL lifted55_cl = &(v_194);
s_8 = t;
t = (ATerm) ATinsert(ATempty, term1);
r_8 = t;
t = s_8;
if((sl_readvar(0, sl) == NULL))
goto fail35 ;
else
{
t = dr_label_union_1_2(sl_up(sl), lifted55_cl, r_8, sl_readvar(0, sl), t);
if((t == NULL))
goto fail35 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail34 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_for_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_for_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
sl_init_var(0, g_8);
{
struct str_closure q_194 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(q_194);
struct str_closure r_194 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(r_194);
struct str_closure s_194 = { &(varunion_0_0) , sl };
StrCL lifted43_cl = &(s_194);
struct str_closure t_194 = { &(varunion_0_0) , sl };
StrCL lifted44_cl = &(t_194);
struct str_closure u_194 = { &(_Id) , sl };
StrCL lifted45_cl = &(u_194);
t = For_4_0(sl, lifted42_cl, lifted43_cl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail28 ;
h_8 = t;
k_8 = t;
t = term1;
i_8 = t;
t = k_8;
l_8 = t;
if((g_8 == NULL))
goto fail28 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_8), (ATerm) ATinsert(ATempty, term5));
}
j_8 = t;
t = l_8;
if((g_8 == NULL))
goto fail28 ;
else
{
t = dr_undefine_rule_vis_0_3(sl, i_8, g_8, j_8, t);
if((t == NULL))
goto fail28 ;
}
t = h_8;
n_8 = t;
t = (ATerm) ATinsert(ATempty, term1);
m_8 = t;
t = n_8;
t = dr_fix_and_union_1_1(sl, lifted46_cl, m_8, t);
if((t == NULL))
goto fail28 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail32 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_194 = { &(_Id) , sl_up(sl) };
StrCL lifted47_cl = &(m_194);
struct str_closure n_194 = { &(_Id) , sl_up(sl) };
StrCL lifted48_cl = &(n_194);
struct str_closure o_194 = { &(_Id) , sl_up(sl) };
StrCL lifted49_cl = &(o_194);
struct str_closure p_194 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(p_194);
t = For_4_0(sl_up(sl), lifted47_cl, lifted48_cl, lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_8 = NULL,p_8 = NULL;
struct str_closure j_194 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(j_194);
p_8 = t;
t = term1;
o_8 = t;
t = p_8;
t = dr_scope_1_1(sl_up(sl_up(sl)), lifted51_cl, o_8, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_194 = { &(varunion_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted52_cl = &(i_194);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted52_cl, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_labeled_while_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_labeled_while_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm a_8 = NULL;
sl_init_var(0, a_8);
{
struct str_closure g_194 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(g_194);
struct str_closure h_194 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(h_194);
t = Labeled_2_0(sl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto fail22 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_8 = NULL,c_8 = NULL;
struct str_closure f_194 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(f_194);
c_8 = t;
t = (ATerm) ATinsert(ATempty, term1);
b_8 = t;
t = c_8;
if((sl_readvar(0, sl) == NULL))
goto fail24 ;
else
{
t = dr_fix_and_union_1_2(sl_up(sl), lifted37_cl, b_8, sl_readvar(0, sl), t);
if((t == NULL))
goto fail24 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_194 = { &(varunion_0_0) , sl_up(sl_up(sl)) };
StrCL lifted38_cl = &(d_194);
struct str_closure e_194 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(e_194);
t = While_2_0(sl_up(sl_up(sl)), lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_8 = NULL,e_8 = NULL;
struct str_closure c_194 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(c_194);
e_8 = t;
t = term1;
d_8 = t;
t = e_8;
t = dr_scope_1_1(sl_up(sl_up(sl_up(sl))), lifted40_cl, d_8, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_194 = { &(varunion_0_0) , sl_up(sl_up(sl_up(sl_up(sl)))) };
StrCL lifted41_cl = &(b_194);
t = map_1_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted41_cl, t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail23 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_while_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_while_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_7 = NULL,x_7 = NULL;
struct str_closure a_194 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(a_194);
if(match_cons(t, sym_While_2))
{
ATerm trm32 = ATgetArgument(t, 0);
ATerm trm33 = ATgetArgument(t, 1);
}
else
goto fail18 ;
x_7 = t;
t = (ATerm) ATinsert(ATempty, term1);
w_7 = t;
t = x_7;
t = dr_fix_and_union_1_1(sl, lifted30_cl, w_7, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_193 = { &(varunion_0_0) , sl_up(sl) };
StrCL lifted31_cl = &(y_193);
struct str_closure z_193 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(z_193);
t = While_2_0(sl_up(sl), lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_7 = NULL,z_7 = NULL;
struct str_closure x_193 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(x_193);
z_7 = t;
t = term1;
y_7 = t;
t = z_7;
t = dr_scope_1_1(sl_up(sl_up(sl)), lifted33_cl, y_7, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_193 = { &(varunion_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted34_cl = &(w_193);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted34_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_if_then_else_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_if_then_else_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_193 = { &(varunion_0_0) , sl };
StrCL lifted15_cl = &(f_193);
struct str_closure g_193 = { &(_Id) , sl };
StrCL lifted16_cl = &(g_193);
struct str_closure h_193 = { &(_Id) , sl };
StrCL lifted17_cl = &(h_193);
t = IfElse_3_0(sl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail11 ;
{
ATerm trm31 = t;
t = EvalIf_0_0(sl, t);
if((t == NULL))
goto label29 ;
t = varunion_0_0(sl, t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm31;
{
ATerm q_7 = NULL,r_7 = NULL;
struct str_closure u_193 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(u_193);
struct str_closure v_193 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(v_193);
r_7 = t;
t = (ATerm) ATinsert(ATempty, term1);
q_7 = t;
t = r_7;
t = dr_fork_and_union_2_1(sl, lifted18_cl, lifted24_cl, q_7, t);
if((t == NULL))
goto fail11 ;
else
goto label28 ;
}
label28 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_193 = { &(_Id) , sl_up(sl) };
StrCL lifted25_cl = &(r_193);
struct str_closure s_193 = { &(_Id) , sl_up(sl) };
StrCL lifted26_cl = &(s_193);
struct str_closure t_193 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(t_193);
t = IfElse_3_0(sl_up(sl), lifted25_cl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_7 = NULL,v_7 = NULL;
struct str_closure q_193 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(q_193);
v_7 = t;
t = term1;
u_7 = t;
t = v_7;
t = dr_scope_1_1(sl_up(sl_up(sl)), lifted28_cl, u_7, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_193 = { &(varunion_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted29_cl = &(p_193);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted29_cl, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_193 = { &(_Id) , sl_up(sl) };
StrCL lifted19_cl = &(k_193);
struct str_closure l_193 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(l_193);
struct str_closure o_193 = { &(_Id) , sl_up(sl) };
StrCL lifted23_cl = &(o_193);
t = IfElse_3_0(sl_up(sl), lifted19_cl, lifted20_cl, lifted23_cl, t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_7 = NULL,t_7 = NULL;
struct str_closure j_193 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(j_193);
t_7 = t;
t = term1;
s_7 = t;
t = t_7;
t = dr_scope_1_1(sl_up(sl_up(sl)), lifted21_cl, s_7, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_193 = { &(varunion_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted22_cl = &(i_193);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted22_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_if_then_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_if_then_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_192 = { &(varunion_0_0) , sl };
StrCL lifted7_cl = &(w_192);
struct str_closure x_192 = { &(_Id) , sl };
StrCL lifted8_cl = &(x_192);
t = IfThen_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail7 ;
{
ATerm trm30 = t;
t = EvalIf_0_0(sl, t);
if((t == NULL))
goto label27 ;
t = varunion_0_0(sl, t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm30;
{
ATerm m_7 = NULL,n_7 = NULL;
struct str_closure d_193 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(d_193);
struct str_closure e_193 = { &(_Id) , sl };
StrCL lifted14_cl = &(e_193);
n_7 = t;
t = (ATerm) ATinsert(ATempty, term1);
m_7 = t;
t = n_7;
t = dr_fork_and_union_2_1(sl, lifted9_cl, lifted14_cl, m_7, t);
if((t == NULL))
goto fail7 ;
else
goto label26 ;
}
label26 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_193 = { &(_Id) , sl_up(sl) };
StrCL lifted10_cl = &(b_193);
struct str_closure c_193 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(c_193);
t = IfThen_2_0(sl_up(sl), lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_7 = NULL,p_7 = NULL;
struct str_closure a_193 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(a_193);
p_7 = t;
t = term1;
o_7 = t;
t = p_7;
t = dr_scope_1_1(sl_up(sl_up(sl)), lifted12_cl, o_7, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_192 = { &(varunion_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted13_cl = &(y_192);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted13_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_assign_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_assign_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm x_6 = NULL,y_6 = NULL;
sl_init_var(0, x_6);
sl_init_var(1, y_6);
{
struct str_closure u_192 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(u_192);
struct str_closure v_192 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(v_192);
t = Assign_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail4 ;
{
ATerm trm26 = t;
ATerm z_6 = NULL;
z_6 = t;
if((x_6 == NULL))
goto label23 ;
else
{
t = x_6;
}
{
ATerm trm27 = t;
if(match_cons(t, sym_Int_1))
{
ATerm trm28 = ATgetArgument(t, 0);
}
else
goto label25 ;
goto label24 ;
label25 :
t = trm27;
if(match_cons(t, sym_String_1))
{
ATerm trm29 = ATgetArgument(t, 0);
goto label24 ;
}
else
goto label23 ;
label24 :
;
t = z_6;
}
{
ATerm a_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
a_7 = t;
f_7 = t;
t = term1;
c_7 = t;
t = f_7;
g_7 = t;
if((y_6 == NULL))
goto fail4 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, y_6), (ATerm) ATinsert(ATempty, term5));
}
d_7 = t;
t = g_7;
h_7 = t;
if((x_6 == NULL))
goto fail4 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term7, x_6);
}
e_7 = t;
t = h_7;
if((y_6 == NULL))
goto fail4 ;
else
{
t = dr_set_rule_vis_0_4(sl, c_7, y_6, d_7, e_7, t);
if((t == NULL))
goto fail4 ;
}
t = a_7;
goto label22 ;
}
label23 :
t = trm26;
{
ATerm b_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
b_7 = t;
k_7 = t;
t = term1;
i_7 = t;
t = k_7;
l_7 = t;
if((y_6 == NULL))
goto fail4 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, y_6), (ATerm) ATinsert(ATempty, term5));
}
j_7 = t;
t = l_7;
if((y_6 == NULL))
goto fail4 ;
else
{
t = dr_undefine_rule_vis_0_3(sl, i_7, y_6, j_7, t);
if((t == NULL))
goto fail4 ;
}
t = b_7;
goto label22 ;
}
label22 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = varunion_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail5 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_declaration_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_declaration_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,o_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
ATerm trm25 = t;
if(match_cons(t, sym_Declaration_1))
{
n_6 = ATgetArgument(t, 0);
}
else
goto label21 ;
goto label20 ;
label21 :
t = trm25;
if(match_cons(t, sym_DeclarationTyped_2))
{
n_6 = ATgetArgument(t, 0);
m_6 = ATgetArgument(t, 1);
goto label20 ;
}
else
goto fail3 ;
label20 :
;
q_6 = t;
t = term1;
p_6 = t;
t = q_6;
t = dr_label_scope_0_2(sl, p_6, n_6, t);
if((t == NULL))
goto fail3 ;
o_6 = t;
t_6 = t;
t = term1;
r_6 = t;
t = t_6;
u_6 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, n_6), (ATerm) ATinsert(ATempty, term5));
s_6 = t;
t = u_6;
t = dr_undefine_rule_0_2(sl, r_6, s_6, t);
if((t == NULL))
goto fail3 ;
t = o_6;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_VarUnion_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_VarUnion_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
if(match_cons(t, sym_Var_1))
{
c_6 = ATgetArgument(t, 0);
}
else
goto fail2 ;
g_6 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, c_6);
t = bagof_VarUnion_0_0(sl, t);
if((t == NULL))
goto fail2 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
d_6 = ATgetFirst((ATermList) t);
e_6 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail2 ;
{
ATerm trm23 = t;
t = e_6;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label19 ;
t = d_6;
goto label18 ;
label19 :
t = trm23;
{
ATerm h_6 = NULL,i_6 = NULL;
i_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term3, c_6);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail2 ;
h_6 = t;
t = i_6;
{
ATerm trm24;
trm24 = CheckATermList(e_6);
if((trm24 == NULL))
goto fail2 ;
t = (ATerm) ATmakeAppl(sym_FunCall_2, h_6, (ATerm) ATinsert((ATermList)trm24, d_6));
goto label18 ;
}
}
label18 :
;
f_6 = t;
t = g_6;
t = f_6;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm varunion_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varunion_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
t = apply_VarUnion_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
t = varunion_declaration_0_0(sl, t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
t = varunion_assign_0_0(sl, t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
ATerm g_189 = NULL,h_189 = NULL,i_189 = NULL,k_189 = NULL,l_189 = NULL;
ATerm trm4;
trm4 = (ATerm) ATgetAnnotations(t);
if((trm4 == NULL))
trm4 = (ATerm) ATempty;
if(match_cons(t, sym_Block_1))
{
h_189 = ATgetArgument(t, 0);
}
else
goto label4 ;
g_189 = trm4;
t = h_189;
l_189 = t;
t = term1;
k_189 = t;
t = l_189;
{
struct str_closure q_192 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(q_192);
t = dr_scope_1_1(sl, lifted0_cl, k_189, t);
if((t == NULL))
goto label4 ;
i_189 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Block_1, i_189), g_189);
}
goto label0 ;
label4 :
t = trm3;
{
ATerm trm5 = t;
t = varunion_if_then_0_0(sl, t);
if((t == NULL))
goto label5 ;
goto label0 ;
label5 :
t = trm5;
{
ATerm trm6 = t;
t = varunion_if_then_else_0_0(sl, t);
if((t == NULL))
goto label6 ;
goto label0 ;
label6 :
t = trm6;
{
ATerm trm7 = t;
t = varunion_while_0_0(sl, t);
if((t == NULL))
goto label7 ;
goto label0 ;
label7 :
t = trm7;
{
ATerm trm8 = t;
t = varunion_labeled_while_0_0(sl, t);
if((t == NULL))
goto label8 ;
goto label0 ;
label8 :
t = trm8;
{
ATerm trm9 = t;
t = varunion_for_0_0(sl, t);
if((t == NULL))
goto label9 ;
goto label0 ;
label9 :
t = trm9;
{
ATerm trm10 = t;
t = varunion_labeled_stm_0_0(sl, t);
if((t == NULL))
goto label10 ;
goto label0 ;
label10 :
t = trm10;
{
ATerm trm11 = t;
ATerm m_189 = NULL,n_189 = NULL;
if(match_cons(t, sym_Break_1))
{
ATerm trm12 = ATgetArgument(t, 0);
if(!(match_cons(trm12, sym_None_0)))
goto label11 ;
}
else
goto label11 ;
n_189 = t;
t = term1;
m_189 = t;
t = n_189;
t = dr_break_0_1(sl, m_189, t);
if((t == NULL))
goto label11 ;
goto label0 ;
label11 :
t = trm11;
{
ATerm trm13 = t;
ATerm q_189 = NULL,r_189 = NULL,u_189 = NULL,s_189 = NULL,t_189 = NULL;
if(match_cons(t, sym_Break_1))
{
ATerm trm14 = ATgetArgument(t, 0);
if(match_cons(trm14, sym_Some_1))
{
q_189 = ATgetArgument(trm14, 0);
}
else
goto label12 ;
}
else
goto label12 ;
u_189 = t;
t = q_189;
r_189 = t;
t = u_189;
t_189 = t;
t = term1;
s_189 = t;
t = t_189;
t = dr_break_0_2(sl, s_189, r_189, t);
if((t == NULL))
goto label12 ;
goto label0 ;
label12 :
t = trm13;
{
ATerm trm15 = t;
ATerm v_189 = NULL,w_189 = NULL;
if(match_cons(t, sym_Continue_1))
{
ATerm trm16 = ATgetArgument(t, 0);
if(!(match_cons(trm16, sym_None_0)))
goto label13 ;
}
else
goto label13 ;
w_189 = t;
t = term1;
v_189 = t;
t = w_189;
t = dr_continue_0_1(sl, v_189, t);
if((t == NULL))
goto label13 ;
goto label0 ;
label13 :
t = trm15;
{
ATerm trm17 = t;
ATerm x_189 = NULL,y_189 = NULL,b_190 = NULL,z_189 = NULL,a_190 = NULL;
if(match_cons(t, sym_Continue_1))
{
ATerm trm18 = ATgetArgument(t, 0);
if(match_cons(trm18, sym_Some_1))
{
x_189 = ATgetArgument(trm18, 0);
}
else
goto label14 ;
}
else
goto label14 ;
b_190 = t;
t = x_189;
y_189 = t;
t = b_190;
a_190 = t;
t = term1;
z_189 = t;
t = a_190;
t = dr_continue_0_2(sl, z_189, y_189, t);
if((t == NULL))
goto label14 ;
goto label0 ;
label14 :
t = trm17;
{
ATerm trm19 = t;
ATerm c_190 = NULL,d_190 = NULL,h_190 = NULL,e_190 = NULL,f_190 = NULL;
struct str_closure r_192 = { &(eq_0_0) , sl };
StrCL lifted2_cl = &(r_192);
if(match_cons(t, sym_Throw_1))
{
ATerm trm20 = ATgetArgument(t, 0);
if(match_cons(trm20, sym_TypeName_1))
{
c_190 = ATgetArgument(trm20, 0);
}
else
goto label15 ;
}
else
goto label15 ;
h_190 = t;
t = c_190;
d_190 = t;
t = h_190;
f_190 = t;
t = term1;
e_190 = t;
t = f_190;
t = dr_throw_1_2(sl, lifted2_cl, d_190, e_190, t);
if((t == NULL))
goto label15 ;
goto label0 ;
label15 :
t = trm19;
{
ATerm trm21 = t;
t = varunion_try_catch_0_0(sl, t);
if((t == NULL))
goto label16 ;
goto label0 ;
label16 :
t = trm21;
{
ATerm trm22 = t;
t = varunion_try_catch_finally_0_0(sl, t);
if((t == NULL))
goto label17 ;
goto label0 ;
label17 :
t = trm22;
{
struct str_closure s_192 = { &(EvalExp_0_0) , sl };
StrCL lifted4_cl = &(s_192);
struct str_closure t_192 = { &(varunion_0_0) , sl };
StrCL lifted3_cl = &(t_192);
t = SRTS_all(sl, lifted3_cl, t);
if((t == NULL))
goto fail0 ;
t = try_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_192 = { &(varunion_0_0) , sl_up(sl) };
StrCL lifted1_cl = &(p_192);
t = map_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static void register_strategies (void)
{
int initial_size = 117;
int max_load = 75;
struct str_closure * closures;
int closures_index = 0;
if((strategy_table == NULL))
strategy_table = ATtableCreate(initial_size, max_load);
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 139));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(zip_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("zip_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_complete_exception_block_union_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_complete_exception_block_union_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_complete_finally_union_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_complete_finally_union_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_complete_catch_union_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_complete_catch_union_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_label_union_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_label_union_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_fix_and_union_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_fix_and_union_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_fix_and_union_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_fix_and_union_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_fork_and_union_2_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_fork_and_union_2_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_throw_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_throw_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_init_exception_block_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_init_exception_block_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_continue_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_continue_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_continue_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_continue_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_break_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_break_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_break_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_break_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_destroy_change_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_destroy_change_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_destroy_scope_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_destroy_scope_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_new_rule_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_new_rule_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_undefine_rule_vis_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_undefine_rule_vis_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_undefine_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_undefine_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_vis_0_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_vis_0_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_label_scope_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_label_scope_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_scope_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_scope_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_switch_rule_set_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_switch_rule_set_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ltS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ltS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(gtS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("gtS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(modS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("modS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(divS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("divS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mulS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mulS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(subtS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("subtS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(addS_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("addS_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_string_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_string_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MemoTILParseTable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MemoTILParseTable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bagof_VarUnion_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bagof_VarUnion_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Assign_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Assign_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(IfThen_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("IfThen_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(IfElse_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("IfElse_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(While_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("While_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(For_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("For_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Labeled_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Labeled_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted97);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted97", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(vu_break_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("vu_break_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(vu_basic_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("vu_basic_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_ignore_state_cleanup_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_ignore_state_cleanup_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_til_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_til_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_til_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_til_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_varunion_test_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_varunion_test_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalExp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalExp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalIf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalIf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(compare_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("compare_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalNeq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalNeq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalMod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalMod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalDiv_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalDiv_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalMul_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalMul_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalSub_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalSub_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EvalAdd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EvalAdd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_try_catch_finally_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_try_catch_finally_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_try_catch_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_try_catch_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_labeled_stm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_labeled_stm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_for_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_for_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_labeled_while_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_labeled_while_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_while_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_while_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_if_then_else_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_if_then_else_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_if_then_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_if_then_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_assign_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_assign_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_declaration_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_declaration_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_VarUnion_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_VarUnion_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varunion_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varunion_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
}
int main (int argc, char * argv [])
{
ATerm out_term;
ATermList in_term;
int i;
ATinit(argc, argv, &(out_term));
init_constructors();
in_term = ATempty;
for ( i = (argc - 1) ; (i >= 0) ; i-- )
{
in_term = ATinsert(in_term, (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i], 0, ATtrue)));
}
SRTS_stratego_initialize();
memset(__tracing_table, 0, (sizeof(unsigned short) * TRACING_TABLE_SIZE));
__tracing_table_counter = 0;
register_strategies();
out_term = main_0_0(NULL, (ATerm) in_term);
if((out_term != NULL))
{
ATfprintf(stdout, "%t\n", out_term);
exit(0);
}
else
{
ATfprintf(stderr, "%s: rewriting failed, trace:\n", argv[0]);
for ( i = 0 ; (__tracing_table[i] && (i < TRACING_TABLE_SIZE)) ; i++ )
ATfprintf(stderr, "\t%s\n", __tracing_table[i]);
exit(1);
}
}
