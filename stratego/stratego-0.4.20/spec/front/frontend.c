#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,y_79);
VARDECL(AFun,x_79);
VARDECL(AFun,v_79);
VARDECL(AFun,t_79);
VARDECL(AFun,y_60);
VARDECL(AFun,t_60);
VARDECL(AFun,r_60);
VARDECL(AFun,e_59);
VARDECL(AFun,w_58);
VARDECL(AFun,t_58);
VARDECL(AFun,p_58);
VARDECL(AFun,l_58);
VARDECL(AFun,j_58);
VARDECL(AFun,h_58);
VARDECL(AFun,c_49);
VARDECL(AFun,z_46);
VARDECL(AFun,v_46);
VARDECL(AFun,f_44);
VARDECL(AFun,c_37);
VARDECL(AFun,f_18);
VARDECL(AFun,e_18);
VARDECL(AFun,x_17);
VARDECL(AFun,l_17);
VARDECL(AFun,k_17);
VARDECL(AFun,z_16);
VARDECL(AFun,p_10);
VARDECL(AFun,j_10);
VARDECL(AFun,u_9);
VARDECL(AFun,t_9);
VARDECL(AFun,s_9);
VARDECL(AFun,q_9);
VARDECL(AFun,p_9);
VARDECL(AFun,q_8);
VARDECL(AFun,f_8);
VARDECL(AFun,r_7);
VARDECL(AFun,f_7);
VARDECL(AFun,s_6);
VARDECL(AFun,h_6);
VARDECL(AFun,b_6);
VARDECL(AFun,y_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_95);
PROCDECL(_stratego_t_95);
PROCDECL(_stratego_u_95);
PROCDECL(_stratego_v_95);
PROCDECL(_stratego_w_95);
PROCDECL(_stratego_x_95);
PROCDECL(_stratego_y_95);
PROCDECL(_stratego_z_95);
PROCDECL(_stratego_a_96);
PROCDECL(_stratego_b_96);
PROCDECL(_stratego_c_96);
PROCDECL(_stratego_d_96);
PROCDECL(_stratego_e_96);
PROCDECL(_stratego_f_96);
PROCDECL(_stratego_g_96);
PROCDECL(_stratego_h_96);
PROCDECL(_stratego_i_96);
PROCDECL(_stratego_j_96);
PROCDECL(_stratego_k_96);
PROCDECL(_stratego_l_96);
PROCDECL(_stratego_m_96);
PROCDECL(_stratego_n_96);
PROCDECL(_stratego_o_96);
PROCDECL(_stratego_p_96);
PROCDECL(_stratego_q_96);
PROCDECL(_stratego_r_96);
PROCDECL(_stratego_s_96);
PROCDECL(_stratego_t_96);
PROCDECL(_stratego_u_96);
PROCDECL(_stratego_v_96);
PROCDECL(_stratego_w_96);
PROCDECL(_stratego_x_96);
PROCDECL(_stratego_y_96);
PROCDECL(_stratego_z_96);
PROCDECL(_stratego_a_97);
PROCDECL(_stratego_b_97);
PROCDECL(_stratego_c_97);
PROCDECL(_stratego_d_97);
PROCDECL(_stratego_e_97);
PROCDECL(_stratego_f_97);
PROCDECL(_stratego_g_97);
PROCDECL(_stratego_h_97);
PROCDECL(_stratego_i_97);
PROCDECL(_stratego_j_97);
PROCDECL(_stratego_k_97);
PROCDECL(_stratego_l_97);
PROCDECL(_stratego_m_97);
PROCDECL(_stratego_n_97);
PROCDECL(_stratego_o_97);
PROCDECL(_stratego_p_97);
PROCDECL(_stratego_q_97);
PROCDECL(_stratego_r_97);
PROCDECL(_stratego_s_97);
PROCDECL(_stratego_t_97);
PROCDECL(_stratego_u_97);
PROCDECL(_stratego_v_97);
PROCDECL(_stratego_w_97);
PROCDECL(_stratego_x_97);
PROCDECL(_stratego_y_97);
PROCDECL(_stratego_z_97);
PROCDECL(_stratego_a_98);
PROCDECL(_stratego_b_98);
PROCDECL(_stratego_c_98);
PROCDECL(_stratego_d_98);
PROCDECL(_stratego_e_98);

PROC(_stratego_init_afuns)
  MOVE(y_79,ATmakeAFun("BuildDefault",1,0));
  MOVE(x_79,ATmakeAFun("Real",1,0));
  MOVE(v_79,ATmakeAFun("Int",1,0));
  MOVE(t_79,ATmakeAFun("Str",1,0));
  MOVE(y_60,ATmakeAFun("StratRule",3,0));
  MOVE(t_60,ATmakeAFun("Seq",2,0));
  MOVE(r_60,ATmakeAFun("Seqs",1,0));
  MOVE(e_59,ATmakeAFun("Cong",2,0));
  MOVE(w_58,ATmakeAFun("BAM",3,0));
  MOVE(t_58,ATmakeAFun("BA",2,0));
  MOVE(p_58,ATmakeAFun("AM",2,0));
  MOVE(l_58,ATmakeAFun("MA",2,0));
  MOVE(j_58,ATmakeAFun("Match",1,0));
  MOVE(h_58,ATmakeAFun("Build",1,0));
  MOVE(c_49,ATmakeAFun("Scope",2,0));
  MOVE(z_46,ATmakeAFun("Rule",3,0));
  MOVE(v_46,ATmakeAFun("LRule",1,0));
  MOVE(f_44,ATmakeAFun("Var",1,0));
  MOVE(c_37,ATmakeAFun("Sorts",1,0));
  MOVE(f_18,ATmakeAFun("FunType",2,0));
  MOVE(e_18,ATmakeAFun("ConstType",1,0));
  MOVE(x_17,ATmakeAFun("OpDecl",2,0));
  MOVE(l_17,ATmakeAFun("SDef",3,0));
  MOVE(k_17,ATmakeAFun("RDef",3,0));
  MOVE(z_16,ATmakeAFun("Operations",1,0));
  MOVE(p_10,ATmakeAFun("Overlay",3,0));
  MOVE(j_10,ATmakeAFun("Op",2,0));
  MOVE(u_9,ATmakeAFun("Strategies",1,0));
  MOVE(t_9,ATmakeAFun("Rules",1,0));
  MOVE(s_9,ATmakeAFun("Overlays",1,0));
  MOVE(q_9,ATmakeAFun("Signature",1,0));
  MOVE(p_9,ATmakeAFun("Specification",1,0));
  MOVE(q_8,ATmakeAFun("Runtime",1,0));
  MOVE(f_8,ATmakeAFun("Silent",0,0));
  MOVE(r_7,ATmakeAFun("Binary",0,0));
  MOVE(f_7,ATmakeAFun("Output",1,0));
  MOVE(s_6,ATmakeAFun("Input",1,0));
  MOVE(h_6,ATmakeAFun("Program",1,0));
  MOVE(b_6,ATmakeAFun("Help",0,0));
  MOVE(y_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_s_95);
ENDPROC

PROC(_stratego_s_95)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_0);
  g_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_t_95);
  goto f_0;
  g_0 :
  Ccall(_stratego_u_95);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto g_4;
  i_0 :
  AllBuild();
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_0);
  goto h_4;
  l_0 :
  goto k_0;
  h_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  k_0 :
  Epopd(0,3);
  goto j_0;
  d_0 :
  Cpop();
  j_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(n_0);
  Ccall(_stratego_v_95);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_a_96);
  Tdupl();
  Ccall(_stratego_c_96);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_96);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_96);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto w_2;
  w_2 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(r_0);
  goto j_4;
  r_0 :
  goto q_0;
  j_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_d_96);
  Ccall(_stratego_g_96);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_h_96);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_t_95)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_4;
  l_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto n_4;
  v_0 :
  goto u_0;
  n_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_95)
  Epushd(0,5);
  MoveTop(0,3);
  goto w_8;
  w_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_8;
  x_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto r_13;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto u_13;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto x_13;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto a_14;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto d_14;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto g_14;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto k_14;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto o_14;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto s_14;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto w_14;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto a_15;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto d_15;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto g_15;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto j_15;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto m_15;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto r_13;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto u_13;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto x_13;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto a_14;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto d_14;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto a_15;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto d_15;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto g_15;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto j_15;
  v_3 :
  goto t_2;
  u_3 :
  Rpush(x_3);
  goto m_15;
  x_3 :
  goto w_3;
  t_2 :
  Cpop();
  w_3 :
  goto m_1;
  m_1 :
  goto l_1;
  m_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_8;
  u_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto n_15;
  d_4 :
  goto y_3;
  n_15 :
  Return();
  y_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  j_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_8;
  r_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto k_15;
  f_4 :
  goto e_4;
  k_15 :
  Return();
  e_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_8;
  o_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(k_4);
  goto h_15;
  k_4 :
  goto i_4;
  h_15 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  d_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto e_15;
  p_4 :
  goto o_4;
  e_15 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  a_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_8;
  i_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto b_15;
  r_4 :
  goto q_4;
  b_15 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  w_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto x_14;
  t_4 :
  goto s_4;
  x_14 :
  Return();
  s_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_1 :
  goto f_1;
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto t_14;
  v_4 :
  goto u_4;
  t_14 :
  Return();
  u_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  o_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto p_14;
  x_4 :
  goto w_4;
  p_14 :
  Return();
  w_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_1 :
  goto d_1;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto l_14;
  z_4 :
  goto y_4;
  l_14 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_1 :
  goto c_1;
  g_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto h_14;
  b_5 :
  goto a_5;
  h_14 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_1 :
  goto b_1;
  d_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_6;
  p_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto e_14;
  d_5 :
  goto c_5;
  e_14 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_5;
  n_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(g_5);
  goto b_14;
  g_5 :
  goto f_5;
  b_14 :
  Return();
  f_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  x_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_5;
  k_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(j_5);
  goto y_13;
  j_5 :
  goto i_5;
  y_13 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  u_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_5;
  h_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(m_5);
  goto v_13;
  m_5 :
  goto l_5;
  v_13 :
  Return();
  l_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_5;
  e_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(p_5);
  goto s_13;
  p_5 :
  goto o_5;
  s_13 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_95)
  Tdupl();
  q_5 :
  TestFunTop(a_0);
  Cpush(r_5);
  Arg(0);
  Cpush(u_5);
  Ccall(_stratego_w_95);
  goto t_5;
  u_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto s_15;
  s_15 :
  TestFunFC(y_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_5);
  goto w_15;
  x_5 :
  goto w_5;
  w_15 :
  Return();
  w_5 :
  Epopd(0,2);
  goto v_5;
  t_5 :
  Cpop();
  v_5 :
  Tpop();
  Cpop();
  goto s_5;
  r_5 :
  Arg(1);
  Tdrop();
  goto q_5;
  s_5 :
  Tpop();
  Ccall(_stratego_x_95);
ENDPROC

PROC(_stratego_w_95)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_15;
  y_15 :
  TestFunFC(b_6,&&fail,Egetd(0,1));
  Rpush(a_6);
  goto a_16;
  a_6 :
  goto z_5;
  a_16 :
  Return();
  z_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_95)
  Epushd(0,1);
  Tdupl();
  Rpush(c_6);
  j_16 :
  Cpush(e_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_16;
  c_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_16;
  d_16 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_6);
  goto k_16;
  g_6 :
  goto f_6;
  k_16 :
  Move(0,1,1,3);
  Return();
  f_6 :
  Epopd(1,4);
  goto d_6;
  e_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_6);
  goto j_16;
  j_6 :
  AllBuild();
  goto i_6;
  d_6 :
  Cpop();
  i_6 :
  Return();
  c_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_y_95);
  Tset(MakeInt(1));
  Ccall(_stratego_z_95);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_95)
  _ST_printnl();
ENDPROC

PROC(_stratego_z_95)
  _ST_exit();
ENDPROC

PROC(_stratego_a_96)
  Epushd(0,3);
  Tdupl();
  Cpush(l_6);
  Rpush(m_6);
  u_17 :
  Cpush(o_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_16;
  m_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_16;
  n_16 :
  TestFunFC(s_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_6);
  goto v_17;
  r_6 :
  goto q_6;
  v_17 :
  Move(0,1,1,3);
  Return();
  q_6 :
  Epopd(1,4);
  goto n_6;
  o_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_6);
  goto u_17;
  u_6 :
  AllBuild();
  goto t_6;
  n_6 :
  Cpop();
  t_6 :
  Return();
  m_6 :
  goto k_6;
  l_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto v_6;
  k_6 :
  Cpop();
  v_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_b_96);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_96)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_c_96)
  _ST_dtime();
ENDPROC

PROC(_stratego_d_96)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(y_6);
  Rpush(z_6);
  i_19 :
  Cpush(b_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_18;
  c_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_18;
  d_18 :
  TestFunFC(f_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_7);
  goto j_19;
  d_7 :
  goto c_7;
  j_19 :
  Move(0,1,1,3);
  Return();
  c_7 :
  Epopd(1,4);
  goto a_7;
  b_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto i_19;
  h_7 :
  AllBuild();
  goto g_7;
  a_7 :
  Cpop();
  g_7 :
  Return();
  z_6 :
  goto x_6;
  y_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto j_7;
  x_6 :
  Cpop();
  j_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Cpush(l_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(m_7);
  o_19 :
  Cpush(o_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto n_18;
  n_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_18;
  o_18 :
  TestFunFC(r_7,&&fail,Egetd(1,2));
  Rpush(q_7);
  goto p_19;
  q_7 :
  goto p_7;
  p_19 :
  Return();
  p_7 :
  Epopd(1,3);
  goto n_7;
  o_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_7);
  goto o_19;
  t_7 :
  AllBuild();
  goto s_7;
  n_7 :
  Cpop();
  s_7 :
  Return();
  m_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_96);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto k_7;
  l_7 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_96);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto u_7;
  k_7 :
  Cpop();
  u_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_96)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_f_96)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_g_96)
  Epushd(0,2);
  Tdupl();
  Cpush(x_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(y_7);
  Tdupl();
  Rpush(z_7);
  s_20 :
  Cpush(b_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_19;
  r_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_19;
  s_19 :
  TestFunFC(f_8,&&fail,Egetd(1,2));
  Rpush(d_8);
  goto t_20;
  d_8 :
  goto c_8;
  t_20 :
  Return();
  c_8 :
  Epopd(1,3);
  goto a_8;
  b_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_8);
  goto s_20;
  h_8 :
  AllBuild();
  goto g_8;
  a_8 :
  Cpop();
  g_8 :
  Return();
  z_7 :
  Cpop();
  Crestore();
  Cjump();
  y_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(j_8);
  u_20 :
  Cpush(m_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_19;
  u_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_19;
  v_19 :
  TestFunFC(q_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_8);
  goto v_20;
  p_8 :
  goto n_8;
  v_20 :
  Move(0,2,1,3);
  Return();
  n_8 :
  Epopd(1,4);
  goto k_8;
  m_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_8);
  goto u_20;
  t_8 :
  AllBuild();
  goto s_8;
  k_8 :
  Cpop();
  s_8 :
  Return();
  j_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(v_8);
  w_20 :
  Cpush(z_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_19;
  x_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_19;
  y_19 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_9);
  goto x_20;
  b_9 :
  goto a_9;
  x_20 :
  Move(0,1,1,3);
  Return();
  a_9 :
  Epopd(1,4);
  goto y_8;
  z_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_9);
  goto w_20;
  d_9 :
  AllBuild();
  goto c_9;
  y_8 :
  Cpop();
  c_9 :
  Return();
  v_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_y_95);
  goto w_7;
  x_7 :
  goto e_9;
  w_7 :
  Cpop();
  e_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_z_95);
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_96)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_95);
  Tset(MakeInt(1));
  Ccall(_stratego_z_95);
