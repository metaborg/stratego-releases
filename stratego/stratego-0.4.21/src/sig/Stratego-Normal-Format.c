#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_19);
VARDECL(AFun,e_19);
VARDECL(AFun,b_19);
VARDECL(AFun,y_18);
VARDECL(AFun,v_18);
VARDECL(AFun,t_18);
VARDECL(AFun,o_18);
VARDECL(AFun,p_17);
VARDECL(AFun,g_17);
VARDECL(AFun,y_16);
VARDECL(AFun,u_16);
VARDECL(AFun,r_16);
VARDECL(AFun,z_15);
VARDECL(AFun,x_15);
VARDECL(AFun,t_15);
VARDECL(AFun,p_15);
VARDECL(AFun,g_15);
VARDECL(AFun,n_14);
VARDECL(AFun,d_14);
VARDECL(AFun,j_13);
VARDECL(AFun,e_13);
VARDECL(AFun,x_12);
VARDECL(AFun,r_12);
VARDECL(AFun,o_12);
VARDECL(AFun,f_12);
VARDECL(AFun,a_12);
VARDECL(AFun,v_11);
VARDECL(AFun,s_11);
VARDECL(AFun,o_11);
VARDECL(AFun,g_11);
VARDECL(AFun,f_10);
VARDECL(AFun,w_9);
VARDECL(AFun,h_9);
VARDECL(AFun,m_8);
VARDECL(AFun,w_7);
VARDECL(AFun,j_7);
VARDECL(AFun,a_7);
VARDECL(AFun,v_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);

