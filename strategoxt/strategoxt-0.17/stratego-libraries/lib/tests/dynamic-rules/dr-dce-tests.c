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
static Symbol sym_Var_1;
static Symbol sym_Declaration_1;
static Symbol sym_DeclarationTyped_2;
static Symbol sym_Assign_2;
static Symbol sym_Block_1;
static Symbol sym_IfThen_2;
static Symbol sym_IfElse_3;
static Symbol sym_While_2;
static Symbol sym_For_4;
static Symbol sym_Break_1;
static Symbol sym_ProcCall_2;
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
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
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
sym_ProcCall_2 = ATmakeSymbol("ProcCall", 2, ATfalse);
ATprotectSymbol(sym_ProcCall_2);
}
static ATerm term187;
static ATerm term186;
static ATerm term185;
static ATerm term184;
static ATerm term183;
static ATerm term182;
static ATerm term181;
static ATerm term180;
static ATerm term179;
static ATerm term178;
static ATerm term177;
static ATerm term176;
static ATerm term175;
static ATerm term174;
static ATerm term173;
static ATerm term172;
static ATerm term171;
static ATerm term170;
static ATerm term169;
static ATerm term168;
static ATerm term167;
static ATerm term166;
static ATerm term165;
static ATerm term164;
static ATerm term163;
static ATerm term162;
static ATerm term161;
static ATerm term160;
static ATerm term159;
static ATerm term158;
static ATerm term157;
static ATerm term156;
static ATerm term155;
static ATerm term154;
static ATerm term153;
static ATerm term152;
static ATerm term151;
static ATerm term150;
static ATerm term149;
static ATerm term148;
static ATerm term147;
static ATerm term146;
static ATerm term145;
static ATerm term144;
static ATerm term143;
static ATerm term142;
static ATerm term141;
static ATerm term140;
static ATerm term139;
static ATerm term138;
static ATerm term137;
static ATerm term136;
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
term0 = (ATerm) ATmakeAppl(sym_Block_1, (ATerm) ATempty);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("VarNeeded", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("VarUsed", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("fb6e5a120220761b0d84224d5fd70c32", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("4ddd5e10875be67633fd834b9e6c8381", 0, ATtrue));
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
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(80);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(8);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeInt(7);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(0);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("... ", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Dynamic Rules Library -- Dead Code Elimination", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("Dynamic Rules Library -- Dead Code Elimination -- Union Tests", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("Dynamic Rules Library -- Dead Code Elimination -- Fix and Union Tests", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("Dynamic Rules Library -- Dead Code Elimination -- Break Tests", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < undef + none", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then f(x); else f(x); end f(x);", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < x + x", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then f(x); else dummy(); end f(x);", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < x + none", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); else f(x); end f(x);", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < none + x", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); else dummy(); end f(x);", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < none + none", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then f(x); else x := 0; end f(x);", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < x + undef", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then x := 0; else f(x); end f(x);", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < undef + x", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then x := 0; else x := 0; end f(x);", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; if c() then x := 0; else x := 0; end f(x);", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < undef + undef", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); else x := 0; end f(x);", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < none + undef", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then x := 0; else dummy(); end f(x);", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after x < undef + none", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then f(x); else f(x); end", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < x + x", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then f(x); else dummy(); end", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < x + none", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); else f(x); end", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < none + x", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); else dummy(); end", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("if c() then dummy(); else dummy(); end", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < none + none", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then f(x); else dummy(); x := 0; end", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < x + undef", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); x := 0; else f(x); end", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < undef + x", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then x := 0; else x := 0; end dummy();", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy();", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < undef + undef", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then dummy(); else x := 0; dummy(); end dummy();", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("if c() then dummy(); else dummy(); end dummy();", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set for VarNeeded after empty < none + undef", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; if c() then x := 0; dummy(); else dummy(); end dummy();", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set after empty; [undef]*", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; while c() do f(x); end f(x);", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set after x; [x]*", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; while c() do dummy(); end f(x);", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set after x; [none]*", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; while c() do x := 0; end f(x);", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set after x; [undef]*", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; while c() do f(x); end", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set after empty; [x]*", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; while c() do dummy(); end", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("while c() do dummy(); end", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("Check rule set after empty; [none]*", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0; while c() do x := 0; dummy(); end", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #7", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy();\n         else\n           x := 1;\n           break;\n         end\n         f(x);\n       end", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy();\n         else\n           break;\n         end\n         f(x);\n       end", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #1", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy();\n         else\n           x := 1;\n           break;\n         end\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #2", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy();\n         else\n           x := 1;\n           break;\n           f(x);\n           x := 1;\n         end\n         f(x);\n       end", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy();\n         else\n           break;\n           f(x);\n           x := 1;\n         end\n         f(x);\n       end", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #3", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           f(x);\n         else\n           x := 1;\n           break;\n         end\n         f(x);\n       end", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           f(x);\n         else\n           break;\n         end\n         f(x);\n       end", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #4", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy(); x := 1;\n         else\n           x := 1; break;\n         end\n         x := 2;\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         if c() then\n           dummy();\n         else\n           x := 1; break;\n         end\n         x := 2;\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #5", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         var x;\n         if c() then\n           dummy(); x := 1;\n         else\n           x := 1; break;\n         end\n         x := 2;\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; x := 0;\n       while c() do\n         var x;\n         if c() then\n           dummy();\n         else\n           break;\n         end\n         x := 2;\n         f(x);\n       end\n       f(x);", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(ATmakeSymbol("Check break scenario #6", 0, ATtrue));
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; var y; var z; y := 1;\n       while c() do\n         var x;\n         x := 1; y := 1; z := 1;\n         if c() then\n           var x;\n           if c() then x := 1; y := 1; break;\n           else        x := 1; z := 1;\n           end\n         else\n           var y;\n           if c() then y := 1; z := 1;\n           else        y := 1; z := 1; break;\n           end\n         end\n         f(x, y, z);\n       end\n       x := 1; z := 1;\n       f(x, y, z);", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("var x; var y; var z; y := 1;\n       while c() do\n         var x;\n         x := 1; y := 1;\n         if c() then\n           if c() then y := 1; break;\n           else        z := 1;\n           end\n         else\n           if c() then z := 1;\n           else        break;\n           end\n         end\n         f(x, y, z);\n       end\n       x := 1; z := 1;\n       f(x, y, z);", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm Program_1_0 (StrSL sl, StrCL p_170, ATerm t);
ATerm take_0_1 (StrSL sl, ATerm m_164, ATerm t);
ATerm copy_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL o_162, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL h_162, ATerm t);
ATerm zip_1_1 (StrSL sl, StrCL d_158, ATerm c_158, ATerm t);
ATerm dr_fix_and_union_1_1 (StrSL sl, StrCL a_152, ATerm z_151, ATerm t);
ATerm dr_fork_and_union_2_1 (StrSL sl, StrCL e_151, StrCL j_151, ATerm d_151, ATerm t);
ATerm dr_transaction_1_1 (StrSL sl, StrCL w_150, ATerm v_150, ATerm t);
ATerm dr_break_bp_0_1 (StrSL sl, ATerm j_148, ATerm t);
ATerm dr_destroy_change_set_0_0 (StrSL sl, ATerm t);
ATerm dr_destroy_scope_0_0 (StrSL sl, ATerm t);
ATerm dr_new_rule_set_0_0 (StrSL sl, ATerm t);
ATerm dr_undefine_rule_vis_0_3 (StrSL sl, ATerm y_140, ATerm z_140, ATerm a_141, ATerm t);
ATerm dr_undefine_rule_0_2 (StrSL sl, ATerm r_140, ATerm s_140, ATerm t);
ATerm dr_set_rule_vis_0_4 (StrSL sl, ATerm h_140, ATerm i_140, ATerm k_140, ATerm l_140, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm z_139, ATerm a_140, ATerm b_140, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm q_139, ATerm r_139, ATerm t);
ATerm dr_label_scope_0_2 (StrSL sl, ATerm g_139, ATerm h_139, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL w_138, ATerm v_138, ATerm t);
ATerm dr_switch_rule_set_0_1 (StrSL sl, ATerm t_138, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL f_134, ATerm t);
ATerm alltd_1_0 (StrSL sl, StrCL t_124, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL q_120, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm lt_0_0 (StrSL sl, ATerm t);
ATerm geq_0_0 (StrSL sl, ATerm t);
ATerm subt_0_0 (StrSL sl, ATerm t);
ATerm string_length_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL s_107, StrCL t_107, StrCL u_107, StrCL v_107, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL q_107, StrCL r_107, ATerm t);
ATerm open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm parse_string_0_2 (StrSL sl, ATerm j_89, ATerm l_89, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
ATerm MemoTILParseTable_0_0 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
ATerm VarNeeded_0_0 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
ATerm VarUsed_0_0 (StrSL sl, ATerm t);
ATerm Assign_2_0 (StrSL sl, StrCL a_42, StrCL b_42, ATerm t);
ATerm IfThen_2_0 (StrSL sl, StrCL x_41, StrCL y_41, ATerm t);
ATerm IfElse_3_0 (StrSL sl, StrCL u_41, StrCL v_41, StrCL w_41, ATerm t);
ATerm While_2_0 (StrSL sl, StrCL s_41, StrCL t_41, ATerm t);
ATerm For_4_0 (StrSL sl, StrCL o_41, StrCL p_41, StrCL q_41, StrCL r_41, ATerm t);
ATerm ProcCall_2_0 (StrSL sl, StrCL a_41, StrCL b_41, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
ATerm dce_break_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm dce_fix_and_union_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
ATerm dce_union_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
ATerm dead_code_elimination_tests_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm custom_message_0_4 (StrSL sl, ATerm f_35, ATerm g_35, ATerm h_35, ATerm i_35, ATerm t);
ATerm separation_message_0_1 (StrSL sl, ATerm m_34, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
ATerm dr_ignore_state_cleanup_1_1 (StrSL sl, StrCL j_88, ATerm k_88, ATerm t);
ATerm get_til_parse_table_0_0 (StrSL sl, ATerm t);
ATerm parse_til_0_0 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm apply_dce_test_1_2 (StrSL sl, StrCL x_26, ATerm v_26, ATerm w_26, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm dce_for_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm dce_while_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm dce_if_then_else_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm dce_if_then_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm declare_var_needed_0_0 (StrSL sl, ATerm t);
ATerm dce_assign_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm dce_stats_other_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm dce_stats_decl_0_0 (StrSL sl, ATerm t);
ATerm dce_stats_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm dce_stat_0_0 (StrSL sl, ATerm t);
ATerm ElimIf_0_0 (StrSL sl, ATerm t);
ATerm ElimAssign_0_0 (StrSL sl, ATerm t);
ATerm ElimDecl_0_0 (StrSL sl, ATerm t);
ATerm MemoTILParseTable_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MemoTILParseTable_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm u_87 = NULL,v_87 = NULL,x_87 = NULL,y_87 = NULL,a_88 = NULL,b_88 = NULL,d_88 = NULL;
sl_init_var(0, u_87);
{
struct str_closure x_196 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(x_196);
if((u_87 == NULL))
{
u_87 = t;
}
else
if((u_87 != t))
goto fail89 ;
x_87 = t;
b_88 = t;
t = term17;
y_87 = t;
t = b_88;
d_88 = t;
t = (ATerm) ATinsert(ATempty, term7);
a_88 = t;
t = d_88;
t = dr_lookup_rule_0_2(sl, y_87, a_88, t);
if((t == NULL))
goto fail89 ;
v_87 = t;
t = x_87;
t = v_87;
t = fetch_elem_1_0(sl, lifted84_cl, t);
if((t == NULL))
goto fail89 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_193 = NULL,i_193 = NULL,g_193 = NULL,h_193 = NULL;
i_193 = t;
if((sl_readvar(0, sl) == NULL))
goto fail90 ;
else
{
t = sl_readvar(0, sl);
}
f_193 = t;
t = i_193;
if(match_cons(t, sym__2))
{
ATerm trm93 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm93) == ATmakeSymbol("701969a6c1bc9c512283507cd9faf808", 0, ATtrue))))
goto fail90 ;
g_193 = ATgetArgument(t, 1);
}
else
goto fail90 ;
h_193 = t;
t = f_193;
t = h_193;
t = g_193;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
ATerm VarNeeded_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "VarNeeded_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
sl_init_var(0, f_63);
sl_init_var(1, g_63);
sl_init_var(2, h_63);
{
struct str_closure w_196 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(w_196);
if((g_63 == NULL))
{
g_63 = t;
}
else
if((g_63 != t))
goto fail87 ;
{
ATerm trm92;
trm92 = (ATerm) ATgetAnnotations(t);
if((trm92 == NULL))
trm92 = (ATerm) ATempty;
if(match_cons(t, sym_Var_1))
{
if((h_63 == NULL))
{
h_63 = ATgetArgument(t, 0);
}
else
if((h_63 != ATgetArgument(t, 0)))
goto fail87 ;
}
else
goto fail87 ;
if((f_63 == NULL))
{
f_63 = trm92;
}
else
if((f_63 != trm92))
goto fail87 ;
}
j_63 = t;
m_63 = t;
t = term3;
k_63 = t;
t = m_63;
n_63 = t;
if((h_63 == NULL))
goto fail87 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, h_63), (ATerm) ATinsert(ATempty, term7));
}
l_63 = t;
t = n_63;
t = dr_lookup_rule_0_2(sl, k_63, l_63, t);
if((t == NULL))
goto fail87 ;
i_63 = t;
t = j_63;
t = i_63;
t = fetch_elem_1_0(sl, lifted83_cl, t);
if((t == NULL))
goto fail87 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_192 = NULL,y_192 = NULL,a_193 = NULL,c_193 = NULL,d_193 = NULL,e_193 = NULL,b_193 = NULL;
c_193 = t;
if((sl_readvar(2, sl) == NULL))
goto fail88 ;
else
{
t = sl_readvar(2, sl);
}
x_192 = t;
t = c_193;
d_193 = t;
if((sl_readvar(0, sl) == NULL))
goto fail88 ;
else
{
t = sl_readvar(0, sl);
}
y_192 = t;
t = d_193;
e_193 = t;
if((sl_readvar(1, sl) == NULL))
goto fail88 ;
else
{
t = sl_readvar(1, sl);
}
a_193 = t;
t = e_193;
if(!((ATgetSymbol(t) == ATmakeSymbol("fb6e5a120220761b0d84224d5fd70c32", 0, ATtrue))))
goto fail88 ;
b_193 = t;
t = a_193;
t = b_193;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, x_192), y_192);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm VarUsed_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "VarUsed_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm n_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
sl_init_var(0, n_60);
sl_init_var(1, r_60);
sl_init_var(2, s_60);
{
struct str_closure v_196 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(v_196);
if((r_60 == NULL))
{
r_60 = t;
}
else
if((r_60 != t))
goto fail85 ;
{
ATerm trm91;
trm91 = (ATerm) ATgetAnnotations(t);
if((trm91 == NULL))
trm91 = (ATerm) ATempty;
if(match_cons(t, sym_Var_1))
{
if((s_60 == NULL))
{
s_60 = ATgetArgument(t, 0);
}
else
if((s_60 != ATgetArgument(t, 0)))
goto fail85 ;
}
else
goto fail85 ;
if((n_60 == NULL))
{
n_60 = trm91;
}
else
if((n_60 != trm91))
goto fail85 ;
}
v_60 = t;
a_61 = t;
t = term5;
y_60 = t;
t = a_61;
b_61 = t;
if((s_60 == NULL))
goto fail85 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, s_60), (ATerm) ATinsert(ATempty, term7));
}
z_60 = t;
t = b_61;
t = dr_lookup_rule_0_2(sl, y_60, z_60, t);
if((t == NULL))
goto fail85 ;
u_60 = t;
t = v_60;
t = u_60;
t = fetch_elem_1_0(sl, lifted82_cl, t);
if((t == NULL))
goto fail85 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_192 = NULL,r_192 = NULL,s_192 = NULL,u_192 = NULL,v_192 = NULL,w_192 = NULL,t_192 = NULL;
u_192 = t;
if((sl_readvar(2, sl) == NULL))
goto fail86 ;
else
{
t = sl_readvar(2, sl);
}
q_192 = t;
t = u_192;
v_192 = t;
if((sl_readvar(0, sl) == NULL))
goto fail86 ;
else
{
t = sl_readvar(0, sl);
}
r_192 = t;
t = v_192;
w_192 = t;
if((sl_readvar(1, sl) == NULL))
goto fail86 ;
else
{
t = sl_readvar(1, sl);
}
s_192 = t;
t = w_192;
if(!((ATgetSymbol(t) == ATmakeSymbol("4ddd5e10875be67633fd834b9e6c8381", 0, ATtrue))))
goto fail86 ;
t_192 = t;
t = s_192;
t = t_192;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, q_192), r_192);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm Assign_2_0 (StrSL sl, StrCL a_42, StrCL b_42, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Assign_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_187 = NULL,n_187 = NULL,o_187 = NULL,t_187 = NULL,u_187 = NULL;
ATerm trm90;
trm90 = (ATerm) ATgetAnnotations(t);
if((trm90 == NULL))
trm90 = (ATerm) ATempty;
if(match_cons(t, sym_Assign_2))
{
n_187 = ATgetArgument(t, 0);
o_187 = ATgetArgument(t, 1);
}
else
goto fail84 ;
p_187 = trm90;
t = n_187;
t = cl_fun(a_42)(cl_sl(a_42), t);
if((t == NULL))
goto fail84 ;
t_187 = t;
t = o_187;
t = cl_fun(b_42)(cl_sl(b_42), t);
if((t == NULL))
goto fail84 ;
u_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Assign_2, t_187, u_187), p_187);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
ATerm IfThen_2_0 (StrSL sl, StrCL x_41, StrCL y_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "IfThen_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_187 = NULL,f_187 = NULL,g_187 = NULL,i_187 = NULL,j_187 = NULL;
ATerm trm89;
trm89 = (ATerm) ATgetAnnotations(t);
if((trm89 == NULL))
trm89 = (ATerm) ATempty;
if(match_cons(t, sym_IfThen_2))
{
f_187 = ATgetArgument(t, 0);
g_187 = ATgetArgument(t, 1);
}
else
goto fail83 ;
h_187 = trm89;
t = f_187;
t = cl_fun(x_41)(cl_sl(x_41), t);
if((t == NULL))
goto fail83 ;
i_187 = t;
t = g_187;
t = cl_fun(y_41)(cl_sl(y_41), t);
if((t == NULL))
goto fail83 ;
j_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_IfThen_2, i_187, j_187), h_187);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm IfElse_3_0 (StrSL sl, StrCL u_41, StrCL v_41, StrCL w_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "IfElse_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_187 = NULL,u_186 = NULL,v_186 = NULL,a_187 = NULL,c_187 = NULL,d_187 = NULL,e_187 = NULL;
ATerm trm88;
trm88 = (ATerm) ATgetAnnotations(t);
if((trm88 == NULL))
trm88 = (ATerm) ATempty;
if(match_cons(t, sym_IfElse_3))
{
u_186 = ATgetArgument(t, 0);
v_186 = ATgetArgument(t, 1);
a_187 = ATgetArgument(t, 2);
}
else
goto fail82 ;
b_187 = trm88;
t = u_186;
t = cl_fun(u_41)(cl_sl(u_41), t);
if((t == NULL))
goto fail82 ;
c_187 = t;
t = v_186;
t = cl_fun(v_41)(cl_sl(v_41), t);
if((t == NULL))
goto fail82 ;
d_187 = t;
t = a_187;
t = cl_fun(w_41)(cl_sl(w_41), t);
if((t == NULL))
goto fail82 ;
e_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_IfElse_3, c_187, d_187, e_187), b_187);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
ATerm While_2_0 (StrSL sl, StrCL s_41, StrCL t_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "While_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_186 = NULL,p_186 = NULL,q_186 = NULL,s_186 = NULL,t_186 = NULL;
ATerm trm87;
trm87 = (ATerm) ATgetAnnotations(t);
if((trm87 == NULL))
trm87 = (ATerm) ATempty;
if(match_cons(t, sym_While_2))
{
p_186 = ATgetArgument(t, 0);
q_186 = ATgetArgument(t, 1);
}
else
goto fail81 ;
r_186 = trm87;
t = p_186;
t = cl_fun(s_41)(cl_sl(s_41), t);
if((t == NULL))
goto fail81 ;
s_186 = t;
t = q_186;
t = cl_fun(t_41)(cl_sl(t_41), t);
if((t == NULL))
goto fail81 ;
t_186 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_While_2, s_186, t_186), r_186);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm For_4_0 (StrSL sl, StrCL o_41, StrCL p_41, StrCL q_41, StrCL r_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "For_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_186 = NULL,e_186 = NULL,f_186 = NULL,g_186 = NULL,h_186 = NULL,l_186 = NULL,m_186 = NULL,n_186 = NULL,o_186 = NULL;
ATerm trm86;
trm86 = (ATerm) ATgetAnnotations(t);
if((trm86 == NULL))
trm86 = (ATerm) ATempty;
if(match_cons(t, sym_For_4))
{
e_186 = ATgetArgument(t, 0);
f_186 = ATgetArgument(t, 1);
g_186 = ATgetArgument(t, 2);
h_186 = ATgetArgument(t, 3);
}
else
goto fail80 ;
i_186 = trm86;
t = e_186;
t = cl_fun(o_41)(cl_sl(o_41), t);
if((t == NULL))
goto fail80 ;
l_186 = t;
t = f_186;
t = cl_fun(p_41)(cl_sl(p_41), t);
if((t == NULL))
goto fail80 ;
m_186 = t;
t = g_186;
t = cl_fun(q_41)(cl_sl(q_41), t);
if((t == NULL))
goto fail80 ;
n_186 = t;
t = h_186;
t = cl_fun(r_41)(cl_sl(r_41), t);
if((t == NULL))
goto fail80 ;
o_186 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_For_4, l_186, m_186, n_186, o_186), i_186);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm ProcCall_2_0 (StrSL sl, StrCL a_41, StrCL b_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ProcCall_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_184 = NULL,u_184 = NULL,v_184 = NULL,x_184 = NULL,y_184 = NULL;
ATerm trm85;
trm85 = (ATerm) ATgetAnnotations(t);
if((trm85 == NULL))
trm85 = (ATerm) ATempty;
if(match_cons(t, sym_ProcCall_2))
{
u_184 = ATgetArgument(t, 0);
v_184 = ATgetArgument(t, 1);
}
else
goto fail79 ;
w_184 = trm85;
t = u_184;
t = cl_fun(a_41)(cl_sl(a_41), t);
if((t == NULL))
goto fail79 ;
x_184 = t;
t = v_184;
t = cl_fun(b_41)(cl_sl(b_41), t);
if((t == NULL))
goto fail79 ;
y_184 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ProcCall_2, x_184, y_184), w_184);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_break_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_break_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
struct str_closure o_196 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(o_196);
w_39 = t;
t = term151;
u_39 = t;
t = w_39;
x_39 = t;
t = term153;
v_39 = t;
t = x_39;
{
struct str_closure p_196 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(p_196);
t = apply_dce_test_1_2(sl, lifted75_cl, u_39, v_39, t);
if((t == NULL))
goto fail71 ;
a_40 = t;
t = term157;
y_39 = t;
t = a_40;
b_40 = t;
t = term157;
z_39 = t;
t = b_40;
{
struct str_closure q_196 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(q_196);
t = apply_dce_test_1_2(sl, lifted76_cl, y_39, z_39, t);
if((t == NULL))
goto fail71 ;
e_40 = t;
t = term161;
c_40 = t;
t = e_40;
f_40 = t;
t = term163;
d_40 = t;
t = f_40;
{
struct str_closure r_196 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(r_196);
t = apply_dce_test_1_2(sl, lifted77_cl, c_40, d_40, t);
if((t == NULL))
goto fail71 ;
i_40 = t;
t = term167;
g_40 = t;
t = i_40;
j_40 = t;
t = term169;
h_40 = t;
t = j_40;
{
struct str_closure s_196 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(s_196);
t = apply_dce_test_1_2(sl, lifted78_cl, g_40, h_40, t);
if((t == NULL))
goto fail71 ;
m_40 = t;
t = term173;
k_40 = t;
t = m_40;
n_40 = t;
t = term175;
l_40 = t;
t = n_40;
{
struct str_closure t_196 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(t_196);
t = apply_dce_test_1_2(sl, lifted79_cl, k_40, l_40, t);
if((t == NULL))
goto fail71 ;
q_40 = t;
t = term179;
o_40 = t;
t = q_40;
r_40 = t;
t = term181;
p_40 = t;
t = r_40;
{
struct str_closure u_196 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(u_196);
t = apply_dce_test_1_2(sl, lifted80_cl, o_40, p_40, t);
if((t == NULL))
goto fail71 ;
u_40 = t;
t = term185;
s_40 = t;
t = u_40;
v_40 = t;
t = term187;
t_40 = t;
t = v_40;
t = apply_dce_test_1_2(sl, lifted81_cl, s_40, t_40, t);
if((t == NULL))
goto fail71 ;
}
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term183;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term177;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term171;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term165;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term159;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term155;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_fix_and_union_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_fix_and_union_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
struct str_closure h_196 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(h_196);
y_38 = t;
t = term125;
w_38 = t;
t = y_38;
z_38 = t;
t = term125;
x_38 = t;
t = z_38;
{
struct str_closure i_196 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(i_196);
t = apply_dce_test_1_2(sl, lifted69_cl, w_38, x_38, t);
if((t == NULL))
goto fail64 ;
c_39 = t;
t = term129;
a_39 = t;
t = c_39;
d_39 = t;
t = term129;
b_39 = t;
t = d_39;
{
struct str_closure k_196 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(k_196);
t = apply_dce_test_1_2(sl, lifted70_cl, a_39, b_39, t);
if((t == NULL))
goto fail64 ;
g_39 = t;
t = term133;
e_39 = t;
t = g_39;
h_39 = t;
t = term133;
f_39 = t;
t = h_39;
{
struct str_closure l_196 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(l_196);
t = apply_dce_test_1_2(sl, lifted71_cl, e_39, f_39, t);
if((t == NULL))
goto fail64 ;
k_39 = t;
t = term137;
i_39 = t;
t = k_39;
l_39 = t;
t = term137;
j_39 = t;
t = l_39;
{
struct str_closure m_196 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(m_196);
t = apply_dce_test_1_2(sl, lifted72_cl, i_39, j_39, t);
if((t == NULL))
goto fail64 ;
o_39 = t;
t = term141;
m_39 = t;
t = o_39;
p_39 = t;
t = term143;
n_39 = t;
t = p_39;
{
struct str_closure n_196 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(n_196);
t = apply_dce_test_1_2(sl, lifted73_cl, m_39, n_39, t);
if((t == NULL))
goto fail64 ;
s_39 = t;
t = term147;
q_39 = t;
t = s_39;
t_39 = t;
t = term143;
r_39 = t;
t = t_39;
t = apply_dce_test_1_2(sl, lifted74_cl, q_39, r_39, t);
if((t == NULL))
goto fail64 ;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term145;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term127;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term123;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_union_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_union_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
struct str_closure m_195 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(m_195);
e_36 = t;
t = term45;
c_36 = t;
t = e_36;
f_36 = t;
t = term45;
d_36 = t;
t = f_36;
{
struct str_closure n_195 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(n_195);
t = apply_dce_test_1_2(sl, lifted51_cl, c_36, d_36, t);
if((t == NULL))
goto fail45 ;
i_36 = t;
t = term49;
g_36 = t;
t = i_36;
j_36 = t;
t = term49;
h_36 = t;
t = j_36;
{
struct str_closure o_195 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(o_195);
t = apply_dce_test_1_2(sl, lifted52_cl, g_36, h_36, t);
if((t == NULL))
goto fail45 ;
m_36 = t;
t = term53;
k_36 = t;
t = m_36;
n_36 = t;
t = term53;
l_36 = t;
t = n_36;
{
struct str_closure p_195 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(p_195);
t = apply_dce_test_1_2(sl, lifted53_cl, k_36, l_36, t);
if((t == NULL))
goto fail45 ;
q_36 = t;
t = term57;
o_36 = t;
t = q_36;
r_36 = t;
t = term57;
p_36 = t;
t = r_36;
{
struct str_closure r_195 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(r_195);
t = apply_dce_test_1_2(sl, lifted54_cl, o_36, p_36, t);
if((t == NULL))
goto fail45 ;
u_36 = t;
t = term61;
s_36 = t;
t = u_36;
v_36 = t;
t = term61;
t_36 = t;
t = v_36;
{
struct str_closure s_195 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(s_195);
t = apply_dce_test_1_2(sl, lifted55_cl, s_36, t_36, t);
if((t == NULL))
goto fail45 ;
y_36 = t;
t = term65;
w_36 = t;
t = y_36;
z_36 = t;
t = term65;
x_36 = t;
t = z_36;
{
struct str_closure t_195 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(t_195);
t = apply_dce_test_1_2(sl, lifted56_cl, w_36, x_36, t);
if((t == NULL))
goto fail45 ;
c_37 = t;
t = term69;
a_37 = t;
t = c_37;
d_37 = t;
t = term71;
b_37 = t;
t = d_37;
{
struct str_closure w_195 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(w_195);
t = apply_dce_test_1_2(sl, lifted57_cl, a_37, b_37, t);
if((t == NULL))
goto fail45 ;
g_37 = t;
t = term75;
e_37 = t;
t = g_37;
h_37 = t;
t = term75;
f_37 = t;
t = h_37;
{
struct str_closure x_195 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(x_195);
t = apply_dce_test_1_2(sl, lifted58_cl, e_37, f_37, t);
if((t == NULL))
goto fail45 ;
k_37 = t;
t = term79;
i_37 = t;
t = k_37;
l_37 = t;
t = term79;
j_37 = t;
t = l_37;
{
struct str_closure y_195 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(y_195);
t = apply_dce_test_1_2(sl, lifted59_cl, i_37, j_37, t);
if((t == NULL))
goto fail45 ;
o_37 = t;
t = term83;
m_37 = t;
t = o_37;
p_37 = t;
t = term83;
n_37 = t;
t = p_37;
{
struct str_closure z_195 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(z_195);
t = apply_dce_test_1_2(sl, lifted60_cl, m_37, n_37, t);
if((t == NULL))
goto fail45 ;
s_37 = t;
t = term87;
q_37 = t;
t = s_37;
t_37 = t;
t = term87;
r_37 = t;
t = t_37;
{
struct str_closure a_196 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(a_196);
t = apply_dce_test_1_2(sl, lifted61_cl, q_37, r_37, t);
if((t == NULL))
goto fail45 ;
w_37 = t;
t = term91;
u_37 = t;
t = w_37;
x_37 = t;
t = term91;
v_37 = t;
t = x_37;
{
struct str_closure b_196 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(b_196);
t = apply_dce_test_1_2(sl, lifted62_cl, u_37, v_37, t);
if((t == NULL))
goto fail45 ;
a_38 = t;
t = term95;
y_37 = t;
t = a_38;
b_38 = t;
t = term97;
z_37 = t;
t = b_38;
{
struct str_closure c_196 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(c_196);
t = apply_dce_test_1_2(sl, lifted63_cl, y_37, z_37, t);
if((t == NULL))
goto fail45 ;
e_38 = t;
t = term101;
c_38 = t;
t = e_38;
f_38 = t;
t = term87;
d_38 = t;
t = f_38;
{
struct str_closure d_196 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(d_196);
t = apply_dce_test_1_2(sl, lifted64_cl, c_38, d_38, t);
if((t == NULL))
goto fail45 ;
i_38 = t;
t = term105;
g_38 = t;
t = i_38;
j_38 = t;
t = term91;
h_38 = t;
t = j_38;
{
struct str_closure e_196 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(e_196);
t = apply_dce_test_1_2(sl, lifted65_cl, g_38, h_38, t);
if((t == NULL))
goto fail45 ;
m_38 = t;
t = term109;
k_38 = t;
t = m_38;
n_38 = t;
t = term111;
l_38 = t;
t = n_38;
{
struct str_closure f_196 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(f_196);
t = apply_dce_test_1_2(sl, lifted66_cl, k_38, l_38, t);
if((t == NULL))
goto fail45 ;
q_38 = t;
t = term115;
o_38 = t;
t = q_38;
r_38 = t;
t = term117;
p_38 = t;
t = r_38;
{
struct str_closure g_196 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(g_196);
t = apply_dce_test_1_2(sl, lifted67_cl, o_38, p_38, t);
if((t == NULL))
goto fail45 ;
u_38 = t;
t = term121;
s_38 = t;
t = u_38;
v_38 = t;
t = term117;
t_38 = t;
t = v_38;
t = apply_dce_test_1_2(sl, lifted68_cl, s_38, t_38, t);
if((t == NULL))
goto fail45 ;
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
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term119;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm dead_code_elimination_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dead_code_elimination_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_195 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(k_195);
struct str_closure l_195 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(l_195);
t = test_suite_2_0(sl, lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_35 = NULL,w_35 = NULL,x_35 = NULL,u_35 = NULL,y_35 = NULL,z_35 = NULL,v_35 = NULL,a_36 = NULL,b_36 = NULL;
t_35 = t;
x_35 = t;
t = term37;
w_35 = t;
t = x_35;
t = separation_message_0_1(sl_up(sl), w_35, t);
if((t == NULL))
goto fail44 ;
t = t_35;
t = dce_union_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
u_35 = t;
z_35 = t;
t = term39;
y_35 = t;
t = z_35;
t = separation_message_0_1(sl_up(sl), y_35, t);
if((t == NULL))
goto fail44 ;
t = u_35;
t = dce_fix_and_union_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
v_35 = t;
b_36 = t;
t = term41;
a_36 = t;
t = b_36;
t = separation_message_0_1(sl_up(sl), a_36, t);
if((t == NULL))
goto fail44 ;
t = v_35;
t = dce_break_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = dead_code_elimination_tests_0_0(sl, t);
if((t == NULL))
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm custom_message_0_4 (StrSL sl, ATerm f_35, ATerm g_35, ATerm h_35, ATerm i_35, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "custom_message_0_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
struct str_closure j_195 = { &(_Id) , sl };
StrCL lifted48_cl = &(j_195);
ATerm trm83 = t;
t = (ATerm) ATmakeAppl(sym__2, i_35, term25);
t = geq_0_0(sl, t);
if((t == NULL))
goto label71 ;
t = i_35;
goto label70 ;
label71 :
t = trm83;
t = term25;
goto label70 ;
label70 :
;
m_35 = t;
l_35 = t;
t = (ATerm) ATmakeAppl(sym__2, l_35, term27);
t = subt_0_0(sl, t);
if((t == NULL))
goto fail40 ;
j_35 = t;
o_35 = t;
t = f_35;
t = string_length_0_0(sl, t);
if((t == NULL))
goto fail40 ;
n_35 = t;
t = o_35;
t = (ATerm) ATmakeAppl(sym__2, j_35, n_35);
t = subt_0_0(sl, t);
if((t == NULL))
goto fail40 ;
k_35 = t;
{
ATerm trm84 = t;
t = (ATerm) ATmakeAppl(sym__2, k_35, term29);
t = lt_0_0(sl, t);
if((t == NULL))
goto label73 ;
{
ATerm p_35 = NULL,q_35 = NULL;
t = f_35;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail40 ;
t = take_0_1(sl, j_35, t);
if((t == NULL))
goto fail40 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail40 ;
q_35 = t;
p_35 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_35), term31), p_35), term33), h_35);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail40 ;
else
goto label72 ;
}
label73 :
t = trm84;
{
ATerm r_35 = NULL,s_35 = NULL;
t = (ATerm) ATmakeAppl(sym__2, k_35, g_35);
t = copy_0_0(sl, t);
if((t == NULL))
goto fail40 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail40 ;
s_35 = t;
r_35 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_35), r_35), term33), f_35), term33), h_35);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail40 ;
else
goto label72 ;
}
label72 :
;
t = say_1_0(sl, lifted48_cl, t);
if((t == NULL))
goto fail40 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm separation_message_0_1 (StrSL sl, ATerm m_34, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "separation_message_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,j_192 = NULL,k_192 = NULL,l_192 = NULL,n_192 = NULL,o_192 = NULL,p_192 = NULL;
p_34 = t;
t = term21;
n_34 = t;
t = p_34;
q_34 = t;
t = term23;
o_34 = t;
t = q_34;
n_192 = t;
t = m_34;
j_192 = t;
t = n_192;
o_192 = t;
t = n_34;
k_192 = t;
t = o_192;
p_192 = t;
t = o_34;
l_192 = t;
t = p_192;
t = custom_message_0_4(sl, j_192, k_192, k_192, l_192, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm dr_ignore_state_cleanup_1_1 (StrSL sl, StrCL j_88, ATerm k_88, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dr_ignore_state_cleanup_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm74 = t;
ATerm e_34 = NULL,g_34 = NULL,h_34 = NULL;
e_34 = t;
t = k_88;
{
ATerm trm75 = t;
ATerm trm76 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm77 = ATgetFirst((ATermList) t);
ATerm trm78 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm78) == AT_LIST) && ATisEmpty(trm78))))
goto label65 ;
}
else
goto label65 ;
goto label64 ;
label65 :
t = trm76;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label64 ;
else
goto label63 ;
label64 :
;
goto label61 ;
label63 :
t = trm75;
goto label62 ;
label62 :
;
t = e_34;
h_34 = t;
t = (ATerm) ATinsert(ATempty, k_88);
g_34 = t;
t = h_34;
t = dr_ignore_state_cleanup_1_1(sl, j_88, g_34, t);
if((t == NULL))
goto label61 ;
}
goto label60 ;
label61 :
t = trm74;
{
ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
z_33 = t;
t = k_88;
{
ATerm trm79 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm80 = ATgetFirst((ATermList) t);
ATerm trm81 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm81) == AT_LIST) && ATisEmpty(trm81))))
goto label67 ;
}
else
goto label67 ;
goto label66 ;
label67 :
t = trm79;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label66 ;
else
goto fail36 ;
label66 :
;
t = z_33;
a_34 = t;
t = k_88;
{
struct str_closure e_195 = { &(dr_new_rule_set_0_0) , sl };
StrCL lifted43_cl = &(e_195);
t = map_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto fail36 ;
{
struct str_closure f_195 = { &(dr_switch_rule_set_0_1) , sl };
StrCL lifted44_cl = &(f_195);
t = zip_1_1(sl, lifted44_cl, k_88, t);
if((t == NULL))
goto fail36 ;
y_33 = t;
t = a_34;
t = cl_fun(j_88)(cl_sl(j_88), t);
if((t == NULL))
goto fail36 ;
b_34 = t;
t = y_33;
{
struct str_closure g_195 = { &(dr_switch_rule_set_0_1) , sl };
StrCL lifted45_cl = &(g_195);
t = zip_1_1(sl, lifted45_cl, k_88, t);
if((t == NULL))
goto fail36 ;
{
struct str_closure i_195 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(i_195);
t = map_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail36 ;
t = b_34;
goto label60 ;
}
}
}
}
}
}
label60 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_195 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(h_195);
t = map_1_0(sl_up(sl), lifted47_cl, t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm82 = t;
t = dr_destroy_scope_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label69 ;
goto label68 ;
label69 :
t = trm82;
t = dr_destroy_change_set_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail38 ;
else
goto label68 ;
label68 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_til_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_til_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_29 = NULL;
ATerm trm73 = t;
t = MemoTILParseTable_0_0(sl, t);
if((t == NULL))
goto label59 ;
goto label58 ;
label59 :
t = trm73;
{
ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,m_29 = NULL;
t = term15;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail35 ;
t = open_parse_table_0_0(sl, t);
if((t == NULL))
goto fail35 ;
d_29 = t;
e_29 = t;
i_29 = t;
t = term17;
f_29 = t;
t = i_29;
j_29 = t;
t = (ATerm) ATinsert(ATempty, term7);
g_29 = t;
t = j_29;
m_29 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, d_29);
h_29 = t;
t = m_29;
t = dr_set_rule_0_3(sl, f_29, g_29, h_29, t);
if((t == NULL))
goto fail35 ;
t = e_29;
goto label58 ;
}
label58 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_til_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_til_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
y_28 = t;
a_29 = t;
t = get_til_parse_table_0_0(sl, t);
if((t == NULL))
goto fail34 ;
z_28 = t;
t = a_29;
t = z_28;
w_28 = t;
t = y_28;
b_29 = t;
t = term13;
x_28 = t;
t = b_29;
t = parse_string_0_2(sl, w_28, x_28, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_dce_test_1_2 (StrSL sl, StrCL x_26, ATerm v_26, ATerm w_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_dce_test_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, v_26);
sl_init_var(1, w_26);
{
struct str_closure b_195 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(b_195);
struct str_closure c_195 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(c_195);
struct str_closure d_195 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(d_195);
t = apply_test_4_0(sl, x_26, lifted38_cl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail28 ;
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
if((sl_readvar(1, sl) == NULL))
goto fail33 ;
else
{
t = sl_readvar(1, sl);
}
t = parse_til_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail32 ;
else
{
t = sl_readvar(0, sl);
}
t = parse_til_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_26 = NULL,z_26 = NULL;
struct str_closure a_195 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(a_195);
z_26 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term5), term3);
y_26 = t;
t = z_26;
t = dr_ignore_state_cleanup_1_1(sl_up(sl), lifted39_cl, y_26, t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_194 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(z_194);
t = Program_1_0(sl_up(sl_up(sl)), lifted40_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm71 = t;
t = dce_stats_decl_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label56 ;
goto label55 ;
label56 :
t = trm71;
{
ATerm trm72 = t;
t = dce_stats_other_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label57 ;
goto label55 ;
label57 :
t = trm72;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label55 ;
else
goto fail31 ;
}
label55 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_for_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_for_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_13 = NULL,p_13 = NULL,q_13 = NULL,o_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
if(match_cons(t, sym_For_4))
{
n_13 = ATgetArgument(t, 0);
{
ATerm trm66 = ATgetArgument(t, 1);
}
{
ATerm trm67 = ATgetArgument(t, 2);
}
{
ATerm trm68 = ATgetArgument(t, 3);
}
}
else
goto fail25 ;
q_13 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term5), term3);
p_13 = t;
t = q_13;
{
struct str_closure y_194 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(y_194);
t = dr_fix_and_union_1_1(sl, lifted33_cl, p_13, t);
if((t == NULL))
goto fail25 ;
o_13 = t;
t_13 = t;
t = term3;
r_13 = t;
t = t_13;
u_13 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, n_13), (ATerm) ATinsert(ATempty, term7));
s_13 = t;
t = u_13;
t = dr_undefine_rule_vis_0_3(sl, r_13, n_13, s_13, t);
if((t == NULL))
goto fail25 ;
t = o_13;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_194 = { &(declare_var_needed_0_0) , sl_up(sl) };
StrCL lifted34_cl = &(u_194);
struct str_closure v_194 = { &(declare_var_needed_0_0) , sl_up(sl) };
StrCL lifted35_cl = &(v_194);
struct str_closure w_194 = { &(declare_var_needed_0_0) , sl_up(sl) };
StrCL lifted36_cl = &(w_194);
struct str_closure x_194 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(x_194);
t = For_4_0(sl_up(sl), lifted34_cl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm69 = t;
t = dce_stats_decl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label53 ;
goto label52 ;
label53 :
t = trm69;
{
ATerm trm70 = t;
t = dce_stats_other_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label54 ;
goto label52 ;
label54 :
t = trm70;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label52 ;
else
goto fail27 ;
}
label52 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_while_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_while_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_13 = NULL,l_13 = NULL;
struct str_closure t_194 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(t_194);
if(match_cons(t, sym_While_2))
{
ATerm trm64 = ATgetArgument(t, 0);
ATerm trm65 = ATgetArgument(t, 1);
}
else
goto fail22 ;
l_13 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term5), term3);
k_13 = t;
t = l_13;
t = dr_fix_and_union_1_1(sl, lifted30_cl, k_13, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_194 = { &(declare_var_needed_0_0) , sl_up(sl) };
StrCL lifted31_cl = &(r_194);
struct str_closure s_194 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(s_194);
t = While_2_0(sl_up(sl), lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm62 = t;
t = dce_stats_decl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label50 ;
goto label49 ;
label50 :
t = trm62;
{
ATerm trm63 = t;
t = dce_stats_other_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label51 ;
goto label49 ;
label51 :
t = trm63;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label49 ;
else
goto fail24 ;
}
label49 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_if_then_else_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_if_then_else_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_13 = NULL,j_13 = NULL;
struct str_closure e_194 = { &(declare_var_needed_0_0) , sl };
StrCL lifted27_cl = &(e_194);
struct str_closure f_194 = { &(_Id) , sl };
StrCL lifted28_cl = &(f_194);
struct str_closure g_194 = { &(_Id) , sl };
StrCL lifted29_cl = &(g_194);
if(match_cons(t, sym_IfElse_3))
{
ATerm trm57 = ATgetArgument(t, 0);
ATerm trm58 = ATgetArgument(t, 1);
ATerm trm59 = ATgetArgument(t, 2);
}
else
goto fail18 ;
j_13 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term5), term3);
i_13 = t;
t = j_13;
{
struct str_closure p_194 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(p_194);
struct str_closure q_194 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(q_194);
t = dr_fork_and_union_2_1(sl, lifted19_cl, lifted23_cl, i_13, t);
if((t == NULL))
goto fail18 ;
t = IfElse_3_0(sl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail18 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_194 = { &(_Id) , sl_up(sl) };
StrCL lifted24_cl = &(m_194);
struct str_closure n_194 = { &(_Id) , sl_up(sl) };
StrCL lifted25_cl = &(n_194);
struct str_closure o_194 = { &(dce_stats_0_0) , sl_up(sl) };
StrCL lifted26_cl = &(o_194);
t = IfElse_3_0(sl_up(sl), lifted24_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_194 = { &(_Id) , sl_up(sl) };
StrCL lifted20_cl = &(h_194);
struct str_closure i_194 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(i_194);
struct str_closure j_194 = { &(_Id) , sl_up(sl) };
StrCL lifted22_cl = &(j_194);
t = IfElse_3_0(sl_up(sl), lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
t = dce_stats_decl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label47 ;
goto label46 ;
label47 :
t = trm60;
{
ATerm trm61 = t;
t = dce_stats_other_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label48 ;
goto label46 ;
label48 :
t = trm61;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label46 ;
else
goto fail20 ;
}
label46 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_if_then_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_if_then_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_13 = NULL,h_13 = NULL;
struct str_closure y_193 = { &(declare_var_needed_0_0) , sl };
StrCL lifted17_cl = &(y_193);
struct str_closure z_193 = { &(_Id) , sl };
StrCL lifted18_cl = &(z_193);
if(match_cons(t, sym_IfThen_2))
{
ATerm trm53 = ATgetArgument(t, 0);
ATerm trm54 = ATgetArgument(t, 1);
}
else
goto fail15 ;
h_13 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term5), term3);
g_13 = t;
t = h_13;
{
struct str_closure c_194 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(c_194);
struct str_closure d_194 = { &(_Id) , sl };
StrCL lifted16_cl = &(d_194);
t = dr_fork_and_union_2_1(sl, lifted13_cl, lifted16_cl, g_13, t);
if((t == NULL))
goto fail15 ;
t = IfThen_2_0(sl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail15 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_194 = { &(_Id) , sl_up(sl) };
StrCL lifted14_cl = &(a_194);
struct str_closure b_194 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(b_194);
t = IfThen_2_0(sl_up(sl), lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm55 = t;
t = dce_stats_decl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label44 ;
goto label43 ;
label44 :
t = trm55;
{
ATerm trm56 = t;
t = dce_stats_other_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label45 ;
goto label43 ;
label45 :
t = trm56;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label43 ;
else
goto fail17 ;
}
label43 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm declare_var_needed_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "declare_var_needed_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_193 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(x_193);
t = alltd_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,t_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
if(match_cons(t, sym_Var_1))
{
r_12 = ATgetArgument(t, 0);
}
else
goto fail14 ;
s_12 = t;
x_12 = t;
t = term3;
u_12 = t;
t = x_12;
y_12 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, r_12), (ATerm) ATinsert(ATempty, term7));
v_12 = t;
t = y_12;
z_12 = t;
t = term9;
w_12 = t;
t = z_12;
t = dr_set_rule_vis_0_4(sl_up(sl), u_12, r_12, v_12, w_12, t);
if((t == NULL))
goto fail14 ;
t = s_12;
t_12 = t;
d_13 = t;
t = term5;
a_13 = t;
t = d_13;
e_13 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, r_12), (ATerm) ATinsert(ATempty, term7));
b_13 = t;
t = e_13;
f_13 = t;
t = term11;
c_13 = t;
t = f_13;
t = dr_set_rule_vis_0_4(sl_up(sl), a_13, r_12, b_13, c_13, t);
if((t == NULL))
goto fail14 ;
t = t_12;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_assign_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_assign_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
struct str_closure v_193 = { &(_Id) , sl };
StrCL lifted10_cl = &(v_193);
struct str_closure w_193 = { &(declare_var_needed_0_0) , sl };
StrCL lifted11_cl = &(w_193);
if(match_cons(t, sym_Assign_2))
{
j_12 = ATgetArgument(t, 0);
{
ATerm trm52 = ATgetArgument(t, 1);
}
}
else
goto fail12 ;
k_12 = t;
n_12 = t;
t = term3;
l_12 = t;
t = n_12;
o_12 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, j_12), (ATerm) ATinsert(ATempty, term7));
m_12 = t;
t = o_12;
t = dr_undefine_rule_vis_0_3(sl, l_12, j_12, m_12, t);
if((t == NULL))
goto fail12 ;
t = k_12;
t = Assign_2_0(sl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_stats_other_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_stats_other_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
struct str_closure u_193 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(u_193);
ATerm trm42;
trm42 = (ATerm) ATgetAnnotations(t);
if((trm42 == NULL))
trm42 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
x_11 = ATgetFirst((ATermList) t);
y_11 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail10 ;
b_12 = trm42;
t = x_11;
{
ATerm trm43 = t;
ATerm trm44 = t;
if(match_cons(t, sym_Declaration_1))
{
ATerm trm45 = ATgetArgument(t, 0);
}
else
goto label39 ;
goto label38 ;
label39 :
t = trm44;
if(match_cons(t, sym_DeclarationTyped_2))
{
ATerm trm46 = ATgetArgument(t, 0);
ATerm trm47 = ATgetArgument(t, 1);
goto label38 ;
}
else
goto label37 ;
label38 :
;
goto fail10 ;
label37 :
t = trm43;
goto label36 ;
label36 :
;
z_11 = t;
t = y_11;
{
ATerm trm48 = t;
t = dce_stats_decl_0_0(sl, t);
if((t == NULL))
goto label41 ;
goto label40 ;
label41 :
t = trm48;
{
ATerm trm49 = t;
t = dce_stats_other_0_0(sl, t);
if((t == NULL))
goto label42 ;
goto label40 ;
label42 :
t = trm49;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label40 ;
else
goto fail10 ;
}
label40 :
;
a_12 = t;
t = z_11;
c_12 = t;
t = a_12;
d_12 = t;
t = (ATerm) SRTS_setAnnotations(b_12, (ATerm) ATempty);
g_12 = t;
{
ATerm trm50;
trm50 = CheckATermList(a_12);
if((trm50 == NULL))
goto fail10 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm50, z_11), b_12);
t = c_12;
t = dce_stat_0_0(sl, t);
if((t == NULL))
goto fail10 ;
e_12 = t;
t = d_12;
f_12 = t;
{
ATerm trm51;
trm51 = CheckATermList(f_12);
if((trm51 == NULL))
goto fail10 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm51, e_12), g_12);
t = try_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail10 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_12 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm40 = ATgetFirst((ATermList) t);
if(match_cons(trm40, sym_Block_1))
{
ATerm trm41 = ATgetArgument(trm40, 0);
if(!(((ATgetType(trm41) == AT_LIST) && ATisEmpty(trm41))))
goto fail11 ;
}
else
goto fail11 ;
h_12 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail11 ;
t = h_12;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_stats_decl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_stats_decl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_10 = NULL,f_11 = NULL,g_11 = NULL;
sl_init_var(0, x_10);
{
struct str_closure t_193 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(t_193);
ATerm trm34 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm35 = ATgetFirst((ATermList) t);
if(match_cons(trm35, sym_Declaration_1))
{
if((x_10 == NULL))
{
x_10 = ATgetArgument(trm35, 0);
}
else
if((x_10 != ATgetArgument(trm35, 0)))
goto label35 ;
}
else
goto label35 ;
{
ATerm trm36 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto label35 ;
goto label34 ;
label35 :
t = trm34;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm37 = ATgetFirst((ATermList) t);
if(match_cons(trm37, sym_DeclarationTyped_2))
{
if((x_10 == NULL))
{
x_10 = ATgetArgument(trm37, 0);
}
else
if((x_10 != ATgetArgument(trm37, 0)))
goto fail6 ;
{
ATerm trm38 = ATgetArgument(trm37, 1);
}
}
else
goto fail6 ;
{
ATerm trm39 = (ATerm) ATgetNext((ATermList) t);
}
goto label34 ;
}
else
goto fail6 ;
label34 :
;
g_11 = t;
t = term3;
f_11 = t;
t = g_11;
t = dr_scope_1_1(sl, lifted5_cl, f_11, t);
if((t == NULL))
goto fail6 ;
}
}
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
{
ATerm h_11 = NULL,i_11 = NULL;
struct str_closure s_193 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(s_193);
i_11 = t;
t = term5;
h_11 = t;
t = i_11;
t = dr_scope_1_1(sl_up(sl), lifted6_cl, h_11, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_11 = NULL,k_11 = NULL,y_10 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,z_10 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
struct str_closure r_193 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(r_193);
k_11 = t;
t = term3;
j_11 = t;
t = k_11;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail8 ;
else
{
t = dr_label_scope_0_2(sl_up(sl_up(sl)), j_11, sl_readvar(0, sl_up(sl)), t);
if((t == NULL))
goto fail8 ;
}
y_10 = t;
n_11 = t;
t = term3;
l_11 = t;
t = n_11;
o_11 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail8 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, sl_readvar(0, sl_up(sl))), (ATerm) ATinsert(ATempty, term7));
}
m_11 = t;
t = o_11;
t = dr_undefine_rule_0_2(sl_up(sl_up(sl)), l_11, m_11, t);
if((t == NULL))
goto fail8 ;
t = y_10;
q_11 = t;
t = term5;
p_11 = t;
t = q_11;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail8 ;
else
{
t = dr_label_scope_0_2(sl_up(sl_up(sl)), p_11, sl_readvar(0, sl_up(sl)), t);
if((t == NULL))
goto fail8 ;
}
z_10 = t;
t_11 = t;
t = term5;
r_11 = t;
t = t_11;
u_11 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail8 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, sl_readvar(0, sl_up(sl))), (ATerm) ATinsert(ATempty, term7));
}
s_11 = t;
t = u_11;
t = dr_undefine_rule_0_2(sl_up(sl_up(sl)), r_11, s_11, t);
if((t == NULL))
goto fail8 ;
t = z_10;
w_11 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term5), term3);
v_11 = t;
t = w_11;
t = dr_transaction_1_1(sl_up(sl_up(sl)), lifted7_cl, v_11, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
struct str_closure q_193 = { &(ElimDecl_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted8_cl = &(q_193);
ATerm trm30;
trm30 = (ATerm) ATgetAnnotations(t);
if((trm30 == NULL))
trm30 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_11 = ATgetFirst((ATermList) t);
b_11 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail9 ;
e_11 = trm30;
t = a_11;
c_11 = t;
t = b_11;
{
ATerm trm31 = t;
t = dce_stats_decl_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label32 ;
goto label31 ;
label32 :
t = trm31;
{
ATerm trm32 = t;
t = dce_stats_other_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label33 ;
goto label31 ;
label33 :
t = trm32;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label31 ;
else
goto fail9 ;
}
label31 :
;
d_11 = t;
{
ATerm trm33;
trm33 = CheckATermList(d_11);
if((trm33 == NULL))
goto fail9 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm33, c_11), e_11);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted8_cl, t);
if((t == NULL))
goto fail9 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_stats_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_stats_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm28 = t;
t = dce_stats_decl_0_0(sl, t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm28;
{
ATerm trm29 = t;
t = dce_stats_other_0_0(sl, t);
if((t == NULL))
goto label30 ;
goto label28 ;
label30 :
t = trm29;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label28 ;
else
goto fail5 ;
}
label28 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm dce_stat_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dce_stat_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm16 = t;
t = ElimAssign_0_0(sl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm16;
{
ATerm trm17 = t;
t = dce_assign_0_0(sl, t);
if((t == NULL))
goto label18 ;
goto label16 ;
label18 :
t = trm17;
{
ATerm trm18 = t;
struct str_closure k_193 = { &(_Id) , sl };
StrCL lifted0_cl = &(k_193);
struct str_closure l_193 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(l_193);
t = ProcCall_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto label19 ;
goto label16 ;
label19 :
t = trm18;
{
ATerm trm19 = t;
struct str_closure o_193 = { &(ElimIf_0_0) , sl };
StrCL lifted3_cl = &(o_193);
t = dce_if_then_0_0(sl, t);
if((t == NULL))
goto label20 ;
t = try_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto label20 ;
goto label16 ;
label20 :
t = trm19;
{
ATerm trm20 = t;
struct str_closure p_193 = { &(ElimIf_0_0) , sl };
StrCL lifted4_cl = &(p_193);
t = dce_if_then_else_0_0(sl, t);
if((t == NULL))
goto label21 ;
t = try_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto label21 ;
goto label16 ;
label21 :
t = trm20;
{
ATerm trm21 = t;
ATerm t_191 = NULL,u_191 = NULL,v_191 = NULL;
ATerm trm22;
trm22 = (ATerm) ATgetAnnotations(t);
if((trm22 == NULL))
trm22 = (ATerm) ATempty;
if(match_cons(t, sym_Block_1))
{
u_191 = ATgetArgument(t, 0);
}
else
goto label22 ;
t_191 = trm22;
t = u_191;
{
ATerm trm23 = t;
t = dce_stats_decl_0_0(sl, t);
if((t == NULL))
goto label24 ;
goto label23 ;
label24 :
t = trm23;
{
ATerm trm24 = t;
t = dce_stats_other_0_0(sl, t);
if((t == NULL))
goto label25 ;
goto label23 ;
label25 :
t = trm24;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label23 ;
else
goto label22 ;
}
label23 :
;
v_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Block_1, v_191), t_191);
}
goto label16 ;
label22 :
t = trm21;
{
ATerm trm25 = t;
ATerm x_191 = NULL,y_191 = NULL,z_191 = NULL,a_192 = NULL;
if(match_cons(t, sym_Break_1))
{
ATerm trm26 = ATgetArgument(t, 0);
if(!(match_cons(trm26, sym_None_0)))
goto label26 ;
}
else
goto label26 ;
y_191 = t;
t = term3;
x_191 = t;
t = y_191;
t = dr_break_bp_0_1(sl, x_191, t);
if((t == NULL))
goto label26 ;
a_192 = t;
t = term5;
z_191 = t;
t = a_192;
t = dr_break_bp_0_1(sl, z_191, t);
if((t == NULL))
goto label26 ;
goto label16 ;
label26 :
t = trm25;
{
ATerm trm27 = t;
t = dce_while_0_0(sl, t);
if((t == NULL))
goto label27 ;
goto label16 ;
label27 :
t = trm27;
t = dce_for_0_0(sl, t);
if((t == NULL))
goto fail3 ;
else
goto label16 ;
}
}
}
}
}
}
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_193 = { &(declare_var_needed_0_0) , sl_up(sl) };
StrCL lifted2_cl = &(j_193);
t = map_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm ElimIf_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ElimIf_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
ATerm u_10 = NULL;
if(match_cons(t, sym_IfElse_3))
{
u_10 = ATgetArgument(t, 0);
{
ATerm trm7 = ATgetArgument(t, 1);
if(!(((ATgetType(trm7) == AT_LIST) && ATisEmpty(trm7))))
goto label9 ;
}
{
ATerm trm8 = ATgetArgument(t, 2);
if(!(((ATgetType(trm8) == AT_LIST) && ATisEmpty(trm8))))
goto label9 ;
}
}
else
goto label9 ;
t = term1;
goto label8 ;
label9 :
t = trm6;
{
ATerm trm9 = t;
ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
if(match_cons(t, sym_IfElse_3))
{
r_10 = ATgetArgument(t, 0);
s_10 = ATgetArgument(t, 1);
{
ATerm trm10 = ATgetArgument(t, 2);
if(!(((ATgetType(trm10) == AT_LIST) && ATisEmpty(trm10))))
goto label10 ;
}
}
else
goto label10 ;
t_10 = t;
t = s_10;
{
ATerm trm11 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label12 ;
goto label10 ;
label12 :
t = trm11;
goto label11 ;
label11 :
;
t = t_10;
t = (ATerm) ATmakeAppl(sym_IfThen_2, r_10, s_10);
}
goto label8 ;
label10 :
t = trm9;
{
ATerm trm12 = t;
ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
if(match_cons(t, sym_IfElse_3))
{
o_10 = ATgetArgument(t, 0);
{
ATerm trm13 = ATgetArgument(t, 1);
if(!(((ATgetType(trm13) == AT_LIST) && ATisEmpty(trm13))))
goto label13 ;
}
p_10 = ATgetArgument(t, 2);
}
else
goto label13 ;
q_10 = t;
t = p_10;
{
ATerm trm14 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label15 ;
goto label13 ;
label15 :
t = trm14;
goto label14 ;
label14 :
;
t = q_10;
t = (ATerm) ATmakeAppl(sym_IfElse_3, o_10, term1, p_10);
}
goto label8 ;
label13 :
t = trm12;
{
ATerm n_10 = NULL;
if(match_cons(t, sym_IfThen_2))
{
n_10 = ATgetArgument(t, 0);
{
ATerm trm15 = ATgetArgument(t, 1);
if(!(((ATgetType(trm15) == AT_LIST) && ATisEmpty(trm15))))
goto fail2 ;
}
}
else
goto fail2 ;
t = term1;
goto label8 ;
}
}
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm ElimAssign_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ElimAssign_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
if(match_cons(t, sym_Assign_2))
{
l_10 = ATgetArgument(t, 0);
k_10 = ATgetArgument(t, 1);
}
else
goto fail1 ;
m_10 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, l_10);
{
ATerm trm5 = t;
t = VarNeeded_0_0(sl, t);
if((t == NULL))
goto label7 ;
goto fail1 ;
label7 :
t = trm5;
goto label6 ;
label6 :
;
t = m_10;
t = term1;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm ElimDecl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ElimDecl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm1 = ATgetFirst((ATermList) t);
if(match_cons(trm1, sym_Declaration_1))
{
i_10 = ATgetArgument(trm1, 0);
}
else
goto label1 ;
h_10 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label1 ;
j_10 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
{
ATerm trm2 = t;
t = VarUsed_0_0(sl, t);
if((t == NULL))
goto label3 ;
goto label1 ;
label3 :
t = trm2;
goto label2 ;
label2 :
;
t = j_10;
t = h_10;
}
goto label0 ;
label1 :
t = trm0;
{
ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm3 = ATgetFirst((ATermList) t);
if(match_cons(trm3, sym_DeclarationTyped_2))
{
f_10 = ATgetArgument(trm3, 0);
d_10 = ATgetArgument(trm3, 1);
}
else
goto fail0 ;
e_10 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail0 ;
g_10 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, f_10);
{
ATerm trm4 = t;
t = VarUsed_0_0(sl, t);
if((t == NULL))
goto label5 ;
goto fail0 ;
label5 :
t = trm4;
goto label4 ;
label4 :
;
t = g_10;
t = e_10;
goto label0 ;
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
static void register_strategies (void)
{
int initial_size = 117;
int max_load = 75;
struct str_closure * closures;
int closures_index = 0;
if((strategy_table == NULL))
strategy_table = ATtableCreate(initial_size, max_load);
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 127));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(Program_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Program_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(take_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("take_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(copy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(zip_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("zip_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_fix_and_union_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_fix_and_union_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_fork_and_union_2_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_fork_and_union_2_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_transaction_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_transaction_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_break_bp_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_break_bp_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(alltd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alltd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(geq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("geq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(subt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("subt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_length_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_length_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MemoTILParseTable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MemoTILParseTable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(VarNeeded_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("VarNeeded_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(VarUsed_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("VarUsed_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ProcCall_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ProcCall_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_break_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_break_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_fix_and_union_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_fix_and_union_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_union_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_union_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dead_code_elimination_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dead_code_elimination_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(custom_message_0_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("custom_message_0_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separation_message_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separation_message_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_dce_test_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_dce_test_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_for_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_for_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_while_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_while_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_if_then_else_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_if_then_else_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_if_then_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_if_then_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(declare_var_needed_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("declare_var_needed_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_assign_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_assign_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_stats_other_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_stats_other_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_stats_decl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_stats_decl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_stats_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_stats_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dce_stat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dce_stat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ElimIf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ElimIf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ElimAssign_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ElimAssign_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ElimDecl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ElimDecl_0_0", 0, ATtrue)), &(closures[closures_index]));
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
