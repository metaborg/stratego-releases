#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,d_13);
VARDECL(AFun,u_12);
VARDECL(AFun,g_12);
VARDECL(AFun,u_11);
VARDECL(AFun,g_11);
VARDECL(AFun,u_10);
VARDECL(AFun,f_10);
VARDECL(AFun,a_10);
VARDECL(AFun,s_4);
VARDECL(AFun,o_4);
VARDECL(AFun,h_4);
VARDECL(AFun,s_3);
VARDECL(AFun,q_2);
VARDECL(AFun,m_1);
VARDECL(AFun,d_1);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_k_8);
PROCDECL(_stratego_l_8);
PROCDECL(_stratego_m_8);
PROCDECL(_stratego_n_8);
PROCDECL(_stratego_o_8);
PROCDECL(_stratego_p_8);
PROCDECL(_stratego_q_8);
PROCDECL(_stratego_r_8);
PROCDECL(_stratego_s_8);
PROCDECL(_stratego_t_8);
PROCDECL(_stratego_u_8);
PROCDECL(_stratego_v_8);
PROCDECL(_stratego_w_8);
PROCDECL(_stratego_x_8);
PROCDECL(_stratego_y_8);
PROCDECL(_stratego_z_8);
PROCDECL(_stratego_a_9);
PROCDECL(_stratego_b_9);