ENDPROC

PROC(_stratego_i_96)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_21;
  a_21 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(l_9);
  goto d_21;
  l_9 :
  goto k_9;
  d_21 :
  Return();
  k_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_96)
  Epushd(0,14);
  Ccall(_stratego_k_96);
  Tdupl();
  Ccall(_stratego_a_97);
  Tpop();
  MoveTop(0,1);
  goto g_31;
  g_31 :
  TestFunFC(p_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto h_31;
  h_31 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto i_31;
  i_31 :
  TestFunFC(q_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto j_31;
  j_31 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto k_31;
  k_31 :
  TestFunFC(s_9,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto l_31;
  l_31 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto m_31;
  m_31 :
  TestFunFC(t_9,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto n_31;
  n_31 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,14,0,11,1);
  goto o_31;
  o_31 :
  TestFunFC(u_9,&&fail,Egetd(0,12));
  MoveArg(0,13,0,12,0);
  goto p_31;
  p_31 :
  TestFunFC(w_0,&&fail,Egetd(0,14));
  Rpush(o_9);
  goto g_47;
  o_9 :
  goto n_9;
  g_47 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(x_9);
  Tdupl();
  Cpush(y_9);
  Tdupl();
  Epushd(3,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  MoveTop(3,1);
  goto g_21;
  g_21 :
  TestFunFC(w_0,&&fail,Egetd(3,1));
  Rpush(a_10);
  goto h_47;
  a_10 :
  goto z_9;
  h_47 :
  Return();
  z_9 :
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  y_9 :
  Tpop();
  Rpush(c_10);
  i_47 :
  Rpush(d_10);
  j_47 :
  Cpush(f_10);
  Epushd(3,3);
  MoveTop(3,1);
  goto k_22;
  k_22 :
  TestFunFC(j_10,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_10);
  goto k_47;
  i_10 :
  goto h_10;
  k_47 :
  Epushd(4,2);
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(k_10);
  l_47 :
  Cpush(m_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(5,4);
  MoveTop(5,1);
  goto j_22;
  j_22 :
  TestFunFC(p_10,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  MoveArg(5,4,5,1,2);
  Rpush(o_10);
  goto m_47;
  o_10 :
  goto n_10;
  m_47 :
  Epushd(6,8);
  Move(3,2,5,2);
  Move(6,1,5,3);
  Move(6,2,5,4);
  NotNULLd(6,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  Rpush(r_10);
  n_47 :
  Epushd(7,9);
  MoveTop(7,1);
  goto r_21;
  r_21 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,5,7,1,1);
  goto s_21;
  s_21 :
  TestFunFC(w_0,&&v_10,Egetd(7,2));
  goto t_21;
  t_21 :
  TestFunFC(p_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,9,7,5,1);
  goto u_21;
  u_21 :
  TestFunFC(w_0,&&fail,Egetd(7,6));
  goto v_21;
  v_21 :
  TestFunFC(s_0,&&fail,Egetd(7,9));
  Rpush(u_10);
  goto o_47;
  v_10 :
  TestFunFC(a_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto w_21;
  w_21 :
  TestFunFC(p_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,9,7,5,1);
  goto x_21;
  x_21 :
  TestFunFC(a_0,&&fail,Egetd(7,6));
  MoveArg(7,7,7,6,0);
  MoveArg(7,8,7,6,1);
  goto y_21;
  y_21 :
  TestFunFC(s_0,&&fail,Egetd(7,9));
  Rpush(u_10);
  goto p_47;
  u_10 :
  goto t_10;
  p_47 :
  Epushd(8,5);
  NotNULLd(7,3);
  NotNULLd(7,7);
  NotNULLd(7,4);
  NotNULLd(7,8);
  Tset(App2("TCons",App2("TCons",Egetd(7,3),App2("TCons",Egetd(7,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(7,4),App2("TCons",Egetd(7,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(x_10);
  goto n_47;
  x_10 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(8,1);
  goto o_21;
  o_21 :
  TestFunFC(p_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto p_21;
  p_21 :
  TestFunFC(p_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto q_21;
  q_21 :
  TestFunFC(s_0,&&fail,Egetd(8,5));
  Rpush(z_10);
  goto q_47;
  z_10 :
  goto w_10;
  q_47 :
  NotNULLd(8,2);
  NotNULLd(8,4);
  Tset(App2("Cons",Egetd(8,2),Egetd(8,4)));
  Return();
  w_10 :
  Epopd(8,5);
  Return();
  t_10 :
  goto s_10;
  o_47 :
  Tset(App0("Nil"));
  Return();
  s_10 :
  Epopd(7,9);
  Return();
  r_10 :
  MoveTop(6,3);
  NotNULLd(6,3);
  NotNULLd(6,2);
  Tset(App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,2),App0("TNil"))));
  MoveTop(6,4);
  goto g_22;
  g_22 :
  TestFunFC(p_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto h_22;
  h_22 :
  TestFunFC(p_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto i_22;
  i_22 :
  TestFunFC(s_0,&&fail,Egetd(6,8));
  Rpush(b_11);
  goto s_47;
  b_11 :
  goto a_11;
  s_47 :
  Move(4,1,6,5);
  Move(4,2,6,7);
  Return();
  a_11 :
  Epopd(6,8);
  Return();
  n_10 :
  Epopd(5,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto l_10;
  m_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_11);
  goto l_47;
  d_11 :
  AllBuild();
  goto c_11;
  l_10 :
  Cpop();
  c_11 :
  Return();
  k_10 :
  Tpop();
  NotNULLd(4,1);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(4,2),App0("TNil"))));
  Ccall(_stratego_s_97);
  Rpush(e_11);
  goto j_47;
  e_11 :
  Epopd(4,2);
  Return();
  h_10 :
  Epopd(3,3);
  goto e_10;
  f_10 :
  goto f_11;
  e_10 :
  Cpop();
  f_11 :
  Return();
  d_10 :
  AllInit();
  h_11 :
  AllNextSon(&&i_11);
  Rpush(j_11);
  goto i_47;
  j_11 :
  goto h_11;
  i_11 :
  AllBuild();
  Return();
  c_10 :
  goto v_9;
  x_9 :
  goto k_11;
  v_9 :
  Cpop();
  k_11 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Cpush(m_11);
  Tdupl();
  Cpush(n_11);
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto n_22;
  n_22 :
  TestFunFC(w_0,&&fail,Egetd(2,1));
  Rpush(q_11);
  goto u_47;
  q_11 :
  goto p_11;
  u_47 :
  Return();
  p_11 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  n_11 :
  Tpop();
  Rpush(r_11);
  v_47 :
  Cpush(t_11);
  Epushd(2,3);
  MoveTop(2,1);
  goto o_23;
  o_23 :
  TestFunFC(j_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_11);
  goto w_47;
  v_11 :
  goto u_11;
  w_47 :
  Epushd(3,2);
  Tdupl();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(x_11);
  x_47 :
  Cpush(z_11);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(4,4);
  MoveTop(4,1);
  goto n_23;
  n_23 :
  TestFunFC(p_10,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(b_12);
  goto y_47;
  b_12 :
  goto a_12;
  y_47 :
  Epushd(5,8);
  Move(2,2,4,2);
  Move(5,1,4,3);
  Move(5,2,4,4);
  NotNULLd(5,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  Rpush(c_12);
  z_47 :
  Epushd(6,9);
  MoveTop(6,1);
  goto w_22;
  w_22 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto x_22;
  x_22 :
  TestFunFC(w_0,&&h_12,Egetd(6,2));
  goto y_22;
  y_22 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto z_22;
  z_22 :
  TestFunFC(w_0,&&fail,Egetd(6,6));
  goto a_23;
  a_23 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(g_12);
  goto a_48;
  h_12 :
  TestFunFC(a_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto b_23;
  b_23 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto c_23;
  c_23 :
  TestFunFC(a_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto d_23;
  d_23 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(g_12);
  goto b_48;
  g_12 :
  goto f_12;
  b_48 :
  Epushd(7,5);
  NotNULLd(6,3);
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,8);
  Tset(App2("TCons",App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(6,4),App2("TCons",Egetd(6,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(k_12);
  goto z_47;
  k_12 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto t_22;
  t_22 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto u_22;
  u_22 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto v_22;
  v_22 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(l_12);
  goto c_48;
  l_12 :
  goto j_12;
  c_48 :
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("Cons",Egetd(7,2),Egetd(7,4)));
  Return();
  j_12 :
  Epopd(7,5);
  Return();
  f_12 :
  goto e_12;
  a_48 :
  Tset(App0("Nil"));
  Return();
  e_12 :
  Epopd(6,9);
  Return();
  c_12 :
  MoveTop(5,3);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,4);
  goto g_23;
  g_23 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto h_23;
  h_23 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto i_23;
  i_23 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(o_12);
  goto e_48;
  o_12 :
  goto m_12;
  e_48 :
  Move(3,1,5,5);
  Move(3,2,5,7);
  Return();
  m_12 :
  Epopd(5,8);
  Return();
  a_12 :
  Epopd(4,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto y_11;
  z_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_12);
  goto x_47;
  q_12 :
  AllBuild();
  goto p_12;
  y_11 :
  Cpop();
  p_12 :
  Return();
  x_11 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_s_97);
  Epopd(3,2);
  Return();
  u_11 :
  Epopd(2,3);
  goto s_11;
  t_11 :
  goto r_12;
  s_11 :
  Cpop();
  r_12 :
  AllInit();
  s_12 :
  AllNextSon(&&t_12);
  Rpush(u_12);
  goto v_47;
  u_12 :
  goto s_12;
  t_12 :
  AllBuild();
  Return();
  r_11 :
  goto l_11;
  m_11 :
  goto v_12;
  l_11 :
  Cpop();
  v_12 :
  MoveTop(1,2);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(w_12);
  g_48 :
  Cpush(y_12);
  Ccall(_stratego_t_95);
  goto x_12;
  y_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto s_23;
  s_23 :
  TestFunFC(p_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(b_13);
  goto h_48;
  b_13 :
  goto a_13;
  h_48 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_q_97);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),Egetd(3,1)));
  Epopd(3,1);
  Return();
  a_13 :
  Epopd(2,4);
  OneNextSon();
  Rpush(c_13);
  goto g_48;
  c_13 :
  AllBuild();
  goto z_12;
  x_12 :
  Cpop();
  z_12 :
  Return();
  w_12 :
  MoveTop(1,3);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Cpush(e_13);
  Tdupl();
  Cpush(f_13);
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto x_23;
  x_23 :
  TestFunFC(w_0,&&fail,Egetd(2,1));
  Rpush(h_13);
  goto k_48;
  h_13 :
  goto g_13;
  k_48 :
  Return();
  g_13 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  f_13 :
  Tpop();
  Rpush(i_13);
  l_48 :
  Cpush(l_13);
  Epushd(2,3);
  MoveTop(2,1);
  goto m_25;
  m_25 :
  TestFunFC(j_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_13);
  goto m_48;
  n_13 :
  goto m_13;
  m_48 :
  Epushd(3,2);
  Tdupl();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(p_13);
  n_48 :
  Cpush(t_13);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(4,4);
  MoveTop(4,1);
  goto l_25;
  l_25 :
  TestFunFC(p_10,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(z_13);
  goto o_48;
  z_13 :
  goto w_13;
  o_48 :
  Epushd(5,8);
  Move(2,2,4,2);
  Move(5,1,4,3);
  Move(5,2,4,4);
  NotNULLd(5,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  Rpush(c_14);
  p_48 :
  Epushd(6,9);
  MoveTop(6,1);
  goto y_24;
  y_24 :
  TestFunFC(p_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto z_24;
  z_24 :
  TestFunFC(w_0,&&m_14,Egetd(6,2));
  goto a_25;
  a_25 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto b_25;
  b_25 :
  TestFunFC(w_0,&&fail,Egetd(6,6));
  goto c_25;
  c_25 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(j_14);
  goto q_48;
  m_14 :
  TestFunFC(a_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto d_25;
  d_25 :
  TestFunFC(p_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto e_25;
  e_25 :
  TestFunFC(a_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto f_25;
  f_25 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(j_14);
  goto r_48;
  j_14 :
  goto i_14;
  r_48 :
  Epushd(7,5);
  NotNULLd(6,3);
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,8);
  Tset(App2("TCons",App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(6,4),App2("TCons",Egetd(6,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(q_14);
  goto p_48;
  q_14 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto v_24;
  v_24 :
  TestFunFC(p_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto w_24;
  w_24 :
  TestFunFC(p_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto x_24;
  x_24 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(r_14);
  goto s_48;
  r_14 :
  goto n_14;
  s_48 :
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("Cons",Egetd(7,2),Egetd(7,4)));
  Return();
  n_14 :
  Epopd(7,5);
  Return();
  i_14 :
  goto f_14;
  q_48 :
  Tset(App0("Nil"));
  Return();
  f_14 :
  Epopd(6,9);
  Return();
  c_14 :
  MoveTop(5,3);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,4);
  goto i_25;
  i_25 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto j_25;
  j_25 :
  TestFunFC(p_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto k_25;
  k_25 :
  TestFunFC(s_0,&&fail,Egetd(5,8));
  Rpush(v_14);
  goto u_48;
  v_14 :
  goto u_14;
  u_48 :
  Move(3,1,5,5);
  Move(3,2,5,7);
  Return();
  u_14 :
  Epopd(5,8);
  Return();
  w_13 :
  Epopd(4,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto q_13;
  t_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto n_48;
  z_14 :
  AllBuild();
  goto y_14;
  q_13 :
  Cpop();
  y_14 :
  Return();
  p_13 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_s_97);
  Epopd(3,2);
  Return();
  m_13 :
  Epopd(2,3);
  goto k_13;
  l_13 :
  goto c_15;
  k_13 :
  Cpop();
  c_15 :
  AllInit();
  f_15 :
  AllNextSon(&&i_15);
  Rpush(l_15);
  goto l_48;
  l_15 :
  goto f_15;
  i_15 :
  AllBuild();
  Return();
  i_13 :
  goto d_13;
  e_13 :
  goto o_15;
  d_13 :
  Cpop();
  o_15 :
  MoveTop(1,4);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(1,5);
  goto q_25;
  q_25 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_25;
  r_25 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto s_25;
  s_25 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(q_15);
  goto w_48;
  q_15 :
  goto p_15;
  w_48 :
  Epushd(2,1);
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(r_15);
  x_48 :
  Cpush(b_16);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_16);
  goto x_48;
  l_16 :
  AllBuild();
  goto x_15;
  b_16 :
  Ccall(_stratego_t_95);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto o_16;
  x_15 :
  Cpop();
  o_16 :
  Return();
  r_15 :
  MoveTop(2,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Rules",Egetd(1,2)),App2("Cons",App1("Strategies",Egetd(2,1)),App0("Nil"))))));
  Epopd(2,1);
  Return();
  p_15 :
  Cpush(q_16);
  Epushd(2,14);
  MoveTop(2,1);
  goto v_30;
  v_30 :
  TestFunFC(p_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto w_30;
  w_30 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,8,2,2,1);
  goto x_30;
  x_30 :
  TestFunFC(q_9,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  goto y_30;
  y_30 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto z_30;
  z_30 :
  TestFunFC(z_16,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto a_31;
  a_31 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  goto b_31;
  b_31 :
  TestFunFC(a_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,11,2,8,1);
  goto c_31;
  c_31 :
  TestFunFC(t_9,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  goto d_31;
  d_31 :
  TestFunFC(a_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,14,2,11,1);
  goto e_31;
  e_31 :
  TestFunFC(u_9,&&fail,Egetd(2,12));
  MoveArg(2,13,2,12,0);
  goto f_31;
  f_31 :
  TestFunFC(w_0,&&fail,Egetd(2,14));
  Rpush(x_16);
  goto z_48;
  x_16 :
  goto r_16;
  z_48 :
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,10);
  NotNULLd(2,13);
  Tset(App2("TCons",Egetd(2,10),App2("TCons",Egetd(2,13),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_17);
  a_49 :
  Cpush(d_17);
  Ccall(_stratego_t_95);
  goto c_17;
  d_17 :
  Ccontinue(e_17);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto d_28;
  d_28 :
  TestFunFC(k_17,&&j_17,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(i_17);
  goto b_49;
  j_17 :
  TestFunFC(l_17,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(i_17);
  goto u_49;
  i_17 :
  goto h_17;
  u_49 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in definition "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(m_17);
  w_49 :
  Cpush(o_17);
  Epushd(7,3);
  MoveTop(7,1);
  goto c_28;
  c_28 :
  TestFunFC(j_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(q_17);
  goto x_49;
  q_17 :
  goto p_17;
  x_49 :
  Tdupl();
  Epushd(8,1);
  Cpush(r_17);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_17);
  y_49 :
  Cpush(w_17);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(x_17);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto h_27;
  h_27 :
  TestFunFC(e_18,&&b_18,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(a_18);
  goto a_50;
  b_18 :
  TestFunFC(f_18,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(a_18);
  goto c_50;
  a_18 :
  goto z_17;
  c_50 :
  Move(9,1,10,2);
  Return();
  z_17 :
  goto y_17;
  a_50 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  y_17 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(g_18);
  d_50 :
  Epushd(10,9);
  MoveTop(10,1);
  goto o_27;
  o_27 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto p_27;
  p_27 :
  TestFunFC(w_0,&&k_18,Egetd(10,2));
  goto q_27;
  q_27 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto r_27;
  r_27 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto s_27;
  s_27 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(j_18);
  goto e_50;
  k_18 :
  TestFunFC(a_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto t_27;
  t_27 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto u_27;
  u_27 :
  TestFunFC(a_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto v_27;
  v_27 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(j_18);
  goto f_50;
  j_18 :
  goto i_18;
  f_50 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(m_18);
  goto d_50;
  m_18 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto l_27;
  l_27 :
  TestFunFC(p_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto m_27;
  m_27 :
  TestFunFC(p_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto n_27;
  n_27 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(u_18);
  goto g_50;
  u_18 :
  goto l_18;
  g_50 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  l_18 :
  Epopd(11,5);
  Return();
  i_18 :
  goto h_18;
  e_50 :
  Tset(App0("Nil"));
  Return();
  h_18 :
  Epopd(10,9);
  Return();
  g_18 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto t_17;
  w_17 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_18);
  goto y_49;
  x_18 :
  AllBuild();
  goto w_18;
  t_17 :
  Cpop();
  w_18 :
  Return();
  s_17 :
  Cpop();
  Crestore();
  Cjump();
  r_17 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  y_18 :
  AllNextSon(&&z_18);
  Cpush(b_19);
  Rpush(c_19);
  goto w_49;
  c_19 :
  goto a_19;
  b_19 :
  goto d_19;
  a_19 :
  Cpop();
  d_19 :
  goto y_18;
  z_18 :
  AllBuild();
  Return();
  p_17 :
  Epopd(7,3);
  goto n_17;
  o_17 :
  IsAppl();
  SomeInit();
  k_19 :
  SomeNextSon(&&l_19);
  Cpush(k_19);
  Rpush(m_19);
  goto w_49;
  m_19 :
  Cpop();
  CounterOK();
  goto k_19;
  l_19 :
  SomeBuild();
  goto e_19;
  n_17 :
  Cpop();
  e_19 :
  Return();
  m_17 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  h_17 :
  goto f_17;
  b_49 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in rule "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(n_19);
  d_49 :
  Cpush(t_19);
  Epushd(7,3);
  MoveTop(7,1);
  goto a_27;
  a_27 :
  TestFunFC(j_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(g_20);
  goto e_49;
  g_20 :
  goto w_19;
  e_49 :
  Tdupl();
  Epushd(8,1);
  Cpush(h_20);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_20);
  f_49 :
  Cpush(k_20);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(x_17);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto f_26;
  f_26 :
  TestFunFC(e_18,&&b_21,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(z_20);
  goto h_49;
  b_21 :
  TestFunFC(f_18,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(z_20);
  goto j_49;
  z_20 :
  goto y_20;
  j_49 :
  Move(9,1,10,2);
  Return();
  y_20 :
  goto l_20;
  h_49 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  l_20 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(e_21);
  k_49 :
  Epushd(10,9);
  MoveTop(10,1);
  goto m_26;
  m_26 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto n_26;
  n_26 :
  TestFunFC(w_0,&&j_21,Egetd(10,2));
  goto o_26;
  o_26 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto p_26;
  p_26 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto q_26;
  q_26 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(i_21);
  goto l_49;
  j_21 :
  TestFunFC(a_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto r_26;
  r_26 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto s_26;
  s_26 :
  TestFunFC(a_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto t_26;
  t_26 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(i_21);
  goto m_49;
  i_21 :
  goto h_21;
  m_49 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(l_21);
  goto k_49;
  l_21 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto j_26;
  j_26 :
  TestFunFC(p_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto k_26;
  k_26 :
  TestFunFC(p_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto l_26;
  l_26 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(m_21);
  goto n_49;
  m_21 :
  goto k_21;
  n_49 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  k_21 :
  Epopd(11,5);
  Return();
  h_21 :
  goto f_21;
  l_49 :
  Tset(App0("Nil"));
  Return();
  f_21 :
  Epopd(10,9);
  Return();
  e_21 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto j_20;
  k_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_21);
  goto f_49;
  z_21 :
  AllBuild();
  goto n_21;
  j_20 :
  Cpop();
  n_21 :
  Return();
  i_20 :
  Cpop();
  Crestore();
  Cjump();
  h_20 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  a_22 :
  AllNextSon(&&b_22);
  Cpush(d_22);
  Rpush(e_22);
  goto d_49;
  e_22 :
  goto c_22;
  d_22 :
  goto f_22;
  c_22 :
  Cpop();
  f_22 :
  goto a_22;
  b_22 :
  AllBuild();
  Return();
  w_19 :
  Epopd(7,3);
  goto q_19;
  t_19 :
  IsAppl();
  SomeInit();
  m_22 :
  SomeNextSon(&&o_22);
  Cpush(m_22);
  Rpush(p_22);
  goto d_49;
  p_22 :
  Cpop();
  CounterOK();
  goto m_22;
  o_22 :
  SomeBuild();
  goto l_22;
  q_19 :
  Cpop();
  l_22 :
  Return();
  n_19 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("RDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  f_17 :
  Epopd(4,4);
  OneNextSon();
  Rpush(q_22);
  goto a_49;
  q_22 :
  AllBuild();
  goto c_17;
  e_17 :
  Epushd(4,3);
  MoveTop(4,1);
  goto f_28;
  f_28 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(e_23);
  goto n_50;
  e_23 :
  goto s_22;
  n_50 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(f_23);
  goto a_49;
  f_23 :
  Return();
  s_22 :
  Epopd(4,3);
  goto r_22;
  c_17 :
  Cpop();
  r_22 :
  Return();
  b_17 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(j_23);
  o_50 :
  Cpush(l_23);
  Ccall(_stratego_t_95);
  goto k_23;
  l_23 :
  Ccontinue(m_23);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto m_30;
  m_30 :
  TestFunFC(k_17,&&t_23,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(r_23);
  goto p_50;
  t_23 :
  TestFunFC(l_17,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(r_23);
  goto i_51;
  r_23 :
  goto q_23;
  i_51 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in definition "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(u_23);
  k_51 :
  Cpush(w_23);
  Epushd(7,3);
  MoveTop(7,1);
  goto l_30;
  l_30 :
  TestFunFC(j_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(z_23);
  goto l_51;
  z_23 :
  goto y_23;
  l_51 :
  Tdupl();
  Epushd(8,1);
  Cpush(a_24);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(b_24);
  m_51 :
  Cpush(d_24);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(x_17);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto q_29;
  q_29 :
  TestFunFC(e_18,&&h_24,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(g_24);
  goto o_51;
  h_24 :
  TestFunFC(f_18,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(g_24);
  goto q_51;
  g_24 :
  goto f_24;
  q_51 :
  Move(9,1,10,2);
  Return();
  f_24 :
  goto e_24;
  o_51 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  e_24 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(i_24);
  r_51 :
  Epushd(10,9);
  MoveTop(10,1);
  goto x_29;
  x_29 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto y_29;
  y_29 :
  TestFunFC(w_0,&&m_24,Egetd(10,2));
  goto z_29;
  z_29 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto a_30;
  a_30 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto b_30;
  b_30 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(l_24);
  goto s_51;
  m_24 :
  TestFunFC(a_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto c_30;
  c_30 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto d_30;
  d_30 :
  TestFunFC(a_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto e_30;
  e_30 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(l_24);
  goto t_51;
  l_24 :
  goto k_24;
  t_51 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(o_24);
  goto r_51;
  o_24 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto u_29;
  u_29 :
  TestFunFC(p_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto v_29;
  v_29 :
  TestFunFC(p_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto w_29;
  w_29 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(p_24);
  goto u_51;
  p_24 :
  goto n_24;
  u_51 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  n_24 :
  Epopd(11,5);
  Return();
  k_24 :
  goto j_24;
  s_51 :
  Tset(App0("Nil"));
  Return();
  j_24 :
  Epopd(10,9);
  Return();
  i_24 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto c_24;
  d_24 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_24);
  goto m_51;
  r_24 :
  AllBuild();
  goto q_24;
  c_24 :
  Cpop();
  q_24 :
  Return();
  b_24 :
  Cpop();
  Crestore();
  Cjump();
  a_24 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  s_24 :
  AllNextSon(&&t_24);
  Cpush(g_25);
  Rpush(h_25);
  goto k_51;
  h_25 :
  goto u_24;
  g_25 :
  goto n_25;
  u_24 :
  Cpop();
  n_25 :
  goto s_24;
  t_24 :
  AllBuild();
  Return();
  y_23 :
  Epopd(7,3);
  goto v_23;
  w_23 :
  IsAppl();
  SomeInit();
  p_25 :
  SomeNextSon(&&t_25);
  Cpush(p_25);
  Rpush(u_25);
  goto k_51;
  u_25 :
  Cpop();
  CounterOK();
  goto p_25;
  t_25 :
  SomeBuild();
  goto o_25;
  v_23 :
  Cpop();
  o_25 :
  Return();
  u_23 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  q_23 :
  goto p_23;
  p_50 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in rule "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(v_25);
  r_50 :
  Cpush(x_25);
  Epushd(7,3);
  MoveTop(7,1);
  goto j_29;
  j_29 :
  TestFunFC(j_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(z_25);
  goto s_50;
  z_25 :
  goto y_25;
  s_50 :
  Tdupl();
  Epushd(8,1);
  Cpush(a_26);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(b_26);
  t_50 :
  Cpush(d_26);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  TestFunTop(x_17);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto o_28;
  o_28 :
  TestFunFC(e_18,&&i_26,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(h_26);
  goto v_50;
  i_26 :
  TestFunFC(f_18,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(h_26);
  goto x_50;
  h_26 :
  goto g_26;
  x_50 :
  Move(9,1,10,2);
  Return();
  g_26 :
  goto e_26;
  v_50 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  e_26 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(u_26);
  y_50 :
  Epushd(10,9);
  MoveTop(10,1);
  goto v_28;
  v_28 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto w_28;
  w_28 :
  TestFunFC(w_0,&&y_26,Egetd(10,2));
  goto x_28;
  x_28 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto y_28;
  y_28 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto z_28;
  z_28 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(x_26);
  goto z_50;
  y_26 :
  TestFunFC(a_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto a_29;
  a_29 :
  TestFunFC(p_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto b_29;
  b_29 :
  TestFunFC(a_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto c_29;
  c_29 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(x_26);
  goto a_51;
  x_26 :
  goto w_26;
  a_51 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_27);
  goto y_50;
  b_27 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto s_28;
  s_28 :
  TestFunFC(p_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto t_28;
  t_28 :
  TestFunFC(p_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto u_28;
  u_28 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(c_27);
  goto b_51;
  c_27 :
  goto z_26;
  b_51 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  z_26 :
  Epopd(11,5);
  Return();
  w_26 :
  goto v_26;
  z_50 :
  Tset(App0("Nil"));
  Return();
  v_26 :
  Epopd(10,9);
  Return();
  u_26 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto c_26;
  d_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_27);
  goto t_50;
  e_27 :
  AllBuild();
  goto d_27;
  c_26 :
  Cpop();
  d_27 :
  Return();
  b_26 :
  Cpop();
  Crestore();
  Cjump();
  a_26 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,1);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,1);
  MoveTop(9,1);
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,1);
  Tpop();
  Epopd(8,1);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  f_27 :
  AllNextSon(&&g_27);
  Cpush(j_27);
  Rpush(k_27);
  goto r_50;
  k_27 :
  goto i_27;
  j_27 :
  goto w_27;
  i_27 :
  Cpop();
  w_27 :
  goto f_27;
  g_27 :
  AllBuild();
  Return();
  y_25 :
  Epopd(7,3);
  goto w_25;
  x_25 :
  IsAppl();
  SomeInit();
  y_27 :
  SomeNextSon(&&z_27);
  Cpush(y_27);
  Rpush(a_28);
  goto r_50;
  a_28 :
  Cpop();
  CounterOK();
  goto y_27;
  z_27 :
  SomeBuild();
  goto x_27;
  w_25 :
  Cpop();
  x_27 :
  Return();
  v_25 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("RDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  p_23 :
  Epopd(4,4);
  OneNextSon();
  Rpush(b_28);
  goto o_50;
  b_28 :
  AllBuild();
  goto k_23;
  m_23 :
  Epushd(4,3);
  MoveTop(4,1);
  goto o_30;
  o_30 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(h_28);
  goto b_52;
  h_28 :
  goto g_28;
  b_52 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(i_28);
  goto o_50;
  i_28 :
  Return();
  g_28 :
  Epopd(4,3);
  goto e_28;
  k_23 :
  Cpop();
  e_28 :
  Return();
  j_23 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto q_30;
  q_30 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_30;
  r_30 :
  TestFunFC(w_0,&&fail,Egetd(3,2));
  goto s_30;
  s_30 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto t_30;
  t_30 :
  TestFunFC(w_0,&&fail,Egetd(3,4));
  goto u_30;
  u_30 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(j_28);
  goto c_52;
  j_28 :
  goto a_17;
  c_52 :
  Return();
  a_17 :
  Epopd(3,5);
  Tpop();
  NotNULLd(2,6);
  NotNULLd(2,10);
  NotNULLd(2,13);
  Tset(App1("Specification",App2("Cons",App1("Signature",App2("Cons",App1("Operations",Egetd(2,6)),App0("Nil"))),App2("Cons",App1("Rules",Egetd(2,10)),App2("Cons",App1("Strategies",Egetd(2,13)),App0("Nil"))))));
  Return();
  r_16 :
  Epopd(2,14);
  goto p_16;
  q_16 :
  goto k_28;
  p_16 :
  Cpop();
  k_28 :
  Epopd(1,9);
  Return();
  n_9 :
  Epopd(0,14);
ENDPROC

PROC(_stratego_k_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto p_57;
  p_57 :
  TestFunFC(p_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_28);
  goto g_64;
  m_28 :
  goto l_28;
  g_64 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_28);
  h_64 :
  Cpush(q_28);
  Ccall(_stratego_t_95);
  goto p_28;
  q_28 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_96);
  OneNextSon();
  Rpush(d_29);
  goto h_64;
  d_29 :
  AllBuild();
  goto r_28;
  p_28 :
  Cpop();
  r_28 :
  Return();
  n_28 :
  Rpush(f_29);
  i_64 :
  Cpush(h_29);
  Ccall(_stratego_t_95);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  goto g_29;
  h_29 :
  Epushd(2,3);
  MoveTop(2,1);
  goto i_57;
  i_57 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_29);
  goto m_64;
  l_29 :
  goto k_29;
  m_64 :
  Epushd(3,21);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(n_29);
  goto i_64;
  n_29 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto a_53;
  a_53 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,11,3,1,1);
  goto b_53;
  b_53 :
  TestFunFC(p_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto c_53;
  c_53 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto d_53;
  d_53 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto y_53;
  y_53 :
  TestFunFC(p_0,&&fail,Egetd(3,8));
  MoveArg(3,9,3,8,0);
  MoveArg(3,10,3,8,1);
  goto f_54;
  f_54 :
  TestFunFC(s_0,&&fail,Egetd(3,10));
  goto n_55;
  n_55 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,21,3,11,1);
  goto x_56;
  x_56 :
  TestFunFC(p_0,&&fail,Egetd(3,12));
  MoveArg(3,13,3,12,0);
  MoveArg(3,14,3,12,1);
  goto d_57;
  d_57 :
  TestFunFC(p_0,&&fail,Egetd(3,14));
  MoveArg(3,15,3,14,0);
  MoveArg(3,16,3,14,1);
  goto e_57;
  e_57 :
  TestFunFC(p_0,&&fail,Egetd(3,16));
  MoveArg(3,17,3,16,0);
  MoveArg(3,18,3,16,1);
  goto f_57;
  f_57 :
  TestFunFC(p_0,&&fail,Egetd(3,18));
  MoveArg(3,19,3,18,0);
  MoveArg(3,20,3,18,1);
  goto g_57;
  g_57 :
  TestFunFC(s_0,&&fail,Egetd(3,20));
  goto h_57;
  h_57 :
  TestFunFC(s_0,&&fail,Egetd(3,21));
  Rpush(o_29);
  goto n_64;
  o_29 :
  goto m_29;
  n_64 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,13);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,13),App0("TNil"))));
  MoveTop(4,1);
  goto x_52;
  x_52 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto y_52;
  y_52 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_52;
  z_52 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(r_29);
  goto o_64;
  r_29 :
  goto p_29;
  o_64 :
  Epushd(5,6);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(s_29);
  p_64 :
  Cpush(f_30);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_30);
  goto p_64;
  g_30 :
  AllBuild();
  goto t_29;
  f_30 :
  Ccall(_stratego_t_95);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto h_30;
  t_29 :
  Cpop();
  h_30 :
  Return();
  s_29 :
  MoveTop(5,1);
  NotNULLd(3,5);
  NotNULLd(3,15);
  Tset(App2("TCons",Egetd(3,5),App2("TCons",Egetd(3,15),App0("TNil"))));
  MoveTop(5,2);
  goto u_52;
  u_52 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto v_52;
  v_52 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto w_52;
  w_52 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(j_30);
  goto r_64;
  j_30 :
  goto i_30;
  r_64 :
  Epushd(6,6);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(k_30);
  u_64 :
  Cpush(p_30);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_32);
  goto u_64;
  e_32 :
  AllBuild();
  goto n_30;
  p_30 :
  Ccall(_stratego_t_95);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto f_32;
  n_30 :
  Cpop();
  f_32 :
  Return();
  k_30 :
  MoveTop(6,1);
  NotNULLd(3,7);
  NotNULLd(3,17);
  Tset(App2("TCons",Egetd(3,7),App2("TCons",Egetd(3,17),App0("TNil"))));
  MoveTop(6,2);
  goto r_52;
  r_52 :
  TestFunFC(p_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto s_52;
  s_52 :
  TestFunFC(p_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto t_52;
  t_52 :
  TestFunFC(s_0,&&fail,Egetd(6,6));
  Rpush(h_32);
  goto w_64;
  h_32 :
  goto g_32;
  w_64 :
  Epushd(7,6);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(i_32);
  x_64 :
  Cpush(p_32);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_33);
  goto x_64;
  e_33 :
  AllBuild();
  goto o_32;
  p_32 :
  Ccall(_stratego_t_95);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto i_33;
  o_32 :
  Cpop();
  i_33 :
  Return();
  i_32 :
  MoveTop(7,1);
  NotNULLd(3,9);
  NotNULLd(3,19);
  Tset(App2("TCons",Egetd(3,9),App2("TCons",Egetd(3,19),App0("TNil"))));
  MoveTop(7,2);
  goto o_52;
  o_52 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto p_52;
  p_52 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto q_52;
  q_52 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(k_33);
  goto z_64;
  k_33 :
  goto j_33;
  z_64 :
  Epushd(8,1);
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(l_33);
  l_65 :
  Cpush(s_33);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_33);
  goto l_65;
  u_33 :
  AllBuild();
  goto r_33;
  s_33 :
  Ccall(_stratego_t_95);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  goto f_34;
  r_33 :
  Cpop();
  f_34 :
  Return();
  l_33 :
  MoveTop(8,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App2("TCons",Egetd(8,1),App0("TNil"))))));
  Epopd(8,1);
  Return();
  j_33 :
  Epopd(7,6);
  Return();
  g_32 :
  Epopd(6,6);
  Return();
  i_30 :
  Epopd(5,6);
  Return();
  p_29 :
  Epopd(4,5);
  Return();
  m_29 :
  Epopd(3,21);
  Return();
  k_29 :
  Epopd(2,3);
  goto i_29;
  g_29 :
  Cpop();
  i_29 :
  Return();
  f_29 :
  MoveTop(1,1);
  goto k_57;
  k_57 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_57;
  l_57 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_57;
  m_57 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto n_57;
  n_57 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto o_57;
  o_57 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(g_34);
  goto n_65;
  g_34 :
  goto e_29;
  n_65 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App1("Specification",App2("Cons",App1("Signature",App2("Cons",App1("Operations",Egetd(1,2)),App0("Nil"))),App2("Cons",App1("Overlays",Egetd(1,4)),App2("Cons",App1("Rules",Egetd(1,6)),App2("Cons",App1("Strategies",Egetd(1,8)),App0("Nil")))))));
  TestFunTop(p_9);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_96);
  AllBuild();
  Ccall(_stratego_v_96);
  Return();
  e_29 :
  Epopd(1,9);
  Return();
  l_28 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto v_65;
  v_65 :
  TestFunFC(q_9,&&i_35,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_35);
  goto u_66;
  i_35 :
  TestFunFC(u_9,&&j_35,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_35);
  goto x_66;
  j_35 :
  TestFunFC(t_9,&&l_35,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_35);
  goto y_66;
  l_35 :
  TestFunFC(s_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_35);
  goto a_67;
  c_35 :
  goto b_35;
  a_67 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  Return();
  b_35 :
  goto a_35;
  y_66 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App0("TNil"))))));
  Return();
  a_35 :
  goto z_34;
  x_66 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App0("TNil"))))));
  Return();
  z_34 :
  goto h_34;
  u_66 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_m_96);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  Epopd(1,1);
  Return();
  h_34 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_m_96)
  Rpush(s_35);
  b_67 :
  Cpush(y_35);
  Ccall(_stratego_t_95);
  goto x_35;
  y_35 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_96);
  OneNextSon();
  Rpush(b_36);
  goto b_67;
  b_36 :
  AllBuild();
  goto z_35;
  x_35 :
  Cpop();
  z_35 :
  Return();
  s_35 :
  Ccall(_stratego_o_96);
ENDPROC

PROC(_stratego_n_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto e_67;
  e_67 :
  TestFunFC(z_16,&&b_37,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_36);
  goto p_67;
  b_37 :
  TestFunFC(c_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_36);
  goto q_67;
  j_36 :
  goto i_36;
  q_67 :
  Tset(App0("Nil"));
  Return();
  i_36 :
  goto d_36;
  p_67 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  d_36 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_96)
  Rpush(d_37);
  m_68 :
  Cpush(k_37);
  Ccall(_stratego_t_95);
  goto e_37;
  k_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto d_68;
  d_68 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_37);
  goto n_68;
  u_37 :
  goto n_37;
  n_68 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(a_38);
  o_68 :
  Cpush(d_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_38);
  goto o_68;
  g_38 :
  AllBuild();
  goto b_38;
  d_38 :
  Ccall(_stratego_t_95);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_38);
  goto m_68;
  u_38 :
  goto t_38;
  b_38 :
  Cpop();
  t_38 :
  Return();
  a_38 :
  Return();
  n_37 :
  Epopd(0,3);
  goto l_37;
  e_37 :
  Cpop();
  l_37 :
  Return();
  d_37 :
ENDPROC

PROC(_stratego_p_96)
  Epushd(0,2);
  MoveTop(0,1);
  Ccall(_stratego_q_96);
  Rpush(v_38);
  d_70 :
  Cpush(b_39);
  Ccall(_stratego_t_95);
  goto a_39;
  b_39 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Op",Egetd(1,1),App0("Nil")));
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Op",Egetd(1,1),App0("Nil")),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Rpush(i_39);
  goto d_70;
  i_39 :
  AllBuild();
  goto c_39;
  a_39 :
  Cpop();
  c_39 :
  Return();
  v_38 :
  MoveTop(0,2);
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_s_96);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_96)
  Rpush(j_39);
  r_70 :
  Cpush(z_39);
  Ccall(_stratego_t_95);
  goto p_39;
  z_39 :
  Ccontinue(a_40);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_96);
  OneNextSon();
  Rpush(b_40);
  goto r_70;
  b_40 :
  AllBuild();
  goto p_39;
  a_40 :
  Epushd(0,3);
  MoveTop(0,1);
  goto l_70;
  l_70 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_40);
  goto s_70;
  j_40 :
  goto i_40;
  s_70 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_40);
  goto r_70;
  l_40 :
  Return();
  i_40 :
  Epopd(0,3);
  goto c_40;
  p_39 :
  Cpop();
  c_40 :
  Return();
  j_39 :
  Ccall(_stratego_o_96);
ENDPROC

PROC(_stratego_r_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto j_71;
  j_71 :
  TestFunFC(q_9,&&q_40,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_40);
  goto s_72;
  q_40 :
  TestFunFC(s_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_40);
  goto z_72;
  p_40 :
  goto o_40;
  z_72 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(r_40);
  a_73 :
  Cpush(t_40);
  Ccall(_stratego_t_95);
  goto s_40;
  t_40 :
  Ccontinue(u_40);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,4);
  MoveTop(1,1);
  goto f_71;
  f_71 :
  TestFunFC(p_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto g_71;
  g_71 :
  TestFunFC(w_0,&&fail,Egetd(1,3));
  Rpush(w_40);
  goto b_73;
  w_40 :
  goto v_40;
  b_73 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  v_40 :
  Epopd(1,4);
  OneNextSon();
  Rpush(x_40);
  goto a_73;
  x_40 :
  AllBuild();
  goto s_40;
  u_40 :
  Epushd(1,3);
  MoveTop(1,1);
  goto i_71;
  i_71 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_41);
  goto c_73;
  f_41 :
  goto z_40;
  c_73 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_41);
  goto a_73;
  g_41 :
  Return();
  z_40 :
  Epopd(1,3);
  goto y_40;
  s_40 :
  Cpop();
  y_40 :
  Return();
  r_40 :
  Return();
  o_40 :
  goto m_40;
  s_72 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_41);
  t_72 :
  Cpush(x_41);
  Ccall(_stratego_t_95);
  goto w_41;
  x_41 :
  Ccontinue(y_41);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto b_71;
  b_71 :
  TestFunFC(z_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(f_42);
  goto u_72;
  f_42 :
  goto z_41;
  u_72 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(g_42);
  v_72 :
  Cpush(k_42);
  Ccall(_stratego_t_95);
  goto i_42;
  k_42 :
  Ccontinue(l_42);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto x_70;
  x_70 :
  TestFunFC(x_17,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_70;
  y_70 :
  TestFunFC(e_18,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  Rpush(n_42);
  goto w_72;
  n_42 :
  goto m_42;
  w_72 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  m_42 :
  Epopd(2,4);
  OneNextSon();
  Rpush(o_42);
  goto v_72;
  o_42 :
  AllBuild();
  goto i_42;
  l_42 :
  Epushd(2,3);
  MoveTop(2,1);
  goto a_71;
  a_71 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_42);
  goto x_72;
  r_42 :
  goto q_42;
  x_72 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_42);
  goto v_72;
  s_42 :
  Return();
  q_42 :
  Epopd(2,3);
  goto p_42;
  i_42 :
  Cpop();
  p_42 :
  Return();
  g_42 :
  Return();
  z_41 :
  Epopd(1,2);
  OneNextSon();
  Rpush(w_42);
  goto t_72;
  w_42 :
  AllBuild();
  goto w_41;
  y_41 :
  Epushd(1,3);
  MoveTop(1,1);
  goto d_71;
  d_71 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_43);
  goto y_72;
  d_43 :
  goto c_43;
  y_72 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_43);
  goto t_72;
  e_43 :
  Return();
  c_43 :
  Epopd(1,3);
  goto x_42;
  w_41 :
  Cpop();
  x_42 :
  Return();
  m_41 :
  Ccall(_stratego_o_96);
  Return();
  m_40 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_96)
  Epushd(0,5);
  Ccall(_stratego_t_96);
  MoveTop(0,1);
  goto j_73;
  j_73 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_73;
  k_73 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_73;
  l_73 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(l_43);
  goto c_74;
  l_43 :
  goto i_43;
  c_74 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(m_43);
  d_74 :
  Cpush(c_44);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto i_73;
  i_73 :
  TestFunFC(f_44,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(e_44);
  goto f_74;
  e_44 :
  goto d_44;
  f_74 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  d_44 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_u_96);
  Epopd(1,3);
  goto s_43;
  c_44 :
  AllInit();
  m_44 :
  AllNextSon(&&n_44);
  Rpush(p_44);
  goto d_74;
  p_44 :
  goto m_44;
  n_44 :
  AllBuild();
  goto g_44;
  s_43 :
  Cpop();
  g_44 :
  Return();
  m_43 :
  Return();
  i_43 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_96)
  Epushd(0,7);
  MoveTop(0,1);
  goto z_74;
  z_74 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_75;
  a_75 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_75;
  b_75 :
  TestFunFC(s_0,&&u_44,Egetd(0,5));
  Rpush(t_44);
  goto o_76;
  u_44 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_75;
  c_75 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(t_44);
  goto p_76;
  t_44 :
  goto s_44;
  p_76 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(v_44);
  q_76 :
  Epushd(2,9);
  MoveTop(2,1);
  goto q_74;
  q_74 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto r_74;
  r_74 :
  TestFunFC(w_0,&&z_44,Egetd(2,2));
  goto s_74;
  s_74 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto t_74;
  t_74 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto u_74;
  u_74 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(y_44);
  goto r_76;
  z_44 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_74;
  v_74 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto w_74;
  w_74 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto x_74;
  x_74 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(y_44);
  goto s_76;
  y_44 :
  goto x_44;
  s_76 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_45);
  goto q_76;
  b_45 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto n_74;
  n_74 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_74;
  o_74 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_74;
  p_74 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(c_45);
  goto t_76;
  c_45 :
  goto a_45;
  t_76 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  a_45 :
  Epopd(3,5);
  Return();
  x_44 :
  goto w_44;
  r_76 :
  Tset(App0("Nil"));
  Return();
  w_44 :
  Epopd(2,9);
  Return();
  v_44 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  s_44 :
  goto r_44;
  o_76 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  r_44 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_u_96)
  Rpush(i_45);
  t_77 :
  Epushd(0,11);
  MoveTop(0,5);
  goto x_76;
  x_76 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_76;
  y_76 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto z_76;
  z_76 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto a_77;
  a_77 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto b_77;
  b_77 :
  TestFunFC(p_0,&&a_46,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto c_77;
  c_77 :
  TestFunFC(p_0,&&b_46,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_77;
  d_77 :
  TestFunFC(s_0,&&c_46,Egetd(0,4));
  Cpush(j_46);
  Rpush(l_46);
  goto u_77;
  l_46 :
  goto i_46;
  j_46 :
  Rpush(o_46);
  goto v_77;
  o_46 :
  goto n_46;
  i_46 :
  Cpop();
  n_46 :
  goto z_45;
  c_46 :
  Rpush(z_45);
  goto v_77;
  b_46 :
  Rpush(z_45);
  goto v_77;
  a_46 :
  Rpush(z_45);
  goto v_77;
  z_45 :
  goto p_45;
  v_77 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(p_46);
  goto t_77;
  p_46 :
  Return();
  p_45 :
  goto j_45;
  u_77 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  j_45 :
  Epopd(0,11);
  Return();
  i_45 :
ENDPROC

PROC(_stratego_v_96)
  Rpush(q_46);
  h_80 :
  Cpush(s_46);
  Epushd(0,5);
  MoveTop(0,1);
  goto y_77;
  y_77 :
  TestFunFC(v_46,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto z_77;
  z_77 :
  TestFunFC(z_46,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(u_46);
  goto i_80;
  u_46 :
  goto t_46;
  i_80 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_w_96);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App1("SRule",App3("Rule",Egetd(0,3),Egetd(0,4),Egetd(0,5)))));
  Epopd(1,1);
  Return();
  t_46 :
  Epopd(0,5);
  goto r_46;
  s_46 :
  goto a_47;
  r_46 :
  Cpop();
  a_47 :
  AllInit();
  r_47 :
  AllNextSon(&&t_47);
  Rpush(d_48);
  goto h_80;
  d_48 :
  goto r_47;
  t_47 :
  AllBuild();
  Return();
  q_46 :
ENDPROC

PROC(_stratego_w_96)
  Rpush(f_48);
  v_84 :
  Cpush(j_48);
  Epushd(0,2);
  MoveTop(0,1);
  goto l_80;
  l_80 :
  TestFunFC(f_44,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_48);
  goto w_84;
  v_48 :
  goto t_48;
  w_84 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  t_48 :
  Epopd(0,2);
  goto i_48;
  j_48 :
  Ccontinue(y_48);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_z_96);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(c_49);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(g_49);
  goto v_84;
  g_49 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_x_96);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto s_80;
  s_80 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_80;
  t_80 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_80;
  u_80 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(o_49);
  goto c_85;
  o_49 :
  goto i_49;
  c_85 :
  Move(0,3,1,4);
  Return();
  i_49 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_49);
  d_85 :
  Cpush(r_49);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto q_49;
  r_49 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_81;
  g_81 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_49);
  goto e_85;
  v_49 :
  goto t_49;
  e_85 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_49);
  goto d_85;
  z_49 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto d_81;
  d_81 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_81;
  e_81 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_81;
  f_81 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(h_50);
  goto h_85;
  h_50 :
  goto b_50;
  h_85 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_50);
  i_85 :
  Cpush(k_50);
  Ccall(_stratego_t_95);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_50;
  k_50 :
  Ccontinue(l_50);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_81;
  c_81 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_50);
  goto j_85;
  q_50 :
  goto m_50;
  j_85 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(u_50);
  k_85 :
  Cpush(c_51);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_81;
  b_81 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(e_51);
  goto l_85;
  e_51 :
  goto d_51;
  l_85 :
  Move(3,2,4,2);
  Return();
  d_51 :
  Epopd(4,3);
  goto w_50;
  c_51 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_51);
  goto k_85;
  g_51 :
  AllBuild();
  goto f_51;
  w_50 :
  Cpop();
  f_51 :
  Return();
  u_50 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(h_51);
  goto i_85;
  h_51 :
  Return();
  m_50 :
  Epopd(3,3);
  goto j_50;
  l_50 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_51);
  goto i_85;
  n_51 :
  AllBuild();
  goto j_51;
  j_50 :
  Cpop();
  j_51 :
  Return();
  i_50 :
  Return();
  b_50 :
  Epopd(2,6);
  Return();
  t_49 :
  Epopd(1,3);
  goto s_49;
  q_49 :
  Cpop();
  s_49 :
  Return();
  p_49 :
  Epopd(0,3);
  goto i_48;
  y_48 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto j_81;
  j_81 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_81;
  k_81 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_81;
  l_81 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(w_51);
  goto n_85;
  w_51 :
  goto v_51;
  n_85 :
  Move(0,2,1,4);
  Return();
  v_51 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_51);
  o_85 :
  Cpush(z_51);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto y_51;
  z_51 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_81;
  x_81 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_52);
  goto p_85;
  e_52 :
  goto d_52;
  p_85 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_52);
  goto v_84;
  f_52 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_52);
  goto o_85;
  g_52 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto u_81;
  u_81 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_81;
  v_81 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_81;
  w_81 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(i_52);
  goto s_85;
  i_52 :
  goto h_52;
  s_85 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_52);
  t_85 :
  Cpush(l_52);
  Ccall(_stratego_t_95);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto k_52;
  l_52 :
  Ccontinue(m_52);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_81;
  t_81 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_53);
  goto u_85;
  e_53 :
  goto n_52;
  u_85 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(f_53);
  v_85 :
  Cpush(h_53);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_81;
  s_81 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_53);
  goto w_85;
  j_53 :
  goto i_53;
  w_85 :
  Move(3,2,4,2);
  Return();
  i_53 :
  Epopd(4,3);
  goto g_53;
  h_53 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_53);
  goto v_85;
  l_53 :
  AllBuild();
  goto k_53;
  g_53 :
  Cpop();
  k_53 :
  Return();
  f_53 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_53);
  goto t_85;
  m_53 :
  Return();
  n_52 :
  Epopd(3,3);
  goto k_52;
  m_52 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_53);
  goto t_85;
  o_53 :
  AllBuild();
  goto n_53;
  k_52 :
  Cpop();
  n_53 :
  Return();
  j_52 :
  Return();
  h_52 :
  Epopd(2,7);
  Return();
  d_52 :
  Epopd(1,3);
  goto a_52;
  y_51 :
  Cpop();
  a_52 :
  Return();
  x_51 :
  Epopd(0,2);
  goto p_51;
  i_48 :
  Cpop();
  p_51 :
  Return();
  f_48 :
