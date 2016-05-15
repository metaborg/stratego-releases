#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Stream_1;
static Symbol sym_FILE_1;
static Symbol sym_HR_0;
static Symbol sym_PRE_1;
static Symbol sym_TDTR_1;
static Symbol sym_TDTD_0;
static Symbol sym_NBSP_0;
static Symbol sym_BR_0;
static Symbol sym_ANCHOR_1;
static Symbol sym_HREF_2;
static Symbol sym_SPAN_2;
static Symbol sym_TD_p__1;
static Symbol sym_TD_2;
static Symbol sym_TR_2;
static Symbol sym_TABLE_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_HV_2;
static Symbol sym_ALT_2;
static Symbol sym_A_3;
static Symbol sym_R_2;
static Symbol sym_FBOX_2;
static Symbol sym_LBL_2;
static Symbol sym_REF_2;
static Symbol sym_C_2;
static Symbol sym_L_2;
static Symbol sym_LNAT_2;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_IS_0;
static Symbol sym_AL_1;
static Symbol sym_AC_1;
static Symbol sym_AR_1;
static Symbol sym_AOPTIONS_1;
static Symbol sym_KW_0;
static Symbol sym_VAR_0;
static Symbol sym_NUM_0;
static Symbol sym_MATH_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
ATprotectSymbol(sym_Stream_1);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_HR_0 = ATmakeSymbol("HR", 0, ATfalse);
ATprotectSymbol(sym_HR_0);
sym_PRE_1 = ATmakeSymbol("PRE", 1, ATfalse);
ATprotectSymbol(sym_PRE_1);
sym_TDTR_1 = ATmakeSymbol("TDTR", 1, ATfalse);
ATprotectSymbol(sym_TDTR_1);
sym_TDTD_0 = ATmakeSymbol("TDTD", 0, ATfalse);
ATprotectSymbol(sym_TDTD_0);
sym_NBSP_0 = ATmakeSymbol("NBSP", 0, ATfalse);
ATprotectSymbol(sym_NBSP_0);
sym_BR_0 = ATmakeSymbol("BR", 0, ATfalse);
ATprotectSymbol(sym_BR_0);
sym_ANCHOR_1 = ATmakeSymbol("ANCHOR", 1, ATfalse);
ATprotectSymbol(sym_ANCHOR_1);
sym_HREF_2 = ATmakeSymbol("HREF", 2, ATfalse);
ATprotectSymbol(sym_HREF_2);
sym_SPAN_2 = ATmakeSymbol("SPAN", 2, ATfalse);
ATprotectSymbol(sym_SPAN_2);
sym_TD_p__1 = ATmakeSymbol("TD'", 1, ATfalse);
ATprotectSymbol(sym_TD_p__1);
sym_TD_2 = ATmakeSymbol("TD", 2, ATfalse);
ATprotectSymbol(sym_TD_2);
sym_TR_2 = ATmakeSymbol("TR", 2, ATfalse);
ATprotectSymbol(sym_TR_2);
sym_TABLE_2 = ATmakeSymbol("TABLE", 2, ATfalse);
ATprotectSymbol(sym_TABLE_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
ATprotectSymbol(sym_HV_2);
sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
ATprotectSymbol(sym_ALT_2);
sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
ATprotectSymbol(sym_A_3);
sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
ATprotectSymbol(sym_R_2);
sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
ATprotectSymbol(sym_FBOX_2);
sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
ATprotectSymbol(sym_LBL_2);
sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
ATprotectSymbol(sym_REF_2);
sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
ATprotectSymbol(sym_C_2);
sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
ATprotectSymbol(sym_L_2);
sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
ATprotectSymbol(sym_LNAT_2);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
ATprotectSymbol(sym_IS_0);
sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
ATprotectSymbol(sym_AL_1);
sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
ATprotectSymbol(sym_AC_1);
sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
ATprotectSymbol(sym_AR_1);
sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
ATprotectSymbol(sym_AOPTIONS_1);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
ATprotectSymbol(sym_VAR_0);
sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
ATprotectSymbol(sym_NUM_0);
sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
ATprotectSymbol(sym_MATH_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeInt(39);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeInt(96);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_TDTD_0);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym_HR_0);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeInt(1);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(sym_NBSP_0);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeInt(0);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_BR_0);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym_IS_0);
ATprotect(&(term99));
term99 = term98;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm copy_0_0 (StrSL sl, ATerm t);
ATerm separate_by_1_0 (StrSL sl, StrCL z_60, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm listtd_1_0 (StrSL sl, StrCL q_60, ATerm t);
ATerm at_last_1_0 (StrSL sl, StrCL k_60, ATerm t);
ATerm split_fetch_1_0 (StrSL sl, StrCL c_60, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL a_60, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL u_59, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL a_59, ATerm t);
ATerm split_2_0 (StrSL sl, StrCL p_54, StrCL q_54, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL f_40, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL l_34, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL o_33, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL n_33, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL q_16, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm R_2_0 (StrSL sl, StrCL q_13, StrCL r_13, ATerm t);
ATerm L_2_0 (StrSL sl, StrCL g_13, StrCL h_13, ATerm t);
ATerm LNAT_2_0 (StrSL sl, StrCL e_13, StrCL f_13, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm h_12 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
ATerm make_html_comment_0_0 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
ATerm Distribute_0_0 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm normalize_0_0 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
ATerm sep_by_1_0 (StrSL sl, StrCL l_10, ATerm t);
ATerm Ispace_0_0 (StrSL sl, ATerm t);
ATerm Vspace_0_0 (StrSL sl, ATerm t);
ATerm Hspace_0_0 (StrSL sl, ATerm t);
ATerm tov_1_0 (StrSL sl, StrCL x_9, ATerm t);
ATerm make_hs_0_0 (StrSL sl, ATerm t);
ATerm aopt_0_0 (StrSL sl, ATerm t);
static ATerm f_9 (StrSL sl, ATerm t);
ATerm toa_1_0 (StrSL sl, StrCL e_9, ATerm t);
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
ATerm Abox2html_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm abox2html_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm replace_quotes_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm html_string_0_0 (StrSL sl, ATerm t);
ATerm Html2text_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm a_6 (StrSL sl, ATerm t);
ATerm remove_trailing_1_0 (StrSL sl, StrCL z_5, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm flat_list_1_0 (StrSL sl, StrCL o_15, ATerm t);
static ATerm s_4 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm construct_rows_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm SOpt_value_0_1 (StrSL sl, ATerm c_4, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm topdown_print_to_0_0 (StrSL sl, ATerm t);
ATerm R_2_0 (StrSL sl, StrCL q_13, StrCL r_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "R_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_90 = NULL,c_90 = NULL,d_90 = NULL,f_90 = NULL,g_90 = NULL;
ATerm trm125;
trm125 = (ATerm) ATgetAnnotations(t);
if((trm125 == NULL))
trm125 = (ATerm) ATempty;
if(match_cons(t, sym_R_2))
{
c_90 = ATgetArgument(t, 0);
d_90 = ATgetArgument(t, 1);
}
else
goto fail70 ;
e_90 = trm125;
t = c_90;
t = cl_fun(q_13)(cl_sl(q_13), t);
if((t == NULL))
goto fail70 ;
f_90 = t;
t = d_90;
t = cl_fun(r_13)(cl_sl(r_13), t);
if((t == NULL))
goto fail70 ;
g_90 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_R_2, f_90, g_90), e_90);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm L_2_0 (StrSL sl, StrCL g_13, StrCL h_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "L_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_88 = NULL,u_88 = NULL,w_88 = NULL,z_88 = NULL,a_89 = NULL;
ATerm trm124;
trm124 = (ATerm) ATgetAnnotations(t);
if((trm124 == NULL))
trm124 = (ATerm) ATempty;
if(match_cons(t, sym_L_2))
{
u_88 = ATgetArgument(t, 0);
w_88 = ATgetArgument(t, 1);
}
else
goto fail69 ;
x_88 = trm124;
t = u_88;
t = cl_fun(g_13)(cl_sl(g_13), t);
if((t == NULL))
goto fail69 ;
z_88 = t;
t = w_88;
t = cl_fun(h_13)(cl_sl(h_13), t);
if((t == NULL))
goto fail69 ;
a_89 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_L_2, z_88, a_89), x_88);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm LNAT_2_0 (StrSL sl, StrCL e_13, StrCL f_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "LNAT_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_88 = NULL,k_88 = NULL,m_88 = NULL,r_88 = NULL,t_88 = NULL;
ATerm trm123;
trm123 = (ATerm) ATgetAnnotations(t);
if((trm123 == NULL))
trm123 = (ATerm) ATempty;
if(match_cons(t, sym_LNAT_2))
{
k_88 = ATgetArgument(t, 0);
m_88 = ATgetArgument(t, 1);
}
else
goto fail68 ;
n_88 = trm123;
t = k_88;
t = cl_fun(e_13)(cl_sl(e_13), t);
if((t == NULL))
goto fail68 ;
r_88 = t;
t = m_88;
t = cl_fun(f_13)(cl_sl(f_13), t);
if((t == NULL))
goto fail68 ;
t_88 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, r_88, t_88), n_88);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_97 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(m_97);
t = xtc_io_wrap_1_0(sl, lifted51_cl, t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_from_0_0(sl_up(sl), t);
if((t == NULL))
goto fail67 ;
t = abox2html_0_0(sl_up(sl), t);
if((t == NULL))
goto fail67 ;
t = topdown_print_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail67 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm make_html_comment_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "make_html_comment_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_97 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(f_97);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail58 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail58 ;
{
struct str_closure g_97 = { &(_Id) , sl };
StrCL lifted44_cl = &(g_97);
struct str_closure h_97 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(h_97);
t = split_2_0(sl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail58 ;
t = h_12(&(frame), t);
if((t == NULL))
goto fail58 ;
{
struct str_closure k_97 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(k_97);
t = remove_trailing_1_0(sl, lifted48_cl, t);
if((t == NULL))
goto fail58 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail58 ;
{
struct str_closure l_97 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(l_97);
t = remove_trailing_1_0(sl, lifted49_cl, t);
if((t == NULL))
goto fail58 ;
t = map_1_0(sl, lifted50_cl, t);
if((t == NULL))
goto fail58 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail65 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail64 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm h_12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "h_12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_11 = NULL,i_11 = NULL,k_11 = NULL;
ATerm trm113 = t;
ATerm j_12 = NULL,k_12 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm114 = ATgetArgument(t, 0);
if(!(((ATgetType(trm114) == AT_LIST) && ATisEmpty(trm114))))
goto label89 ;
i_11 = ATgetArgument(t, 1);
}
else
goto label89 ;
k_12 = t;
t = i_11;
{
struct str_closure i_97 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(i_97);
t = remove_trailing_1_0(sl_up(sl), lifted46_cl, t);
if((t == NULL))
goto label89 ;
t = implode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label89 ;
j_12 = t;
t = k_12;
t = (ATerm) ATinsert(ATempty, j_12);
}
goto label88 ;
label89 :
t = trm113;
{
ATerm trm116 = t;
ATerm l_12 = NULL,n_12 = NULL,m_12 = NULL,o_12 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm117 = ATgetArgument(t, 0);
if(((ATgetType(trm117) == AT_LIST) && !(ATisEmpty(trm117))))
{
ATerm trm118 = ATgetFirst((ATermList) trm117);
if(!(((ATgetType(trm118) == AT_INT) && (ATgetInt((ATermInt) trm118) == 10))))
goto label92 ;
h_11 = (ATerm) ATgetNext((ATermList) trm117);
}
else
goto label92 ;
i_11 = ATgetArgument(t, 1);
}
else
goto label92 ;
n_12 = t;
t = i_11;
{
struct str_closure j_97 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(j_97);
t = remove_trailing_1_0(sl_up(sl), lifted47_cl, t);
if((t == NULL))
goto label92 ;
t = implode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label92 ;
l_12 = t;
t = n_12;
o_12 = t;
t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATempty);
t = h_12(sl, t);
if((t == NULL))
goto label92 ;
m_12 = t;
t = o_12;
{
ATerm trm120;
trm120 = CheckATermList(m_12);
if((trm120 == NULL))
goto label92 ;
t = (ATerm) ATinsert((ATermList)trm120, l_12);
}
}
goto label88 ;
label92 :
t = trm116;
if(match_cons(t, sym__2))
{
ATerm trm121 = ATgetArgument(t, 0);
if(((ATgetType(trm121) == AT_LIST) && !(ATisEmpty(trm121))))
{
k_11 = ATgetFirst((ATermList) trm121);
h_11 = (ATerm) ATgetNext((ATermList) trm121);
}
else
goto fail61 ;
i_11 = ATgetArgument(t, 1);
}
else
goto fail61 ;
{
ATerm trm122;
trm122 = CheckATermList(i_11);
if((trm122 == NULL))
goto fail61 ;
t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATinsert((ATermList)trm122, k_11));
t = h_12(sl, t);
if((t == NULL))
goto fail61 ;
else
goto label88 ;
}
}
label88 :
;
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
ATerm trm119 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label94 ;
goto label93 ;
label94 :
t = trm119;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32)))
goto label93 ;
else
goto fail63 ;
label93 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm115 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label91 ;
goto label90 ;
label91 :
t = trm115;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32)))
goto label90 ;
else
goto fail62 ;
label90 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_11 = NULL;
l_11 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term97), l_11);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm Distribute_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Distribute_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(6);
{
ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,e_11 = NULL,f_11 = NULL;
sl_init_var(0, q_10);
sl_init_var(1, r_10);
sl_init_var(2, s_10);
sl_init_var(3, t_10);
sl_init_var(4, u_10);
sl_init_var(5, w_10);
if(match_cons(t, sym_H_2))
{
if((u_10 == NULL))
{
u_10 = ATgetArgument(t, 0);
}
else
if((u_10 != ATgetArgument(t, 0)))
goto fail55 ;
p_10 = ATgetArgument(t, 1);
}
else
goto fail55 ;
t = p_10;
{
struct str_closure d_97 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(d_97);
t = split_fetch_1_0(sl, lifted42_cl, t);
if((t == NULL))
goto fail55 ;
if(match_cons(t, sym__2))
{
v_10 = ATgetArgument(t, 0);
if((t_10 == NULL))
{
t_10 = ATgetArgument(t, 1);
}
else
if((t_10 != ATgetArgument(t, 1)))
goto fail55 ;
}
else
goto fail55 ;
if((t_10 == NULL))
goto fail55 ;
else
{
t = t_10;
}
{
ATerm trm108 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label87 ;
goto fail55 ;
label87 :
t = trm108;
goto label86 ;
label86 :
;
if(((q_10 == NULL) || (r_10 == NULL)))
goto fail55 ;
else
{
ATerm trm109;
trm109 = CheckATermList(r_10);
if((trm109 == NULL))
goto fail55 ;
t = (ATerm) ATinsert((ATermList)trm109, q_10);
}
{
struct str_closure e_97 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(e_97);
t = at_last_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto fail55 ;
x_10 = t;
f_11 = t;
if((w_10 == NULL))
goto fail55 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, v_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, w_10, x_10)));
}
t = conc_0_0(sl, t);
if((t == NULL))
goto fail55 ;
e_11 = t;
t = f_11;
if((u_10 == NULL))
goto fail55 ;
else
{
t = (ATerm) ATmakeAppl(sym_H_2, u_10, e_11);
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL;
ATerm trm110;
trm110 = (ATerm) ATgetAnnotations(t);
if((trm110 == NULL))
trm110 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
y_10 = ATgetFirst((ATermList) t);
z_10 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail57 ;
d_11 = trm110;
t = y_10;
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail57 ;
a_11 = t;
t = z_10;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail57 ;
c_11 = t;
{
ATerm trm111;
trm111 = CheckATermList(c_11);
if((trm111 == NULL))
goto fail57 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm111, a_11), d_11);
if(((sl_readvar(4, sl) == NULL) || ((sl_readvar(2, sl) == NULL) || (sl_readvar(3, sl) == NULL))))
goto fail57 ;
else
{
ATerm trm112;
trm112 = CheckATermList(sl_readvar(3, sl));
if((trm112 == NULL))
goto fail57 ;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, sl_readvar(4, sl), (ATerm) ATinsert((ATermList)trm112, sl_readvar(2, sl))));
}
}
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
if(match_cons(t, sym_V_2))
{
if((sl_readvar(5, sl) == NULL))
{
sl_readvar(5, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(5, sl) != ATgetArgument(t, 0)))
goto fail56 ;
{
ATerm trm107 = ATgetArgument(t, 1);
if(((ATgetType(trm107) == AT_LIST) && !(ATisEmpty(trm107))))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetFirst((ATermList) trm107);
}
else
if((sl_readvar(0, sl) != ATgetFirst((ATermList) trm107)))
goto fail56 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = (ATerm) ATgetNext((ATermList) trm107);
}
else
if((sl_readvar(1, sl) != (ATerm) ATgetNext((ATermList) trm107)))
goto fail56 ;
}
else
goto fail56 ;
}
}
else
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm normalize_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "normalize_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_97 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(c_97);
t = topdown_1_0(sl, lifted40_cl, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_97 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(b_97);
t = try_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm99 = t;
ATerm m_10 = NULL;
if(match_cons(t, sym_H_2))
{
ATerm trm100 = ATgetArgument(t, 0);
ATerm trm101 = ATgetArgument(t, 1);
if(((ATgetType(trm101) == AT_LIST) && !(ATisEmpty(trm101))))
{
m_10 = ATgetFirst((ATermList) trm101);
{
ATerm trm102 = (ATerm) ATgetNext((ATermList) trm101);
if(!(((ATgetType(trm102) == AT_LIST) && ATisEmpty(trm102))))
goto label84 ;
}
}
else
goto label84 ;
}
else
goto label84 ;
t = m_10;
goto label83 ;
label84 :
t = trm99;
{
ATerm trm103 = t;
ATerm n_10 = NULL;
if(match_cons(t, sym_V_2))
{
ATerm trm104 = ATgetArgument(t, 0);
ATerm trm105 = ATgetArgument(t, 1);
if(((ATgetType(trm105) == AT_LIST) && !(ATisEmpty(trm105))))
{
n_10 = ATgetFirst((ATermList) trm105);
{
ATerm trm106 = (ATerm) ATgetNext((ATermList) trm105);
if(!(((ATgetType(trm106) == AT_LIST) && ATisEmpty(trm106))))
goto label85 ;
}
}
else
goto label85 ;
}
else
goto label85 ;
t = n_10;
goto label83 ;
label85 :
t = trm103;
t = Distribute_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail54 ;
else
goto label83 ;
}
label83 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
ATerm sep_by_1_0 (StrSL sl, StrCL l_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sep_by_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_97 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(a_97);
t = map_1_0(sl, lifted39_cl, t);
if((t == NULL))
goto fail50 ;
t = separate_by_1_0(sl, l_10, t);
if((t == NULL))
goto fail50 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_10 = NULL;
k_10 = t;
t = (ATerm) ATinsert(ATempty, k_10);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm Ispace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Ispace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm97 = t;
ATerm w_94 = NULL,y_94 = NULL;
y_94 = t;
t = term99;
w_94 = t;
t = y_94;
t = SOpt_value_0_1(sl, w_94, t);
if((t == NULL))
goto label80 ;
goto label79 ;
label80 :
t = trm97;
t = term95;
goto label79 ;
label79 :
;
{
ATerm trm98 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto label82 ;
t = term69;
goto label81 ;
label82 :
t = trm98;
{
ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
h_10 = t;
j_10 = t;
i_10 = t;
t = (ATerm) ATmakeAppl(sym__2, i_10, term91);
t = copy_0_0(sl, t);
if((t == NULL))
goto fail49 ;
g_10 = t;
t = h_10;
t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, g_10);
goto label81 ;
}
label81 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm Vspace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Vspace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm95 = t;
ATerm u_94 = NULL,v_94 = NULL;
v_94 = t;
t = term93;
u_94 = t;
t = v_94;
t = SOpt_value_0_1(sl, u_94, t);
if((t == NULL))
goto label76 ;
goto label75 ;
label76 :
t = trm95;
t = term95;
goto label75 ;
label75 :
;
{
ATerm trm96 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto label78 ;
t = term69;
goto label77 ;
label78 :
t = trm96;
{
ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
d_10 = t;
f_10 = t;
e_10 = t;
t = (ATerm) ATmakeAppl(sym__2, e_10, term97);
t = copy_0_0(sl, t);
if((t == NULL))
goto fail48 ;
c_10 = t;
t = d_10;
t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, c_10)));
goto label77 ;
}
label77 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm Hspace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Hspace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm93 = t;
ATerm s_94 = NULL,t_94 = NULL;
t_94 = t;
t = term87;
s_94 = t;
t = t_94;
t = SOpt_value_0_1(sl, s_94, t);
if((t == NULL))
goto label72 ;
goto label71 ;
label72 :
t = trm93;
t = term89;
goto label71 ;
label71 :
;
{
ATerm trm94 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto label74 ;
t = (ATerm) ATempty;
goto label73 ;
label74 :
t = trm94;
{
ATerm a_10 = NULL,b_10 = NULL;
b_10 = t;
a_10 = t;
t = (ATerm) ATmakeAppl(sym__2, a_10, term91);
t = copy_0_0(sl, t);
if((t == NULL))
goto fail47 ;
else
goto label73 ;
}
label73 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm tov_1_0 (StrSL sl, StrCL x_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tov_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_9 = NULL,w_9 = NULL;
ATerm trm91 = t;
struct str_closure w_96 = { &(_Id) , sl };
StrCL lifted35_cl = &(w_96);
struct str_closure x_96 = { &(_Id) , sl };
StrCL lifted36_cl = &(x_96);
t = L_2_0(sl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto label69 ;
goto label68 ;
label69 :
t = trm91;
{
ATerm trm92 = t;
struct str_closure y_96 = { &(_Id) , sl };
StrCL lifted37_cl = &(y_96);
struct str_closure z_96 = { &(_Id) , sl };
StrCL lifted38_cl = &(z_96);
t = LNAT_2_0(sl, lifted37_cl, lifted38_cl, t);
if((t == NULL))
goto label70 ;
goto label68 ;
label70 :
t = trm92;
{
ATerm y_9 = NULL,z_9 = NULL;
v_9 = t;
z_9 = t;
t = term77;
t = cl_fun(x_9)(cl_sl(x_9), t);
if((t == NULL))
goto fail46 ;
y_9 = t;
t = z_9;
t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term85), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_9))), y_9))));
goto label68 ;
}
}
label68 :
;
w_9 = t;
t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term85), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_9))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm make_hs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "make_hs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm88 = t;
ATerm p_94 = NULL;
if(match_cons(t, sym_AL_1))
{
p_94 = ATgetArgument(t, 0);
}
else
goto label64 ;
t = p_94;
goto label63 ;
label64 :
t = trm88;
{
ATerm trm89 = t;
ATerm q_94 = NULL;
if(match_cons(t, sym_AR_1))
{
q_94 = ATgetArgument(t, 0);
}
else
goto label65 ;
t = q_94;
goto label63 ;
label65 :
t = trm89;
{
ATerm r_94 = NULL;
if(match_cons(t, sym_AC_1))
{
r_94 = ATgetArgument(t, 0);
}
else
goto fail45 ;
t = r_94;
goto label63 ;
}
}
label63 :
;
t = Hspace_0_0(sl, t);
if((t == NULL))
goto fail45 ;
{
ATerm trm90 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label67 ;
goto label66 ;
label67 :
t = trm90;
{
ATerm t_9 = NULL,u_9 = NULL;
u_9 = t;
t_9 = t;
t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, t_9);
goto label66 ;
}
label66 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm aopt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aopt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm83 = t;
if(match_cons(t, sym_AL_1))
{
ATerm trm84 = ATgetArgument(t, 0);
}
else
goto label61 ;
t = term79;
goto label60 ;
label61 :
t = trm83;
{
ATerm trm85 = t;
if(match_cons(t, sym_AR_1))
{
ATerm trm86 = ATgetArgument(t, 0);
}
else
goto label62 ;
t = term81;
goto label60 ;
label62 :
t = trm85;
if(match_cons(t, sym_AC_1))
{
ATerm trm87 = ATgetArgument(t, 0);
}
else
goto fail44 ;
t = term83;
goto label60 ;
}
label60 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm toa_1_0 (StrSL sl, StrCL e_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "toa_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,g_9 = NULL;
if(match_cons(t, sym_R_2))
{
ATerm trm61 = ATgetArgument(t, 0);
if(!(((ATgetType(trm61) == AT_LIST) && ATisEmpty(trm61))))
goto fail42 ;
v_8 = ATgetArgument(t, 1);
}
else
goto fail42 ;
g_9 = t;
t = term77;
t = cl_fun(e_9)(cl_sl(e_9), t);
if((t == NULL))
goto fail42 ;
if(match_cons(t, sym_AOPTIONS_1))
{
w_8 = ATgetArgument(t, 0);
}
else
goto fail42 ;
t = (ATerm) ATmakeAppl(sym__2, v_8, w_8);
t = f_9(&(frame), t);
if((t == NULL))
goto fail42 ;
x_8 = t;
t = g_9;
t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term85), (ATerm) ATinsert(ATempty, x_8));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm f_9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "f_9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
ATerm trm62 = t;
if(match_cons(t, sym__2))
{
ATerm trm63 = ATgetArgument(t, 0);
if(!(((ATgetType(trm63) == AT_LIST) && ATisEmpty(trm63))))
goto label54 ;
{
ATerm trm64 = ATgetArgument(t, 1);
}
}
else
goto label54 ;
t = (ATerm) ATempty;
goto label53 ;
label54 :
t = trm62;
{
ATerm trm65 = t;
ATerm h_9 = NULL,i_9 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm66 = ATgetArgument(t, 0);
if(((ATgetType(trm66) == AT_LIST) && !(ATisEmpty(trm66))))
{
ATerm trm67 = ATgetFirst((ATermList) trm66);
if(match_cons(trm67, sym_C_2))
{
y_8 = ATgetArgument(trm67, 0);
z_8 = ATgetArgument(trm67, 1);
}
else
goto label55 ;
b_9 = (ATerm) ATgetNext((ATermList) trm66);
}
else
goto label55 ;
d_9 = ATgetArgument(t, 1);
}
else
goto label55 ;
i_9 = t;
t = (ATerm) ATmakeAppl(sym__2, b_9, d_9);
t = f_9(sl, t);
if((t == NULL))
goto label55 ;
h_9 = t;
t = i_9;
{
ATerm trm68;
trm68 = CheckATermList(h_9);
if((trm68 == NULL))
goto label55 ;
t = (ATerm) ATinsert((ATermList)trm68, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_8, z_8))));
}
goto label53 ;
label55 :
t = trm65;
{
ATerm trm69 = t;
ATerm j_9 = NULL,m_9 = NULL,k_9 = NULL,n_9 = NULL,l_9 = NULL,o_9 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm70 = ATgetArgument(t, 0);
if(((ATgetType(trm70) == AT_LIST) && !(ATisEmpty(trm70))))
{
y_8 = ATgetFirst((ATermList) trm70);
{
ATerm trm71 = (ATerm) ATgetNext((ATermList) trm70);
if(((ATgetType(trm71) == AT_LIST) && !(ATisEmpty(trm71))))
{
a_9 = ATgetFirst((ATermList) trm71);
b_9 = (ATerm) ATgetNext((ATermList) trm71);
}
else
goto label56 ;
}
}
else
goto label56 ;
{
ATerm trm72 = ATgetArgument(t, 1);
if(((ATgetType(trm72) == AT_LIST) && !(ATisEmpty(trm72))))
{
c_9 = ATgetFirst((ATermList) trm72);
d_9 = (ATerm) ATgetNext((ATermList) trm72);
}
else
goto label56 ;
}
}
else
goto label56 ;
m_9 = t;
t = c_9;
{
ATerm trm73 = t;
if(match_cons(t, sym_AL_1))
{
ATerm trm74 = ATgetArgument(t, 0);
}
else
goto label58 ;
t = term79;
goto label57 ;
label58 :
t = trm73;
{
ATerm trm75 = t;
if(match_cons(t, sym_AR_1))
{
ATerm trm76 = ATgetArgument(t, 0);
}
else
goto label59 ;
t = term81;
goto label57 ;
label59 :
t = trm75;
if(match_cons(t, sym_AC_1))
{
ATerm trm77 = ATgetArgument(t, 0);
}
else
goto label56 ;
t = term83;
goto label57 ;
}
label57 :
;
j_9 = t;
t = m_9;
n_9 = t;
t = c_9;
t = make_hs_0_0(sl_up(sl), t);
if((t == NULL))
goto label56 ;
k_9 = t;
t = n_9;
o_9 = t;
{
ATerm trm78;
trm78 = CheckATermList(b_9);
if((trm78 == NULL))
goto label56 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert((ATermList)trm78, a_9), d_9);
t = f_9(sl, t);
if((t == NULL))
goto label56 ;
l_9 = t;
t = o_9;
{
ATerm trm79;
trm79 = CheckATermList(l_9);
if((trm79 == NULL))
goto label56 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm79, k_9), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, j_9), y_8));
}
}
}
goto label53 ;
label56 :
t = trm69;
{
ATerm p_9 = NULL,r_9 = NULL,q_9 = NULL,s_9 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm80 = ATgetArgument(t, 0);
if(((ATgetType(trm80) == AT_LIST) && !(ATisEmpty(trm80))))
{
y_8 = ATgetFirst((ATermList) trm80);
b_9 = (ATerm) ATgetNext((ATermList) trm80);
}
else
goto fail43 ;
{
ATerm trm81 = ATgetArgument(t, 1);
if(((ATgetType(trm81) == AT_LIST) && !(ATisEmpty(trm81))))
{
c_9 = ATgetFirst((ATermList) trm81);
d_9 = (ATerm) ATgetNext((ATermList) trm81);
}
else
goto fail43 ;
}
}
else
goto fail43 ;
r_9 = t;
t = c_9;
t = aopt_0_0(sl_up(sl), t);
if((t == NULL))
goto fail43 ;
p_9 = t;
t = r_9;
s_9 = t;
t = (ATerm) ATmakeAppl(sym__2, b_9, d_9);
t = f_9(sl, t);
if((t == NULL))
goto fail43 ;
q_9 = t;
t = s_9;
{
ATerm trm82;
trm82 = CheckATermList(q_9);
if((trm82 == NULL))
goto fail43 ;
t = (ATerm) ATinsert((ATermList)trm82, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, p_9), y_8));
goto label53 ;
}
}
}
}
label53 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm Abox2html_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Abox2html_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(6);
{
ATerm trm38 = t;
ATerm u_8 = NULL;
if(match_cons(t, sym_S_1))
{
u_8 = ATgetArgument(t, 0);
}
else
goto label27 ;
t = u_8;
t = html_string_0_0(sl, t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm38;
{
ATerm trm39 = t;
ATerm q_8 = NULL,r_8 = NULL,t_8 = NULL;
if(match_cons(t, sym_C_2))
{
ATerm trm40 = ATgetArgument(t, 0);
if(!(((ATgetType(trm40) == AT_LIST) && ATisEmpty(trm40))))
goto label28 ;
q_8 = ATgetArgument(t, 1);
}
else
goto label28 ;
t_8 = t;
t = q_8;
{
struct str_closure c_96 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(c_96);
t = map_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto label28 ;
r_8 = t;
t = t_8;
t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATempty, r_8)))));
}
goto label26 ;
label28 :
t = trm39;
{
ATerm trm41 = t;
ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
if(match_cons(t, sym_FBOX_2))
{
m_8 = ATgetArgument(t, 0);
n_8 = ATgetArgument(t, 1);
}
else
goto label29 ;
p_8 = t;
t = m_8;
{
ATerm trm42 = t;
if(!(match_cons(t, sym_KW_0)))
goto label31 ;
t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term61), (ATerm) ATinsert(ATempty, n_8));
goto label30 ;
label31 :
t = trm42;
{
ATerm trm43 = t;
if(!(match_cons(t, sym_VAR_0)))
goto label32 ;
t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term63), (ATerm) ATinsert(ATempty, n_8));
goto label30 ;
label32 :
t = trm43;
{
ATerm trm44 = t;
if(!(match_cons(t, sym_NUM_0)))
goto label33 ;
t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term65), (ATerm) ATinsert(ATempty, n_8));
goto label30 ;
label33 :
t = trm44;
{
ATerm trm45 = t;
if(!(match_cons(t, sym_MATH_0)))
goto label34 ;
t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term67), (ATerm) ATinsert(ATempty, n_8));
goto label30 ;
label34 :
t = trm45;
t = n_8;
goto label30 ;
}
}
}
label30 :
;
o_8 = t;
t = p_8;
t = o_8;
}
goto label26 ;
label29 :
t = trm41;
{
ATerm trm46 = t;
ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
sl_init_var(0, j_8);
if(match_cons(t, sym_H_2))
{
h_8 = ATgetArgument(t, 0);
i_8 = ATgetArgument(t, 1);
}
else
goto label35 ;
l_8 = t;
t = h_8;
t = Hspace_0_0(sl, t);
if((t == NULL))
goto label35 ;
if((j_8 == NULL))
{
j_8 = t;
}
else
if((j_8 != t))
goto label35 ;
t = i_8;
{
struct str_closure d_96 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(d_96);
t = filter_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto label35 ;
{
struct str_closure e_96 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(e_96);
t = sep_by_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto label35 ;
k_8 = t;
t = l_8;
t = k_8;
}
}
goto label26 ;
label35 :
t = trm46;
{
ATerm trm48 = t;
ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,g_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
sl_init_var(1, y_7);
sl_init_var(2, z_7);
if(match_cons(t, sym_V_2))
{
w_7 = ATgetArgument(t, 0);
x_7 = ATgetArgument(t, 1);
}
else
goto label38 ;
g_8 = t;
t = w_7;
t = Vspace_0_0(sl, t);
if((t == NULL))
goto label38 ;
if((z_7 == NULL))
{
z_7 = t;
}
else
if((z_7 != t))
goto label38 ;
t = w_7;
t = Ispace_0_0(sl, t);
if((t == NULL))
goto label38 ;
if((y_7 == NULL))
{
y_7 = t;
}
else
if((y_7 != t))
goto label38 ;
t = x_7;
{
struct str_closure f_96 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(f_96);
t = filter_1_0(sl, lifted23_cl, t);
if((t == NULL))
goto label38 ;
{
ATerm trm50;
trm50 = (ATerm) ATgetAnnotations(t);
if((trm50 == NULL))
trm50 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
b_8 = ATgetFirst((ATermList) t);
c_8 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label38 ;
f_8 = trm50;
t = b_8;
{
struct str_closure h_96 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(h_96);
t = tov_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto label38 ;
d_8 = t;
t = c_8;
{
struct str_closure k_96 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(k_96);
t = map_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto label38 ;
e_8 = t;
{
ATerm trm51;
trm51 = CheckATermList(e_8);
if((trm51 == NULL))
goto label38 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm51, d_8), f_8);
{
struct str_closure m_96 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(m_96);
t = separate_by_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto label38 ;
a_8 = t;
t = g_8;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, a_8)), term71);
}
}
}
}
}
}
goto label26 ;
label38 :
t = trm48;
{
ATerm trm52 = t;
ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
sl_init_var(3, q_7);
if(match_cons(t, sym_HV_2))
{
o_7 = ATgetArgument(t, 0);
r_7 = ATgetArgument(t, 1);
}
else
goto label41 ;
t_7 = t;
t = o_7;
t = Hspace_0_0(sl, t);
if((t == NULL))
goto label41 ;
p_7 = t;
{
ATerm trm53 = t;
struct str_closure o_96 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(o_96);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label43 ;
t = r_7;
t = filter_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto label43 ;
goto label42 ;
label43 :
t = trm53;
{
ATerm u_7 = NULL,v_7 = NULL;
struct str_closure p_96 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(p_96);
t = at_last_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto label41 ;
if((q_7 == NULL))
{
q_7 = t;
}
else
if((q_7 != t))
goto label41 ;
v_7 = t;
t = r_7;
{
struct str_closure r_96 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(r_96);
t = filter_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto label41 ;
{
struct str_closure s_96 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(s_96);
t = separate_by_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto label41 ;
u_7 = t;
t = v_7;
t = (ATerm) ATinsert(ATinsert(ATempty, u_7), term71);
goto label42 ;
}
}
}
label42 :
;
s_7 = t;
t = t_7;
t = s_7;
}
goto label26 ;
label41 :
t = trm52;
{
ATerm trm56 = t;
ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,m_7 = NULL,n_7 = NULL;
sl_init_var(4, h_7);
sl_init_var(5, i_7);
if(match_cons(t, sym_A_3))
{
if((h_7 == NULL))
{
h_7 = ATgetArgument(t, 0);
}
else
if((h_7 != ATgetArgument(t, 0)))
goto label48 ;
f_7 = ATgetArgument(t, 1);
e_7 = ATgetArgument(t, 2);
}
else
goto label48 ;
n_7 = t;
t = e_7;
t = construct_rows_0_0(sl, t);
if((t == NULL))
goto label48 ;
g_7 = t;
t = f_7;
t = Vspace_0_0(sl, t);
if((t == NULL))
goto label48 ;
if((i_7 == NULL))
{
i_7 = t;
}
else
if((i_7 != t))
goto label48 ;
t = g_7;
{
struct str_closure u_96 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(u_96);
t = map_1_0(sl, lifted32_cl, t);
if((t == NULL))
goto label48 ;
{
struct str_closure v_96 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(v_96);
t = separate_by_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto label48 ;
m_7 = t;
t = n_7;
t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_7)))));
}
}
goto label26 ;
label48 :
t = trm56;
{
ATerm trm57 = t;
ATerm c_7 = NULL,d_7 = NULL;
if(match_cons(t, sym_ALT_2))
{
d_7 = ATgetArgument(t, 0);
c_7 = ATgetArgument(t, 1);
}
else
goto label49 ;
t = d_7;
goto label26 ;
label49 :
t = trm57;
{
ATerm trm58 = t;
ATerm a_7 = NULL,b_7 = NULL;
if(match_cons(t, sym_L_2))
{
a_7 = ATgetArgument(t, 0);
b_7 = ATgetArgument(t, 1);
}
else
goto label50 ;
t = term75;
goto label26 ;
label50 :
t = trm58;
{
ATerm trm59 = t;
ATerm y_6 = NULL,z_6 = NULL;
if(match_cons(t, sym_LNAT_2))
{
y_6 = ATgetArgument(t, 0);
z_6 = ATgetArgument(t, 1);
}
else
goto label51 ;
t = term75;
goto label26 ;
label51 :
t = trm59;
{
ATerm trm60 = t;
ATerm w_6 = NULL,x_6 = NULL;
if(match_cons(t, sym_LBL_2))
{
w_6 = ATgetArgument(t, 0);
x_6 = ATgetArgument(t, 1);
}
else
goto label52 ;
t = (ATerm) ATinsert(ATinsert(ATempty, x_6), (ATerm) ATmakeAppl(sym_ANCHOR_1, w_6));
goto label26 ;
label52 :
t = trm60;
{
ATerm u_6 = NULL,v_6 = NULL;
if(match_cons(t, sym_REF_2))
{
u_6 = ATgetArgument(t, 0);
v_6 = ATgetArgument(t, 1);
}
else
goto fail26 ;
t = (ATerm) ATmakeAppl(sym_HREF_2, u_6, v_6);
goto label26 ;
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
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(5, sl) == NULL))
goto fail41 ;
else
{
t = sl_readvar(5, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_96 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(t_96);
t = toa_1_0(sl_up(sl), lifted33_cl, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(4, sl_up(sl)) == NULL))
goto fail40 ;
else
{
t = sl_readvar(4, sl_up(sl));
}
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
if((sl_readvar(3, sl) == NULL))
goto fail38 ;
else
{
t = sl_readvar(3, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm55 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label47 ;
goto fail37 ;
label47 :
t = trm55;
goto label46 ;
label46 :
;
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
t = (ATerm) ATinsert(ATempty, term73);
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
ATerm trm54 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label45 ;
goto fail35 ;
label45 :
t = trm54;
goto label44 ;
label44 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail34 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_96 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(j_96);
t = tov_1_0(sl_up(sl), lifted26_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl_up(sl)) == NULL))
goto fail33 ;
else
{
t = sl_readvar(1, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
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
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm49 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label40 ;
goto fail30 ;
label40 :
t = trm49;
goto label39 ;
label39 :
;
}
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
if((sl_readvar(0, sl) == NULL))
goto fail29 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm47 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label37 ;
goto fail28 ;
label37 :
t = trm47;
goto label36 ;
label36 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_8 = NULL;
if(match_cons(t, sym_S_1))
{
s_8 = ATgetArgument(t, 0);
}
else
goto fail27 ;
t = s_8;
t = make_html_comment_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm abox2html_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abox2html_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_6 = NULL,t_6 = NULL;
struct str_closure z_95 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(z_95);
t = normalize_0_0(sl, t);
if((t == NULL))
goto fail23 ;
{
struct str_closure b_96 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(b_96);
t = topdown_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail23 ;
t_6 = t;
s_6 = t;
t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, s_6)))));
t = bottomup_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto fail23 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_96 = { &(Abox2html_0_0) , sl_up(sl) };
StrCL lifted17_cl = &(a_96);
t = try_1_0(sl_up(sl), lifted17_cl, t);
if((t == NULL))
goto fail25 ;
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
struct str_closure y_95 = { &(Html2text_0_0) , sl_up(sl) };
StrCL lifted19_cl = &(y_95);
t = try_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm replace_quotes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "replace_quotes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL;
ATerm trm33;
trm33 = (ATerm) ATgetAnnotations(t);
if((trm33 == NULL))
trm33 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
k_6 = ATgetFirst((ATermList) t);
l_6 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail21 ;
o_6 = trm33;
t = k_6;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 34))))
goto fail21 ;
m_6 = t;
t = l_6;
j_6 = t;
n_6 = t;
{
ATerm trm34;
trm34 = CheckATermList(n_6);
if((trm34 == NULL))
goto fail21 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm34, m_6), o_6);
r_6 = t;
t = j_6;
{
struct str_closure v_95 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(v_95);
t = oncetd_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail21 ;
q_6 = t;
t = r_6;
{
ATerm trm37;
trm37 = CheckATermList(q_6);
if((trm37 == NULL))
goto fail21 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm37, term57), term57);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_6 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm35 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm35) == AT_INT) && (ATgetInt((ATermInt) trm35) == 34))))
goto fail22 ;
p_6 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail22 ;
{
ATerm trm36;
trm36 = CheckATermList(p_6);
if((trm36 == NULL))
goto fail22 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm36, term55), term55);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm html_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "html_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure n_95 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(n_95);
t = listtd_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure p_95 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(p_95);
t = map_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure u_95 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(u_95);
t = flat_list_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail16 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail16 ;
}
}
}
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
t = (ATerm) ATempty;
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
{
struct str_closure o_95 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(o_95);
t = try_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail18 ;
}
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
{
ATerm trm30 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label23 ;
t = term43;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label23 ;
goto label22 ;
label23 :
t = trm30;
{
ATerm trm31 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 38))))
goto label24 ;
t = term49;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label24 ;
goto label22 ;
label24 :
t = trm31;
{
ATerm trm32 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 60))))
goto label25 ;
t = term51;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label25 ;
goto label22 ;
label25 :
t = trm32;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 62))))
goto fail19 ;
t = term53;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail19 ;
else
goto label22 ;
}
}
label22 :
;
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
{
struct str_closure m_95 = { &(replace_quotes_0_0) , sl_up(sl) };
StrCL lifted11_cl = &(m_95);
t = try_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm Html2text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Html2text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
ATerm trm18 = t;
if(match_cons(t, sym_TABLE_2))
{
g_6 = ATgetArgument(t, 0);
d_6 = ATgetArgument(t, 1);
}
else
goto label10 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term3), d_6), term5), g_6), term7);
goto label9 ;
label10 :
t = trm18;
{
ATerm trm19 = t;
if(match_cons(t, sym_TR_2))
{
g_6 = ATgetArgument(t, 0);
e_6 = ATgetArgument(t, 1);
}
else
goto label11 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term9), e_6), term5), g_6), term11);
goto label9 ;
label11 :
t = trm19;
{
ATerm trm20 = t;
if(match_cons(t, sym_TD_2))
{
g_6 = ATgetArgument(t, 0);
f_6 = ATgetArgument(t, 1);
}
else
goto label12 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), f_6), term5), g_6), term15);
goto label9 ;
label12 :
t = trm20;
{
ATerm trm21 = t;
if(match_cons(t, sym_TD_p__1))
{
h_6 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term17), h_6), term13);
goto label9 ;
label13 :
t = trm21;
{
ATerm trm22 = t;
if(match_cons(t, sym_SPAN_2))
{
g_6 = ATgetArgument(t, 0);
h_6 = ATgetArgument(t, 1);
}
else
goto label14 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term19), h_6), term5), g_6), term21);
goto label9 ;
label14 :
t = trm22;
{
ATerm trm23 = t;
if(match_cons(t, sym_PRE_1))
{
h_6 = ATgetArgument(t, 0);
}
else
goto label15 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term23), h_6), term25);
goto label9 ;
label15 :
t = trm23;
{
ATerm trm24 = t;
if(match_cons(t, sym_TDTR_1))
{
h_6 = ATgetArgument(t, 0);
}
else
goto label16 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term27), h_6), term29);
goto label9 ;
label16 :
t = trm24;
{
ATerm trm25 = t;
if(match_cons(t, sym_HREF_2))
{
i_6 = ATgetArgument(t, 0);
h_6 = ATgetArgument(t, 1);
}
else
goto label17 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), h_6), term33), i_6), term35);
goto label9 ;
label17 :
t = trm25;
{
ATerm trm26 = t;
if(match_cons(t, sym_ANCHOR_1))
{
i_6 = ATgetArgument(t, 0);
}
else
goto label18 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term37), i_6), term39);
goto label9 ;
label18 :
t = trm26;
{
ATerm trm27 = t;
if(!(match_cons(t, sym_BR_0)))
goto label19 ;
t = term41;
goto label9 ;
label19 :
t = trm27;
{
ATerm trm28 = t;
if(!(match_cons(t, sym_NBSP_0)))
goto label20 ;
t = term43;
goto label9 ;
label20 :
t = trm28;
{
ATerm trm29 = t;
if(!(match_cons(t, sym_HR_0)))
goto label21 ;
t = term45;
goto label9 ;
label21 :
t = trm29;
if(!(match_cons(t, sym_TDTD_0)))
goto fail15 ;
t = term47;
goto label9 ;
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
label9 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm remove_trailing_1_0 (StrSL sl, StrCL z_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "remove_trailing_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, z_5);
t = a_6(&(frame), t);
if((t == NULL))
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm a_6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "a_6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_95 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(l_95);
t = try_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail13 ;
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
{
ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,b_6 = NULL;
ATerm trm16;
trm16 = (ATerm) ATgetAnnotations(t);
if((trm16 == NULL))
trm16 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_5 = ATgetFirst((ATermList) t);
v_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail14 ;
y_5 = trm16;
t = u_5;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail14 ;
w_5 = t;
t = v_5;
x_5 = t;
t = w_5;
t = x_5;
b_6 = t;
t = (ATerm) SRTS_setAnnotations(y_5, (ATerm) ATempty);
{
ATerm trm17;
trm17 = CheckATermList(x_5);
if((trm17 == NULL))
goto fail14 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm17, w_5), y_5);
t = b_6;
t = a_6(sl_up(sl), t);
if((t == NULL))
goto fail14 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm flat_list_1_0 (StrSL sl, StrCL o_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flat_list_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
sl_init_fun(0, o_15);
{
ATerm trm9 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label6 ;
t = cl_fun(o_15)(cl_sl(o_15), t);
if((t == NULL))
goto label6 ;
goto label5 ;
label6 :
t = trm9;
{
ATerm k_5 = NULL,l_5 = NULL;
sl_init_var(0, l_5);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
k_5 = ATgetFirst((ATermList) t);
if((l_5 == NULL))
{
l_5 = (ATerm) ATgetNext((ATermList) t);
}
else
if((l_5 != (ATerm) ATgetNext((ATermList) t)))
goto fail10 ;
}
else
goto fail10 ;
{
ATerm trm10 = t;
ATerm m_5 = NULL;
m_5 = t;
t = k_5;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label7 ;
t = m_5;
{
ATerm p_5 = NULL,q_5 = NULL;
q_5 = t;
if((l_5 == NULL))
goto fail10 ;
else
{
t = l_5;
}
t = flat_list_1_0(sl, o_15, t);
if((t == NULL))
goto fail10 ;
p_5 = t;
t = q_5;
{
ATerm trm11;
trm11 = CheckATermList(p_5);
if((trm11 == NULL))
goto fail10 ;
t = (ATerm) ATinsert((ATermList)trm11, (ATerm) ATempty);
goto label5 ;
}
}
label7 :
t = trm10;
{
ATerm trm12 = t;
ATerm n_5 = NULL;
n_5 = t;
t = k_5;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm13 = ATgetFirst((ATermList) t);
ATerm trm14 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label8 ;
t = n_5;
{
struct str_closure k_95 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(k_95);
t = k_5;
t = flat_list_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto fail10 ;
else
goto label5 ;
}
label8 :
t = trm12;
{
ATerm r_5 = NULL,s_5 = NULL;
s_5 = t;
if((l_5 == NULL))
goto fail10 ;
else
{
t = l_5;
}
t = flat_list_1_0(sl, o_15, t);
if((t == NULL))
goto fail10 ;
r_5 = t;
t = s_5;
{
ATerm trm15;
trm15 = CheckATermList(r_5);
if((trm15 == NULL))
goto fail10 ;
t = (ATerm) ATinsert((ATermList)trm15, k_5);
goto label5 ;
}
}
}
}
}
label5 :
;
}
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
if((sl_readvar(0, sl) == NULL))
goto fail11 ;
else
{
t = sl_readvar(0, sl);
}
t = flat_list_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail11 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm construct_rows_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "construct_rows_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_95 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(h_95);
struct str_closure i_95 = { &(_Id) , sl };
StrCL lifted3_cl = &(i_95);
struct str_closure j_95 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(j_95);
t = split_2_0(sl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto fail5 ;
t = s_4(&(frame), t);
if((t == NULL))
goto fail5 ;
t = filter_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm s_4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "s_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_4 = NULL,i_4 = NULL,o_4 = NULL,r_4 = NULL;
ATerm trm1 = t;
ATerm t_4 = NULL,u_4 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm2 = ATgetArgument(t, 0);
if(!(((ATgetType(trm2) == AT_LIST) && ATisEmpty(trm2))))
goto label3 ;
o_4 = ATgetArgument(t, 1);
}
else
goto label3 ;
u_4 = t;
t = o_4;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
t_4 = t;
t = u_4;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, t_4));
goto label2 ;
label3 :
t = trm1;
{
ATerm trm3 = t;
ATerm v_4 = NULL,y_4 = NULL,x_4 = NULL,z_4 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm4 = ATgetArgument(t, 0);
if(((ATgetType(trm4) == AT_LIST) && !(ATisEmpty(trm4))))
{
ATerm trm5 = ATgetFirst((ATermList) trm4);
if(match_cons(trm5, sym_R_2))
{
h_4 = ATgetArgument(trm5, 0);
i_4 = ATgetArgument(trm5, 1);
}
else
goto label4 ;
o_4 = (ATerm) ATgetNext((ATermList) trm4);
}
else
goto label4 ;
r_4 = ATgetArgument(t, 1);
}
else
goto label4 ;
y_4 = t;
t = r_4;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto label4 ;
v_4 = t;
t = y_4;
z_4 = t;
t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATempty);
t = s_4(sl, t);
if((t == NULL))
goto label4 ;
x_4 = t;
t = z_4;
{
ATerm trm6;
trm6 = CheckATermList(x_4);
if((trm6 == NULL))
goto label4 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm6, (ATerm) ATmakeAppl(sym_R_2, h_4, i_4)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, v_4));
}
goto label2 ;
label4 :
t = trm3;
if(match_cons(t, sym__2))
{
ATerm trm7 = ATgetArgument(t, 0);
if(((ATgetType(trm7) == AT_LIST) && !(ATisEmpty(trm7))))
{
h_4 = ATgetFirst((ATermList) trm7);
o_4 = (ATerm) ATgetNext((ATermList) trm7);
}
else
goto fail9 ;
r_4 = ATgetArgument(t, 1);
}
else
goto fail9 ;
{
ATerm trm8;
trm8 = CheckATermList(r_4);
if((trm8 == NULL))
goto fail9 ;
t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert((ATermList)trm8, h_4));
t = s_4(sl, t);
if((t == NULL))
goto fail9 ;
else
goto label2 ;
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
{
ATerm trm0 = t;
struct str_closure d_95 = { &(_Id) , sl_up(sl) };
StrCL lifted6_cl = &(d_95);
struct str_closure g_95 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(g_95);
t = R_2_0(sl_up(sl), lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label1 ;
goto fail6 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
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
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail7 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm SOpt_value_0_1 (StrSL sl, ATerm c_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SOpt_value_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, c_4);
{
ATerm d_4 = NULL;
sl_init_var(1, d_4);
{
struct str_closure c_95 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(c_95);
t = fetch_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail3 ;
if((d_4 == NULL))
goto fail3 ;
else
{
t = d_4;
}
t = string_to_int_0_0(sl, t);
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
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_SOpt_2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail4 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail4 ;
}
else
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm topdown_print_to_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "topdown_print_to_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,s_3 = NULL;
sl_init_var(0, n_3);
m_3 = t;
s_3 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail0 ;
l_3 = t;
t = (ATerm) ATmakeAppl(sym__2, l_3, term1);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail0 ;
if(match_cons(t, sym_Stream_1))
{
if((n_3 == NULL))
{
n_3 = ATgetArgument(t, 0);
}
else
if((n_3 != ATgetArgument(t, 0)))
goto fail0 ;
}
else
goto fail0 ;
t = m_3;
{
struct str_closure a_95 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(a_95);
t = topdown_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
if((n_3 == NULL))
goto fail0 ;
else
{
t = n_3;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = s_3;
t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
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
struct str_closure z_94 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(z_94);
t = try_1_0(sl_up(sl), lifted1_cl, t);
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
ATerm o_3 = NULL,m_94 = NULL,o_94 = NULL,n_94 = NULL;
t = is_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail2 ;
o_3 = t;
o_94 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail2 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
m_94 = t;
t = o_94;
n_94 = t;
t = SSL_fputs(n_94, m_94);
if((t == NULL))
goto fail2 ;
t = o_3;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 96));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(copy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(listtd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("listtd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_last_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_last_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(oncetd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("oncetd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fopen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fopen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_new_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_new_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(R_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("R_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(L_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("L_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(LNAT_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("LNAT_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(h_12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("h_12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_html_comment_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_html_comment_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Distribute_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Distribute_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(normalize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("normalize_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sep_by_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sep_by_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Ispace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Ispace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Vspace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Vspace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hspace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hspace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tov_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tov_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_hs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_hs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aopt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aopt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(f_9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("f_9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(toa_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("toa_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(Abox2html_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Abox2html_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abox2html_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abox2html_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(replace_quotes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("replace_quotes_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(html_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("html_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Html2text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Html2text_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(a_6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("a_6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_trailing_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_trailing_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flat_list_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flat_list_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(s_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("s_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(construct_rows_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("construct_rows_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SOpt_value_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SOpt_value_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_print_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_print_to_0_0", 0, ATtrue)), &(closures[closures_index]));
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
