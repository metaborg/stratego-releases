#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_EscapeSeq_1;
static Symbol sym_Chars_1;
static Symbol sym_Plain_1;
static Symbol sym_Quoted_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_EscapeSeq_1 = ATmakeSymbol("EscapeSeq", 1, ATfalse);
ATprotectSymbol(sym_EscapeSeq_1);
sym_Chars_1 = ATmakeSymbol("Chars", 1, ATfalse);
ATprotectSymbol(sym_Chars_1);
sym_Plain_1 = ATmakeSymbol("Plain", 1, ATfalse);
ATprotectSymbol(sym_Plain_1);
sym_Quoted_1 = ATmakeSymbol("Quoted", 1, ATfalse);
ATprotectSymbol(sym_Quoted_1);
}
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
term0 = (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATempty);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeInt(92);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_EscapeSeq_1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(93);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_EscapeSeq_1, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeInt(80);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg.pp.af", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm foldr_2_0 (StrSL sl, StrCL g_97, StrCL h_97, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL h_95, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL j_94, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL q_64, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL n_56, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm io_stream_wrap_1_0 (StrSL sl, StrCL p_46, ATerm t);
ATerm ast2box_0_1 (StrSL sl, ATerm u_34, ATerm t);
ATerm box2text_stream_0_2 (StrSL sl, ATerm s_34, ATerm t_34, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm TupleTerm_1_0 (StrSL sl, StrCL h_7, ATerm t);
ATerm EscapeSeq_1_0 (StrSL sl, StrCL g_7, ATerm t);
ATerm Chars_1_0 (StrSL sl, StrCL f_7, ATerm t);
ATerm Term_1_0 (StrSL sl, StrCL c_7, ATerm t);
ATerm Nonterm_1_0 (StrSL sl, StrCL x_6, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm pp_rtg_box_0_0 (StrSL sl, ATerm t);
ATerm pp_rtg_stream_0_1 (StrSL sl, ATerm m_1, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm main_pp_rtg_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm ExplodeId_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm rtg_ppfix_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_pp_rtg_0_0(sl, t);
if((t == NULL))
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_rtg_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_rtg_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
t = rtg_ppfix_0_0(sl, t);
if((t == NULL))
goto fail15 ;
q_1 = t;
s_1 = t;
t = term15;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail15 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail15 ;
r_1 = t;
t = s_1;
t = (ATerm) ATinsert(ATempty, r_1);
p_1 = t;
t = q_1;
t = ast2box_0_1(sl, p_1, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_rtg_stream_0_1 (StrSL sl, ATerm m_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_rtg_stream_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_1 = NULL,o_1 = NULL;
t = pp_rtg_box_0_0(sl, t);
if((t == NULL))
goto fail14 ;
o_1 = t;
t = term11;
n_1 = t;
t = o_1;
t = box2text_stream_0_2(sl, n_1, m_1, t);
if((t == NULL))
goto fail14 ;
t = (ATerm) ATmakeAppl(sym__2, term13, m_1);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_pp_rtg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_pp_rtg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm d_1 = NULL,e_1 = NULL;
sl_init_var(0, d_1);
sl_init_var(1, e_1);
{
struct str_closure g_118 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(g_118);
t = io_stream_wrap_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail12 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail13 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail13 ;
}
else
goto fail13 ;
if((sl_readvar(0, sl) == NULL))
goto fail13 ;
else
{
t = sl_readvar(0, sl);
}
t = read_from_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail13 ;
if((sl_readvar(1, sl) == NULL))
goto fail13 ;
else
{
t = pp_rtg_stream_0_1(sl_up(sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail13 ;
}
if((sl_readvar(1, sl) == NULL))
goto fail13 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm ExplodeId_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ExplodeId_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm j_0 = NULL;
sl_init_var(0, j_0);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure u_117 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(u_117);
struct str_closure v_117 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(v_117);
t = foldr_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure z_117 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(z_117);
t = filter_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail3 ;
{
ATerm trm16 = t;
ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
r_0 = t;
{
ATerm trm17;
trm17 = (ATerm) ATgetAnnotations(t);
if((trm17 == NULL))
trm17 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
s_0 = ATgetFirst((ATermList) t);
t_0 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label12 ;
w_0 = trm17;
t = s_0;
{
struct str_closure b_118 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(b_118);
t = Chars_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto label12 ;
u_0 = t;
t = t_0;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label12 ;
v_0 = t;
{
ATerm trm21;
trm21 = CheckATermList(v_0);
if((trm21 == NULL))
goto label12 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm21, u_0), w_0);
t = r_0;
}
}
}
{
ATerm x_0 = NULL,y_0 = NULL;
if((j_0 == NULL))
goto fail3 ;
else
{
t = j_0;
}
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail3 ;
y_0 = t;
x_0 = t;
t = (ATerm) ATmakeAppl(sym_Plain_1, x_0);
goto label11 ;
}
label12 :
t = trm16;
{
ATerm b_1 = NULL,c_1 = NULL;
struct str_closure f_118 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(f_118);
t = map_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail3 ;
c_1 = t;
b_1 = t;
t = (ATerm) ATmakeAppl(sym_Quoted_1, b_1);
goto label11 ;
}
label11 :
;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm22 = t;
struct str_closure c_118 = { &(implode_string_0_0) , sl_up(sl) };
StrCL lifted14_cl = &(c_118);
t = Chars_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto label18 ;
goto label17 ;
label18 :
t = trm22;
{
struct str_closure e_118 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(e_118);
t = EscapeSeq_1_0(sl_up(sl), lifted15_cl, t);
if((t == NULL))
goto fail10 ;
else
goto label17 ;
}
label17 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_0 = NULL,a_1 = NULL;
a_1 = t;
z_0 = t;
t = (ATerm) ATinsert(ATempty, z_0);
t = implode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_118 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(a_118);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail8 ;
t = map_1_0(sl_up(sl), lifted12_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label14 ;
goto label13 ;
label14 :
t = trm18;
{
ATerm trm19 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 39))))
goto label15 ;
goto label13 ;
label15 :
t = trm19;
{
ATerm trm20 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45))))
goto label16 ;
goto label13 ;
label16 :
t = trm20;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 95)))
goto label13 ;
else
goto fail9 ;
}
}
label13 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
struct str_closure y_117 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(y_117);
t = Chars_1_0(sl_up(sl), lifted10_cl, t);
if((t == NULL))
goto label10 ;
goto fail6 ;
label10 :
t = trm15;
goto label9 ;
label9 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
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
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
ATerm k_0 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm4 = ATgetArgument(t, 0);
if(!(((ATgetType(trm4) == AT_INT) && (ATgetInt((ATermInt) trm4) == 92))))
goto label6 ;
k_0 = ATgetArgument(t, 1);
}
else
goto label6 ;
{
ATerm trm5;
trm5 = CheckATermList(k_0);
if((trm5 == NULL))
goto label6 ;
t = (ATerm) ATinsert((ATermList)trm5, term5);
}
goto label5 ;
label6 :
t = trm3;
{
ATerm trm6 = t;
ATerm l_0 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm7 = ATgetArgument(t, 0);
if(!(((ATgetType(trm7) == AT_INT) && (ATgetInt((ATermInt) trm7) == 93))))
goto label7 ;
l_0 = ATgetArgument(t, 1);
}
else
goto label7 ;
{
ATerm trm8;
trm8 = CheckATermList(l_0);
if((trm8 == NULL))
goto label7 ;
t = (ATerm) ATinsert((ATermList)trm8, term9);
}
goto label5 ;
label7 :
t = trm6;
{
ATerm trm9 = t;
ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL;
if(match_cons(t, sym__2))
{
m_0 = ATgetArgument(t, 0);
{
ATerm trm10 = ATgetArgument(t, 1);
if(((ATgetType(trm10) == AT_LIST) && !(ATisEmpty(trm10))))
{
ATerm trm11 = ATgetFirst((ATermList) trm10);
if(match_cons(trm11, sym_Chars_1))
{
n_0 = ATgetArgument(trm11, 0);
}
else
goto label8 ;
o_0 = (ATerm) ATgetNext((ATermList) trm10);
}
else
goto label8 ;
}
}
else
goto label8 ;
{
ATerm trm13;
ATerm trm12;
trm12 = CheckATermList(o_0);
if((trm12 == NULL))
goto label8 ;
trm13 = CheckATermList(n_0);
if((trm13 == NULL))
goto label8 ;
t = (ATerm) ATinsert((ATermList)trm12, (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATinsert((ATermList)trm13, m_0)));
}
goto label5 ;
label8 :
t = trm9;
{
ATerm p_0 = NULL,q_0 = NULL;
if(match_cons(t, sym__2))
{
p_0 = ATgetArgument(t, 0);
q_0 = ATgetArgument(t, 1);
}
else
goto fail5 ;
{
ATerm trm14;
trm14 = CheckATermList(q_0);
if((trm14 == NULL))
goto fail5 ;
t = (ATerm) ATinsert((ATermList)trm14, (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATinsert(ATempty, p_0)));
goto label5 ;
}
}
}
}
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term1);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_ppfix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_ppfix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_117 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(t_117);
t = topdown_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
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
ATerm trm0 = t;
ATerm i_0 = NULL;
i_0 = t;
{
ATerm trm1 = t;
struct str_closure n_117 = { &(is_string_0_0) , sl_up(sl) };
StrCL lifted1_cl = &(n_117);
t = Term_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm1;
{
struct str_closure o_117 = { &(is_string_0_0) , sl_up(sl) };
StrCL lifted2_cl = &(o_117);
t = Nonterm_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto label1 ;
else
goto label2 ;
}
label2 :
;
t = i_0;
}
{
ATerm trm2 = t;
struct str_closure p_117 = { &(ExplodeId_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(p_117);
t = Term_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto label4 ;
goto label0 ;
label4 :
t = trm2;
{
struct str_closure q_117 = { &(ExplodeId_0_0) , sl_up(sl) };
StrCL lifted4_cl = &(q_117);
t = Nonterm_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail1 ;
else
goto label0 ;
}
}
label1 :
t = trm0;
{
struct str_closure s_117 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(s_117);
t = try_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail1 ;
else
goto label0 ;
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
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_117 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted6_cl = &(r_117);
t = TupleTerm_1_0(sl_up(sl_up(sl)), lifted6_cl, t);
if((t == NULL))
goto fail2 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 39));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(foldr_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldr_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alphanum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alphanum_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(io_stream_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_stream_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ast2box_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ast2box_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(box2text_stream_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("box2text_stream_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(TupleTerm_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("TupleTerm_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EscapeSeq_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EscapeSeq_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Term_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Term_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Nonterm_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Nonterm_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pp_rtg_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_rtg_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pp_rtg_stream_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_rtg_stream_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_pp_rtg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_pp_rtg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ExplodeId_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplodeId_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_ppfix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_ppfix_0_0", 0, ATtrue)), &(closures[closures_index]));
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