ENDPROC

PROC(_stratego_x_96)
  Epushd(0,5);
  MoveTop(0,5);
  goto n_86;
  n_86 :
  TestFunFC(p_0,&&s_53,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto o_86;
  o_86 :
  TestFunFC(p_0,&&t_53,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_86;
  p_86 :
  TestFunFC(s_0,&&u_53,Egetd(0,4));
  Cpush(w_53);
  Rpush(x_53);
  goto z_89;
  x_53 :
  goto v_53;
  w_53 :
  Rpush(a_54);
  goto j_90;
  a_54 :
  goto z_53;
  v_53 :
  Cpop();
  z_53 :
  goto r_53;
  u_53 :
  Rpush(r_53);
  goto j_90;
  t_53 :
  Rpush(r_53);
  goto j_90;
  s_53 :
  Rpush(r_53);
  goto j_90;
  r_53 :
  goto q_53;
  j_90 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(b_54);
  k_90 :
  Cpush(d_54);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(g_54);
  Epushd(1,7);
  MoveTop(1,1);
  goto e_86;
  e_86 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto f_86;
  f_86 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_86;
  g_86 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_86;
  h_86 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(i_54);
  goto l_90;
  i_54 :
  goto h_54;
  l_90 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  h_54 :
  Epopd(1,7);
  goto e_54;
  g_54 :
  Ccall(_stratego_y_96);
  goto j_54;
  e_54 :
  Cpop();
  j_54 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto c_54;
  d_54 :
  Epushd(1,7);
  MoveTop(1,1);
  goto j_86;
  j_86 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_86;
  k_86 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto l_86;
  l_86 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto m_86;
  m_86 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(m_54);
  goto m_90;
  m_54 :
  goto l_54;
  m_90 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  l_54 :
  Epopd(1,7);
  goto k_54;
  c_54 :
  Cpop();
  k_54 :
  Cpush(o_54);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto n_54;
  o_54 :
  Rpush(q_54);
  goto k_90;
  q_54 :
  goto p_54;
  n_54 :
  Cpop();
  p_54 :
  Return();
  b_54 :
  Return();
  q_53 :
  goto p_53;
  z_89 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(r_54);
  a_90 :
  Cpush(t_54);
  Ccall(_stratego_t_95);
  goto s_54;
  t_54 :
  Ccontinue(u_54);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_86;
  c_86 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_54);
  goto b_90;
  w_54 :
  goto v_54;
  b_90 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_54);
  c_90 :
  Cpush(z_54);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_86;
  b_86 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_55);
  goto i_90;
  b_55 :
  goto a_55;
  i_90 :
  Move(1,2,2,2);
  Return();
  a_55 :
  Epopd(2,3);
  goto y_54;
  z_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_55);
  goto c_90;
  d_55 :
  AllBuild();
  goto c_55;
  y_54 :
  Cpop();
  c_55 :
  Return();
  x_54 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_55);
  goto a_90;
  e_55 :
  Return();
  v_54 :
  Epopd(1,3);
  goto s_54;
  u_54 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_55);
  goto a_90;
  g_55 :
  AllBuild();
  goto f_55;
  s_54 :
  Cpop();
  f_55 :
  Return();
  r_54 :
  Return();
  p_53 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_y_96)
  Epushd(0,7);
  MoveTop(0,1);
  goto c_92;
  c_92 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto d_92;
  d_92 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_92;
  e_92 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_92;
  f_92 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(i_55);
  goto w_98;
  i_55 :
  goto h_55;
  w_98 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_90;
  q_90 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_90;
  r_90 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_90;
  s_90 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(k_55);
  goto x_98;
  k_55 :
  goto j_55;
  x_98 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  j_55 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto c_91;
  c_91 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_91;
  e_91 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_91;
  f_91 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(m_55);
  goto y_98;
  m_55 :
  goto l_55;
  y_98 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  l_55 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(o_55);
  z_98 :
  Epushd(2,9);
  MoveTop(2,1);
  goto p_91;
  p_91 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto q_91;
  q_91 :
  TestFunFC(w_0,&&s_55,Egetd(2,2));
  goto r_91;
  r_91 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto s_91;
  s_91 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto t_91;
  t_91 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(r_55);
  goto a_99;
  s_55 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_91;
  u_91 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto v_91;
  v_91 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto w_91;
  w_91 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(r_55);
  goto b_99;
  r_55 :
  goto q_55;
  b_99 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_55);
  goto z_98;
  u_55 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto m_91;
  m_91 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_91;
  n_91 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_91;
  o_91 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(v_55);
  goto c_99;
  v_55 :
  goto t_55;
  c_99 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_55 :
  Epopd(3,5);
  Return();
  q_55 :
  goto p_55;
  a_99 :
  Tset(App0("Nil"));
  Return();
  p_55 :
  Epopd(2,9);
  Return();
  o_55 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto z_91;
  z_91 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto a_92;
  a_92 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto b_92;
  b_92 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(x_55);
  goto e_99;
  x_55 :
  goto w_55;
  e_99 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(y_55);
  f_99 :
  Cpush(a_56);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_56);
  goto f_99;
  b_56 :
  AllBuild();
  goto z_55;
  a_56 :
  Ccall(_stratego_t_95);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto c_56;
  z_55 :
  Cpop();
  c_56 :
  Return();
  y_55 :
  Return();
  w_55 :
  Epopd(1,9);
  Return();
  h_55 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_z_96)
  Epushd(0,6);
  MoveTop(0,2);
  goto i_99;
  i_99 :
  TestFunFC(c_49,&&g_56,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(f_56);
  goto v_99;
  g_56 :
  TestFunFC(v_46,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_99;
  j_99 :
  TestFunFC(z_46,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(f_56);
  goto w_99;
  f_56 :
  goto e_56;
  w_99 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_w_96);
  Return();
  e_56 :
  goto d_56;
  v_99 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  d_56 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_a_97)
  TestFunTop(p_9);
  TravInit();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto y_99;
  y_99 :
  TestFunFC(q_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_56);
  goto b_100;
  i_56 :
  goto h_56;
  b_100 :
  Return();
  h_56 :
  Epopd(0,2);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(s_9);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_97);
  AllBuild();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(t_9);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_97);
  AllBuild();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(u_9);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_97);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_b_97)
  Epushd(0,1);
  Rpush(k_56);
  m_100 :
  Cpush(m_56);
  Ccall(_stratego_t_95);
  goto l_56;
  m_56 :
  Ccontinue(n_56);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_97);
  OneNextSon();
  Rpush(o_56);
  goto m_100;
  o_56 :
  AllBuild();
  goto l_56;
  n_56 :
  Epushd(1,3);
  MoveTop(1,1);
  goto d_100;
  d_100 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_56);
  goto n_100;
  r_56 :
  goto q_56;
  n_100 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_56);
  goto m_100;
  s_56 :
  Return();
  q_56 :
  Epopd(1,3);
  goto p_56;
  l_56 :
  Cpop();
  p_56 :
  Return();
  k_56 :
  MoveTop(0,1);
  goto f_100;
  f_100 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(t_56);
  goto o_100;
  t_56 :
  goto j_56;
  o_100 :
  Return();
  j_56 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_97)
  Cpush(v_56);
  TestFunTop(l_17);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_97);
  Cpush(w_56);
  Tdupl();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  w_56 :
  AllBuild();
  Ccall(_stratego_k_97);
  goto u_56;
  v_56 :
  Ccontinue(y_56);
  TestFunTop(k_17);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_97);
  Cpush(z_56);
  Tdupl();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  z_56 :
  AllBuild();
  Ccall(_stratego_k_97);
  goto u_56;
  y_56 :
  Epushd(0,4);
  MoveTop(0,1);
  goto q_100;
  q_100 :
  TestFunFC(p_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(c_57);
  goto v_100;
  c_57 :
  goto b_57;
  v_100 :
  Ccall(_stratego_d_97);
  Cpush(j_57);
  Tdupl();
  TestFunTop(p_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  j_57 :
  Ccall(_stratego_k_97);
  Return();
  b_57 :
  Epopd(0,4);
  goto a_57;
  u_56 :
  Cpop();
  a_57 :
ENDPROC

PROC(_stratego_d_97)
  Rpush(s_57);
  w_100 :
  Cpush(x_57);
  Cpush(g_58);
  TestFunTop(h_58);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_97);
  AllBuild();
  goto f_58;
  g_58 :
  Ccontinue(i_58);
  TestFunTop(j_58);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_97);
  AllBuild();
  goto f_58;
  i_58 :
  Ccontinue(k_58);
  TestFunTop(l_58);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_97);
  OneNextSon();
  Rpush(n_58);
  goto w_100;
  n_58 :
  AllBuild();
  goto f_58;
  k_58 :
  Ccontinue(o_58);
  TestFunTop(p_58);
  TravInit();
  OneNextSon();
  Rpush(r_58);
  goto w_100;
  r_58 :
  OneNextSon();
  Ccall(_stratego_e_97);
  AllBuild();
  goto f_58;
  o_58 :
  Ccontinue(s_58);
  TestFunTop(t_58);
  TravInit();
  OneNextSon();
  Rpush(u_58);
  goto w_100;
  u_58 :
  OneNextSon();
  Ccall(_stratego_f_97);
  AllBuild();
  goto f_58;
  s_58 :
  Ccontinue(v_58);
  TestFunTop(w_58);
  TravInit();
  OneNextSon();
  Rpush(x_58);
  goto w_100;
  x_58 :
  OneNextSon();
  Ccall(_stratego_f_97);
  OneNextSon();
  Ccall(_stratego_e_97);
  AllBuild();
  goto f_58;
  v_58 :
  Ccontinue(y_58);
  TestFunTop(c_49);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_58);
  goto w_100;
  z_58 :
  AllBuild();
  goto f_58;
  y_58 :
  Ccontinue(a_59);
  TestFunTop(z_46);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_97);
  OneNextSon();
  Ccall(_stratego_f_97);
  OneNextSon();
  Rpush(b_59);
  goto w_100;
  b_59 :
  AllBuild();
  goto f_58;
  a_59 :
  Ccontinue(c_59);
  TestFunTop(p_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_97);
  AllBuild();
  goto f_58;
  c_59 :
  TestFunTop(e_59);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_59);
  x_100 :
  Cpush(h_59);
  Ccall(_stratego_t_95);
  goto g_59;
  h_59 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(j_59);
  goto w_100;
  j_59 :
  OneNextSon();
  Rpush(k_59);
  goto x_100;
  k_59 :
  AllBuild();
  goto i_59;
  g_59 :
  Cpop();
  i_59 :
  Return();
  f_59 :
  AllBuild();
  goto d_59;
  f_58 :
  Cpop();
  d_59 :
  goto w_57;
  x_57 :
  AllInit();
  m_59 :
  AllNextSon(&&n_59);
  Rpush(a_60);
  goto w_100;
  a_60 :
  goto m_59;
  n_59 :
  AllBuild();
  goto l_59;
  w_57 :
  Cpop();
  l_59 :
  Cpush(c_60);
  Ccall(_stratego_g_97);
  goto b_60;
  c_60 :
  Ccall(_stratego_i_97);
  goto d_60;
  b_60 :
  Cpop();
  d_60 :
  Return();
  s_57 :
