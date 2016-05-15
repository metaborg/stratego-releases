#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Def_2;
static Symbol sym_DefList_1;
static Symbol sym_ItemList_1;
static Symbol sym_Line_1;
static Symbol sym_Paragraph_1;
static Symbol sym_HSection_2;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_HV_2;
static Symbol sym_A_3;
static Symbol sym_R_2;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_IS_0;
static Symbol sym_AL_1;
static Symbol sym_AOPTIONS_1;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_Def_2 = ATmakeSymbol("Def", 2, ATfalse);
ATprotectSymbol(sym_Def_2);
sym_DefList_1 = ATmakeSymbol("DefList", 1, ATfalse);
ATprotectSymbol(sym_DefList_1);
sym_ItemList_1 = ATmakeSymbol("ItemList", 1, ATfalse);
ATprotectSymbol(sym_ItemList_1);
sym_Line_1 = ATmakeSymbol("Line", 1, ATfalse);
ATprotectSymbol(sym_Line_1);
sym_Paragraph_1 = ATmakeSymbol("Paragraph", 1, ATfalse);
ATprotectSymbol(sym_Paragraph_1);
sym_HSection_2 = ATmakeSymbol("HSection", 2, ATfalse);
ATprotectSymbol(sym_HSection_2);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
ATprotectSymbol(sym_HV_2);
sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
ATprotectSymbol(sym_A_3);
sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
ATprotectSymbol(sym_R_2);
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
sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
ATprotectSymbol(sym_AOPTIONS_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_SOpt_2, term1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a docsection: ", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_SOpt_2, term1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_IS_0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("3", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_SOpt_2, term13, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(9);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(13);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(10);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(32);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_SOpt_2, term27, term3);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_S_1, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(sym_SOpt_2, term27, term9);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_SOpt_2, term27, term37);
ATprotect(&(term39));
term39 = term38;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm map_1_0 (StrSL sl, StrCL j_56, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL t_27, ATerm t);
ATerm string_tokenize_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL d_22, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm def_to_row_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm docsection_to_box_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm try_docsection_to_box_0_0 (StrSL sl, ATerm t);
ATerm docsections_to_box_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_91 = { &(docsections_to_box_0_0) , sl };
StrCL lifted6_cl = &(y_91);
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
ATerm def_to_row_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "def_to_row_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
if(match_cons(t, sym_Def_2))
{
e_8 = ATgetArgument(t, 0);
f_8 = ATgetArgument(t, 1);
}
else
goto fail6 ;
h_8 = t;
t = f_8;
t = try_docsection_to_box_0_0(sl, t);
if((t == NULL))
goto fail6 ;
g_8 = t;
t = h_8;
t = (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_8), (ATerm) ATmakeAppl(sym_S_1, e_8)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm docsection_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "docsection_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
if(match_cons(t, sym_HSection_2))
{
a_8 = ATgetArgument(t, 0);
b_8 = ATgetArgument(t, 1);
}
else
goto label3 ;
d_8 = t;
t = b_8;
{
struct str_closure u_91 = { &(try_docsection_to_box_0_0) , sl };
StrCL lifted2_cl = &(u_91);
t = map_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto label3 ;
c_8 = t;
t = d_8;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATinsert(ATempty, term11), term17), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), c_8)), (ATerm) ATmakeAppl(sym_S_1, a_8)));
}
goto label2 ;
label3 :
t = trm1;
{
ATerm trm2 = t;
ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
if(match_cons(t, sym_Paragraph_1))
{
t_7 = ATgetArgument(t, 0);
}
else
goto label4 ;
v_7 = t;
t = t_7;
x_7 = t;
w_7 = t;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term19), term21), term23), term25), w_7);
t = string_tokenize_0_0(sl, t);
if((t == NULL))
goto label4 ;
{
struct str_closure v_91 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(v_91);
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto label4 ;
u_7 = t;
t = v_7;
t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATinsert(ATinsert(ATempty, term11), term29), u_7);
}
goto label2 ;
label4 :
t = trm2;
{
ATerm trm3 = t;
ATerm s_7 = NULL;
if(match_cons(t, sym_Line_1))
{
s_7 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = (ATerm) ATmakeAppl(sym_S_1, s_7);
goto label2 ;
label5 :
t = trm3;
{
ATerm trm4 = t;
ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
if(match_cons(t, sym_ItemList_1))
{
n_7 = ATgetArgument(t, 0);
}
else
goto label6 ;
p_7 = t;
t = n_7;
{
struct str_closure w_91 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(w_91);
t = map_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto label6 ;
o_7 = t;
t = p_7;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term11), o_7);
}
goto label2 ;
label6 :
t = trm4;
{
ATerm h_7 = NULL,i_7 = NULL,m_7 = NULL;
if(match_cons(t, sym_DefList_1))
{
h_7 = ATgetArgument(t, 0);
}
else
goto fail3 ;
m_7 = t;
t = h_7;
{
struct str_closure x_91 = { &(def_to_row_0_0) , sl };
StrCL lifted5_cl = &(x_91);
t = map_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail3 ;
i_7 = t;
t = m_7;
t = (ATerm) ATmakeAppl(sym_A_3, (ATerm)ATmakeAppl(sym_AOPTIONS_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AL_1, (ATerm) ATinsert(ATempty, term35))), (ATerm) ATmakeAppl(sym_AL_1, (ATerm) ATinsert(ATempty, term39)))), (ATerm)ATempty, i_7);
goto label2 ;
}
}
}
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_7 = NULL,r_7 = NULL;
t = try_docsection_to_box_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
r_7 = t;
q_7 = t;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term29), (ATerm) ATinsert(ATinsert(ATempty, q_7), term33));
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
{
ATerm y_7 = NULL,z_7 = NULL;
z_7 = t;
y_7 = t;
t = (ATerm) ATmakeAppl(sym_S_1, y_7);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm try_docsection_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "try_docsection_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
t = docsection_to_box_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
struct str_closure t_91 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(t_91);
t = debug_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail1 ;
goto fail1 ;
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
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm docsections_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "docsections_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
e_7 = t;
g_7 = t;
{
struct str_closure s_91 = { &(try_docsection_to_box_0_0) , sl };
StrCL lifted0_cl = &(s_91);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
f_7 = t;
t = g_7;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), f_7);
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 12));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_tokenize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_tokenize_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(def_to_row_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("def_to_row_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(docsection_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("docsection_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_docsection_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_docsection_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(docsections_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("docsections_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
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
