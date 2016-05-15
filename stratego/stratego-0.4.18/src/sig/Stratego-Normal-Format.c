#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,s_19);
VARDECL(AFun,c_19);
VARDECL(AFun,w_18);
VARDECL(AFun,t_18);
VARDECL(AFun,r_18);
VARDECL(AFun,p_18);
VARDECL(AFun,m_18);
VARDECL(AFun,k_18);
VARDECL(AFun,c_17);
VARDECL(AFun,x_16);
VARDECL(AFun,t_16);
VARDECL(AFun,l_16);
VARDECL(AFun,v_15);
VARDECL(AFun,t_15);
VARDECL(AFun,p_15);
VARDECL(AFun,m_15);
VARDECL(AFun,g_15);
VARDECL(AFun,v_14);
VARDECL(AFun,h_14);
VARDECL(AFun,h_13);
VARDECL(AFun,c_13);
VARDECL(AFun,v_12);
VARDECL(AFun,r_12);
VARDECL(AFun,q_12);
VARDECL(AFun,e_12);
VARDECL(AFun,v_11);
VARDECL(AFun,q_11);
VARDECL(AFun,n_11);
VARDECL(AFun,j_11);
VARDECL(AFun,b_11);
VARDECL(AFun,h_10);
VARDECL(AFun,y_9);
VARDECL(AFun,k_9);
VARDECL(AFun,w_8);
VARDECL(AFun,a_8);
VARDECL(AFun,m_7);
VARDECL(AFun,e_7);
VARDECL(AFun,a_7);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_r_4);
PROCDECL(_stratego_s_4);
PROCDECL(_stratego_t_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);
PROCDECL(_stratego_d_5);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
PROCDECL(_stratego_k_5);