ENDPROC

PROC(_stratego_e_97)
  Epushd(0,2);
  MoveTop(0,1);
  Ccall(_stratego_w_96);
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_97)
  Epushd(0,2);
  MoveTop(0,1);
  Ccall(_stratego_w_96);
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_97)
  Epushd(0,4);
  MoveTop(0,1);
  goto t_102;
  t_102 :
  TestFunFC(r_60,&&q_60,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_60);
  goto j_105;
  q_60 :
  TestFunFC(t_60,&&s_60,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_60);
  goto k_105;
  s_60 :
  TestFunFC(z_46,&&u_60,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(p_60);
  goto l_105;
  u_60 :
  TestFunFC(y_60,&&x_60,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(p_60);
  goto m_105;
  x_60 :
  TestFunFC(l_58,&&c_61,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_60);
  goto n_105;
  c_61 :
  TestFunFC(p_58,&&d_61,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_60);
  goto o_105;
  d_61 :
  TestFunFC(t_58,&&e_61,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_60);
  goto p_105;
  e_61 :
  TestFunFC(w_58,&&f_61,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(p_60);
  goto q_105;
  f_61 :
  TestFunFC(e_59,&&h_61,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_60);
  goto r_105;
  h_61 :
  TestFunFC(c_49,&&i_61,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_60);
  goto s_105;
  i_61 :
  TestFunFC(p_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(p_60);
  goto e_106;
  p_60 :
  goto o_60;
  e_106 :
  Epushd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",Egetd(0,3),App2("TCons",App0("Nil"),App0("TNil")))),App2("Cons",Egetd(0,4),App0("Nil"))));
  Ccall(_stratego_h_97);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App3("Overlay",Egetd(0,2),Egetd(0,3),Egetd(1,1)));
  Epopd(1,1);
  Return();
  o_60 :
  goto n_60;
  s_105 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_61);
  t_105 :
  Cpush(l_61);
  Ccall(_stratego_t_95);
  goto k_61;
  l_61 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto o_102;
  o_102 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_102;
  p_102 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_102;
  q_102 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_102;
  r_102 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(t_61);
  goto u_105;
  t_61 :
  goto q_61;
  u_105 :
  Epushd(2,11);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  NotNULLd(1,4);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  NotNULLd(1,2);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,2);
  goto g_102;
  g_102 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_102;
  h_102 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_102;
  i_102 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(w_61);
  goto y_105;
  w_61 :
  goto v_61;
  y_105 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(3,2);
  NotNULLd(3,2);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(1,6),App0("TNil"))));
  Epopd(3,2);
  Return();
  v_61 :
  MoveTop(2,7);
  goto l_102;
  l_102 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto m_102;
  m_102 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto n_102;
  n_102 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(x_61);
  goto b_106;
  x_61 :
  goto u_61;
  b_106 :
  Epushd(3,1);
  NotNULLd(2,8);
  Tset(Egetd(2,8));
  Rpush(y_61);
  c_106 :
  Cpush(a_62);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_62);
  goto c_106;
  c_62 :
  AllBuild();
  goto z_61;
  a_62 :
  Ccall(_stratego_t_95);
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  goto i_62;
  z_61 :
  Cpop();
  i_62 :
  Return();
  y_61 :
  MoveTop(3,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil")))));
  Epopd(3,1);
  Return();
  u_61 :
  Epopd(2,11);
  Return();
  q_61 :
  Epopd(1,7);
  OneNextSon();
  Rpush(j_62);
  goto t_105;
  j_62 :
  AllBuild();
  goto m_61;
  k_61 :
  Cpop();
  m_61 :
  Return();
  j_61 :
  Return();
  n_60 :
  goto m_60;
  r_105 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_h_97);
  Return();
  m_60 :
  goto l_60;
  q_105 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App0("Nil")))));
  Ccall(_stratego_h_97);
  Return();
  l_60 :
  goto k_60;
  p_105 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,2),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  k_60 :
  goto j_60;
  o_105 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  j_60 :
  goto i_60;
  n_105 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  i_60 :
  goto h_60;
  m_105 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App2("Cons",Egetd(0,3),App0("Nil")))));
  Ccall(_stratego_h_97);
  Return();
  h_60 :
  goto g_60;
  l_105 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App2("Cons",Egetd(0,3),App0("Nil")))));
  Ccall(_stratego_h_97);
  Return();
  g_60 :
  goto f_60;
  k_105 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  f_60 :
  goto e_60;
  j_105 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_h_97);
  Return();
  e_60 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_h_97)
  Rpush(k_62);
  u_112 :
  Cpush(m_62);
  Ccall(_stratego_t_95);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  goto l_62;
  m_62 :
  Epushd(0,3);
  MoveTop(0,1);
  goto l_108;
  l_108 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_62);
  goto v_112;
  q_62 :
  goto o_62;
  v_112 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(w_62);
  goto u_112;
  w_62 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto i_108;
  i_108 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_108;
  j_108 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_108;
  k_108 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(x_62);
  goto w_112;
  x_62 :
  goto v_62;
  w_112 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(y_62);
  x_112 :
  Cpush(a_63);
  Ccall(_stratego_t_95);
  goto z_62;
  a_63 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(c_63);
  z_112 :
  Cpush(e_63);
  Ccall(_stratego_t_95);
  goto d_63;
  e_63 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,18);
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto n_107;
  n_107 :
  TestFunFC(p_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,10,3,2,1);
  goto o_107;
  o_107 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_107;
  p_107 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_107;
  q_107 :
  TestFunFC(p_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto r_107;
  r_107 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  goto s_107;
  s_107 :
  TestFunFC(p_0,&&fail,Egetd(3,10));
  MoveArg(3,11,3,10,0);
  MoveArg(3,18,3,10,1);
  goto t_107;
  t_107 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto u_107;
  u_107 :
  TestFunFC(p_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto v_107;
  v_107 :
  TestFunFC(p_0,&&fail,Egetd(3,15));
  MoveArg(3,16,3,15,0);
  MoveArg(3,17,3,15,1);
  goto w_107;
  w_107 :
  TestFunFC(s_0,&&fail,Egetd(3,17));
  goto x_107;
  x_107 :
  TestFunFC(s_0,&&fail,Egetd(3,18));
  Rpush(i_63);
  goto b_113;
  i_63 :
  goto h_63;
  b_113 :
  Epushd(4,6);
  NotNULLd(3,12);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(3,12),App2("TCons",Egetd(3,6),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(4,1);
  NotNULLd(3,4);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,4),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto k_107;
  k_107 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_107;
  l_107 :
  TestFunFC(p_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto m_107;
  m_107 :
  TestFunFC(s_0,&&fail,Egetd(4,6));
  Rpush(p_63);
  goto d_113;
  p_63 :
  goto k_63;
  d_113 :
  Epushd(5,6);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(q_63);
  e_113 :
  Cpush(s_63);
  Ccall(_stratego_t_95);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto r_63;
  s_63 :
  Ccontinue(t_63);
  Epushd(6,3);
  MoveTop(6,1);
  goto q_106;
  q_106 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(y_63);
  goto f_113;
  y_63 :
  goto x_63;
  f_113 :
  Tdupl();
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  Rpush(z_63);
  g_113 :
  Cpush(d_64);
  Epushd(7,3);
  MoveTop(7,1);
  goto p_106;
  p_106 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(f_64);
  goto h_113;
  f_64 :
  goto e_64;
  h_113 :
  Move(6,2,7,2);
  Return();
  e_64 :
  Epopd(7,3);
  goto c_64;
  d_64 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_64);
  goto g_113;
  k_64 :
  AllBuild();
  goto j_64;
  c_64 :
  Cpop();
  j_64 :
  Return();
  z_63 :
  Tpop();
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(l_64);
  goto e_113;
  l_64 :
  Return();
  x_63 :
  Epopd(6,3);
  goto r_63;
  t_63 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_64);
  goto e_113;
  s_64 :
  AllBuild();
  goto q_64;
  r_63 :
  Cpop();
  q_64 :
  Return();
  q_63 :
  MoveTop(5,1);
  NotNULLd(3,6);
  NotNULLd(3,14);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,14),App0("TNil"))));
  MoveTop(5,2);
  goto h_107;
  h_107 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto i_107;
  i_107 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto j_107;
  j_107 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(v_64);
  goto j_113;
  v_64 :
  goto t_64;
  j_113 :
  Epushd(6,6);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(y_64);
  k_113 :
  Cpush(b_65);
  Ccall(_stratego_t_95);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto a_65;
  b_65 :
  Ccontinue(c_65);
  Epushd(7,3);
  MoveTop(7,1);
  goto w_106;
  w_106 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(e_65);
  goto l_113;
  e_65 :
  goto d_65;
  l_113 :
  Tdupl();
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  Rpush(f_65);
  m_113 :
  Cpush(h_65);
  Epushd(8,3);
  MoveTop(8,1);
  goto v_106;
  v_106 :
  TestFunFC(a_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(j_65);
  goto n_113;
  j_65 :
  goto i_65;
  n_113 :
  Move(7,2,8,2);
  Return();
  i_65 :
  Epopd(8,3);
  goto g_65;
  h_65 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_65);
  goto m_113;
  m_65 :
  AllBuild();
  goto k_65;
  g_65 :
  Cpop();
  k_65 :
  Return();
  f_65 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(o_65);
  goto k_113;
  o_65 :
  Return();
  d_65 :
  Epopd(7,3);
  goto a_65;
  c_65 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_65);
  goto k_113;
  q_65 :
  AllBuild();
  goto p_65;
  a_65 :
  Cpop();
  p_65 :
  Return();
  y_64 :
  MoveTop(6,1);
  NotNULLd(3,8);
  NotNULLd(3,16);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,16),App0("TNil"))));
  MoveTop(6,2);
  goto e_107;
  e_107 :
  TestFunFC(p_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto f_107;
  f_107 :
  TestFunFC(p_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto g_107;
  g_107 :
  TestFunFC(s_0,&&fail,Egetd(6,6));
  Rpush(s_65);
  goto p_113;
  s_65 :
  goto r_65;
  p_113 :
  Epushd(7,1);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(t_65);
  q_113 :
  Cpush(y_65);
  Ccall(_stratego_t_95);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto u_65;
  y_65 :
  Ccontinue(z_65);
  Epushd(8,3);
  MoveTop(8,1);
  goto c_107;
  c_107 :
  TestFunFC(a_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(b_66);
  goto r_113;
  b_66 :
  goto a_66;
  r_113 :
  Tdupl();
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  Rpush(c_66);
  s_113 :
  Cpush(e_66);
  Epushd(9,3);
  MoveTop(9,1);
  goto b_107;
  b_107 :
  TestFunFC(a_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(g_66);
  goto t_113;
  g_66 :
  goto f_66;
  t_113 :
  Move(8,2,9,2);
  Return();
  f_66 :
  Epopd(9,3);
  goto d_66;
  e_66 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_66);
  goto s_113;
  i_66 :
  AllBuild();
  goto h_66;
  d_66 :
  Cpop();
  h_66 :
  Return();
  c_66 :
  Tpop();
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(j_66);
  goto q_113;
  j_66 :
  Return();
  a_66 :
  Epopd(8,3);
  goto u_65;
  z_65 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_66);
  goto q_113;
  l_66 :
  AllBuild();
  goto k_66;
  u_65 :
  Cpop();
  k_66 :
  Return();
  t_65 :
  MoveTop(7,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App0("TNil")))));
  Epopd(7,1);
  Return();
  r_65 :
  Epopd(6,6);
  Return();
  t_64 :
  Epopd(5,6);
  Return();
  k_63 :
  Epopd(4,6);
  Return();
  h_63 :
  Epopd(3,18);
  OneNextSon();
  Rpush(m_66);
  goto z_112;
  m_66 :
  AllBuild();
  goto f_63;
  d_63 :
  Cpop();
  f_63 :
  Return();
  c_63 :
  Epopd(2,1);
  OneNextSon();
  Rpush(n_66);
  goto x_112;
  n_66 :
  AllBuild();
  goto b_63;
  z_62 :
  Cpop();
  b_63 :
  Return();
  y_62 :
  Rpush(p_66);
  v_113 :
  Cpush(r_66);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto q_66;
  r_66 :
  Epushd(2,3);
  MoveTop(2,1);
  goto h_108;
  h_108 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_66);
  goto w_113;
  v_66 :
  goto t_66;
  w_113 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(z_66);
  goto v_113;
  z_66 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_108;
  e_108 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_108;
  f_108 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_108;
  g_108 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(c_67);
  goto x_113;
  c_67 :
  goto w_66;
  x_113 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(d_67);
  y_113 :
  Cpush(g_67);
  Ccall(_stratego_t_95);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto f_67;
  g_67 :
  Ccontinue(h_67);
  Epushd(4,3);
  MoveTop(4,1);
  goto d_108;
  d_108 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_67);
  goto z_113;
  j_67 :
  goto i_67;
  z_113 :
  Tdupl();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(k_67);
  a_114 :
  Cpush(o_67);
  Epushd(5,3);
  MoveTop(5,1);
  goto c_108;
  c_108 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(s_67);
  goto b_114;
  s_67 :
  goto r_67;
  b_114 :
  Move(4,2,5,2);
  Return();
  r_67 :
  Epopd(5,3);
  goto n_67;
  o_67 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_67);
  goto a_114;
  u_67 :
  AllBuild();
  goto t_67;
  n_67 :
  Cpop();
  t_67 :
  Return();
  k_67 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(v_67);
  goto y_113;
  v_67 :
  Return();
  i_67 :
  Epopd(4,3);
  goto f_67;
  h_67 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_67);
  goto y_113;
  x_67 :
  AllBuild();
  goto w_67;
  f_67 :
  Cpop();
  w_67 :
  Return();
  d_67 :
  Return();
  w_66 :
  Epopd(3,5);
  Return();
  t_66 :
  Epopd(2,3);
  goto s_66;
  q_66 :
  Cpop();
  s_66 :
  Return();
  p_66 :
  Return();
  v_62 :
  Epopd(1,5);
  Return();
  o_62 :
  Epopd(0,3);
  goto n_62;
  l_62 :
  Cpop();
  n_62 :
  Return();
  k_62 :
