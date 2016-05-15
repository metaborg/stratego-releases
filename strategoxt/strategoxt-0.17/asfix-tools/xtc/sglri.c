#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_parsetree_2;
static Symbol sym_FILE_1;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_None_0;
static Symbol sym_stdin_0;
static Symbol sym_Critical_0;
static Symbol sym_StartSymbol_0;
static Symbol sym_ParseTable_0;
static void init_module_constructors (void)
{
sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
ATprotectSymbol(sym_parsetree_2);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
ATprotectSymbol(sym_stdin_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_StartSymbol_0 = ATmakeSymbol("StartSymbol", 0, ATfalse);
ATprotectSymbol(sym_StartSymbol_0);
sym_ParseTable_0 = ATmakeSymbol("ParseTable", 0, ATfalse);
ATprotectSymbol(sym_ParseTable_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("--yield-quotes", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete   Do not implode quotes (concrete object syntax)", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("--yield-quotes  Yield quotes (concrete object syntax) to single applications", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_ParseTable_0);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>         Use parse table <file.tbl> (required)", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_StartSymbol_0);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s, --start <symbol>  Start parsing with <symbol>", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid value for option --amb: use on or off", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("-a, --amb <on|off>            Enable ambiguities (default: on)", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("-A                            Treat ambiguities as errors (alias of --amb off)", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid value for option --heurstic-filters: use on or off", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("--heuristic-filters <on|off>  Enable heuristic disambiguation filters (default: off)", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters        Disable heuristic disambiguation filters (deprecated option)", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-comments", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-positions", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-locations", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeInt(0);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeInt(1);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("--statistics", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("stdin", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("LongCom", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("ShortCom", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri: ", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(sym_Critical_0);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("No parse table specified. Please use the -p option.", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("The specified parse table file does not contain a parse table", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("Could not open parse table", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("Parse options:", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("Implode options:", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri: --sglr option", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>     Pass <opt> to sglr (obsolete: ignored)", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri: --impl option", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>     Pass <opt> to implode-asfix (obsolete: ignored)", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("Preserving options:", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("yes", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("--preserve-comments   \n                    Preserve source code comments as annotations of the abstract \n                    syntax tree. [off]", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("--preserve-positions\n                    Preserve source code positions in the input file as annotations \n                    of the abstract syntax tree. [off]", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("--preserve-locations\n                    Preserve source code locations in the input file as annotations \n                    of the abstract syntax tree. [off]", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("Input/Output options:", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm asfix_remove_seq_0_0 (StrSL sl, ATerm t);
ATerm asfix_flat_list_0_0 (StrSL sl, ATerm t);
ATerm asfix_flat_injections_0_0 (StrSL sl, ATerm t);
ATerm asfix_replace_appl_0_0 (StrSL sl, ATerm t);
ATerm asfix_flat_alt_0_0 (StrSL sl, ATerm t);
ATerm asfix_remove_lit_0_0 (StrSL sl, ATerm t);
ATerm asfix_remove_layout_0_0 (StrSL sl, ATerm t);
ATerm asfix_flat_lex_0_0 (StrSL sl, ATerm t);
ATerm asfix_appl_to_sort_0_0 (StrSL sl, ATerm t);
ATerm implode_asfix_1_0 (StrSL sl, StrCL h_104, ATerm t);
ATerm yield_asfix_quotes_0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_comments_0_1 (StrSL sl, ATerm j_103, ATerm t);
ATerm asfix_anno_location_0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_position_info_0_1 (StrSL sl, ATerm h_103, ATerm t);
ATerm report_error_0_1 (StrSL sl, ATerm r_102, ATerm t);
ATerm close_parse_table_0_0 (StrSL sl, ATerm t);
ATerm open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm get_parse_error_0_0 (StrSL sl, ATerm t);
ATerm parse_stream_pt_1_3 (StrSL sl, StrCL l_99, ATerm i_99, ATerm j_99, ATerm k_99, ATerm t);
ATerm set_sglr_log_statistics_1_0 (StrSL sl, StrCL x_96, ATerm t);
ATerm set_sglr_log_stream_0_0 (StrSL sl, ATerm t);
ATerm set_ambiguity_is_error_1_0 (StrSL sl, StrCL v_96, ATerm t);
ATerm set_heuristic_filters_1_0 (StrSL sl, StrCL u_96, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL c_95, StrCL d_95, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm false_0_0 (StrSL sl, ATerm t);
ATerm true_0_0 (StrSL sl, ATerm t);
ATerm finally_2_0 (StrSL sl, StrCL s_37, StrCL t_37, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL i_37, ATerm t);
ATerm perror_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm stdin_stream_0_0 (StrSL sl, ATerm t);
ATerm obsolete_1_0 (StrSL sl, StrCL n_27, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm geq_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm output_1_0 (StrSL sl, StrCL s_16, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL q_13, StrCL r_13, StrCL s_13, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL l_13, StrCL m_13, StrCL n_13, ATerm t);
ATerm fatal_err_0_1 (StrSL sl, ATerm z_10, ATerm t);
ATerm log_stream_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm v_10, ATerm w_10, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
ATerm sglri_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
ATerm report_parse_error_0_0 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
ATerm try_open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm open_input_stream_0_0 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
ATerm parse_and_implode_0_0 (StrSL sl, ATerm t);
ATerm additional_sglr_config_0_0 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
ATerm main_sglri_0_0 (StrSL sl, ATerm t);
ATerm must_preserve_locations_0_0 (StrSL sl, ATerm t);
ATerm must_preserve_positions_0_0 (StrSL sl, ATerm t);
ATerm must_preserve_comments_0_0 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm sglr_filter_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
ATerm sglr_amb_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm sglr_start_symbol_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm sglr_parse_table_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm implode_asfix_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm implode_asfix_using_config_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_sglri_0_0(sl, t);
if((t == NULL))
goto fail103 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglri_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglri_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm48 = t;
t = sglr_parse_table_option_0_0(sl, t);
if((t == NULL))
goto label79 ;
goto label78 ;
label79 :
t = trm48;
{
ATerm trm49 = t;
t = sglr_start_symbol_option_0_0(sl, t);
if((t == NULL))
goto label80 ;
goto label78 ;
label80 :
t = trm49;
{
ATerm trm50 = t;
struct str_closure v_116 = { &(_Fail) , sl };
StrCL lifted73_cl = &(v_116);
struct str_closure w_116 = { &(_Fail) , sl };
StrCL lifted74_cl = &(w_116);
struct str_closure x_116 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(x_116);
t = Option_3_0(sl, lifted73_cl, lifted74_cl, lifted75_cl, t);
if((t == NULL))
goto label81 ;
goto label78 ;
label81 :
t = trm50;
{
ATerm trm51 = t;
struct str_closure y_116 = { &(_Fail) , sl };
StrCL lifted76_cl = &(y_116);
struct str_closure z_116 = { &(_Fail) , sl };
StrCL lifted77_cl = &(z_116);
struct str_closure a_117 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(a_117);
t = Option_3_0(sl, lifted76_cl, lifted77_cl, lifted78_cl, t);
if((t == NULL))
goto label82 ;
goto label78 ;
label82 :
t = trm51;
{
ATerm trm52 = t;
t = sglr_amb_option_0_0(sl, t);
if((t == NULL))
goto label83 ;
goto label78 ;
label83 :
t = trm52;
{
ATerm trm53 = t;
t = sglr_filter_option_0_0(sl, t);
if((t == NULL))
goto label84 ;
goto label78 ;
label84 :
t = trm53;
{
ATerm trm54 = t;
struct str_closure b_117 = { &(_Fail) , sl };
StrCL lifted79_cl = &(b_117);
struct str_closure c_117 = { &(_Fail) , sl };
StrCL lifted80_cl = &(c_117);
struct str_closure d_117 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(d_117);
t = Option_3_0(sl, lifted79_cl, lifted80_cl, lifted81_cl, t);
if((t == NULL))
goto label85 ;
goto label78 ;
label85 :
t = trm54;
{
ATerm trm55 = t;
struct str_closure e_117 = { &(_Fail) , sl };
StrCL lifted82_cl = &(e_117);
struct str_closure f_117 = { &(_Fail) , sl };
StrCL lifted83_cl = &(f_117);
struct str_closure h_117 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(h_117);
t = Option_3_0(sl, lifted82_cl, lifted83_cl, lifted84_cl, t);
if((t == NULL))
goto label86 ;
goto label78 ;
label86 :
t = trm55;
{
ATerm trm56 = t;
t = implode_asfix_options_0_0(sl, t);
if((t == NULL))
goto label87 ;
goto label78 ;
label87 :
t = trm56;
{
ATerm trm57 = t;
struct str_closure j_117 = { &(_Fail) , sl };
StrCL lifted85_cl = &(j_117);
struct str_closure k_117 = { &(_Fail) , sl };
StrCL lifted86_cl = &(k_117);
struct str_closure l_117 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(l_117);
t = Option_3_0(sl, lifted85_cl, lifted86_cl, lifted87_cl, t);
if((t == NULL))
goto label88 ;
goto label78 ;
label88 :
t = trm57;
{
ATerm trm58 = t;
struct str_closure n_117 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(n_117);
struct str_closure o_117 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(o_117);
struct str_closure p_117 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(p_117);
t = Option_3_0(sl, lifted88_cl, lifted89_cl, lifted91_cl, t);
if((t == NULL))
goto label89 ;
goto label78 ;
label89 :
t = trm58;
{
ATerm trm59 = t;
struct str_closure r_117 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(r_117);
struct str_closure s_117 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(s_117);
struct str_closure t_117 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(t_117);
t = Option_3_0(sl, lifted92_cl, lifted93_cl, lifted95_cl, t);
if((t == NULL))
goto label90 ;
goto label78 ;
label90 :
t = trm59;
{
ATerm trm60 = t;
struct str_closure u_117 = { &(_Fail) , sl };
StrCL lifted96_cl = &(u_117);
struct str_closure v_117 = { &(_Fail) , sl };
StrCL lifted97_cl = &(v_117);
struct str_closure y_117 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(y_117);
t = Option_3_0(sl, lifted96_cl, lifted97_cl, lifted98_cl, t);
if((t == NULL))
goto label91 ;
goto label78 ;
label91 :
t = trm60;
{
ATerm trm61 = t;
struct str_closure z_117 = { &(_Fail) , sl };
StrCL lifted99_cl = &(z_117);
struct str_closure a_118 = { &(_Fail) , sl };
StrCL lifted100_cl = &(a_118);
struct str_closure b_118 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(b_118);
t = Option_3_0(sl, lifted99_cl, lifted100_cl, lifted101_cl, t);
if((t == NULL))
goto label92 ;
goto label78 ;
label92 :
t = trm61;
{
ATerm trm62 = t;
struct str_closure c_118 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(c_118);
struct str_closure e_118 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(e_118);
struct str_closure f_118 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(f_118);
t = Option_3_0(sl, lifted102_cl, lifted103_cl, lifted104_cl, t);
if((t == NULL))
goto label93 ;
goto label78 ;
label93 :
t = trm62;
{
ATerm trm63 = t;
struct str_closure g_118 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(g_118);
struct str_closure i_118 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(i_118);
struct str_closure j_118 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(j_118);
t = Option_3_0(sl, lifted105_cl, lifted106_cl, lifted107_cl, t);
if((t == NULL))
goto label94 ;
goto label78 ;
label94 :
t = trm63;
{
ATerm trm64 = t;
struct str_closure k_118 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(k_118);
struct str_closure l_118 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(l_118);
struct str_closure m_118 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(m_118);
t = Option_3_0(sl, lifted108_cl, lifted109_cl, lifted110_cl, t);
if((t == NULL))
goto label95 ;
goto label78 ;
label95 :
t = trm64;
{
ATerm trm65 = t;
struct str_closure n_118 = { &(_Fail) , sl };
StrCL lifted111_cl = &(n_118);
struct str_closure o_118 = { &(_Fail) , sl };
StrCL lifted112_cl = &(o_118);
struct str_closure p_118 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(p_118);
t = Option_3_0(sl, lifted111_cl, lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto label96 ;
goto label78 ;
label96 :
t = trm65;
{
struct str_closure q_118 = { &(_Fail) , sl };
StrCL lifted114_cl = &(q_118);
struct str_closure r_118 = { &(_Fail) , sl };
StrCL lifted115_cl = &(r_118);
struct str_closure t_118 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(t_118);
t = Option_3_0(sl, lifted114_cl, lifted115_cl, lifted116_cl, t);
if((t == NULL))
goto fail76 ;
else
goto label78 ;
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
label78 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term125;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term123;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_113 = NULL,q_113 = NULL;
t = term117;
q_113 = t;
p_113 = t;
t = (ATerm) ATmakeAppl(sym__2, term73, p_113);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail99 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--preserve-locations", 0, ATtrue))))
goto fail98 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_113 = NULL,o_113 = NULL;
t = term117;
o_113 = t;
n_113 = t;
t = (ATerm) ATmakeAppl(sym__2, term71, n_113);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--preserve-positions", 0, ATtrue))))
goto fail95 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term119;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_113 = NULL,m_113 = NULL;
t = term117;
m_113 = t;
l_113 = t;
t = (ATerm) ATmakeAppl(sym__2, term69, l_113);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail93 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--preserve-comments", 0, ATtrue))))
goto fail92 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_117 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(q_117);
t = obsolete_1_0(sl_up(sl), lifted94_cl, t);
if((t == NULL))
goto fail87 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term111;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--impl", 0, ATtrue))))
goto fail86 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_117 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(m_117);
t = obsolete_1_0(sl_up(sl), lifted90_cl, t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--sglr", 0, ATtrue))))
goto fail82 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term105;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
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
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_parse_error_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_parse_error_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm r_6 = NULL,s_6 = NULL;
sl_init_var(0, r_6);
sl_init_var(1, s_6);
{
struct str_closure o_116 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(o_116);
struct str_closure s_116 = { &(_Fail) , sl };
StrCL lifted72_cl = &(s_116);
t = finally_2_0(sl, lifted71_cl, lifted72_cl, t);
if((t == NULL))
goto fail74 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail75 ;
t = get_parse_error_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail75 ;
if((sl_readvar(0, sl) == NULL))
goto fail75 ;
else
{
t = sl_readvar(0, sl);
}
if((sl_readvar(1, sl) == NULL))
goto fail75 ;
else
{
t = report_error_0_1(sl_up(sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
ATerm try_open_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "try_open_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm z_5 = NULL;
sl_init_var(0, z_5);
{
ATerm trm41 = t;
ATerm trm42 = t;
t = term49;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label71 ;
goto label70 ;
label71 :
t = trm42;
{
ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
d_6 = t;
t = term95;
b_6 = t;
t = d_6;
e_6 = t;
t = term97;
c_6 = t;
t = e_6;
t = log_0_2(sl, b_6, c_6, t);
if((t == NULL))
goto label69 ;
t = term77;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto label69 ;
else
goto label70 ;
}
label70 :
;
{
ATerm trm43 = t;
ATerm f_6 = NULL,g_6 = NULL;
g_6 = t;
f_6 = t;
t = (ATerm) ATmakeAppl(sym__2, f_6, term91);
t = fopen_0_0(sl, t);
if((t == NULL))
goto label73 ;
goto label72 ;
label73 :
t = trm43;
{
ATerm j_113 = NULL,k_113 = NULL;
k_113 = t;
j_113 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, j_113);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label69 ;
t = perror_0_0(sl, t);
if((t == NULL))
goto label69 ;
goto label69 ;
}
label72 :
;
if((z_5 == NULL))
{
z_5 = t;
}
else
if((z_5 != t))
goto label69 ;
{
struct str_closure k_116 = { &(read_from_stream_0_0) , sl };
StrCL lifted69_cl = &(k_116);
struct str_closure l_116 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(l_116);
t = finally_2_0(sl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto label69 ;
{
ATerm trm44 = t;
ATerm a_6 = NULL;
a_6 = t;
{
ATerm trm45 = t;
ATerm trm46,trm47;
trm46 = SSL_get_constructor(t);
trm47 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm46) == ATmakeSymbol("parse-table", 0, ATtrue))))
goto label77 ;
goto label75 ;
label77 :
t = trm45;
goto label76 ;
label76 :
;
t = a_6;
}
{
ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
j_6 = t;
t = term95;
h_6 = t;
t = j_6;
k_6 = t;
t = term99;
i_6 = t;
t = k_6;
t = log_0_2(sl, h_6, i_6, t);
if((t == NULL))
goto label69 ;
t = term77;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto label69 ;
else
goto label74 ;
}
label75 :
t = trm44;
goto label74 ;
label74 :
;
t = open_parse_table_0_0(sl, t);
if((t == NULL))
goto label69 ;
}
}
}
goto label68 ;
label69 :
t = trm41;
{
ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
n_6 = t;
t = term95;
l_6 = t;
t = n_6;
o_6 = t;
t = term101;
m_6 = t;
t = o_6;
t = log_0_2(sl, l_6, m_6, t);
if((t == NULL))
goto fail72 ;
else
goto label68 ;
}
label68 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail73 ;
else
{
t = sl_readvar(0, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail73 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm open_input_stream_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "open_input_stream_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm39 = t;
ATerm w_5 = NULL;
if(match_cons(t, sym_FILE_1))
{
w_5 = ATgetArgument(t, 0);
}
else
goto label65 ;
t = w_5;
{
ATerm trm40 = t;
ATerm x_5 = NULL,y_5 = NULL;
y_5 = t;
x_5 = t;
t = (ATerm) ATmakeAppl(sym__2, x_5, term91);
t = fopen_0_0(sl, t);
if((t == NULL))
goto label67 ;
goto label66 ;
label67 :
t = trm40;
{
ATerm h_113 = NULL,i_113 = NULL;
i_113 = t;
h_113 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, h_113);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label65 ;
t = perror_0_0(sl, t);
if((t == NULL))
goto label65 ;
goto label65 ;
}
label66 :
;
}
goto label64 ;
label65 :
t = trm39;
if(!(match_cons(t, sym_stdin_0)))
goto fail71 ;
t = stdin_stream_0_0(sl, t);
if((t == NULL))
goto fail71 ;
else
goto label64 ;
label64 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_and_implode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_and_implode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
sl_init_var(0, g_5);
sl_init_var(1, h_5);
sl_init_var(2, i_5);
sl_init_var(3, j_5);
if((h_5 == NULL))
{
h_5 = t;
}
else
if((h_5 != t))
goto fail68 ;
k_5 = t;
t = try_open_parse_table_0_0(sl, t);
if((t == NULL))
goto fail68 ;
if((j_5 == NULL))
{
j_5 = t;
}
else
if((j_5 != t))
goto fail68 ;
{
ATerm trm34 = t;
t = term53;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label55 ;
goto label54 ;
label55 :
t = trm34;
t = term81;
goto label54 ;
label54 :
;
if((g_5 == NULL))
{
g_5 = t;
}
else
if((g_5 != t))
goto fail68 ;
t = k_5;
t = open_input_stream_0_0(sl, t);
if((t == NULL))
goto fail68 ;
if((i_5 == NULL))
{
i_5 = t;
}
else
if((i_5 != t))
goto fail68 ;
{
struct str_closure i_116 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(i_116);
struct str_closure j_116 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(j_116);
t = finally_2_0(sl, lifted66_cl, lifted68_cl, t);
if((t == NULL))
goto fail68 ;
{
ATerm trm36 = t;
ATerm l_5 = NULL;
l_5 = t;
t = must_preserve_comments_0_0(sl, t);
if((t == NULL))
goto label59 ;
t = l_5;
{
ATerm r_5 = NULL,s_5 = NULL;
s_5 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term85), term87);
r_5 = t;
t = s_5;
t = asfix_anno_comments_0_1(sl, r_5, t);
if((t == NULL))
goto fail68 ;
else
goto label58 ;
}
label59 :
t = trm36;
goto label58 ;
label58 :
;
{
ATerm trm37 = t;
ATerm m_5 = NULL;
m_5 = t;
t = must_preserve_positions_0_0(sl, t);
if((t == NULL))
goto label61 ;
t = m_5;
{
ATerm t_5 = NULL,u_5 = NULL;
u_5 = t;
t = term89;
t_5 = t;
t = u_5;
t = asfix_anno_position_info_0_1(sl, t_5, t);
if((t == NULL))
goto fail68 ;
else
goto label60 ;
}
label61 :
t = trm37;
goto label60 ;
label60 :
;
{
ATerm trm38 = t;
ATerm n_5 = NULL;
n_5 = t;
t = must_preserve_locations_0_0(sl, t);
if((t == NULL))
goto label63 ;
t = n_5;
t = asfix_anno_location_0_0(sl, t);
if((t == NULL))
goto fail68 ;
else
goto label62 ;
label63 :
t = trm38;
goto label62 ;
label62 :
;
t = implode_asfix_using_config_0_0(sl, t);
if((t == NULL))
goto fail68 ;
}
}
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
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail70 ;
else
{
t = sl_readvar(2, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail70 ;
if((sl_readvar(3, sl) == NULL))
goto fail70 ;
else
{
t = sl_readvar(3, sl);
}
t = close_parse_table_0_0(sl_up(sl), t);
if((t == NULL))
goto fail70 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_5 = NULL,q_5 = NULL;
struct str_closure g_116 = { &(report_parse_error_0_0) , sl_up(sl) };
StrCL lifted67_cl = &(g_116);
q_5 = t;
if((sl_readvar(1, sl) == NULL))
goto fail69 ;
else
{
t = sl_readvar(1, sl);
}
{
ATerm trm35 = t;
ATerm g_113 = NULL;
if(match_cons(t, sym_FILE_1))
{
g_113 = ATgetArgument(t, 0);
}
else
goto label57 ;
t = g_113;
goto label56 ;
label57 :
t = trm35;
if(!(match_cons(t, sym_stdin_0)))
goto fail69 ;
t = term83;
goto label56 ;
label56 :
;
p_5 = t;
t = q_5;
if(((sl_readvar(3, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail69 ;
else
{
t = parse_stream_pt_1_3(sl_up(sl), lifted67_cl, sl_readvar(3, sl), sl_readvar(0, sl), p_5, t);
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
ATerm additional_sglr_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "additional_sglr_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm33 = t;
ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
c_5 = t;
e_5 = t;
t = term79;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label53 ;
d_5 = t;
t = e_5;
t = (ATerm) ATmakeAppl(sym__2, d_5, term77);
t = geq_0_0(sl, t);
if((t == NULL))
goto label53 ;
t = c_5;
{
struct str_closure f_116 = { &(true_0_0) , sl };
StrCL lifted65_cl = &(f_116);
t = set_sglr_log_statistics_1_0(sl, lifted65_cl, t);
if((t == NULL))
goto fail67 ;
t = log_stream_0_0(sl, t);
if((t == NULL))
goto fail67 ;
t = set_sglr_log_stream_0_0(sl, t);
if((t == NULL))
goto fail67 ;
else
goto label52 ;
}
label53 :
t = trm33;
goto label52 ;
label52 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_sglri_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_sglri_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_116 = { &(sglri_options_0_0) , sl };
StrCL lifted62_cl = &(c_116);
struct str_closure d_116 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(d_116);
t = xtc_io_wrap_2_0(sl, lifted62_cl, lifted63_cl, t);
if((t == NULL))
goto fail65 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_5 = NULL;
a_5 = t;
t = additional_sglr_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail66 ;
t = a_5;
{
ATerm trm32 = t;
ATerm b_5 = NULL;
b_5 = t;
{
struct str_closure b_116 = { &(parse_and_implode_0_0) , sl_up(sl) };
StrCL lifted64_cl = &(b_116);
t = output_1_0(sl_up(sl), lifted64_cl, t);
if((t == NULL))
goto label51 ;
t = b_5;
}
t = term75;
t = xtc_exit_0_0(sl_up(sl), t);
if((t == NULL))
goto fail66 ;
else
goto label50 ;
label51 :
t = trm32;
t = term77;
t = xtc_exit_0_0(sl_up(sl), t);
if((t == NULL))
goto fail66 ;
else
goto label50 ;
label50 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm must_preserve_locations_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "must_preserve_locations_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail64 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("yes", 0, ATtrue))))
goto fail64 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm must_preserve_positions_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "must_preserve_positions_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail63 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("yes", 0, ATtrue))))
goto fail63 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm must_preserve_comments_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "must_preserve_comments_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail62 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("yes", 0, ATtrue))))
goto fail62 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglr_filter_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglr_filter_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm29 = t;
struct str_closure u_115 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(u_115);
struct str_closure v_115 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(v_115);
struct str_closure w_115 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(w_115);
t = ArgOption_3_0(sl, lifted53_cl, lifted54_cl, lifted57_cl, t);
if((t == NULL))
goto label46 ;
goto label45 ;
label46 :
t = trm29;
{
struct str_closure y_115 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(y_115);
struct str_closure z_115 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(z_115);
struct str_closure a_116 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(a_116);
t = Option_3_0(sl, lifted58_cl, lifted59_cl, lifted61_cl, t);
if((t == NULL))
goto fail55 ;
else
goto label45 ;
}
label45 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_115 = { &(false_0_0) , sl_up(sl) };
StrCL lifted60_cl = &(x_115);
t = set_heuristic_filters_1_0(sl_up(sl), lifted60_cl, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--no-heuristic-filters", 0, ATtrue))))
goto fail59 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_4 = NULL,h_4 = NULL;
h_4 = t;
g_4 = t;
{
ATerm trm30 = t;
ATerm i_4 = NULL;
i_4 = t;
t = g_4;
if(!((ATgetSymbol(t) == ATmakeSymbol("off", 0, ATtrue))))
goto label48 ;
t = i_4;
{
struct str_closure s_115 = { &(false_0_0) , sl_up(sl) };
StrCL lifted55_cl = &(s_115);
t = set_heuristic_filters_1_0(sl_up(sl), lifted55_cl, t);
if((t == NULL))
goto fail57 ;
else
goto label47 ;
}
label48 :
t = trm30;
{
ATerm trm31 = t;
ATerm o_4 = NULL;
o_4 = t;
t = g_4;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto label49 ;
t = o_4;
{
struct str_closure t_115 = { &(true_0_0) , sl_up(sl) };
StrCL lifted56_cl = &(t_115);
t = set_heuristic_filters_1_0(sl_up(sl), lifted56_cl, t);
if((t == NULL))
goto fail57 ;
else
goto label47 ;
}
label49 :
t = trm31;
{
ATerm r_4 = NULL,s_4 = NULL;
s_4 = t;
t = term63;
r_4 = t;
t = s_4;
t = fatal_err_0_1(sl_up(sl), r_4, t);
if((t == NULL))
goto fail57 ;
else
goto label47 ;
}
}
label47 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--heuristic-filters", 0, ATtrue))))
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglr_amb_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglr_amb_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm25 = t;
struct str_closure l_115 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(l_115);
struct str_closure m_115 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(m_115);
struct str_closure n_115 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(n_115);
t = ArgOption_3_0(sl, lifted44_cl, lifted45_cl, lifted48_cl, t);
if((t == NULL))
goto label39 ;
goto label38 ;
label39 :
t = trm25;
{
struct str_closure p_115 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(p_115);
struct str_closure q_115 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(q_115);
struct str_closure r_115 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(r_115);
t = Option_3_0(sl, lifted49_cl, lifted50_cl, lifted52_cl, t);
if((t == NULL))
goto fail48 ;
else
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_115 = { &(true_0_0) , sl_up(sl) };
StrCL lifted51_cl = &(o_115);
t = set_ambiguity_is_error_1_0(sl_up(sl), lifted51_cl, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-A", 0, ATtrue))))
goto fail52 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_4 = NULL,b_4 = NULL;
b_4 = t;
a_4 = t;
{
ATerm trm27 = t;
ATerm c_4 = NULL;
c_4 = t;
t = a_4;
if(!((ATgetSymbol(t) == ATmakeSymbol("off", 0, ATtrue))))
goto label43 ;
t = c_4;
{
struct str_closure j_115 = { &(true_0_0) , sl_up(sl) };
StrCL lifted46_cl = &(j_115);
t = set_ambiguity_is_error_1_0(sl_up(sl), lifted46_cl, t);
if((t == NULL))
goto fail50 ;
else
goto label42 ;
}
label43 :
t = trm27;
{
ATerm trm28 = t;
ATerm d_4 = NULL;
d_4 = t;
t = a_4;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto label44 ;
t = d_4;
{
struct str_closure k_115 = { &(false_0_0) , sl_up(sl) };
StrCL lifted47_cl = &(k_115);
t = set_ambiguity_is_error_1_0(sl_up(sl), lifted47_cl, t);
if((t == NULL))
goto fail50 ;
else
goto label42 ;
}
label44 :
t = trm28;
{
ATerm e_4 = NULL,f_4 = NULL;
f_4 = t;
t = term57;
e_4 = t;
t = f_4;
t = fatal_err_0_1(sl_up(sl), e_4, t);
if((t == NULL))
goto fail50 ;
else
goto label42 ;
}
}
label42 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm26 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-a", 0, ATtrue))))
goto label41 ;
goto label40 ;
label41 :
t = trm26;
if((ATgetSymbol(t) == ATmakeSymbol("--amb", 0, ATtrue)))
goto label40 ;
else
goto fail49 ;
label40 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglr_start_symbol_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglr_start_symbol_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_115 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(g_115);
struct str_closure h_115 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(h_115);
struct str_closure i_115 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(i_115);
t = ArgOption_3_0(sl, lifted41_cl, lifted42_cl, lifted43_cl, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
x_3 = t;
z_3 = t;
y_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term53, y_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
t = x_3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm24 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-s", 0, ATtrue))))
goto label37 ;
goto label36 ;
label37 :
t = trm24;
if((ATgetSymbol(t) == ATmakeSymbol("--start", 0, ATtrue)))
goto label36 ;
else
goto fail45 ;
label36 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglr_parse_table_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglr_parse_table_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_115 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(d_115);
struct str_closure e_115 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(e_115);
struct str_closure f_115 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(f_115);
t = ArgOption_3_0(sl, lifted38_cl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL;
t_3 = t;
w_3 = t;
u_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term49, u_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
t = t_3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-p", 0, ATtrue))))
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_asfix_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_asfix_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm13 = t;
struct str_closure t_113 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(t_113);
struct str_closure u_113 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(u_113);
struct str_closure v_113 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(v_113);
t = Option_3_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto label25 ;
goto label24 ;
label25 :
t = trm13;
{
ATerm trm14 = t;
struct str_closure w_113 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(w_113);
struct str_closure x_113 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(x_113);
struct str_closure y_113 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(y_113);
t = Option_3_0(sl, lifted5_cl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label26 ;
goto label24 ;
label26 :
t = trm14;
{
ATerm trm15 = t;
struct str_closure z_113 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(z_113);
struct str_closure a_114 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(a_114);
struct str_closure b_114 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(b_114);
t = Option_3_0(sl, lifted8_cl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto label27 ;
goto label24 ;
label27 :
t = trm15;
{
ATerm trm16 = t;
struct str_closure c_114 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(c_114);
struct str_closure d_114 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(d_114);
struct str_closure e_114 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(e_114);
t = Option_3_0(sl, lifted11_cl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label28 ;
goto label24 ;
label28 :
t = trm16;
{
ATerm trm17 = t;
struct str_closure f_114 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(f_114);
struct str_closure g_114 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(g_114);
struct str_closure h_114 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(h_114);
t = Option_3_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto label29 ;
goto label24 ;
label29 :
t = trm17;
{
ATerm trm18 = t;
struct str_closure i_114 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(i_114);
struct str_closure j_114 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(j_114);
struct str_closure k_114 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(k_114);
t = Option_3_0(sl, lifted17_cl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto label30 ;
goto label24 ;
label30 :
t = trm18;
{
ATerm trm19 = t;
struct str_closure l_114 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(l_114);
struct str_closure m_114 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(m_114);
struct str_closure n_114 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(n_114);
t = Option_3_0(sl, lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto label31 ;
goto label24 ;
label31 :
t = trm19;
{
ATerm trm20 = t;
struct str_closure o_114 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(o_114);
struct str_closure p_114 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(p_114);
struct str_closure q_114 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(q_114);
t = Option_3_0(sl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto label32 ;
goto label24 ;
label32 :
t = trm20;
{
ATerm trm21 = t;
struct str_closure r_114 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(r_114);
struct str_closure s_114 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(s_114);
struct str_closure t_114 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(t_114);
t = Option_3_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, t);
if((t == NULL))
goto label33 ;
goto label24 ;
label33 :
t = trm21;
{
ATerm trm22 = t;
struct str_closure u_114 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(u_114);
struct str_closure v_114 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(v_114);
struct str_closure w_114 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(w_114);
t = Option_3_0(sl, lifted29_cl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto label34 ;
goto label24 ;
label34 :
t = trm22;
{
ATerm trm23 = t;
struct str_closure x_114 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(x_114);
struct str_closure y_114 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(y_114);
struct str_closure z_114 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(z_114);
t = Option_3_0(sl, lifted32_cl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto label35 ;
goto label24 ;
label35 :
t = trm23;
{
struct str_closure a_115 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(a_115);
struct str_closure b_115 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(b_115);
struct str_closure c_115 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(c_115);
t = Option_3_0(sl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail3 ;
else
goto label24 ;
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
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_2 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,s_3 = NULL;
o_2 = t;
n_3 = t;
m_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, m_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail38 ;
s_3 = t;
o_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term21, o_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail38 ;
t = o_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--yield-quotes", 0, ATtrue))))
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_2 = NULL,k_3 = NULL,l_3 = NULL;
n_2 = t;
l_3 = t;
k_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term21, k_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail35 ;
t = n_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--concrete", 0, ATtrue))))
goto fail34 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_2 = NULL,i_3 = NULL,j_3 = NULL;
m_2 = t;
j_3 = t;
i_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, i_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
t = m_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--pt", 0, ATtrue))))
goto fail31 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_2 = NULL,g_3 = NULL,h_3 = NULL;
l_2 = t;
h_3 = t;
g_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term17, g_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
t = l_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--seq", 0, ATtrue))))
goto fail28 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_2 = NULL,e_3 = NULL,f_3 = NULL;
k_2 = t;
f_3 = t;
e_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term7, e_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail26 ;
t = k_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--list", 0, ATtrue))))
goto fail25 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_2 = NULL,b_3 = NULL,d_3 = NULL;
j_2 = t;
d_3 = t;
b_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term13, b_3);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
t = j_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--inj", 0, ATtrue))))
goto fail22 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_2 = NULL,z_2 = NULL,a_3 = NULL;
i_2 = t;
a_3 = t;
z_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, z_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail20 ;
t = i_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--nt", 0, ATtrue))))
goto fail19 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_2 = NULL,x_2 = NULL,y_2 = NULL;
h_2 = t;
y_2 = t;
x_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term11, x_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
t = h_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--appl", 0, ATtrue))))
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
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
{
ATerm g_2 = NULL,v_2 = NULL,w_2 = NULL;
g_2 = t;
w_2 = t;
v_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term15, v_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail14 ;
t = g_2;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--alt", 0, ATtrue))))
goto fail13 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_2 = NULL,t_2 = NULL,u_2 = NULL;
f_2 = t;
u_2 = t;
t_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term9, t_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail11 ;
t = f_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--lit", 0, ATtrue))))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
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
{
ATerm e_2 = NULL,r_2 = NULL,s_2 = NULL;
e_2 = t;
s_2 = t;
r_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term3, r_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
t = e_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--layout", 0, ATtrue))))
goto fail7 ;
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
t = term25;
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
{
ATerm d_2 = NULL,p_2 = NULL,q_2 = NULL;
d_2 = t;
q_2 = t;
p_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term1, p_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
t = d_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--lex", 0, ATtrue))))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_asfix_using_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_asfix_using_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm q_1 = NULL;
sl_init_var(0, q_1);
if((q_1 == NULL))
{
q_1 = t;
}
else
if((q_1 != t))
goto fail0 ;
{
ATerm trm0 = t;
ATerm r_1 = NULL;
r_1 = t;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label1 ;
t = r_1;
t = asfix_flat_lex_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
{
ATerm trm1 = t;
ATerm s_1 = NULL;
s_1 = t;
t = term3;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = s_1;
t = asfix_remove_layout_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label2 ;
label3 :
t = trm1;
goto label2 ;
label2 :
;
{
ATerm trm2 = t;
ATerm t_1 = NULL;
t_1 = t;
t = term5;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label5 ;
t = t_1;
t = asfix_appl_to_sort_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label4 ;
label5 :
t = trm2;
goto label4 ;
label4 :
;
{
ATerm trm3 = t;
ATerm u_1 = NULL;
u_1 = t;
t = term7;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label7 ;
t = u_1;
t = asfix_flat_list_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label6 ;
label7 :
t = trm3;
goto label6 ;
label6 :
;
{
ATerm trm4 = t;
ATerm v_1 = NULL;
v_1 = t;
t = term9;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label9 ;
t = v_1;
t = asfix_remove_lit_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label8 ;
label9 :
t = trm4;
goto label8 ;
label8 :
;
{
ATerm trm5 = t;
ATerm w_1 = NULL;
w_1 = t;
t = term11;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label11 ;
t = w_1;
t = asfix_replace_appl_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label10 ;
label11 :
t = trm5;
goto label10 ;
label10 :
;
{
ATerm trm6 = t;
ATerm x_1 = NULL;
x_1 = t;
t = term13;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label13 ;
t = x_1;
t = asfix_flat_injections_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label12 ;
label13 :
t = trm6;
goto label12 ;
label12 :
;
{
ATerm trm7 = t;
ATerm y_1 = NULL;
y_1 = t;
t = term15;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label15 ;
t = y_1;
t = asfix_flat_alt_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label14 ;
label15 :
t = trm7;
goto label14 ;
label14 :
;
{
ATerm trm8 = t;
ATerm z_1 = NULL;
z_1 = t;
t = term17;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label17 ;
t = z_1;
t = asfix_remove_seq_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label16 ;
label17 :
t = trm8;
goto label16 ;
label16 :
;
{
ATerm trm9 = t;
ATerm a_2 = NULL;
a_2 = t;
t = term19;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label19 ;
t = a_2;
{
ATerm c_2 = NULL;
if(match_cons(t, sym_parsetree_2))
{
c_2 = ATgetArgument(t, 0);
{
ATerm trm10 = ATgetArgument(t, 1);
}
}
else
goto fail0 ;
t = c_2;
goto label18 ;
}
label19 :
t = trm9;
goto label18 ;
label18 :
;
{
struct str_closure s_113 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(s_113);
t = try_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
{
ATerm trm12 = t;
ATerm b_2 = NULL;
b_2 = t;
t = term23;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label23 ;
t = b_2;
t = yield_asfix_quotes_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label22 ;
label23 :
t = trm12;
goto label22 ;
label22 :
;
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
struct str_closure r_113 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(r_113);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail1 ;
t = implode_asfix_1_0(sl_up(sl), lifted1_cl, t);
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
ATerm trm11 = t;
t = term21;
t = get_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label21 ;
goto fail2 ;
label21 :
t = trm11;
goto label20 ;
label20 :
;
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 149));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(asfix_remove_seq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_remove_seq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_flat_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_flat_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_flat_injections_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_flat_injections_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_replace_appl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_replace_appl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_flat_alt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_flat_alt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_remove_lit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_remove_lit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_remove_layout_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_remove_layout_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_flat_lex_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_flat_lex_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_appl_to_sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_appl_to_sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_asfix_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_asfix_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(yield_asfix_quotes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("yield_asfix_quotes_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_anno_comments_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_anno_comments_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_anno_location_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_anno_location_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_anno_position_info_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_anno_position_info_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(report_error_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("report_error_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(close_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("close_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_parse_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_parse_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_stream_pt_1_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_stream_pt_1_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_sglr_log_statistics_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_sglr_log_statistics_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_sglr_log_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_sglr_log_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_ambiguity_is_error_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_ambiguity_is_error_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_heuristic_filters_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_heuristic_filters_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(false_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("false_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(true_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("true_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(finally_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("finally_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(perror_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("perror_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fopen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fopen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stdin_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdin_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(obsolete_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("obsolete_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(geq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("geq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(output_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("output_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_err_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_err_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted116);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted116", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted113);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted113", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted110);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted110", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted109);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted109", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted106);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted106", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted103);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted103", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted101);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted101", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sglri_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglri_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(report_parse_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("report_parse_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_open_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_open_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_input_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_input_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_and_implode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_and_implode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(additional_sglr_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("additional_sglr_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_sglri_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_sglri_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(must_preserve_locations_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("must_preserve_locations_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(must_preserve_positions_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("must_preserve_positions_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(must_preserve_comments_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("must_preserve_comments_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sglr_filter_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglr_filter_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sglr_amb_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglr_amb_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sglr_start_symbol_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglr_start_symbol_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sglr_parse_table_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglr_parse_table_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(implode_asfix_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_asfix_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_asfix_using_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_asfix_using_config_0_0", 0, ATtrue)), &(closures[closures_index]));
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