PROC(_stratego_init_afuns)
  MOVE(d_13,ATmakeAFun("Runtime",1,0));
  MOVE(u_12,ATmakeAFun("Silent",0,0));
  MOVE(g_12,ATmakeAFun("Binary",0,0));
  MOVE(u_11,ATmakeAFun("Output",1,0));
  MOVE(g_11,ATmakeAFun("Input",1,0));
  MOVE(u_10,ATmakeAFun("Program",1,0));
  MOVE(f_10,ATmakeAFun("Help",0,0));
  MOVE(a_10,ATmakeAFun("Undefined",1,0));
  MOVE(s_4,ATmakeAFun("Nil",0,0));
  MOVE(o_4,ATmakeAFun("TNil",0,0));
  MOVE(h_4,ATmakeAFun("RuleCounter",2,0));
  MOVE(s_3,ATmakeAFun("RuleCounter",1,0));
  MOVE(q_2,ATmakeAFun("ICountRule",1,0));
  MOVE(m_1,ATmakeAFun("Block",1,0));
  MOVE(d_1,ATmakeAFun("TCons",2,0));
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
  s_2 :
  Cpush(e_0);
  Cpush(i_0);
  Ccall(_stratego_k_8);
  goto g_0;
  i_0 :
  Ccall(_stratego_l_8);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_0);
  goto s_2;
  l_0 :
  AllBuild();
  goto j_0;
  g_0 :
  Cpop();
  j_0 :
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_0);
  goto t_2;
  r_0 :
  goto n_0;
  t_2 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  n_0 :
  Epopd(0,3);
  goto m_0;
  d_0 :
  Cpop();
  m_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(u_0);
  Ccall(_stratego_m_8);
  goto t_0;
  u_0 :
  Ccontinue(z_0);
  Epushd(0,6);
  Ccall(_stratego_r_8);
  Tdupl();
  Ccall(_stratego_t_8);
  Tpop();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto s_0;
  s_0 :
  TestFunFC(m_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_1);
  goto u_2;
  h_1 :
  goto e_1;
  u_2 :
  Epushd(2,2);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(q_1);
  v_2 :
  Cpush(u_1);
  Ccall(_stratego_k_8);
  goto r_1;
  u_1 :
  Ccontinue(w_1);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto f_0;
  f_0 :
  TestFunFC(q_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(p_2);
  goto w_2;
  p_2 :
  goto a_2;
  w_2 :
  NotNULLd(4,2);
  Tset(App1("RuleCounter",Egetd(4,2)));
  Return();
  a_2 :
  Epopd(4,2);
  OneNextSon();
  Rpush(r_2);
  goto v_2;
  r_2 :
  AllBuild();
  goto r_1;
  w_1 :
  Epushd(4,3);
  MoveTop(4,1);
  goto h_0;
  h_0 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(b_3);
  goto x_2;
  b_3 :
  goto a_3;
  x_2 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(c_3);
  goto v_2;
  c_3 :
  Return();
  a_3 :
  Epopd(4,3);
  goto z_2;
  r_1 :
  Cpop();
  z_2 :
  Return();
  q_1 :
  Ccall(_stratego_a_9);
  Rpush(e_3);
  y_2 :
  Cpush(k_3);
  Ccall(_stratego_k_8);
  goto f_3;
  k_3 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto k_0;
  k_0 :
  TestFunFC(s_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(r_3);
  goto d_3;
  r_3 :
  goto n_3;
  d_3 :
  Epushd(5,1);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Ccall(_stratego_b_9);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(5,1);
  Tset(App2("RuleCounter",Egetd(4,2),Egetd(5,1)));
  Epopd(5,1);
  Return();
  n_3 :
  Epopd(4,2);
  OneNextSon();
  Rpush(t_3);
  goto y_2;
  t_3 :
  AllBuild();
  goto l_3;
  f_3 :
  Cpop();
  l_3 :
  Return();
  e_3 :
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(u_3);
  g_3 :
  Cpush(w_3);
  Ccall(_stratego_k_8);
  goto v_3;
  w_3 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(z_3);
  Epushd(4,2);
  MoveTop(4,1);
  goto q_0;
  q_0 :
  TestFunFC(q_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(b_4);
  goto h_3;
  b_4 :
  goto a_4;
  h_3 :
  Epushd(5,1);
  Tdupl();
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(c_4);
  i_3 :
  Cpush(e_4);
  Epushd(6,5);
  MoveTop(6,1);
  goto o_0;
  o_0 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto p_0;
  p_0 :
  TestFunFC(h_4,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  Rpush(g_4);
  goto j_3;
  g_4 :
  goto f_4;
  j_3 :
  Move(4,2,6,3);
  Move(5,1,6,4);
  Return();
  f_4 :
  Epopd(6,5);
  goto d_4;
  e_4 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_4);
  goto i_3;
  j_4 :
  AllBuild();
  goto i_4;
  d_4 :
  Cpop();
  i_4 :
  Return();
  c_4 :
  Tpop();
  NotNULLd(5,1);
  Tset(App1("ICountRule",Egetd(5,1)));
  Epopd(5,1);
  Return();
  a_4 :
  Epopd(4,2);
  goto y_3;
  z_3 :
  goto k_4;
  y_3 :
  Cpop();
  k_4 :
  OneNextSon();
  Rpush(l_4);
  goto g_3;
  l_4 :
  AllBuild();
  goto x_3;
  v_3 :
  Cpop();
  x_3 :
  Return();
  u_3 :
  MoveTop(3,2);
  Move(2,2,3,2);
  Epopd(3,2);
  Tpop();
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("Program",App1("RuleCounters",Egetd(2,1)),App1("Block",Egetd(2,2))));
  Epopd(2,2);
  Return();
  e_1 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_8);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto v_0;
  v_0 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_0;
  w_0 :
  TestFunFC(d_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_0;
  x_0 :
  TestFunFC(o_4,&&fail,Egetd(0,6));
  Rpush(n_4);
  goto m_3;
  n_4 :
  goto m_4;
  m_3 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  m_4 :
  Ccall(_stratego_u_8);
  Ccall(_stratego_x_8);
  Epopd(0,6);
  goto t_0;
  z_0 :
  Ccall(_stratego_y_8);
  goto p_4;
  t_0 :
  Cpop();
  p_4 :
ENDPROC

PROC(_stratego_k_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_3;
  o_3 :
  TestFunFC(s_4,&&fail,Egetd(0,1));
  Rpush(r_4);
  goto q_3;
  r_4 :
  goto q_4;
  q_3 :
  Return();
  q_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_8)
  Epushd(0,5);
  MoveTop(0,3);
  goto j_10;
  j_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_10;
  k_10 :
  TestFunFC(a_0,&&j_5,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(l_5);
  Rpush(m_5);
  goto c_14;
  m_5 :
  goto k_5;
  l_5 :
  Ccontinue(n_5);
  Rpush(o_5);
  goto f_14;
  o_5 :
  goto k_5;
  n_5 :
  Ccontinue(p_5);
  Rpush(q_5);
  goto k_14;
  q_5 :
  goto k_5;
  p_5 :
  Ccontinue(r_5);
  Rpush(s_5);
  goto q_14;
  s_5 :
  goto k_5;
  r_5 :
  Ccontinue(t_5);
  Rpush(u_5);
  goto t_14;
  u_5 :
  goto k_5;
  t_5 :
  Ccontinue(v_5);
  Rpush(w_5);
  goto w_14;
  w_5 :
  goto k_5;
  v_5 :
  Ccontinue(x_5);
  Rpush(y_5);
  goto a_15;
  y_5 :
  goto k_5;
  x_5 :
  Ccontinue(z_5);
  Rpush(a_6);
  goto e_15;
  a_6 :
  goto k_5;
  z_5 :
  Ccontinue(b_6);
  Rpush(c_6);
  goto i_15;
  c_6 :
  goto k_5;
  b_6 :
  Ccontinue(d_6);
  Rpush(e_6);
  goto m_15;
  e_6 :
  goto k_5;
  d_6 :
  Ccontinue(f_6);
  Rpush(g_6);
  goto q_15;
  g_6 :
  goto k_5;
  f_6 :
  Ccontinue(h_6);
  Rpush(i_6);
  goto t_15;
  i_6 :
  goto k_5;
  h_6 :
  Ccontinue(j_6);
  Rpush(k_6);
  goto w_15;
  k_6 :
  goto k_5;
  j_6 :
  Ccontinue(l_6);
  Rpush(m_6);
  goto z_15;
  m_6 :
  goto k_5;
  l_6 :
  Rpush(o_6);
  goto c_16;
  o_6 :
  goto n_6;
  k_5 :
  Cpop();
  n_6 :
  goto i_5;
  j_5 :
  Cpush(q_6);
  Rpush(r_6);
  goto c_14;
  r_6 :
  goto p_6;
  q_6 :
  Ccontinue(s_6);
  Rpush(t_6);
  goto f_14;
  t_6 :
  goto p_6;
  s_6 :
  Ccontinue(u_6);
  Rpush(v_6);
  goto k_14;
  v_6 :
  goto p_6;
  u_6 :
  Ccontinue(w_6);
  Rpush(x_6);
  goto q_14;
  x_6 :
  goto p_6;
  w_6 :
  Ccontinue(y_6);
  Rpush(z_6);
  goto t_14;
  z_6 :
  goto p_6;
  y_6 :
  Ccontinue(a_7);
  Rpush(b_7);
  goto q_15;
  b_7 :
  goto p_6;
  a_7 :
  Ccontinue(c_7);
  Rpush(d_7);
  goto t_15;
  d_7 :
  goto p_6;
  c_7 :
  Ccontinue(e_7);
  Rpush(f_7);
  goto w_15;
  f_7 :
  goto p_6;
  e_7 :
  Ccontinue(g_7);
  Rpush(h_7);
  goto z_15;
  h_7 :
  goto p_6;
  g_7 :
  Rpush(j_7);
  goto c_16;
  j_7 :
  goto i_7;
  p_6 :
  Cpop();
  i_7 :
  goto i_5;
  i_5 :
  goto h_5;
  c_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_10;
  h_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(l_7);
  goto d_16;
  l_7 :
  goto k_7;
  d_16 :
  Return();
  k_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  h_5 :
  goto g_5;
  z_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_10;
  e_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(o_7);
  goto a_16;
  o_7 :
  goto n_7;
  a_16 :
  Return();
  n_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  g_5 :
  goto f_5;
  w_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"--help",&&fail);
  Rpush(r_7);
  goto x_15;
  r_7 :
  goto q_7;
  x_15 :
  Return();
  q_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  f_5 :
  goto e_5;
  t_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_9;
  y_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(t_7);
  goto u_15;
  t_7 :
  goto s_7;
  u_15 :
  Return();
  s_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  e_5 :
  goto d_5;
  q_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(w_7);
  goto r_15;
  w_7 :
  goto u_7;
  r_15 :
  Return();
  u_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  d_5 :
  goto c_5;
  m_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_9;
  r_9 :
  TestStr(1,1,"--output",&&fail);
  Rpush(z_7);
  goto n_15;
  z_7 :
  goto x_7;
  n_15 :
  Return();
  x_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_5 :
  goto b_5;
  i_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_9;
  n_9 :
  TestStr(1,1,"-o",&&fail);
  Rpush(c_8);
  goto j_15;
  c_8 :
  goto a_8;
  j_15 :
  Return();
  a_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  b_5 :
  goto a_5;
  e_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_9;
  j_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(f_8);
  goto f_15;
  f_8 :
  goto d_8;
  f_15 :
  Return();
  d_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  a_5 :
  goto z_4;
  a_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_9;
  f_9 :
  TestStr(1,1,"-i",&&fail);
  Rpush(h_8);
  goto b_15;
  h_8 :
  goto g_8;
  b_15 :
  Return();
  g_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  z_4 :
  goto y_4;
  w_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(j_8);
  goto x_14;
  j_8 :
  goto i_8;
  x_14 :
  Return();
  i_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_4 :
  goto x_4;
  t_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_8;
  b_8 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_9);
  goto u_14;
  d_9 :
  goto c_9;
  u_14 :
  Return();
  c_9 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  x_4 :
  goto w_4;
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"-v",&&fail);
  Rpush(g_9);
  goto r_14;
  g_9 :
  goto e_9;
  r_14 :
  Return();
  e_9 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  w_4 :
  goto v_4;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(i_9);
  goto l_14;
  i_9 :
  goto h_9;
  l_14 :
  Return();
  h_9 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  v_4 :
  goto u_4;
  f_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(l_9);
  goto g_14;
  l_9 :
  goto k_9;
  g_14 :
  Return();
  k_9 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  u_4 :
  goto t_4;
  c_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"-S",&&fail);
  Rpush(o_9);
  goto d_14;
  o_9 :
  goto m_9;
  d_14 :
  Return();
  m_9 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  t_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_8)
  Tdupl();
  p_9 :
  TestFunTop(a_0);
  Cpush(q_9);
  Arg(0);
  Cpush(u_9);
  Ccall(_stratego_n_8);
  goto t_9;
  u_9 :
  Epushd(0,2);
  MoveTop(0,1);
  goto g_16;
  g_16 :
  TestFunFC(a_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_9);
  goto k_16;
  z_9 :
  goto x_9;
  k_16 :
  Return();
  x_9 :
  Epopd(0,2);
  goto w_9;
  t_9 :
  Cpop();
  w_9 :
  Tpop();
  Cpop();
  goto s_9;
  q_9 :
  Arg(1);
  Tdrop();
  goto p_9;
  s_9 :
  Tpop();
  Ccall(_stratego_o_8);