ENDPROC

PROC(_stratego_i_97)
  Epushd(0,5);
  Ccall(_stratego_j_97);
  MoveTop(0,1);
  goto i_116;
  i_116 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_116;
  j_116 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_67);
  goto y_120;
  z_67 :
  goto y_67;
  y_120 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(a_68);
  z_120 :
  Cpush(c_68);
  Ccall(_stratego_t_95);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  goto b_68;
  c_68 :
  Epushd(1,3);
  MoveTop(1,1);
  goto h_116;
  h_116 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(h_68);
  goto a_121;
  h_68 :
  goto f_68;
  a_121 :
  Epushd(2,5);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(l_68);
  goto z_120;
  l_68 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto e_116;
  e_116 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_116;
  f_116 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_116;
  g_116 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(p_68);
  goto b_121;
  p_68 :
  goto k_68;
  b_121 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(q_68);
  c_121 :
  Cpush(s_68);
  Ccall(_stratego_t_95);
  goto r_68;
  s_68 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(u_68);
  e_121 :
  Cpush(x_68);
  Ccall(_stratego_t_95);
  goto v_68;
  x_68 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,18);
  MoveTop(4,1);
  NotNULLd(3,1);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto j_115;
  j_115 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,10,4,2,1);
  goto k_115;
  k_115 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto l_115;
  l_115 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto m_115;
  m_115 :
  TestFunFC(p_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,9,4,7,1);
  goto n_115;
  n_115 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  goto o_115;
  o_115 :
  TestFunFC(p_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,18,4,10,1);
  goto p_115;
  p_115 :
  TestFunFC(p_0,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  MoveArg(4,13,4,11,1);
  goto q_115;
  q_115 :
  TestFunFC(p_0,&&fail,Egetd(4,13));
  MoveArg(4,14,4,13,0);
  MoveArg(4,15,4,13,1);
  goto r_115;
  r_115 :
  TestFunFC(p_0,&&fail,Egetd(4,15));
  MoveArg(4,16,4,15,0);
  MoveArg(4,17,4,15,1);
  goto s_115;
  s_115 :
  TestFunFC(s_0,&&fail,Egetd(4,17));
  goto t_115;
  t_115 :
  TestFunFC(s_0,&&fail,Egetd(4,18));
  Rpush(a_69);
  goto g_121;
  a_69 :
  goto z_68;
  g_121 :
  Epushd(5,5);
  NotNULLd(4,4);
  NotNULLd(4,12);
  Tset(App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,12),App0("TNil"))));
  MoveTop(5,1);
  goto g_115;
  g_115 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto h_115;
  h_115 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto i_115;
  i_115 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(d_69);
  goto h_121;
  d_69 :
  goto c_69;
  h_121 :
  Epushd(6,6);
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Rpush(e_69);
  i_121 :
  Cpush(g_69);
  Ccall(_stratego_t_95);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  goto f_69;
  g_69 :
  Ccontinue(h_69);
  Epushd(7,3);
  MoveTop(7,1);
  goto m_114;
  m_114 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(j_69);
  goto j_121;
  j_69 :
  goto i_69;
  j_121 :
  Tdupl();
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(l_69);
  k_121 :
  Cpush(n_69);
  Epushd(8,3);
  MoveTop(8,1);
  goto l_114;
  l_114 :
  TestFunFC(a_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(p_69);
  goto l_121;
  p_69 :
  goto o_69;
  l_121 :
  Move(7,2,8,2);
  Return();
  o_69 :
  Epopd(8,3);
  goto m_69;
  n_69 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_69);
  goto k_121;
  r_69 :
  AllBuild();
  goto q_69;
  m_69 :
  Cpop();
  q_69 :
  Return();
  l_69 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(s_69);
  goto i_121;
  s_69 :
  Return();
  i_69 :
  Epopd(7,3);
  goto f_69;
  h_69 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_69);
  goto i_121;
  u_69 :
  AllBuild();
  goto t_69;
  f_69 :
  Cpop();
  t_69 :
  Return();
  e_69 :
  MoveTop(6,1);
  NotNULLd(4,6);
  NotNULLd(4,14);
  Tset(App2("TCons",Egetd(4,6),App2("TCons",Egetd(4,14),App0("TNil"))));
  MoveTop(6,2);
  goto d_115;
  d_115 :
  TestFunFC(p_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto e_115;
  e_115 :
  TestFunFC(p_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto f_115;
  f_115 :
  TestFunFC(s_0,&&fail,Egetd(6,6));
  Rpush(w_69);
  goto n_121;
  w_69 :
  goto v_69;
  n_121 :
  Epushd(7,6);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(x_69);
  o_121 :
  Cpush(z_69);
  Ccall(_stratego_t_95);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto y_69;
  z_69 :
  Ccontinue(a_70);
  Epushd(8,3);
  MoveTop(8,1);
  goto s_114;
  s_114 :
  TestFunFC(a_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(c_70);
  goto p_121;
  c_70 :
  goto b_70;
  p_121 :
  Tdupl();
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  Rpush(e_70);
  q_121 :
  Cpush(g_70);
  Epushd(9,3);
  MoveTop(9,1);
  goto r_114;
  r_114 :
  TestFunFC(a_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(i_70);
  goto r_121;
  i_70 :
  goto h_70;
  r_121 :
  Move(8,2,9,2);
  Return();
  h_70 :
  Epopd(9,3);
  goto f_70;
  g_70 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_70);
  goto q_121;
  k_70 :
  AllBuild();
  goto j_70;
  f_70 :
  Cpop();
  j_70 :
  Return();
  e_70 :
  Tpop();
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(p_70);
  goto o_121;
  p_70 :
  Return();
  b_70 :
  Epopd(8,3);
  goto y_69;
  a_70 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_70);
  goto o_121;
  t_70 :
  AllBuild();
  goto q_70;
  y_69 :
  Cpop();
  q_70 :
  Return();
  x_69 :
  MoveTop(7,1);
  NotNULLd(4,8);
  NotNULLd(4,16);
  Tset(App2("TCons",Egetd(4,8),App2("TCons",Egetd(4,16),App0("TNil"))));
  MoveTop(7,2);
  goto a_115;
  a_115 :
  TestFunFC(p_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto b_115;
  b_115 :
  TestFunFC(p_0,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto c_115;
  c_115 :
  TestFunFC(s_0,&&fail,Egetd(7,6));
  Rpush(v_70);
  goto t_121;
  v_70 :
  goto u_70;
  t_121 :
  Epushd(8,1);
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(w_70);
  u_121 :
  Cpush(c_71);
  Ccall(_stratego_t_95);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  goto z_70;
  c_71 :
  Ccontinue(e_71);
  Epushd(9,3);
  MoveTop(9,1);
  goto y_114;
  y_114 :
  TestFunFC(a_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(m_71);
  goto v_121;
  m_71 :
  goto h_71;
  v_121 :
  Tdupl();
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  Rpush(p_71);
  w_121 :
  Cpush(y_71);
  Epushd(10,3);
  MoveTop(10,1);
  goto x_114;
  x_114 :
  TestFunFC(a_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(c_72);
  goto x_121;
  c_72 :
  goto z_71;
  x_121 :
  Move(9,2,10,2);
  Return();
  z_71 :
  Epopd(10,3);
  goto u_71;
  y_71 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_72);
  goto w_121;
  f_72 :
  AllBuild();
  goto e_72;
  u_71 :
  Cpop();
  e_72 :
  Return();
  p_71 :
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(g_72);
  goto u_121;
  g_72 :
  Return();
  h_71 :
  Epopd(9,3);
  goto z_70;
  e_71 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_72);
  goto u_121;
  m_72 :
  AllBuild();
  goto l_72;
  z_70 :
  Cpop();
  l_72 :
  Return();
  w_70 :
  MoveTop(8,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App2("TCons",Egetd(8,1),App0("TNil")))));
  Epopd(8,1);
  Return();
  u_70 :
  Epopd(7,6);
  Return();
  v_69 :
  Epopd(6,6);
  Return();
  c_69 :
  Epopd(5,5);
  Return();
  z_68 :
  Epopd(4,18);
  OneNextSon();
  Rpush(q_72);
  goto e_121;
  q_72 :
  AllBuild();
  goto y_68;
  v_68 :
  Cpop();
  y_68 :
  Return();
  u_68 :
  Epopd(3,1);
  OneNextSon();
  Rpush(r_72);
  goto c_121;
  r_72 :
  AllBuild();
  goto t_68;
  r_68 :
  Cpop();
  t_68 :
  Return();
  q_68 :
  Rpush(d_73);
  z_121 :
  Cpush(f_73);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto e_73;
  f_73 :
  Epushd(3,3);
  MoveTop(3,1);
  goto d_116;
  d_116 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_73);
  goto a_122;
  r_73 :
  goto h_73;
  a_122 :
  Epushd(4,5);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_73);
  goto z_121;
  u_73 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto a_116;
  a_116 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto b_116;
  b_116 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_116;
  c_116 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(z_73);
  goto b_122;
  z_73 :
  goto s_73;
  b_122 :
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(a_74);
  c_122 :
  Cpush(e_74);
  Ccall(_stratego_t_95);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto b_74;
  e_74 :
  Ccontinue(g_74);
  Epushd(5,3);
  MoveTop(5,1);
  goto z_115;
  z_115 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(i_74);
  goto d_122;
  i_74 :
  goto h_74;
  d_122 :
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(j_74);
  e_122 :
  Cpush(l_74);
  Epushd(6,3);
  MoveTop(6,1);
  goto y_115;
  y_115 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(y_74);
  goto f_122;
  y_74 :
  goto m_74;
  f_122 :
  Move(5,2,6,2);
  Return();
  m_74 :
  Epopd(6,3);
  goto k_74;
  l_74 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_75);
  goto e_122;
  m_75 :
  AllBuild();
  goto k_75;
  k_74 :
  Cpop();
  k_75 :
  Return();
  j_74 :
  Tpop();
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(n_75);
  goto c_122;
  n_75 :
  Return();
  h_74 :
  Epopd(5,3);
  goto b_74;
  g_74 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_75);
  goto c_122;
  p_75 :
  AllBuild();
  goto o_75;
  b_74 :
  Cpop();
  o_75 :
  Return();
  a_74 :
  Return();
  s_73 :
  Epopd(4,5);
  Return();
  h_73 :
  Epopd(3,3);
  goto g_73;
  e_73 :
  Cpop();
  g_73 :
  Return();
  d_73 :
  Return();
  k_68 :
  Epopd(2,5);
  Return();
  f_68 :
  Epopd(1,3);
  goto e_68;
  b_68 :
  Cpop();
  e_68 :
  Return();
  a_68 :
  Return();
  y_67 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_97)
  _ST_explode_term();
