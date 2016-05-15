#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_stderr_0;
static Symbol sym_IncludeFromPath_1;
static Symbol sym_IncludePathName_1;
static Symbol sym_IncludeXTC_0;
static Symbol sym_IncludeDir_1;
static Symbol sym_IncludeDef_2;
static Symbol sym_IncludeDef_1;
static Symbol sym_FILE_1;
static Symbol sym_ConcLayout_1;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_opt_1;
static Symbol sym_sort_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_layout_0;
static Symbol sym_char_class_1;
static Symbol sym_range_2;
static Symbol sym_left_0;
static Symbol sym_cons_1;
static Symbol sym_assoc_1;
static Symbol sym_term_1;
static Symbol sym_prefer_0;
static Symbol sym_no_attrs_0;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_appl_2;
static Symbol sym_lit_1;
static Symbol sym_parsetree_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_flatlex_2;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
ATprotectSymbol(sym_stderr_0);
sym_IncludeFromPath_1 = ATmakeSymbol("IncludeFromPath", 1, ATfalse);
ATprotectSymbol(sym_IncludeFromPath_1);
sym_IncludePathName_1 = ATmakeSymbol("IncludePathName", 1, ATfalse);
ATprotectSymbol(sym_IncludePathName_1);
sym_IncludeXTC_0 = ATmakeSymbol("IncludeXTC", 0, ATfalse);
ATprotectSymbol(sym_IncludeXTC_0);
sym_IncludeDir_1 = ATmakeSymbol("IncludeDir", 1, ATfalse);
ATprotectSymbol(sym_IncludeDir_1);
sym_IncludeDef_2 = ATmakeSymbol("IncludeDef", 2, ATfalse);
ATprotectSymbol(sym_IncludeDef_2);
sym_IncludeDef_1 = ATmakeSymbol("IncludeDef", 1, ATfalse);
ATprotectSymbol(sym_IncludeDef_1);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_ConcLayout_1 = ATmakeSymbol("ConcLayout", 1, ATfalse);
ATprotectSymbol(sym_ConcLayout_1);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
ATprotectSymbol(sym_range_2);
sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
ATprotectSymbol(sym_left_0);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
ATprotectSymbol(sym_assoc_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_prefer_0 = ATmakeSymbol("prefer", 0, ATfalse);
ATprotectSymbol(sym_prefer_0);
sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
ATprotectSymbol(sym_no_attrs_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
ATprotectSymbol(sym_parsetree_2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
ATprotectSymbol(sym_flatlex_2);
}
static ATerm term229;
static ATerm term228;
static ATerm term227;
static ATerm term226;
static ATerm term225;
static ATerm term224;
static ATerm term223;
static ATerm term222;
static ATerm term221;
static ATerm term220;
static ATerm term219;
static ATerm term218;
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
term0 = (ATerm) ATmakeAppl(sym_layout_0);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_cf_1, term1);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_opt_1, term1);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_cf_1, term5);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_no_attrs_0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_left_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_assoc_1, term11);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-format", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("txt", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol(", ", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol(" is not a valid output format. Supported formats: ", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: ", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("-of f            Use output format f (", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("-Idef <lang.def>     Include modules from SDF definition <lang.def>", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_IncludeXTC_0);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym_IncludeDir_1, term53);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf:   - ", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol(" provides the modules ", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: SDF Syntax Definition ", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("-I|--Include <dir>   Include modules from directory <dir>", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: warning: directory specified with -I does not exist: ", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: warning: path specified with -I is a file, not a directory: ", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep <file>         Write make dependencies to <file>", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol(" is not a valid output format.", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeInt(1);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_stderr_0);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: error: module ", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown location", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("\n      in file ", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("    imported from module ", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("at unknown location", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("\n        in file ", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("      module ", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("    imported from:", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeInt(47);
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeInt(46);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("  including ", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol(" does not exist\n", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: error: file ", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdf", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol(" from XTC repository", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol(" from ", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(sym_sort_1, term135);
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(sym_cf_1, term137);
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("<START>", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(sym_sort_1, term141);
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(sym_lex_1, term1);
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeInt(32);
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeInt(13);
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeInt(9);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeInt(10);
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(sym_range_2, term151, term153);
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(sym_prefer_0);
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("SourcePathName", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("a7731f56306e009889d0d7a9e3e86682", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol(" cannot be parsed\n", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: Error: module ", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("' does not correspond to filename.\n", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("' in file '", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf: error: module name '", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("ImportedFrom", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("a0556ea9a635e4d242f4302f1131968b", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("a -------------------- ", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term7, term9);
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(sym_appl_2, term179, (ATerm) ATempty);
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_iter_star_1, term137);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(sym_cf_1, term183);
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term185, term9);
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(sym_appl_2, term187, (ATerm) ATempty);
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(sym__3, term181, term189, term181);
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(sym_iter_1, term137);
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(sym_cf_1, term193);
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(sym_sort_1, term59);
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(sym_cf_1, term197);
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(sym_sort_1, term201);
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(sym_cf_1, term203);
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(sym_lit_1, term207);
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(sym_cons_1, term207);
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(sym_term_1, term211);
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeInt(110);
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeInt(111);
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeInt(105);
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeInt(116);
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeInt(102);
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeInt(101);
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeInt(100);
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeInt(0);
ATprotect(&(term229));
term229 = term228;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL u_98, StrCL v_98, ATerm t);
ATerm separate_by_0_1 (StrSL sl, ATerm a_90, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL w_88, ATerm t);
ATerm elem_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL j_88, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL h_87, ATerm t);
ATerm unzip_0_0 (StrSL sl, ATerm t);
ATerm Snd_0_0 (StrSL sl, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm dr_add_rule_0_3 (StrSL sl, ATerm w_69, ATerm x_69, ATerm y_69, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm s_68, ATerm t_68, ATerm u_68, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm g_68, ATerm h_68, ATerm t);
ATerm collect_2_0 (StrSL sl, StrCL t_64, StrCL u_64, ATerm t);
ATerm collect_om_1_0 (StrSL sl, StrCL a_64, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL y_62, ATerm t);
ATerm eq_0_0 (StrSL sl, ATerm t);
ATerm graph_nodes_undef_3_0 (StrSL sl, StrCL g_58, StrCL h_58, StrCL i_58, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL x_56, ATerm t);
ATerm remove_extension_0_0 (StrSL sl, ATerm t);
ATerm guarantee_extension_0_1 (StrSL sl, ATerm a_53, ATerm t);
ATerm base_filename_0_0 (StrSL sl, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm fatal_error_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL r_52, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL n_52, ATerm t);
ATerm fprintnl_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm extend_config_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL q_44, StrCL r_44, StrCL s_44, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL n_43, ATerm t);
ATerm if_verbose2_1_0 (StrSL sl, StrCL m_43, ATerm t);
ATerm if_verbose1_1_0 (StrSL sl, StrCL l_43, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm isdir_0_0 (StrSL sl, ATerm t);
ATerm filemode_0_0 (StrSL sl, ATerm t);
ATerm file_exists_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL x_37, StrCL y_37, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL s_37, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_loc_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL x_36, StrCL y_36, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
ATerm bagof_ImportedFrom_0_0 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
ATerm SourcePathName_0_0 (StrSL sl, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL a_22, StrCL b_22, StrCL c_22, ATerm t);
ATerm appl_2_0 (StrSL sl, StrCL y_21, StrCL z_21, ATerm t);
ATerm parsetree_2_0 (StrSL sl, StrCL t_21, StrCL u_21, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
ATerm concat_modules_0_0 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm b_21 (StrSL sl, ATerm t);
ATerm ConcatModules_0_0 (StrSL sl, ATerm t);
ATerm module_to_module_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm get_module_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
ATerm skip_non_imports_2_0 (StrSL sl, StrCL j_20, StrCL k_20, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
ATerm get_sdf_imports_0_0 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm y_19 (StrSL sl, ATerm t);
ATerm asfix_lex_yield_0_0 (StrSL sl, ATerm t);
static ATerm x_19 (StrSL sl, ATerm t);
static ATerm w_19 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm get_module_name_from_asfix_0_0 (StrSL sl, ATerm t);
ATerm check_module_name_1_1 (StrSL sl, StrCL o_19, ATerm j_19, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
ATerm parse_sdf2_module_to_asfix_1_0 (StrSL sl, StrCL h_19, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
ATerm parse_sdf2_module_to_asfix_0_1 (StrSL sl, ATerm b_19, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm parse_sdf2_module_to_asfix_0_0 (StrSL sl, ATerm t);
ATerm get_source_pathname_0_0 (StrSL sl, ATerm t);
ATerm register_source_pathname_0_1 (StrSL sl, ATerm r_18, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
ATerm include_from_def_0_1 (StrSL sl, ATerm k_18, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
ATerm include_from_xtc_0_1 (StrSL sl, ATerm g_18, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
ATerm include_from_dir_0_1 (StrSL sl, ATerm b_18, ATerm t);
ATerm include_pathname_0_0 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
ATerm pack_sdf_parse_sdf_0_0 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
ATerm report_module_not_found_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm pack_sdf_0_1 (StrSL sl, ATerm k_16, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm main_pack_sdf_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm create_dep_file_0_0 (StrSL sl, ATerm t);
ATerm depfile_from_config_0_0 (StrSL sl, ATerm t);
ATerm include_path_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm dep_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm ensure_directory_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm include_from_dir_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm process_Idef_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm process_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm include_from_def_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm OutputFormatOption_0_1 (StrSL sl, ATerm i_13, ATerm t);
ATerm of_option_0_0 (StrSL sl, ATerm t);
ATerm of_config_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm xtc_sglr_2_0 (StrSL sl, StrCL i_11, StrCL k_11, ATerm t);
static ATerm a_10 (StrSL sl, ATerm t);
ATerm foldr1a_1_0 (StrSL sl, StrCL z_9, ATerm t);
ATerm conc_layout3_0_0 (StrSL sl, ATerm t);
ATerm conc_layout2_0_0 (StrSL sl, ATerm t);
ATerm conc_layout1_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm n_8 (StrSL sl, ATerm t);
ATerm yield_0_0 (StrSL sl, ATerm t);
ATerm bagof_ImportedFrom_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_ImportedFrom_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
sl_init_var(0, f_36);
sl_init_var(1, g_36);
{
struct str_closure e_137 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(e_137);
if((g_36 == NULL))
{
g_36 = t;
}
else
if((g_36 != t))
goto fail116 ;
if((f_36 == NULL))
{
f_36 = t;
}
else
if((f_36 != t))
goto fail116 ;
i_36 = t;
{
ATerm trm211 = t;
ATerm j_36 = NULL,k_36 = NULL;
k_36 = t;
t = term173;
j_36 = t;
t = k_36;
if((g_36 == NULL))
goto label89 ;
else
{
t = dr_lookup_rule_0_2(sl, j_36, g_36, t);
if((t == NULL))
goto label89 ;
}
goto label88 ;
label89 :
t = trm211;
t = (ATerm) ATempty;
goto label88 ;
label88 :
;
h_36 = t;
t = i_36;
t = h_36;
t = filter_1_0(sl, lifted78_cl, t);
if((t == NULL))
goto fail116 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_132 = NULL,m_132 = NULL,s_132 = NULL,t_132 = NULL,o_132 = NULL,q_132 = NULL;
s_132 = t;
if((sl_readvar(0, sl) == NULL))
goto fail117 ;
else
{
t = sl_readvar(0, sl);
}
k_132 = t;
t = s_132;
t_132 = t;
if((sl_readvar(1, sl) == NULL))
goto fail117 ;
else
{
t = sl_readvar(1, sl);
}
m_132 = t;
t = t_132;
if(match_cons(t, sym__2))
{
ATerm trm210 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm210) == ATmakeSymbol("a0556ea9a635e4d242f4302f1131968b", 0, ATtrue))))
goto fail117 ;
o_132 = ATgetArgument(t, 1);
}
else
goto fail117 ;
q_132 = t;
t = m_132;
t = q_132;
t = o_132;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
ATerm SourcePathName_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SourcePathName_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
sl_init_var(0, i_32);
sl_init_var(1, j_32);
{
struct str_closure d_137 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(d_137);
if((j_32 == NULL))
{
j_32 = t;
}
else
if((j_32 != t))
goto fail114 ;
if((i_32 == NULL))
{
i_32 = t;
}
else
if((i_32 != t))
goto fail114 ;
l_32 = t;
n_32 = t;
t = term159;
m_32 = t;
t = n_32;
if((j_32 == NULL))
goto fail114 ;
else
{
t = dr_lookup_rule_0_2(sl, m_32, j_32, t);
if((t == NULL))
goto fail114 ;
}
k_32 = t;
t = l_32;
t = k_32;
t = fetch_elem_1_0(sl, lifted77_cl, t);
if((t == NULL))
goto fail114 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_131 = NULL,v_131 = NULL,d_132 = NULL,h_132 = NULL,x_131 = NULL,a_132 = NULL;
d_132 = t;
if((sl_readvar(0, sl) == NULL))
goto fail115 ;
else
{
t = sl_readvar(0, sl);
}
t_131 = t;
t = d_132;
h_132 = t;
if((sl_readvar(1, sl) == NULL))
goto fail115 ;
else
{
t = sl_readvar(1, sl);
}
v_131 = t;
t = h_132;
if(match_cons(t, sym__2))
{
ATerm trm209 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm209) == ATmakeSymbol("a7731f56306e009889d0d7a9e3e86682", 0, ATtrue))))
goto fail115 ;
x_131 = ATgetArgument(t, 1);
}
else
goto fail115 ;
a_132 = t;
t = v_131;
t = a_132;
t = x_131;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
ATerm prod_3_0 (StrSL sl, StrCL a_22, StrCL b_22, StrCL c_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
ATerm trm208;
trm208 = (ATerm) ATgetAnnotations(t);
if((trm208 == NULL))
trm208 = (ATerm) ATempty;
if(match_cons(t, sym_prod_3))
{
f_112 = ATgetArgument(t, 0);
g_112 = ATgetArgument(t, 1);
h_112 = ATgetArgument(t, 2);
}
else
goto fail113 ;
i_112 = trm208;
t = f_112;
t = cl_fun(a_22)(cl_sl(a_22), t);
if((t == NULL))
goto fail113 ;
j_112 = t;
t = g_112;
t = cl_fun(b_22)(cl_sl(b_22), t);
if((t == NULL))
goto fail113 ;
k_112 = t;
t = h_112;
t = cl_fun(c_22)(cl_sl(c_22), t);
if((t == NULL))
goto fail113 ;
l_112 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, j_112, k_112, l_112), i_112);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
ATerm appl_2_0 (StrSL sl, StrCL y_21, StrCL z_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "appl_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_112 = NULL,z_111 = NULL,b_112 = NULL,d_112 = NULL,e_112 = NULL;
ATerm trm207;
trm207 = (ATerm) ATgetAnnotations(t);
if((trm207 == NULL))
trm207 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
z_111 = ATgetArgument(t, 0);
b_112 = ATgetArgument(t, 1);
}
else
goto fail112 ;
c_112 = trm207;
t = z_111;
t = cl_fun(y_21)(cl_sl(y_21), t);
if((t == NULL))
goto fail112 ;
d_112 = t;
t = b_112;
t = cl_fun(z_21)(cl_sl(z_21), t);
if((t == NULL))
goto fail112 ;
e_112 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_appl_2, d_112, e_112), c_112);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
ATerm parsetree_2_0 (StrSL sl, StrCL t_21, StrCL u_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parsetree_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_111 = NULL,j_111 = NULL,k_111 = NULL,m_111 = NULL,p_111 = NULL;
ATerm trm206;
trm206 = (ATerm) ATgetAnnotations(t);
if((trm206 == NULL))
trm206 = (ATerm) ATempty;
if(match_cons(t, sym_parsetree_2))
{
j_111 = ATgetArgument(t, 0);
k_111 = ATgetArgument(t, 1);
}
else
goto fail111 ;
l_111 = trm206;
t = j_111;
t = cl_fun(t_21)(cl_sl(t_21), t);
if((t == NULL))
goto fail111 ;
m_111 = t;
t = k_111;
t = cl_fun(u_21)(cl_sl(u_21), t);
if((t == NULL))
goto fail111 ;
p_111 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, m_111, p_111), l_111);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_pack_sdf_0_0(sl, t);
if((t == NULL))
goto fail110 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
ATerm concat_modules_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "concat_modules_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm201 = ATgetArgument(t, 0);
if(match_cons(trm201, sym__3))
{
i_21 = ATgetArgument(trm201, 0);
j_21 = ATgetArgument(trm201, 1);
k_21 = ATgetArgument(trm201, 2);
}
else
goto fail108 ;
{
ATerm trm202 = ATgetArgument(t, 1);
if(match_cons(trm202, sym__3))
{
l_21 = ATgetArgument(trm202, 0);
m_21 = ATgetArgument(trm202, 1);
n_21 = ATgetArgument(trm202, 2);
}
else
goto fail108 ;
}
}
else
goto fail108 ;
p_21 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_21), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term3), term7, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term145), term3, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term147), term149), term155))), term145, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term157))), (ATerm) ATinsert(ATempty, term153))))))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term3), term7, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term145), term3, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term147), term149), term155))), term145, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term157))), (ATerm) ATinsert(ATempty, term153))))))), k_21);
{
struct str_closure z_136 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(z_136);
t = foldr1a_1_0(sl, lifted76_cl, t);
if((t == NULL))
goto fail108 ;
o_21 = t;
t = p_21;
t = (ATerm) ATmakeAppl(sym__3, i_21, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term195), term7), term195), term195, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term13))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_21), o_21), j_21)), n_21);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm203 = t;
ATerm trm204 = t;
t = conc_layout1_0_0(sl_up(sl), t);
if((t == NULL))
goto label86 ;
goto label85 ;
label86 :
t = trm204;
{
ATerm trm205 = t;
t = conc_layout2_0_0(sl_up(sl), t);
if((t == NULL))
goto label87 ;
goto label85 ;
label87 :
t = trm205;
t = conc_layout3_0_0(sl_up(sl), t);
if((t == NULL))
goto label84 ;
else
goto label85 ;
}
label85 :
;
goto label83 ;
label84 :
t = trm203;
{
ATerm o_131 = NULL,r_131 = NULL;
r_131 = t;
o_131 = t;
t = (ATerm) ATmakeAppl(sym_ConcLayout_1, o_131);
goto label83 ;
}
label83 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
ATerm ConcatModules_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ConcatModules_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,g_21 = NULL,h_21 = NULL;
t = b_21(&(frame), t);
if((t == NULL))
goto fail105 ;
if(match_cons(t, sym__3))
{
n_20 = ATgetArgument(t, 0);
o_20 = ATgetArgument(t, 1);
p_20 = ATgetArgument(t, 2);
}
else
goto fail105 ;
h_21 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, n_20), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term3), term7, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term145), term3, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term147), term149), term155))), term145, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term157))), (ATerm) ATinsert(ATempty, term153)))))));
{
struct str_closure v_136 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(v_136);
t = foldr1a_1_0(sl, lifted75_cl, t);
if((t == NULL))
goto fail105 ;
g_21 = t;
t = h_21;
t = (ATerm) ATmakeAppl(sym_parsetree_2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term7), term199), term7), term143, term9), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_20), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term205), term7), term209), term199, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term213))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term185), term205, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term195), term185, term9), (ATerm) ATinsert(ATempty, o_20))))), g_21), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term215))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term217))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term219))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term221))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term219))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term215))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term219))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term223))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term225))), (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term227))), term209, term9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term215), term217), term219), term221), term219), term215), term219), term223), term225), term227))))), term181)), term229);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm198 = t;
ATerm trm199 = t;
t = conc_layout1_0_0(sl_up(sl), t);
if((t == NULL))
goto label81 ;
goto label80 ;
label81 :
t = trm199;
{
ATerm trm200 = t;
t = conc_layout2_0_0(sl_up(sl), t);
if((t == NULL))
goto label82 ;
goto label80 ;
label82 :
t = trm200;
t = conc_layout3_0_0(sl_up(sl), t);
if((t == NULL))
goto label79 ;
else
goto label80 ;
}
label80 :
;
goto label78 ;
label79 :
t = trm198;
{
ATerm k_131 = NULL,m_131 = NULL;
m_131 = t;
k_131 = t;
t = (ATerm) ATmakeAppl(sym_ConcLayout_1, k_131);
goto label78 ;
}
label78 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm b_21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "b_21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
ATerm trm171 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label76 ;
t = term191;
goto label75 ;
label76 :
t = trm171;
{
ATerm trm172 = t;
ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
ATerm trm173;
trm173 = (ATerm) ATgetAnnotations(t);
if((trm173 == NULL))
trm173 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
w_20 = ATgetFirst((ATermList) t);
x_20 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label77 ;
a_21 = trm173;
t = w_20;
y_20 = t;
t = x_20;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label77 ;
z_20 = t;
t = y_20;
if(match_cons(t, sym_appl_2))
{
ATerm trm174 = ATgetArgument(t, 0);
if(match_cons(trm174, sym_prod_3))
{
ATerm trm175 = ATgetArgument(trm174, 0);
if(((ATgetType(trm175) == AT_LIST) && !(ATisEmpty(trm175))))
{
ATerm trm176 = ATgetFirst((ATermList) trm175);
if(match_cons(trm176, sym_cf_1))
{
ATerm trm177 = ATgetArgument(trm176, 0);
if(match_cons(trm177, sym_opt_1))
{
ATerm trm178 = ATgetArgument(trm177, 0);
if(!(match_cons(trm178, sym_layout_0)))
goto label77 ;
}
else
goto label77 ;
}
else
goto label77 ;
{
ATerm trm179 = (ATerm) ATgetNext((ATermList) trm175);
if(((ATgetType(trm179) == AT_LIST) && !(ATisEmpty(trm179))))
{
ATerm trm180 = ATgetFirst((ATermList) trm179);
if(match_cons(trm180, sym_cf_1))
{
ATerm trm181 = ATgetArgument(trm180, 0);
if(match_cons(trm181, sym_sort_1))
{
ATerm trm182 = ATgetArgument(trm181, 0);
if(!((ATgetSymbol(trm182) == ATmakeSymbol("Module", 0, ATtrue))))
goto label77 ;
}
else
goto label77 ;
}
else
goto label77 ;
{
ATerm trm183 = (ATerm) ATgetNext((ATermList) trm179);
if(((ATgetType(trm183) == AT_LIST) && !(ATisEmpty(trm183))))
{
ATerm trm184 = ATgetFirst((ATermList) trm183);
if(match_cons(trm184, sym_cf_1))
{
ATerm trm185 = ATgetArgument(trm184, 0);
if(match_cons(trm185, sym_opt_1))
{
ATerm trm186 = ATgetArgument(trm185, 0);
if(!(match_cons(trm186, sym_layout_0)))
goto label77 ;
}
else
goto label77 ;
}
else
goto label77 ;
{
ATerm trm187 = (ATerm) ATgetNext((ATermList) trm183);
if(!(((ATgetType(trm187) == AT_LIST) && ATisEmpty(trm187))))
goto label77 ;
}
}
else
goto label77 ;
}
}
else
goto label77 ;
}
}
else
goto label77 ;
{
ATerm trm188 = ATgetArgument(trm174, 1);
if(match_cons(trm188, sym_sort_1))
{
ATerm trm189 = ATgetArgument(trm188, 0);
if(!((ATgetSymbol(trm189) == ATmakeSymbol("<START>", 0, ATtrue))))
goto label77 ;
}
else
goto label77 ;
}
{
ATerm trm190 = ATgetArgument(trm174, 2);
if(!(match_cons(trm190, sym_no_attrs_0)))
goto label77 ;
}
}
else
goto label77 ;
{
ATerm trm191 = ATgetArgument(t, 1);
if(((ATgetType(trm191) == AT_LIST) && !(ATisEmpty(trm191))))
{
q_20 = ATgetFirst((ATermList) trm191);
{
ATerm trm192 = (ATerm) ATgetNext((ATermList) trm191);
if(((ATgetType(trm192) == AT_LIST) && !(ATisEmpty(trm192))))
{
s_20 = ATgetFirst((ATermList) trm192);
{
ATerm trm193 = (ATerm) ATgetNext((ATermList) trm192);
if(((ATgetType(trm193) == AT_LIST) && !(ATisEmpty(trm193))))
{
r_20 = ATgetFirst((ATermList) trm193);
{
ATerm trm194 = (ATerm) ATgetNext((ATermList) trm193);
if(!(((ATgetType(trm194) == AT_LIST) && ATisEmpty(trm194))))
goto label77 ;
}
}
else
goto label77 ;
}
}
else
goto label77 ;
}
}
else
goto label77 ;
}
}
else
goto label77 ;
t = z_20;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label77 ;
t = (ATerm) SRTS_setAnnotations(a_21, (ATerm) ATempty);
{
ATerm trm195;
trm195 = CheckATermList(z_20);
if((trm195 == NULL))
goto label77 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm195, y_20), a_21);
t = (ATerm) ATmakeAppl(sym__3, term181, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term139), term195, term9), (ATerm) ATinsert(ATempty, s_20)), term181);
}
goto label75 ;
label77 :
t = trm172;
{
ATerm c_21 = NULL,e_21 = NULL,d_21 = NULL,f_21 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
t_20 = ATgetFirst((ATermList) t);
{
ATerm trm196 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm196) == AT_LIST) && !(ATisEmpty(trm196))))
{
u_20 = ATgetFirst((ATermList) trm196);
v_20 = (ATerm) ATgetNext((ATermList) trm196);
}
else
goto fail106 ;
}
}
else
goto fail106 ;
e_21 = t;
t = (ATerm) ATinsert(ATempty, t_20);
t = b_21(sl, t);
if((t == NULL))
goto fail106 ;
c_21 = t;
t = e_21;
f_21 = t;
{
ATerm trm197;
trm197 = CheckATermList(v_20);
if((trm197 == NULL))
goto fail106 ;
t = (ATerm) ATinsert((ATermList)trm197, u_20);
t = b_21(sl, t);
if((t == NULL))
goto fail106 ;
d_21 = t;
t = f_21;
t = (ATerm) ATmakeAppl(sym__2, c_21, d_21);
t = concat_modules_0_0(sl_up(sl), t);
if((t == NULL))
goto fail106 ;
else
goto label75 ;
}
}
}
label75 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
ATerm module_to_module_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "module_to_module_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_20 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm159 = ATgetArgument(t, 0);
if(match_cons(trm159, sym_prod_3))
{
ATerm trm160 = ATgetArgument(trm159, 0);
ATerm trm161 = ATgetArgument(trm159, 1);
if(match_cons(trm161, sym_cf_1))
{
ATerm trm162 = ATgetArgument(trm161, 0);
if(match_cons(trm162, sym_sort_1))
{
ATerm trm163 = ATgetArgument(trm162, 0);
if(!((ATgetSymbol(trm163) == ATmakeSymbol("Module", 0, ATtrue))))
goto fail104 ;
}
else
goto fail104 ;
}
else
goto fail104 ;
{
ATerm trm164 = ATgetArgument(trm159, 2);
}
}
else
goto fail104 ;
{
ATerm trm165 = ATgetArgument(t, 1);
if(((ATgetType(trm165) == AT_LIST) && !(ATisEmpty(trm165))))
{
ATerm trm166 = ATgetFirst((ATermList) trm165);
ATerm trm167 = (ATerm) ATgetNext((ATermList) trm165);
if(((ATgetType(trm167) == AT_LIST) && !(ATisEmpty(trm167))))
{
ATerm trm168 = ATgetFirst((ATermList) trm167);
ATerm trm169 = (ATerm) ATgetNext((ATermList) trm167);
if(((ATgetType(trm169) == AT_LIST) && !(ATisEmpty(trm169))))
{
m_20 = ATgetFirst((ATermList) trm169);
{
ATerm trm170 = (ATerm) ATgetNext((ATermList) trm169);
}
}
else
goto fail104 ;
}
else
goto fail104 ;
}
else
goto fail104 ;
}
}
else
goto fail104 ;
t = m_20;
t = get_module_name_0_0(sl, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_module_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_module_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm l_20 = NULL;
sl_init_var(0, l_20);
{
struct str_closure u_136 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(u_136);
t = oncetd_1_0(sl, lifted74_cl, t);
if((t == NULL))
goto fail102 ;
if((l_20 == NULL))
goto fail102 ;
else
{
t = l_20;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_appl_2))
{
ATerm trm152 = ATgetArgument(t, 0);
if(match_cons(trm152, sym_prod_3))
{
ATerm trm153 = ATgetArgument(trm152, 0);
ATerm trm154 = ATgetArgument(trm152, 1);
if(match_cons(trm154, sym_cf_1))
{
ATerm trm155 = ATgetArgument(trm154, 0);
if(match_cons(trm155, sym_sort_1))
{
ATerm trm156 = ATgetArgument(trm155, 0);
if(!((ATgetSymbol(trm156) == ATmakeSymbol("ModuleId", 0, ATtrue))))
goto fail103 ;
}
else
goto fail103 ;
}
else
goto fail103 ;
{
ATerm trm157 = ATgetArgument(trm152, 2);
}
}
else
goto fail103 ;
{
ATerm trm158 = ATgetArgument(t, 1);
}
}
else
goto fail103 ;
t = yield_0_0(sl_up(sl), t);
if((t == NULL))
goto fail103 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail103 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
ATerm skip_non_imports_2_0 (StrSL sl, StrCL j_20, StrCL k_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "skip_non_imports_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, k_20);
{
ATerm trm142 = t;
struct str_closure j_136 = { &(_Id) , sl };
StrCL lifted69_cl = &(j_136);
t = parsetree_2_0(sl, j_20, lifted69_cl, t);
if((t == NULL))
goto label66 ;
goto label65 ;
label66 :
t = trm142;
{
ATerm trm143 = t;
struct str_closure t_136 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(t_136);
t = appl_2_0(sl, lifted70_cl, k_20, t);
if((t == NULL))
goto label67 ;
goto label65 ;
label67 :
t = trm143;
t = appl_2_0(sl, k_20, j_20, t);
if((t == NULL))
goto fail99 ;
else
goto label65 ;
}
label65 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_136 = { &(_Id) , sl_up(sl) };
StrCL lifted71_cl = &(n_136);
struct str_closure o_136 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(o_136);
struct str_closure s_136 = { &(_Id) , sl_up(sl) };
StrCL lifted73_cl = &(s_136);
t = prod_3_0(sl_up(sl), lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto fail100 ;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail100 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_129 = NULL,w_129 = NULL,x_129 = NULL;
ATerm trm144;
trm144 = (ATerm) ATgetAnnotations(t);
if((trm144 == NULL))
trm144 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
w_129 = ATgetArgument(t, 0);
}
else
goto fail101 ;
v_129 = trm144;
t = w_129;
{
ATerm trm145 = t;
ATerm a_130 = NULL,d_130 = NULL,g_130 = NULL;
ATerm trm146;
trm146 = (ATerm) ATgetAnnotations(t);
if((trm146 == NULL))
trm146 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
d_130 = ATgetArgument(t, 0);
}
else
goto label69 ;
a_130 = trm146;
t = d_130;
if(!(match_cons(t, sym_layout_0)))
goto label69 ;
g_130 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, g_130), a_130);
goto label68 ;
label69 :
t = trm145;
{
ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL;
ATerm trm147;
trm147 = (ATerm) ATgetAnnotations(t);
if((trm147 == NULL))
trm147 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
b_131 = ATgetArgument(t, 0);
}
else
goto fail101 ;
a_131 = trm147;
t = b_131;
{
ATerm trm148 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("Productions", 0, ATtrue))))
goto label71 ;
goto label70 ;
label71 :
t = trm148;
{
ATerm trm149 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("Symbols", 0, ATtrue))))
goto label72 ;
goto label70 ;
label72 :
t = trm149;
{
ATerm trm150 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("Priorities", 0, ATtrue))))
goto label73 ;
goto label70 ;
label73 :
t = trm150;
{
ATerm trm151 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("Restrictions", 0, ATtrue))))
goto label74 ;
goto label70 ;
label74 :
t = trm151;
if((ATgetSymbol(t) == ATmakeSymbol("Aliases", 0, ATtrue)))
goto label70 ;
else
goto fail101 ;
}
}
}
label70 :
;
c_131 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, c_131), a_131);
goto label68 ;
}
}
label68 :
;
x_129 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, x_129), v_129);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_sdf_imports_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_sdf_imports_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm a_20 = NULL;
sl_init_var(0, a_20);
{
ATerm trm134 = t;
ATerm b_20 = NULL,c_20 = NULL;
b_20 = t;
t = get_module_name_from_asfix_0_0(sl, t);
if((t == NULL))
goto label64 ;
if((a_20 == NULL))
{
a_20 = t;
}
else
if((a_20 != t))
goto label64 ;
t = b_20;
{
struct str_closure t_135 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(t_135);
struct str_closure u_135 = { &(skip_non_imports_2_0) , sl };
StrCL lifted66_cl = &(u_135);
t = collect_2_0(sl, lifted65_cl, lifted66_cl, t);
if((t == NULL))
goto label64 ;
c_20 = t;
{
struct str_closure v_135 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(v_135);
t = map_1_0(sl, lifted67_cl, t);
if((t == NULL))
goto label64 ;
t = c_20;
}
}
goto label63 ;
label64 :
t = trm134;
{
struct str_closure i_136 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(i_136);
t = debug_1_0(sl, lifted68_cl, t);
if((t == NULL))
goto fail95 ;
goto fail95 ;
}
label63 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term177;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
d_20 = t;
e_20 = t;
h_20 = t;
t = term173;
f_20 = t;
t = h_20;
i_20 = t;
if((sl_readvar(0, sl) == NULL))
goto fail97 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term175, sl_readvar(0, sl));
}
g_20 = t;
t = i_20;
t = dr_add_rule_0_3(sl_up(sl), f_20, d_20, g_20, t);
if((t == NULL))
goto fail97 ;
t = e_20;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_appl_2))
{
ATerm trm135 = ATgetArgument(t, 0);
if(match_cons(trm135, sym_prod_3))
{
ATerm trm136 = ATgetArgument(trm135, 0);
ATerm trm137 = ATgetArgument(trm135, 1);
if(match_cons(trm137, sym_cf_1))
{
ATerm trm138 = ATgetArgument(trm137, 0);
if(match_cons(trm138, sym_sort_1))
{
ATerm trm139 = ATgetArgument(trm138, 0);
if(!((ATgetSymbol(trm139) == ATmakeSymbol("Import", 0, ATtrue))))
goto fail96 ;
}
else
goto fail96 ;
}
else
goto fail96 ;
{
ATerm trm140 = ATgetArgument(trm135, 2);
}
}
else
goto fail96 ;
{
ATerm trm141 = ATgetArgument(t, 1);
}
}
else
goto fail96 ;
t = get_module_name_0_0(sl_up(sl), t);
if((t == NULL))
goto fail96 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_lex_yield_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_lex_yield_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure s_135 = { &(y_19) , &(frame) };
StrCL y_19_cl = &(s_135);
sl_init_fun(0, y_19_cl);
t = y_19(&(frame), t);
if((t == NULL))
goto fail92 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail92 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm y_19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "y_19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm133 = t;
struct str_closure q_135 = { &(_Id) , sl_up(sl) };
StrCL lifted63_cl = &(q_135);
struct str_closure r_135 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(r_135);
t = appl_2_0(sl_up(sl), lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto label62 ;
t = w_19(sl_up(sl), t);
if((t == NULL))
goto label62 ;
goto label61 ;
label62 :
t = trm133;
t = x_19(sl_up(sl), t);
if((t == NULL))
goto fail93 ;
else
goto label61 ;
label61 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = map_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail94 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm x_19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "x_19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_19 = NULL;
v_19 = t;
t = (ATerm) ATinsert(ATempty, v_19);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm w_19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "w_19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_19 = NULL,u_19 = NULL;
if(match_cons(t, sym_appl_2))
{
t_19 = ATgetArgument(t, 0);
u_19 = ATgetArgument(t, 1);
}
else
goto fail90 ;
t = u_19;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail90 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_module_name_from_asfix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_module_name_from_asfix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
struct str_closure o_135 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(o_135);
t = collect_om_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto fail87 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
q_19 = ATgetFirst((ATermList) t);
{
ATerm trm117 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm117) == AT_LIST) && ATisEmpty(trm117))))
goto fail87 ;
}
}
else
goto fail87 ;
t = q_19;
if(match_cons(t, sym_appl_2))
{
ATerm trm118 = ATgetArgument(t, 0);
ATerm trm119 = ATgetArgument(t, 1);
if(((ATgetType(trm119) == AT_LIST) && !(ATisEmpty(trm119))))
{
ATerm trm120 = ATgetFirst((ATermList) trm119);
ATerm trm121 = (ATerm) ATgetNext((ATermList) trm119);
if(((ATgetType(trm121) == AT_LIST) && !(ATisEmpty(trm121))))
{
ATerm trm122 = ATgetFirst((ATermList) trm121);
ATerm trm123 = (ATerm) ATgetNext((ATermList) trm121);
if(((ATgetType(trm123) == AT_LIST) && !(ATisEmpty(trm123))))
{
r_19 = ATgetFirst((ATermList) trm123);
{
ATerm trm124 = (ATerm) ATgetNext((ATermList) trm123);
}
}
else
goto fail87 ;
}
else
goto fail87 ;
}
else
goto fail87 ;
}
else
goto fail87 ;
t = r_19;
{
struct str_closure p_135 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(p_135);
t = collect_om_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail87 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
s_19 = ATgetFirst((ATermList) t);
{
ATerm trm132 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm132) == AT_LIST) && ATisEmpty(trm132))))
goto fail87 ;
}
}
else
goto fail87 ;
t = s_19;
t = asfix_lex_yield_0_0(sl, t);
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
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_appl_2))
{
ATerm trm125 = ATgetArgument(t, 0);
if(match_cons(trm125, sym_prod_3))
{
ATerm trm126 = ATgetArgument(trm125, 0);
ATerm trm127 = ATgetArgument(trm125, 1);
if(match_cons(trm127, sym_lex_1))
{
ATerm trm128 = ATgetArgument(trm127, 0);
if(match_cons(trm128, sym_sort_1))
{
ATerm trm129 = ATgetArgument(trm128, 0);
if(!((ATgetSymbol(trm129) == ATmakeSymbol("ModuleId", 0, ATtrue))))
goto fail89 ;
}
else
goto fail89 ;
}
else
goto fail89 ;
{
ATerm trm130 = ATgetArgument(trm125, 2);
}
}
else
goto fail89 ;
{
ATerm trm131 = ATgetArgument(t, 1);
}
}
else
goto fail89 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_appl_2))
{
ATerm trm110 = ATgetArgument(t, 0);
if(match_cons(trm110, sym_prod_3))
{
ATerm trm111 = ATgetArgument(trm110, 0);
ATerm trm112 = ATgetArgument(trm110, 1);
if(match_cons(trm112, sym_cf_1))
{
ATerm trm113 = ATgetArgument(trm112, 0);
if(match_cons(trm113, sym_sort_1))
{
ATerm trm114 = ATgetArgument(trm113, 0);
if(!((ATgetSymbol(trm114) == ATmakeSymbol("Module", 0, ATtrue))))
goto fail88 ;
}
else
goto fail88 ;
}
else
goto fail88 ;
{
ATerm trm115 = ATgetArgument(trm110, 2);
}
}
else
goto fail88 ;
{
ATerm trm116 = ATgetArgument(t, 1);
}
}
else
goto fail88 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm check_module_name_1_1 (StrSL sl, StrCL o_19, ATerm j_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "check_module_name_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
k_19 = t;
m_19 = t;
t = term17;
t = k_19;
t = get_module_name_from_asfix_0_0(sl, t);
if((t == NULL))
goto fail86 ;
l_19 = t;
t = m_19;
{
ATerm trm109 = t;
ATerm n_19 = NULL;
n_19 = t;
t = (ATerm) ATmakeAppl(sym__2, l_19, j_19);
t = cl_fun(o_19)(cl_sl(o_19), t);
if((t == NULL))
goto label60 ;
t = n_19;
goto label59 ;
label60 :
t = trm109;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term167), j_19), term169), l_19), term171);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail86 ;
else
goto label59 ;
label59 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_sdf2_module_to_asfix_1_0 (StrSL sl, StrCL h_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_sdf2_module_to_asfix_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_19 = NULL;
g_19 = t;
{
ATerm trm107 = t;
struct str_closure m_135 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(m_135);
struct str_closure n_135 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(n_135);
t = (ATerm) ATmakeAppl(sym_FILE_1, g_19);
t = xtc_sglr_2_0(sl, lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto label58 ;
{
ATerm i_19 = NULL;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail83 ;
if(match_cons(t, sym_parsetree_2))
{
i_19 = ATgetArgument(t, 0);
{
ATerm trm108 = ATgetArgument(t, 1);
}
}
else
goto fail83 ;
t = i_19;
t = check_module_name_1_1(sl, h_19, g_19, t);
if((t == NULL))
goto fail83 ;
else
goto label57 ;
}
label58 :
t = trm107;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term163), g_19), term165);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail83 ;
else
goto label57 ;
label57 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_sdf2_module_to_asfix_0_1 (StrSL sl, ATerm b_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_sdf2_module_to_asfix_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, b_19);
{
struct str_closure l_135 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(l_135);
t = parse_sdf2_module_to_asfix_1_0(sl, lifted58_cl, t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_129 = NULL,s_129 = NULL,u_129 = NULL;
if(match_cons(t, sym__2))
{
o_129 = ATgetArgument(t, 0);
{
ATerm trm106 = ATgetArgument(t, 1);
}
}
else
goto fail82 ;
t = o_129;
u_129 = t;
s_129 = t;
if((sl_readvar(0, sl) == NULL))
goto fail82 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, s_129, sl_readvar(0, sl));
}
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail82 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_sdf2_module_to_asfix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_sdf2_module_to_asfix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_135 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(k_135);
t = parse_sdf2_module_to_asfix_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto fail78 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_135 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(i_135);
struct str_closure j_135 = { &(base_filename_0_0) , sl_up(sl) };
StrCL lifted57_cl = &(j_135);
t = _2_0(sl_up(sl), lifted56_cl, lifted57_cl, t);
if((t == NULL))
goto fail79 ;
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail79 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_129 = NULL,l_129 = NULL;
l_129 = t;
t = base_filename_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail80 ;
i_129 = t;
t = l_129;
t = (ATerm) ATmakeAppl(sym__2, i_129, term127);
t = conc_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail80 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_source_pathname_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_source_pathname_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = SourcePathName_0_0(sl, t);
if((t == NULL))
goto fail77 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm register_source_pathname_0_1 (StrSL sl, ATerm r_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "register_source_pathname_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
s_18 = t;
t_18 = t;
w_18 = t;
t = term159;
u_18 = t;
t = w_18;
x_18 = t;
t = (ATerm) ATmakeAppl(sym__2, term161, s_18);
v_18 = t;
t = x_18;
t = dr_set_rule_0_3(sl, u_18, r_18, v_18, t);
if((t == NULL))
goto fail76 ;
t = t_18;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_from_def_0_1 (StrSL sl, ATerm k_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_from_def_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, k_18);
{
ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
sl_init_var(1, n_18);
if(match_cons(t, sym_IncludeDef_2))
{
if((n_18 == NULL))
{
n_18 = ATgetArgument(t, 0);
}
else
if((n_18 != ATgetArgument(t, 0)))
goto fail72 ;
l_18 = ATgetArgument(t, 1);
}
else
goto fail72 ;
o_18 = t;
t = l_18;
{
struct str_closure f_135 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(f_135);
t = fetch_elem_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto fail72 ;
m_18 = t;
{
struct str_closure h_135 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(h_135);
t = if_verbose1_1_0(sl, lifted53_cl, t);
if((t == NULL))
goto fail72 ;
if((n_18 == NULL))
goto fail72 ;
else
{
t = n_18;
}
if((k_18 == NULL))
goto fail72 ;
else
{
t = register_source_pathname_0_1(sl, k_18, t);
if((t == NULL))
goto fail72 ;
}
t = o_18;
if((n_18 == NULL))
goto fail72 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term7), term139), term7), term143, term9), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term145), term3, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term147), term149), term155))), term145, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term157))), (ATerm) ATinsert(ATempty, term153))))), m_18), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term145), term3, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term147), term149), term155))), term145, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term157))), (ATerm) ATinsert(ATempty, term153)))))));
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_135 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(g_135);
t = say_1_0(sl_up(sl), lifted54_cl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl_up(sl)) == NULL) || (sl_readvar(1, sl_up(sl)) == NULL)))
goto fail75 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, sl_readvar(1, sl_up(sl))), term133), sl_readvar(0, sl_up(sl))), term121);
}
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail75 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_18 = NULL;
if(match_cons(t, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail73 ;
p_18 = ATgetArgument(t, 1);
}
else
goto fail73 ;
t = p_18;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_from_xtc_0_1 (StrSL sl, ATerm g_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_from_xtc_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, g_18);
{
ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
if(!(match_cons(t, sym_IncludeXTC_0)))
goto fail69 ;
j_18 = t;
if((g_18 == NULL))
goto fail69 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, g_18, term127);
}
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail69 ;
t = xtc_find_loc_0_0(sl, t);
if((t == NULL))
goto fail69 ;
i_18 = t;
{
struct str_closure b_135 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(b_135);
t = if_verbose1_1_0(sl, lifted50_cl, t);
if((t == NULL))
goto fail69 ;
t = i_18;
if((g_18 == NULL))
goto fail69 ;
else
{
t = parse_sdf2_module_to_asfix_0_1(sl, g_18, t);
if((t == NULL))
goto fail69 ;
}
h_18 = t;
t = i_18;
if((g_18 == NULL))
goto fail69 ;
else
{
t = register_source_pathname_0_1(sl, g_18, t);
if((t == NULL))
goto fail69 ;
}
t = j_18;
t = (ATerm) ATmakeAppl(sym__2, i_18, h_18);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_135 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(a_135);
t = say_1_0(sl_up(sl), lifted51_cl, t);
if((t == NULL))
goto fail70 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail71 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term131), sl_readvar(0, sl_up(sl))), term121);
}
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail71 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_from_dir_0_1 (StrSL sl, ATerm b_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_from_dir_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
if(match_cons(t, sym_IncludeDir_1))
{
c_18 = ATgetArgument(t, 0);
}
else
goto fail66 ;
f_18 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term127), b_18), term129), c_18);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail66 ;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto fail66 ;
e_18 = t;
{
struct str_closure z_134 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(z_134);
t = if_verbose1_1_0(sl, lifted48_cl, t);
if((t == NULL))
goto fail66 ;
t = e_18;
t = parse_sdf2_module_to_asfix_0_1(sl, b_18, t);
if((t == NULL))
goto fail66 ;
d_18 = t;
t = e_18;
t = register_source_pathname_0_1(sl, b_18, t);
if((t == NULL))
goto fail66 ;
t = f_18;
t = e_18;
t = include_pathname_0_0(sl, t);
if((t == NULL))
goto fail66 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_134 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(y_134);
t = debug_1_0(sl_up(sl), lifted49_cl, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_pathname_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_pathname_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
y_17 = t;
a_18 = t;
t = parse_sdf2_module_to_asfix_0_0(sl, t);
if((t == NULL))
goto fail65 ;
x_17 = t;
t = get_module_name_from_asfix_0_0(sl, t);
if((t == NULL))
goto fail65 ;
z_17 = t;
t = y_17;
t = register_source_pathname_0_1(sl, z_17, t);
if((t == NULL))
goto fail65 ;
t = a_18;
t = (ATerm) ATmakeAppl(sym__2, y_17, x_17);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm pack_sdf_parse_sdf_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pack_sdf_parse_sdf_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm trm94 = t;
ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
sl_init_var(0, s_17);
{
struct str_closure v_134 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(v_134);
if(match_cons(t, sym__2))
{
t_17 = ATgetArgument(t, 0);
r_17 = ATgetArgument(t, 1);
}
else
goto label48 ;
t = t_17;
if(match_cons(t, sym_IncludeFromPath_1))
{
u_17 = ATgetArgument(t, 0);
}
else
goto label48 ;
t = u_17;
w_17 = t;
t = term115;
v_17 = t;
t = w_17;
t = guarantee_extension_0_1(sl, v_17, t);
if((t == NULL))
goto label48 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label48 ;
if((s_17 == NULL))
{
s_17 = t;
}
else
if((s_17 != t))
goto label48 ;
t = r_17;
t = fetch_elem_1_0(sl, lifted45_cl, t);
if((t == NULL))
goto label48 ;
}
goto label47 ;
label48 :
t = trm94;
{
ATerm h_17 = NULL,n_17 = NULL,o_17 = NULL,c_129 = NULL;
if(match_cons(t, sym__2))
{
n_17 = ATgetArgument(t, 0);
{
ATerm trm97 = ATgetArgument(t, 1);
}
}
else
goto fail61 ;
t = n_17;
if(match_cons(t, sym_IncludePathName_1))
{
o_17 = ATgetArgument(t, 0);
}
else
goto fail61 ;
t = o_17;
c_129 = t;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail61 ;
h_17 = t;
t = c_129;
{
ATerm trm98 = t;
ATerm f_129 = NULL;
f_129 = t;
t = h_17;
{
ATerm trm99 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm100 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm100) == AT_INT) && (ATgetInt((ATermInt) trm100) == 47))))
goto label55 ;
{
ATerm trm101 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto label55 ;
goto label54 ;
label55 :
t = trm99;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm102 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm102) == AT_INT) && (ATgetInt((ATermInt) trm102) == 46))))
goto label53 ;
{
ATerm trm103 = (ATerm) ATgetNext((ATermList) t);
}
goto label54 ;
}
else
goto label53 ;
label54 :
;
t = f_129;
}
goto label52 ;
label53 :
t = trm98;
{
ATerm trm104;
trm104 = CheckATermList(h_17);
if((trm104 == NULL))
goto fail61 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm104, term117), term119);
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail61 ;
else
goto label52 ;
}
label52 :
;
{
ATerm trm105 = t;
ATerm k_17 = NULL;
k_17 = t;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto label56 ;
t = k_17;
{
struct str_closure x_134 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(x_134);
t = if_verbose1_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail61 ;
t = include_pathname_0_0(sl, t);
if((t == NULL))
goto fail61 ;
else
goto label47 ;
}
label56 :
t = trm105;
{
ATerm p_17 = NULL,q_17 = NULL;
q_17 = t;
p_17 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term123), p_17), term125);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail61 ;
else
goto label47 ;
}
}
}
}
label47 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_134 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(w_134);
t = debug_1_0(sl_up(sl), lifted47_cl, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm95 = t;
if((sl_readvar(0, sl) == NULL))
goto label50 ;
else
{
t = include_from_dir_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto label50 ;
}
goto label49 ;
label50 :
t = trm95;
{
ATerm trm96 = t;
if((sl_readvar(0, sl) == NULL))
goto label51 ;
else
{
t = include_from_def_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto label51 ;
}
goto label49 ;
label51 :
t = trm96;
if((sl_readvar(0, sl) == NULL))
goto fail62 ;
else
{
t = include_from_xtc_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail62 ;
else
goto label49 ;
}
}
label49 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_module_not_found_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_module_not_found_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_16 = NULL,v_16 = NULL;
ATerm trm88 = t;
ATerm x_128 = NULL;
if(match_cons(t, sym_IncludeFromPath_1))
{
x_128 = ATgetArgument(t, 0);
}
else
goto label39 ;
t = x_128;
goto label38 ;
label39 :
t = trm88;
{
ATerm z_128 = NULL;
if(match_cons(t, sym_IncludePathName_1))
{
z_128 = ATgetArgument(t, 0);
}
else
goto fail59 ;
t = z_128;
goto label38 ;
}
label38 :
;
u_16 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term95), u_16), term97));
t = fprintnl_0_0(sl, t);
if((t == NULL))
goto fail59 ;
t = u_16;
t = bagof_ImportedFrom_0_0(sl, t);
if((t == NULL))
goto fail59 ;
{
ATerm trm89 = t;
ATerm w_16 = NULL;
w_16 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label41 ;
goto label40 ;
label41 :
t = trm89;
{
ATerm trm90 = t;
ATerm x_16 = NULL;
x_16 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
v_16 = ATgetFirst((ATermList) t);
{
ATerm trm91 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm91) == AT_LIST) && ATisEmpty(trm91))))
goto label42 ;
}
}
else
goto label42 ;
{
ATerm d_17 = NULL,e_17 = NULL;
t = v_16;
{
ATerm trm92 = t;
t = SourcePathName_0_0(sl, t);
if((t == NULL))
goto label44 ;
goto label43 ;
label44 :
t = trm92;
t = term99;
goto label43 ;
label43 :
;
e_17 = t;
d_17 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_17), term101), v_16), term103));
t = fprintnl_0_0(sl, t);
if((t == NULL))
goto fail59 ;
else
goto label40 ;
}
}
label42 :
t = trm90;
{
ATerm y_16 = NULL;
struct str_closure u_134 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(u_134);
y_16 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, (ATerm) ATinsert(ATempty, term111));
t = fprintnl_0_0(sl, t);
if((t == NULL))
goto fail59 ;
t = y_16;
t = map_1_0(sl, lifted44_cl, t);
if((t == NULL))
goto fail59 ;
else
goto label40 ;
}
}
label40 :
;
t = (ATerm) ATmakeAppl(sym__2, term93, (ATerm) ATinsert(ATempty, term113));
t = fprintnl_0_0(sl, t);
if((t == NULL))
goto fail59 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_16 = NULL,f_17 = NULL,g_17 = NULL;
z_16 = t;
{
ATerm trm93 = t;
t = get_source_pathname_0_0(sl_up(sl), t);
if((t == NULL))
goto label46 ;
goto label45 ;
label46 :
t = trm93;
t = term105;
goto label45 ;
label45 :
;
g_17 = t;
f_17 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_17), term107), z_16), term109));
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail60 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm pack_sdf_0_1 (StrSL sl, ATerm k_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pack_sdf_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_16 = NULL,q_16 = NULL,r_16 = NULL;
if(match_cons(t, sym_FILE_1))
{
l_16 = ATgetArgument(t, 0);
}
else
goto fail55 ;
t = (ATerm) ATmakeAppl(sym_IncludePathName_1, l_16);
r_16 = t;
q_16 = t;
t = (ATerm) ATmakeAppl(sym__3, q_16, k_16, (ATerm) ATempty);
{
struct str_closure o_134 = { &(pack_sdf_parse_sdf_0_0) , sl };
StrCL lifted37_cl = &(o_134);
struct str_closure p_134 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(p_134);
struct str_closure q_134 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(q_134);
t = graph_nodes_undef_3_0(sl, lifted37_cl, lifted38_cl, lifted40_cl, t);
if((t == NULL))
goto fail55 ;
{
ATerm trm85 = t;
ATerm p_16 = NULL;
p_16 = t;
if(match_cons(t, sym__2))
{
ATerm trm86 = ATgetArgument(t, 0);
ATerm trm87 = ATgetArgument(t, 1);
if(!(((ATgetType(trm87) == AT_LIST) && ATisEmpty(trm87))))
goto label37 ;
}
else
goto label37 ;
{
struct str_closure r_134 = { &(_Id) , sl };
StrCL lifted41_cl = &(r_134);
struct str_closure s_134 = { &(ConcatModules_0_0) , sl };
StrCL lifted42_cl = &(s_134);
t = Fst_0_0(sl, t);
if((t == NULL))
goto fail55 ;
t = unzip_0_0(sl, t);
if((t == NULL))
goto fail55 ;
t = _2_0(sl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail55 ;
else
goto label36 ;
}
label37 :
t = trm85;
t = Snd_0_0(sl, t);
if((t == NULL))
goto fail55 ;
{
struct str_closure t_134 = { &(report_module_not_found_0_0) , sl };
StrCL lifted43_cl = &(t_134);
t = map_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto fail55 ;
t = term91;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail55 ;
else
goto label36 ;
}
label36 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
if(match_cons(t, sym__3))
{
m_16 = ATgetArgument(t, 0);
n_16 = ATgetArgument(t, 1);
o_16 = ATgetArgument(t, 2);
}
else
goto fail58 ;
{
ATerm trm84;
trm84 = CheckATermList(o_16);
if((trm84 == NULL))
goto fail58 ;
t = (ATerm) ATinsert((ATermList)trm84, n_16);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_134 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(n_134);
t = get_sdf_imports_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
t = map_1_0(sl_up(sl), lifted39_cl, t);
if((t == NULL))
goto fail56 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_16 = NULL,t_16 = NULL;
t_16 = t;
s_16 = t;
t = (ATerm) ATmakeAppl(sym_IncludeFromPath_1, s_16);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_pack_sdf_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_pack_sdf_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm z_15 = NULL,a_16 = NULL;
sl_init_var(0, z_15);
sl_init_var(1, a_16);
{
struct str_closure l_134 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(l_134);
struct str_closure m_134 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(m_134);
t = xtc_io_wrap_2_0(sl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto fail50 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,v_128 = NULL;
t = process_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
f_16 = t;
h_16 = t;
t = include_path_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
g_16 = t;
t = h_16;
t = g_16;
e_16 = t;
t = f_16;
t = pack_sdf_0_1(sl_up(sl), e_16, t);
if((t == NULL))
goto fail52 ;
if(match_cons(t, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail52 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail52 ;
}
else
goto fail52 ;
if((sl_readvar(0, sl) == NULL))
goto fail52 ;
else
{
t = sl_readvar(0, sl);
}
v_128 = t;
{
struct str_closure d_134 = { &(create_dep_file_0_0) , sl_up(sl) };
StrCL lifted32_cl = &(d_134);
t = try_1_0(sl_up(sl), lifted32_cl, t);
if((t == NULL))
goto fail52 ;
t = v_128;
if((sl_readvar(1, sl) == NULL))
goto fail52 ;
else
{
t = sl_readvar(1, sl);
}
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
{
ATerm trm81 = t;
ATerm b_16 = NULL;
b_16 = t;
t = of_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label33 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("txt", 0, ATtrue))))
goto label33 ;
t = b_16;
{
struct str_closure e_134 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(e_134);
struct str_closure f_134 = { &(pass_verbose_0_0) , sl_up(sl) };
StrCL lifted34_cl = &(f_134);
t = xtc_transform_2_0(sl_up(sl), lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto fail52 ;
else
goto label32 ;
}
label33 :
t = trm81;
{
ATerm trm82 = t;
ATerm c_16 = NULL;
c_16 = t;
t = of_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label34 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("ast", 0, ATtrue))))
goto label34 ;
t = c_16;
{
struct str_closure g_134 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(g_134);
struct str_closure h_134 = { &(pass_verbose_0_0) , sl_up(sl) };
StrCL lifted36_cl = &(h_134);
t = xtc_transform_2_0(sl_up(sl), lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto fail52 ;
else
goto label32 ;
}
label34 :
t = trm82;
{
ATerm trm83 = t;
ATerm d_16 = NULL;
d_16 = t;
t = of_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label35 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("asfix", 0, ATtrue))))
goto label35 ;
t = d_16;
goto label32 ;
label35 :
t = trm83;
{
ATerm i_16 = NULL,j_16 = NULL;
j_16 = t;
i_16 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term89), i_16), term39);
t = fatal_error_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
else
goto label32 ;
}
}
}
label32 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm78 = t;
t = include_from_dir_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm78;
{
ATerm trm79 = t;
t = include_from_def_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label30 ;
goto label28 ;
label30 :
t = trm79;
{
ATerm trm80 = t;
t = dep_options_0_0(sl_up(sl), t);
if((t == NULL))
goto label31 ;
goto label28 ;
label31 :
t = trm80;
t = of_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail51 ;
else
goto label28 ;
}
}
label28 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_dep_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_dep_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
sl_init_var(0, p_15);
o_15 = t;
q_15 = t;
t = term77;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail48 ;
n_15 = t;
s_15 = t;
t = term17;
t = depfile_from_config_0_0(sl, t);
if((t == NULL))
goto fail48 ;
r_15 = t;
t = s_15;
t = (ATerm) ATmakeAppl(sym__2, r_15, term79);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail48 ;
if((p_15 == NULL))
{
p_15 = t;
}
else
if((p_15 != t))
goto fail48 ;
t = q_15;
u_15 = t;
{
ATerm trm76;
trm76 = CheckATermList(o_15);
if((trm76 == NULL))
goto fail48 ;
t = (ATerm) ATinsert((ATermList)trm76, term81);
w_15 = t;
t = term83;
v_15 = t;
t = w_15;
t = separate_by_0_1(sl, v_15, t);
if((t == NULL))
goto fail48 ;
t_15 = t;
t = u_15;
{
ATerm trm77;
trm77 = CheckATermList(t_15);
if((trm77 == NULL))
goto fail48 ;
t = (ATerm) ATinsert((ATermList)trm77, n_15);
{
struct str_closure c_134 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(c_134);
t = map_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail48 ;
if((p_15 == NULL))
goto fail48 ;
else
{
t = p_15;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail48 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_15 = NULL,y_15 = NULL;
y_15 = t;
x_15 = t;
if((sl_readvar(0, sl) == NULL))
goto fail49 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, x_15, sl_readvar(0, sl));
}
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm depfile_from_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "depfile_from_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail47 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_path_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_path_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm75 = t;
t = term45;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm75;
t = (ATerm) ATempty;
goto label26 ;
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm dep_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dep_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_133 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(z_133);
struct str_closure a_134 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(a_134);
struct str_closure b_134 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(b_134);
t = ArgOption_3_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
j_15 = t;
l_15 = t;
k_15 = t;
t = (ATerm) ATmakeAppl(sym__2, term73, k_15);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
t = j_15;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--dep", 0, ATtrue))))
goto fail43 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_directory_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_directory_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm71 = t;
ATerm h_15 = NULL;
h_15 = t;
{
ATerm trm72 = t;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto label22 ;
goto label20 ;
label22 :
t = trm72;
goto label21 ;
label21 :
;
t = h_15;
}
{
struct str_closure x_133 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(x_133);
t = debug_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto fail39 ;
else
goto label19 ;
}
label20 :
t = trm71;
{
ATerm trm73 = t;
ATerm i_15 = NULL;
i_15 = t;
{
ATerm trm74 = t;
t = filemode_0_0(sl, t);
if((t == NULL))
goto label25 ;
t = isdir_0_0(sl, t);
if((t == NULL))
goto label25 ;
goto label23 ;
label25 :
t = trm74;
goto label24 ;
label24 :
;
t = i_15;
}
{
struct str_closure y_133 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(y_133);
t = debug_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto fail39 ;
else
goto label19 ;
}
label23 :
t = trm73;
goto label19 ;
}
label19 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_from_dir_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_from_dir_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_133 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(u_133);
struct str_closure v_133 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(v_133);
struct str_closure w_133 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(w_133);
t = ArgOption_3_0(sl, lifted21_cl, lifted22_cl, lifted23_cl, t);
if((t == NULL))
goto fail35 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
e_15 = t;
g_15 = t;
t = ensure_directory_0_0(sl_up(sl), t);
if((t == NULL))
goto fail37 ;
f_15 = t;
t = g_15;
t = (ATerm) ATmakeAppl(sym__2, term45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IncludeDir_1, f_15)));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail37 ;
t = e_15;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm70 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-I", 0, ATtrue))))
goto label18 ;
goto label17 ;
label18 :
t = trm70;
if((ATgetSymbol(t) == ATmakeSymbol("--Include", 0, ATtrue)))
goto label17 ;
else
goto fail36 ;
label17 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm process_Idef_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "process_Idef_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm w_14 = NULL,x_14 = NULL,c_15 = NULL,d_15 = NULL;
sl_init_var(0, w_14);
if(match_cons(t, sym_IncludeDef_1))
{
if((w_14 == NULL))
{
w_14 = ATgetArgument(t, 0);
}
else
if((w_14 != ATgetArgument(t, 0)))
goto fail25 ;
}
else
goto fail25 ;
if((w_14 == NULL))
goto fail25 ;
else
{
t = (ATerm) ATmakeAppl(sym_FILE_1, w_14);
}
{
struct str_closure m_133 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(m_133);
t = xtc_temp_files_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure o_133 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(o_133);
t = collect_om_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure p_133 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(p_133);
t = map_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail25 ;
x_14 = t;
{
struct str_closure t_133 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(t_133);
t = if_verbose2_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail25 ;
t = x_14;
d_15 = t;
c_15 = t;
if((w_14 == NULL))
goto fail25 ;
else
{
t = (ATerm) ATmakeAppl(sym_IncludeDef_2, w_14, c_15);
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_133 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(r_133);
struct str_closure s_133 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(s_133);
t = say_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto fail31 ;
t = map_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail34 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term63), sl_readvar(0, sl_up(sl))), term65);
}
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail34 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_133 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(q_133);
t = Fst_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail32 ;
t = debug_1_0(sl_up(sl_up(sl)), lifted20_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_14 = NULL,a_15 = NULL,z_14 = NULL,b_15 = NULL;
a_15 = t;
t = module_to_module_name_0_0(sl_up(sl), t);
if((t == NULL))
goto fail30 ;
y_14 = t;
t = a_15;
b_15 = t;
z_14 = t;
t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_appl_2))
{
ATerm trm58 = ATgetArgument(t, 0);
if(match_cons(trm58, sym_prod_3))
{
ATerm trm59 = ATgetArgument(trm58, 0);
ATerm trm60 = ATgetArgument(trm58, 1);
if(match_cons(trm60, sym_cf_1))
{
ATerm trm61 = ATgetArgument(trm60, 0);
if(match_cons(trm61, sym_sort_1))
{
ATerm trm62 = ATgetArgument(trm61, 0);
if(!((ATgetSymbol(trm62) == ATmakeSymbol("Module", 0, ATtrue))))
goto fail29 ;
}
else
goto fail29 ;
}
else
goto fail29 ;
{
ATerm trm63 = ATgetArgument(trm58, 2);
if(match_cons(trm63, sym_attrs_1))
{
ATerm trm64 = ATgetArgument(trm63, 0);
if(((ATgetType(trm64) == AT_LIST) && !(ATisEmpty(trm64))))
{
ATerm trm65 = ATgetFirst((ATermList) trm64);
if(match_cons(trm65, sym_term_1))
{
ATerm trm66 = ATgetArgument(trm65, 0);
if(match_cons(trm66, sym_cons_1))
{
ATerm trm67 = ATgetArgument(trm66, 0);
if(!((ATgetSymbol(trm67) == ATmakeSymbol("module", 0, ATtrue))))
goto fail29 ;
}
else
goto fail29 ;
}
else
goto fail29 ;
{
ATerm trm68 = (ATerm) ATgetNext((ATermList) trm64);
if(!(((ATgetType(trm68) == AT_LIST) && ATisEmpty(trm68))))
goto fail29 ;
}
}
else
goto fail29 ;
}
else
goto fail29 ;
}
}
else
goto fail29 ;
{
ATerm trm69 = ATgetArgument(t, 1);
}
}
else
goto fail29 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_133 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(k_133);
struct str_closure l_133 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(l_133);
t = xtc_sglr_2_0(sl_up(sl), lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail26 ;
t = read_from_0_0(sl_up(sl), t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm process_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "process_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL,u_14 = NULL,v_14 = NULL;
k_14 = t;
{
ATerm trm52 = t;
t = term45;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label12 ;
goto label11 ;
label12 :
t = trm52;
t = (ATerm) ATempty;
goto label11 ;
label11 :
;
{
struct str_closure j_133 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(j_133);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail23 ;
n_14 = t;
m_14 = t;
t = (ATerm) ATmakeAppl(sym__2, m_14, (ATerm) ATinsert(ATempty, term49));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail23 ;
{
ATerm trm55 = t;
ATerm l_14 = NULL;
l_14 = t;
t = term51;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label16 ;
j_14 = t;
t = l_14;
{
ATerm o_14 = NULL,q_14 = NULL,p_14 = NULL,r_14 = NULL;
q_14 = t;
t = j_14;
t = dirname_0_0(sl, t);
if((t == NULL))
goto fail23 ;
o_14 = t;
t = q_14;
r_14 = t;
p_14 = t;
{
ATerm trm56;
trm56 = CheckATermList(p_14);
if((trm56 == NULL))
goto fail23 ;
t = (ATerm) ATinsert((ATermList)trm56, (ATerm) ATmakeAppl(sym_IncludeDir_1, o_14));
goto label15 ;
}
}
label16 :
t = trm55;
{
ATerm s_14 = NULL,t_14 = NULL;
t_14 = t;
s_14 = t;
{
ATerm trm57;
trm57 = CheckATermList(s_14);
if((trm57 == NULL))
goto fail23 ;
t = (ATerm) ATinsert((ATermList)trm57, term55);
goto label15 ;
}
}
label15 :
;
v_14 = t;
u_14 = t;
t = (ATerm) ATmakeAppl(sym__2, term45, u_14);
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail23 ;
t = k_14;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm53 = t;
if(match_cons(t, sym_IncludeDef_1))
{
ATerm trm54 = ATgetArgument(t, 0);
}
else
goto label14 ;
t = process_Idef_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
else
goto label13 ;
label14 :
t = trm53;
goto label13 ;
label13 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_from_def_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_from_def_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_133 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(e_133);
struct str_closure f_133 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(f_133);
struct str_closure g_133 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(g_133);
t = ArgOption_3_0(sl, lifted8_cl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_13 = NULL,w_13 = NULL,i_14 = NULL;
v_13 = t;
i_14 = t;
w_13 = t;
t = (ATerm) ATmakeAppl(sym__2, term45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IncludeDef_1, w_13)));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = v_13;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-Idef", 0, ATtrue))))
goto fail20 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm OutputFormatOption_0_1 (StrSL sl, ATerm i_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "OutputFormatOption_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, i_13);
{
struct str_closure b_133 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(b_133);
struct str_closure c_133 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(c_133);
struct str_closure d_133 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(d_133);
t = ArgOption_3_0(sl, lifted5_cl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_13 = NULL,u_13 = NULL;
u_13 = t;
if((sl_readvar(0, sl) == NULL))
goto fail18 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term35, sl_readvar(0, sl));
}
t = separate_by_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
t_13 = t;
t = u_13;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term41), t_13), term43);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_13 = NULL;
j_13 = t;
{
ATerm trm50 = t;
ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
k_13 = t;
m_13 = t;
l_13 = t;
if((sl_readvar(0, sl) == NULL))
goto label10 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, l_13, sl_readvar(0, sl));
}
t = elem_0_0(sl_up(sl), t);
if((t == NULL))
goto label10 ;
t = k_13;
o_13 = t;
n_13 = t;
t = (ATerm) ATmakeAppl(sym__2, term27, n_13);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label10 ;
goto label9 ;
label10 :
t = trm50;
{
ATerm p_13 = NULL,r_13 = NULL,q_13 = NULL,s_13 = NULL;
r_13 = t;
p_13 = t;
s_13 = t;
if((sl_readvar(0, sl) == NULL))
goto fail17 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term35, sl_readvar(0, sl));
}
t = separate_by_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
q_13 = t;
t = s_13;
{
ATerm trm51;
trm51 = CheckATermList(q_13);
if((trm51 == NULL))
goto fail17 ;
t = (ATerm) ATinsert(ATinsert(ATinsert((ATermList)trm51, term37), p_13), term39);
t = fatal_error_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
else
goto label9 ;
}
}
label9 :
;
t = j_13;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm49 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-of", 0, ATtrue))))
goto label8 ;
goto label7 ;
label8 :
t = trm49;
if((ATgetSymbol(t) == ATmakeSymbol("--output-format", 0, ATtrue)))
goto label7 ;
else
goto fail16 ;
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm of_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "of_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_13 = NULL,h_13 = NULL;
h_13 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term31), term33), term29);
g_13 = t;
t = h_13;
t = OutputFormatOption_0_1(sl, g_13, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm of_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "of_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm48 = t;
t = term27;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label6 ;
goto label5 ;
label6 :
t = trm48;
t = term29;
goto label5 ;
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_v_verbose_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_132 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(z_132);
t = (ATerm) ATempty;
t = if_verbose3_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term25);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglr_2_0 (StrSL sl, StrCL i_11, StrCL k_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglr_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, i_11);
sl_init_fun(1, k_11);
{
struct str_closure x_132 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(x_132);
struct str_closure y_132 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(y_132);
t = xtc_transform_2_0(sl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_11 = NULL,k_12 = NULL,h_12 = NULL,l_12 = NULL,j_12 = NULL,m_12 = NULL;
k_12 = t;
t = term17;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail10 ;
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail10 ;
l_11 = t;
t = k_12;
l_12 = t;
t = term17;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail10 ;
h_12 = t;
t = l_12;
m_12 = t;
t = term17;
t = pass_v_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail10 ;
j_12 = t;
t = m_12;
{
ATerm trm47;
trm47 = CheckATermList(j_12);
if((trm47 == NULL))
goto fail10 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm47, h_12), term19), l_11), term21), term23);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm foldr1a_1_0 (StrSL sl, StrCL z_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "foldr1a_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, z_9);
t = a_10(&(frame), t);
if((t == NULL))
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm a_10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "a_10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm43 = t;
ATerm v_9 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
v_9 = ATgetFirst((ATermList) t);
{
ATerm trm44 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm44) == AT_LIST) && ATisEmpty(trm44))))
goto label4 ;
}
}
else
goto label4 ;
t = v_9;
goto label3 ;
label4 :
t = trm43;
{
ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,b_10 = NULL,c_10 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
w_9 = ATgetFirst((ATermList) t);
{
ATerm trm45 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm45) == AT_LIST) && !(ATisEmpty(trm45))))
{
x_9 = ATgetFirst((ATermList) trm45);
y_9 = (ATerm) ATgetNext((ATermList) trm45);
}
else
goto fail7 ;
}
}
else
goto fail7 ;
c_10 = t;
t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail7 ;
b_10 = t;
t = c_10;
{
ATerm trm46;
trm46 = CheckATermList(y_9);
if((trm46 == NULL))
goto fail7 ;
t = (ATerm) ATinsert((ATermList)trm46, b_10);
t = a_10(sl, t);
if((t == NULL))
goto fail7 ;
else
goto label3 ;
}
}
label3 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_layout3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_layout3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_9 = NULL;
if(match_cons(t, sym__2))
{
c_9 = ATgetArgument(t, 0);
{
ATerm trm35 = ATgetArgument(t, 1);
if(match_cons(trm35, sym_appl_2))
{
ATerm trm36 = ATgetArgument(trm35, 0);
if(match_cons(trm36, sym_prod_3))
{
ATerm trm37 = ATgetArgument(trm36, 0);
if(!(((ATgetType(trm37) == AT_LIST) && ATisEmpty(trm37))))
goto fail5 ;
{
ATerm trm38 = ATgetArgument(trm36, 1);
if(match_cons(trm38, sym_cf_1))
{
ATerm trm39 = ATgetArgument(trm38, 0);
if(match_cons(trm39, sym_opt_1))
{
ATerm trm40 = ATgetArgument(trm39, 0);
if(!(match_cons(trm40, sym_layout_0)))
goto fail5 ;
}
else
goto fail5 ;
}
else
goto fail5 ;
}
{
ATerm trm41 = ATgetArgument(trm36, 2);
if(!(match_cons(trm41, sym_no_attrs_0)))
goto fail5 ;
}
}
else
goto fail5 ;
{
ATerm trm42 = ATgetArgument(trm35, 1);
if(!(((ATgetType(trm42) == AT_LIST) && ATisEmpty(trm42))))
goto fail5 ;
}
}
else
goto fail5 ;
}
}
else
goto fail5 ;
t = c_9;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_layout2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_layout2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_9 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm27 = ATgetArgument(t, 0);
if(match_cons(trm27, sym_appl_2))
{
ATerm trm28 = ATgetArgument(trm27, 0);
if(match_cons(trm28, sym_prod_3))
{
ATerm trm29 = ATgetArgument(trm28, 0);
if(!(((ATgetType(trm29) == AT_LIST) && ATisEmpty(trm29))))
goto fail4 ;
{
ATerm trm30 = ATgetArgument(trm28, 1);
if(match_cons(trm30, sym_cf_1))
{
ATerm trm31 = ATgetArgument(trm30, 0);
if(match_cons(trm31, sym_opt_1))
{
ATerm trm32 = ATgetArgument(trm31, 0);
if(!(match_cons(trm32, sym_layout_0)))
goto fail4 ;
}
else
goto fail4 ;
}
else
goto fail4 ;
}
{
ATerm trm33 = ATgetArgument(trm28, 2);
if(!(match_cons(trm33, sym_no_attrs_0)))
goto fail4 ;
}
}
else
goto fail4 ;
{
ATerm trm34 = ATgetArgument(trm27, 1);
if(!(((ATgetType(trm34) == AT_LIST) && ATisEmpty(trm34))))
goto fail4 ;
}
}
else
goto fail4 ;
b_9 = ATgetArgument(t, 1);
}
else
goto fail4 ;
t = b_9;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_layout1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_layout1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_8 = NULL,a_9 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm3 = ATgetArgument(t, 0);
if(match_cons(trm3, sym_appl_2))
{
ATerm trm4 = ATgetArgument(trm3, 0);
if(match_cons(trm4, sym_prod_3))
{
ATerm trm5 = ATgetArgument(trm4, 0);
if(((ATgetType(trm5) == AT_LIST) && !(ATisEmpty(trm5))))
{
ATerm trm6 = ATgetFirst((ATermList) trm5);
if(match_cons(trm6, sym_cf_1))
{
ATerm trm7 = ATgetArgument(trm6, 0);
if(!(match_cons(trm7, sym_layout_0)))
goto fail3 ;
}
else
goto fail3 ;
{
ATerm trm8 = (ATerm) ATgetNext((ATermList) trm5);
if(!(((ATgetType(trm8) == AT_LIST) && ATisEmpty(trm8))))
goto fail3 ;
}
}
else
goto fail3 ;
{
ATerm trm9 = ATgetArgument(trm4, 1);
if(match_cons(trm9, sym_cf_1))
{
ATerm trm10 = ATgetArgument(trm9, 0);
if(match_cons(trm10, sym_opt_1))
{
ATerm trm11 = ATgetArgument(trm10, 0);
if(!(match_cons(trm11, sym_layout_0)))
goto fail3 ;
}
else
goto fail3 ;
}
else
goto fail3 ;
}
{
ATerm trm12 = ATgetArgument(trm4, 2);
if(!(match_cons(trm12, sym_no_attrs_0)))
goto fail3 ;
}
}
else
goto fail3 ;
{
ATerm trm13 = ATgetArgument(trm3, 1);
if(((ATgetType(trm13) == AT_LIST) && !(ATisEmpty(trm13))))
{
z_8 = ATgetFirst((ATermList) trm13);
{
ATerm trm14 = (ATerm) ATgetNext((ATermList) trm13);
if(!(((ATgetType(trm14) == AT_LIST) && ATisEmpty(trm14))))
goto fail3 ;
}
}
else
goto fail3 ;
}
}
else
goto fail3 ;
{
ATerm trm15 = ATgetArgument(t, 1);
if(match_cons(trm15, sym_appl_2))
{
ATerm trm16 = ATgetArgument(trm15, 0);
if(match_cons(trm16, sym_prod_3))
{
ATerm trm17 = ATgetArgument(trm16, 0);
if(((ATgetType(trm17) == AT_LIST) && !(ATisEmpty(trm17))))
{
ATerm trm18 = ATgetFirst((ATermList) trm17);
if(match_cons(trm18, sym_cf_1))
{
ATerm trm19 = ATgetArgument(trm18, 0);
if(!(match_cons(trm19, sym_layout_0)))
goto fail3 ;
}
else
goto fail3 ;
{
ATerm trm20 = (ATerm) ATgetNext((ATermList) trm17);
if(!(((ATgetType(trm20) == AT_LIST) && ATisEmpty(trm20))))
goto fail3 ;
}
}
else
goto fail3 ;
{
ATerm trm21 = ATgetArgument(trm16, 1);
if(match_cons(trm21, sym_cf_1))
{
ATerm trm22 = ATgetArgument(trm21, 0);
if(match_cons(trm22, sym_opt_1))
{
ATerm trm23 = ATgetArgument(trm22, 0);
if(!(match_cons(trm23, sym_layout_0)))
goto fail3 ;
}
else
goto fail3 ;
}
else
goto fail3 ;
}
{
ATerm trm24 = ATgetArgument(trm16, 2);
if(!(match_cons(trm24, sym_no_attrs_0)))
goto fail3 ;
}
}
else
goto fail3 ;
{
ATerm trm25 = ATgetArgument(trm15, 1);
if(((ATgetType(trm25) == AT_LIST) && !(ATisEmpty(trm25))))
{
a_9 = ATgetFirst((ATermList) trm25);
{
ATerm trm26 = (ATerm) ATgetNext((ATermList) trm25);
if(!(((ATgetType(trm26) == AT_LIST) && ATisEmpty(trm26))))
goto fail3 ;
}
}
else
goto fail3 ;
}
}
else
goto fail3 ;
}
}
else
goto fail3 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term3), term7, term9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term3), term3), term3, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term13))), (ATerm) ATinsert(ATinsert(ATempty, a_9), z_8))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm yield_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "yield_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure w_132 = { &(n_8) , &(frame) };
StrCL n_8_cl = &(w_132);
sl_init_fun(0, n_8_cl);
t = n_8(&(frame), t);
if((t == NULL))
goto fail0 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm n_8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "n_8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm j_8 = NULL,k_8 = NULL;
struct str_closure u_132 = { &(_Id) , sl_up(sl) };
StrCL lifted0_cl = &(u_132);
struct str_closure v_132 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(v_132);
t = appl_2_0(sl_up(sl), lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto label1 ;
if(match_cons(t, sym_appl_2))
{
j_8 = ATgetArgument(t, 0);
k_8 = ATgetArgument(t, 1);
}
else
goto label1 ;
t = k_8;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm l_8 = NULL;
if(match_cons(t, sym_flatlex_2))
{
ATerm trm2 = ATgetArgument(t, 0);
l_8 = ATgetArgument(t, 1);
}
else
goto label2 ;
t = l_8;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
ATerm m_8 = NULL;
m_8 = t;
t = (ATerm) ATinsert(ATempty, m_8);
goto label0 ;
}
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = map_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail2 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 173));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(elem_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("elem_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unzip_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unzip_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Snd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Snd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_om_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_om_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(graph_nodes_undef_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("graph_nodes_undef_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(oncetd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("oncetd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guarantee_extension_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guarantee_extension_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(base_filename_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("base_filename_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dirname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dirname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fopen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fopen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fprintnl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fprintnl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(extend_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("extend_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose3_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose3_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose2_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose2_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(isdir_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("isdir_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filemode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filemode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(file_exists_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_exists_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_loc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_loc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bagof_ImportedFrom_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bagof_ImportedFrom_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SourcePathName_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SourcePathName_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(appl_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("appl_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parsetree_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parsetree_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_modules_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_modules_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(b_21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("b_21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ConcatModules_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ConcatModules_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(module_to_module_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("module_to_module_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_module_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_module_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(skip_non_imports_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("skip_non_imports_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_sdf_imports_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_sdf_imports_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(y_19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("y_19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_lex_yield_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_lex_yield_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(x_19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("x_19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(w_19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("w_19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_module_name_from_asfix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_module_name_from_asfix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(check_module_name_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("check_module_name_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_sdf2_module_to_asfix_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_sdf2_module_to_asfix_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_sdf2_module_to_asfix_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_sdf2_module_to_asfix_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_sdf2_module_to_asfix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_sdf2_module_to_asfix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_source_pathname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_source_pathname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(register_source_pathname_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("register_source_pathname_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(include_from_def_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_from_def_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_from_xtc_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_from_xtc_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_from_dir_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_from_dir_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_pathname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_pathname_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pack_sdf_parse_sdf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pack_sdf_parse_sdf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(report_module_not_found_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("report_module_not_found_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pack_sdf_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pack_sdf_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_pack_sdf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_pack_sdf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_dep_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_dep_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(depfile_from_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("depfile_from_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_path_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_path_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dep_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dep_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ensure_directory_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ensure_directory_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_from_dir_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_from_dir_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(process_Idef_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("process_Idef_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(process_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("process_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_from_def_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_from_def_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(OutputFormatOption_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("OutputFormatOption_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(of_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("of_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(of_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("of_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_v_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_v_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglr_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglr_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(a_10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("a_10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(foldr1a_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldr1a_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_layout3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_layout3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_layout2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_layout2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_layout1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_layout1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(n_8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("n_8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(yield_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("yield_0_0", 0, ATtrue)), &(closures[closures_index]));
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
