#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Name_2;
static Symbol sym_Attribute_2;
static Symbol sym_Text_1;
static Symbol sym_Element_3;
static Symbol sym_Document_1;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static void init_module_constructors (void)
{
sym_Name_2 = ATmakeSymbol("Name", 2, ATfalse);
ATprotectSymbol(sym_Name_2);
sym_Attribute_2 = ATmakeSymbol("Attribute", 2, ATfalse);
ATprotectSymbol(sym_Attribute_2);
sym_Text_1 = ATmakeSymbol("Text", 1, ATfalse);
ATprotectSymbol(sym_Text_1);
sym_Element_3 = ATmakeSymbol("Element", 3, ATfalse);
ATprotectSymbol(sym_Element_3);
sym_Document_1 = ATmakeSymbol("Document", 1, ATfalse);
ATprotectSymbol(sym_Document_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("--explicit-mode", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("--explicit", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym__2, term1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("--explicit       Use explicit XML elements for strings, lists, integers, and tuples (default)", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("--very-explicit", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__2, term1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("--very-explicit  Use explicit XML elements for applications, strings, lists, integers, and tuples", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("--implicit", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym__2, term1, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("--implicit       Don't use any explicit XML elements. This results in the most attractive XML, but it lacks structure.", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL m_44, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL g_44, ATerm t);
ATerm partition_1_0 (StrSL sl, StrCL z_43, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL m_43, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm trim_chars_1_0 (StrSL sl, StrCL a_15, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_2_0 (StrSL sl, StrCL c_11, StrCL d_11, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL z_8, StrCL a_9, StrCL b_9, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm XmlImplode_1_0 (StrSL sl, StrCL k_3, ATerm t);
ATerm is_anno_element_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm xml_info2data_anno_wrap_1_0 (StrSL sl, StrCL f_1, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm u_0 (StrSL sl, ATerm t);
ATerm xml_info2data_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm explicit_mode_option_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_70 = { &(explicit_mode_option_0_0) , sl };
StrCL lifted18_cl = &(b_70);
struct str_closure c_70 = { &(xml_info2data_0_0) , sl };
StrCL lifted19_cl = &(c_70);
t = io_wrap_2_0(sl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm XmlImplode_1_0 (StrSL sl, StrCL k_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "XmlImplode_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm17 = t;
ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm18 = ATgetArgument(t, 0);
if(match_cons(trm18, sym_Name_2))
{
ATerm trm19 = ATgetArgument(trm18, 0);
if(!(match_cons(trm19, sym_None_0)))
goto label6 ;
r_2 = ATgetArgument(trm18, 1);
}
else
goto label6 ;
{
ATerm trm20 = ATgetArgument(t, 1);
t_2 = trm20;
}
s_2 = ATgetArgument(t, 2);
}
else
goto label6 ;
w_2 = t;
t = t_2;
t = map_1_0(sl, k_3, t);
if((t == NULL))
goto label6 ;
u_2 = t;
t = w_2;
y_2 = t;
t = s_2;
t = map_1_0(sl, k_3, t);
if((t == NULL))
goto label6 ;
x_2 = t;
t = y_2;
{
ATerm trm21;
trm21 = SSL_mkterm(r_2, x_2);
if((trm21 == NULL))
goto label6 ;
t = (ATerm) SRTS_setAnnotations(trm21, u_2);
}
goto label5 ;
label6 :
t = trm17;
{
ATerm trm22 = t;
ATerm p_2 = NULL;
if(match_cons(t, sym_Text_1))
{
p_2 = ATgetArgument(t, 0);
}
else
goto label7 ;
t = p_2;
goto label5 ;
label7 :
t = trm22;
{
ATerm trm23 = t;
ATerm m_2 = NULL,n_2 = NULL;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm24 = ATgetArgument(t, 0);
if(match_cons(trm24, sym_Name_2))
{
ATerm trm25 = ATgetArgument(trm24, 0);
if(!(match_cons(trm25, sym_None_0)))
goto label8 ;
m_2 = ATgetArgument(trm24, 1);
}
else
goto label8 ;
n_2 = ATgetArgument(t, 1);
}
else
goto label8 ;
t = (ATerm) ATmakeAppl(sym__2, m_2, n_2);
goto label5 ;
label8 :
t = trm23;
{
ATerm trm26 = t;
ATerm k_2 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm27 = ATgetArgument(t, 0);
if(match_cons(trm27, sym_Name_2))
{
ATerm trm28 = ATgetArgument(trm27, 0);
if(match_cons(trm28, sym_Some_1))
{
ATerm trm29 = ATgetArgument(trm28, 0);
if(!((ATgetSymbol(trm29) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label9 ;
}
else
goto label9 ;
{
ATerm trm30 = ATgetArgument(trm27, 1);
if(!((ATgetSymbol(trm30) == ATmakeSymbol("int", 0, ATtrue))))
goto label9 ;
}
}
else
goto label9 ;
{
ATerm trm31 = ATgetArgument(t, 1);
}
{
ATerm trm32 = ATgetArgument(t, 2);
if(((ATgetType(trm32) == AT_LIST) && !(ATisEmpty(trm32))))
{
ATerm trm33 = ATgetFirst((ATermList) trm32);
if(match_cons(trm33, sym_Text_1))
{
k_2 = ATgetArgument(trm33, 0);
}
else
goto label9 ;
{
ATerm trm34 = (ATerm) ATgetNext((ATermList) trm32);
if(!(((ATgetType(trm34) == AT_LIST) && ATisEmpty(trm34))))
goto label9 ;
}
}
else
goto label9 ;
}
}
else
goto label9 ;
t = k_2;
{
struct str_closure u_69 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(u_69);
t = trim_chars_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto label9 ;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label9 ;
}
goto label5 ;
label9 :
t = trm26;
{
ATerm trm38 = t;
ATerm i_2 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm39 = ATgetArgument(t, 0);
if(match_cons(trm39, sym_Name_2))
{
ATerm trm40 = ATgetArgument(trm39, 0);
if(match_cons(trm40, sym_Some_1))
{
ATerm trm41 = ATgetArgument(trm40, 0);
if(!((ATgetSymbol(trm41) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label14 ;
}
else
goto label14 ;
{
ATerm trm42 = ATgetArgument(trm39, 1);
if(!((ATgetSymbol(trm42) == ATmakeSymbol("string", 0, ATtrue))))
goto label14 ;
}
}
else
goto label14 ;
{
ATerm trm43 = ATgetArgument(t, 1);
}
{
ATerm trm44 = ATgetArgument(t, 2);
if(((ATgetType(trm44) == AT_LIST) && !(ATisEmpty(trm44))))
{
ATerm trm45 = ATgetFirst((ATermList) trm44);
if(match_cons(trm45, sym_Text_1))
{
i_2 = ATgetArgument(trm45, 0);
}
else
goto label14 ;
{
ATerm trm46 = (ATerm) ATgetNext((ATermList) trm44);
if(!(((ATgetType(trm46) == AT_LIST) && ATisEmpty(trm46))))
goto label14 ;
}
}
else
goto label14 ;
}
}
else
goto label14 ;
t = i_2;
goto label5 ;
label14 :
t = trm38;
{
ATerm trm47 = t;
ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm48 = ATgetArgument(t, 0);
if(match_cons(trm48, sym_Name_2))
{
ATerm trm49 = ATgetArgument(trm48, 0);
if(match_cons(trm49, sym_Some_1))
{
ATerm trm50 = ATgetArgument(trm49, 0);
if(!((ATgetSymbol(trm50) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label15 ;
}
else
goto label15 ;
{
ATerm trm51 = ATgetArgument(trm48, 1);
if(!((ATgetSymbol(trm51) == ATmakeSymbol("appl", 0, ATtrue))))
goto label15 ;
}
}
else
goto label15 ;
{
ATerm trm52 = ATgetArgument(t, 1);
if(((ATgetType(trm52) == AT_LIST) && !(ATisEmpty(trm52))))
{
ATerm trm53 = ATgetFirst((ATermList) trm52);
if(match_cons(trm53, sym_Attribute_2))
{
ATerm trm54 = ATgetArgument(trm53, 0);
if(match_cons(trm54, sym_Name_2))
{
ATerm trm55 = ATgetArgument(trm54, 0);
if(match_cons(trm55, sym_Some_1))
{
ATerm trm56 = ATgetArgument(trm55, 0);
if(!((ATgetSymbol(trm56) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label15 ;
}
else
goto label15 ;
{
ATerm trm57 = ATgetArgument(trm54, 1);
if(!((ATgetSymbol(trm57) == ATmakeSymbol("fun", 0, ATtrue))))
goto label15 ;
}
}
else
goto label15 ;
b_2 = ATgetArgument(trm53, 1);
}
else
goto label15 ;
{
ATerm trm58 = (ATerm) ATgetNext((ATermList) trm52);
if(!(((ATgetType(trm58) == AT_LIST) && ATisEmpty(trm58))))
goto label15 ;
}
}
else
goto label15 ;
}
c_2 = ATgetArgument(t, 2);
}
else
goto label15 ;
f_2 = t;
t = c_2;
{
struct str_closure v_69 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(v_69);
t = filter_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto label15 ;
d_2 = t;
t = f_2;
h_2 = t;
t = d_2;
t = map_1_0(sl, k_3, t);
if((t == NULL))
goto label15 ;
g_2 = t;
t = h_2;
{
ATerm trm68;
trm68 = SSL_mkterm(b_2, g_2);
if((trm68 == NULL))
goto label15 ;
t = trm68;
}
}
goto label5 ;
label15 :
t = trm47;
{
ATerm trm69 = t;
ATerm x_1 = NULL,y_1 = NULL,a_2 = NULL;
sl_init_var(0, y_1);
if(match_cons(t, sym_Element_3))
{
ATerm trm70 = ATgetArgument(t, 0);
if(match_cons(trm70, sym_Name_2))
{
ATerm trm71 = ATgetArgument(trm70, 0);
if(match_cons(trm71, sym_Some_1))
{
ATerm trm72 = ATgetArgument(trm71, 0);
if(!((ATgetSymbol(trm72) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label20 ;
}
else
goto label20 ;
{
ATerm trm73 = ATgetArgument(trm70, 1);
if(!((ATgetSymbol(trm73) == ATmakeSymbol("int", 0, ATtrue))))
goto label20 ;
}
}
else
goto label20 ;
{
ATerm trm74 = ATgetArgument(t, 1);
}
x_1 = ATgetArgument(t, 2);
}
else
goto label20 ;
a_2 = t;
t = x_1;
{
struct str_closure w_69 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(w_69);
t = fetch_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto label20 ;
t = a_2;
if((y_1 == NULL))
goto label20 ;
else
{
t = y_1;
}
{
struct str_closure x_69 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(x_69);
t = trim_chars_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto label20 ;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label20 ;
}
}
goto label5 ;
label20 :
t = trm69;
{
ATerm trm86 = t;
ATerm t_1 = NULL,u_1 = NULL,w_1 = NULL;
sl_init_var(1, u_1);
if(match_cons(t, sym_Element_3))
{
ATerm trm87 = ATgetArgument(t, 0);
if(match_cons(trm87, sym_Name_2))
{
ATerm trm88 = ATgetArgument(trm87, 0);
if(match_cons(trm88, sym_Some_1))
{
ATerm trm89 = ATgetArgument(trm88, 0);
if(!((ATgetSymbol(trm89) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label25 ;
}
else
goto label25 ;
{
ATerm trm90 = ATgetArgument(trm87, 1);
if(!((ATgetSymbol(trm90) == ATmakeSymbol("string", 0, ATtrue))))
goto label25 ;
}
}
else
goto label25 ;
{
ATerm trm91 = ATgetArgument(t, 1);
}
t_1 = ATgetArgument(t, 2);
}
else
goto label25 ;
w_1 = t;
t = t_1;
{
struct str_closure y_69 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(y_69);
t = fetch_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto label25 ;
t = w_1;
if((u_1 == NULL))
goto label25 ;
else
{
t = u_1;
}
}
goto label5 ;
label25 :
t = trm86;
{
ATerm trm100 = t;
ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm101 = ATgetArgument(t, 0);
if(match_cons(trm101, sym_Name_2))
{
ATerm trm102 = ATgetArgument(trm101, 0);
if(match_cons(trm102, sym_Some_1))
{
ATerm trm103 = ATgetArgument(trm102, 0);
if(!((ATgetSymbol(trm103) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label26 ;
}
else
goto label26 ;
{
ATerm trm104 = ATgetArgument(trm101, 1);
if(!((ATgetSymbol(trm104) == ATmakeSymbol("tuple", 0, ATtrue))))
goto label26 ;
}
}
else
goto label26 ;
{
ATerm trm105 = ATgetArgument(t, 1);
}
n_1 = ATgetArgument(t, 2);
}
else
goto label26 ;
q_1 = t;
t = n_1;
{
struct str_closure z_69 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(z_69);
t = filter_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto label26 ;
o_1 = t;
t = q_1;
s_1 = t;
t = o_1;
t = map_1_0(sl, k_3, t);
if((t == NULL))
goto label26 ;
r_1 = t;
t = s_1;
{
ATerm trm109;
trm109 = SSL_mkterm(term21, r_1);
if((trm109 == NULL))
goto label26 ;
t = trm109;
}
}
goto label5 ;
label26 :
t = trm100;
{
ATerm j_1 = NULL,k_1 = NULL,m_1 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm110 = ATgetArgument(t, 0);
if(match_cons(trm110, sym_Name_2))
{
ATerm trm111 = ATgetArgument(trm110, 0);
if(match_cons(trm111, sym_Some_1))
{
ATerm trm112 = ATgetArgument(trm111, 0);
if(!((ATgetSymbol(trm112) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto fail16 ;
}
else
goto fail16 ;
{
ATerm trm113 = ATgetArgument(trm110, 1);
if(!((ATgetSymbol(trm113) == ATmakeSymbol("list", 0, ATtrue))))
goto fail16 ;
}
}
else
goto fail16 ;
{
ATerm trm114 = ATgetArgument(t, 1);
}
j_1 = ATgetArgument(t, 2);
}
else
goto fail16 ;
m_1 = t;
t = j_1;
{
struct str_closure a_70 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(a_70);
t = filter_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail16 ;
k_1 = t;
t = m_1;
t = k_1;
t = map_1_0(sl, k_3, t);
if((t == NULL))
goto fail16 ;
else
goto label5 ;
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
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm115 = t;
ATerm trm116 = t;
t = is_anno_element_0_0(sl_up(sl), t);
if((t == NULL))
goto label34 ;
goto label33 ;
label34 :
t = trm116;
if(match_cons(t, sym_Text_1))
{
ATerm trm117 = ATgetArgument(t, 0);
goto label33 ;
}
else
goto label32 ;
label33 :
;
goto fail23 ;
label32 :
t = trm115;
goto label31 ;
label31 :
;
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
ATerm trm106 = t;
ATerm trm107 = t;
t = is_anno_element_0_0(sl_up(sl), t);
if((t == NULL))
goto label30 ;
goto label29 ;
label30 :
t = trm107;
if(match_cons(t, sym_Text_1))
{
ATerm trm108 = ATgetArgument(t, 0);
goto label29 ;
}
else
goto label28 ;
label29 :
;
goto fail22 ;
label28 :
t = trm106;
goto label27 ;
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Element_3))
{
ATerm trm92 = ATgetArgument(t, 0);
if(match_cons(trm92, sym_Name_2))
{
ATerm trm93 = ATgetArgument(trm92, 0);
if(match_cons(trm93, sym_Some_1))
{
ATerm trm94 = ATgetArgument(trm93, 0);
if(!((ATgetSymbol(trm94) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm95 = ATgetArgument(trm92, 1);
if(!((ATgetSymbol(trm95) == ATmakeSymbol("value", 0, ATtrue))))
goto fail21 ;
}
}
else
goto fail21 ;
{
ATerm trm96 = ATgetArgument(t, 1);
}
{
ATerm trm97 = ATgetArgument(t, 2);
if(((ATgetType(trm97) == AT_LIST) && !(ATisEmpty(trm97))))
{
ATerm trm98 = ATgetFirst((ATermList) trm97);
if(match_cons(trm98, sym_Text_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm98, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm98, 0)))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm99 = (ATerm) ATgetNext((ATermList) trm97);
if(!(((ATgetType(trm99) == AT_LIST) && ATisEmpty(trm99))))
goto fail21 ;
}
}
else
goto fail21 ;
}
}
else
goto fail21 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm83 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label22 ;
goto label21 ;
label22 :
t = trm83;
{
ATerm trm84 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label23 ;
goto label21 ;
label23 :
t = trm84;
{
ATerm trm85 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label24 ;
goto label21 ;
label24 :
t = trm85;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32)))
goto label21 ;
else
goto fail20 ;
}
}
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Element_3))
{
ATerm trm75 = ATgetArgument(t, 0);
if(match_cons(trm75, sym_Name_2))
{
ATerm trm76 = ATgetArgument(trm75, 0);
if(match_cons(trm76, sym_Some_1))
{
ATerm trm77 = ATgetArgument(trm76, 0);
if(!((ATgetSymbol(trm77) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto fail19 ;
}
else
goto fail19 ;
{
ATerm trm78 = ATgetArgument(trm75, 1);
if(!((ATgetSymbol(trm78) == ATmakeSymbol("value", 0, ATtrue))))
goto fail19 ;
}
}
else
goto fail19 ;
{
ATerm trm79 = ATgetArgument(t, 1);
}
{
ATerm trm80 = ATgetArgument(t, 2);
if(((ATgetType(trm80) == AT_LIST) && !(ATisEmpty(trm80))))
{
ATerm trm81 = ATgetFirst((ATermList) trm80);
if(match_cons(trm81, sym_Text_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm81, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm81, 0)))
goto fail19 ;
}
else
goto fail19 ;
{
ATerm trm82 = (ATerm) ATgetNext((ATermList) trm80);
if(!(((ATgetType(trm82) == AT_LIST) && ATisEmpty(trm82))))
goto fail19 ;
}
}
else
goto fail19 ;
}
}
else
goto fail19 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm59 = t;
ATerm trm60 = t;
if(match_cons(t, sym_Element_3))
{
ATerm trm61 = ATgetArgument(t, 0);
if(match_cons(trm61, sym_Name_2))
{
ATerm trm62 = ATgetArgument(trm61, 0);
if(match_cons(trm62, sym_Some_1))
{
ATerm trm63 = ATgetArgument(trm62, 0);
if(!((ATgetSymbol(trm63) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto label19 ;
}
else
goto label19 ;
{
ATerm trm64 = ATgetArgument(trm61, 1);
if(!((ATgetSymbol(trm64) == ATmakeSymbol("anno", 0, ATtrue))))
goto label19 ;
}
}
else
goto label19 ;
{
ATerm trm65 = ATgetArgument(t, 1);
}
{
ATerm trm66 = ATgetArgument(t, 2);
}
}
else
goto label19 ;
goto label18 ;
label19 :
t = trm60;
if(match_cons(t, sym_Text_1))
{
ATerm trm67 = ATgetArgument(t, 0);
goto label18 ;
}
else
goto label17 ;
label18 :
;
goto fail18 ;
label17 :
t = trm59;
goto label16 ;
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm35 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label11 ;
goto label10 ;
label11 :
t = trm35;
{
ATerm trm36 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label12 ;
goto label10 ;
label12 :
t = trm36;
{
ATerm trm37 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label13 ;
goto label10 ;
label13 :
t = trm37;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32)))
goto label10 ;
else
goto fail17 ;
}
}
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_anno_element_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_anno_element_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Element_3))
{
ATerm trm11 = ATgetArgument(t, 0);
if(match_cons(trm11, sym_Name_2))
{
ATerm trm12 = ATgetArgument(trm11, 0);
if(match_cons(trm12, sym_Some_1))
{
ATerm trm13 = ATgetArgument(trm12, 0);
if(!((ATgetSymbol(trm13) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm14 = ATgetArgument(trm11, 1);
if(!((ATgetSymbol(trm14) == ATmakeSymbol("anno", 0, ATtrue))))
goto fail15 ;
}
}
else
goto fail15 ;
{
ATerm trm15 = ATgetArgument(t, 1);
}
{
ATerm trm16 = ATgetArgument(t, 2);
}
}
else
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_info2data_anno_wrap_1_0 (StrSL sl, StrCL f_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_info2data_anno_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
ATerm trm2 = t;
ATerm e_1 = NULL;
e_1 = t;
if(match_cons(t, sym_Element_3))
{
x_0 = ATgetArgument(t, 0);
y_0 = ATgetArgument(t, 1);
w_0 = ATgetArgument(t, 2);
}
else
goto label4 ;
{
ATerm g_1 = NULL,h_1 = NULL;
t = w_0;
{
struct str_closure t_69 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(t_69);
t = partition_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail13 ;
if(match_cons(t, sym__2))
{
a_1 = ATgetArgument(t, 0);
z_0 = ATgetArgument(t, 1);
}
else
goto fail13 ;
t = (ATerm) ATmakeAppl(sym_Element_3, x_0, y_0, z_0);
t = cl_fun(f_1)(cl_sl(f_1), t);
if((t == NULL))
goto fail13 ;
{
ATerm trm10;
trm10 = (ATerm) ATgetAnnotations(t);
if((trm10 == NULL))
trm10 = (ATerm) ATempty;
c_1 = t;
b_1 = trm10;
h_1 = t;
t = (ATerm) SRTS_setAnnotations(a_1, (ATerm) ATempty);
t = map_1_0(sl, f_1, t);
if((t == NULL))
goto fail13 ;
g_1 = t;
t = h_1;
t = (ATerm) ATmakeAppl(sym__2, g_1, (ATerm) SRTS_setAnnotations(b_1, (ATerm) ATempty));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail13 ;
d_1 = t;
t = (ATerm) SRTS_setAnnotations(c_1, d_1);
goto label3 ;
}
}
}
label4 :
t = trm2;
t = cl_fun(f_1)(cl_sl(f_1), t);
if((t == NULL))
goto fail13 ;
else
goto label3 ;
label3 :
;
}
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
{
ATerm d_69 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm3 = ATgetArgument(t, 0);
if(match_cons(trm3, sym_Name_2))
{
ATerm trm4 = ATgetArgument(trm3, 0);
if(match_cons(trm4, sym_Some_1))
{
ATerm trm5 = ATgetArgument(trm4, 0);
if(!((ATgetSymbol(trm5) == ATmakeSymbol("http://aterm.org", 0, ATtrue))))
goto fail14 ;
}
else
goto fail14 ;
{
ATerm trm6 = ATgetArgument(trm3, 1);
if(!((ATgetSymbol(trm6) == ATmakeSymbol("anno", 0, ATtrue))))
goto fail14 ;
}
}
else
goto fail14 ;
{
ATerm trm7 = ATgetArgument(t, 1);
if(!(((ATgetType(trm7) == AT_LIST) && ATisEmpty(trm7))))
goto fail14 ;
}
{
ATerm trm8 = ATgetArgument(t, 2);
if(((ATgetType(trm8) == AT_LIST) && !(ATisEmpty(trm8))))
{
d_69 = ATgetFirst((ATermList) trm8);
{
ATerm trm9 = (ATerm) ATgetNext((ATermList) trm8);
if(!(((ATgetType(trm9) == AT_LIST) && ATisEmpty(trm9))))
goto fail14 ;
}
}
else
goto fail14 ;
}
}
else
goto fail14 ;
t = d_69;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_info2data_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_info2data_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure q_69 = { &(u_0) , &(frame) };
StrCL u_0_cl = &(q_69);
sl_init_fun(0, u_0_cl);
{
ATerm v_0 = NULL;
if(match_cons(t, sym_Document_1))
{
v_0 = ATgetArgument(t, 0);
}
else
goto fail10 ;
t = v_0;
t = u_0(&(frame), t);
if((t == NULL))
goto fail10 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm u_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "u_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_69 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(p_69);
t = xml_info2data_anno_wrap_1_0(sl_up(sl), lifted9_cl, t);
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
t = XmlImplode_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm explicit_mode_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "explicit_mode_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
struct str_closure e_69 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(e_69);
struct str_closure f_69 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(f_69);
struct str_closure i_69 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(i_69);
t = Option_3_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
struct str_closure j_69 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(j_69);
struct str_closure k_69 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(k_69);
struct str_closure l_69 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(l_69);
t = Option_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
struct str_closure m_69 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(m_69);
struct str_closure n_69 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(n_69);
struct str_closure o_69 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(o_69);
t = Option_3_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
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
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
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
t = term17;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--implicit", 0, ATtrue))))
goto fail7 ;
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
t = term11;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--very-explicit", 0, ATtrue))))
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
t = term5;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--explicit", 0, ATtrue))))
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 35));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(partition_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("partition_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(trim_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("trim_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(XmlImplode_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("XmlImplode_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_anno_element_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_anno_element_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_info2data_anno_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_info2data_anno_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(u_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("u_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_info2data_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_info2data_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(explicit_mode_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explicit_mode_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