ENDPROC

PROC(_stratego_k_97)
  Ccall(_stratego_l_97);
  Ccall(_stratego_o_97);
ENDPROC

PROC(_stratego_l_97)
  Epushd(0,4);
  MoveTop(0,1);
  goto h_123;
  h_123 :
  TestFunFC(k_17,&&d_76,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(c_76);
  goto r_125;
  d_76 :
  TestFunFC(l_17,&&e_76,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(c_76);
  goto x_125;
  e_76 :
  TestFunFC(p_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(c_76);
  goto d_126;
  c_76 :
  goto b_76;
  d_126 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(k_76);
  e_126 :
  Cpush(n_76);
  Ccall(_stratego_t_95);
  goto l_76;
  n_76 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto c_123;
  c_123 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto d_123;
  d_123 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto e_123;
  e_123 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_123;
  f_123 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(w_76);
  goto f_126;
  w_76 :
  goto v_76;
  f_126 :
  Epushd(3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_m_97);
  MoveTop(3,1);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_n_97);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App0("Nil"))));
  Ccall(_stratego_o_96);
  Epopd(3,2);
  Return();
  v_76 :
  Epopd(2,7);
  OneNextSon();
  Rpush(p_77);
  goto e_126;
  p_77 :
  AllBuild();
  goto u_76;
  l_76 :
  Cpop();
  u_76 :
  Return();
  k_76 :
  Ccall(_stratego_o_96);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in overlay "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,1);
  Return();
  b_76 :
  goto r_75;
  x_125 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(r_77);
  y_125 :
  Cpush(w_77);
  Ccall(_stratego_t_95);
  goto s_77;
  w_77 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto u_122;
  u_122 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_122;
  v_122 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_122;
  w_122 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_122;
  x_122 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(c_78);
  goto z_125;
  c_78 :
  goto b_78;
  z_125 :
  Epushd(3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_m_97);
  MoveTop(3,1);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_n_97);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App0("Nil"))));
  Ccall(_stratego_o_96);
  Epopd(3,2);
  Return();
  b_78 :
  Epopd(2,7);
  OneNextSon();
  Rpush(d_78);
  goto y_125;
  d_78 :
  AllBuild();
  goto x_77;
  s_77 :
  Cpop();
  x_77 :
  Return();
  r_77 :
  Ccall(_stratego_o_96);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in definition "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,1);
  Return();
  r_75 :
  goto q_75;
  r_125 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(e_78);
  s_125 :
  Cpush(g_78);
  Ccall(_stratego_t_95);
  goto f_78;
  g_78 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto m_122;
  m_122 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_122;
  n_122 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_122;
  o_122 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_122;
  p_122 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(k_78);
  goto t_125;
  k_78 :
  goto i_78;
  t_125 :
  Epushd(3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_m_97);
  MoveTop(3,1);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_n_97);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App0("Nil"))));
  Ccall(_stratego_o_96);
  Epopd(3,2);
  Return();
  i_78 :
  Epopd(2,7);
  OneNextSon();
  Rpush(l_78);
  goto s_125;
  l_78 :
  AllBuild();
  goto h_78;
  f_78 :
  Cpop();
  h_78 :
  Return();
  e_78 :
  Ccall(_stratego_o_96);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in rule "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,1);
  Return();
  q_75 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_m_97)
  Epushd(0,5);
  MoveTop(0,1);
  goto m_126;
  m_126 :
  TestFunFC(w_0,&&q_78,Egetd(0,1));
  Rpush(p_78);
  goto x_126;
  q_78 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_126;
  n_126 :
  TestFunFC(w_0,&&r_78,Egetd(0,3));
  Rpush(p_78);
  goto y_126;
  r_78 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_78);
  goto z_126;
  p_78 :
  goto o_78;
  z_126 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",ATmakeString("variables "),App2("Cons",App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),Egetd(0,5))),App2("Cons",ATmakeString(": used, but not bound"),App0("Nil")))));
  Return();
  o_78 :
  goto n_78;
  y_126 :
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("variable "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(": used, but not bound"),App0("Nil")))));
  Return();
  n_78 :
  goto m_78;
  x_126 :
  Tset(App0("Nil"));
  Return();
  m_78 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_97)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_127;
  d_127 :
  TestFunFC(w_0,&&x_78,Egetd(0,1));
  Rpush(w_78);
  goto o_127;
  x_78 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_127;
  e_127 :
  TestFunFC(w_0,&&y_78,Egetd(0,3));
  Rpush(w_78);
  goto p_127;
  y_78 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(w_78);
  goto q_127;
  w_78 :
  goto v_78;
  q_127 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",ATmakeString("variables "),App2("Cons",App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),Egetd(0,5))),App2("Cons",ATmakeString(": declared, but not bound"),App0("Nil")))));
  Return();
  v_78 :
  goto u_78;
  p_127 :
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("variable "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(": declared, but not bound"),App0("Nil")))));
  Return();
  u_78 :
  goto s_78;
  o_127 :
  Tset(App0("Nil"));
  Return();
  s_78 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_97)
  Tdupl();
  Ccall(_stratego_p_97);
  Tset(MakeInt(1));
  Ccall(_stratego_z_95);
  Tpop();
