#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,k_14);
VARDECL(AFun,g_13);
VARDECL(AFun,a_13);
VARDECL(AFun,b_10);
VARDECL(AFun,s_9);
VARDECL(AFun,b_9);
VARDECL(AFun,o_8);
VARDECL(AFun,s_7);
VARDECL(AFun,e_7);
VARDECL(AFun,w_6);
VARDECL(AFun,s_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(k_14,ATmakeAFun("Not",1,0));
  MOVE(g_13,ATmakeAFun("Or",2,0));
  MOVE(a_13,ATmakeAFun("And",2,0));
  MOVE(b_10,ATmakeAFun("Runtime",1,0));
  MOVE(s_9,ATmakeAFun("Silent",0,0));
  MOVE(b_9,ATmakeAFun("Binary",0,0));
  MOVE(o_8,ATmakeAFun("Output",1,0));
  MOVE(s_7,ATmakeAFun("Input",1,0));
  MOVE(e_7,ATmakeAFun("Program",1,0));
  MOVE(w_6,ATmakeAFun("Help",0,0));
  MOVE(s_6,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_b_5);
ENDPROC

PROC(_stratego_b_5)
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
  u_3 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_c_5);
  goto f_0;
  g_0 :
  Ccall(_stratego_d_5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto u_3;
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
  goto v_3;
  l_0 :
  goto k_0;
  v_3 :
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
  Ccall(_stratego_e_5);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_j_5);
  Tdupl();
  Ccall(_stratego_l_5);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_5);
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_l_5);
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
  goto x_3;
  r_0 :
  goto q_0;
  x_3 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_m_5);
  Ccall(_stratego_p_5);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_q_5);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_4;
  f_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto h_4;
  v_0 :
  goto u_0;
  h_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto z_7;
  z_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_8;
  a_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto s_11;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto v_11;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto y_11;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto b_12;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto e_12;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto h_12;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto l_12;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto p_12;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto t_12;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto x_12;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto b_13;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto e_13;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto h_13;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto k_13;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto n_13;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto s_11;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(e_3);
  goto v_11;
  e_3 :
  goto t_2;
  a_3 :
  Ccontinue(f_3);
  Rpush(i_3);
  goto y_11;
  i_3 :
  goto t_2;
  f_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto b_12;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto e_12;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto b_13;
  t_3 :
  goto t_2;
  s_3 :
  Ccontinue(w_3);
  Rpush(y_3);
  goto e_13;
  y_3 :
  goto t_2;
  w_3 :
  Ccontinue(z_3);
  Rpush(a_4);
  goto h_13;
  a_4 :
  goto t_2;
  z_3 :
  Ccontinue(b_4);
  Rpush(c_4);
  goto k_13;
  c_4 :
  goto t_2;
  b_4 :
  Rpush(e_4);
  goto n_13;
  e_4 :
  goto d_4;
  t_2 :
  Cpop();
  d_4 :
  goto m_1;
  m_1 :
  goto l_1;
  n_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_7;
  x_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(j_4);
  goto o_13;
  j_4 :
  goto i_4;
  o_13 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_7;
  u_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(l_4);
  goto l_13;
  l_4 :
  goto k_4;
  l_13 :
  Return();
  k_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  h_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto i_13;
  n_4 :
  goto m_4;
  i_13 :
  Return();
  m_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  e_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto f_13;
  p_4 :
  goto o_4;
  f_13 :
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
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto c_13;
  r_4 :
  goto q_4;
  c_13 :
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
  x_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto y_12;
  t_4 :
  goto s_4;
  y_12 :
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
  t_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto u_12;
  v_4 :
  goto u_4;
  u_12 :
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
  p_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto q_12;
  x_4 :
  goto w_4;
  q_12 :
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
  l_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto m_12;
  z_4 :
  goto y_4;
  m_12 :
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
  h_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(t_5);
  goto i_12;
  t_5 :
  goto a_5;
  i_12 :
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
  e_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(v_5);
  goto f_12;
  v_5 :
  goto u_5;
  f_12 :
  Return();
  u_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  b_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_6;
  l_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(x_5);
  goto c_12;
  x_5 :
  goto w_5;
  c_12 :
  Return();
  w_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  y_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(z_5);
  goto z_11;
  z_5 :
  goto y_5;
  z_11 :
  Return();
  y_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  v_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_6;
  f_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(b_6);
  goto w_11;
  b_6 :
  goto a_6;
  w_11 :
  Return();
  a_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  s_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(e_6);
  goto t_11;
  e_6 :
  goto d_6;
  t_11 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_5)
  Tdupl();
  g_6 :
  TestFunTop(a_0);
  Cpush(h_6);
  Arg(0);
  Cpush(m_6);
  Ccall(_stratego_f_5);
  goto k_6;
  m_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto r_13;
  r_13 :
  TestFunFC(s_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_6);
  goto v_13;
  q_6 :
  goto p_6;
  v_13 :
  Return();
  p_6 :
  Epopd(0,2);
  goto n_6;
  k_6 :
  Cpop();
  n_6 :
  Tpop();
  Cpop();
  goto j_6;
  h_6 :
  Arg(1);
  Tdrop();
  goto g_6;
  j_6 :
  Tpop();
  Ccall(_stratego_g_5);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_13;
  x_13 :
  TestFunFC(w_6,&&fail,Egetd(0,1));
  Rpush(u_6);
  goto z_13;
  u_6 :
  goto t_6;
  z_13 :
  Return();
  t_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  Tdupl();
  Rpush(x_6);
  i_14 :
  Cpush(a_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_14;
  b_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_14;
  c_14 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_7);
  goto j_14;
  c_7 :
  goto b_7;
  j_14 :
  Move(0,1,1,3);
  Return();
  b_7 :
  Epopd(1,4);
  goto y_6;
  a_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_7);
  goto i_14;
  g_7 :
  AllBuild();
  goto f_7;
  y_6 :
  Cpop();
  f_7 :
  Return();
  x_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_h_5);
  Tset(MakeInt(1));
  Ccall(_stratego_i_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_i_5)
  _ST_exit();
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,3);
  Tdupl();
  Cpush(j_7);
  Rpush(k_7);
  d_15 :
  Cpush(n_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_14;
  l_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_14;
  m_14 :
  TestFunFC(s_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_7);
  goto e_15;
  q_7 :
  goto p_7;
  e_15 :
  Move(0,1,1,3);
  Return();
  p_7 :
  Epopd(1,4);
  goto m_7;
  n_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_7);
  goto d_15;
  v_7 :
  AllBuild();
  goto t_7;
  m_7 :
  Cpop();
  t_7 :
  Return();
  k_7 :
  goto i_7;
  j_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto w_7;
  i_7 :
  Cpop();
  w_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_k_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_k_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_l_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(g_8);
  Rpush(h_8);
  i_16 :
  Cpush(k_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_15;
  k_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_15;
  l_15 :
  TestFunFC(o_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_8);
  goto j_16;
  m_8 :
  goto l_8;
  j_16 :
  Move(0,1,1,3);
  Return();
  l_8 :
  Epopd(1,4);
  goto j_8;
  k_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_8);
  goto i_16;
  q_8 :
  AllBuild();
  goto p_8;
  j_8 :
  Cpop();
  p_8 :
  Return();
  h_8 :
  goto y_7;
  g_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto r_8;
  y_7 :
  Cpop();
  r_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
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
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  Cpush(u_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(v_8);
  o_16 :
  Cpush(y_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_15;
  r_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_15;
  s_15 :
  TestFunFC(b_9,&&fail,Egetd(1,2));
  Rpush(a_9);
  goto p_16;
  a_9 :
  goto z_8;
  p_16 :
  Return();
  z_8 :
  Epopd(1,3);
  goto w_8;
  y_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_9);
  goto o_16;
  e_9 :
  AllBuild();
  goto d_9;
  w_8 :
  Cpop();
  d_9 :
  Return();
  v_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_5);
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  goto t_8;
  u_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_5);
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  goto f_9;
  t_8 :
  Cpop();
  f_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_o_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_p_5)
  Epushd(0,2);
  Tdupl();
  Cpush(h_9);
  Cpush(k_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(l_9);
  Tdupl();
  Rpush(m_9);
  g_18 :
  Cpush(o_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_16;
  r_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_16;
  s_16 :
  TestFunFC(s_9,&&fail,Egetd(1,2));
  Rpush(r_9);
  goto h_18;
  r_9 :
  goto p_9;
  h_18 :
  Return();
  p_9 :
  Epopd(1,3);
  goto n_9;
  o_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_9);
  goto g_18;
  u_9 :
  AllBuild();
  goto t_9;
  n_9 :
  Cpop();
  t_9 :
  Return();
  m_9 :
  Cpop();
  Crestore();
  Cjump();
  l_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(v_9);
  i_18 :
  Cpush(x_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_16;
  u_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_16;
  v_16 :
  TestFunFC(b_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_10);
  goto j_18;
  a_10 :
  goto z_9;
  j_18 :
  Move(0,2,1,3);
  Return();
  z_9 :
  Epopd(1,4);
  goto w_9;
  x_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto i_18;
  d_10 :
  AllBuild();
  goto c_10;
  w_9 :
  Cpop();
  c_10 :
  Return();
  v_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(e_10);
  k_18 :
  Cpush(h_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_16;
  x_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_16;
  y_16 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_10);
  goto l_18;
  j_10 :
  goto i_10;
  l_18 :
  Move(0,1,1,3);
  Return();
  i_10 :
  Epopd(1,4);
  goto f_10;
  h_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_10);
  goto k_18;
  l_10 :
  AllBuild();
  goto k_10;
  f_10 :
  Cpop();
  k_10 :
  Return();
  e_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_h_5);
  goto j_9;
  k_9 :
  goto m_10;
  j_9 :
  Cpop();
  m_10 :
  goto g_9;
  h_9 :
  Ccontinue(n_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(p_10);
  Tdupl();
  Rpush(q_10);
  m_18 :
  Cpush(s_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_17;
  a_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_17;
  b_17 :
  TestFunFC(s_9,&&fail,Egetd(1,2));
  Rpush(u_10);
  goto n_18;
  u_10 :
  goto t_10;
  n_18 :
  Return();
  t_10 :
  Epopd(1,3);
  goto r_10;
  s_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_10);
  goto m_18;
  x_10 :
  AllBuild();
  goto w_10;
  r_10 :
  Cpop();
  w_10 :
  Return();
  q_10 :
  Cpop();
  Crestore();
  Cjump();
  p_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(y_10);
  o_18 :
  Cpush(b_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_17;
  d_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_17;
  e_17 :
  TestFunFC(b_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_11);
  goto p_18;
  d_11 :
  goto c_11;
  p_18 :
  Move(0,2,1,3);
  Return();
  c_11 :
  Epopd(1,4);
  goto z_10;
  b_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_11);
  goto o_18;
  g_11 :
  AllBuild();
  goto e_11;
  z_10 :
  Cpop();
  e_11 :
  Return();
  y_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(h_11);
  q_18 :
  Cpush(j_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_17;
  g_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_17;
  h_17 :
  TestFunFC(e_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_11);
  goto r_18;
  m_11 :
  goto l_11;
  r_18 :
  Move(0,1,1,3);
  Return();
  l_11 :
  Epopd(1,4);
  goto i_11;
  j_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_11);
  goto q_18;
  o_11 :
  AllBuild();
  goto n_11;
  i_11 :
  Cpop();
  n_11 :
  Return();
  h_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_h_5);
  goto g_9;
  n_10 :
  goto q_11;
  g_9 :
  Cpop();
  q_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_i_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_5)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_h_5);
  Tset(MakeInt(1));
  Ccall(_stratego_i_5);
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_18;
  t_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(u_11);
  goto x_18;
  u_11 :
  goto r_11;
  x_18 :
  Return();
  r_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_5)
  Rpush(x_11);
  d_20 :
  AllInit();
  a_12 :
  AllNextSon(&&d_12);
  Rpush(g_12);
  goto d_20;
  g_12 :
  goto a_12;
  d_12 :
  AllBuild();
  Cpush(k_12);
  Epushd(0,7);
  MoveTop(0,4);
  goto g_19;
  g_19 :
  TestFunFC(a_13,&&z_12,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto h_19;
  h_19 :
  TestFunFC(g_13,&&d_13,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_19;
  i_19 :
  TestFunFC(g_13,&&j_13,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Cpush(p_13);
  Rpush(q_13);
  goto e_20;
  q_13 :
  goto m_13;
  p_13 :
  Rpush(a_14);
  goto f_20;
  a_14 :
  goto w_13;
  m_13 :
  Cpop();
  w_13 :
  goto w_12;
  j_13 :
  Rpush(w_12);
  goto f_20;
  d_13 :
  goto j_19;
  j_19 :
  TestFunFC(g_13,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(w_12);
  goto e_20;
  z_12 :
  TestFunFC(k_14,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto k_19;
  k_19 :
  TestFunFC(k_14,&&n_14,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(w_12);
  goto g_20;
  n_14 :
  TestFunFC(a_13,&&o_14,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(w_12);
  goto h_20;
  o_14 :
  TestFunFC(g_13,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(w_12);
  goto i_20;
  w_12 :
  goto v_12;
  i_20 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("And",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  v_12 :
  goto s_12;
  h_20 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("Or",App1("Not",Egetd(0,6)),App1("Not",Egetd(0,7))));
  Return();
  s_12 :
  goto r_12;
  g_20 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  r_12 :
  goto o_12;
  f_20 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Or",App2("And",Egetd(0,5),Egetd(0,2)),App2("And",Egetd(0,5),Egetd(0,3))));
  Return();
  o_12 :
  goto n_12;
  e_20 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,1);
  Tset(App2("Or",App2("And",Egetd(0,6),Egetd(0,1)),App2("And",Egetd(0,7),Egetd(0,1))));
  Return();
  n_12 :
  Rpush(p_14);
  goto d_20;
  p_14 :
  Epopd(0,7);
  goto j_12;
  k_12 :
  goto q_14;
  j_12 :
  Cpop();
  q_14 :
  Return();
  x_11 :
ENDPROC

DOIT

