#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_10);
VARDECL(AFun,h_10);
VARDECL(AFun,t_9);
VARDECL(AFun,h_9);
VARDECL(AFun,t_8);
VARDECL(AFun,h_8);
VARDECL(AFun,s_7);
VARDECL(AFun,n_7);
VARDECL(AFun,z_0);
VARDECL(AFun,v_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
PROCDECL(_stratego_a_4);
PROCDECL(_stratego_b_4);
PROCDECL(_stratego_c_4);
PROCDECL(_stratego_d_4);
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_h_4);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);

PROC(_stratego_init_afuns)
  MOVE(q_10,ATmakeAFun("Runtime",1,0));
  MOVE(h_10,ATmakeAFun("Silent",0,0));
  MOVE(t_9,ATmakeAFun("Binary",0,0));
  MOVE(h_9,ATmakeAFun("Output",1,0));
  MOVE(t_8,ATmakeAFun("Input",1,0));
  MOVE(h_8,ATmakeAFun("Program",1,0));
  MOVE(s_7,ATmakeAFun("Help",0,0));
  MOVE(n_7,ATmakeAFun("Undefined",1,0));
  MOVE(z_0,ATmakeAFun("TNil",0,0));
  MOVE(v_0,ATmakeAFun("Nil",0,0));
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
  y_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_x_3);
  goto f_0;
  g_0 :
  Ccall(_stratego_y_3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto y_4;
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
  goto z_4;
  l_0 :
  goto k_0;
  z_4 :
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
  Ccall(_stratego_z_3);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_e_4);
  Tdupl();
  Ccall(_stratego_g_4);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  MoveTop(1,1);
  goto x_2;
  x_2 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_2;
  y_2 :
  TestInt(1,2,6,&&u_0);
  goto z_2;
  z_2 :
  TestFunFC(v_0,&&fail,Egetd(1,3));
  Rpush(t_0);
  goto a_5;
  u_0 :
  TestInt(1,2,7,&&w_0);
  goto a_3;
  a_3 :
  TestFunFC(v_0,&&fail,Egetd(1,3));
  Rpush(t_0);
  goto b_5;
  w_0 :
  TestInt(1,2,8,&&fail);
  goto b_3;
  b_3 :
  TestFunFC(v_0,&&fail,Egetd(1,3));
  Rpush(t_0);
  goto c_5;
  t_0 :
  goto s_0;
  c_5 :
  Tset(AppN("Eight",ATmakeList(8,App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"))));
  Return();
  s_0 :
  goto r_0;
  b_5 :
  Tset(AppN("Seven",ATmakeList(7,App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"))));
  Return();
  r_0 :
  goto q_0;
  a_5 :
  Tset(App6("Six",App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero"),App0("Zero")));
  Return();
  q_0 :
  Epopd(1,3);
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_g_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto e_3;
  e_3 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_3;
  f_3 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_3;
  g_3 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  Rpush(y_0);
  goto e_5;
  y_0 :
  goto x_0;
  e_5 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  x_0 :
  Ccall(_stratego_h_4);
  Ccall(_stratego_k_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_l_4);
  goto a_1;
  m_0 :
  Cpop();
  a_1 :
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_5;
  g_5 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(c_1);
  goto i_5;
  c_1 :
  goto b_1;
  i_5 :
  Return();
  b_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto w_7;
  w_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_7;
  x_7 :
  TestFunFC(a_0,&&t_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(v_1);
  Rpush(w_1);
  goto p_11;
  w_1 :
  goto u_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto s_11;
  y_1 :
  goto u_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto v_11;
  a_2 :
  goto u_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto y_11;
  c_2 :
  goto u_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto b_12;
  e_2 :
  goto u_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto e_12;
  g_2 :
  goto u_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto i_12;
  i_2 :
  goto u_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto m_12;
  k_2 :
  goto u_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto q_12;
  m_2 :
  goto u_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto u_12;
  o_2 :
  goto u_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto y_12;
  q_2 :
  goto u_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto b_13;
  s_2 :
  goto u_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto e_13;
  u_2 :
  goto u_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto h_13;
  w_2 :
  goto u_1;
  v_2 :
  Rpush(d_3);
  goto k_13;
  d_3 :
  goto c_3;
  u_1 :
  Cpop();
  c_3 :
  goto s_1;
  t_1 :
  Cpush(i_3);
  Rpush(j_3);
  goto p_11;
  j_3 :
  goto h_3;
  i_3 :
  Ccontinue(l_3);
  Rpush(n_3);
  goto s_11;
  n_3 :
  goto h_3;
  l_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto v_11;
  r_3 :
  goto h_3;
  q_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto y_11;
  v_3 :
  goto h_3;
  u_3 :
  Ccontinue(w_3);
  Rpush(v_4);
  goto b_12;
  v_4 :
  goto h_3;
  w_3 :
  Ccontinue(w_4);
  Rpush(x_4);
  goto y_12;
  x_4 :
  goto h_3;
  w_4 :
  Ccontinue(d_5);
  Rpush(f_5);
  goto b_13;
  f_5 :
  goto h_3;
  d_5 :
  Ccontinue(j_5);
  Rpush(k_5);
  goto e_13;
  k_5 :
  goto h_3;
  j_5 :
  Ccontinue(l_5);
  Rpush(m_5);
  goto h_13;
  m_5 :
  goto h_3;
  l_5 :
  Rpush(o_5);
  goto k_13;
  o_5 :
  goto n_5;
  h_3 :
  Cpop();
  n_5 :
  goto s_1;
  s_1 :
  goto r_1;
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_7;
  u_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(q_5);
  goto n_13;
  q_5 :
  goto p_5;
  n_13 :
  Return();
  p_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  r_1 :
  goto q_1;
  h_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(s_5);
  goto i_13;
  s_5 :
  goto r_5;
  i_13 :
  Return();
  r_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  q_1 :
  goto p_1;
  e_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(u_5);
  goto f_13;
  u_5 :
  goto t_5;
  f_13 :
  Return();
  t_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  p_1 :
  goto o_1;
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_5);
  goto c_13;
  w_5 :
  goto v_5;
  c_13 :
  Return();
  v_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  o_1 :
  goto n_1;
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_5);
  goto z_12;
  y_5 :
  goto x_5;
  z_12 :
  Return();
  x_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  n_1 :
  goto m_1;
  u_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_6);
  goto v_12;
  b_6 :
  goto a_6;
  v_12 :
  Return();
  a_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_1 :
  goto l_1;
  q_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_6);
  goto r_12;
  e_6 :
  goto d_6;
  r_12 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_1 :
  goto k_1;
  m_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(h_6);
  goto n_12;
  h_6 :
  goto g_6;
  n_12 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  k_1 :
  goto j_1;
  i_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_6;
  s_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_6);
  goto j_12;
  k_6 :
  goto j_6;
  j_12 :
  Return();
  j_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  j_1 :
  goto i_1;
  e_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(n_6);
  goto f_12;
  n_6 :
  goto m_6;
  f_12 :
  Return();
  m_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_1 :
  goto h_1;
  b_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_6;
  l_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(q_6);
  goto c_12;
  q_6 :
  goto p_6;
  c_12 :
  Return();
  p_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  y_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(t_6);
  goto z_11;
  t_6 :
  goto r_6;
  z_11 :
  Return();
  r_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  g_1 :
  goto f_1;
  v_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_6;
  f_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(v_6);
  goto w_11;
  v_6 :
  goto u_6;
  w_11 :
  Return();
  u_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  f_1 :
  goto e_1;
  s_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(y_6);
  goto t_11;
  y_6 :
  goto x_6;
  t_11 :
  Return();
  x_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  e_1 :
  goto d_1;
  p_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_5;
  z_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(b_7);
  goto q_11;
  b_7 :
  goto z_6;
  q_11 :
  Return();
  z_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  d_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_3)
  Tdupl();
  c_7 :
  TestFunTop(a_0);
  Cpush(d_7);
  Arg(0);
  Cpush(h_7);
  Ccall(_stratego_a_4);
  goto g_7;
  h_7 :
  Epushd(0,2);
  MoveTop(0,1);
  goto t_13;
  t_13 :
  TestFunFC(n_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_7);
  goto x_13;
  m_7 :
  goto k_7;
  x_13 :
  Return();
  k_7 :
  Epopd(0,2);
  goto j_7;
  g_7 :
  Cpop();
  j_7 :
  Tpop();
  Cpop();
  goto f_7;
  d_7 :
  Arg(1);
  Tdrop();
  goto c_7;
  f_7 :
  Tpop();
  Ccall(_stratego_b_4);
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_13;
  z_13 :
  TestFunFC(s_7,&&fail,Egetd(0,1));
  Rpush(q_7);
  goto b_14;
  q_7 :
  goto p_7;
  b_14 :
  Return();
  p_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  Tdupl();
  Rpush(t_7);
  k_14 :
  Cpush(d_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_14;
  e_14 :
  TestFunFC(h_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_8);
  goto l_14;
  g_8 :
  goto e_8;
  l_14 :
  Move(0,1,1,3);
  Return();
  e_8 :
  Epopd(1,4);
  goto v_7;
  d_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_8);
  goto k_14;
  j_8 :
  AllBuild();
  goto i_8;
  v_7 :
  Cpop();
  i_8 :
  Return();
  t_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_c_4);
  Tset(MakeInt(1));
  Ccall(_stratego_d_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_4)
  _ST_exit();
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,3);
  Tdupl();
  Cpush(m_8);
  Rpush(n_8);
  f_15 :
  Cpush(q_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_14;
  n_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_14;
  o_14 :
  TestFunFC(t_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_8);
  goto g_15;
  s_8 :
  goto r_8;
  g_15 :
  Move(0,1,1,3);
  Return();
  r_8 :
  Epopd(1,4);
  goto o_8;
  q_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_8);
  goto f_15;
  w_8 :
  AllBuild();
  goto v_8;
  o_8 :
  Cpop();
  v_8 :
  Return();
  n_8 :
  goto l_8;
  m_8 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto x_8;
  l_8 :
  Cpop();
  x_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(a_9);
  Rpush(b_9);
  k_16 :
  Cpush(d_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_15;
  m_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_15;
  n_15 :
  TestFunFC(h_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_9);
  goto l_16;
  g_9 :
  goto e_9;
  l_16 :
  Move(0,1,1,3);
  Return();
  e_9 :
  Epopd(1,4);
  goto c_9;
  d_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_9);
  goto k_16;
  j_9 :
  AllBuild();
  goto i_9;
  c_9 :
  Cpop();
  i_9 :
  Return();
  b_9 :
  goto y_8;
  a_9 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto k_9;
  y_8 :
  Cpop();
  k_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
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
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  Cpush(m_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(o_9);
  q_16 :
  Cpush(q_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto t_15;
  t_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_15;
  u_15 :
  TestFunFC(t_9,&&fail,Egetd(1,2));
  Rpush(s_9);
  goto r_16;
  s_9 :
  goto r_9;
  r_16 :
  Return();
  r_9 :
  Epopd(1,3);
  goto p_9;
  q_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_9);
  goto q_16;
  w_9 :
  AllBuild();
  goto u_9;
  p_9 :
  Cpop();
  u_9 :
  Return();
  o_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_4);
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  goto l_9;
  m_9 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_4);
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  goto x_9;
  l_9 :
  Cpop();
  x_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_j_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,2);
  Tdupl();
  Cpush(z_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(a_10);
  Tdupl();
  Rpush(b_10);
  o_17 :
  Cpush(e_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto t_16;
  t_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_16;
  u_16 :
  TestFunFC(h_10,&&fail,Egetd(1,2));
  Rpush(g_10);
  goto p_17;
  g_10 :
  goto f_10;
  p_17 :
  Return();
  f_10 :
  Epopd(1,3);
  goto c_10;
  e_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_10);
  goto o_17;
  j_10 :
  AllBuild();
  goto i_10;
  c_10 :
  Cpop();
  i_10 :
  Return();
  b_10 :
  Cpop();
  Crestore();
  Cjump();
  a_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(k_10);
  q_17 :
  Cpush(n_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_16;
  w_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_16;
  x_16 :
  TestFunFC(q_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_10);
  goto r_17;
  p_10 :
  goto o_10;
  r_17 :
  Move(0,2,1,3);
  Return();
  o_10 :
  Epopd(1,4);
  goto m_10;
  n_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_10);
  goto q_17;
  t_10 :
  AllBuild();
  goto r_10;
  m_10 :
  Cpop();
  r_10 :
  Return();
  k_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_10);
  s_17 :
  Cpush(w_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_16;
  z_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_17;
  a_17 :
  TestFunFC(h_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_10);
  goto t_17;
  z_10 :
  goto y_10;
  t_17 :
  Move(0,1,1,3);
  Return();
  y_10 :
  Epopd(1,4);
  goto v_10;
  w_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_11);
  goto s_17;
  b_11 :
  AllBuild();
  goto a_11;
  v_10 :
  Cpop();
  a_11 :
  Return();
  u_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_c_4);
  goto y_9;
  z_9 :
  goto d_11;
  y_9 :
  Cpop();
  d_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_d_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_4);
  Tset(MakeInt(1));
  Ccall(_stratego_d_4);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_17;
  v_17 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  Rpush(f_11);
  goto x_17;
  f_11 :
  goto e_11;
  x_17 :
  Return();
  e_11 :
  Epopd(0,1);
ENDPROC

DOIT