PROC(_stratego_init_afuns)
  MOVE(p_19,ATmakeAFun("Wld",0,0));
  MOVE(e_19,ATmakeAFun("Op",2,0));
  MOVE(b_19,ATmakeAFun("As",2,0));
  MOVE(y_18,ATmakeAFun("BuildDefault",1,0));
  MOVE(v_18,ATmakeAFun("Str",1,0));
  MOVE(t_18,ATmakeAFun("Real",1,0));
  MOVE(o_18,ATmakeAFun("Int",1,0));
  MOVE(p_17,ATmakeAFun("Var",1,0));
  MOVE(g_17,ATmakeAFun("Fail",0,0));
  MOVE(y_16,ATmakeAFun("Id",0,0));
  MOVE(u_16,ATmakeAFun("Prim",1,0));
  MOVE(r_16,ATmakeAFun("Where",1,0));
  MOVE(z_15,ATmakeAFun("Scope",2,0));
  MOVE(x_15,ATmakeAFun("Build",1,0));
  MOVE(t_15,ATmakeAFun("Match",1,0));
  MOVE(p_15,ATmakeAFun("Thread",1,0));
  MOVE(g_15,ATmakeAFun("All",1,0));
  MOVE(n_14,ATmakeAFun("Some",1,0));
  MOVE(d_14,ATmakeAFun("One",1,0));
  MOVE(j_13,ATmakeAFun("Cong",2,0));
  MOVE(e_13,ATmakeAFun("Path",2,0));
  MOVE(x_12,ATmakeAFun("Rec",2,0));
  MOVE(r_12,ATmakeAFun("SVar",1,0));
  MOVE(o_12,ATmakeAFun("Call",2,0));
  MOVE(f_12,ATmakeAFun("LChoice",2,0));
  MOVE(a_12,ATmakeAFun("Choice",2,0));
  MOVE(v_11,ATmakeAFun("Seq",2,0));
  MOVE(s_11,ATmakeAFun("Test",1,0));
  MOVE(o_11,ATmakeAFun("Not",1,0));
  MOVE(g_11,ATmakeAFun("SDef",3,0));
  MOVE(f_10,ATmakeAFun("Runtime",1,0));
  MOVE(w_9,ATmakeAFun("Silent",0,0));
  MOVE(h_9,ATmakeAFun("Binary",0,0));
  MOVE(m_8,ATmakeAFun("Output",1,0));
  MOVE(w_7,ATmakeAFun("Input",1,0));
  MOVE(j_7,ATmakeAFun("Program",1,0));
  MOVE(a_7,ATmakeAFun("Help",0,0));
  MOVE(v_6,ATmakeAFun("Undefined",1,0));
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
  k_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_z_4);
  goto f_0;
  g_0 :
  Ccall(_stratego_a_5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto k_4;
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
  goto q_4;
  l_0 :
  goto k_0;
  q_4 :
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
  Ccall(_stratego_b_5);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_g_5);
  Tdupl();
  Ccall(_stratego_i_5);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_5);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_i_5);
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
  goto t_4;
  r_0 :
  goto q_0;
  t_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_j_5);
  Ccall(_stratego_m_5);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_n_5);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_6;
  a_6 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto c_6;
  v_0 :
  goto u_0;
  c_6 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto q_8;
  q_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_8;
  r_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto j_12;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto m_12;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto p_12;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto s_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto v_12;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto y_12;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto c_13;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto g_13;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto k_13;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto o_13;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto s_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto v_13;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto y_13;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto b_14;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto e_14;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto j_12;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto m_12;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto p_12;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto s_12;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto v_12;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto s_13;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(t_3);
  goto v_13;
  t_3 :
  goto t_2;
  q_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto y_13;
  v_3 :
  goto t_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto b_14;
  x_3 :
  goto t_2;
  w_3 :
  Rpush(b_4);
  goto e_14;
  b_4 :
  goto a_4;
  t_2 :
  Cpop();
  a_4 :
  goto m_1;
  m_1 :
  goto l_1;
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_8;
  o_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_4);
  goto f_14;
  d_4 :
  goto c_4;
  f_14 :
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
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto c_14;
  f_4 :
  goto e_4;
  c_14 :
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
  y_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_8;
  i_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(h_4);
  goto z_13;
  h_4 :
  goto g_4;
  z_13 :
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
  v_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_8;
  f_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(j_4);
  goto w_13;
  j_4 :
  goto i_4;
  w_13 :
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
  s_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_4);
  goto t_13;
  m_4 :
  goto l_4;
  t_13 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  o_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_4);
  goto p_13;
  o_4 :
  goto n_4;
  p_13 :
  Return();
  n_4 :
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
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_7;
  u_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(r_4);
  goto l_13;
  r_4 :
  goto p_4;
  l_13 :
  Return();
  p_4 :
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
  g_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(u_4);
  goto h_13;
  u_4 :
  goto s_4;
  h_13 :
  Return();
  s_4 :
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
  c_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(w_4);
  goto d_13;
  w_4 :
  goto v_4;
  d_13 :
  Return();
  v_4 :
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
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"@version",&&fail);
  Rpush(y_4);
  goto z_12;
  y_4 :
  goto x_4;
  z_12 :
  Return();
  x_4 :
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
  v_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_6);
  goto w_12;
  d_6 :
  goto z_5;
  w_12 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_6);
  goto t_12;
  f_6 :
  goto e_6;
  t_12 :
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
  p_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_6);
  goto q_12;
  h_6 :
  goto g_6;
  q_12 :
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
  m_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_6);
  goto n_12;
  j_6 :
  goto i_6;
  n_12 :
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
  j_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_6;
  t_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_6);
  goto k_12;
  l_6 :
  goto k_6;
  k_12 :
  Return();
  k_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_5)
  Tdupl();
  m_6 :
  TestFunTop(a_0);
  Cpush(n_6);
  Arg(0);
  Cpush(q_6);
  Ccall(_stratego_c_5);
  goto p_6;
  q_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto i_14;
  i_14 :
  TestFunFC(v_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(u_6);
  goto m_14;
  u_6 :
  goto s_6;
  m_14 :
  Return();
  s_6 :
  Epopd(0,2);
  goto r_6;
  p_6 :
  Cpop();
  r_6 :
  Tpop();
  Cpop();
  goto o_6;
  n_6 :
  Arg(1);
  Tdrop();
  goto m_6;
  o_6 :
  Tpop();
  Ccall(_stratego_d_5);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_14;
  o_14 :
  TestFunFC(a_7,&&fail,Egetd(0,1));
  Rpush(y_6);
  goto q_14;
  y_6 :
  goto x_6;
  q_14 :
  Return();
  x_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  Tdupl();
  Rpush(b_7);
  z_14 :
  Cpush(e_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_14;
  s_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_14;
  t_14 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto a_15;
  h_7 :
  goto g_7;
  a_15 :
  Move(0,1,1,3);
  Return();
  g_7 :
  Epopd(1,4);
  goto d_7;
  e_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_7);
  goto z_14;
  l_7 :
  AllBuild();
  goto k_7;
  d_7 :
  Cpop();
  k_7 :
  Return();
  b_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_e_5);
  Tset(MakeInt(1));
  Ccall(_stratego_f_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_5)
  _ST_exit();
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,3);
  Tdupl();
  Cpush(o_7);
  Rpush(p_7);
  u_15 :
  Cpush(s_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_15;
  c_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_15;
  d_15 :
  TestFunFC(w_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_7);
  goto v_15;
  v_7 :
  goto t_7;
  v_15 :
  Move(0,1,1,3);
  Return();
  t_7 :
  Epopd(1,4);
  goto r_7;
  s_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_7);
  goto u_15;
  z_7 :
  AllBuild();
  goto x_7;
  r_7 :
  Cpop();
  x_7 :
  Return();
  p_7 :
  goto n_7;
  o_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto a_8;
  n_7 :
  Cpop();
  a_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_h_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(d_8);
  Rpush(e_8);
  e_17 :
  Cpush(h_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_16;
  b_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_16;
  c_16 :
  TestFunFC(m_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_8);
  goto f_17;
  k_8 :
  goto j_8;
  f_17 :
  Move(0,1,1,3);
  Return();
  j_8 :
  Epopd(1,4);
  goto g_8;
  h_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_8);
  goto e_17;
  p_8 :
  AllBuild();
  goto n_8;
  g_8 :
  Cpop();
  n_8 :
  Return();
  e_8 :
  goto b_8;
  d_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto x_8;
  b_8 :
  Cpop();
  x_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
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
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  Cpush(a_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_9);
  k_17 :
  Cpush(d_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto i_16;
  i_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_16;
  j_16 :
  TestFunFC(h_9,&&fail,Egetd(1,2));
  Rpush(g_9);
  goto l_17;
  g_9 :
  goto f_9;
  l_17 :
  Return();
  f_9 :
  Epopd(1,3);
  goto c_9;
  d_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto k_17;
  k_9 :
  AllBuild();
  goto i_9;
  c_9 :
  Cpop();
  i_9 :
  Return();
  b_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_5);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  goto y_8;
  a_9 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_5);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  goto l_9;
  y_8 :
  Cpop();
  l_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_l_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,2);
  Tdupl();
  Cpush(n_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(p_9);
  Tdupl();
  Rpush(q_9);
  i_18 :
  Cpush(s_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto n_17;
  n_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_17;
  o_17 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  Rpush(v_9);
  goto j_18;
  v_9 :
  goto u_9;
  j_18 :
  Return();
  u_9 :
  Epopd(1,3);
  goto r_9;
  s_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto i_18;
  y_9 :
  AllBuild();
  goto x_9;
  r_9 :
  Cpop();
  x_9 :
  Return();
  q_9 :
  Cpop();
  Crestore();
  Cjump();
  p_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(a_10);
  k_18 :
  Cpush(c_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_17;
  q_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_17;
  r_17 :
  TestFunFC(f_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_10);
  goto l_18;
  e_10 :
  goto d_10;
  l_18 :
  Move(0,2,1,3);
  Return();
  d_10 :
  Epopd(1,4);
  goto b_10;
  c_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_10);
  goto k_18;
  i_10 :
  AllBuild();
  goto g_10;
  b_10 :
  Cpop();
  g_10 :
  Return();
  a_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(j_10);
  m_18 :
  Cpush(l_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_10);
  goto n_18;
  n_10 :
  goto m_10;
  n_18 :
  Move(0,1,1,3);
  Return();
  m_10 :
  Epopd(1,4);
  goto k_10;
  l_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto m_18;
  q_10 :
  AllBuild();
  goto o_10;
  k_10 :
  Cpop();
  o_10 :
  Return();
  j_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_e_5);
  goto m_9;
  n_9 :
  goto r_10;
  m_9 :
  Cpop();
  r_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_f_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_5)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_e_5);
  Tset(MakeInt(1));
  Ccall(_stratego_f_5);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_18;
  p_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(t_10);
  goto r_18;
  t_10 :
  goto s_10;
  r_18 :
  Return();
  s_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_5)
  Cpush(v_10);
  Rpush(w_10);
  h_19 :
  Cpush(z_10);
  Ccall(_stratego_z_4);
  goto y_10;
  z_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_5);
  OneNextSon();
  Rpush(b_11);
  goto h_19;
  b_11 :
  AllBuild();
  goto a_11;
  y_10 :
  Cpop();
  a_11 :
  Return();
  w_10 :
  goto u_10;
  v_10 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a stratego-specification: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_5);
  Epopd(0,1);
  Tpop();
  goto c_11;
  u_10 :
  Cpop();
  c_11 :
