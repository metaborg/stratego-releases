#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Tuple3_4;
static Symbol sym_Tuple3_3;
static Symbol sym_Tuple2_2;
static Symbol sym_Tuple1_4;
static Symbol sym_Tuple1_3;
static Symbol sym_Plus_2;
static Symbol sym_IntConst_1;
static Symbol sym_Assign_2;
static Symbol sym_Var_1;
static Symbol sym__4;
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static void init_module_constructors (void)
{
sym_Tuple3_4 = ATmakeSymbol("Tuple3", 4, ATfalse);
ATprotectSymbol(sym_Tuple3_4);
sym_Tuple3_3 = ATmakeSymbol("Tuple3", 3, ATfalse);
ATprotectSymbol(sym_Tuple3_3);
sym_Tuple2_2 = ATmakeSymbol("Tuple2", 2, ATfalse);
ATprotectSymbol(sym_Tuple2_2);
sym_Tuple1_4 = ATmakeSymbol("Tuple1", 4, ATfalse);
ATprotectSymbol(sym_Tuple1_4);
sym_Tuple1_3 = ATmakeSymbol("Tuple1", 3, ATfalse);
ATprotectSymbol(sym_Tuple1_3);
sym_Plus_2 = ATmakeSymbol("Plus", 2, ATfalse);
ATprotectSymbol(sym_Plus_2);
sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
ATprotectSymbol(sym_IntConst_1);
sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
ATprotectSymbol(sym_Assign_2);
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym__4 = ATmakeSymbol("", 4, ATfalse);
ATprotectSymbol(sym__4);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
}
static ATerm term217;
static ATerm term216;
static ATerm term215;
static ATerm term214;
static ATerm term213;
static ATerm term212;
static ATerm term211;
static ATerm term210;
static ATerm term209;
static ATerm term208;
static ATerm term207;
static ATerm term206;
static ATerm term205;
static ATerm term204;
static ATerm term203;
static ATerm term202;
static ATerm term201;
static ATerm term200;
static ATerm term199;
static ATerm term198;
static ATerm term197;
static ATerm term196;
static ATerm term195;
static ATerm term194;
static ATerm term193;
static ATerm term192;
static ATerm term191;
static ATerm term190;
static ATerm term189;
static ATerm term188;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("dfta-accept", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("SimpleInj.rtg", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("QuotedExp.rtg", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list g", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("foo", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Simple int list", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("int-list.rtg", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(3);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(2);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(1);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Empty list", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Conc list 1", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Conc list 2", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list a", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list b", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list c", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeInt(4);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list d", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list e", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Not an int-list f", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Incorrect plus expression 2", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_IntConst_1, term45);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_Var_1, term49);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_Plus_2, term47, term51);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Simple injection 1", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("Bla", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Simple injection 2", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Simple production ", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_IntConst_1, term17);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Simple plus expression 1", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_IntConst_1, term19);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_IntConst_1, term35);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_Plus_2, term67, term69);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Simple plus expression 2", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym_Plus_2, term67, term51);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Incorrect IntConst", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Incorrect Var", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_Var_1, term19);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Incorrect plus expression 1", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_Plus_2, term19, term51);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("Incorrect Tuple3", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeInt(5);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(sym_Tuple3_4, term21, term19, term17, term89);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Tuple1, not head or last", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleStuff.rtg", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym__2, term19, term17);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym_Tuple1_3, term21, term97, term35);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("test: Tuple2, head", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym__2, term21, term19);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym_Tuple2_2, term103, term17);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Incorrect Tuple1", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_Tuple1_3, term21, term19, term35);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym_Tuple1_4, term21, term19, term17, term35);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("Incorrect Tuple2", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_Tuple2_2, term21, term97);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple3, last", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym__2, term17, term35);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(sym_Tuple3_3, term21, term19, term119);
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym__3, term17, term35, term89);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(sym_Tuple3_3, term21, term19, term123);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeInt(6);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(sym__4, term17, term35, term89, term127);
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym_Tuple3_3, term21, term19, term129);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("List with element of illegal type", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("World", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("Hello", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("Empty list", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("StringStar.rtg", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("List with some elements", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("StringPlus.rtg", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("StringEven.rtg", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("Some no-string", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(sym_Some_1, term21);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("Some String", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("StringOpt.rtg", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("String", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(sym_Some_1, term157);
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("No String", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("Plain string", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("Just a string", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("Simple Var", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("non-deterministic.rtg", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(sym_Var_1, term169);
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("Simple Assign", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(sym_Var_1, term179);
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_Assign_2, term175, term181);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("Simple Plus", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(sym_Plus_2, term175, term181);
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("Simple PlusPlus", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("z", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(sym_Var_1, term191);
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(sym_Plus_2, term181, term193);
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(sym_Plus_2, term175, term195);
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(sym_Plus_2, term187, term193);
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("incorrect nested 3", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol("a(c(e()), b(d()), c(d()))", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(ATmakeSymbol("correct nested    ", 0, ATtrue));
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(ATmakeSymbol("nasty-nested.rtg", 0, ATtrue));
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(ATmakeSymbol("a(c(e()), b(foo()), c(d()))", 0, ATtrue));
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(ATmakeSymbol("incorrect nested 1", 0, ATtrue));
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(ATmakeSymbol("A(c(e()), b(foo()), c(d()))", 0, ATtrue));
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(ATmakeSymbol("incorrect nested 2", 0, ATtrue));
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(ATmakeSymbol("a(c(e()), c(foo()), c(d()))", 0, ATtrue));
ATprotect(&(term217));
term217 = term216;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm read_from_string_0_0 (StrSL sl, ATerm t);
ATerm general_options_0_0 (StrSL sl, ATerm t);
ATerm option_wrap_2_0 (StrSL sl, StrCL q_30, StrCL r_30, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL f_23, StrCL g_23, StrCL h_23, ATerm t);
ATerm apply_test_3_0 (StrSL sl, StrCL y_22, StrCL z_22, StrCL a_23, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL s_22, StrCL t_22, ATerm t);
ATerm dfta_destroy_0_0 (StrSL sl, ATerm t);
ATerm open_dfta_0_0 (StrSL sl, ATerm t);
ATerm dfta_format_check_0_1 (StrSL sl, ATerm p_5, ATerm t);
ATerm rtg2dfta_0_0 (StrSL sl, ATerm t);
ATerm parse_rtg_file_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm test_dfta_format_check_0_1 (StrSL sl, ATerm v_1, ATerm t);
ATerm nasty_nested_0_0 (StrSL sl, ATerm t);
ATerm nd_expr_0_0 (StrSL sl, ATerm t);
ATerm fc_int_list_0_0 (StrSL sl, ATerm t);
ATerm StringOpt_0_0 (StrSL sl, ATerm t);
ATerm StringEven_0_0 (StrSL sl, ATerm t);
ATerm StringPlus_0_0 (StrSL sl, ATerm t);
ATerm StringStar_0_0 (StrSL sl, ATerm t);
ATerm tuple_stuff_0_0 (StrSL sl, ATerm t);
static ATerm lifted164 (StrSL sl, ATerm t);
static ATerm lifted162 (StrSL sl, ATerm t);
static ATerm lifted161 (StrSL sl, ATerm t);
static ATerm lifted159 (StrSL sl, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
static ATerm lifted157 (StrSL sl, ATerm t);
static ATerm lifted156 (StrSL sl, ATerm t);
static ATerm lifted167 (StrSL sl, ATerm t);
static ATerm lifted165 (StrSL sl, ATerm t);
ATerm nested_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted152 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
static ATerm lifted149 (StrSL sl, ATerm t);
static ATerm lifted147 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted144 (StrSL sl, ATerm t);
static ATerm lifted143 (StrSL sl, ATerm t);
static ATerm lifted141 (StrSL sl, ATerm t);
static ATerm lifted140 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
static ATerm lifted155 (StrSL sl, ATerm t);
static ATerm lifted153 (StrSL sl, ATerm t);
ATerm non_deterministic_expression_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted134 (StrSL sl, ATerm t);
static ATerm lifted132 (StrSL sl, ATerm t);
static ATerm lifted131 (StrSL sl, ATerm t);
static ATerm lifted129 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted127 (StrSL sl, ATerm t);
static ATerm lifted126 (StrSL sl, ATerm t);
static ATerm lifted137 (StrSL sl, ATerm t);
static ATerm lifted135 (StrSL sl, ATerm t);
ATerm string_opt_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
ATerm string_even_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
ATerm string_plus_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
ATerm string_star_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
ATerm tuple_stuff_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm expression_tests_1_0 (StrSL sl, StrCL a_1, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
ATerm int_list_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm main_dfta_accept_tests_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_dfta_accept_tests_0_0(sl, t);
if((t == NULL))
goto fail146 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dfta_format_check_0_1 (StrSL sl, ATerm v_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dfta_format_check_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
x_1 = t;
t = v_1;
t = parse_rtg_file_0_0(sl, t);
if((t == NULL))
goto fail145 ;
t = rtg2dfta_0_0(sl, t);
if((t == NULL))
goto fail145 ;
t = open_dfta_0_0(sl, t);
if((t == NULL))
goto fail145 ;
w_1 = t;
t = x_1;
t = dfta_format_check_0_1(sl, w_1, t);
if((t == NULL))
goto fail145 ;
y_1 = t;
t = w_1;
t = dfta_destroy_0_0(sl, t);
if((t == NULL))
goto fail145 ;
t = y_1;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
ATerm nasty_nested_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "nasty_nested_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_1 = NULL,u_1 = NULL;
u_1 = t;
t = term207;
t_1 = t;
t = u_1;
t = test_dfta_format_check_0_1(sl, t_1, t);
if((t == NULL))
goto fail144 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
ATerm nd_expr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "nd_expr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_1 = NULL,s_1 = NULL;
s_1 = t;
t = term173;
r_1 = t;
t = s_1;
t = test_dfta_format_check_0_1(sl, r_1, t);
if((t == NULL))
goto fail143 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
ATerm fc_int_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fc_int_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_1 = NULL,q_1 = NULL;
q_1 = t;
t = term15;
p_1 = t;
t = q_1;
t = test_dfta_format_check_0_1(sl, p_1, t);
if((t == NULL))
goto fail142 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
ATerm StringOpt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "StringOpt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_1 = NULL,o_1 = NULL;
o_1 = t;
t = term155;
n_1 = t;
t = o_1;
t = test_dfta_format_check_0_1(sl, n_1, t);
if((t == NULL))
goto fail141 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
ATerm StringEven_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "StringEven_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_1 = NULL,m_1 = NULL;
m_1 = t;
t = term147;
l_1 = t;
t = m_1;
t = test_dfta_format_check_0_1(sl, l_1, t);
if((t == NULL))
goto fail140 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
ATerm StringPlus_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "StringPlus_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_1 = NULL,k_1 = NULL;
k_1 = t;
t = term145;
j_1 = t;
t = k_1;
t = test_dfta_format_check_0_1(sl, j_1, t);
if((t == NULL))
goto fail139 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
ATerm StringStar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "StringStar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_1 = NULL,i_1 = NULL;
i_1 = t;
t = term141;
h_1 = t;
t = i_1;
t = test_dfta_format_check_0_1(sl, h_1, t);
if((t == NULL))
goto fail138 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
ATerm tuple_stuff_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tuple_stuff_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_1 = NULL,e_1 = NULL;
e_1 = t;
t = term95;
d_1 = t;
t = e_1;
t = test_dfta_format_check_0_1(sl, d_1, t);
if((t == NULL))
goto fail137 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
ATerm nested_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "nested_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_111 = { &(lifted165) , &(frame) };
StrCL lifted165_cl = &(s_111);
struct str_closure w_111 = { &(nasty_nested_0_0) , sl };
StrCL lifted166_cl = &(w_111);
struct str_closure x_111 = { &(lifted167) , &(frame) };
StrCL lifted167_cl = &(x_111);
struct str_closure z_111 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(z_111);
struct str_closure b_112 = { &(lifted157) , &(frame) };
StrCL lifted157_cl = &(b_112);
struct str_closure d_112 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(d_112);
t = apply_test_3_0(sl, lifted156_cl, lifted157_cl, lifted158_cl, t);
if((t == NULL))
goto fail127 ;
{
struct str_closure e_112 = { &(lifted159) , &(frame) };
StrCL lifted159_cl = &(e_112);
struct str_closure f_112 = { &(nasty_nested_0_0) , sl };
StrCL lifted160_cl = &(f_112);
struct str_closure g_112 = { &(lifted161) , &(frame) };
StrCL lifted161_cl = &(g_112);
t = apply_and_fail_3_0(sl, lifted159_cl, lifted160_cl, lifted161_cl, t);
if((t == NULL))
goto fail127 ;
{
struct str_closure h_112 = { &(lifted162) , &(frame) };
StrCL lifted162_cl = &(h_112);
struct str_closure i_112 = { &(nasty_nested_0_0) , sl };
StrCL lifted163_cl = &(i_112);
struct str_closure j_112 = { &(lifted164) , &(frame) };
StrCL lifted164_cl = &(j_112);
t = apply_and_fail_3_0(sl, lifted162_cl, lifted163_cl, lifted164_cl, t);
if((t == NULL))
goto fail127 ;
t = apply_and_fail_3_0(sl, lifted165_cl, lifted166_cl, lifted167_cl, t);
if((t == NULL))
goto fail127 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted164 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted164";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term217;
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail136 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted162 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted162";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term215;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted161 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted161";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term213;
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail134 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted159 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted159";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term211;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term209;
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail132 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted157 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted157";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_104 = NULL,y_104 = NULL;
y_104 = t;
t = term207;
x_104 = t;
t = y_104;
t = test_dfta_format_check_0_1(sl_up(sl), x_104, t);
if((t == NULL))
goto fail131 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term205;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted167 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted167";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term203;
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail129 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted165 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted165";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term201;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
ATerm non_deterministic_expression_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "non_deterministic_expression_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_110 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(v_110);
struct str_closure w_110 = { &(nd_expr_0_0) , sl };
StrCL lifted154_cl = &(w_110);
struct str_closure x_110 = { &(lifted155) , &(frame) };
StrCL lifted155_cl = &(x_110);
struct str_closure y_110 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(y_110);
struct str_closure z_110 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(z_110);
struct str_closure a_111 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(a_111);
t = apply_test_3_0(sl, lifted138_cl, lifted139_cl, lifted140_cl, t);
if((t == NULL))
goto fail113 ;
{
struct str_closure b_111 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(b_111);
struct str_closure e_111 = { &(nd_expr_0_0) , sl };
StrCL lifted142_cl = &(e_111);
struct str_closure f_111 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(f_111);
t = apply_test_3_0(sl, lifted141_cl, lifted142_cl, lifted143_cl, t);
if((t == NULL))
goto fail113 ;
{
struct str_closure h_111 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(h_111);
struct str_closure i_111 = { &(nd_expr_0_0) , sl };
StrCL lifted145_cl = &(i_111);
struct str_closure j_111 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(j_111);
t = apply_test_3_0(sl, lifted144_cl, lifted145_cl, lifted146_cl, t);
if((t == NULL))
goto fail113 ;
{
struct str_closure k_111 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(k_111);
struct str_closure l_111 = { &(nd_expr_0_0) , sl };
StrCL lifted148_cl = &(l_111);
struct str_closure m_111 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(m_111);
t = apply_test_3_0(sl, lifted147_cl, lifted148_cl, lifted149_cl, t);
if((t == NULL))
goto fail113 ;
{
struct str_closure p_111 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(p_111);
struct str_closure q_111 = { &(nd_expr_0_0) , sl };
StrCL lifted151_cl = &(q_111);
struct str_closure r_111 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(r_111);
t = apply_test_3_0(sl, lifted150_cl, lifted151_cl, lifted152_cl, t);
if((t == NULL))
goto fail113 ;
t = apply_and_fail_3_0(sl, lifted153_cl, lifted154_cl, lifted155_cl, t);
if((t == NULL))
goto fail113 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term199;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term197;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term187;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term185;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term183;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term177;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_104 = NULL,w_104 = NULL;
w_104 = t;
t = term173;
v_104 = t;
t = w_104;
t = test_dfta_format_check_0_1(sl_up(sl), v_104, t);
if((t == NULL))
goto fail117 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term171;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted155 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted155";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term169;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term167;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_opt_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_opt_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_110 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(j_110);
struct str_closure k_110 = { &(StringOpt_0_0) , sl };
StrCL lifted136_cl = &(k_110);
struct str_closure l_110 = { &(lifted137) , &(frame) };
StrCL lifted137_cl = &(l_110);
struct str_closure m_110 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(m_110);
struct str_closure n_110 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(n_110);
struct str_closure o_110 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(o_110);
t = apply_test_3_0(sl, lifted126_cl, lifted127_cl, lifted128_cl, t);
if((t == NULL))
goto fail103 ;
{
struct str_closure p_110 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(p_110);
struct str_closure q_110 = { &(StringOpt_0_0) , sl };
StrCL lifted130_cl = &(q_110);
struct str_closure r_110 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(r_110);
t = apply_test_3_0(sl, lifted129_cl, lifted130_cl, lifted131_cl, t);
if((t == NULL))
goto fail103 ;
{
struct str_closure s_110 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(s_110);
struct str_closure t_110 = { &(StringOpt_0_0) , sl };
StrCL lifted133_cl = &(t_110);
struct str_closure u_110 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(u_110);
t = apply_and_fail_3_0(sl, lifted132_cl, lifted133_cl, lifted134_cl, t);
if((t == NULL))
goto fail103 ;
t = apply_and_fail_3_0(sl, lifted135_cl, lifted136_cl, lifted137_cl, t);
if((t == NULL))
goto fail103 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term165;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term163;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term161;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term159;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_104 = NULL,u_104 = NULL;
u_104 = t;
t = term155;
t_104 = t;
t = u_104;
t = test_dfta_format_check_0_1(sl_up(sl), t_104, t);
if((t == NULL))
goto fail107 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term153;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted137 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted137";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term151;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_even_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_even_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_109 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(s_109);
struct str_closure u_109 = { &(StringEven_0_0) , sl };
StrCL lifted124_cl = &(u_109);
struct str_closure v_109 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(v_109);
struct str_closure w_109 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(w_109);
struct str_closure x_109 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(x_109);
struct str_closure y_109 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(y_109);
t = apply_test_3_0(sl, lifted111_cl, lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto fail91 ;
{
struct str_closure z_109 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(z_109);
struct str_closure a_110 = { &(StringEven_0_0) , sl };
StrCL lifted115_cl = &(a_110);
struct str_closure c_110 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(c_110);
t = apply_and_fail_3_0(sl, lifted114_cl, lifted115_cl, lifted116_cl, t);
if((t == NULL))
goto fail91 ;
{
struct str_closure d_110 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(d_110);
struct str_closure e_110 = { &(StringEven_0_0) , sl };
StrCL lifted118_cl = &(e_110);
struct str_closure f_110 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(f_110);
t = apply_test_3_0(sl, lifted117_cl, lifted118_cl, lifted119_cl, t);
if((t == NULL))
goto fail91 ;
{
struct str_closure g_110 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(g_110);
struct str_closure h_110 = { &(StringEven_0_0) , sl };
StrCL lifted121_cl = &(h_110);
struct str_closure i_110 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(i_110);
t = apply_and_fail_3_0(sl, lifted120_cl, lifted121_cl, lifted122_cl, t);
if((t == NULL))
goto fail91 ;
t = apply_and_fail_3_0(sl, lifted123_cl, lifted124_cl, lifted125_cl, t);
if((t == NULL))
goto fail91 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term21);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term135), term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term143;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term143;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_104 = NULL,s_104 = NULL;
s_104 = t;
t = term147;
r_104 = t;
t = s_104;
t = test_dfta_format_check_0_1(sl_up(sl), r_104, t);
if((t == NULL))
goto fail95 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term135), term21), term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_plus_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_plus_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_109 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(d_109);
struct str_closure e_109 = { &(StringPlus_0_0) , sl };
StrCL lifted109_cl = &(e_109);
struct str_closure f_109 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(f_109);
struct str_closure g_109 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(g_109);
struct str_closure h_109 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(h_109);
struct str_closure i_109 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(i_109);
t = apply_and_fail_3_0(sl, lifted96_cl, lifted97_cl, lifted98_cl, t);
if((t == NULL))
goto fail79 ;
{
struct str_closure j_109 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(j_109);
struct str_closure k_109 = { &(StringPlus_0_0) , sl };
StrCL lifted100_cl = &(k_109);
struct str_closure l_109 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(l_109);
t = apply_test_3_0(sl, lifted99_cl, lifted100_cl, lifted101_cl, t);
if((t == NULL))
goto fail79 ;
{
struct str_closure m_109 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(m_109);
struct str_closure n_109 = { &(StringPlus_0_0) , sl };
StrCL lifted103_cl = &(n_109);
struct str_closure o_109 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(o_109);
t = apply_test_3_0(sl, lifted102_cl, lifted103_cl, lifted104_cl, t);
if((t == NULL))
goto fail79 ;
{
struct str_closure p_109 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(p_109);
struct str_closure q_109 = { &(StringPlus_0_0) , sl };
StrCL lifted106_cl = &(q_109);
struct str_closure r_109 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(r_109);
t = apply_and_fail_3_0(sl, lifted105_cl, lifted106_cl, lifted107_cl, t);
if((t == NULL))
goto fail79 ;
t = apply_and_fail_3_0(sl, lifted108_cl, lifted109_cl, lifted110_cl, t);
if((t == NULL))
goto fail79 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term21);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term135), term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term143;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term143;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_104 = NULL,q_104 = NULL;
q_104 = t;
t = term145;
p_104 = t;
t = q_104;
t = test_dfta_format_check_0_1(sl_up(sl), p_104, t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term135), term21), term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_star_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_star_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_108 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(r_108);
struct str_closure s_108 = { &(StringStar_0_0) , sl };
StrCL lifted94_cl = &(s_108);
struct str_closure t_108 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(t_108);
struct str_closure u_108 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(u_108);
struct str_closure v_108 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(v_108);
struct str_closure w_108 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(w_108);
t = apply_test_3_0(sl, lifted84_cl, lifted85_cl, lifted86_cl, t);
if((t == NULL))
goto fail69 ;
{
struct str_closure x_108 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(x_108);
struct str_closure y_108 = { &(StringStar_0_0) , sl };
StrCL lifted88_cl = &(y_108);
struct str_closure z_108 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(z_108);
t = apply_test_3_0(sl, lifted87_cl, lifted88_cl, lifted89_cl, t);
if((t == NULL))
goto fail69 ;
{
struct str_closure a_109 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(a_109);
struct str_closure b_109 = { &(StringStar_0_0) , sl };
StrCL lifted91_cl = &(b_109);
struct str_closure c_109 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(c_109);
t = apply_and_fail_3_0(sl, lifted90_cl, lifted91_cl, lifted92_cl, t);
if((t == NULL))
goto fail69 ;
t = apply_and_fail_3_0(sl, lifted93_cl, lifted94_cl, lifted95_cl, t);
if((t == NULL))
goto fail69 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term21);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term135), term137);
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
t = term143;
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
t = (ATerm) ATempty;
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
{
ATerm n_104 = NULL,o_104 = NULL;
o_104 = t;
t = term141;
n_104 = t;
t = o_104;
t = test_dfta_format_check_0_1(sl_up(sl), n_104, t);
if((t == NULL))
goto fail73 ;
}
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
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term135), term21), term137);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm tuple_stuff_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tuple_stuff_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_107 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(h_107);
struct str_closure n_107 = { &(tuple_stuff_0_0) , sl };
StrCL lifted82_cl = &(n_107);
struct str_closure p_107 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(p_107);
struct str_closure q_107 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(q_107);
struct str_closure r_107 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(r_107);
struct str_closure s_107 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(s_107);
t = apply_test_3_0(sl, lifted57_cl, lifted58_cl, lifted59_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure t_107 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(t_107);
struct str_closure u_107 = { &(tuple_stuff_0_0) , sl };
StrCL lifted61_cl = &(u_107);
struct str_closure v_107 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(v_107);
t = apply_test_3_0(sl, lifted60_cl, lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure w_107 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(w_107);
struct str_closure x_107 = { &(tuple_stuff_0_0) , sl };
StrCL lifted64_cl = &(x_107);
struct str_closure y_107 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(y_107);
t = apply_and_fail_3_0(sl, lifted63_cl, lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure b_108 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(b_108);
struct str_closure c_108 = { &(tuple_stuff_0_0) , sl };
StrCL lifted67_cl = &(c_108);
struct str_closure d_108 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(d_108);
t = apply_and_fail_3_0(sl, lifted66_cl, lifted67_cl, lifted68_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure e_108 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(e_108);
struct str_closure f_108 = { &(tuple_stuff_0_0) , sl };
StrCL lifted70_cl = &(f_108);
struct str_closure g_108 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(g_108);
t = apply_and_fail_3_0(sl, lifted69_cl, lifted70_cl, lifted71_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure h_108 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(h_108);
struct str_closure i_108 = { &(tuple_stuff_0_0) , sl };
StrCL lifted73_cl = &(i_108);
struct str_closure j_108 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(j_108);
t = apply_test_3_0(sl, lifted72_cl, lifted73_cl, lifted74_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure k_108 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(k_108);
struct str_closure l_108 = { &(tuple_stuff_0_0) , sl };
StrCL lifted76_cl = &(l_108);
struct str_closure m_108 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(m_108);
t = apply_test_3_0(sl, lifted75_cl, lifted76_cl, lifted77_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure n_108 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(n_108);
struct str_closure o_108 = { &(tuple_stuff_0_0) , sl };
StrCL lifted79_cl = &(o_108);
struct str_closure p_108 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(p_108);
t = apply_and_fail_3_0(sl, lifted78_cl, lifted79_cl, lifted80_cl, t);
if((t == NULL))
goto fail49 ;
t = apply_and_fail_3_0(sl, lifted81_cl, lifted82_cl, lifted83_cl, t);
if((t == NULL))
goto fail49 ;
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
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term125;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term111;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term105;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_104 = NULL,m_104 = NULL;
m_104 = t;
t = term95;
l_104 = t;
t = m_104;
t = test_dfta_format_check_0_1(sl_up(sl), l_104, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm expression_tests_1_0 (StrSL sl, StrCL a_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "expression_tests_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_106 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(p_106);
struct str_closure q_106 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(q_106);
struct str_closure r_106 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(r_106);
struct str_closure s_106 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(s_106);
t = apply_test_3_0(sl, lifted39_cl, a_1, lifted40_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure t_106 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(t_106);
struct str_closure u_106 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(u_106);
t = apply_test_3_0(sl, lifted41_cl, a_1, lifted42_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure v_106 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(v_106);
struct str_closure w_106 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(w_106);
t = apply_test_3_0(sl, lifted43_cl, a_1, lifted44_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure x_106 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(x_106);
struct str_closure y_106 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(y_106);
t = apply_test_3_0(sl, lifted45_cl, a_1, lifted46_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure z_106 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(z_106);
struct str_closure a_107 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(a_107);
t = apply_test_3_0(sl, lifted47_cl, a_1, lifted48_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure b_107 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(b_107);
struct str_closure c_107 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(c_107);
t = apply_and_fail_3_0(sl, lifted49_cl, a_1, lifted50_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure d_107 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(d_107);
struct str_closure e_107 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(e_107);
t = apply_and_fail_3_0(sl, lifted51_cl, a_1, lifted52_cl, t);
if((t == NULL))
goto fail30 ;
{
struct str_closure f_107 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(f_107);
struct str_closure g_107 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(g_107);
t = apply_and_fail_3_0(sl, lifted53_cl, a_1, lifted54_cl, t);
if((t == NULL))
goto fail30 ;
t = apply_and_fail_3_0(sl, lifted55_cl, a_1, lifted56_cl, t);
if((t == NULL))
goto fail30 ;
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
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
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
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm int_list_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "int_list_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_105 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(f_105);
struct str_closure g_105 = { &(fc_int_list_0_0) , sl };
StrCL lifted37_cl = &(g_105);
struct str_closure h_105 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(h_105);
struct str_closure i_105 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(i_105);
struct str_closure j_105 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(j_105);
struct str_closure k_105 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(k_105);
t = apply_test_3_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure l_105 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(l_105);
struct str_closure m_105 = { &(fc_int_list_0_0) , sl };
StrCL lifted10_cl = &(m_105);
struct str_closure n_105 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(n_105);
t = apply_test_3_0(sl, lifted9_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure o_105 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(o_105);
struct str_closure p_105 = { &(fc_int_list_0_0) , sl };
StrCL lifted13_cl = &(p_105);
struct str_closure q_105 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(q_105);
t = apply_test_3_0(sl, lifted12_cl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure r_105 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(r_105);
struct str_closure s_105 = { &(fc_int_list_0_0) , sl };
StrCL lifted16_cl = &(s_105);
struct str_closure t_105 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(t_105);
t = apply_test_3_0(sl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure u_105 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(u_105);
struct str_closure v_105 = { &(fc_int_list_0_0) , sl };
StrCL lifted19_cl = &(v_105);
struct str_closure x_105 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(x_105);
t = apply_and_fail_3_0(sl, lifted18_cl, lifted19_cl, lifted20_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure y_105 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(y_105);
struct str_closure z_105 = { &(fc_int_list_0_0) , sl };
StrCL lifted22_cl = &(z_105);
struct str_closure a_106 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(a_106);
t = apply_and_fail_3_0(sl, lifted21_cl, lifted22_cl, lifted23_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure d_106 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(d_106);
struct str_closure e_106 = { &(fc_int_list_0_0) , sl };
StrCL lifted25_cl = &(e_106);
struct str_closure f_106 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(f_106);
t = apply_and_fail_3_0(sl, lifted24_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure g_106 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(g_106);
struct str_closure h_106 = { &(fc_int_list_0_0) , sl };
StrCL lifted28_cl = &(h_106);
struct str_closure i_106 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(i_106);
t = apply_and_fail_3_0(sl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure j_106 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(j_106);
struct str_closure k_106 = { &(fc_int_list_0_0) , sl };
StrCL lifted31_cl = &(k_106);
struct str_closure l_106 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(l_106);
t = apply_and_fail_3_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure m_106 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(m_106);
struct str_closure n_106 = { &(fc_int_list_0_0) , sl };
StrCL lifted34_cl = &(n_106);
struct str_closure o_106 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(o_106);
t = apply_and_fail_3_0(sl, lifted33_cl, lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto fail6 ;
t = apply_and_fail_3_0(sl, lifted36_cl, lifted37_cl, lifted38_cl, t);
if((t == NULL))
goto fail6 ;
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
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3;
trm3 = SSL_mkterm(term9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), term11));
if((trm3 == NULL))
goto fail29 ;
t = trm3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term35), term17), term11);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term11), term19), term21);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term11);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2;
trm2 = SSL_mkterm(term9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term19)), (ATerm) ATinsert(ATempty, term21)));
if((trm2 == NULL))
goto fail17 ;
t = trm2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1;
trm1 = SSL_mkterm(term9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATempty));
if((trm1 == NULL))
goto fail15 ;
t = trm1;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term17), term19), term21);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_104 = NULL,k_104 = NULL;
k_104 = t;
t = term15;
j_104 = t;
t = k_104;
t = test_dfta_format_check_0_1(sl_up(sl), j_104, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0;
trm0 = SSL_mkterm(term9, (ATerm) ATinsert(ATinsert(ATempty, term11), (ATerm) ATempty));
if((trm0 == NULL))
goto fail8 ;
t = trm0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_dfta_accept_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_dfta_accept_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_105 = { &(general_options_0_0) , sl };
StrCL lifted0_cl = &(d_105);
struct str_closure e_105 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(e_105);
t = option_wrap_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_105 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(b_105);
struct str_closure c_105 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(c_105);
t = test_suite_2_0(sl_up(sl), lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = int_list_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
{
struct str_closure z_104 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(z_104);
t = expression_tests_1_0(sl_up(sl_up(sl)), lifted4_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure a_105 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(a_105);
t = expression_tests_1_0(sl_up(sl_up(sl)), lifted5_cl, t);
if((t == NULL))
goto fail3 ;
t = string_star_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = string_plus_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = string_even_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = string_opt_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = tuple_stuff_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = non_deterministic_expression_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = nested_tests_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_104 = NULL,i_104 = NULL;
i_104 = t;
t = term5;
h_104 = t;
t = i_104;
t = test_dfta_format_check_0_1(sl_up(sl_up(sl_up(sl))), h_104, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_104 = NULL,g_104 = NULL;
g_104 = t;
t = term3;
f_104 = t;
t = g_104;
t = test_dfta_format_check_0_1(sl_up(sl_up(sl_up(sl))), f_104, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 158));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(read_from_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(general_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("general_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(option_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("option_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_fail_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_fail_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dfta_destroy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dfta_destroy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_dfta_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_dfta_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dfta_format_check_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dfta_format_check_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg2dfta_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg2dfta_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_rtg_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_rtg_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dfta_format_check_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dfta_format_check_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(nasty_nested_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("nasty_nested_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(nd_expr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("nd_expr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fc_int_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fc_int_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(StringOpt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("StringOpt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(StringEven_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("StringEven_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(StringPlus_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("StringPlus_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(StringStar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("StringStar_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tuple_stuff_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tuple_stuff_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted164);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted164", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted162);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted162", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted161);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted161", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted159);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted159", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted158);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted158", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted157);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted157", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted156);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted156", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted167);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted167", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted165);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted165", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(nested_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("nested_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted152);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted152", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted150);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted150", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted149);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted149", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted147);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted147", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted146);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted146", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted144);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted144", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted143);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted143", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted141);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted141", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted140);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted140", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted139);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted139", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted138);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted138", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted155);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted155", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted153);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted153", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(non_deterministic_expression_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("non_deterministic_expression_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted134);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted134", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted132);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted132", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted131);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted131", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted129);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted129", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted128);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted128", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted127);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted127", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted126);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted126", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted137);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted137", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted135);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted135", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_opt_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_opt_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted122);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted122", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted120);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted120", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted119);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted119", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted117);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted117", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted116);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted116", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted114);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted114", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted113);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted113", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted112);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted112", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted111);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted111", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted125);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted125", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted123);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted123", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_even_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_even_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted101);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted101", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted97);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted97", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted110);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted110", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_plus_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_plus_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_star_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_star_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tuple_stuff_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tuple_stuff_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(expression_tests_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("expression_tests_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_list_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_list_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_dfta_accept_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_dfta_accept_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