PROC(_stratego_init_afuns)
  MOVE(s_19,ATmakeAFun("Wld",0,0));
  MOVE(c_19,ATmakeAFun("Op",2,0));
  MOVE(w_18,ATmakeAFun("As",2,0));
  MOVE(t_18,ATmakeAFun("BuildDefault",1,0));
  MOVE(r_18,ATmakeAFun("Str",1,0));
  MOVE(p_18,ATmakeAFun("Real",1,0));
  MOVE(m_18,ATmakeAFun("Int",1,0));
  MOVE(k_18,ATmakeAFun("Var",1,0));
  MOVE(c_17,ATmakeAFun("Fail",0,0));
  MOVE(x_16,ATmakeAFun("Id",0,0));
  MOVE(t_16,ATmakeAFun("Prim",1,0));
  MOVE(l_16,ATmakeAFun("Where",1,0));
  MOVE(v_15,ATmakeAFun("Scope",2,0));
  MOVE(t_15,ATmakeAFun("Build",1,0));
  MOVE(p_15,ATmakeAFun("Match",1,0));
  MOVE(m_15,ATmakeAFun("Thread",1,0));
  MOVE(g_15,ATmakeAFun("All",1,0));
  MOVE(v_14,ATmakeAFun("Some",1,0));
  MOVE(h_14,ATmakeAFun("One",1,0));
  MOVE(h_13,ATmakeAFun("Cong",2,0));
  MOVE(c_13,ATmakeAFun("Path",2,0));
  MOVE(v_12,ATmakeAFun("Rec",2,0));
  MOVE(r_12,ATmakeAFun("SVar",1,0));
  MOVE(q_12,ATmakeAFun("Call",2,0));
  MOVE(e_12,ATmakeAFun("LChoice",2,0));
  MOVE(v_11,ATmakeAFun("Choice",2,0));
  MOVE(q_11,ATmakeAFun("Seq",2,0));
  MOVE(n_11,ATmakeAFun("Test",1,0));
  MOVE(j_11,ATmakeAFun("Not",1,0));
  MOVE(b_11,ATmakeAFun("SDef",3,0));
  MOVE(h_10,ATmakeAFun("Runtime",1,0));
  MOVE(y_9,ATmakeAFun("Silent",0,0));
  MOVE(k_9,ATmakeAFun("Binary",0,0));
  MOVE(w_8,ATmakeAFun("Output",1,0));
  MOVE(a_8,ATmakeAFun("Input",1,0));
  MOVE(m_7,ATmakeAFun("Program",1,0));
  MOVE(e_7,ATmakeAFun("Help",0,0));
  MOVE(a_7,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
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
  l_5 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_l_4);
  goto f_0;
  g_0 :
  Ccall(_stratego_m_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto l_5;
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
  goto m_5;
  l_0 :
  goto k_0;
  m_5 :
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
  Ccall(_stratego_n_4);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_s_4);
  Tdupl();
  Ccall(_stratego_u_4);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_5);
  OneNextSon();
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_u_4);
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
  goto o_5;
  r_0 :
  goto q_0;
  o_5 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_v_4);
  Ccall(_stratego_y_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_z_4);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_5;
  q_5 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto s_5;
  v_0 :
  goto u_0;
  s_5 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto g_8;
  g_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_8;
  h_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto z_11;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto c_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto f_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto i_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto l_12;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto o_12;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto s_12;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto w_12;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto a_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto e_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto i_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto l_13;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto o_13;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto r_13;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto u_13;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto z_11;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto c_12;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto f_12;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto i_12;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto l_12;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto i_13;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(s_3);
  goto l_13;
  s_3 :
  goto t_2;
  q_3 :
  Ccontinue(u_3);
  Rpush(x_3);
  goto o_13;
  x_3 :
  goto t_2;
  u_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto r_13;
  z_3 :
  goto t_2;
  y_3 :
  Rpush(b_4);
  goto u_13;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  u_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto v_13;
  d_4 :
  goto c_4;
  v_13 :
  Return();
  c_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_8;
  b_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto s_13;
  f_4 :
  goto e_4;
  s_13 :
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
  o_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(h_4);
  goto p_13;
  h_4 :
  goto g_4;
  p_13 :
  Return();
  g_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  l_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(j_4);
  goto m_13;
  j_4 :
  goto i_4;
  m_13 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  i_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_7;
  s_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(n_5);
  goto j_13;
  n_5 :
  goto k_4;
  j_13 :
  Return();
  k_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  e_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_5);
  goto f_13;
  t_5 :
  goto p_5;
  f_13 :
  Return();
  p_5 :
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
  a_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_5);
  goto b_13;
  v_5 :
  goto u_5;
  b_13 :
  Return();
  u_5 :
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
  w_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_5);
  goto x_12;
  x_5 :
  goto w_5;
  x_12 :
  Return();
  w_5 :
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
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_5);
  goto t_12;
  z_5 :
  goto y_5;
  t_12 :
  Return();
  y_5 :
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
  o_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_6);
  goto p_12;
  b_6 :
  goto a_6;
  p_12 :
  Return();
  a_6 :
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
  l_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_6);
  goto m_12;
  d_6 :
  goto c_6;
  m_12 :
  Return();
  c_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  i_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_6;
  s_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_6);
  goto j_12;
  f_6 :
  goto e_6;
  j_12 :
  Return();
  e_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  f_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_6;
  p_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_6);
  goto g_12;
  h_6 :
  goto g_6;
  g_12 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  c_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_6);
  goto d_12;
  k_6 :
  goto i_6;
  d_12 :
  Return();
  i_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  z_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_6;
  j_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(n_6);
  goto a_12;
  n_6 :
  goto l_6;
  a_12 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_4)
  Tdupl();
  o_6 :
  TestFunTop(a_0);
  Cpush(q_6);
  Arg(0);
  Cpush(u_6);
  Ccall(_stratego_o_4);
  goto t_6;
  u_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto y_13;
  y_13 :
  TestFunFC(a_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_6);
  goto c_14;
  z_6 :
  goto x_6;
  c_14 :
  Return();
  x_6 :
  Epopd(0,2);
  goto w_6;
  t_6 :
  Cpop();
  w_6 :
  Tpop();
  Cpop();
  goto r_6;
  q_6 :
  Arg(1);
  Tdrop();
  goto o_6;
  r_6 :
  Tpop();
  Ccall(_stratego_p_4);
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_14;
  e_14 :
  TestFunFC(e_7,&&fail,Egetd(0,1));
  Rpush(d_7);
  goto g_14;
  d_7 :
  goto b_7;
  g_14 :
  Return();
  b_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,1);
  Tdupl();
  Rpush(f_7);
  p_14 :
  Cpush(i_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_14;
  i_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_14;
  j_14 :
  TestFunFC(m_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_7);
  goto q_14;
  l_7 :
  goto j_7;
  q_14 :
  Move(0,1,1,3);
  Return();
  j_7 :
  Epopd(1,4);
  goto h_7;
  i_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_7);
  goto p_14;
  p_7 :
  AllBuild();
  goto n_7;
  h_7 :
  Cpop();
  n_7 :
  Return();
  f_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_q_4);
  Tset(MakeInt(1));
  Ccall(_stratego_r_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_r_4)
  _ST_exit();
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,3);
  Tdupl();
  Cpush(r_7);
  Rpush(t_7);
  k_15 :
  Cpush(w_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_14;
  s_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_14;
  t_14 :
  TestFunFC(a_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_7);
  goto l_15;
  z_7 :
  goto x_7;
  l_15 :
  Move(0,1,1,3);
  Return();
  x_7 :
  Epopd(1,4);
  goto u_7;
  w_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_8);
  goto k_15;
  d_8 :
  AllBuild();
  goto c_8;
  u_7 :
  Cpop();
  c_8 :
  Return();
  t_7 :
  goto q_7;
  r_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto f_8;
  q_7 :
  Cpop();
  f_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_t_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_t_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_u_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(o_8);
  Rpush(q_8);
  p_16 :
  Cpush(s_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_15;
  r_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_15;
  s_15 :
  TestFunFC(w_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_8);
  goto q_16;
  v_8 :
  goto t_8;
  q_16 :
  Move(0,1,1,3);
  Return();
  t_8 :
  Epopd(1,4);
  goto r_8;
  s_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_8);
  goto p_16;
  y_8 :
  AllBuild();
  goto x_8;
  r_8 :
  Cpop();
  x_8 :
  Return();
  q_8 :
  goto n_8;
  o_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto a_9;
  n_8 :
  Cpop();
  a_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_5);
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
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  Cpush(c_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(d_9);
  a_17 :
  Cpush(g_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_15;
  y_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_15;
  z_15 :
  TestFunFC(k_9,&&fail,Egetd(1,2));
  Rpush(i_9);
  goto b_17;
  i_9 :
  goto h_9;
  b_17 :
  Return();
  h_9 :
  Epopd(1,3);
  goto f_9;
  g_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_9);
  goto a_17;
  m_9 :
  AllBuild();
  goto l_9;
  f_9 :
  Cpop();
  l_9 :
  Return();
  d_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_4);
  OneNextSon();
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  goto b_9;
  c_9 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_4);
  OneNextSon();
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  goto n_9;
  b_9 :
  Cpop();
  n_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_x_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,2);
  Tdupl();
  Cpush(q_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(r_9);
  Tdupl();
  Rpush(s_9);
  y_17 :
  Cpush(u_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_17;
  d_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_17;
  e_17 :
  TestFunFC(y_9,&&fail,Egetd(1,2));
  Rpush(w_9);
  goto z_17;
  w_9 :
  goto v_9;
  z_17 :
  Return();
  v_9 :
  Epopd(1,3);
  goto t_9;
  u_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto y_17;
  a_10 :
  AllBuild();
  goto z_9;
  t_9 :
  Cpop();
  z_9 :
  Return();
  s_9 :
  Cpop();
  Crestore();
  Cjump();
  r_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_10);
  a_18 :
  Cpush(d_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_17;
  g_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_17;
  h_17 :
  TestFunFC(h_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_10);
  goto b_18;
  g_10 :
  goto e_10;
  b_18 :
  Move(0,2,1,3);
  Return();
  e_10 :
  Epopd(1,4);
  goto c_10;
  d_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_10);
  goto a_18;
  j_10 :
  AllBuild();
  goto i_10;
  c_10 :
  Cpop();
  i_10 :
  Return();
  b_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(k_10);
  c_18 :
  Cpush(m_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_17;
  j_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_17;
  k_17 :
  TestFunFC(m_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_10);
  goto d_18;
  p_10 :
  goto o_10;
  d_18 :
  Move(0,1,1,3);
  Return();
  o_10 :
  Epopd(1,4);
  goto l_10;
  m_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_10);
  goto c_18;
  r_10 :
  AllBuild();
  goto q_10;
  l_10 :
  Cpop();
  q_10 :
  Return();
  k_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_q_4);
  goto o_9;
  q_9 :
  goto s_10;
  o_9 :
  Cpop();
  s_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_r_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_q_4);
  Tset(MakeInt(1));
  Ccall(_stratego_r_4);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_18;
  f_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(u_10);
  goto h_18;
  u_10 :
  goto t_10;
  h_18 :
  Return();
  t_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_5)
  Rpush(w_10);
  i_18 :
  Cpush(y_10);
  Ccall(_stratego_l_4);
  goto x_10;
  y_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_5);
  OneNextSon();
  Rpush(a_11);
  goto i_18;
  a_11 :
  AllBuild();
  goto z_10;
  x_10 :
  Cpop();
  z_10 :
  Return();
  w_10 :
