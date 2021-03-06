#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,f_10);
VARDECL(AFun,w_9);
VARDECL(AFun,i_9);
VARDECL(AFun,w_8);
VARDECL(AFun,i_8);
VARDECL(AFun,w_7);
VARDECL(AFun,g_7);
VARDECL(AFun,c_7);
VARDECL(AFun,y_0);
VARDECL(AFun,u_0);
VARDECL(AFun,r_0);
VARDECL(AFun,o_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_h_3);
PROCDECL(_stratego_i_3);
PROCDECL(_stratego_j_3);
PROCDECL(_stratego_k_3);
PROCDECL(_stratego_l_3);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);

PROC(_stratego_init_afuns)
  MOVE(f_10,ATmakeAFun("Runtime",1,0));
  MOVE(w_9,ATmakeAFun("Silent",0,0));
  MOVE(i_9,ATmakeAFun("Binary",0,0));
  MOVE(w_8,ATmakeAFun("Output",1,0));
  MOVE(i_8,ATmakeAFun("Input",1,0));
  MOVE(w_7,ATmakeAFun("Program",1,0));
  MOVE(g_7,ATmakeAFun("Help",0,0));
  MOVE(c_7,ATmakeAFun("Undefined",1,0));
  MOVE(y_0,ATmakeAFun("Nil",0,0));
  MOVE(u_0,ATmakeAFun("TNil",0,0));
  MOVE(r_0,ATmakeAFun("A",0,0));
  MOVE(o_0,ATmakeAFun("TCons",2,0));
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
  q_4 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_h_3);
  goto e_0;
  f_0 :
  Ccall(_stratego_i_3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto q_4;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto c_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_2;
  g_2 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto r_4;
  k_0 :
  goto j_0;
  r_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  j_0 :
  Epopd(0,3);
  goto i_0;
  c_0 :
  Cpop();
  i_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(m_0);
  Ccall(_stratego_j_3);
  goto l_0;
  m_0 :
  Ccontinue(n_0);
  Epushd(0,6);
  Ccall(_stratego_o_3);
  Tdupl();
  Ccall(_stratego_q_3);
  Tpop();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  goto i_2;
  i_2 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  Rpush(q_0);
  goto s_4;
  q_0 :
  goto p_0;
  s_4 :
  Tset(App0("B"));
  Return();
  p_0 :
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_q_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto p_2;
  p_2 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_2;
  q_2 :
  TestFunFC(o_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_3;
  x_3 :
  TestFunFC(u_0,&&fail,Egetd(0,6));
  Rpush(t_0);
  goto u_4;
  t_0 :
  goto s_0;
  u_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  s_0 :
  Ccall(_stratego_r_3);
  Ccall(_stratego_u_3);
  Epopd(0,6);
  goto l_0;
  n_0 :
  Ccall(_stratego_v_3);
  goto v_0;
  l_0 :
  Cpop();
  v_0 :
ENDPROC

PROC(_stratego_h_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_4;
  w_4 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  Rpush(x_0);
  goto y_4;
  x_0 :
  goto w_0;
  y_4 :
  Return();
  w_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto m_7;
  m_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_7;
  n_7 :
  TestFunFC(a_0,&&p_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(r_1);
  Rpush(s_1);
  goto f_11;
  s_1 :
  goto q_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto i_11;
  u_1 :
  goto q_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto l_11;
  w_1 :
  goto q_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto o_11;
  y_1 :
  goto q_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto r_11;
  a_2 :
  goto q_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto u_11;
  c_2 :
  goto q_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto y_11;
  e_2 :
  goto q_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(h_2);
  goto c_12;
  h_2 :
  goto q_1;
  f_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto g_12;
  k_2 :
  goto q_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto k_12;
  m_2 :
  goto q_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto o_12;
  o_2 :
  goto q_1;
  n_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto r_12;
  s_2 :
  goto q_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto w_12;
  u_2 :
  goto q_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto c_13;
  w_2 :
  goto q_1;
  v_2 :
  Rpush(y_2);
  goto f_13;
  y_2 :
  goto x_2;
  q_1 :
  Cpop();
  x_2 :
  goto o_1;
  p_1 :
  Cpush(a_3);
  Rpush(b_3);
  goto f_11;
  b_3 :
  goto z_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto i_11;
  d_3 :
  goto z_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto l_11;
  f_3 :
  goto z_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(z_3);
  goto o_11;
  z_3 :
  goto z_2;
  g_3 :
  Ccontinue(d_4);
  Rpush(e_4);
  goto r_11;
  e_4 :
  goto z_2;
  d_4 :
  Ccontinue(n_4);
  Rpush(o_4);
  goto o_12;
  o_4 :
  goto z_2;
  n_4 :
  Ccontinue(p_4);
  Rpush(t_4);
  goto r_12;
  t_4 :
  goto z_2;
  p_4 :
  Ccontinue(v_4);
  Rpush(z_4);
  goto w_12;
  z_4 :
  goto z_2;
  v_4 :
  Ccontinue(a_5);
  Rpush(b_5);
  goto c_13;
  b_5 :
  goto z_2;
  a_5 :
  Rpush(d_5);
  goto f_13;
  d_5 :
  goto c_5;
  z_2 :
  Cpop();
  c_5 :
  goto o_1;
  o_1 :
  goto n_1;
  f_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(f_5);
  goto g_13;
  f_5 :
  goto e_5;
  g_13 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  n_1 :
  goto m_1;
  c_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_5);
  goto d_13;
  h_5 :
  goto g_5;
  d_13 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  w_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(j_5);
  goto a_13;
  j_5 :
  goto i_5;
  a_13 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  r_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(l_5);
  goto u_12;
  l_5 :
  goto k_5;
  u_12 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  o_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(n_5);
  goto p_12;
  n_5 :
  goto m_5;
  p_12 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  k_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(q_5);
  goto l_12;
  q_5 :
  goto o_5;
  l_12 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_1 :
  goto h_1;
  g_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(t_5);
  goto h_12;
  t_5 :
  goto r_5;
  h_12 :
  Return();
  r_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_1 :
  goto g_1;
  c_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_5);
  goto d_12;
  w_5 :
  goto u_5;
  d_12 :
  Return();
  u_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_1 :
  goto f_1;
  y_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_5);
  goto z_11;
  z_5 :
  goto x_5;
  z_11 :
  Return();
  x_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  u_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(c_6);
  goto v_11;
  c_6 :
  goto a_6;
  v_11 :
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
  e_1 :
  goto d_1;
  r_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(f_6);
  goto s_11;
  f_6 :
  goto d_6;
  s_11 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  d_1 :
  goto c_1;
  o_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_6);
  goto p_11;
  h_6 :
  goto g_6;
  p_11 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  l_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_5;
  v_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(k_6);
  goto m_11;
  k_6 :
  goto j_6;
  m_11 :
  Return();
  j_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  i_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(n_6);
  goto j_11;
  n_6 :
  goto l_6;
  j_11 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  f_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_5;
  p_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(p_6);
  goto g_11;
  p_6 :
  goto o_6;
  g_11 :
  Return();
  o_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_3)
  Tdupl();
  r_6 :
  TestFunTop(a_0);
  Cpush(s_6);
  Arg(0);
  Cpush(w_6);
  Ccall(_stratego_k_3);
  goto v_6;
  w_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto j_13;
  j_13 :
  TestFunFC(c_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_7);
  goto n_13;
  a_7 :
  goto z_6;
  n_13 :
  Return();
  z_6 :
  Epopd(0,2);
  goto x_6;
  v_6 :
  Cpop();
  x_6 :
  Tpop();
  Cpop();
  goto t_6;
  s_6 :
  Arg(1);
  Tdrop();
  goto r_6;
  t_6 :
  Tpop();
  Ccall(_stratego_l_3);
