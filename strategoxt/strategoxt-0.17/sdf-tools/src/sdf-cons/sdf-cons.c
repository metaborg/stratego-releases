#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_lexical_syntax_1;
static Symbol sym_label_2;
static Symbol sym_definition_1;
static Symbol sym_empty_0;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_opt_1;
static Symbol sym_alt_2;
static Symbol sym_seq_2;
static Symbol sym_sort_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_func_2;
static Symbol sym_layout_0;
static Symbol sym_cons_1;
static Symbol sym_term_1;
static Symbol sym_bracket_0;
static Symbol sym_reject_0;
static Symbol sym_no_attrs_0;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_lit_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_lexical_syntax_1 = ATmakeSymbol("lexical-syntax", 1, ATfalse);
ATprotectSymbol(sym_lexical_syntax_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_definition_1 = ATmakeSymbol("definition", 1, ATfalse);
ATprotectSymbol(sym_definition_1);
sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
ATprotectSymbol(sym_empty_0);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_sep_2);
sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_star_sep_2);
sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
ATprotectSymbol(sym_func_2);
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
ATprotectSymbol(sym_bracket_0);
sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
ATprotectSymbol(sym_reject_0);
sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
ATprotectSymbol(sym_no_attrs_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeInt(34);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("--modular", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("yes", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym__2, term127, term129);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("--modular      unique names per module", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym__2, term123, term129);
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections   do not generate constructors for injections", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("prods", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(sym_no_attrs_0);
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeInt(1);
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-cons -- usage:", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("This program adds constructor names to productions of an SDF grammar.", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm Cons_2_0 (StrSL sl, StrCL s_82, StrCL u_82, ATerm t);
ATerm _2_0 (StrSL sl, StrCL i_74, StrCL k_74, ATerm t);
ATerm table_push_0_0 (StrSL sl, ATerm t);
ATerm table_getlist_0_0 (StrSL sl, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm table_create_0_0 (StrSL sl, ATerm t);
ATerm thread_map_1_0 (StrSL sl, StrCL p_64, ATerm t);
ATerm separate_by_1_0 (StrSL sl, StrCL s_63, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm at_last_1_0 (StrSL sl, StrCL g_63, ATerm t);
ATerm at_suffix_1_0 (StrSL sl, StrCL e_63, ATerm t);
ATerm at_end_1_0 (StrSL sl, StrCL d_63, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL p_62, ATerm t);
ATerm Hd_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL v_61, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL x_43, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL v_42, ATerm t);
ATerm alltd_1_0 (StrSL sl, StrCL h_37, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL b_37, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm is_subterm_0_0 (StrSL sl, ATerm t);
ATerm is_num_0_0 (StrSL sl, ATerm t);
ATerm is_alpha_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm unescape_0_0 (StrSL sl, ATerm t);
ATerm escape_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL n_30, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm new_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_4_0 (StrSL sl, StrCL a_28, StrCL b_28, StrCL c_28, StrCL d_28, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL v_25, StrCL w_25, StrCL x_25, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL t_25, StrCL u_25, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL n_16, StrCL o_16, ATerm t);
ATerm iter_sep_2_0 (StrSL sl, StrCL e_16, StrCL f_16, ATerm t);
ATerm iter_star_sep_2_0 (StrSL sl, StrCL c_16, StrCL d_16, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL j_15, StrCL k_15, StrCL l_15, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm prime_constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
ATerm prime_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
ATerm uniquify_constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
ATerm replace_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
ATerm add_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm uniquify_prods_0_0 (StrSL sl, ATerm t);
ATerm uniquify_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm sdf_cons_0_0 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
ATerm sdf_cons_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm uq2q_0_0 (StrSL sl, ATerm t);
ATerm add_attributes_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm is_reject_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm is_bracket_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
ATerm get_constr_0_0 (StrSL sl, ATerm t);
static ATerm q_12 (StrSL sl, ATerm t);
ATerm syntaxless_sort_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm is_injection_0_0 (StrSL sl, ATerm t);
ATerm string_Hd_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm strs2constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm mk_constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm prodcons_0_0 (StrSL sl, ATerm t);
static ATerm x_10 (StrSL sl, ATerm t);
ATerm list_ana_1_0 (StrSL sl, StrCL w_10, ATerm t);
ATerm toAlphaNumFancy_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm q_6 (StrSL sl, ATerm t);
ATerm Sym2Strs_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm lit2str_0_0 (StrSL sl, ATerm t);
ATerm lits2strs_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm sym2strs_0_0 (StrSL sl, ATerm t);
ATerm syms2strs_0_0 (StrSL sl, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL n_16, StrCL o_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alt_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_95 = NULL,c_95 = NULL,d_95 = NULL,h_95 = NULL,i_95 = NULL;
ATerm trm119;
trm119 = (ATerm) ATgetAnnotations(t);
if((trm119 == NULL))
trm119 = (ATerm) ATempty;
if(match_cons(t, sym_alt_2))
{
c_95 = ATgetArgument(t, 0);
d_95 = ATgetArgument(t, 1);
}
else
goto fail80 ;
g_95 = trm119;
t = c_95;
t = cl_fun(n_16)(cl_sl(n_16), t);
if((t == NULL))
goto fail80 ;
h_95 = t;
t = d_95;
t = cl_fun(o_16)(cl_sl(o_16), t);
if((t == NULL))
goto fail80 ;
i_95 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_alt_2, h_95, i_95), g_95);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_sep_2_0 (StrSL sl, StrCL e_16, StrCL f_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_94 = NULL,c_94 = NULL,d_94 = NULL,f_94 = NULL,g_94 = NULL;
ATerm trm118;
trm118 = (ATerm) ATgetAnnotations(t);
if((trm118 == NULL))
trm118 = (ATerm) ATempty;
if(match_cons(t, sym_iter_sep_2))
{
c_94 = ATgetArgument(t, 0);
d_94 = ATgetArgument(t, 1);
}
else
goto fail79 ;
e_94 = trm118;
t = c_94;
t = cl_fun(e_16)(cl_sl(e_16), t);
if((t == NULL))
goto fail79 ;
f_94 = t;
t = d_94;
t = cl_fun(f_16)(cl_sl(f_16), t);
if((t == NULL))
goto fail79 ;
g_94 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, f_94, g_94), e_94);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_sep_2_0 (StrSL sl, StrCL c_16, StrCL d_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_93 = NULL,x_93 = NULL,y_93 = NULL,a_94 = NULL,b_94 = NULL;
ATerm trm117;
trm117 = (ATerm) ATgetAnnotations(t);
if((trm117 == NULL))
trm117 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_sep_2))
{
x_93 = ATgetArgument(t, 0);
y_93 = ATgetArgument(t, 1);
}
else
goto fail78 ;
z_93 = trm117;
t = x_93;
t = cl_fun(c_16)(cl_sl(c_16), t);
if((t == NULL))
goto fail78 ;
a_94 = t;
t = y_93;
t = cl_fun(d_16)(cl_sl(d_16), t);
if((t == NULL))
goto fail78 ;
b_94 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, a_94, b_94), z_93);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
ATerm prod_3_0 (StrSL sl, StrCL j_15, StrCL k_15, StrCL l_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL;
ATerm trm116;
trm116 = (ATerm) ATgetAnnotations(t);
if((trm116 == NULL))
trm116 = (ATerm) ATempty;
if(match_cons(t, sym_prod_3))
{
t_91 = ATgetArgument(t, 0);
u_91 = ATgetArgument(t, 1);
v_91 = ATgetArgument(t, 2);
}
else
goto fail77 ;
w_91 = trm116;
t = t_91;
t = cl_fun(j_15)(cl_sl(j_15), t);
if((t == NULL))
goto fail77 ;
x_91 = t;
t = u_91;
t = cl_fun(k_15)(cl_sl(k_15), t);
if((t == NULL))
goto fail77 ;
y_91 = t;
t = v_91;
t = cl_fun(l_15)(cl_sl(l_15), t);
if((t == NULL))
goto fail77 ;
z_91 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, x_91, y_91, z_91), w_91);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_112 = { &(sdf_cons_options_0_0) , sl };
StrCL lifted64_cl = &(s_112);
struct str_closure t_112 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(t_112);
struct str_closure u_112 = { &(system_about_0_0) , sl };
StrCL lifted68_cl = &(u_112);
struct str_closure v_112 = { &(sdf_cons_0_0) , sl };
StrCL lifted69_cl = &(v_112);
t = io_wrap_4_0(sl, lifted64_cl, lifted65_cl, lifted68_cl, lifted69_cl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_112 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(q_112);
struct str_closure r_112 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(r_112);
t = default_system_usage_2_0(sl_up(sl), lifted66_cl, lifted67_cl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term147);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term145);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
ATerm prime_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prime_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
if(match_cons(t, sym__2))
{
v_14 = ATgetArgument(t, 0);
w_14 = ATgetArgument(t, 1);
}
else
goto fail72 ;
y_14 = t;
t = w_14;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail72 ;
x_14 = t;
t = y_14;
t = (ATerm) ATmakeAppl(sym__2, v_14, x_14);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm prime_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prime_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL,s_14 = NULL,u_14 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL;
sl_init_var(0, n_14);
sl_init_var(1, n_109);
if(match_cons(t, sym__2))
{
ATerm trm114 = ATgetArgument(t, 0);
j_14 = trm114;
if(match_cons(trm114, sym_prod_3))
{
l_14 = ATgetArgument(trm114, 0);
m_14 = ATgetArgument(trm114, 1);
i_14 = ATgetArgument(trm114, 2);
}
else
goto fail69 ;
k_14 = ATgetArgument(t, 1);
}
else
goto fail69 ;
o_14 = t;
q_14 = t;
t = j_14;
if(match_cons(t, sym_prod_3))
{
k_109 = ATgetArgument(t, 0);
l_109 = ATgetArgument(t, 1);
m_109 = ATgetArgument(t, 2);
}
else
goto fail69 ;
o_109 = t;
t = m_109;
{
struct str_closure o_112 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(o_112);
t = oncetd_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail69 ;
t = o_109;
if((n_109 == NULL))
goto fail69 ;
else
{
t = n_109;
}
p_14 = t;
t = q_14;
t = (ATerm) ATmakeAppl(sym__2, p_14, k_14);
t = prime_constr_0_0(sl, t);
if((t == NULL))
goto fail69 ;
if((n_14 == NULL))
{
n_14 = t;
}
else
if((n_14 != t))
goto fail69 ;
if((n_14 == NULL))
goto fail69 ;
else
{
t = (ATerm) ATmakeAppl(sym__3, term139, (ATerm)ATmakeAppl(sym_prod_3, l_14, m_14, term141), n_14);
}
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail69 ;
t = o_14;
t_14 = t;
t = i_14;
{
struct str_closure p_112 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(p_112);
t = oncetd_1_0(sl, lifted63_cl, t);
if((t == NULL))
goto fail69 ;
r_14 = t;
t = t_14;
u_14 = t;
t = (ATerm) ATmakeAppl(sym__2, k_14, term143);
t = add_0_0(sl, t);
if((t == NULL))
goto fail69 ;
s_14 = t;
t = u_14;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, l_14, m_14, r_14), s_14);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL;
ATerm trm115;
trm115 = (ATerm) ATgetAnnotations(t);
if((trm115 == NULL))
trm115 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
q_109 = ATgetArgument(t, 0);
}
else
goto fail71 ;
p_109 = trm115;
t = q_109;
if((sl_readvar(0, sl) == NULL))
goto fail71 ;
else
{
t = sl_readvar(0, sl);
}
r_109 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, r_109), p_109);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 0)))
goto fail70 ;
}
else
goto fail70 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm uniquify_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "uniquify_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_112 = { &(_Id) , sl };
StrCL lifted59_cl = &(m_112);
struct str_closure n_112 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(n_112);
t = _2_0(sl, lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto fail68 ;
{
ATerm trm112;
trm112 = (ATerm) ATgetAnnotations(t);
if((trm112 == NULL))
trm112 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
c_14 = ATgetFirst((ATermList) t);
d_14 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail68 ;
g_14 = trm112;
t = c_14;
e_14 = t;
t = d_14;
h_14 = t;
t = (ATerm) ATmakeAppl(sym__2, h_14, term143);
{
struct str_closure l_112 = { &(prime_prod_0_0) , sl_up(sl) };
StrCL lifted61_cl = &(l_112);
t = thread_map_1_0(sl_up(sl), lifted61_cl, t);
if((t == NULL))
goto fail68 ;
t = Fst_0_0(sl_up(sl), t);
if((t == NULL))
goto fail68 ;
f_14 = t;
{
ATerm trm113;
trm113 = CheckATermList(f_14);
if((trm113 == NULL))
goto fail68 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm113, e_14), g_14);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm replace_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "replace_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm a_14 = NULL,b_14 = NULL;
sl_init_var(0, a_14);
sl_init_var(1, b_14);
{
struct str_closure i_112 = { &(_Id) , sl };
StrCL lifted55_cl = &(i_112);
struct str_closure j_112 = { &(_Id) , sl };
StrCL lifted56_cl = &(j_112);
struct str_closure k_112 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(k_112);
if(match_cons(t, sym_prod_3))
{
if((a_14 == NULL))
{
a_14 = ATgetArgument(t, 0);
}
else
if((a_14 != ATgetArgument(t, 0)))
goto fail64 ;
if((b_14 == NULL))
{
b_14 = ATgetArgument(t, 1);
}
else
if((b_14 != ATgetArgument(t, 1)))
goto fail64 ;
{
ATerm trm111 = ATgetArgument(t, 2);
}
}
else
goto fail64 ;
t = prod_3_0(sl, lifted55_cl, lifted56_cl, lifted57_cl, t);
if((t == NULL))
goto fail64 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_112 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(h_112);
t = oncetd_1_0(sl_up(sl), lifted58_cl, t);
if((t == NULL))
goto fail65 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL;
ATerm trm110;
trm110 = (ATerm) ATgetAnnotations(t);
if((trm110 == NULL))
trm110 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
h_109 = ATgetArgument(t, 0);
}
else
goto fail66 ;
g_109 = trm110;
t = h_109;
if(((sl_readvar(0, sl_up(sl)) == NULL) || (sl_readvar(1, sl_up(sl)) == NULL)))
goto fail66 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term139, (ATerm) ATmakeAppl(sym_prod_3, sl_readvar(0, sl_up(sl)), sl_readvar(1, sl_up(sl)), term141));
}
t = table_get_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail66 ;
i_109 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, i_109), g_109);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
sl_init_var(0, e_109);
z_13 = t;
y_13 = t;
if(match_cons(t, sym_prod_3))
{
b_109 = ATgetArgument(t, 0);
c_109 = ATgetArgument(t, 1);
d_109 = ATgetArgument(t, 2);
}
else
goto fail62 ;
f_109 = t;
t = d_109;
{
struct str_closure g_112 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(g_112);
t = oncetd_1_0(sl, lifted54_cl, t);
if((t == NULL))
goto fail62 ;
t = f_109;
if((e_109 == NULL))
goto fail62 ;
else
{
t = e_109;
}
x_13 = t;
t = (ATerm) ATmakeAppl(sym__3, term139, x_13, y_13);
t = table_push_0_0(sl, t);
if((t == NULL))
goto fail62 ;
t = z_13;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail63 ;
}
else
goto fail63 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm uniquify_prods_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "uniquify_prods_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_13 = NULL;
struct str_closure y_111 = { &(uniquify_constr_0_0) , sl };
StrCL lifted53_cl = &(y_111);
struct str_closure d_112 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(d_112);
t = collect_1_0(sl, lifted47_cl, t);
if((t == NULL))
goto fail59 ;
w_13 = t;
t = term139;
t = table_create_0_0(sl, t);
if((t == NULL))
goto fail59 ;
t = w_13;
{
struct str_closure f_112 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(f_112);
t = map_1_0(sl, lifted51_cl, t);
if((t == NULL))
goto fail59 ;
t = term139;
t = table_getlist_0_0(sl, t);
if((t == NULL))
goto fail59 ;
t = map_1_0(sl, lifted53_cl, t);
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
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_112 = { &(add_prod_0_0) , sl_up(sl) };
StrCL lifted52_cl = &(e_112);
t = try_1_0(sl_up(sl), lifted52_cl, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_111 = { &(_Id) , sl_up(sl) };
StrCL lifted48_cl = &(z_111);
struct str_closure b_112 = { &(_Id) , sl_up(sl) };
StrCL lifted49_cl = &(b_112);
struct str_closure c_112 = { &(_Id) , sl_up(sl) };
StrCL lifted50_cl = &(c_112);
t = prod_3_0(sl_up(sl), lifted48_cl, lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm uniquify_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "uniquify_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_13 = NULL;
struct str_closure x_111 = { &(replace_prod_0_0) , sl };
StrCL lifted46_cl = &(x_111);
v_13 = t;
t = uniquify_prods_0_0(sl, t);
if((t == NULL))
goto fail58 ;
t = v_13;
t = alltd_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_111 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(p_111);
t = alltd_1_0(sl, lifted38_cl, t);
if((t == NULL))
goto fail52 ;
{
struct str_closure u_111 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(u_111);
t = alltd_1_0(sl, lifted39_cl, t);
if((t == NULL))
goto fail52 ;
{
ATerm trm108 = t;
ATerm u_13 = NULL;
u_13 = t;
t = term127;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label107 ;
t = u_13;
{
ATerm p_108 = NULL,r_108 = NULL,s_108 = NULL;
ATerm trm109;
trm109 = (ATerm) ATgetAnnotations(t);
if((trm109 == NULL))
trm109 = (ATerm) ATempty;
if(match_cons(t, sym_definition_1))
{
r_108 = ATgetArgument(t, 0);
}
else
goto fail52 ;
p_108 = trm109;
t = r_108;
{
struct str_closure w_111 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(w_111);
t = map_1_0(sl, lifted44_cl, t);
if((t == NULL))
goto fail52 ;
s_108 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_definition_1, s_108), p_108);
goto label106 ;
}
}
label107 :
t = trm108;
t = uniquify_module_0_0(sl, t);
if((t == NULL))
goto fail52 ;
else
goto label106 ;
label106 :
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
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_108 = NULL;
struct str_closure v_111 = { &(replace_prod_0_0) , sl_up(sl) };
StrCL lifted45_cl = &(v_111);
u_108 = t;
t = uniquify_prods_0_0(sl_up(sl), t);
if((t == NULL))
goto fail57 ;
t = u_108;
t = alltd_1_0(sl_up(sl), lifted45_cl, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL;
ATerm trm107;
trm107 = (ATerm) ATgetAnnotations(t);
if((trm107 == NULL))
trm107 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
m_108 = ATgetArgument(t, 0);
}
else
goto fail54 ;
l_108 = trm107;
t = m_108;
{
struct str_closure q_111 = { &(un_double_quote_0_0) , sl_up(sl) };
StrCL lifted40_cl = &(q_111);
t = try_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto fail54 ;
{
struct str_closure t_111 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(t_111);
t = string_as_chars_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto fail54 ;
n_108 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, n_108), l_108);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_111 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(s_111);
t = at_suffix_1_0(sl_up(sl_up(sl)), lifted42_cl, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_111 = { &(is_num_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted43_cl = &(r_111);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted43_cl, t);
if((t == NULL))
goto fail56 ;
t = (ATerm) ATempty;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm102 = t;
ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
ATerm trm103;
trm103 = (ATerm) ATgetAnnotations(t);
if((trm103 == NULL))
trm103 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_syntax_1))
{
i_108 = ATgetArgument(t, 0);
}
else
goto label105 ;
h_108 = trm103;
t = i_108;
j_108 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_syntax_1, j_108), h_108);
goto label104 ;
label105 :
t = trm102;
if(match_cons(t, sym_prod_3))
{
ATerm trm104 = ATgetArgument(t, 0);
ATerm trm105 = ATgetArgument(t, 1);
ATerm trm106 = ATgetArgument(t, 2);
}
else
goto fail53 ;
t = prodcons_0_0(sl_up(sl), t);
if((t == NULL))
goto fail53 ;
else
goto label104 ;
label104 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_cons_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_cons_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm101 = t;
struct str_closure h_111 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(h_111);
struct str_closure i_111 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(i_111);
struct str_closure j_111 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(j_111);
t = Option_3_0(sl, lifted32_cl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto label103 ;
goto label102 ;
label103 :
t = trm101;
{
struct str_closure k_111 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(k_111);
struct str_closure l_111 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(l_111);
struct str_closure m_111 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(m_111);
t = Option_3_0(sl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail45 ;
else
goto label102 ;
}
label102 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term137;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail50 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--injections", 0, ATtrue))))
goto fail49 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail47 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--modular", 0, ATtrue))))
goto fail46 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm uq2q_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "uq2q_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_90 = NULL,j_90 = NULL,s_13 = NULL,t_13 = NULL;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail43 ;
i_90 = t;
{
ATerm trm97 = t;
t = Hd_0_0(sl, t);
if((t == NULL))
goto label99 ;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 34))))
goto label99 ;
goto fail43 ;
label99 :
t = trm97;
goto label98 ;
label98 :
;
t = i_90;
j_90 = t;
{
ATerm trm98 = t;
struct str_closure f_111 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(f_111);
t = at_last_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto label101 ;
goto fail43 ;
label101 :
t = trm98;
goto label100 ;
label100 :
;
t = j_90;
t_13 = t;
s_13 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term125)), s_13), (ATerm) ATinsert(ATempty, term125));
t = concat_0_0(sl, t);
if((t == NULL))
goto fail43 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail43 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm99 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm99) == AT_INT) && (ATgetInt((ATermInt) trm99) == 34))))
goto fail44 ;
{
ATerm trm100 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm100) == AT_LIST) && ATisEmpty(trm100))))
goto fail44 ;
}
}
else
goto fail44 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_attributes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_attributes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm92 = t;
ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm93 = ATgetArgument(t, 0);
if(match_cons(trm93, sym_prod_3))
{
p_13 = ATgetArgument(trm93, 0);
q_13 = ATgetArgument(trm93, 1);
{
ATerm trm94 = ATgetArgument(trm93, 2);
if(!(match_cons(trm94, sym_no_attrs_0)))
goto label97 ;
}
}
else
goto label97 ;
r_13 = ATgetArgument(t, 1);
}
else
goto label97 ;
t = (ATerm) ATmakeAppl(sym_prod_3, p_13, q_13, (ATerm) ATmakeAppl(sym_attrs_1, r_13));
goto label96 ;
label97 :
t = trm92;
{
ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm95 = ATgetArgument(t, 0);
if(match_cons(trm95, sym_prod_3))
{
j_13 = ATgetArgument(trm95, 0);
k_13 = ATgetArgument(trm95, 1);
{
ATerm trm96 = ATgetArgument(trm95, 2);
if(match_cons(trm96, sym_attrs_1))
{
l_13 = ATgetArgument(trm96, 0);
}
else
goto fail42 ;
}
}
else
goto fail42 ;
m_13 = ATgetArgument(t, 1);
}
else
goto fail42 ;
o_13 = t;
t = (ATerm) ATmakeAppl(sym__2, l_13, m_13);
t = conc_0_0(sl, t);
if((t == NULL))
goto fail42 ;
n_13 = t;
t = o_13;
t = (ATerm) ATmakeAppl(sym_prod_3, j_13, k_13, (ATerm) ATmakeAppl(sym_attrs_1, n_13));
goto label96 ;
}
label96 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_reject_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_reject_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
if(match_cons(t, sym_prod_3))
{
f_13 = ATgetArgument(t, 0);
g_13 = ATgetArgument(t, 1);
h_13 = ATgetArgument(t, 2);
}
else
goto fail40 ;
i_13 = t;
t = h_13;
{
struct str_closure e_111 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(e_111);
t = oncetd_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail40 ;
t = i_13;
t = term93;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_reject_0)))
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_bracket_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_bracket_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
if(match_cons(t, sym_prod_3))
{
b_13 = ATgetArgument(t, 0);
c_13 = ATgetArgument(t, 1);
d_13 = ATgetArgument(t, 2);
}
else
goto fail38 ;
e_13 = t;
t = d_13;
{
struct str_closure b_111 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(b_111);
t = oncetd_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail38 ;
t = e_13;
t = term93;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail39 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
sl_init_var(0, u_12);
if(match_cons(t, sym_prod_3))
{
r_12 = ATgetArgument(t, 0);
s_12 = ATgetArgument(t, 1);
t_12 = ATgetArgument(t, 2);
}
else
goto fail36 ;
v_12 = t;
t = t_12;
{
struct str_closure a_111 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(a_111);
t = oncetd_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail36 ;
t = v_12;
if((u_12 == NULL))
goto fail36 ;
else
{
t = u_12;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail37 ;
}
else
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm syntaxless_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syntaxless_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure z_110 = { &(q_12) , &(frame) };
StrCL q_12_cl = &(z_110);
sl_init_fun(0, q_12_cl);
t = q_12(&(frame), t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm q_12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "q_12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm82 = t;
ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL;
ATerm trm83;
trm83 = (ATerm) ATgetAnnotations(t);
if((trm83 == NULL))
trm83 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
q_107 = ATgetArgument(t, 0);
}
else
goto label90 ;
p_107 = trm83;
t = q_107;
r_107 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, r_107), p_107);
goto label89 ;
label90 :
t = trm82;
{
ATerm trm84 = t;
t = alt_2_0(sl_up(sl), sl_fun_cl(0, sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label91 ;
goto label89 ;
label91 :
t = trm84;
{
ATerm trm85 = t;
ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL;
ATerm trm86;
trm86 = (ATerm) ATgetAnnotations(t);
if((trm86 == NULL))
trm86 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
u_107 = ATgetArgument(t, 0);
}
else
goto label92 ;
t_107 = trm86;
t = u_107;
t = q_12(sl, t);
if((t == NULL))
goto label92 ;
v_107 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, v_107), t_107);
goto label89 ;
label92 :
t = trm85;
{
ATerm trm87 = t;
ATerm x_107 = NULL,y_107 = NULL,b_108 = NULL;
ATerm trm88;
trm88 = (ATerm) ATgetAnnotations(t);
if((trm88 == NULL))
trm88 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
y_107 = ATgetArgument(t, 0);
}
else
goto label93 ;
x_107 = trm88;
t = y_107;
t = q_12(sl, t);
if((t == NULL))
goto label93 ;
b_108 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, b_108), x_107);
goto label89 ;
label93 :
t = trm87;
{
ATerm trm89 = t;
ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
ATerm trm90;
trm90 = (ATerm) ATgetAnnotations(t);
if((trm90 == NULL))
trm90 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
e_108 = ATgetArgument(t, 0);
}
else
goto label94 ;
d_108 = trm90;
t = e_108;
t = q_12(sl, t);
if((t == NULL))
goto label94 ;
f_108 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, f_108), d_108);
goto label89 ;
label94 :
t = trm89;
{
ATerm trm91 = t;
struct str_closure x_110 = { &(_Id) , sl_up(sl) };
StrCL lifted26_cl = &(x_110);
t = iter_sep_2_0(sl_up(sl), sl_fun_cl(0, sl), lifted26_cl, t);
if((t == NULL))
goto label95 ;
goto label89 ;
label95 :
t = trm91;
{
struct str_closure y_110 = { &(_Id) , sl_up(sl) };
StrCL lifted27_cl = &(y_110);
t = iter_star_sep_2_0(sl_up(sl), sl_fun_cl(0, sl), lifted27_cl, t);
if((t == NULL))
goto fail35 ;
else
goto label89 ;
}
}
}
}
}
}
label89 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_injection_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_injection_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_12 = NULL;
struct str_closure u_110 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(u_110);
struct str_closure v_110 = { &(_Id) , sl };
StrCL lifted24_cl = &(v_110);
struct str_closure w_110 = { &(_Id) , sl };
StrCL lifted25_cl = &(w_110);
t = prod_3_0(sl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail32 ;
p_12 = t;
t = term123;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail32 ;
t = p_12;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
ATerm trm80;
trm80 = (ATerm) ATgetAnnotations(t);
if((trm80 == NULL))
trm80 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
k_12 = ATgetFirst((ATermList) t);
l_12 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail33 ;
o_12 = trm80;
t = k_12;
t = syntaxless_sort_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
m_12 = t;
t = l_12;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail33 ;
n_12 = t;
{
ATerm trm81;
trm81 = CheckATermList(n_12);
if((trm81 == NULL))
goto fail33 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm81, m_12), o_12);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_Hd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_Hd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail31 ;
t = Hd_0_0(sl, t);
if((t == NULL))
goto fail31 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm strs2constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strs2constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_12 = NULL;
struct str_closure q_110 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(q_110);
t = filter_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail27 ;
{
struct str_closure r_110 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(r_110);
struct str_closure s_110 = { &(_Id) , sl };
StrCL lifted21_cl = &(s_110);
t = Cons_2_0(sl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail27 ;
{
struct str_closure t_110 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(t_110);
t = separate_by_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto fail27 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail27 ;
i_12 = t;
t = (ATerm) ATmakeAppl(sym__2, i_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term97), term99), term101), term103), term105), term107), term109), term111), term113), term115), term117), term119), term121));
{
ATerm trm79 = t;
t = is_subterm_0_0(sl, t);
if((t == NULL))
goto label88 ;
goto fail27 ;
label88 :
t = trm79;
goto label87 ;
label87 :
;
t = i_12;
t = escape_0_0(sl, t);
if((t == NULL))
goto fail27 ;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto fail27 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_90 = NULL;
g_90 = t;
t = string_Hd_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
t = is_alpha_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
t = g_90;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm78 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label86 ;
goto fail28 ;
label86 :
t = trm78;
goto label85 ;
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm mk_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "mk_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm70 = t;
ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm71 = ATgetArgument(t, 0);
if(!(((ATgetType(trm71) == AT_LIST) && ATisEmpty(trm71))))
goto label78 ;
v_11 = ATgetArgument(t, 1);
{
ATerm trm72 = ATgetArgument(t, 2);
}
}
else
goto label78 ;
x_11 = t;
z_11 = t;
t = (ATerm) ATinsert(ATempty, v_11);
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto label78 ;
y_11 = t;
t = z_11;
t = (ATerm) ATmakeAppl(sym__2, y_11, (ATerm) ATinsert(ATempty, term91));
t = conc_0_0(sl, t);
if((t == NULL))
goto label78 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label78 ;
w_11 = t;
t = x_11;
t = w_11;
goto label77 ;
label78 :
t = trm70;
{
ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
if(match_cons(t, sym_prod_3))
{
j_11 = ATgetArgument(t, 0);
k_11 = ATgetArgument(t, 1);
{
ATerm trm73 = ATgetArgument(t, 2);
}
}
else
goto fail25 ;
m_11 = t;
{
ATerm trm74 = t;
t = j_11;
{
struct str_closure o_110 = { &(lit2str_0_0) , sl };
StrCL lifted17_cl = &(o_110);
t = filter_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto label80 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label80 ;
l_11 = t;
}
goto label79 ;
label80 :
t = trm74;
{
ATerm trm75 = t;
ATerm n_11 = NULL,p_11 = NULL,o_11 = NULL,q_11 = NULL,e_107 = NULL;
p_11 = t;
t = (ATerm) ATinsert(ATempty, k_11);
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto label81 ;
n_11 = t;
t = p_11;
q_11 = t;
t = j_11;
t = lits2strs_0_0(sl, t);
if((t == NULL))
goto label81 ;
e_107 = t;
{
struct str_closure p_110 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(p_110);
t = filter_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto label81 ;
t = Hd_0_0(sl, t);
if((t == NULL))
goto label81 ;
t = e_107;
o_11 = t;
t = q_11;
t = (ATerm) ATmakeAppl(sym__2, n_11, o_11);
t = conc_0_0(sl, t);
if((t == NULL))
goto label81 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label81 ;
l_11 = t;
}
goto label79 ;
label81 :
t = trm75;
{
ATerm trm77 = t;
t = j_11;
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto label84 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label84 ;
l_11 = t;
goto label79 ;
label84 :
t = trm77;
{
ATerm r_11 = NULL,t_11 = NULL,s_11 = NULL,u_11 = NULL;
t_11 = t;
t = (ATerm) ATinsert(ATempty, k_11);
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto fail25 ;
r_11 = t;
t = t_11;
u_11 = t;
t = term93;
t = new_0_0(sl, t);
if((t == NULL))
goto fail25 ;
s_11 = t;
t = u_11;
t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(ATinsert(ATempty, s_11), term95));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail25 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto fail25 ;
l_11 = t;
goto label79 ;
}
}
}
label79 :
;
t = m_11;
t = l_11;
goto label77 ;
}
}
label77 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm76 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label83 ;
goto fail26 ;
label83 :
t = trm76;
goto label82 ;
label82 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm prodcons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prodcons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm64 = t;
ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL;
sl_init_var(0, h_11);
sl_init_var(1, x_106);
{
struct str_closure m_110 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(m_110);
g_11 = t;
i_11 = t;
if(match_cons(t, sym_prod_3))
{
u_106 = ATgetArgument(t, 0);
v_106 = ATgetArgument(t, 1);
w_106 = ATgetArgument(t, 2);
}
else
goto label70 ;
y_106 = t;
t = w_106;
{
struct str_closure n_110 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(n_110);
t = oncetd_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto label70 ;
t = y_106;
if((x_106 == NULL))
goto label70 ;
else
{
t = x_106;
}
if((h_11 == NULL))
{
h_11 = t;
}
else
if((h_11 != t))
goto label70 ;
t = i_11;
t = g_11;
t = oncetd_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto label70 ;
}
}
goto label69 ;
label70 :
t = trm64;
{
ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
c_11 = t;
d_11 = t;
{
ATerm trm66 = t;
ATerm trm67 = t;
t = get_constr_0_0(sl, t);
if((t == NULL))
goto label74 ;
goto label73 ;
label74 :
t = trm67;
{
ATerm trm68 = t;
t = is_bracket_0_0(sl, t);
if((t == NULL))
goto label75 ;
goto label73 ;
label75 :
t = trm68;
{
ATerm trm69 = t;
t = is_reject_0_0(sl, t);
if((t == NULL))
goto label76 ;
goto label73 ;
label76 :
t = trm69;
t = is_injection_0_0(sl, t);
if((t == NULL))
goto label72 ;
else
goto label73 ;
}
}
label73 :
;
goto fail22 ;
label72 :
t = trm66;
goto label71 ;
label71 :
;
t = d_11;
f_11 = t;
t = c_11;
t = mk_constr_0_0(sl, t);
if((t == NULL))
goto fail22 ;
e_11 = t;
t = f_11;
t = (ATerm) ATmakeAppl(sym__2, c_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, e_11))));
t = add_attributes_0_0(sl, t);
if((t == NULL))
goto fail22 ;
else
goto label69 ;
}
}
label69 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 0)))
goto fail24 ;
}
else
goto fail24 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
ATerm trm65;
trm65 = (ATerm) ATgetAnnotations(t);
if((trm65 == NULL))
trm65 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
b_107 = ATgetArgument(t, 0);
}
else
goto fail23 ;
a_107 = trm65;
t = b_107;
if((sl_readvar(0, sl) == NULL))
goto fail23 ;
else
{
t = sl_readvar(0, sl);
}
t = uq2q_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
c_107 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, c_107), a_107);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_ana_1_0 (StrSL sl, StrCL w_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_ana_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, w_10);
{
struct str_closure l_110 = { &(x_10) , &(frame) };
StrCL x_10_cl = &(l_110);
sl_init_fun(1, x_10_cl);
t = x_10(&(frame), t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm x_10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "x_10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
ATerm t_106 = NULL;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label67 ;
t_106 = t;
t = (ATerm) ATinsert(ATempty, t_106);
goto label66 ;
label67 :
t = trm60;
{
ATerm trm61 = t;
ATerm v_10 = NULL;
ATerm trm62,trm63;
trm62 = SSL_get_constructor(t);
trm63 = SSL_get_arguments(t);
v_10 = trm63;
t = v_10;
t = filter_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto label68 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label68 ;
goto label66 ;
label68 :
t = trm61;
t = (ATerm) ATempty;
goto label66 ;
}
label66 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm toAlphaNumFancy_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "toAlphaNumFancy_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm22 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(",", 0, ATtrue))))
goto label28 ;
t = term19;
goto label27 ;
label28 :
t = trm22;
{
ATerm trm23 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(":", 0, ATtrue))))
goto label29 ;
t = term21;
goto label27 ;
label29 :
t = trm23;
{
ATerm trm24 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(";", 0, ATtrue))))
goto label30 ;
t = term23;
goto label27 ;
label30 :
t = trm24;
{
ATerm trm25 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("+", 0, ATtrue))))
goto label31 ;
t = term25;
goto label27 ;
label31 :
t = trm25;
{
ATerm trm26 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("++", 0, ATtrue))))
goto label32 ;
t = term27;
goto label27 ;
label32 :
t = trm26;
{
ATerm trm27 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label33 ;
t = term29;
goto label27 ;
label33 :
t = trm27;
{
ATerm trm28 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("--", 0, ATtrue))))
goto label34 ;
t = term31;
goto label27 ;
label34 :
t = trm28;
{
ATerm trm29 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("*", 0, ATtrue))))
goto label35 ;
t = term33;
goto label27 ;
label35 :
t = trm29;
{
ATerm trm30 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("/", 0, ATtrue))))
goto label36 ;
t = term35;
goto label27 ;
label36 :
t = trm30;
{
ATerm trm31 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&", 0, ATtrue))))
goto label37 ;
t = term37;
goto label27 ;
label37 :
t = trm31;
{
ATerm trm32 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&&", 0, ATtrue))))
goto label38 ;
t = term39;
goto label27 ;
label38 :
t = trm32;
{
ATerm trm33 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("!", 0, ATtrue))))
goto label39 ;
t = term41;
goto label27 ;
label39 :
t = trm33;
{
ATerm trm34 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label40 ;
t = term29;
goto label27 ;
label40 :
t = trm34;
{
ATerm trm35 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("~", 0, ATtrue))))
goto label41 ;
t = term43;
goto label27 ;
label41 :
t = trm35;
{
ATerm trm36 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("%", 0, ATtrue))))
goto label42 ;
t = term45;
goto label27 ;
label42 :
t = trm36;
{
ATerm trm37 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<<", 0, ATtrue))))
goto label43 ;
t = term47;
goto label27 ;
label43 :
t = trm37;
{
ATerm trm38 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">>", 0, ATtrue))))
goto label44 ;
t = term49;
goto label27 ;
label44 :
t = trm38;
{
ATerm trm39 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("!=", 0, ATtrue))))
goto label45 ;
t = term51;
goto label27 ;
label45 :
t = trm39;
{
ATerm trm40 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<", 0, ATtrue))))
goto label46 ;
t = term53;
goto label27 ;
label46 :
t = trm40;
{
ATerm trm41 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<=", 0, ATtrue))))
goto label47 ;
t = term55;
goto label27 ;
label47 :
t = trm41;
{
ATerm trm42 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">", 0, ATtrue))))
goto label48 ;
t = term57;
goto label27 ;
label48 :
t = trm42;
{
ATerm trm43 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">=", 0, ATtrue))))
goto label49 ;
t = term59;
goto label27 ;
label49 :
t = trm43;
{
ATerm trm44 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("|", 0, ATtrue))))
goto label50 ;
t = term61;
goto label27 ;
label50 :
t = trm44;
{
ATerm trm45 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("=", 0, ATtrue))))
goto label51 ;
t = term63;
goto label27 ;
label51 :
t = trm45;
{
ATerm trm46 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("==", 0, ATtrue))))
goto label52 ;
t = term63;
goto label27 ;
label52 :
t = trm46;
{
ATerm trm47 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("||", 0, ATtrue))))
goto label53 ;
t = term15;
goto label27 ;
label53 :
t = trm47;
{
ATerm trm48 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(":=", 0, ATtrue))))
goto label54 ;
t = term65;
goto label27 ;
label54 :
t = trm48;
{
ATerm trm49 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("->", 0, ATtrue))))
goto label55 ;
t = term67;
goto label27 ;
label55 :
t = trm49;
{
ATerm trm50 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("=>", 0, ATtrue))))
goto label56 ;
t = term69;
goto label27 ;
label56 :
t = trm50;
{
ATerm trm51 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("*=", 0, ATtrue))))
goto label57 ;
t = term71;
goto label27 ;
label57 :
t = trm51;
{
ATerm trm52 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("/=", 0, ATtrue))))
goto label58 ;
t = term73;
goto label27 ;
label58 :
t = trm52;
{
ATerm trm53 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("%=", 0, ATtrue))))
goto label59 ;
t = term75;
goto label27 ;
label59 :
t = trm53;
{
ATerm trm54 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("+=", 0, ATtrue))))
goto label60 ;
t = term77;
goto label27 ;
label60 :
t = trm54;
{
ATerm trm55 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-=", 0, ATtrue))))
goto label61 ;
t = term79;
goto label27 ;
label61 :
t = trm55;
{
ATerm trm56 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<<=", 0, ATtrue))))
goto label62 ;
t = term81;
goto label27 ;
label62 :
t = trm56;
{
ATerm trm57 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">>=", 0, ATtrue))))
goto label63 ;
t = term83;
goto label27 ;
label63 :
t = trm57;
{
ATerm trm58 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&=", 0, ATtrue))))
goto label64 ;
t = term85;
goto label27 ;
label64 :
t = trm58;
{
ATerm trm59 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("^=", 0, ATtrue))))
goto label65 ;
t = term87;
goto label27 ;
label65 :
t = trm59;
if(!((ATgetSymbol(t) == ATmakeSymbol("|=", 0, ATtrue))))
goto fail19 ;
t = term89;
goto label27 ;
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
}
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm Sym2Strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Sym2Strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure k_110 = { &(q_6) , &(frame) };
StrCL q_6_cl = &(k_110);
sl_init_fun(0, q_6_cl);
t = q_6(&(frame), t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm q_6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "q_6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
ATerm y_5 = NULL;
if(match_cons(t, sym_cf_1))
{
y_5 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = y_5;
t = q_6(sl, t);
if((t == NULL))
goto label13 ;
goto label12 ;
label13 :
t = trm6;
{
ATerm trm7 = t;
ATerm z_5 = NULL;
if(match_cons(t, sym_lex_1))
{
z_5 = ATgetArgument(t, 0);
}
else
goto label14 ;
t = z_5;
t = q_6(sl, t);
if((t == NULL))
goto label14 ;
goto label12 ;
label14 :
t = trm7;
{
ATerm trm8 = t;
if(!(match_cons(t, sym_empty_0)))
goto label15 ;
t = (ATerm) ATinsert(ATempty, term5);
goto label12 ;
label15 :
t = trm8;
{
ATerm trm9 = t;
ATerm a_6 = NULL,b_6 = NULL;
if(match_cons(t, sym_seq_2))
{
a_6 = ATgetArgument(t, 0);
b_6 = ATgetArgument(t, 1);
}
else
goto label16 ;
{
ATerm trm10;
trm10 = CheckATermList(b_6);
if((trm10 == NULL))
goto label16 ;
t = (ATerm) ATinsert((ATermList)trm10, a_6);
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label16 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label16 ;
}
goto label12 ;
label16 :
t = trm9;
{
ATerm trm11 = t;
ATerm c_6 = NULL;
struct str_closure f_110 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(f_110);
if(match_cons(t, sym_opt_1))
{
c_6 = ATgetArgument(t, 0);
}
else
goto label17 ;
t = c_6;
t = q_6(sl, t);
if((t == NULL))
goto label17 ;
t = at_end_1_0(sl_up(sl), lifted10_cl, t);
if((t == NULL))
goto label17 ;
goto label12 ;
label17 :
t = trm11;
{
ATerm trm12 = t;
ATerm d_6 = NULL;
struct str_closure g_110 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(g_110);
if(match_cons(t, sym_iter_1))
{
d_6 = ATgetArgument(t, 0);
}
else
goto label18 ;
t = d_6;
t = q_6(sl, t);
if((t == NULL))
goto label18 ;
t = at_end_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto label18 ;
goto label12 ;
label18 :
t = trm12;
{
ATerm trm13 = t;
ATerm e_6 = NULL;
struct str_closure h_110 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(h_110);
if(match_cons(t, sym_iter_star_1))
{
e_6 = ATgetArgument(t, 0);
}
else
goto label19 ;
t = e_6;
t = q_6(sl, t);
if((t == NULL))
goto label19 ;
t = at_end_1_0(sl_up(sl), lifted12_cl, t);
if((t == NULL))
goto label19 ;
goto label12 ;
label19 :
t = trm13;
{
ATerm trm14 = t;
ATerm f_6 = NULL,g_6 = NULL,r_6 = NULL,t_6 = NULL,s_6 = NULL,u_6 = NULL;
if(match_cons(t, sym_iter_sep_2))
{
f_6 = ATgetArgument(t, 0);
g_6 = ATgetArgument(t, 1);
}
else
goto label20 ;
t_6 = t;
t = f_6;
t = q_6(sl, t);
if((t == NULL))
goto label20 ;
r_6 = t;
t = t_6;
u_6 = t;
t = g_6;
t = q_6(sl, t);
if((t == NULL))
goto label20 ;
s_6 = t;
t = u_6;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term9)), s_6), r_6);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label20 ;
goto label12 ;
label20 :
t = trm14;
{
ATerm trm15 = t;
ATerm h_6 = NULL,i_6 = NULL,v_6 = NULL,x_6 = NULL,w_6 = NULL,y_6 = NULL;
if(match_cons(t, sym_iter_star_sep_2))
{
h_6 = ATgetArgument(t, 0);
i_6 = ATgetArgument(t, 1);
}
else
goto label21 ;
x_6 = t;
t = h_6;
t = q_6(sl, t);
if((t == NULL))
goto label21 ;
v_6 = t;
t = x_6;
y_6 = t;
t = i_6;
t = q_6(sl, t);
if((t == NULL))
goto label21 ;
w_6 = t;
t = y_6;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term11)), w_6), v_6);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label21 ;
goto label12 ;
label21 :
t = trm15;
{
ATerm trm16 = t;
ATerm j_6 = NULL,k_6 = NULL,z_6 = NULL,b_7 = NULL,a_7 = NULL,c_7 = NULL;
if(match_cons(t, sym_func_2))
{
j_6 = ATgetArgument(t, 0);
k_6 = ATgetArgument(t, 1);
}
else
goto label22 ;
b_7 = t;
t = j_6;
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label22 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label22 ;
z_6 = t;
t = b_7;
c_7 = t;
t = k_6;
t = q_6(sl, t);
if((t == NULL))
goto label22 ;
a_7 = t;
t = c_7;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_7), (ATerm) ATinsert(ATempty, term13)), z_6);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label22 ;
goto label12 ;
label22 :
t = trm16;
{
ATerm trm17 = t;
ATerm l_6 = NULL,m_6 = NULL,d_7 = NULL,f_7 = NULL,e_7 = NULL,g_7 = NULL;
if(match_cons(t, sym_alt_2))
{
l_6 = ATgetArgument(t, 0);
m_6 = ATgetArgument(t, 1);
}
else
goto label23 ;
f_7 = t;
t = l_6;
t = q_6(sl, t);
if((t == NULL))
goto label23 ;
d_7 = t;
t = f_7;
g_7 = t;
t = m_6;
t = q_6(sl, t);
if((t == NULL))
goto label23 ;
e_7 = t;
t = g_7;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_7), (ATerm) ATinsert(ATempty, term15)), d_7);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label23 ;
goto label12 ;
label23 :
t = trm17;
{
ATerm trm18 = t;
ATerm n_6 = NULL;
if(match_cons(t, sym_sort_1))
{
n_6 = ATgetArgument(t, 0);
}
else
goto label24 ;
t = (ATerm) ATinsert(ATempty, n_6);
goto label12 ;
label24 :
t = trm18;
{
ATerm trm19 = t;
ATerm o_6 = NULL,h_7 = NULL,i_7 = NULL;
if(match_cons(t, sym_lit_1))
{
o_6 = ATgetArgument(t, 0);
}
else
goto label25 ;
i_7 = t;
t = o_6;
{
struct str_closure i_110 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(i_110);
t = try_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto label25 ;
h_7 = t;
t = i_7;
t = (ATerm) ATinsert(ATempty, h_7);
}
goto label12 ;
label25 :
t = trm19;
{
ATerm trm20 = t;
ATerm p_6 = NULL,j_7 = NULL,k_7 = NULL;
if(match_cons(t, sym_label_2))
{
p_6 = ATgetArgument(t, 0);
{
ATerm trm21 = ATgetArgument(t, 1);
}
}
else
goto label26 ;
k_7 = t;
t = p_6;
{
struct str_closure j_110 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(j_110);
t = try_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto label26 ;
j_7 = t;
t = k_7;
t = (ATerm) ATinsert(ATempty, j_7);
}
goto label12 ;
label26 :
t = trm20;
if(!(match_cons(t, sym_layout_0)))
goto fail13 ;
t = (ATerm) ATinsert(ATempty, term17);
goto label12 ;
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
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail18 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail18 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail17 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail17 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term11);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term9);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm lit2str_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lit2str_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_110 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(a_110);
struct str_closure d_110 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(d_110);
t = list_ana_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure e_110 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(e_110);
t = separate_by_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail6 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = try_1_0(sl, lifted8_cl, t);
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
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_106 = NULL;
struct str_closure c_110 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(c_110);
if(match_cons(t, sym_lit_1))
{
o_106 = ATgetArgument(t, 0);
}
else
goto fail9 ;
t = o_106;
t = try_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
ATerm p_106 = NULL,q_106 = NULL;
p_106 = t;
q_106 = t;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
{
ATerm trm4 = t;
struct str_closure z_109 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(z_109);
t = map_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto label9 ;
goto label7 ;
label9 :
t = trm4;
goto label8 ;
label8 :
;
t = q_106;
t = term1;
}
goto label6 ;
label7 :
t = trm3;
t = toAlphaNumFancy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
else
goto label6 ;
label6 :
;
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
ATerm trm5 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm5;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45)))
goto label10 ;
else
goto fail8 ;
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm lits2strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lits2strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_109 = { &(lit2str_0_0) , sl };
StrCL lifted4_cl = &(y_109);
t = filter_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm sym2strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sym2strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_109 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(x_109);
t = Sym2Strs_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail1 ;
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
{
struct str_closure w_109 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(w_109);
t = try_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm m_106 = NULL,n_106 = NULL;
m_106 = t;
n_106 = t;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label1 ;
{
ATerm trm1 = t;
struct str_closure v_109 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(v_109);
t = map_1_0(sl_up(sl_up(sl)), lifted3_cl, t);
if((t == NULL))
goto label3 ;
goto label1 ;
label3 :
t = trm1;
goto label2 ;
label2 :
;
t = n_106;
t = term1;
}
goto label0 ;
label1 :
t = trm0;
t = toAlphaNumFancy_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
else
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm2;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45)))
goto label4 ;
else
goto fail4 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm syms2strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syms2strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_109 = { &(sym2strs_0_0) , sl };
StrCL lifted0_cl = &(u_109);
t = filter_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail0 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 126));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(Cons_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Cons_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_push_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_push_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_getlist_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_getlist_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_put_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_put_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_create_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_create_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(thread_map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("thread_map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_last_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_last_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_suffix_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_suffix_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_end_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_end_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alltd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alltd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(oncetd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("oncetd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_subterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_subterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_num_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_num_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alpha_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alpha_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alphanum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alphanum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alt_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_sep_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_sep_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_star_sep_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_star_sep_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod_3_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prime_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prime_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prime_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prime_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(uniquify_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("uniquify_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(replace_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("replace_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(uniquify_prods_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("uniquify_prods_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(uniquify_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("uniquify_module_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_cons_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_cons_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_cons_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_cons_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(uq2q_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("uq2q_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_attributes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_attributes_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_reject_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_reject_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_bracket_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_bracket_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(q_12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("q_12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syntaxless_sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syntaxless_sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_injection_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_injection_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_Hd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_Hd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strs2constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strs2constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mk_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mk_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prodcons_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prodcons_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(x_10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("x_10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_ana_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_ana_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(toAlphaNumFancy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("toAlphaNumFancy_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(q_6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("q_6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Sym2Strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Sym2Strs_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lit2str_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lit2str_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lits2strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lits2strs_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sym2strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sym2strs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syms2strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syms2strs_0_0", 0, ATtrue)), &(closures[closures_index]));
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