ENDPROC

PROC(_stratego_c_5)
  TestFunTop(b_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  OneNextSon();
  Ccall(_stratego_l_4);
  OneNextSon();
  Ccall(_stratego_e_5);
  AllBuild();
ENDPROC

PROC(_stratego_d_5)
  _ST_is_string();
ENDPROC

PROC(_stratego_e_5)
  Rpush(d_11);
  y_18 :
  Cpush(f_11);
  Ccall(_stratego_f_5);
  goto e_11;
  f_11 :
  Ccontinue(g_11);
  Ccall(_stratego_g_5);
  goto e_11;
  g_11 :
  Ccontinue(i_11);
  TestFunTop(j_11);
  TravInit();
  OneNextSon();
  Rpush(k_11);
  goto y_18;
  k_11 :
  AllBuild();
  goto e_11;
  i_11 :
  Ccontinue(l_11);
  TestFunTop(n_11);
  TravInit();
  OneNextSon();
  Rpush(o_11);
  goto y_18;
  o_11 :
  AllBuild();
  goto e_11;
  l_11 :
  Ccontinue(p_11);
  TestFunTop(q_11);
  TravInit();
  OneNextSon();
  Rpush(s_11);
  goto y_18;
  s_11 :
  OneNextSon();
  Rpush(t_11);
  goto y_18;
  t_11 :
  AllBuild();
  goto e_11;
  p_11 :
  Ccontinue(u_11);
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  Rpush(x_11);
  goto y_18;
  x_11 :
  OneNextSon();
  Rpush(y_11);
  goto y_18;
  y_11 :
  AllBuild();
  goto e_11;
  u_11 :
  Ccontinue(b_12);
  TestFunTop(e_12);
  TravInit();
  OneNextSon();
  Rpush(h_12);
  goto y_18;
  h_12 :
  OneNextSon();
  Rpush(k_12);
  goto y_18;
  k_12 :
  AllBuild();
  goto e_11;
  b_12 :
  Ccontinue(n_12);
  TestFunTop(q_12);
  TravInit();
  OneNextSon();
  TestFunTop(r_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_l_4);
  AllBuild();
  goto e_11;
  n_12 :
  Ccontinue(u_12);
  TestFunTop(v_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  OneNextSon();
  Rpush(y_12);
  goto y_18;
  y_12 :
  AllBuild();
  goto e_11;
  u_12 :
  Ccontinue(z_12);
  TestFunTop(c_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_5);
  OneNextSon();
  Rpush(d_13);
  goto y_18;
  d_13 :
  AllBuild();
  goto e_11;
  z_12 :
  Ccontinue(g_13);
  TestFunTop(h_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  OneNextSon();
  Rpush(k_13);
  z_18 :
  Cpush(q_13);
  Ccall(_stratego_l_4);
  goto n_13;
  q_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(w_13);
  goto y_18;
  w_13 :
  OneNextSon();
  Rpush(x_13);
  goto z_18;
  x_13 :
  AllBuild();
  goto t_13;
  n_13 :
  Cpop();
  t_13 :
  Return();
  k_13 :
  AllBuild();
  goto e_11;
  g_13 :
  Ccontinue(d_14);
  TestFunTop(h_14);
  TravInit();
  OneNextSon();
  Rpush(r_14);
  goto y_18;
  r_14 :
  AllBuild();
  goto e_11;
  d_14 :
  Ccontinue(u_14);
  TestFunTop(v_14);
  TravInit();
  OneNextSon();
  Rpush(w_14);
  goto y_18;
  w_14 :
  AllBuild();
  goto e_11;
  u_14 :
  Ccontinue(x_14);
  TestFunTop(v_14);
  TravInit();
  OneNextSon();
  Rpush(d_15);
  goto y_18;
  d_15 :
  AllBuild();
  goto e_11;
  x_14 :
  Ccontinue(f_15);
  TestFunTop(g_15);
  TravInit();
  OneNextSon();
  Rpush(h_15);
  goto y_18;
  h_15 :
  AllBuild();
  goto e_11;
  f_15 :
  Ccontinue(j_15);
  TestFunTop(m_15);
  TravInit();
  OneNextSon();
  Rpush(n_15);
  goto y_18;
  n_15 :
  AllBuild();
  goto e_11;
  j_15 :
  Ccontinue(o_15);
  TestFunTop(p_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_5);
  AllBuild();
  goto e_11;
  o_15 :
  Ccontinue(q_15);
  TestFunTop(t_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_5);
  AllBuild();
  goto e_11;
  q_15 :
  Ccontinue(u_15);
  TestFunTop(v_15);
  TravInit();
  OneNextSon();
  Rpush(w_15);
  a_19 :
  Cpush(f_16);
  Ccall(_stratego_l_4);
  goto x_15;
  f_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  OneNextSon();
  Rpush(i_16);
  goto a_19;
  i_16 :
  AllBuild();
  goto h_16;
  x_15 :
  Cpop();
  h_16 :
  Return();
  w_15 :
  OneNextSon();
  Rpush(j_16);
  goto y_18;
  j_16 :
  AllBuild();
  goto e_11;
  u_15 :
  Ccontinue(k_16);
  TestFunTop(l_16);
  TravInit();
  OneNextSon();
  Rpush(r_16);
  goto y_18;
  r_16 :
  AllBuild();
  goto e_11;
  k_16 :
  Ccontinue(s_16);
  TestFunTop(t_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  AllBuild();
  goto e_11;
  s_16 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a strategy-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_q_4);
  Epopd(0,1);
  Tpop();
  goto u_16;
  e_11 :
  Cpop();
  u_16 :
  Return();
  d_11 :
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_19;
  h_19 :
  TestFunFC(x_16,&&fail,Egetd(0,1));
  Rpush(w_16);
  goto j_19;
  w_16 :
  goto v_16;
  j_19 :
  Return();
  v_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_19;
  l_19 :
  TestFunFC(c_17,&&fail,Egetd(0,1));
  Rpush(z_16);
  goto n_19;
  z_16 :
  goto y_16;
  n_19 :
  Return();
  y_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_5)
  _ST_is_int();
ENDPROC

PROC(_stratego_i_5)
  Rpush(f_17);
  d_20 :
  Cpush(e_18);
  Ccall(_stratego_j_5);
  goto i_17;
  e_18 :
  Ccontinue(j_18);
  TestFunTop(k_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  AllBuild();
  goto i_17;
  j_18 :
  Ccontinue(l_18);
  TestFunTop(m_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_5);
  AllBuild();
  goto i_17;
  l_18 :
  Ccontinue(n_18);
  TestFunTop(p_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_5);
  AllBuild();
  goto i_17;
  n_18 :
  Ccontinue(q_18);
  TestFunTop(r_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  AllBuild();
  goto i_17;
  q_18 :
  Ccontinue(s_18);
  TestFunTop(t_18);
  TravInit();
  OneNextSon();
  Rpush(u_18);
  goto d_20;
  u_18 :
  AllBuild();
  goto i_17;
  s_18 :
  Ccontinue(v_18);
  TestFunTop(w_18);
  TravInit();
  OneNextSon();
  TestFunTop(k_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  AllBuild();
  OneNextSon();
  Rpush(x_18);
  goto d_20;
  x_18 :
  AllBuild();
  goto i_17;
  v_18 :
  Ccontinue(b_19);
  TestFunTop(c_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_5);
  OneNextSon();
  Rpush(d_19);
  e_20 :
  Cpush(f_19);
  Ccall(_stratego_l_4);
  goto e_19;
  f_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(k_19);
  goto d_20;
  k_19 :
  OneNextSon();
  Rpush(o_19);
  goto e_20;
  o_19 :
  AllBuild();
  goto g_19;
  e_19 :
  Cpop();
  g_19 :
  Return();
  d_19 :
  AllBuild();
  goto i_17;
  b_19 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_q_4);
  Epopd(0,1);
  Tpop();
  goto p_19;
  i_17 :
  Cpop();
  p_19 :
  Return();
  f_17 :
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_20;
  l_20 :
  TestFunFC(s_19,&&fail,Egetd(0,1));
  Rpush(r_19);
  goto n_20;
  r_19 :
  goto q_19;
  n_20 :
  Return();
  q_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_5)
  _ST_is_real();
ENDPROC