ENDPROC

PROC(_stratego_p_97)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_97)
  Rpush(z_78);
  d_128 :
  Cpush(b_79);
  TestFunTop(j_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_79);
  e_128 :
  Cpush(e_79);
  Ccall(_stratego_t_95);
  goto d_79;
  e_79 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(g_79);
  goto d_128;
  g_79 :
  OneNextSon();
  Rpush(h_79);
  goto e_128;
  h_79 :
  AllBuild();
  goto f_79;
  d_79 :
  Cpop();
  f_79 :
  Return();
  c_79 :
  AllBuild();
  goto a_79;
  b_79 :
  goto i_79;
  a_79 :
  Cpop();
  i_79 :
  Ccall(_stratego_r_97);
  Return();
  z_78 :
ENDPROC

PROC(_stratego_r_97)
  Epushd(0,3);
  MoveTop(0,2);
  goto l_128;
  l_128 :
  TestFunFC(f_44,&&q_79,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_79);
  goto w_128;
  q_79 :
  TestFunFC(j_10,&&r_79,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(p_79);
  goto x_128;
  r_79 :
  TestFunFC(t_79,&&s_79,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_79);
  goto y_128;
  s_79 :
  TestFunFC(v_79,&&u_79,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_79);
  goto z_128;
  u_79 :
  TestFunFC(x_79,&&w_79,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_79);
  goto a_129;
  w_79 :
  TestFunFC(y_79,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_79);
  goto b_129;
  p_79 :
  goto o_79;
  b_129 :
  Tset(App0("Id"));
  Return();
  o_79 :
  goto n_79;
  a_129 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Real",Egetd(0,3))));
  Return();
  n_79 :
  goto m_79;
  z_128 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Int",Egetd(0,3))));
  Return();
  m_79 :
  goto l_79;
  y_128 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Str",Egetd(0,3))));
  Return();
  l_79 :
  goto k_79;
  x_128 :
  NotNULLd(0,3);
  NotNULLd(0,1);
  Tset(App2("Call",App1("SVar",Egetd(0,3)),Egetd(0,1)));
  Return();
  k_79 :
  goto j_79;
  w_128 :
  NotNULLd(0,3);
  Tset(App2("Call",App1("SVar",Egetd(0,3)),App0("Nil")));
  Return();
  j_79 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_97)
  Epushd(0,5);
  Ccall(_stratego_t_96);
  MoveTop(0,1);
  goto w_130;
  w_130 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_130;
  x_130 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_130;
  y_130 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(c_80);
  goto h_134;
  c_80 :
  goto z_79;
  h_134 :
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(d_80);
  i_134 :
  Rpush(e_80);
  j_134 :
  Epushd(1,5);
  MoveTop(1,1);
  goto t_130;
  t_130 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_130;
  u_130 :
  TestFunFC(p_0,&&o_80,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_130;
  v_130 :
  TestFunFC(s_0,&&p_80,Egetd(1,5));
  Cpush(r_80);
  Rpush(v_80);
  goto k_134;
  v_80 :
  goto q_80;
  r_80 :
  Ccontinue(w_80);
  Rpush(x_80);
  goto o_134;
  x_80 :
  goto q_80;
  w_80 :
  Ccontinue(y_80);
  Rpush(z_80);
  goto t_134;
  z_80 :
  goto q_80;
  y_80 :
  Rpush(h_81);
  goto i_135;
  h_81 :
  goto a_81;
  q_80 :
  Cpop();
  a_81 :
  goto n_80;
  p_80 :
  Rpush(n_80);
  goto o_134;
  o_80 :
  Rpush(n_80);
  goto o_134;
  n_80 :
  goto m_80;
  i_135 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  i_81 :
  AllNextSon(&&m_81);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(n_81);
  goto j_134;
  n_81 :
  Epopd(2,1);
  goto i_81;
  m_81 :
  AllBuild();
  Return();
  m_80 :
  goto k_80;
  t_134 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_z_96);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(o_81);
  v_134 :
  Cpush(q_81);
  Ccall(_stratego_t_95);
  goto p_81;
  q_81 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_97);
  OneNextSon();
  Rpush(a_82);
  goto v_134;
  a_82 :
  AllBuild();
  goto r_81;
  p_81 :
  Cpop();
  r_81 :
  Return();
  o_81 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(e_82);
  x_134 :
  Epushd(4,9);
  MoveTop(4,1);
  goto x_129;
  x_129 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto y_129;
  y_129 :
  TestFunFC(w_0,&&l_82,Egetd(4,2));
  goto z_129;
  z_129 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_130;
  a_130 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto b_130;
  b_130 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(i_82);
  goto y_134;
  l_82 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto c_130;
  c_130 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto d_130;
  d_130 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto e_130;
  e_130 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(i_82);
  goto z_134;
  i_82 :
  goto h_82;
  z_134 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(v_82);
  goto x_134;
  v_82 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto u_129;
  u_129 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto v_129;
  v_129 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto w_129;
  w_129 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(w_82);
  goto a_135;
  w_82 :
  goto u_82;
  a_135 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  u_82 :
  Epopd(5,5);
  Return();
  h_82 :
  goto g_82;
  y_134 :
  Tset(App0("Nil"));
  Return();
  g_82 :
  Epopd(4,9);
  Return();
  e_82 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto i_130;
  i_130 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto j_130;
  j_130 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto k_130;
  k_130 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(z_82);
  goto c_135;
  z_82 :
  goto x_82;
  c_135 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(f_83);
  d_135 :
  Cpush(k_83);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_83);
  goto d_135;
  l_83 :
  AllBuild();
  goto g_83;
  k_83 :
  Ccall(_stratego_t_95);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto r_83;
  g_83 :
  Cpop();
  r_83 :
  Return();
  f_83 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  x_82 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(c_49);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto o_130;
  o_130 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_130;
  p_130 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto q_130;
  q_130 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto r_130;
  r_130 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(b_84);
  goto g_135;
  b_84 :
  goto a_84;
  g_135 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(c_49);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(d_84);
  goto i_134;
  d_84 :
  Epopd(3,1);
  AllBuild();
  Return();
  a_84 :
  Epopd(2,11);
  Return();
  k_80 :
  goto j_80;
  o_134 :
  Epushd(2,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto o_129;
  o_129 :
  TestFunFC(f_44,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(l_84);
  goto q_134;
  l_84 :
  goto f_84;
  q_134 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Move(2,1,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(2,2,0,2);
  Return();
  f_84 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_u_96);
  Epopd(2,2);
  Return();
  j_80 :
  goto g_80;
  k_134 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(f_44);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_u_96);
  Epopd(2,1);
  AllBuild();
  Return();
  g_80 :
  Epopd(1,5);
  Return();
  e_80 :
  Return();
  d_80 :
  Return();
  z_79 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_97)
  _ST_new();