ENDPROC

PROC(_stratego_q_5)
  Cpush(e_11);
  TestFunTop(g_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Ccall(_stratego_z_4);
  OneNextSon();
  Ccall(_stratego_s_5);
  AllBuild();
  goto d_11;
  e_11 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a strategy-definition: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_5);
  Epopd(0,1);
  Tpop();
  goto h_11;
  d_11 :
  Cpop();
  h_11 :
ENDPROC

PROC(_stratego_r_5)
  _ST_is_string();
ENDPROC

PROC(_stratego_s_5)
  Rpush(i_11);
  w_20 :
  Cpush(k_11);
  Ccall(_stratego_t_5);
  goto j_11;
  k_11 :
  Ccontinue(l_11);
  Ccall(_stratego_u_5);
  goto j_11;
  l_11 :
  Ccontinue(n_11);
  TestFunTop(o_11);
  TravInit();
  OneNextSon();
  Rpush(p_11);
  goto w_20;
  p_11 :
  AllBuild();
  goto j_11;
  n_11 :
  Ccontinue(q_11);
  TestFunTop(s_11);
  TravInit();
  OneNextSon();
  Rpush(t_11);
  goto w_20;
  t_11 :
  AllBuild();
  goto j_11;
  q_11 :
  Ccontinue(u_11);
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  Rpush(x_11);
  goto w_20;
  x_11 :
  OneNextSon();
  Rpush(y_11);
  goto w_20;
  y_11 :
  AllBuild();
  goto j_11;
  u_11 :
  Ccontinue(z_11);
  TestFunTop(a_12);
  TravInit();
  OneNextSon();
  Rpush(c_12);
  goto w_20;
  c_12 :
  OneNextSon();
  Rpush(d_12);
  goto w_20;
  d_12 :
  AllBuild();
  goto j_11;
  z_11 :
  Ccontinue(e_12);
  TestFunTop(f_12);
  TravInit();
  OneNextSon();
  Rpush(h_12);
  goto w_20;
  h_12 :
  OneNextSon();
  Rpush(i_12);
  goto w_20;
  i_12 :
  AllBuild();
  goto j_11;
  e_12 :
  Ccontinue(l_12);
  TestFunTop(o_12);
  TravInit();
  OneNextSon();
  TestFunTop(r_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  goto j_11;
  l_12 :
  Ccontinue(u_12);
  TestFunTop(x_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(a_13);
  goto w_20;
  a_13 :
  AllBuild();
  goto j_11;
  u_12 :
  Ccontinue(b_13);
  TestFunTop(e_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  OneNextSon();
  Rpush(f_13);
  goto w_20;
  f_13 :
  AllBuild();
  goto j_11;
  b_13 :
  Ccontinue(i_13);
  TestFunTop(j_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(m_13);
  x_20 :
  Cpush(q_13);
  Ccall(_stratego_z_4);
  goto n_13;
  q_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(u_13);
  goto w_20;
  u_13 :
  OneNextSon();
  Rpush(x_13);
  goto x_20;
  x_13 :
  AllBuild();
  goto r_13;
  n_13 :
  Cpop();
  r_13 :
  Return();
  m_13 :
  AllBuild();
  goto j_11;
  i_13 :
  Ccontinue(a_14);
  TestFunTop(d_14);
  TravInit();
  OneNextSon();
  Rpush(g_14);
  goto w_20;
  g_14 :
  AllBuild();
  goto j_11;
  a_14 :
  Ccontinue(h_14);
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Rpush(r_14);
  goto w_20;
  r_14 :
  AllBuild();
  goto j_11;
  h_14 :
  Ccontinue(b_15);
  TestFunTop(n_14);
  TravInit();
  OneNextSon();
  Rpush(e_15);
  goto w_20;
  e_15 :
  AllBuild();
  goto j_11;
  b_15 :
  Ccontinue(f_15);
  TestFunTop(g_15);
  TravInit();
  OneNextSon();
  Rpush(h_15);
  goto w_20;
  h_15 :
  AllBuild();
  goto j_11;
  f_15 :
  Ccontinue(n_15);
  TestFunTop(p_15);
  TravInit();
  OneNextSon();
  Rpush(q_15);
  goto w_20;
  q_15 :
  AllBuild();
  goto j_11;
  n_15 :
  Ccontinue(r_15);
  TestFunTop(t_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto j_11;
  r_15 :
  Ccontinue(w_15);
  TestFunTop(x_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_5);
  AllBuild();
  goto j_11;
  w_15 :
  Ccontinue(y_15);
  TestFunTop(z_15);
  TravInit();
  OneNextSon();
  Rpush(a_16);
  y_20 :
  Cpush(e_16);
  Ccall(_stratego_z_4);
  goto d_16;
  e_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(g_16);
  goto y_20;
  g_16 :
  AllBuild();
  goto f_16;
  d_16 :
  Cpop();
  f_16 :
  Return();
  a_16 :
  OneNextSon();
  Rpush(h_16);
  goto w_20;
  h_16 :
  AllBuild();
  goto j_11;
  y_15 :
  Ccontinue(p_16);
  TestFunTop(r_16);
  TravInit();
  OneNextSon();
  Rpush(s_16);
  goto w_20;
  s_16 :
  AllBuild();
  goto j_11;
  p_16 :
  Ccontinue(t_16);
  TestFunTop(u_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  goto j_11;
  t_16 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a strategy-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_5);
  Epopd(0,1);
  Tpop();
  goto v_16;
  j_11 :
  Cpop();
  v_16 :
  Return();
  i_11 :
ENDPROC

PROC(_stratego_t_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_21;
  f_21 :
  TestFunFC(y_16,&&fail,Egetd(0,1));
  Rpush(x_16);
  goto h_21;
  x_16 :
  goto w_16;
  h_21 :
  Return();
  w_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_21;
  j_21 :
  TestFunFC(g_17,&&fail,Egetd(0,1));
  Rpush(a_17);
  goto l_21;
  a_17 :
  goto z_16;
  l_21 :
  Return();
  z_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_5)
  _ST_is_int();
ENDPROC

PROC(_stratego_w_5)
  Rpush(h_17);
  b_22 :
  Cpush(j_17);
  Ccall(_stratego_x_5);
  goto i_17;
  j_17 :
  Ccontinue(m_17);
  TestFunTop(p_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  goto i_17;
  m_17 :
  Ccontinue(s_17);
  TestFunTop(o_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  goto i_17;
  s_17 :
  Ccontinue(s_18);
  TestFunTop(t_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_5);
  AllBuild();
  goto i_17;
  s_18 :
  Ccontinue(u_18);
  TestFunTop(v_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  goto i_17;
  u_18 :
  Ccontinue(w_18);
  TestFunTop(y_18);
  TravInit();
  OneNextSon();
  Rpush(z_18);
  goto b_22;
  z_18 :
  AllBuild();
  goto i_17;
  w_18 :
  Ccontinue(a_19);
  TestFunTop(b_19);
  TravInit();
  OneNextSon();
  TestFunTop(p_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  OneNextSon();
  Rpush(c_19);
  goto b_22;
  c_19 :
  AllBuild();
  goto i_17;
  a_19 :
  Ccontinue(d_19);
  TestFunTop(e_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(f_19);
  c_22 :
  Cpush(i_19);
  Ccall(_stratego_z_4);
  goto g_19;
  i_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(k_19);
  goto b_22;
  k_19 :
  OneNextSon();
  Rpush(l_19);
  goto c_22;
  l_19 :
  AllBuild();
  goto j_19;
  g_19 :
  Cpop();
  j_19 :
  Return();
  f_19 :
  AllBuild();
  goto i_17;
  d_19 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not a term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_5);
  Epopd(0,1);
  Tpop();
  goto m_19;
  i_17 :
  Cpop();
  m_19 :
  Return();
  h_17 :
ENDPROC

PROC(_stratego_x_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_22;
  j_22 :
  TestFunFC(p_19,&&fail,Egetd(0,1));
  Rpush(o_19);
  goto l_22;
  o_19 :
  goto n_19;
  l_22 :
  Return();
  n_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_5)
  _ST_is_real();
ENDPROC

DOIT

