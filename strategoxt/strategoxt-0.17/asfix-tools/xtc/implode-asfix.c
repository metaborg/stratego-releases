#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_parsetree_2;
static Symbol sym__2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
ATprotectSymbol(sym_parsetree_2);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
ATerm implode_asfix_1_0 (StrSL sl, StrCL b_96, ATerm t);
ATerm yield_asfix_quotes_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL p_31, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_2_0 (StrSL sl, StrCL n_10, StrCL o_10, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL k_8, StrCL l_8, StrCL m_8, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
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
{
struct str_closure h_106 = { &(implode_asfix_options_0_0) , sl };
StrCL lifted38_cl = &(h_106);
struct str_closure i_106 = { &(implode_asfix_using_config_0_0) , sl };
StrCL lifted39_cl = &(i_106);
t = io_wrap_2_0(sl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
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
struct str_closure u_104 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(u_104);
struct str_closure v_104 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(v_104);
struct str_closure w_104 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(w_104);
t = Option_3_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto label25 ;
goto label24 ;
label25 :
t = trm13;
{
ATerm trm14 = t;
struct str_closure x_104 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(x_104);
struct str_closure y_104 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(y_104);
struct str_closure z_104 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(z_104);
t = Option_3_0(sl, lifted5_cl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label26 ;
goto label24 ;
label26 :
t = trm14;
{
ATerm trm15 = t;
struct str_closure a_105 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(a_105);
struct str_closure b_105 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(b_105);
struct str_closure c_105 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(c_105);
t = Option_3_0(sl, lifted8_cl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto label27 ;
goto label24 ;
label27 :
t = trm15;
{
ATerm trm16 = t;
struct str_closure d_105 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(d_105);
struct str_closure e_105 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(e_105);
struct str_closure f_105 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(f_105);
t = Option_3_0(sl, lifted11_cl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label28 ;
goto label24 ;
label28 :
t = trm16;
{
ATerm trm17 = t;
struct str_closure g_105 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(g_105);
struct str_closure h_105 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(h_105);
struct str_closure i_105 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(i_105);
t = Option_3_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto label29 ;
goto label24 ;
label29 :
t = trm17;
{
ATerm trm18 = t;
struct str_closure j_105 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(j_105);
struct str_closure k_105 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(k_105);
struct str_closure l_105 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(l_105);
t = Option_3_0(sl, lifted17_cl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto label30 ;
goto label24 ;
label30 :
t = trm18;
{
ATerm trm19 = t;
struct str_closure m_105 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(m_105);
struct str_closure n_105 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(n_105);
struct str_closure o_105 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(o_105);
t = Option_3_0(sl, lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto label31 ;
goto label24 ;
label31 :
t = trm19;
{
ATerm trm20 = t;
struct str_closure p_105 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(p_105);
struct str_closure q_105 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(q_105);
struct str_closure r_105 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(r_105);
t = Option_3_0(sl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto label32 ;
goto label24 ;
label32 :
t = trm20;
{
ATerm trm21 = t;
struct str_closure s_105 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(s_105);
struct str_closure t_105 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(t_105);
struct str_closure u_105 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(u_105);
t = Option_3_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, t);
if((t == NULL))
goto label33 ;
goto label24 ;
label33 :
t = trm21;
{
ATerm trm22 = t;
struct str_closure v_105 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(v_105);
struct str_closure x_105 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(x_105);
struct str_closure y_105 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(y_105);
t = Option_3_0(sl, lifted29_cl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto label34 ;
goto label24 ;
label34 :
t = trm22;
{
ATerm trm23 = t;
struct str_closure z_105 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(z_105);
struct str_closure a_106 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(a_106);
struct str_closure d_106 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(d_106);
t = Option_3_0(sl, lifted32_cl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto label35 ;
goto label24 ;
label35 :
t = trm23;
{
struct str_closure e_106 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(e_106);
struct str_closure f_106 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(f_106);
struct str_closure g_106 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(g_106);
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
ATerm v_1 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
v_1 = t;
t_2 = t;
s_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, s_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail38 ;
v_2 = t;
u_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term21, u_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail38 ;
t = v_1;
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
ATerm u_1 = NULL,q_2 = NULL,r_2 = NULL;
u_1 = t;
r_2 = t;
q_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term21, q_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail35 ;
t = u_1;
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
ATerm t_1 = NULL,o_2 = NULL,p_2 = NULL;
t_1 = t;
p_2 = t;
o_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, o_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
t = t_1;
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
ATerm s_1 = NULL,m_2 = NULL,n_2 = NULL;
s_1 = t;
n_2 = t;
m_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term17, m_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
t = s_1;
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
ATerm r_1 = NULL,k_2 = NULL,l_2 = NULL;
r_1 = t;
l_2 = t;
k_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term7, k_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail26 ;
t = r_1;
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
ATerm q_1 = NULL,i_2 = NULL,j_2 = NULL;
q_1 = t;
j_2 = t;
i_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term13, i_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
t = q_1;
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
ATerm p_1 = NULL,g_2 = NULL,h_2 = NULL;
p_1 = t;
h_2 = t;
g_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, g_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail20 ;
t = p_1;
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
ATerm o_1 = NULL,e_2 = NULL,f_2 = NULL;
o_1 = t;
f_2 = t;
e_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term11, e_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
t = o_1;
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
ATerm n_1 = NULL,c_2 = NULL,d_2 = NULL;
n_1 = t;
d_2 = t;
c_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term15, c_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail14 ;
t = n_1;
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
ATerm m_1 = NULL,a_2 = NULL,b_2 = NULL;
m_1 = t;
b_2 = t;
a_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term9, a_2);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail11 ;
t = m_1;
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
ATerm l_1 = NULL,y_1 = NULL,z_1 = NULL;
l_1 = t;
z_1 = t;
y_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term3, y_1);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
t = l_1;
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
ATerm k_1 = NULL,w_1 = NULL,x_1 = NULL;
k_1 = t;
x_1 = t;
w_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term1, w_1);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
t = k_1;
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
ATerm x_0 = NULL;
sl_init_var(0, x_0);
if((x_0 == NULL))
{
x_0 = t;
}
else
if((x_0 != t))
goto fail0 ;
{
ATerm trm0 = t;
ATerm y_0 = NULL;
y_0 = t;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label1 ;
t = y_0;
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
ATerm z_0 = NULL;
z_0 = t;
t = term3;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = z_0;
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
ATerm a_1 = NULL;
a_1 = t;
t = term5;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label5 ;
t = a_1;
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
ATerm b_1 = NULL;
b_1 = t;
t = term7;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label7 ;
t = b_1;
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
ATerm c_1 = NULL;
c_1 = t;
t = term9;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label9 ;
t = c_1;
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
ATerm d_1 = NULL;
d_1 = t;
t = term11;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label11 ;
t = d_1;
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
ATerm e_1 = NULL;
e_1 = t;
t = term13;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label13 ;
t = e_1;
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
ATerm f_1 = NULL;
f_1 = t;
t = term15;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label15 ;
t = f_1;
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
ATerm g_1 = NULL;
g_1 = t;
t = term17;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label17 ;
t = g_1;
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
ATerm h_1 = NULL;
h_1 = t;
t = term19;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label19 ;
t = h_1;
{
ATerm j_1 = NULL;
if(match_cons(t, sym_parsetree_2))
{
j_1 = ATgetArgument(t, 0);
{
ATerm trm10 = ATgetArgument(t, 1);
}
}
else
goto fail0 ;
t = j_1;
goto label18 ;
}
label19 :
t = trm9;
goto label18 ;
label18 :
;
{
struct str_closure t_104 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(t_104);
t = try_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
{
ATerm trm12 = t;
ATerm i_1 = NULL;
i_1 = t;
t = term23;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label23 ;
t = i_1;
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
struct str_closure s_104 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(s_104);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 57));
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
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
