#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Conc_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Text_1;
static Symbol sym_Literal_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
ATprotectSymbol(sym_Conc_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Text_1 = ATmakeSymbol("Text", 1, ATfalse);
ATprotectSymbol(sym_Text_1);
sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
ATprotectSymbol(sym_Literal_1);
}
static void init_module_constant_terms (void)
{
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm foldl_1_0 (StrSL sl, StrCL s_46, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL z_44, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL f_44, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL s_26, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL b_20, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL k_14, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL u_11, ATerm t);
ATerm Literal_1_0 (StrSL sl, StrCL s_2, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm main_process_stratego_xml_doc_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xml_filter_whitespace_0_0 (StrSL sl, ATerm t);
ATerm Literal_1_0 (StrSL sl, StrCL s_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Literal_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_69 = NULL,y_69 = NULL,a_70 = NULL;
ATerm trm30;
trm30 = (ATerm) ATgetAnnotations(t);
if((trm30 == NULL))
trm30 = (ATerm) ATempty;
if(match_cons(t, sym_Literal_1))
{
y_69 = ATgetArgument(t, 0);
}
else
goto fail18 ;
z_69 = trm30;
t = y_69;
t = cl_fun(s_2)(cl_sl(s_2), t);
if((t == NULL))
goto fail18 ;
a_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Literal_1, a_70), z_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_process_stratego_xml_doc_0_0(sl, t);
if((t == NULL))
goto fail17 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_process_stratego_xml_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_process_stratego_xml_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_76 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(t_76);
t = io_wrap_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail7 ;
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
struct str_closure s_76 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(s_76);
t = bottomup_1_0(sl_up(sl), lifted7_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_76 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(r_76);
t = try_1_0(sl_up(sl_up(sl)), lifted8_cl, t);
if((t == NULL))
goto fail9 ;
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
ATerm trm16 = t;
t = is_list_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label13 ;
{
struct str_closure h_76 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(h_76);
t = SRTS_one(sl_up(sl_up(sl_up(sl))), lifted9_cl, t);
if((t == NULL))
goto label13 ;
t = xml_filter_whitespace_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label13 ;
}
goto label12 ;
label13 :
t = trm16;
{
ATerm trm18 = t;
struct str_closure m_76 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(m_76);
t = is_list_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label14 ;
{
struct str_closure n_76 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(n_76);
t = SRTS_one(sl_up(sl_up(sl_up(sl))), lifted10_cl, t);
if((t == NULL))
goto label14 ;
t = filter_1_0(sl_up(sl_up(sl_up(sl))), lifted11_cl, t);
if((t == NULL))
goto label14 ;
}
goto label12 ;
label14 :
t = trm18;
{
ATerm trm24 = t;
if(match_cons(t, sym_Conc_2))
{
ATerm trm25 = ATgetArgument(t, 0);
if(!(((ATgetType(trm25) == AT_LIST) && ATisEmpty(trm25))))
goto label21 ;
{
ATerm trm26 = ATgetArgument(t, 1);
if(!(((ATgetType(trm26) == AT_LIST) && ATisEmpty(trm26))))
goto label21 ;
}
}
else
goto label21 ;
t = (ATerm) ATempty;
goto label12 ;
label21 :
t = trm24;
{
ATerm trm27 = t;
ATerm g_2 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm28 = ATgetArgument(t, 0);
if(!(((ATgetType(trm28) == AT_LIST) && ATisEmpty(trm28))))
goto label22 ;
g_2 = ATgetArgument(t, 1);
}
else
goto label22 ;
t = g_2;
goto label12 ;
label22 :
t = trm27;
{
ATerm h_2 = NULL;
if(match_cons(t, sym_Conc_2))
{
h_2 = ATgetArgument(t, 0);
{
ATerm trm29 = ATgetArgument(t, 1);
if(!(((ATgetType(trm29) == AT_LIST) && ATisEmpty(trm29))))
goto fail10 ;
}
}
else
goto fail10 ;
t = h_2;
goto label12 ;
}
}
}
}
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_75 = NULL,t_75 = NULL,u_75 = NULL;
ATerm trm23;
trm23 = (ATerm) ATgetAnnotations(t);
if((trm23 == NULL))
trm23 = (ATerm) ATempty;
if(match_cons(t, sym_Literal_1))
{
t_75 = ATgetArgument(t, 0);
}
else
goto fail16 ;
r_75 = trm23;
t = t_75;
u_75 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Literal_1, u_75), r_75);
}
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
{
ATerm trm19 = t;
struct str_closure l_76 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(l_76);
t = Literal_1_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted12_cl, t);
if((t == NULL))
goto label16 ;
goto fail12 ;
label16 :
t = trm19;
goto label15 ;
label15 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_76 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(k_76);
t = string_as_chars_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))), lifted13_cl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_76 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(j_76);
t = SRTS_all(sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl)))))), lifted14_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm20 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label18 ;
goto label17 ;
label18 :
t = trm20;
{
ATerm trm21 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label19 ;
goto label17 ;
label19 :
t = trm21;
{
ATerm trm22 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label20 ;
goto label17 ;
label20 :
t = trm22;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10)))
goto label17 ;
else
goto fail15 ;
}
}
label17 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_75 = NULL,n_75 = NULL,o_75 = NULL;
ATerm trm17;
trm17 = (ATerm) ATgetAnnotations(t);
if((trm17 == NULL))
trm17 = (ATerm) ATempty;
if(match_cons(t, sym_Text_1))
{
n_75 = ATgetArgument(t, 0);
}
else
goto fail11 ;
l_75 = trm17;
t = n_75;
o_75 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, o_75), l_75);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_filter_whitespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_filter_whitespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_2 = NULL,c_2 = NULL;
struct str_closure d_76 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(d_76);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
{
struct str_closure f_76 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(f_76);
t = filter_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail0 ;
c_2 = t;
b_2 = t;
t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATempty);
{
struct str_closure g_76 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(g_76);
t = foldl_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail0 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail0 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm10 = t;
ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,d_2 = NULL,e_2 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm11 = ATgetArgument(t, 0);
if(match_cons(trm11, sym_Text_1))
{
w_1 = ATgetArgument(trm11, 0);
}
else
goto label11 ;
{
ATerm trm12 = ATgetArgument(t, 1);
if(((ATgetType(trm12) == AT_LIST) && !(ATisEmpty(trm12))))
{
ATerm trm13 = ATgetFirst((ATermList) trm12);
if(match_cons(trm13, sym_Text_1))
{
x_1 = ATgetArgument(trm13, 0);
}
else
goto label11 ;
y_1 = (ATerm) ATgetNext((ATermList) trm12);
}
else
goto label11 ;
}
}
else
goto label11 ;
e_2 = t;
t = (ATerm) ATmakeAppl(sym__2, x_1, w_1);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto label11 ;
d_2 = t;
t = e_2;
{
ATerm trm14;
trm14 = CheckATermList(y_1);
if((trm14 == NULL))
goto label11 ;
t = (ATerm) ATinsert((ATermList)trm14, (ATerm) ATmakeAppl(sym_Text_1, d_2));
}
goto label10 ;
label11 :
t = trm10;
{
ATerm z_1 = NULL,a_2 = NULL;
if(match_cons(t, sym__2))
{
z_1 = ATgetArgument(t, 0);
a_2 = ATgetArgument(t, 1);
}
else
goto fail6 ;
{
ATerm trm15;
trm15 = CheckATermList(a_2);
if((trm15 == NULL))
goto fail6 ;
t = (ATerm) ATinsert((ATermList)trm15, z_1);
goto label10 ;
}
}
label10 :
;
}
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
ATerm trm8 = t;
if(match_cons(t, sym_Text_1))
{
ATerm trm9 = ATgetArgument(t, 0);
if(!(((ATgetType(trm9) == AT_LIST) && ATisEmpty(trm9))))
goto label9 ;
}
else
goto label9 ;
goto fail5 ;
label9 :
t = trm8;
goto label8 ;
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
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
ATerm i_74 = NULL,k_74 = NULL,l_74 = NULL;
if(match_cons(t, sym_Text_1))
{
ATerm trm1 = ATgetArgument(t, 0);
}
else
goto label1 ;
{
ATerm trm2;
trm2 = (ATerm) ATgetAnnotations(t);
if((trm2 == NULL))
trm2 = (ATerm) ATempty;
if(match_cons(t, sym_Text_1))
{
k_74 = ATgetArgument(t, 0);
}
else
goto label1 ;
i_74 = trm2;
t = k_74;
{
struct str_closure c_76 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(c_76);
t = filter_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto label1 ;
l_74 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, l_74), i_74);
}
}
goto label0 ;
label1 :
t = trm0;
goto label0 ;
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
{
ATerm trm3 = t;
ATerm o_74 = NULL,q_74 = NULL,r_74 = NULL;
ATerm trm4;
trm4 = (ATerm) ATgetAnnotations(t);
if((trm4 == NULL))
trm4 = (ATerm) ATempty;
if(match_cons(t, sym_Literal_1))
{
q_74 = ATgetArgument(t, 0);
}
else
goto label3 ;
o_74 = trm4;
t = q_74;
{
struct str_closure a_76 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(a_76);
t = string_as_chars_1_0(sl_up(sl_up(sl)), lifted2_cl, t);
if((t == NULL))
goto label3 ;
r_74 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Literal_1, r_74), o_74);
}
goto fail2 ;
label3 :
t = trm3;
goto label2 ;
label2 :
;
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
struct str_closure z_75 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(z_75);
t = SRTS_all(sl_up(sl_up(sl_up(sl))), lifted3_cl, t);
if((t == NULL))
goto fail3 ;
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
ATerm trm5 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label5 ;
goto label4 ;
label5 :
t = trm5;
{
ATerm trm6 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label6 ;
goto label4 ;
label6 :
t = trm6;
{
ATerm trm7 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label7 ;
goto label4 ;
label7 :
t = trm7;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10)))
goto label4 ;
else
goto fail4 ;
}
}
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 29));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(foldl_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldl_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Literal_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Literal_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_process_stratego_xml_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_process_stratego_xml_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xml_filter_whitespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_filter_whitespace_0_0", 0, ATtrue)), &(closures[closures_index]));
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