ENDPROC

PROC(_stratego_n_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_16;
  m_16 :
  TestFunFC(f_10,&&fail,Egetd(0,1));
  Rpush(d_10);
  goto o_16;
  d_10 :
  goto c_10;
  o_16 :
  Return();
  c_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_8)
  Epushd(0,1);
  Tdupl();
  Rpush(g_10);
  x_16 :
  Cpush(q_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_16;
  q_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_16;
  r_16 :
  TestFunFC(u_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_10);
  goto y_16;
  t_10 :
  goto r_10;
  y_16 :
  Move(0,1,1,3);
  Return();
  r_10 :
  Epopd(1,4);
  goto i_10;
  q_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_10);
  goto x_16;
  w_10 :
  AllBuild();
  goto v_10;
  i_10 :
  Cpop();
  v_10 :
  Return();
  g_10 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_p_8);
  Tset(MakeInt(1));
  Ccall(_stratego_q_8);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_8)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_8)
  _ST_exit();
ENDPROC

PROC(_stratego_r_8)
  Epushd(0,3);
  Tdupl();
  Cpush(z_10);
  Rpush(a_11);
  s_17 :
  Cpush(d_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_17;
  a_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_17;
  b_17 :
  TestFunFC(g_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_11);
  goto t_17;
  f_11 :
  goto e_11;
  t_17 :
  Move(0,1,1,3);
  Return();
  e_11 :
  Epopd(1,4);
  goto b_11;
  d_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_11);
  goto s_17;
  j_11 :
  AllBuild();
  goto i_11;
  b_11 :
  Cpop();
  i_11 :
  Return();
  a_11 :
  goto y_10;
  z_10 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto k_11;
  y_10 :
  Cpop();
  k_11 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_s_8);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_8)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_t_8)
  _ST_dtime();
