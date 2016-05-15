#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,n_16);
VARDECL(AFun,a_16);
VARDECL(AFun,l_12);
VARDECL(AFun,d_11);
VARDECL(AFun,o_10);
VARDECL(AFun,b_10);
VARDECL(AFun,p_9);
VARDECL(AFun,d_9);
VARDECL(AFun,w_8);
VARDECL(AFun,t_8);
VARDECL(AFun,v_0);
VARDECL(AFun,r_0);
VARDECL(AFun,o_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
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
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);

PROC(_stratego_init_afuns)
  MOVE(n_16,ATmakeAFun("Plus",2,0));
  MOVE(a_16,ATmakeAFun("Fib",1,0));
  MOVE(l_12,ATmakeAFun("Runtime",1,0));
  MOVE(d_11,ATmakeAFun("Silent",0,0));
  MOVE(o_10,ATmakeAFun("Binary",0,0));
  MOVE(b_10,ATmakeAFun("Output",1,0));
  MOVE(p_9,ATmakeAFun("Input",1,0));
  MOVE(d_9,ATmakeAFun("Program",1,0));
  MOVE(w_8,ATmakeAFun("Help",0,0));
  MOVE(t_8,ATmakeAFun("Undefined",1,0));
  MOVE(v_0,ATmakeAFun("Nil",0,0));
  MOVE(r_0,ATmakeAFun("TNil",0,0));
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
  z_3 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_i_4);
  goto e_0;
  f_0 :
  Ccall(_stratego_j_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto z_3;
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
  goto p_2;
  p_2 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto o_2;
  k_0 :
  goto j_0;
  o_2 :
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
  Ccall(_stratego_k_4);
  goto l_0;
  m_0 :
  Ccontinue(n_0);
  Epushd(0,6);
  Ccall(_stratego_p_4);
  Tdupl();
  Ccall(_stratego_r_4);
  Tpop();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_r_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto s_2;
  s_2 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(o_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  Rpush(q_0);
  goto r_2;
  q_0 :
  goto p_0;
  r_2 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  p_0 :
  Ccall(_stratego_s_4);
  Ccall(_stratego_v_4);
  Epopd(0,6);
  goto l_0;
  n_0 :
  Ccall(_stratego_w_4);
  goto s_0;
  l_0 :
  Cpop();
  s_0 :
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_4;
  b_4 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(u_0);
  goto a_4;
  u_0 :
  goto t_0;
  a_4 :
  Return();
  t_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto p_7;
  p_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_7;
  q_7 :
  TestFunFC(a_0,&&m_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(o_1);
  Rpush(p_1);
  goto y_4;
  p_1 :
  goto n_1;
  o_1 :
  Ccontinue(q_1);
  Rpush(r_1);
  goto d_5;
  r_1 :
  goto n_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto e_5;
  t_1 :
  goto n_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto f_5;
  v_1 :
  goto n_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto g_5;
  x_1 :
  goto n_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto h_5;
  z_1 :
  goto n_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto i_5;
  b_2 :
  goto n_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto j_5;
  d_2 :
  goto n_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto k_5;
  f_2 :
  goto n_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto l_5;
  h_2 :
  goto n_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto m_5;
  j_2 :
  goto n_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto n_5;
  l_2 :
  goto n_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto o_5;
  n_2 :
  goto n_1;
  m_2 :
  Ccontinue(q_2);
  Rpush(t_2);
  goto p_5;
  t_2 :
  goto n_1;
  q_2 :
  Rpush(v_2);
  goto q_5;
  v_2 :
  goto u_2;
  n_1 :
  Cpop();
  u_2 :
  goto l_1;
  m_1 :
  Cpush(z_2);
  Rpush(a_3);
  goto y_4;
  a_3 :
  goto w_2;
  z_2 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto d_5;
  d_3 :
  goto w_2;
  c_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto e_5;
  i_3 :
  goto w_2;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto f_5;
  k_3 :
  goto w_2;
  j_3 :
  Ccontinue(l_3);
  Rpush(n_3);
  goto g_5;
  n_3 :
  goto w_2;
  l_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto m_5;
  v_3 :
  goto w_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto n_5;
  x_3 :
  goto w_2;
  w_3 :
  Ccontinue(y_3);
  Rpush(d_4);
  goto o_5;
  d_4 :
  goto w_2;
  y_3 :
  Ccontinue(e_4);
  Rpush(f_4);
  goto p_5;
  f_4 :
  goto w_2;
  e_4 :
  Rpush(h_4);
  goto q_5;
  h_4 :
  goto g_4;
  w_2 :
  Cpop();
  g_4 :
  goto l_1;
  l_1 :
  goto k_1;
  q_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_7;
  n_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(w_5);
  goto m_7;
  w_5 :
  goto t_5;
  m_7 :
  Return();
  t_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  p_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(c_6);
  goto j_7;
  c_6 :
  goto z_5;
  j_7 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  o_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_6);
  goto g_7;
  i_6 :
  goto f_6;
  g_7 :
  Return();
  f_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  n_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(m_6);
  goto d_7;
  m_6 :
  goto j_6;
  d_7 :
  Return();
  j_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  m_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(q_6);
  goto a_7;
  q_6 :
  goto n_6;
  a_7 :
  Return();
  n_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  g_1 :
  goto f_1;
  l_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(u_6);
  goto w_6;
  u_6 :
  goto r_6;
  w_6 :
  Return();
  r_6 :
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
  k_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_6;
  t_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(y_6);
  goto s_6;
  y_6 :
  goto v_6;
  s_6 :
  Return();
  v_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_1 :
  goto d_1;
  j_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_6;
  p_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(c_7);
  goto o_6;
  c_7 :
  goto z_6;
  o_6 :
  Return();
  z_6 :
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
  i_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_6;
  l_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(i_7);
  goto k_6;
  i_7 :
  goto f_7;
  k_6 :
  Return();
  f_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_1 :
  goto b_1;
  h_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_6;
  h_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(o_7);
  goto g_6;
  o_7 :
  goto l_7;
  g_6 :
  Return();
  l_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  b_1 :
  goto a_1;
  g_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(x_7);
  goto d_6;
  x_7 :
  goto w_7;
  d_6 :
  Return();
  w_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  f_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_8);
  goto a_6;
  a_8 :
  goto z_7;
  a_6 :
  Return();
  z_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  e_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(c_8);
  goto x_5;
  c_8 :
  goto b_8;
  x_5 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  d_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_5;
  v_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(f_8);
  goto u_5;
  f_8 :
  goto e_8;
  u_5 :
  Return();
  e_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  goto w_0;
  y_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(h_8);
  goto r_5;
  h_8 :
  goto g_8;
  r_5 :
  Return();
  g_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  w_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_4)
  Tdupl();
  j_8 :
  TestFunTop(a_0);
  Cpush(k_8);
  Arg(0);
  Cpush(o_8);
  Ccall(_stratego_l_4);
  goto m_8;
  o_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto j_11;
  j_11 :
  TestFunFC(t_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_8);
  goto i_11;
  r_8 :
  goto q_8;
  i_11 :
  Return();
  q_8 :
  Epopd(0,2);
  goto p_8;
  m_8 :
  Cpop();
  p_8 :
  Tpop();
  Cpop();
  goto l_8;
  k_8 :
  Arg(1);
  Tdrop();
  goto j_8;
  l_8 :
  Tpop();
  Ccall(_stratego_m_4);
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_11;
  o_11 :
  TestFunFC(w_8,&&fail,Egetd(0,1));
  Rpush(v_8);
  goto n_11;
  v_8 :
  goto u_8;
  n_11 :
  Return();
  u_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  Tdupl();
  Rpush(x_8);
  y_11 :
  Cpush(a_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_11;
  r_11 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_11;
  s_11 :
  TestFunFC(d_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_9);
  goto q_11;
  c_9 :
  goto b_9;
  q_11 :
  Move(0,1,1,3);
  Return();
  b_9 :
  Epopd(1,4);
  goto z_8;
  a_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto y_11;
  f_9 :
  AllBuild();
  goto e_9;
  z_8 :
  Cpop();
  e_9 :
  Return();
  x_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_n_4);
  Tset(MakeInt(1));
  Ccall(_stratego_o_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_o_4)
  _ST_exit();
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,3);
  Tdupl();
  Cpush(i_9);
  Rpush(j_9);
  s_12 :
  Cpush(l_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_12;
  a_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_12;
  b_12 :
  TestFunFC(p_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_9);
  goto z_11;
  n_9 :
  goto m_9;
  z_11 :
  Move(0,1,1,3);
  Return();
  m_9 :
  Epopd(1,4);
  goto k_9;
  l_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_9);
  goto s_12;
  r_9 :
  AllBuild();
  goto q_9;
  k_9 :
  Cpop();
  q_9 :
  Return();
  j_9 :
  goto h_9;
  i_9 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto s_9;
  h_9 :
  Cpop();
  s_9 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_q_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_r_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Cpush(u_9);
  Rpush(v_9);
  x_13 :
  Cpush(y_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_12;
  u_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_12;
  v_12 :
  TestFunFC(b_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_10);
  goto t_12;
  a_10 :
  goto z_9;
  t_12 :
  Move(0,1,1,3);
  Return();
  z_9 :
  Epopd(1,4);
  goto x_9;
  y_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto x_13;
  d_10 :
  AllBuild();
  goto c_10;
  x_9 :
  Cpop();
  c_10 :
  Return();
  v_9 :
  goto t_9;
  u_9 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto f_10;
  t_9 :
  Cpop();
  f_10 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
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
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  Cpush(h_10);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(i_10);
  y_13 :
  Cpush(k_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_13;
  b_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_13;
  c_13 :
  TestFunFC(o_10,&&fail,Egetd(1,2));
  Rpush(n_10);
  goto a_13;
  n_10 :
  goto m_10;
  a_13 :
  Return();
  m_10 :
  Epopd(1,3);
  goto j_10;
  k_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_10);
  goto y_13;
  r_10 :
  AllBuild();
  goto p_10;
  j_10 :
  Cpop();
  p_10 :
  Return();
  i_10 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  goto g_10;
  h_10 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  goto s_10;
  g_10 :
  Cpop();
  s_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_u_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,2);
  Tdupl();
  Cpush(u_10);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Cpush(w_10);
  Tdupl();
  Rpush(x_10);
  v_14 :
  Cpush(z_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_14;
  a_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_14;
  b_14 :
  TestFunFC(d_11,&&fail,Egetd(1,2));
  Rpush(c_11);
  goto z_13;
  c_11 :
  goto b_11;
  z_13 :
  Return();
  b_11 :
  Epopd(1,3);
  goto y_10;
  z_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_11);
  goto v_14;
  g_11 :
  AllBuild();
  goto e_11;
  y_10 :
  Cpop();
  e_11 :
  Return();
  x_10 :
  Cpop();
  Crestore();
  Cjump();
  w_10 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(h_11);
  w_14 :
  Cpush(d_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_14;
  e_14 :
  TestFunFC(l_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_12);
  goto c_14;
  f_12 :
  goto e_12;
  c_14 :
  Move(0,2,1,3);
  Return();
  e_12 :
  Epopd(1,4);
  goto c_12;
  d_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_12);
  goto w_14;
  o_12 :
  AllBuild();
  goto n_12;
  c_12 :
  Cpop();
  n_12 :
  Return();
  h_11 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(p_12);
  x_14 :
  Cpush(w_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_14;
  g_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_14;
  h_14 :
  TestFunFC(d_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_12);
  goto f_14;
  y_12 :
  goto x_12;
  f_14 :
  Move(0,1,1,3);
  Return();
  x_12 :
  Epopd(1,4);
  goto r_12;
  w_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_13);
  goto x_14;
  f_13 :
  AllBuild();
  goto z_12;
  r_12 :
  Cpop();
  z_12 :
  Return();
  p_12 :
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_n_4);
  goto t_10;
  u_10 :
  goto g_13;
  t_10 :
  Cpop();
  g_13 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_o_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_n_4);
  Tset(MakeInt(1));
  Ccall(_stratego_o_4);
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_14;
  z_14 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  Rpush(l_13);
  goto y_14;
  l_13 :
  goto k_13;
  y_14 :
  Return();
  k_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_4)
  Rpush(m_13);
  t_15 :
  AllInit();
  n_13 :
  AllNextSon(&&p_13);
  Rpush(q_13);
  goto t_15;
  q_13 :
  goto n_13;
  p_13 :
  AllBuild();
  Rpush(r_13);
  u_15 :
  Cpush(t_13);
  Epushd(0,3);
  MoveTop(0,1);
  goto h_15;
  h_15 :
  TestFunFC(a_16,&&z_15,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto i_15;
  i_15 :
  TestInt(0,2,0,&&c_16);
  Cpush(e_16);
  Rpush(f_16);
  goto b_15;
  f_16 :
  goto d_16;
  e_16 :
  Rpush(h_16);
  goto d_15;
  h_16 :
  goto g_16;
  d_16 :
  Cpop();
  g_16 :
  goto s_15;
  c_16 :
  TestInt(0,2,1,&&b_16);
  Cpush(j_16);
  Rpush(k_16);
  goto c_15;
  k_16 :
  goto i_16;
  j_16 :
  Rpush(m_16);
  goto d_15;
  m_16 :
  goto l_16;
  i_16 :
  Cpop();
  l_16 :
  goto s_15;
  b_16 :
  Rpush(s_15);
  goto d_15;
  z_15 :
  TestFunFC(n_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_15);
  goto e_15;
  s_15 :
  goto r_15;
  e_15 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Ccall(_stratego_c_5);
  Rpush(o_16);
  y_15 :
  AllInit();
  p_16 :
  AllNextSon(&&q_16);
  Rpush(r_16);
  goto y_15;
  r_16 :
  goto p_16;
  q_16 :
  AllBuild();
  Rpush(s_16);
  goto u_15;
  s_16 :
  Return();
  o_16 :
  Return();
  r_15 :
  goto m_15;
  d_15 :
  Epushd(1,4);
  Tdupl();
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_5);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_5);
  MoveTop(1,3);
  Move(1,1,1,3);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(2),App0("TNil"))));
  Ccall(_stratego_a_5);
  MoveTop(1,4);
  Move(1,2,1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Plus",App1("Fib",Egetd(1,1)),App1("Fib",Egetd(1,2))));
  Rpush(t_16);
  x_15 :
  AllInit();
  u_16 :
  AllNextSon(&&v_16);
  Rpush(w_16);
  goto x_15;
  w_16 :
  goto u_16;
  v_16 :
  AllBuild();
  Rpush(x_16);
  goto u_15;
  x_16 :
  Return();
  t_16 :
  Epopd(1,4);
  Return();
  m_15 :
  goto g_15;
  c_15 :
  Tset(MakeInt(1));
  Rpush(y_16);
  w_15 :
  AllInit();
  z_16 :
  AllNextSon(&&a_17);
  Rpush(b_17);
  goto w_15;
  b_17 :
  goto z_16;
  a_17 :
  AllBuild();
  Rpush(c_17);
  goto u_15;
  c_17 :
  Return();
  y_16 :
  Return();
  g_15 :
  goto f_15;
  b_15 :
  Tset(MakeInt(1));
  Rpush(d_17);
  v_15 :
  AllInit();
  e_17 :
  AllNextSon(&&f_17);
  Rpush(g_17);
  goto v_15;
  g_17 :
  goto e_17;
  f_17 :
  AllBuild();
  Rpush(h_17);
  goto u_15;
  h_17 :
  Return();
  d_17 :
  Return();
  f_15 :
  Epopd(0,3);
  goto s_13;
  t_13 :
  goto i_17;
  s_13 :
  Cpop();
  i_17 :
  Return();
  r_13 :
  Return();
  m_13 :
ENDPROC

PROC(_stratego_a_5)
  _ST_subt();
ENDPROC

PROC(_stratego_b_5)
  _ST_gt();
ENDPROC

PROC(_stratego_c_5)
  _ST_add();
ENDPROC

DOIT