ENDPROC

PROC(_stratego_k_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_13;
  p_13 :
  TestFunFC(g_7,&&fail,Egetd(0,1));
  Rpush(f_7);
  goto r_13;
  f_7 :
  goto d_7;
  r_13 :
  Return();
  d_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_3)
  Epushd(0,1);
  Tdupl();
  Rpush(i_7);
  a_14 :
  Cpush(l_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_13;
  t_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_13;
  u_13 :
  TestFunFC(w_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_7);
  goto b_14;
  u_7 :
  goto t_7;
  b_14 :
  Move(0,1,1,3);
  Return();
  t_7 :
  Epopd(1,4);
  goto j_7;
  l_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_7);
  goto a_14;
  y_7 :
  AllBuild();
  goto x_7;
  j_7 :
  Cpop();
  x_7 :
  Return();
  i_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_m_3);
  Tset(MakeInt(1));
  Ccall(_stratego_n_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_n_3)
  _ST_exit();
ENDPROC

PROC(_stratego_o_3)
  Epushd(0,3);
  Tdupl();
  Cpush(b_8);
  Rpush(c_8);
  v_14 :
  Cpush(e_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_14;
  e_14 :
  TestFunFC(i_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_8);
  goto w_14;
  h_8 :
  goto g_8;
  w_14 :
  Move(0,1,1,3);
  Return();
  g_8 :
  Epopd(1,4);
  goto d_8;
  e_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_8);
  goto v_14;
  l_8 :
  AllBuild();
  goto j_8;
  d_8 :
  Cpop();
  j_8 :
  Return();
  c_8 :
  goto z_7;
  b_8 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto m_8;
  z_7 :
  Cpop();
  m_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_p_3);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_p_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_q_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_r_3)
  Epushd(0,1);
  Tdupl();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Cpush(o_8);
  Rpush(q_8);
  a_16 :
  Cpush(s_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_15;
  c_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_15;
  d_15 :
  TestFunFC(w_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_8);
  goto b_16;
  u_8 :
  goto t_8;
  b_16 :
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
  goto a_16;
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
  goto z_8;
  n_8 :
  Cpop();
  z_8 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  Cpush(b_9);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(c_9);
  g_16 :
  Cpush(f_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_15;
  j_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_15;
  k_15 :
  TestFunFC(i_9,&&fail,Egetd(1,2));
  Rpush(h_9);
  goto h_16;
  h_9 :
  goto g_9;
  h_16 :
  Return();
  g_9 :
  Epopd(1,3);
  goto e_9;
  f_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto g_16;
  k_9 :
  AllBuild();
  goto j_9;
  e_9 :
  Cpop();
  j_9 :
  Return();
  c_9 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  goto a_9;
  b_9 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  goto m_9;
  a_9 :
  Cpop();
  m_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_3)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_t_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,2);
  Tdupl();
  Cpush(o_9);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Cpush(p_9);
  Tdupl();
  Rpush(q_9);
  e_17 :
  Cpush(s_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_16;
  j_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_16;
  k_16 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  Rpush(v_9);
  goto f_17;
  v_9 :
  goto u_9;
  f_17 :
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
  goto e_17;
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
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(z_9);
  g_17 :
  Cpush(c_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_16;
  m_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_16;
  n_16 :
  TestFunFC(f_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_10);
  goto h_17;
  e_10 :
  goto d_10;
  h_17 :
  Move(0,2,1,3);
  Return();
  d_10 :
  Epopd(1,4);
  goto a_10;
  c_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_10);
  goto g_17;
  h_10 :
  AllBuild();
  goto g_10;
  a_10 :
  Cpop();
  g_10 :
  Return();
  z_9 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(j_10);
  i_17 :
  Cpush(l_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_16;
  p_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_16;
  q_16 :
  TestFunFC(w_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_10);
  goto j_17;
  o_10 :
  goto m_10;
  j_17 :
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
  goto i_17;
  q_10 :
  AllBuild();
  goto p_10;
  k_10 :
  Cpop();
  p_10 :
  Return();
  j_10 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_m_3);
  goto n_9;
  o_9 :
  goto r_10;
  n_9 :
  Cpop();
  r_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_n_3);
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_3)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_m_3);
  Tset(MakeInt(1));
  Ccall(_stratego_n_3);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_17;
  l_17 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  Rpush(u_10);
  goto n_17;
  u_10 :
  goto t_10;
  n_17 :
  Return();
  t_10 :
  Epopd(0,1);
ENDPROC

DOIT