ENDPROC

PROC(_stratego_u_8)
  Epushd(0,1);
  Tdupl();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Cpush(n_11);
  Rpush(o_11);
  x_18 :
  Cpush(q_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_17;
  z_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_18;
  a_18 :
  TestFunFC(u_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_11);
  goto y_18;
  t_11 :
  goto r_11;
  y_18 :
  Move(0,1,1,3);
  Return();
  r_11 :
  Epopd(1,4);
  goto p_11;
  q_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_11);
  goto x_18;
  w_11 :
  AllBuild();
  goto v_11;
  p_11 :
  Cpop();
  v_11 :
  Return();
  o_11 :
  goto l_11;
  n_11 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto x_11;
  l_11 :
  Cpop();
  x_11 :
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  Cpush(z_11);
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Rpush(b_12);
  d_19 :
  Cpush(d_12);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_18;
  g_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_18;
  h_18 :
  TestFunFC(g_12,&&fail,Egetd(1,2));
  Rpush(f_12);
  goto e_19;
  f_12 :
  goto e_12;
  e_19 :
  Return();
  e_12 :
  Epopd(1,3);
  goto c_12;
  d_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_12);
  goto d_19;
  j_12 :
  AllBuild();
  goto h_12;
  c_12 :
  Cpop();
  h_12 :
  Return();
  b_12 :
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_8);
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  goto y_11;
  z_11 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_8);
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  goto k_12;
  y_11 :
  Cpop();
  k_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_8)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_w_8)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_x_8)
  Epushd(0,2);
  Tdupl();
  Cpush(m_12);
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Cpush(n_12);
  Tdupl();
  Rpush(o_12);
  b_20 :
  Cpush(r_12);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_19;
  g_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_19;
  h_19 :
  TestFunFC(u_12,&&fail,Egetd(1,2));
  Rpush(t_12);
  goto c_20;
  t_12 :
  goto s_12;
  c_20 :
  Return();
  s_12 :
  Epopd(1,3);
  goto p_12;
  r_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_12);
  goto b_20;
  w_12 :
  AllBuild();
  goto v_12;
  p_12 :
  Cpop();
  v_12 :
  Return();
  o_12 :
  Cpop();
  Crestore();
  Cjump();
  n_12 :
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Rpush(x_12);
  d_20 :
  Cpush(a_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_19;
  j_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_19;
  k_19 :
  TestFunFC(d_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_13);
  goto e_20;
  c_13 :
  goto b_13;
  e_20 :
  Move(0,2,1,3);
  Return();
  b_13 :
  Epopd(1,4);
  goto z_12;
  a_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_13);
  goto d_20;
  g_13 :
  AllBuild();
  goto e_13;
  z_12 :
  Cpop();
  e_13 :
  Return();
  x_12 :
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Rpush(h_13);
  f_20 :
  Cpush(j_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_19;
  m_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_19;
  n_19 :
  TestFunFC(u_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_13);
  goto g_20;
  m_13 :
  goto l_13;
  g_20 :
  Move(0,1,1,3);
  Return();
  l_13 :
  Epopd(1,4);
  goto i_13;
  j_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_13);
  goto f_20;
  o_13 :
  AllBuild();
  goto n_13;
  i_13 :
  Cpop();
  n_13 :
  Return();
  h_13 :
  OneNextSon();
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_8);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_p_8);
  goto l_12;
  m_12 :
  goto q_13;
  l_12 :
  Cpop();
  q_13 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_q_8);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_8)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_8);
  Tset(MakeInt(1));
  Ccall(_stratego_q_8);
