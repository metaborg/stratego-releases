#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_stderr_0;
static Symbol sym_stdout_0;
static Symbol sym_Vomit_0;
static Symbol sym_Notice_0;
static Symbol sym_XTC_0;
static Symbol sym_Tool_1;
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
sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
ATprotectSymbol(sym_stderr_0);
sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
ATprotectSymbol(sym_stdout_0);
sym_Vomit_0 = ATmakeSymbol("Vomit", 0, ATfalse);
ATprotectSymbol(sym_Vomit_0);
sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
ATprotectSymbol(sym_Notice_0);
sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
ATprotectSymbol(sym_XTC_0);
sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
ATprotectSymbol(sym_Tool_1);
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_stdout_0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_XTC_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_Vomit_0);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving ", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_stderr_0);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("--exit-code", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(1);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym__2, term27, term29);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("   and querying XTC repositories", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("   The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_Notice_0);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("Using repository ", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeInt(0);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc failed! ", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool (directory)", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("--path", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("-p path | --path path        Location of tool (full path)", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(sym__2, term9, term81);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(sym__2, term13, term81);
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(sym__2, term1, term81);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("get tool...                  Query the standard XTC repository for all the specified tools\n", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL b_64, StrCL c_64, ATerm t);
ATerm table_getlist_0_0 (StrSL sl, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL v_54, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL o_54, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL n_35, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm fprint_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm extend_config_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm verbose_to_int_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL s_18, StrCL t_18, StrCL u_18, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL n_18, StrCL o_18, StrCL p_18, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL l_18, StrCL m_18, ATerm t);
ATerm parse_options_3_0 (StrSL sl, StrCL e_18, StrCL f_18, StrCL g_18, ATerm t);
ATerm err_0_1 (StrSL sl, ATerm d_17, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm y_16, ATerm z_16, ATerm t);
ATerm execvp_0_0 (StrSL sl, ATerm t);
ATerm Tool_1_0 (StrSL sl, StrCL k_12, ATerm t);
ATerm xtc_import_0_0 (StrSL sl, ATerm t);
ATerm xtc_read_0_0 (StrSL sl, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm register_import_0_0 (StrSL sl, ATerm t);
ATerm xtc_register_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_store_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm xtc_usage_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
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
static ATerm lifted38 (StrSL sl, ATerm t);
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
ATerm xtc_options_0_0 (StrSL sl, ATerm t);
ATerm xtc_xtc_call_0_0 (StrSL sl, ATerm t);
ATerm xtc_xtc_get_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm xtc_main_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm version_query_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm tool_query_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm list_tool_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm all_query_0_0 (StrSL sl, ATerm t);
ATerm repository_query_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm40 = t;
t = xtc_xtc_call_0_0(sl, t);
if((t == NULL))
goto label54 ;
goto label53 ;
label54 :
t = trm40;
{
ATerm trm41 = t;
t = xtc_xtc_get_0_0(sl, t);
if((t == NULL))
goto label55 ;
goto label53 ;
label55 :
t = trm41;
t = xtc_main_0_0(sl, t);
if((t == NULL))
goto fail61 ;
else
goto label53 ;
}
label53 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_82 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(l_82);
struct str_closure m_82 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(m_82);
t = default_system_usage_2_0(sl, lifted55_cl, lifted56_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term43), term45);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term37), term39), term41);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
struct str_closure n_80 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(n_80);
struct str_closure o_80 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(o_80);
struct str_closure p_80 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(p_80);
t = ArgOption_3_0(sl, lifted16_cl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm15;
{
ATerm trm17 = t;
struct str_closure q_80 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(q_80);
struct str_closure r_80 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(r_80);
struct str_closure s_80 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(s_80);
t = ArgOption_3_0(sl, lifted19_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto label20 ;
goto label16 ;
label20 :
t = trm17;
{
ATerm trm20 = t;
struct str_closure t_80 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(t_80);
struct str_closure u_80 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(u_80);
struct str_closure v_80 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(v_80);
t = Option_3_0(sl, lifted22_cl, lifted23_cl, lifted24_cl, t);
if((t == NULL))
goto label24 ;
goto label16 ;
label24 :
t = trm20;
{
ATerm trm23 = t;
struct str_closure w_80 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(w_80);
struct str_closure y_80 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(y_80);
struct str_closure z_80 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(z_80);
t = ArgOption_3_0(sl, lifted25_cl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto label28 ;
goto label16 ;
label28 :
t = trm23;
{
ATerm trm25 = t;
struct str_closure a_81 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(a_81);
struct str_closure b_81 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(b_81);
struct str_closure c_81 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(c_81);
t = ArgOption_3_0(sl, lifted28_cl, lifted29_cl, lifted30_cl, t);
if((t == NULL))
goto label31 ;
goto label16 ;
label31 :
t = trm25;
{
ATerm trm27 = t;
struct str_closure d_81 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(d_81);
struct str_closure e_81 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(e_81);
struct str_closure f_81 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(f_81);
t = ArgOption_3_0(sl, lifted31_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto label34 ;
goto label16 ;
label34 :
t = trm27;
{
ATerm trm29 = t;
struct str_closure g_81 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(g_81);
struct str_closure h_81 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(h_81);
struct str_closure i_81 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(i_81);
t = ArgOption_3_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto label37 ;
goto label16 ;
label37 :
t = trm29;
{
ATerm trm31 = t;
struct str_closure j_81 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(j_81);
struct str_closure n_81 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(n_81);
struct str_closure o_81 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(o_81);
t = Option_3_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto label40 ;
goto label16 ;
label40 :
t = trm31;
{
ATerm trm33 = t;
struct str_closure p_81 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(p_81);
struct str_closure q_81 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(q_81);
struct str_closure t_81 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(t_81);
t = Option_3_0(sl, lifted40_cl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto label43 ;
goto label16 ;
label43 :
t = trm33;
{
ATerm trm35 = t;
struct str_closure u_81 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(u_81);
struct str_closure w_81 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(w_81);
struct str_closure x_81 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(x_81);
t = Option_3_0(sl, lifted43_cl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label46 ;
goto label16 ;
label46 :
t = trm35;
{
ATerm trm37 = t;
struct str_closure z_81 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(z_81);
struct str_closure a_82 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(a_82);
struct str_closure c_82 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(c_82);
t = Option_3_0(sl, lifted46_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto label49 ;
goto label16 ;
label49 :
t = trm37;
{
ATerm trm39 = t;
struct str_closure d_82 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(d_82);
struct str_closure e_82 = { &(_Fail) , sl };
StrCL lifted50_cl = &(e_82);
struct str_closure f_82 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(f_82);
t = ArgOption_3_0(sl, lifted49_cl, lifted50_cl, lifted51_cl, t);
if((t == NULL))
goto label52 ;
goto label16 ;
label52 :
t = trm39;
{
struct str_closure g_82 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(g_82);
struct str_closure h_82 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(h_82);
struct str_closure j_82 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(j_82);
t = ArgOption_3_0(sl, lifted52_cl, lifted53_cl, lifted54_cl, t);
if((t == NULL))
goto fail19 ;
else
goto label16 ;
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
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
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
{
ATerm n_8 = NULL,e_9 = NULL,f_9 = NULL;
n_8 = t;
f_9 = t;
t = verbose_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
e_9 = t;
t = f_9;
t = (ATerm) ATmakeAppl(sym__2, term97, e_9);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
t = n_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--verbose", 0, ATtrue))))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("get", 0, ATtrue))))
goto fail53 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_8 = NULL;
m_8 = t;
t = term91;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail51 ;
t = m_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm38 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-R", 0, ATtrue))))
goto label51 ;
goto label50 ;
label51 :
t = trm38;
if((ATgetSymbol(t) == ATmakeSymbol("--Repository", 0, ATtrue)))
goto label50 ;
else
goto fail50 ;
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_8 = NULL;
l_8 = t;
t = term87;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail48 ;
t = l_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm36 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-L", 0, ATtrue))))
goto label48 ;
goto label47 ;
label48 :
t = trm36;
if((ATgetSymbol(t) == ATmakeSymbol("--Location", 0, ATtrue)))
goto label47 ;
else
goto fail47 ;
label47 :
;
}
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
t = term85;
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
ATerm k_8 = NULL;
k_8 = t;
t = term83;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail45 ;
t = k_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm34 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-a", 0, ATtrue))))
goto label45 ;
goto label44 ;
label45 :
t = trm34;
if((ATgetSymbol(t) == ATmakeSymbol("--all", 0, ATtrue)))
goto label44 ;
else
goto fail44 ;
label44 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_8 = NULL,c_9 = NULL,d_9 = NULL;
j_8 = t;
d_9 = t;
c_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term55, c_9);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
t = j_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm32 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("q", 0, ATtrue))))
goto label42 ;
goto label41 ;
label42 :
t = trm32;
if((ATgetSymbol(t) == ATmakeSymbol("query", 0, ATtrue)))
goto label41 ;
else
goto fail41 ;
label41 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_8 = NULL,a_9 = NULL,b_9 = NULL;
i_8 = t;
b_9 = t;
a_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term35, a_9);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail39 ;
t = i_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm30 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-V", 0, ATtrue))))
goto label39 ;
goto label38 ;
label39 :
t = trm30;
if((ATgetSymbol(t) == ATmakeSymbol("--Version", 0, ATtrue)))
goto label38 ;
else
goto fail38 ;
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_8 = NULL,y_8 = NULL,z_8 = NULL;
h_8 = t;
z_8 = t;
y_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term73, y_8);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
t = h_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm28 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-p", 0, ATtrue))))
goto label36 ;
goto label35 ;
label36 :
t = trm28;
if((ATgetSymbol(t) == ATmakeSymbol("--path", 0, ATtrue)))
goto label35 ;
else
goto fail35 ;
label35 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_8 = NULL,w_8 = NULL,x_8 = NULL;
g_8 = t;
x_8 = t;
w_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term13, w_8);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
t = g_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm26 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-l", 0, ATtrue))))
goto label33 ;
goto label32 ;
label33 :
t = trm26;
if((ATgetSymbol(t) == ATmakeSymbol("--location", 0, ATtrue)))
goto label32 ;
else
goto fail32 ;
label32 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_8 = NULL,u_8 = NULL,v_8 = NULL;
f_8 = t;
v_8 = t;
u_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term33, (ATerm) ATinsert(ATempty, u_8));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail30 ;
t = f_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm24 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-t", 0, ATtrue))))
goto label30 ;
goto label29 ;
label30 :
t = trm24;
if((ATgetSymbol(t) == ATmakeSymbol("--tool", 0, ATtrue)))
goto label29 ;
else
goto fail29 ;
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
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
ATerm e_8 = NULL,s_8 = NULL,t_8 = NULL;
e_8 = t;
t_8 = t;
s_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term51, s_8);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
t = e_8;
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
{
ATerm trm21 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("r", 0, ATtrue))))
goto label26 ;
goto label25 ;
label26 :
t = trm21;
{
ATerm trm22 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("reg", 0, ATtrue))))
goto label27 ;
goto label25 ;
label27 :
t = trm22;
if((ATgetSymbol(t) == ATmakeSymbol("register", 0, ATtrue)))
goto label25 ;
else
goto fail26 ;
}
label25 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_8 = NULL,q_8 = NULL,r_8 = NULL;
d_8 = t;
r_8 = t;
q_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term53, (ATerm) ATinsert(ATempty, q_8));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
t = d_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("i", 0, ATtrue))))
goto label22 ;
goto label21 ;
label22 :
t = trm18;
{
ATerm trm19 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("imp", 0, ATtrue))))
goto label23 ;
goto label21 ;
label23 :
t = trm19;
if((ATgetSymbol(t) == ATmakeSymbol("import", 0, ATtrue)))
goto label21 ;
else
goto fail23 ;
}
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_8 = NULL,o_8 = NULL,p_8 = NULL;
c_8 = t;
p_8 = t;
o_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term61, o_8);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = c_8;
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
ATerm trm16 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-r", 0, ATtrue))))
goto label19 ;
goto label18 ;
label19 :
t = trm16;
if((ATgetSymbol(t) == ATmakeSymbol("--repository", 0, ATtrue)))
goto label18 ;
else
goto fail20 ;
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_xtc_call_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_xtc_call_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
x_7 = ATgetFirst((ATermList) t);
{
ATerm trm12 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm12) == AT_LIST) && !(ATisEmpty(trm12))))
{
ATerm trm13 = ATgetFirst((ATermList) trm12);
if(!((ATgetSymbol(trm13) == ATmakeSymbol("call", 0, ATtrue))))
goto fail18 ;
{
ATerm trm14 = (ATerm) ATgetNext((ATermList) trm12);
if(((ATgetType(trm14) == AT_LIST) && !(ATisEmpty(trm14))))
{
y_7 = ATgetFirst((ATermList) trm14);
z_7 = (ATerm) ATgetNext((ATermList) trm14);
}
else
goto fail18 ;
}
}
else
goto fail18 ;
}
}
else
goto fail18 ;
b_8 = t;
t = y_7;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail18 ;
a_8 = t;
t = b_8;
t = (ATerm) ATmakeAppl(sym__2, a_8, z_7);
t = execvp_0_0(sl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_xtc_get_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_xtc_get_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
t_7 = ATgetFirst((ATermList) t);
{
ATerm trm10 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm10) == AT_LIST) && !(ATisEmpty(trm10))))
{
ATerm trm11 = ATgetFirst((ATermList) trm10);
if(!((ATgetSymbol(trm11) == ATmakeSymbol("get", 0, ATtrue))))
goto fail17 ;
u_7 = (ATerm) ATgetNext((ATermList) trm10);
}
else
goto fail17 ;
}
}
else
goto fail17 ;
w_7 = t;
t = u_7;
{
struct str_closure m_80 = { &(xtc_find_0_0) , sl };
StrCL lifted15_cl = &(m_80);
t = map_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail17 ;
v_7 = t;
t = w_7;
t = (ATerm) ATmakeAppl(sym__2, term3, v_7);
t = fprint_0_0(sl, t);
if((t == NULL))
goto fail17 ;
t = (ATerm) ATmakeAppl(sym__2, term3, (ATerm) ATinsert(ATempty, term5));
t = fprint_0_0(sl, t);
if((t == NULL))
goto fail17 ;
t = term57;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail17 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm4 = t;
ATerm i_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
struct str_closure j_80 = { &(xtc_options_0_0) , sl };
StrCL lifted10_cl = &(j_80);
struct str_closure k_80 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(k_80);
struct str_closure l_80 = { &(xtc_usage_0_0) , sl };
StrCL lifted14_cl = &(l_80);
t = parse_options_3_0(sl, lifted10_cl, lifted11_cl, lifted14_cl, t);
if((t == NULL))
goto label7 ;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label7 ;
n_7 = t;
t = term47;
i_7 = t;
t = n_7;
o_7 = t;
q_7 = t;
p_7 = t;
t = (ATerm) ATmakeAppl(sym__2, term49, p_7);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label7 ;
m_7 = t;
t = o_7;
t = log_0_2(sl, i_7, m_7, t);
if((t == NULL))
goto label7 ;
t = xtc_read_0_0(sl, t);
if((t == NULL))
goto label7 ;
{
ATerm trm5 = t;
ATerm trm6 = t;
t = term51;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label11 ;
t = xtc_register_0_0(sl, t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm6;
t = term53;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label9 ;
t = register_import_0_0(sl, t);
if((t == NULL))
goto label9 ;
else
goto label10 ;
label10 :
;
t = xtc_store_0_0(sl, t);
if((t == NULL))
goto label9 ;
goto label8 ;
label9 :
t = trm5;
t = term55;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label7 ;
{
ATerm trm7 = t;
t = repository_query_0_0(sl, t);
if((t == NULL))
goto label12 ;
goto label8 ;
label12 :
t = trm7;
{
ATerm trm8 = t;
t = all_query_0_0(sl, t);
if((t == NULL))
goto label13 ;
goto label8 ;
label13 :
t = trm8;
t = tool_query_0_0(sl, t);
if((t == NULL))
goto label7 ;
else
goto label8 ;
}
}
label8 :
;
{
ATerm trm9 = t;
t = term27;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label15 ;
t = exit_0_0(sl, t);
if((t == NULL))
goto label7 ;
else
goto label14 ;
label15 :
t = trm9;
t = term57;
t = exit_0_0(sl, t);
if((t == NULL))
goto label7 ;
else
goto label14 ;
label14 :
;
}
}
goto label6 ;
label7 :
t = trm4;
{
ATerm r_7 = NULL,s_7 = NULL;
s_7 = t;
t = term59;
r_7 = t;
t = s_7;
t = err_0_1(sl, r_7, t);
if((t == NULL))
goto fail13 ;
else
goto label6 ;
}
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_80 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(h_80);
struct str_closure i_80 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(i_80);
t = default_system_usage_2_0(sl_up(sl), lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term43), term45);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term37), term39), term41);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm version_query_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "version_query_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
sl_init_var(0, j_2);
sl_init_var(1, k_2);
sl_init_var(2, l_2);
m_2 = t;
t = term35;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail9 ;
if((k_2 == NULL))
{
k_2 = t;
}
else
if((k_2 != t))
goto fail9 ;
t = m_2;
{
struct str_closure f_80 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(f_80);
struct str_closure g_80 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(g_80);
t = _2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail9 ;
if(((j_2 == NULL) || ((k_2 == NULL) || (l_2 == NULL))))
goto fail9 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, j_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_2, l_2)));
}
t = list_tool_0_0(sl, t);
if((t == NULL))
goto fail9 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_80 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(e_80);
t = fetch_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym__2))
{
if((sl_readvar(1, sl_up(sl)) == NULL))
{
sl_readvar(1, sl_up(sl)) = ATgetArgument(t, 0);
}
else
if((sl_readvar(1, sl_up(sl)) != ATgetArgument(t, 0)))
goto fail12 ;
if((sl_readvar(2, sl_up(sl)) == NULL))
{
sl_readvar(2, sl_up(sl)) = ATgetArgument(t, 1);
}
else
if((sl_readvar(2, sl_up(sl)) != ATgetArgument(t, 1)))
goto fail12 ;
}
else
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Tool_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail10 ;
}
else
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_query_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_query_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm b_2 = NULL;
sl_init_var(0, b_2);
{
struct str_closure d_80 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(d_80);
t = term33;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail7 ;
t = xtc_import_0_0(sl, t);
if((t == NULL))
goto fail7 ;
t = map_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail7 ;
}
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
ATerm c_2 = NULL;
c_2 = t;
{
ATerm trm2 = t;
ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
f_2 = t;
t = term19;
d_2 = t;
t = f_2;
g_2 = t;
i_2 = t;
h_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term21, h_2);
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
e_2 = t;
t = g_2;
t = log_0_2(sl_up(sl), d_2, e_2, t);
if((t == NULL))
goto label3 ;
t = (ATerm) ATmakeAppl(sym__2, term11, (ATerm) ATmakeAppl(sym_Tool_1, c_2));
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto label3 ;
if((sl_readvar(0, sl) == NULL))
goto label3 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, c_2), sl_readvar(0, sl));
}
{
ATerm trm3 = t;
t = version_query_0_0(sl_up(sl), t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm3;
t = list_tool_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
else
goto label4 ;
label4 :
;
}
goto label2 ;
label3 :
t = trm2;
t = (ATerm) ATmakeAppl(sym__2, term23, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term5), term25), c_2));
t = fprint_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
t = term31;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
else
goto label2 ;
label2 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_tool_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_tool_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_1 = NULL,a_2 = NULL;
sl_init_var(0, x_1);
{
struct str_closure c_80 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(c_80);
if(match_cons(t, sym__2))
{
ATerm trm1 = ATgetArgument(t, 0);
if(match_cons(trm1, sym_Tool_1))
{
if((x_1 == NULL))
{
x_1 = ATgetArgument(trm1, 0);
}
else
if((x_1 != ATgetArgument(trm1, 0)))
goto fail5 ;
}
else
goto fail5 ;
a_2 = ATgetArgument(t, 1);
}
else
goto fail5 ;
t = a_2;
t = map_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail5 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_1 = NULL,z_1 = NULL;
if(match_cons(t, sym__2))
{
y_1 = ATgetArgument(t, 0);
z_1 = ATgetArgument(t, 1);
}
else
goto fail6 ;
{
ATerm trm0 = t;
t = term13;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
t = (ATerm) ATmakeAppl(sym__2, term3, (ATerm) ATinsert(ATinsert(ATempty, term5), z_1));
t = fprint_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
if((sl_readvar(0, sl) == NULL))
goto fail6 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term5), z_1), term15), y_1), term17), sl_readvar(0, sl)));
}
t = fprint_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
else
goto label0 ;
label0 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm all_query_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "all_query_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_80 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(b_80);
t = term9;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = xtc_import_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = term11;
t = table_getlist_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_80 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(a_80);
t = try_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto fail2 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_79 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(y_79);
struct str_closure z_79 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted4_cl = &(z_79);
t = _2_0(sl_up(sl_up(sl)), lifted2_cl, lifted4_cl, t);
if((t == NULL))
goto fail3 ;
t = list_tool_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
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
{
struct str_closure x_79 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted3_cl = &(x_79);
t = Tool_1_0(sl_up(sl_up(sl_up(sl))), lifted3_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm repository_query_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "repository_query_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_1 = NULL,w_1 = NULL;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto fail0 ;
w_1 = t;
v_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term5), v_1), term7));
t = fprint_0_0(sl, t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 90));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_getlist_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_getlist_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fprint_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fprint_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(verbose_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("verbose_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_options_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_options_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(err_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("err_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(execvp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("execvp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Tool_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Tool_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_import_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_import_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_read_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_read_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_location_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_location_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(register_import_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("register_import_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_register_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_register_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_store_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_store_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xtc_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_xtc_call_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_xtc_call_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_xtc_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_xtc_get_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xtc_main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(version_query_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("version_query_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tool_query_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_query_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_tool_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_tool_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(all_query_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("all_query_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repository_query_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repository_query_0_0", 0, ATtrue)), &(closures[closures_index]));
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
