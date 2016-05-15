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
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym__2, term1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__2, term1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL a_46, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL t_27, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_options_0_0 (StrSL sl, ATerm t);
ATerm option_wrap_2_0 (StrSL sl, StrCL i_13, StrCL j_13, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL m_9, StrCL n_9, StrCL o_9, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL h_9, StrCL i_9, StrCL j_9, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_1_0 (StrSL sl, StrCL z_1, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL d_1, StrCL e_1, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm create_table_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm create_abox2latex_args_0_0 (StrSL sl, ATerm t);
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
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm abox2latex_options_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_70 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(t_70);
struct str_closure u_70 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(u_70);
t = option_wrap_2_0(sl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_70 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(s_70);
t = xtc_io_1_0(sl_up(sl), lifted17_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_70 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(q_70);
struct str_closure r_70 = { &(create_abox2latex_args_0_0) , sl_up(sl_up(sl)) };
StrCL lifted19_cl = &(r_70);
t = xtc_transform_2_0(sl_up(sl_up(sl)), lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
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
ATerm trm10 = t;
t = abox2latex_options_0_0(sl_up(sl), t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm10;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
else
goto label10 ;
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_table_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_table_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
ATerm trm8 = t;
t = term15;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label9 ;
goto label8 ;
label9 :
t = trm8;
t = (ATerm) ATempty;
goto label8 ;
label8 :
;
{
struct str_closure p_70 = { &(ReadFromFile_0_0) , sl };
StrCL lifted14_cl = &(p_70);
t = map_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail16 ;
z_0 = t;
y_0 = t;
{
ATerm trm9;
trm9 = CheckATermList(y_0);
if((trm9 == NULL))
goto fail16 ;
t = (ATerm) ATinsert((ATermList)trm9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term29), term31)), (ATerm) ATinsert(ATinsert(ATempty, term33), term35)), (ATerm) ATinsert(ATinsert(ATempty, term37), term39)), (ATerm) ATinsert(ATinsert(ATempty, term41), term43)), (ATerm) ATinsert(ATinsert(ATempty, term45), term47)), (ATerm) ATinsert(ATinsert(ATempty, term49), term51)));
t = concat_0_0(sl, t);
if((t == NULL))
goto fail16 ;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail16 ;
if(match_cons(t, sym_FILE_1))
{
a_1 = ATgetArgument(t, 0);
}
else
goto fail16 ;
t = a_1;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_abox2latex_args_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_abox2latex_args_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,o_0 = NULL,n_0 = NULL,p_0 = NULL;
struct str_closure n_70 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(n_70);
o_0 = t;
t = term23;
t = create_table_file_0_0(sl, t);
if((t == NULL))
goto fail13 ;
m_0 = t;
t = o_0;
p_0 = t;
t = term23;
t = pass_verbose_0_0(sl, t);
if((t == NULL))
goto fail13 ;
n_0 = t;
t = p_0;
{
ATerm trm6;
trm6 = CheckATermList(n_0);
if((trm6 == NULL))
goto fail13 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm6, m_0), term25);
{
struct str_closure o_70 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(o_70);
t = try_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail13 ;
t = try_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail13 ;
}
}
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
ATerm q_0 = NULL,s_0 = NULL,r_0 = NULL,t_0 = NULL;
s_0 = t;
t = term19;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail15 ;
q_0 = t;
t = s_0;
t_0 = t;
r_0 = t;
{
ATerm trm7;
trm7 = CheckATermList(r_0);
if((trm7 == NULL))
goto fail15 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm7, q_0), term27);
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
ATerm u_0 = NULL,w_0 = NULL,v_0 = NULL,x_0 = NULL;
w_0 = t;
t = term1;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail14 ;
u_0 = t;
t = w_0;
x_0 = t;
v_0 = t;
{
ATerm trm5;
trm5 = CheckATermList(v_0);
if((trm5 == NULL))
goto fail14 ;
t = (ATerm) ATinsert((ATermList)trm5, u_0);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm abox2latex_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abox2latex_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
struct str_closure b_70 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(b_70);
struct str_closure c_70 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(c_70);
struct str_closure d_70 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(d_70);
t = Option_3_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
struct str_closure e_70 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(e_70);
struct str_closure f_70 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(f_70);
struct str_closure g_70 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(g_70);
t = Option_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
struct str_closure h_70 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(h_70);
struct str_closure i_70 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(i_70);
struct str_closure j_70 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(j_70);
t = ArgOption_3_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm2;
{
struct str_closure k_70 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(k_70);
struct str_closure l_70 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(l_70);
struct str_closure m_70 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(m_70);
t = ArgOption_3_0(sl, lifted9_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
}
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
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_0 = NULL,k_0 = NULL,l_0 = NULL;
h_0 = t;
l_0 = t;
k_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term19, k_0);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail11 ;
t = h_0;
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
{
ATerm trm4 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-w", 0, ATtrue))))
goto label7 ;
goto label6 ;
label7 :
t = trm4;
if((ATgetSymbol(t) == ATmakeSymbol("--width", 0, ATtrue)))
goto label6 ;
else
goto fail10 ;
label6 :
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
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_0 = NULL,i_0 = NULL,j_0 = NULL;
g_0 = t;
j_0 = t;
i_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term15, (ATerm) ATinsert(ATempty, i_0));
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
t = g_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-t", 0, ATtrue))))
goto label5 ;
goto label4 ;
label5 :
t = trm3;
if((ATgetSymbol(t) == ATmakeSymbol("--latex-table", 0, ATtrue)))
goto label4 ;
else
goto fail7 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_0 = NULL;
f_0 = t;
t = term11;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
t = f_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--boxenv", 0, ATtrue))))
goto fail4 ;
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
t = term7;
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
ATerm e_0 = NULL;
e_0 = t;
t = term5;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = e_0;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--alltt", 0, ATtrue))))
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 36));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(option_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("option_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_table_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_table_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_abox2latex_args_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_abox2latex_args_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abox2latex_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abox2latex_options_0_0", 0, ATtrue)), &(closures[closures_index]));
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
