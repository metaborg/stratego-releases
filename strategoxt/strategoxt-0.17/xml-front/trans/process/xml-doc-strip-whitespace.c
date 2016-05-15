#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Text_1;
static Symbol sym_Literal_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
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
ATerm foldl_1_0 (StrSL sl, StrCL q_46, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL x_44, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL d_44, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL y_19, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL i_14, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL s_11, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xml_filter_whitespace_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_76 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(g_76);
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
struct str_closure f_76 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(f_76);
t = topdown_1_0(sl_up(sl), lifted7_cl, t);
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
ATerm trm16 = t;
struct str_closure d_76 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(d_76);
t = is_list_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label13 ;
t = SRTS_one(sl_up(sl_up(sl)), lifted8_cl, t);
if((t == NULL))
goto label13 ;
t = xml_filter_whitespace_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail9 ;
else
goto label12 ;
label13 :
t = trm16;
goto label12 ;
label12 :
;
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
ATerm o_75 = NULL,q_75 = NULL,r_75 = NULL;
ATerm trm17;
trm17 = (ATerm) ATgetAnnotations(t);
if((trm17 == NULL))
trm17 = (ATerm) ATempty;
if(match_cons(t, sym_Text_1))
{
q_75 = ATgetArgument(t, 0);
}
else
goto fail10 ;
o_75 = trm17;
t = q_75;
r_75 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, r_75), o_75);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
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
struct str_closure z_75 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(z_75);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
{
struct str_closure a_76 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(a_76);
t = filter_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail0 ;
c_2 = t;
b_2 = t;
t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATempty);
{
struct str_closure c_76 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(c_76);
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
ATerm f_74 = NULL,g_74 = NULL,i_74 = NULL;
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
g_74 = ATgetArgument(t, 0);
}
else
goto label1 ;
f_74 = trm2;
t = g_74;
{
struct str_closure x_75 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(x_75);
t = filter_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto label1 ;
i_74 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, i_74), f_74);
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
ATerm l_74 = NULL,n_74 = NULL,o_74 = NULL;
ATerm trm4;
trm4 = (ATerm) ATgetAnnotations(t);
if((trm4 == NULL))
trm4 = (ATerm) ATempty;
if(match_cons(t, sym_Literal_1))
{
n_74 = ATgetArgument(t, 0);
}
else
goto label3 ;
l_74 = trm4;
t = n_74;
{
struct str_closure w_75 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(w_75);
t = string_as_chars_1_0(sl_up(sl_up(sl)), lifted2_cl, t);
if((t == NULL))
goto label3 ;
o_74 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Literal_1, o_74), l_74);
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
struct str_closure u_75 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(u_75);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 20));
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
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
