#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_FILE_1;
static Symbol sym_PrettyPrintTable_1;
static Symbol sym_ParseTable_1;
static Symbol sym_Syntax_1;
static Symbol sym_Meta_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_PrettyPrintTable_1 = ATmakeSymbol("PrettyPrintTable", 1, ATfalse);
ATprotectSymbol(sym_PrettyPrintTable_1);
sym_ParseTable_1 = ATmakeSymbol("ParseTable", 1, ATfalse);
ATprotectSymbol(sym_ParseTable_1);
sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
ATprotectSymbol(sym_Syntax_1);
sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
ATprotectSymbol(sym_Meta_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("--ensugar", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("--ensugar n       ensugaring level", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("-pp", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym__2, term9, term11);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("--pretty-print | -pp        pretty-print", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("file: ", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("input-file", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATempty);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-data: ", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("TopSort", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("ParseTable", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("ds1", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("PreExplodeDesugar", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("exp", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Explode", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("ds2", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("PostExplodeDesugar", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("PrettyPrintTable", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("Syntax", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("Syntax: ", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdf", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("using pp table: ", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("get-pp-table: ", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("PrettyPrintTable: ", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("creating pp table", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("ppgen", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("find-in-includes: ", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol(".meta", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("MetaData", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("50a094e683b6f2747a520eea9bb566fe", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("Parsing with concrete syntax: ", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeInt(5);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(sym__2, term5, term119);
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeInt(1);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym__2, term123, term125);
ATprotect(&(term127));
term127 = term126;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm foldr_3_0 (StrSL sl, StrCL w_61, StrCL x_61, StrCL y_61, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL i_60, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL h_60, ATerm t);
ATerm reverse_map_1_0 (StrSL sl, StrCL d_60, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL b_60, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm x_43, ATerm y_43, ATerm z_43, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm q_43, ATerm r_43, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL m_40, ATerm t);
ATerm get_extension_0_0 (StrSL sl, ATerm t);
ATerm add_extension_0_0 (StrSL sl, ATerm t);
ATerm guarantee_extension_0_1 (StrSL sl, ATerm p_31, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL i_31, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL e_31, ATerm t);
ATerm debug_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm extend_config_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm if_keep3_1_0 (StrSL sl, StrCL f_27, ATerm t);
ATerm if_keep2_1_0 (StrSL sl, StrCL e_27, ATerm t);
ATerm if_keep1_1_0 (StrSL sl, StrCL d_27, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL r_23, StrCL s_23, StrCL t_23, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL m_23, StrCL n_23, StrCL o_23, ATerm t);
ATerm if_verbose6_1_0 (StrSL sl, StrCL r_22, ATerm t);
ATerm if_verbose5_1_0 (StrSL sl, StrCL q_22, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL o_22, ATerm t);
ATerm if_verbose2_1_0 (StrSL sl, StrCL n_22, ATerm t);
ATerm if_verbose1_1_0 (StrSL sl, StrCL m_22, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm find_in_path_0_0 (StrSL sl, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL u_17, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL y_16, StrCL z_16, ATerm t);
ATerm copy_to_1_0 (StrSL sl, StrCL s_16, ATerm t);
ATerm rename_to_1_0 (StrSL sl, StrCL r_16, ATerm t);
ATerm xtc_find_silent_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL y_15, StrCL z_15, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL x_15, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
ATerm MetaData_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
ATerm io_parse_cs_0_0 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
ATerm xtc_sglri_0_2 (StrSL sl, ATerm i_9, ATerm j_9, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
ATerm xtc_sglri_0_1 (StrSL sl, ATerm d_9, ATerm t);
ATerm meta_data_to_rule_0_0 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
ATerm merge_metas_0_0 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
ATerm read_language_binding_0_0 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
ATerm read_syn_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
ATerm read_meta_file_0_0 (StrSL sl, ATerm t);
ATerm fetch_meta_data_1_0 (StrSL sl, StrCL l_6, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
ATerm get_includes_0_0 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
ATerm find_in_includes_1_0 (StrSL sl, StrCL b_6, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
ATerm include_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm get_pp_table_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
ATerm get_syntax_definition_0_0 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
ATerm get_parse_table_0_0 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm pcs_pretty_print_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
ATerm pcs_post_explode_desugar_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm pcs_explode_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm pcs_pre_explode_desugar_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm pcs_parse_ast_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm syntax_override_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm init_language_binding_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm pcs_input_file_0_0 (StrSL sl, ATerm t);
ATerm pass_ensugar_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm pretty_print_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm ensugar_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm syntax_option_0_0 (StrSL sl, ATerm t);
ATerm MetaData_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MetaData_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
sl_init_var(0, m_15);
sl_init_var(1, n_15);
{
struct str_closure z_93 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(z_93);
if((n_15 == NULL))
{
n_15 = t;
}
else
if((n_15 != t))
goto fail119 ;
if((m_15 == NULL))
{
m_15 = t;
}
else
if((m_15 != t))
goto fail119 ;
p_15 = t;
r_15 = t;
t = term109;
q_15 = t;
t = r_15;
if((n_15 == NULL))
goto fail119 ;
else
{
t = dr_lookup_rule_0_2(sl, q_15, n_15, t);
if((t == NULL))
goto fail119 ;
}
o_15 = t;
t = p_15;
t = o_15;
t = fetch_elem_1_0(sl, lifted98_cl, t);
if((t == NULL))
goto fail119 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_89 = NULL,j_89 = NULL,o_89 = NULL,p_89 = NULL,l_89 = NULL,m_89 = NULL;
o_89 = t;
if((sl_readvar(0, sl) == NULL))
goto fail120 ;
else
{
t = sl_readvar(0, sl);
}
i_89 = t;
t = o_89;
p_89 = t;
if((sl_readvar(1, sl) == NULL))
goto fail120 ;
else
{
t = sl_readvar(1, sl);
}
j_89 = t;
t = p_89;
if(match_cons(t, sym__2))
{
ATerm trm26 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm26) == ATmakeSymbol("50a094e683b6f2747a520eea9bb566fe", 0, ATtrue))))
goto fail120 ;
l_89 = ATgetArgument(t, 1);
}
else
goto fail120 ;
m_89 = t;
t = j_89;
t = m_89;
t = l_89;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = io_parse_cs_0_0(sl, t);
if((t == NULL))
goto fail118 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
ATerm io_parse_cs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "io_parse_cs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_9 = NULL,v_9 = NULL;
struct str_closure x_93 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(x_93);
struct str_closure y_93 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(y_93);
u_9 = t;
t = term121;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail112 ;
t = u_9;
v_9 = t;
t = term127;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail112 ;
t = v_9;
t = xtc_io_wrap_2_0(sl, lifted93_cl, lifted94_cl, t);
if((t == NULL))
goto fail112 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_93 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(w_93);
t = if_verbose1_1_0(sl_up(sl), lifted95_cl, t);
if((t == NULL))
goto fail114 ;
t = pcs_input_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
t = init_language_binding_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
t = pcs_parse_ast_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
t = pcs_pre_explode_desugar_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
t = pcs_explode_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
t = pcs_post_explode_desugar_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
t = pcs_pretty_print_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_9 = NULL;
w_9 = t;
{
struct str_closure v_93 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(v_93);
t = FILE_1_0(sl_up(sl_up(sl)), lifted96_cl, t);
if((t == NULL))
goto fail115 ;
t = w_9;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_93 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(u_93);
t = debug_1_0(sl_up(sl_up(sl_up(sl))), lifted97_cl, t);
if((t == NULL))
goto fail116 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm23 = t;
t = include_options_0_0(sl_up(sl), t);
if((t == NULL))
goto label25 ;
goto label24 ;
label25 :
t = trm23;
{
ATerm trm24 = t;
t = syntax_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label26 ;
goto label24 ;
label26 :
t = trm24;
{
ATerm trm25 = t;
t = ensugar_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label27 ;
goto label24 ;
label27 :
t = trm25;
t = pretty_print_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail113 ;
else
goto label24 ;
}
}
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglri_0_2 (StrSL sl, ATerm i_9, ATerm j_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglri_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, i_9);
sl_init_var(1, j_9);
{
struct str_closure s_93 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(s_93);
struct str_closure t_93 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(t_93);
t = xtc_transform_2_0(sl, lifted91_cl, lifted92_cl, t);
if((t == NULL))
goto fail109 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_9 = NULL,m_9 = NULL,l_9 = NULL,n_9 = NULL;
m_9 = t;
if((sl_readvar(0, sl) == NULL))
goto fail111 ;
else
{
t = sl_readvar(0, sl);
}
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail111 ;
k_9 = t;
t = m_9;
n_9 = t;
t = term11;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail111 ;
l_9 = t;
t = n_9;
if((sl_readvar(1, sl) == NULL))
goto fail111 ;
else
{
ATerm trm22;
trm22 = CheckATermList(l_9);
if((trm22 == NULL))
goto fail111 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm22, sl_readvar(1, sl)), term115), k_9), term55);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglri_0_1 (StrSL sl, ATerm d_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglri_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, d_9);
{
struct str_closure q_93 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(q_93);
struct str_closure r_93 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(r_93);
t = xtc_transform_2_0(sl, lifted89_cl, lifted90_cl, t);
if((t == NULL))
goto fail106 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_9 = NULL,g_9 = NULL,f_9 = NULL,h_9 = NULL;
g_9 = t;
if((sl_readvar(0, sl) == NULL))
goto fail108 ;
else
{
t = sl_readvar(0, sl);
}
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail108 ;
e_9 = t;
t = g_9;
h_9 = t;
t = term11;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail108 ;
f_9 = t;
t = h_9;
{
ATerm trm21;
trm21 = CheckATermList(f_9);
if((trm21 == NULL))
goto fail108 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm21, e_9), term55);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
ATerm meta_data_to_rule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "meta_data_to_rule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
i_7 = t;
f_7 = t;
{
ATerm trm18,trm19;
trm18 = SSL_get_constructor(t);
trm19 = SSL_get_arguments(t);
g_7 = trm18;
if(((ATgetType(trm19) == AT_LIST) && !(ATisEmpty(trm19))))
{
h_7 = ATgetFirst((ATermList) trm19);
{
ATerm trm20 = (ATerm) ATgetNext((ATermList) trm19);
if(!(((ATgetType(trm20) == AT_LIST) && ATisEmpty(trm20))))
goto fail105 ;
}
}
else
goto fail105 ;
}
m_7 = t;
p_7 = t;
t = term109;
n_7 = t;
t = p_7;
q_7 = t;
t = (ATerm) ATmakeAppl(sym__2, term111, h_7);
o_7 = t;
t = q_7;
t = dr_set_rule_0_3(sl, n_7, g_7, o_7, t);
if((t == NULL))
goto fail105 ;
t = m_7;
t = i_7;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
ATerm merge_metas_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "merge_metas_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_7 = NULL,c_7 = NULL;
c_7 = t;
{
struct str_closure o_93 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(o_93);
t = map_1_0(sl, lifted88_cl, t);
if((t == NULL))
goto fail103 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail103 ;
b_7 = t;
t = c_7;
t = (ATerm) ATmakeAppl(sym_Meta_1, b_7);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_7 = NULL;
if(match_cons(t, sym_Meta_1))
{
d_7 = ATgetArgument(t, 0);
}
else
goto fail104 ;
t = d_7;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_language_binding_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_language_binding_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm17 = t;
struct str_closure m_93 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(m_93);
t = FILE_1_0(sl, lifted87_cl, t);
if((t == NULL))
goto label23 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto label23 ;
goto label22 ;
label23 :
t = trm17;
t = term27;
goto label22 ;
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_6 = NULL,a_7 = NULL;
a_7 = t;
t = get_extension_0_0(sl_up(sl), t);
if((t == NULL))
goto fail102 ;
z_6 = t;
t = a_7;
t = (ATerm) ATinsert(ATinsert(ATempty, term107), z_6);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail102 ;
t = xtc_find_silent_0_0(sl_up(sl), t);
if((t == NULL))
goto fail102 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_syn_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_syn_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_6 = NULL;
ATerm trm14 = t;
struct str_closure l_93 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(l_93);
t = FILE_1_0(sl, lifted86_cl, t);
if((t == NULL))
goto label21 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto label21 ;
{
ATerm trm15,trm16;
trm15 = SSL_get_constructor(t);
trm16 = SSL_get_arguments(t);
w_6 = trm15;
t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, w_6)));
}
goto label20 ;
label21 :
t = trm14;
t = term27;
goto label20 ;
label20 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_6 = NULL,y_6 = NULL;
y_6 = t;
t = term105;
x_6 = t;
t = y_6;
t = guarantee_extension_0_1(sl_up(sl), x_6, t);
if((t == NULL))
goto fail100 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_meta_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_meta_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm13 = t;
struct str_closure k_93 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(k_93);
t = FILE_1_0(sl, lifted85_cl, t);
if((t == NULL))
goto label19 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto label19 ;
goto label18 ;
label19 :
t = trm13;
t = term27;
goto label18 ;
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_6 = NULL,v_6 = NULL;
v_6 = t;
t = term103;
u_6 = t;
t = v_6;
t = guarantee_extension_0_1(sl_up(sl), u_6, t);
if((t == NULL))
goto fail98 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm fetch_meta_data_1_0 (StrSL sl, StrCL l_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fetch_meta_data_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_6 = NULL,q_6 = NULL,n_6 = NULL,r_6 = NULL,o_6 = NULL,s_6 = NULL,p_6 = NULL,t_6 = NULL;
q_6 = t;
t = read_meta_file_0_0(sl, t);
if((t == NULL))
goto fail96 ;
m_6 = t;
t = q_6;
r_6 = t;
t = read_syn_file_0_0(sl, t);
if((t == NULL))
goto fail96 ;
n_6 = t;
t = r_6;
s_6 = t;
t = read_language_binding_0_0(sl, t);
if((t == NULL))
goto fail96 ;
o_6 = t;
t = s_6;
t_6 = t;
t = cl_fun(l_6)(cl_sl(l_6), t);
if((t == NULL))
goto fail96 ;
p_6 = t;
t = t_6;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_6), o_6), n_6), m_6);
t = merge_metas_0_0(sl, t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_includes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_includes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_93 = { &(_Id) , sl };
StrCL lifted82_cl = &(h_93);
struct str_closure i_93 = { &(conc_0_0) , sl };
StrCL lifted83_cl = &(i_93);
struct str_closure j_93 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(j_93);
t = term19;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail94 ;
t = foldr_3_0(sl, lifted82_cl, lifted83_cl, lifted84_cl, t);
if((t == NULL))
goto fail94 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_6 = NULL,k_6 = NULL;
k_6 = t;
j_6 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, j_6), term19);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm find_in_includes_1_0 (StrSL sl, StrCL b_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "find_in_includes_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, b_6);
{
ATerm c_6 = NULL,e_6 = NULL,f_6 = NULL,d_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
e_6 = t;
if(match_cons(t, sym_FILE_1))
{
f_6 = ATgetArgument(t, 0);
}
else
goto fail90 ;
t = f_6;
c_6 = t;
t = e_6;
g_6 = t;
t = term19;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail90 ;
d_6 = t;
t = g_6;
t = (ATerm) ATmakeAppl(sym__2, c_6, d_6);
{
struct str_closure e_93 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(e_93);
t = if_verbose5_1_0(sl, lifted79_cl, t);
if((t == NULL))
goto fail90 ;
t = find_in_path_0_0(sl, t);
if((t == NULL))
goto fail90 ;
{
struct str_closure f_93 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(f_93);
t = if_verbose2_1_0(sl, lifted81_cl, t);
if((t == NULL))
goto fail90 ;
i_6 = t;
h_6 = t;
t = (ATerm) ATmakeAppl(sym_FILE_1, h_6);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = debug_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail93 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_93 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(d_93);
t = debug_1_0(sl_up(sl), lifted80_cl, t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_93 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(a_93);
struct str_closure b_93 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(b_93);
struct str_closure c_93 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(c_93);
t = ArgOption_3_0(sl, lifted76_cl, lifted77_cl, lifted78_cl, t);
if((t == NULL))
goto fail86 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
y_5 = t;
a_6 = t;
z_5 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, (ATerm) ATinsert(ATempty, z_5));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail88 ;
t = y_5;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm12 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-I", 0, ATtrue))))
goto label17 ;
goto label16 ;
label17 :
t = trm12;
if((ATgetSymbol(t) == ATmakeSymbol("--Include", 0, ATtrue)))
goto label16 ;
else
goto fail87 ;
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_pp_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_pp_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
sl_init_var(0, x_4);
{
struct str_closure l_92 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(l_92);
struct str_closure o_92 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(o_92);
t = if_verbose6_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail72 ;
t = term53;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto fail72 ;
if((x_4 == NULL))
{
x_4 = t;
}
else
if((x_4 != t))
goto fail72 ;
{
struct str_closure q_92 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(q_92);
t = if_verbose6_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto fail72 ;
{
ATerm trm10 = t;
struct str_closure s_92 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(s_92);
if((x_4 == NULL))
goto label13 ;
else
{
t = (ATerm) ATmakeAppl(sym_FILE_1, x_4);
}
{
ATerm trm11 = t;
struct str_closure u_92 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(u_92);
t = find_in_includes_1_0(sl, lifted66_cl, t);
if((t == NULL))
goto label15 ;
goto label14 ;
label15 :
t = trm11;
{
struct str_closure v_92 = { &(xtc_find_0_0) , sl };
StrCL lifted67_cl = &(v_92);
t = FILE_1_0(sl, lifted67_cl, t);
if((t == NULL))
goto label13 ;
else
goto label14 ;
}
label14 :
;
t = if_verbose2_1_0(sl, lifted68_cl, t);
if((t == NULL))
goto label13 ;
}
goto label12 ;
label13 :
t = trm10;
{
struct str_closure w_92 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(w_92);
struct str_closure y_92 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(y_92);
t = if_verbose2_1_0(sl, lifted70_cl, t);
if((t == NULL))
goto fail72 ;
t = term61;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto fail72 ;
t = get_syntax_definition_0_0(sl, t);
if((t == NULL))
goto fail72 ;
{
struct str_closure z_92 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(z_92);
t = xtc_transform_1_0(sl, lifted72_cl, t);
if((t == NULL))
goto fail72 ;
t = rename_to_1_0(sl, lifted73_cl, t);
if((t == NULL))
goto fail72 ;
else
goto label12 ;
}
}
label12 :
;
y_4 = t;
a_5 = t;
if(match_cons(t, sym_FILE_1))
{
b_5 = ATgetArgument(t, 0);
}
else
goto fail72 ;
t = b_5;
z_4 = t;
t = a_5;
t = (ATerm) ATmakeAppl(sym_PrettyPrintTable_1, z_4);
t = meta_data_to_rule_0_0(sl, t);
if((t == NULL))
goto fail72 ;
t = y_4;
t = if_verbose6_1_0(sl, lifted74_cl, t);
if((t == NULL))
goto fail72 ;
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
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_92 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(x_92);
t = say_1_0(sl_up(sl), lifted71_cl, t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail82 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_92 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(r_92);
t = debug_1_0(sl_up(sl), lifted69_cl, t);
if((t == NULL))
goto fail79 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_92 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(p_92);
t = debug_1_0(sl_up(sl), lifted65_cl, t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_92 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(n_92);
t = debug_1_0(sl_up(sl), lifted63_cl, t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_92 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(k_92);
t = debug_1_0(sl_up(sl), lifted75_cl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_syntax_definition_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_syntax_definition_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm h_4 = NULL,i_4 = NULL,o_4 = NULL,r_4 = NULL;
sl_init_var(0, h_4);
{
struct str_closure b_92 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(b_92);
t = if_verbose6_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto fail62 ;
i_4 = t;
r_4 = t;
t = term77;
o_4 = t;
t = r_4;
t = guarantee_extension_0_1(sl, o_4, t);
if((t == NULL))
goto fail62 ;
if((h_4 == NULL))
{
h_4 = t;
}
else
if((h_4 != t))
goto fail62 ;
t = i_4;
{
ATerm trm9 = t;
struct str_closure c_92 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(c_92);
if((h_4 == NULL))
goto label11 ;
else
{
t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
}
{
struct str_closure d_92 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(d_92);
t = find_in_includes_1_0(sl, lifted54_cl, t);
if((t == NULL))
goto label11 ;
t = if_verbose2_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto label11 ;
}
goto label10 ;
label11 :
t = trm9;
{
ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
struct str_closure e_92 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(e_92);
struct str_closure g_92 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(g_92);
t = if_verbose2_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto fail62 ;
t_4 = t;
v_4 = t;
t = term83;
u_4 = t;
t = v_4;
t = guarantee_extension_0_1(sl, u_4, t);
if((t == NULL))
goto fail62 ;
s_4 = t;
t = t_4;
t = (ATerm) ATmakeAppl(sym_FILE_1, s_4);
{
struct str_closure h_92 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(h_92);
struct str_closure i_92 = { &(get_includes_0_0) , sl };
StrCL lifted59_cl = &(i_92);
t = xtc_transform_2_0(sl, lifted58_cl, lifted59_cl, t);
if((t == NULL))
goto fail62 ;
{
struct str_closure j_92 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(j_92);
t = xtc_transform_1_0(sl, lifted60_cl, t);
if((t == NULL))
goto fail62 ;
t = rename_to_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto fail62 ;
else
goto label10 ;
}
}
}
label10 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_92 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(f_92);
t = say_1_0(sl_up(sl), lifted57_cl, t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail67 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_92 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(a_92);
t = debug_1_0(sl_up(sl), lifted53_cl, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm w_3 = NULL,x_3 = NULL,c_4 = NULL,d_4 = NULL,z_3 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
sl_init_var(0, w_3);
sl_init_var(1, x_3);
{
struct str_closure l_91 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(l_91);
struct str_closure n_91 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(n_91);
t = if_verbose6_1_0(sl, lifted37_cl, t);
if((t == NULL))
goto fail46 ;
t = term61;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto fail46 ;
if((w_3 == NULL))
{
w_3 = t;
}
else
if((w_3 != t))
goto fail46 ;
{
struct str_closure p_91 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(p_91);
t = if_verbose6_1_0(sl, lifted39_cl, t);
if((t == NULL))
goto fail46 ;
{
struct str_closure q_91 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(q_91);
t = try_1_0(sl, lifted41_cl, t);
if((t == NULL))
goto fail46 ;
d_4 = t;
t = term67;
c_4 = t;
t = d_4;
t = guarantee_extension_0_1(sl, c_4, t);
if((t == NULL))
goto fail46 ;
if((x_3 == NULL))
{
x_3 = t;
}
else
if((x_3 != t))
goto fail46 ;
{
ATerm trm8 = t;
struct str_closure t_91 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(t_91);
if((x_3 == NULL))
goto label9 ;
else
{
t = (ATerm) ATmakeAppl(sym_FILE_1, x_3);
}
{
struct str_closure u_91 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(u_91);
t = find_in_includes_1_0(sl, lifted42_cl, t);
if((t == NULL))
goto label9 ;
t = if_verbose2_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto label9 ;
}
goto label8 ;
label9 :
t = trm8;
{
struct str_closure v_91 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(v_91);
struct str_closure x_91 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(x_91);
t = if_verbose2_1_0(sl, lifted45_cl, t);
if((t == NULL))
goto fail46 ;
if((w_3 == NULL))
goto fail46 ;
else
{
t = w_3;
}
t = get_syntax_definition_0_0(sl, t);
if((t == NULL))
goto fail46 ;
{
struct str_closure y_91 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(y_91);
struct str_closure z_91 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(z_91);
t = xtc_transform_2_0(sl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail46 ;
t = rename_to_1_0(sl, lifted49_cl, t);
if((t == NULL))
goto fail46 ;
else
goto label8 ;
}
}
label8 :
;
z_3 = t;
f_4 = t;
if(match_cons(t, sym_FILE_1))
{
g_4 = ATgetArgument(t, 0);
}
else
goto fail46 ;
t = g_4;
e_4 = t;
t = f_4;
t = (ATerm) ATmakeAppl(sym_ParseTable_1, e_4);
t = meta_data_to_rule_0_0(sl, t);
if((t == NULL))
goto fail46 ;
t = z_3;
t = if_verbose6_1_0(sl, lifted50_cl, t);
if((t == NULL))
goto fail46 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail61 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATempty, sl_readvar(0, sl)), term73);
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
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_91 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(w_91);
t = say_1_0(sl_up(sl), lifted46_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail57 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_91 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(s_91);
t = debug_1_0(sl_up(sl), lifted44_cl, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_3 = NULL,a_4 = NULL,b_4 = NULL;
y_3 = t;
b_4 = t;
if((sl_readvar(0, sl) == NULL))
goto fail53 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), term65);
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail53 ;
t = xtc_find_silent_0_0(sl_up(sl), t);
if((t == NULL))
goto fail53 ;
t = dirname_0_0(sl_up(sl), t);
if((t == NULL))
goto fail53 ;
a_4 = t;
t = b_4;
t = (ATerm) ATmakeAppl(sym__2, term19, (ATerm) ATinsert(ATinsert(ATempty, a_4), term21));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail53 ;
t = y_3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_91 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(o_91);
t = debug_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_91 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(m_91);
t = debug_1_0(sl_up(sl), lifted38_cl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_91 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(k_91);
t = debug_1_0(sl_up(sl), lifted51_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm pcs_pretty_print_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pcs_pretty_print_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_91 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(i_91);
t = try_1_0(sl, lifted33_cl, t);
if((t == NULL))
goto fail41 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_3 = NULL;
struct str_closure f_91 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(f_91);
s_3 = t;
t = term9;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
t = get_pp_table_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
t = s_3;
{
struct str_closure g_91 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(g_91);
struct str_closure h_91 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(h_91);
t = xtc_transform_2_0(sl_up(sl), lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto fail42 ;
t = xtc_transform_1_0(sl_up(sl), lifted36_cl, t);
if((t == NULL))
goto fail42 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_3 = NULL,u_3 = NULL;
u_3 = t;
t = term53;
t = MetaData_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail45 ;
t_3 = t;
t = u_3;
t = (ATerm) ATinsert(ATinsert(ATempty, t_3), term55);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm pcs_post_explode_desugar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pcs_post_explode_desugar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_91 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(e_91);
t = try_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail36 ;
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
{
struct str_closure a_91 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(a_91);
struct str_closure c_91 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(c_91);
struct str_closure d_91 = { &(pass_ensugar_0_0) , sl_up(sl) };
StrCL lifted30_cl = &(d_91);
t = xtc_transform_2_0(sl_up(sl), lifted29_cl, lifted30_cl, t);
if((t == NULL))
goto fail37 ;
t = if_keep3_1_0(sl_up(sl), lifted31_cl, t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
t = MetaData_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail40 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_90 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(z_90);
t = copy_to_1_0(sl_up(sl_up(sl)), lifted32_cl, t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_3 = NULL,o_3 = NULL;
o_3 = t;
t = term25;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail39 ;
n_3 = t;
t = o_3;
t = (ATerm) ATmakeAppl(sym__2, n_3, term45);
t = add_extension_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm pcs_explode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pcs_explode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_90 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(y_90);
t = try_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_90 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(u_90);
struct str_closure x_90 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(x_90);
t = xtc_transform_1_0(sl_up(sl), lifted25_cl, t);
if((t == NULL))
goto fail32 ;
t = if_keep2_1_0(sl_up(sl), lifted26_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
t = MetaData_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail35 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_90 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(t_90);
t = copy_to_1_0(sl_up(sl_up(sl)), lifted27_cl, t);
if((t == NULL))
goto fail33 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_3 = NULL,m_3 = NULL;
m_3 = t;
t = term25;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail34 ;
l_3 = t;
t = m_3;
t = (ATerm) ATmakeAppl(sym__2, l_3, term41);
t = add_extension_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm pcs_pre_explode_desugar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pcs_pre_explode_desugar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_90 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(r_90);
t = try_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_90 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(o_90);
struct str_closure p_90 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(p_90);
struct str_closure q_90 = { &(pass_ensugar_0_0) , sl_up(sl) };
StrCL lifted21_cl = &(q_90);
t = xtc_transform_2_0(sl_up(sl), lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail27 ;
t = if_keep3_1_0(sl_up(sl), lifted22_cl, t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
t = MetaData_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail30 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_90 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(l_90);
t = copy_to_1_0(sl_up(sl_up(sl)), lifted23_cl, t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_3 = NULL,k_3 = NULL;
k_3 = t;
t = term25;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail29 ;
j_3 = t;
t = k_3;
t = (ATerm) ATmakeAppl(sym__2, j_3, term37);
t = add_extension_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm pcs_parse_ast_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pcs_parse_ast_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_90 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(k_90);
ATerm trm7 = t;
ATerm z_2 = NULL;
z_2 = t;
t = term33;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto label7 ;
t = z_2;
{
ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL;
d_3 = t;
t = term35;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto fail23 ;
a_3 = t;
t = d_3;
e_3 = t;
t = term33;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto fail23 ;
b_3 = t;
t = e_3;
t = xtc_sglri_0_2(sl, a_3, b_3, t);
if((t == NULL))
goto fail23 ;
else
goto label6 ;
}
label7 :
t = trm7;
{
ATerm f_3 = NULL,g_3 = NULL;
g_3 = t;
t = term35;
t = MetaData_0_0(sl, t);
if((t == NULL))
goto fail23 ;
f_3 = t;
t = g_3;
t = xtc_sglri_0_1(sl, f_3, t);
if((t == NULL))
goto fail23 ;
else
goto label6 ;
}
label6 :
;
t = if_keep1_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_90 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(j_90);
t = copy_to_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_3 = NULL,i_3 = NULL;
i_3 = t;
t = term25;
t = get_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail25 ;
h_3 = t;
t = i_3;
t = (ATerm) ATmakeAppl(sym__2, h_3, term31);
t = add_extension_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm syntax_override_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syntax_override_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm d_2 = NULL;
sl_init_var(0, d_2);
{
ATerm trm2 = t;
ATerm e_2 = NULL;
e_2 = t;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label3 ;
if((d_2 == NULL))
{
d_2 = t;
}
else
if((d_2 != t))
goto label3 ;
t = e_2;
{
ATerm k_88 = NULL,m_88 = NULL,n_88 = NULL;
ATerm trm3;
trm3 = (ATerm) ATgetAnnotations(t);
if((trm3 == NULL))
trm3 = (ATerm) ATempty;
if(match_cons(t, sym_Meta_1))
{
m_88 = ATgetArgument(t, 0);
}
else
goto fail21 ;
k_88 = trm3;
t = m_88;
{
ATerm trm4 = t;
struct str_closure i_90 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(i_90);
t = fetch_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm4;
{
ATerm t_88 = NULL,u_88 = NULL;
u_88 = t;
t_88 = t;
if((d_2 == NULL))
goto fail21 ;
else
{
ATerm trm6;
trm6 = CheckATermList(t_88);
if((trm6 == NULL))
goto fail21 ;
t = (ATerm) ATinsert((ATermList)trm6, (ATerm) ATmakeAppl(sym_Syntax_1, d_2));
goto label4 ;
}
}
label4 :
;
n_88 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Meta_1, n_88), k_88);
goto label2 ;
}
}
label3 :
t = trm2;
goto label2 ;
label2 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_88 = NULL,x_88 = NULL,z_88 = NULL;
ATerm trm5;
trm5 = (ATerm) ATgetAnnotations(t);
if((trm5 == NULL))
trm5 = (ATerm) ATempty;
if(match_cons(t, sym_Syntax_1))
{
x_88 = ATgetArgument(t, 0);
}
else
goto fail22 ;
w_88 = trm5;
t = x_88;
if((sl_readvar(0, sl) == NULL))
goto fail22 ;
else
{
t = sl_readvar(0, sl);
}
z_88 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Syntax_1, z_88), w_88);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm init_language_binding_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "init_language_binding_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_2 = NULL,c_2 = NULL,e_88 = NULL,g_88 = NULL,h_88 = NULL;
b_2 = t;
{
struct str_closure e_90 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(e_90);
t = fetch_meta_data_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail17 ;
t = syntax_override_0_0(sl, t);
if((t == NULL))
goto fail17 ;
{
struct str_closure g_90 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(g_90);
t = if_verbose2_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail17 ;
{
ATerm trm1;
trm1 = (ATerm) ATgetAnnotations(t);
if((trm1 == NULL))
trm1 = (ATerm) ATempty;
if(match_cons(t, sym_Meta_1))
{
g_88 = ATgetArgument(t, 0);
}
else
goto fail17 ;
e_88 = trm1;
t = g_88;
{
struct str_closure h_90 = { &(meta_data_to_rule_0_0) , sl };
StrCL lifted15_cl = &(h_90);
t = reverse_map_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail17 ;
h_88 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Meta_1, h_88), e_88);
c_2 = t;
t = get_parse_table_0_0(sl, t);
if((t == NULL))
goto fail17 ;
t = c_2;
t = b_2;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_90 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(f_90);
t = debug_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm pcs_input_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pcs_input_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
struct str_closure c_90 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(c_90);
z_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, (ATerm) ATinsert(ATempty, term21));
t = extend_config_0_0(sl, t);
if((t == NULL))
goto fail13 ;
t = z_1;
{
struct str_closure d_90 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(d_90);
t = find_in_includes_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail13 ;
a_2 = t;
if(match_cons(t, sym_FILE_1))
{
y_1 = ATgetArgument(t, 0);
}
else
goto fail13 ;
t = (ATerm) ATmakeAppl(sym__2, term25, y_1);
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail13 ;
t = a_2;
t = if_verbose3_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail13 ;
}
}
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
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_90 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(b_90);
t = debug_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto fail14 ;
}
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
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_ensugar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_ensugar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_1 = NULL,x_1 = NULL;
x_1 = t;
t = term5;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail12 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail12 ;
w_1 = t;
t = x_1;
t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm pretty_print_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pretty_print_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_89 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(y_89);
struct str_closure z_89 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(z_89);
struct str_closure a_90 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(a_90);
t = Option_3_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
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
ATerm v_1 = NULL;
v_1 = t;
t = term13;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail10 ;
t = v_1;
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
{
ATerm trm0 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("--pretty-print", 0, ATtrue))))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
if((ATgetSymbol(t) == ATmakeSymbol("-pp", 0, ATtrue)))
goto label0 ;
else
goto fail9 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensugar_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensugar_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_89 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(v_89);
struct str_closure w_89 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(w_89);
struct str_closure x_89 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(x_89);
t = ArgOption_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
s_1 = t;
u_1 = t;
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
t_1 = t;
t = u_1;
t = (ATerm) ATmakeAppl(sym__2, term5, t_1);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
t = s_1;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--ensugar", 0, ATtrue))))
goto fail5 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm syntax_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syntax_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_89 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(q_89);
struct str_closure r_89 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(r_89);
struct str_closure u_89 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(u_89);
t = ArgOption_3_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
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
ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
p_1 = t;
r_1 = t;
q_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term1, q_1);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = p_1;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--syntax", 0, ATtrue))))
goto fail1 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 166));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(foldr_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldr_3_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guarantee_extension_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guarantee_extension_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dirname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dirname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(if_keep3_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_keep3_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_keep2_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_keep2_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_keep1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_keep1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose6_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose6_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose5_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose5_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(find_in_path_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("find_in_path_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FILE_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FILE_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(copy_to_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_to_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rename_to_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rename_to_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_silent_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_silent_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MetaData_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MetaData_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(io_parse_cs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_parse_cs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglri_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglri_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglri_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglri_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(meta_data_to_rule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("meta_data_to_rule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(merge_metas_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("merge_metas_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_language_binding_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_language_binding_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_syn_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_syn_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_meta_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_meta_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_meta_data_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_meta_data_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_includes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_includes_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(find_in_includes_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("find_in_includes_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(include_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_options_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_pp_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_pp_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_syntax_definition_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_syntax_definition_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pcs_pretty_print_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pcs_pretty_print_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pcs_post_explode_desugar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pcs_post_explode_desugar_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pcs_explode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pcs_explode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pcs_pre_explode_desugar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pcs_pre_explode_desugar_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pcs_parse_ast_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pcs_parse_ast_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syntax_override_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syntax_override_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(init_language_binding_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("init_language_binding_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pcs_input_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pcs_input_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_ensugar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_ensugar_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pretty_print_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pretty_print_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ensugar_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ensugar_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syntax_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syntax_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