ENDPROC

PROC(_stratego_u_97)
  Rpush(m_84);
  k_135 :
  Cpush(r_84);
  Ccall(_stratego_t_95);
  goto q_84;
  r_84 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_97);
  OneNextSon();
  Rpush(y_84);
  goto k_135;
  y_84 :
  AllBuild();
  goto x_84;
  q_84 :
  Cpop();
  x_84 :
  Return();
  m_84 :
  Ccall(_stratego_o_96);
  Ccall(_stratego_w_97);
ENDPROC

PROC(_stratego_v_97)
  _ST_explode_string();
ENDPROC

PROC(_stratego_w_97)
  _ST_implode_string();
ENDPROC

PROC(_stratego_x_97)
  Rpush(z_84);
  v_135 :
  Cpush(b_85);
  Ccall(_stratego_t_95);
  Tset(MakeInt(0));
  goto a_85;
  b_85 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_135;
  n_135 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_85);
  goto w_135;
  m_85 :
  goto g_85;
  w_135 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_85);
  goto v_135;
  q_85 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_97);
  Epopd(1,1);
  Return();
  g_85 :
  Epopd(0,3);
  goto f_85;
  a_85 :
  Cpop();
  f_85 :
  Return();
  z_84 :
ENDPROC

PROC(_stratego_y_97)
  _ST_add();
ENDPROC

PROC(_stratego_z_97)
  Rpush(r_85);
  c_137 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_a_98);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_y_97);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_b_98);
  Ccall(_stratego_c_98);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(y_85);
  Epushd(1,1);
  MoveTop(1,1);
  goto i_136;
  i_136 :
  TestInt(1,1,0,&&fail);
  Rpush(a_86);
  goto m_137;
  a_86 :
  goto z_85;
  m_137 :
  Tset(App0("Nil"));
  Return();
  z_85 :
  Epopd(1,1);
  goto x_85;
  y_85 :
  Rpush(i_86);
  goto c_137;
  i_86 :
  goto d_86;
  x_85 :
  Cpop();
  d_86 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Ccall(_stratego_d_98);
  Epopd(0,4);
  Return();
  r_85 :
  Ccall(_stratego_e_98);
  Ccall(_stratego_w_97);
ENDPROC

PROC(_stratego_a_98)
  _ST_mod();
ENDPROC

PROC(_stratego_b_98)
  _ST_div();
ENDPROC

PROC(_stratego_c_98)
  _ST_int();
ENDPROC

PROC(_stratego_d_98)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_137;
  p_137 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_137;
  q_137 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto r_137;
  r_137 :
  TestFunFC(w_0,&&b_87,Egetd(0,4));
  goto s_137;
  s_137 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(a_87);
  goto f_138;
  b_87 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto t_137;
  t_137 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(a_87);
  goto g_138;
  a_87 :
  goto w_86;
  g_138 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  w_86 :
  goto v_86;
  f_138 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  v_86 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_98)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(j_87);
  l_139 :
  Cpush(l_87);
  Epushd(1,7);
  MoveTop(1,1);
  goto j_138;
  j_138 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto k_138;
  k_138 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto l_138;
  l_138 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto m_138;
  m_138 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(n_87);
  goto m_139;
  n_87 :
  goto m_87;
  m_139 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(o_87);
  goto l_139;
  o_87 :
  Return();
  m_87 :
  Epopd(1,7);
  goto k_87;
  l_87 :
  goto p_87;
  k_87 :
  Cpop();
  p_87 :
  Return();
  j_87 :
  MoveTop(0,2);
  goto o_138;
  o_138 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_138;
  p_138 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  goto q_138;
  q_138 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto r_138;
  r_138 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(q_87);
  goto n_139;
  q_87 :
  goto f_87;
  n_139 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  f_87 :
  Epopd(0,6);
ENDPROC
