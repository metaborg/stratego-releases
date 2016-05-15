#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_QName_2;
static Symbol sym_Prologue_3;
static Symbol sym_Epilogue_1;
static Symbol sym_XMLDecl_3;
static Symbol sym_VersionDecl_1;
static Symbol sym_Version_1;
static Symbol sym_DoubleQuoted_1;
static Symbol sym_Literal_1;
static Symbol sym_Document_3;
static Symbol sym_EmptyElement_2;
static Symbol sym_Element_4;
static Symbol sym_Name_2;
static Symbol sym_Attribute_2;
static Symbol sym_Text_1;
static Symbol sym_Element_3;
static Symbol sym_Document_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static void init_module_constructors (void)
{
sym_QName_2 = ATmakeSymbol("QName", 2, ATfalse);
ATprotectSymbol(sym_QName_2);
sym_Prologue_3 = ATmakeSymbol("Prologue", 3, ATfalse);
ATprotectSymbol(sym_Prologue_3);
sym_Epilogue_1 = ATmakeSymbol("Epilogue", 1, ATfalse);
ATprotectSymbol(sym_Epilogue_1);
sym_XMLDecl_3 = ATmakeSymbol("XMLDecl", 3, ATfalse);
ATprotectSymbol(sym_XMLDecl_3);
sym_VersionDecl_1 = ATmakeSymbol("VersionDecl", 1, ATfalse);
ATprotectSymbol(sym_VersionDecl_1);
sym_Version_1 = ATmakeSymbol("Version", 1, ATfalse);
ATprotectSymbol(sym_Version_1);
sym_DoubleQuoted_1 = ATmakeSymbol("DoubleQuoted", 1, ATfalse);
ATprotectSymbol(sym_DoubleQuoted_1);
sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
ATprotectSymbol(sym_Literal_1);
sym_Document_3 = ATmakeSymbol("Document", 3, ATfalse);
ATprotectSymbol(sym_Document_3);
sym_EmptyElement_2 = ATmakeSymbol("EmptyElement", 2, ATfalse);
ATprotectSymbol(sym_EmptyElement_2);
sym_Element_4 = ATmakeSymbol("Element", 4, ATfalse);
ATprotectSymbol(sym_Element_4);
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
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
}
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
term0 = (ATerm) ATmakeInt(59);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeInt(112);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(109);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(97);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(38);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeInt(116);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeInt(108);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(103);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(115);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(111);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(117);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(113);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("1.0", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_Version_1, term25);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_VersionDecl_1, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_XMLDecl_3, term29, term31, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(sym_Some_1, term33);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_Prologue_3, term35, (ATerm)ATempty, term31);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_Epilogue_1, (ATerm) ATempty);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: attributes with namespace prefix are currently not supported by xml2not-xml.\nThe namespace will be ignored", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("xmlns", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_QName_2, term31, term43);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATempty);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_Attribute_2, term45, term47);
ATprotect(&(term49));
term49 = term48;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm map_1_0 (StrSL sl, StrCL o_48, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL h_30, ATerm t);
ATerm debug_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL z_17, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL j_15, ATerm t);
ATerm Attribute_2_0 (StrSL sl, StrCL v_5, StrCL w_5, ATerm t);
ATerm Element_3_0 (StrSL sl, StrCL r_5, StrCL s_5, StrCL t_5, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm to_namespace_attr_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Attribute_0_0 (StrSL sl, ATerm t);
ATerm rewrite_OtherElement_0_0 (StrSL sl, ATerm t);
ATerm rewrite_EmptyElement_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Content_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Document_0_0 (StrSL sl, ATerm t);
ATerm xml_apply_4_0 (StrSL sl, StrCL a_4, StrCL b_4, StrCL c_4, StrCL d_4, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm xml_bottomup_1_0 (StrSL sl, StrCL z_3, ATerm t);
ATerm escape_quot_0_0 (StrSL sl, ATerm t);
ATerm escape_apos_0_0 (StrSL sl, ATerm t);
ATerm escape_gt_0_0 (StrSL sl, ATerm t);
ATerm escape_lt_0_0 (StrSL sl, ATerm t);
ATerm escape_amp_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
static ATerm s_2 (StrSL sl, ATerm t);
ATerm xml_escape_chars_0_0 (StrSL sl, ATerm t);
ATerm Attribute_2_0 (StrSL sl, StrCL v_5, StrCL w_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Attribute_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_73 = NULL,l_73 = NULL,m_73 = NULL,o_73 = NULL,p_73 = NULL;
ATerm trm51;
trm51 = (ATerm) ATgetAnnotations(t);
if((trm51 == NULL))
trm51 = (ATerm) ATempty;
if(match_cons(t, sym_Attribute_2))
{
l_73 = ATgetArgument(t, 0);
m_73 = ATgetArgument(t, 1);
}
else
goto fail24 ;
n_73 = trm51;
t = l_73;
t = cl_fun(v_5)(cl_sl(v_5), t);
if((t == NULL))
goto fail24 ;
o_73 = t;
t = m_73;
t = cl_fun(w_5)(cl_sl(w_5), t);
if((t == NULL))
goto fail24 ;
p_73 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Attribute_2, o_73, p_73), n_73);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm Element_3_0 (StrSL sl, StrCL r_5, StrCL s_5, StrCL t_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Element_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
ATerm trm50;
trm50 = (ATerm) ATgetAnnotations(t);
if((trm50 == NULL))
trm50 = (ATerm) ATempty;
if(match_cons(t, sym_Element_3))
{
b_73 = ATgetArgument(t, 0);
c_73 = ATgetArgument(t, 1);
d_73 = ATgetArgument(t, 2);
}
else
goto fail23 ;
e_73 = trm50;
t = b_73;
t = cl_fun(r_5)(cl_sl(r_5), t);
if((t == NULL))
goto fail23 ;
f_73 = t;
t = c_73;
t = cl_fun(s_5)(cl_sl(s_5), t);
if((t == NULL))
goto fail23 ;
g_73 = t;
t = d_73;
t = cl_fun(t_5)(cl_sl(t_5), t);
if((t == NULL))
goto fail23 ;
h_73 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Element_3, f_73, g_73, h_73), e_73);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_80 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(v_80);
t = io_wrap_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_80 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(u_80);
t = xml_bottomup_1_0(sl_up(sl), lifted12_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_80 = { &(rewrite_Document_0_0) , sl_up(sl_up(sl)) };
StrCL lifted13_cl = &(q_80);
struct str_closure r_80 = { &(rewrite_Content_0_0) , sl_up(sl_up(sl)) };
StrCL lifted14_cl = &(r_80);
struct str_closure s_80 = { &(rewrite_Content_0_0) , sl_up(sl_up(sl)) };
StrCL lifted15_cl = &(s_80);
struct str_closure t_80 = { &(rewrite_Attribute_0_0) , sl_up(sl_up(sl)) };
StrCL lifted16_cl = &(t_80);
t = xml_apply_4_0(sl_up(sl_up(sl)), lifted13_cl, lifted14_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm to_namespace_attr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "to_namespace_attr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm49 = t;
ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
if(match_cons(t, sym_Some_1))
{
n_5 = ATgetArgument(t, 0);
}
else
goto label24 ;
p_5 = t;
t = n_5;
{
struct str_closure p_80 = { &(xml_escape_chars_0_0) , sl };
StrCL lifted10_cl = &(p_80);
t = string_as_chars_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto label24 ;
o_5 = t;
t = p_5;
t = (ATerm) ATmakeAppl(sym_Attribute_2, term45, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, o_5))));
}
goto label23 ;
label24 :
t = trm49;
if(!(match_cons(t, sym_None_0)))
goto fail19 ;
t = term49;
goto label23 ;
label23 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_Attribute_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Attribute_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm43 = t;
ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm44 = ATgetArgument(t, 0);
if(match_cons(trm44, sym_Name_2))
{
ATerm trm45 = ATgetArgument(trm44, 0);
if(!(match_cons(trm45, sym_None_0)))
goto label22 ;
j_5 = ATgetArgument(trm44, 1);
}
else
goto label22 ;
k_5 = ATgetArgument(t, 1);
}
else
goto label22 ;
m_5 = t;
t = k_5;
{
struct str_closure o_80 = { &(xml_escape_chars_0_0) , sl };
StrCL lifted9_cl = &(o_80);
t = string_as_chars_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto label22 ;
l_5 = t;
t = m_5;
t = (ATerm) ATmakeAppl(sym_Attribute_2, (ATerm)ATmakeAppl(sym_QName_2, term31, j_5), (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, l_5))));
}
goto label21 ;
label22 :
t = trm43;
{
ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm46 = ATgetArgument(t, 0);
if(match_cons(trm46, sym_Name_2))
{
ATerm trm47 = ATgetArgument(trm46, 0);
if(match_cons(trm47, sym_Some_1))
{
ATerm trm48 = ATgetArgument(trm47, 0);
}
else
goto fail18 ;
g_5 = ATgetArgument(trm46, 1);
}
else
goto fail18 ;
h_5 = ATgetArgument(t, 1);
}
else
goto fail18 ;
i_5 = t;
t = term41;
t = debug_0_0(sl, t);
if((t == NULL))
goto fail18 ;
t = i_5;
t = (ATerm) ATmakeAppl(sym_Attribute_2, (ATerm)ATmakeAppl(sym_Name_2, term31, g_5), h_5);
goto label21 ;
}
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_OtherElement_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_OtherElement_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,d_5 = NULL,b_5 = NULL,e_5 = NULL,c_5 = NULL,f_5 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm41 = ATgetArgument(t, 0);
if(match_cons(trm41, sym_Name_2))
{
x_4 = ATgetArgument(trm41, 0);
w_4 = ATgetArgument(trm41, 1);
}
else
goto fail17 ;
u_4 = ATgetArgument(t, 1);
v_4 = ATgetArgument(t, 2);
}
else
goto fail17 ;
z_4 = t;
t = x_4;
t = to_namespace_attr_0_0(sl, t);
if((t == NULL))
goto fail17 ;
y_4 = t;
t = z_4;
d_5 = t;
t = y_4;
a_5 = t;
t = d_5;
e_5 = t;
t = u_4;
b_5 = t;
t = e_5;
f_5 = t;
t = v_4;
c_5 = t;
t = f_5;
{
ATerm trm42;
trm42 = CheckATermList(b_5);
if((trm42 == NULL))
goto fail17 ;
t = (ATerm) ATmakeAppl(sym_Element_4, (ATerm)ATmakeAppl(sym_QName_2, term31, w_4), (ATerm)ATinsert((ATermList)trm42, a_5), c_5, (ATerm) ATmakeAppl(sym_QName_2, term31, w_4));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_EmptyElement_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_EmptyElement_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,r_4 = NULL,t_4 = NULL;
if(match_cons(t, sym_Element_3))
{
ATerm trm38 = ATgetArgument(t, 0);
if(match_cons(trm38, sym_Name_2))
{
n_4 = ATgetArgument(trm38, 0);
l_4 = ATgetArgument(trm38, 1);
}
else
goto fail16 ;
m_4 = ATgetArgument(t, 1);
{
ATerm trm39 = ATgetArgument(t, 2);
if(!(((ATgetType(trm39) == AT_LIST) && ATisEmpty(trm39))))
goto fail16 ;
}
}
else
goto fail16 ;
p_4 = t;
t = n_4;
t = to_namespace_attr_0_0(sl, t);
if((t == NULL))
goto fail16 ;
o_4 = t;
t = p_4;
s_4 = t;
t = o_4;
q_4 = t;
t = s_4;
t_4 = t;
t = m_4;
r_4 = t;
t = t_4;
{
ATerm trm40;
trm40 = CheckATermList(r_4);
if((trm40 == NULL))
goto fail16 ;
t = (ATerm) ATmakeAppl(sym_EmptyElement_2, (ATerm)ATmakeAppl(sym_QName_2, term31, l_4), (ATerm) ATinsert((ATermList)trm40, q_4));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_Content_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Content_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm36 = t;
ATerm trm37 = t;
t = rewrite_EmptyElement_0_0(sl, t);
if((t == NULL))
goto label20 ;
goto label19 ;
label20 :
t = trm37;
t = rewrite_OtherElement_0_0(sl, t);
if((t == NULL))
goto label18 ;
else
goto label19 ;
label19 :
;
goto label17 ;
label18 :
t = trm36;
{
ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
if(match_cons(t, sym_Text_1))
{
h_4 = ATgetArgument(t, 0);
}
else
goto fail15 ;
i_4 = t;
t = h_4;
t = is_string_0_0(sl, t);
if((t == NULL))
goto fail15 ;
t = i_4;
k_4 = t;
t = h_4;
{
struct str_closure n_80 = { &(xml_escape_chars_0_0) , sl };
StrCL lifted8_cl = &(n_80);
t = string_as_chars_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto fail15 ;
j_4 = t;
t = k_4;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, j_4)));
goto label17 ;
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
ATerm rewrite_Document_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Document_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
if(match_cons(t, sym_Document_1))
{
e_4 = ATgetArgument(t, 0);
}
else
goto fail14 ;
g_4 = t;
t = e_4;
f_4 = t;
t = g_4;
t = (ATerm) ATmakeAppl(sym_Document_3, term37, f_4, term39);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_apply_4_0 (StrSL sl, StrCL a_4, StrCL b_4, StrCL c_4, StrCL d_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_apply_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm22 = t;
if(match_cons(t, sym_Document_1))
{
ATerm trm23 = ATgetArgument(t, 0);
}
else
goto label12 ;
t = cl_fun(a_4)(cl_sl(a_4), t);
if((t == NULL))
goto label12 ;
goto label11 ;
label12 :
t = trm22;
{
ATerm trm24 = t;
if(match_cons(t, sym_Element_3))
{
ATerm trm25 = ATgetArgument(t, 0);
ATerm trm26 = ATgetArgument(t, 1);
ATerm trm27 = ATgetArgument(t, 2);
}
else
goto label13 ;
t = cl_fun(b_4)(cl_sl(b_4), t);
if((t == NULL))
goto label13 ;
goto label11 ;
label13 :
t = trm24;
{
ATerm trm28 = t;
ATerm trm29 = t;
if(match_cons(t, sym_Element_3))
{
ATerm trm30 = ATgetArgument(t, 0);
ATerm trm31 = ATgetArgument(t, 1);
ATerm trm32 = ATgetArgument(t, 2);
}
else
goto label16 ;
goto label15 ;
label16 :
t = trm29;
if(match_cons(t, sym_Text_1))
{
ATerm trm33 = ATgetArgument(t, 0);
goto label15 ;
}
else
goto label14 ;
label15 :
;
t = cl_fun(c_4)(cl_sl(c_4), t);
if((t == NULL))
goto label14 ;
goto label11 ;
label14 :
t = trm28;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm34 = ATgetArgument(t, 0);
ATerm trm35 = ATgetArgument(t, 1);
}
else
goto fail13 ;
t = cl_fun(d_4)(cl_sl(d_4), t);
if((t == NULL))
goto fail13 ;
else
goto label11 ;
}
}
label11 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_bottomup_1_0 (StrSL sl, StrCL z_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_bottomup_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, z_3);
{
ATerm trm17 = t;
ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
ATerm trm18;
trm18 = (ATerm) ATgetAnnotations(t);
if((trm18 == NULL))
trm18 = (ATerm) ATempty;
if(match_cons(t, sym_Document_1))
{
y_79 = ATgetArgument(t, 0);
}
else
goto label8 ;
x_79 = trm18;
t = y_79;
t = xml_bottomup_1_0(sl, z_3, t);
if((t == NULL))
goto label8 ;
z_79 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Document_1, z_79), x_79);
goto label7 ;
label8 :
t = trm17;
{
ATerm trm19 = t;
struct str_closure i_80 = { &(_Id) , sl };
StrCL lifted1_cl = &(i_80);
struct str_closure j_80 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(j_80);
struct str_closure k_80 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(k_80);
t = Element_3_0(sl, lifted1_cl, lifted2_cl, lifted4_cl, t);
if((t == NULL))
goto label9 ;
goto label7 ;
label9 :
t = trm19;
{
ATerm trm20 = t;
ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
ATerm trm21;
trm21 = (ATerm) ATgetAnnotations(t);
if((trm21 == NULL))
trm21 = (ATerm) ATempty;
if(match_cons(t, sym_Text_1))
{
c_80 = ATgetArgument(t, 0);
}
else
goto label10 ;
b_80 = trm21;
t = c_80;
d_80 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, d_80), b_80);
goto label7 ;
label10 :
t = trm20;
{
struct str_closure l_80 = { &(_Id) , sl };
StrCL lifted6_cl = &(l_80);
struct str_closure m_80 = { &(_Id) , sl };
StrCL lifted7_cl = &(m_80);
t = Attribute_2_0(sl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto fail8 ;
else
goto label7 ;
}
}
}
label7 :
;
t = cl_fun(z_3)(cl_sl(z_3), t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_80 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(h_80);
t = map_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xml_bottomup_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_80 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(g_80);
t = map_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xml_bottomup_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_quot_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_quot_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_2 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm15 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm15) == AT_INT) && (ATgetInt((ATermInt) trm15) == 34))))
goto fail7 ;
x_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail7 ;
{
ATerm trm16;
trm16 = CheckATermList(x_2);
if((trm16 == NULL))
goto fail7 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm16, term1), term11), term19), term21), term23), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_apos_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_apos_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_2 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm13 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm13) == AT_INT) && (ATgetInt((ATermInt) trm13) == 39))))
goto fail6 ;
w_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail6 ;
{
ATerm trm14;
trm14 = CheckATermList(w_2);
if((trm14 == NULL))
goto fail6 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm14, term1), term17), term19), term3), term7), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_gt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_gt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_2 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm11 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm11) == AT_INT) && (ATgetInt((ATermInt) trm11) == 62))))
goto fail5 ;
v_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail5 ;
{
ATerm trm12;
trm12 = CheckATermList(v_2);
if((trm12 == NULL))
goto fail5 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm12, term1), term11), term15), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_lt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_lt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_2 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm9 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm9) == AT_INT) && (ATgetInt((ATermInt) trm9) == 60))))
goto fail4 ;
u_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail4 ;
{
ATerm trm10;
trm10 = CheckATermList(u_2);
if((trm10 == NULL))
goto fail4 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm10, term1), term11), term13), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_amp_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_amp_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_2 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm7 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm7) == AT_INT) && (ATgetInt((ATermInt) trm7) == 38))))
goto fail3 ;
t_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail3 ;
{
ATerm trm8;
trm8 = CheckATermList(t_2);
if((trm8 == NULL))
goto fail3 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm8, term1), term3), term5), term7), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_escape_chars_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_escape_chars_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = s_2(&(frame), t);
if((t == NULL))
goto fail0 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm s_2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "s_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_80 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(f_80);
t = try_1_0(sl_up(sl), lifted0_cl, t);
if((t == NULL))
goto fail1 ;
{
ATerm trm4 = t;
ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
ATerm trm5;
trm5 = (ATerm) ATgetAnnotations(t);
if((trm5 == NULL))
trm5 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
n_2 = ATgetFirst((ATermList) t);
o_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label6 ;
r_2 = trm5;
t = n_2;
p_2 = t;
t = o_2;
t = s_2(sl, t);
if((t == NULL))
goto label6 ;
q_2 = t;
{
ATerm trm6;
trm6 = CheckATermList(q_2);
if((trm6 == NULL))
goto label6 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm6, p_2), r_2);
}
goto label5 ;
label6 :
t = trm4;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label5 ;
else
goto fail1 ;
label5 :
;
}
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
ATerm trm0 = t;
t = escape_amp_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
t = escape_lt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
t = escape_gt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
t = escape_apos_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label4 ;
goto label0 ;
label4 :
t = trm3;
t = escape_quot_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail2 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 31));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Attribute_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Attribute_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Element_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Element_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(to_namespace_attr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("to_namespace_attr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Attribute_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Attribute_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_OtherElement_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_OtherElement_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_EmptyElement_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_EmptyElement_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Content_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Content_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Document_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Document_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_apply_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_apply_4_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xml_bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_quot_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_quot_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_apos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_apos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_amp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_amp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(s_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("s_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_escape_chars_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_escape_chars_0_0", 0, ATtrue)), &(closures[closures_index]));
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