ENDPROC

PROC(_stratego_z_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_20;
  i_20 :
  TestFunFC(o_4,&&fail,Egetd(0,1));
  Rpush(s_13);
  goto k_20;
  s_13 :
  goto r_13;
  k_20 :
  Return();
  r_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_9)
  Rpush(t_13);
  x_20 :
  Cpush(w_13);
  Ccall(_stratego_k_8);
  goto v_13;
  w_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_13);
  goto x_20;
  y_13 :
  AllBuild();
  goto x_13;
  v_13 :
  Cpop();
  x_13 :
  Rpush(a_14);
  y_20 :
  Cpush(e_14);
  Epushd(0,3);
  MoveTop(0,1);
  goto o_20;
  o_20 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_14);
  goto z_20;
  i_14 :
  goto h_14;
  z_20 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_14);
  a_21 :
  Cpush(n_14);
  Epushd(1,3);
  MoveTop(1,1);
  goto n_20;
  n_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_14);
  goto b_21;
  p_14 :
  goto o_14;
  b_21 :
  Move(0,2,1,2);
  Return();
  o_14 :
  Epopd(1,3);
  goto m_14;
  n_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_14);
  goto a_21;
  v_14 :
  AllBuild();
  goto s_14;
  m_14 :
  Cpop();
  s_14 :
  Return();
  j_14 :
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_14);
  goto y_20;
  y_14 :
  Return();
  h_14 :
  Epopd(0,3);
  goto b_14;
  e_14 :
  goto z_14;
  b_14 :
  Cpop();
  z_14 :
  Return();
  a_14 :
  Return();
  t_13 :
ENDPROC

PROC(_stratego_b_9)
  _ST_new();
ENDPROC
