#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_27);
VARDECL(AFun,r_14);
VARDECL(AFun,v_12);
VARDECL(AFun,g_12);
VARDECL(AFun,f_12);
VARDECL(AFun,e_12);
VARDECL(AFun,j_11);
VARDECL(AFun,a_11);
VARDECL(AFun,p_9);
VARDECL(AFun,c_9);
VARDECL(AFun,q_8);
VARDECL(AFun,f_8);
VARDECL(AFun,z_7);
VARDECL(AFun,w_7);
VARDECL(AFun,x_0);
VARDECL(AFun,t_0);
VARDECL(AFun,q_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_y_9);
PROCDECL(_stratego_z_9);
PROCDECL(_stratego_a_10);
PROCDECL(_stratego_b_10);
PROCDECL(_stratego_c_10);
PROCDECL(_stratego_d_10);
PROCDECL(_stratego_e_10);
PROCDECL(_stratego_f_10);
PROCDECL(_stratego_g_10);
PROCDECL(_stratego_h_10);
PROCDECL(_stratego_i_10);
PROCDECL(_stratego_j_10);
PROCDECL(_stratego_k_10);
PROCDECL(_stratego_l_10);
PROCDECL(_stratego_m_10);
PROCDECL(_stratego_n_10);
PROCDECL(_stratego_o_10);
PROCDECL(_stratego_p_10);
PROCDECL(_stratego_q_10);
PROCDECL(_stratego_r_10);
PROCDECL(_stratego_s_10);
PROCDECL(_stratego_t_10);
PROCDECL(_stratego_u_10);
PROCDECL(_stratego_v_10);

PROC(_stratego_init_afuns)
  MOVE(a_27,ATmakeAFun("Int",1,0));
  MOVE(r_14,ATmakeAFun("Block",2,0));
  MOVE(v_12,ATmakeAFun("Call",2,0));
  MOVE(g_12,ATmakeAFun("Var",1,0));
  MOVE(f_12,ATmakeAFun("Assign",2,0));
  MOVE(e_12,ATmakeAFun("Exp",1,0));
  MOVE(j_11,ATmakeAFun("Runtime",1,0));
  MOVE(a_11,ATmakeAFun("Silent",0,0));
  MOVE(p_9,ATmakeAFun("Binary",0,0));
  MOVE(c_9,ATmakeAFun("Output",1,0));
  MOVE(q_8,ATmakeAFun("Input",1,0));
  MOVE(f_8,ATmakeAFun("Program",1,0));
  MOVE(z_7,ATmakeAFun("Help",0,0));
  MOVE(w_7,ATmakeAFun("Undefined",1,0));
  MOVE(x_0,ATmakeAFun("Nil",0,0));
  MOVE(t_0,ATmakeAFun("TNil",0,0));
  MOVE(q_0,ATmakeAFun("TCons",2,0));
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
  Rpush(d_0);
  z_3 :
  Cpush(f_0);
  Cpush(h_0);
  Ccall(_stratego_x_9);
  goto g_0;
  h_0 :
  Ccall(_stratego_y_9);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_0);
  goto z_3;
  j_0 :
  AllBuild();
  goto i_0;
  g_0 :
  Cpop();
  i_0 :
  goto e_0;
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_0);
  goto b_0;
  m_0 :
  goto l_0;
  b_0 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  l_0 :
  Epopd(0,3);
  goto k_0;
  e_0 :
  Cpop();
  k_0 :
  Return();
  d_0 :
  AllBuild();
  Cpush(o_0);
  Ccall(_stratego_z_9);
  goto n_0;
  o_0 :
  Ccontinue(p_0);
  Epushd(0,6);
  Ccall(_stratego_e_10);
  Tdupl();
  Ccall(_stratego_g_10);
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_10);
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_g_10);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto w_2;
  w_2 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(t_0,&&fail,Egetd(0,6));
  Rpush(s_0);
  goto u_2;
  s_0 :
  goto r_0;
  u_2 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  r_0 :
  Ccall(_stratego_h_10);
  Ccall(_stratego_k_10);
  Epopd(0,6);
  goto n_0;
  p_0 :
  Ccall(_stratego_l_10);
  goto u_0;
  n_0 :
  Cpop();
  u_0 :
ENDPROC

PROC(_stratego_x_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_4;
  b_4 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  Rpush(w_0);
  goto a_4;
  w_0 :
  goto v_0;
  a_4 :
  Return();
  v_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_9)
  Epushd(0,5);
  MoveTop(0,3);
  goto c_7;
  c_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_7;
  d_7 :
  TestFunFC(a_0,&&o_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(q_1);
  Rpush(r_1);
  goto d_4;
  r_1 :
  goto p_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto e_4;
  t_1 :
  goto p_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto f_4;
  v_1 :
  goto p_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto g_4;
  x_1 :
  goto p_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto h_4;
  z_1 :
  goto p_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto i_4;
  b_2 :
  goto p_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto j_4;
  d_2 :
  goto p_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto k_4;
  f_2 :
  goto p_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto l_4;
  h_2 :
  goto p_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto m_4;
  j_2 :
  goto p_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto n_4;
  l_2 :
  goto p_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto o_4;
  n_2 :
  goto p_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto p_4;
  p_2 :
  goto p_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto q_4;
  r_2 :
  goto p_1;
  q_2 :
  Rpush(t_2);
  goto r_4;
  t_2 :
  goto s_2;
  p_1 :
  Cpop();
  s_2 :
  goto n_1;
  o_1 :
  Cpush(a_3);
  Rpush(c_3);
  goto d_4;
  c_3 :
  goto v_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto e_4;
  e_3 :
  goto v_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto f_4;
  i_3 :
  goto v_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto g_4;
  n_3 :
  goto v_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto h_4;
  p_3 :
  goto v_2;
  o_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto n_4;
  t_3 :
  goto v_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(x_3);
  goto o_4;
  x_3 :
  goto v_2;
  u_3 :
  Ccontinue(y_3);
  Rpush(u_4);
  goto p_4;
  u_4 :
  goto v_2;
  y_3 :
  Ccontinue(x_4);
  Rpush(a_5);
  goto q_4;
  a_5 :
  goto v_2;
  x_4 :
  Rpush(g_5);
  goto r_4;
  g_5 :
  goto d_5;
  v_2 :
  Cpop();
  d_5 :
  goto n_1;
  n_1 :
  goto m_1;
  r_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(i_5);
  goto z_6;
  i_5 :
  goto h_5;
  z_6 :
  Return();
  h_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  q_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"-h",&&fail);
  Rpush(k_5);
  goto w_6;
  k_5 :
  goto j_5;
  w_6 :
  Return();
  j_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  p_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"--help",&&fail);
  Rpush(m_5);
  goto t_6;
  m_5 :
  goto l_5;
  t_6 :
  Return();
  l_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  o_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"-s",&&fail);
  Rpush(o_5);
  goto q_6;
  o_5 :
  goto n_5;
  q_6 :
  Return();
  n_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  n_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(q_5);
  goto n_6;
  q_5 :
  goto p_5;
  n_6 :
  Return();
  p_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  m_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(s_5);
  goto j_6;
  s_5 :
  goto r_5;
  j_6 :
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
  l_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_6;
  g_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(w_5);
  goto f_6;
  w_5 :
  goto v_5;
  f_6 :
  Return();
  v_5 :
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
  k_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(a_6);
  goto b_6;
  a_6 :
  goto z_5;
  b_6 :
  Return();
  z_5 :
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
  j_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"-i",&&fail);
  Rpush(e_6);
  goto x_5;
  e_6 :
  goto d_6;
  x_5 :
  Return();
  d_6 :
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
  i_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_5;
  u_5 :
  TestStr(1,1,"@version",&&fail);
  Rpush(i_6);
  goto t_5;
  i_6 :
  goto h_6;
  t_5 :
  Return();
  h_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_1 :
  goto c_1;
  h_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_5;
  f_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(m_6);
  goto e_5;
  m_6 :
  goto l_6;
  e_5 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  g_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_5;
  c_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(s_6);
  goto b_5;
  s_6 :
  goto p_6;
  b_5 :
  Return();
  p_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  f_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_4;
  z_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(y_6);
  goto y_4;
  y_6 :
  goto v_6;
  y_4 :
  Return();
  v_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  e_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_4;
  w_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_7);
  goto v_4;
  j_7 :
  goto b_7;
  v_4 :
  Return();
  b_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  d_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_4;
  t_4 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_7);
  goto s_4;
  m_7 :
  goto k_7;
  s_4 :
  Return();
  k_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_9)
  Tdupl();
  n_7 :
  TestFunTop(a_0);
  Cpush(o_7);
  Arg(0);
  Cpush(s_7);
  Ccall(_stratego_a_10);
  goto r_7;
  s_7 :
  Epushd(0,2);
  MoveTop(0,1);
  goto m_13;
  m_13 :
  TestFunFC(w_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_7);
  goto l_13;
  v_7 :
  goto u_7;
  l_13 :
  Return();
  u_7 :
  Epopd(0,2);
  goto t_7;
  r_7 :
  Cpop();
  t_7 :
  Tpop();
  Cpop();
  goto p_7;
  o_7 :
  Arg(1);
  Tdrop();
  goto n_7;
  p_7 :
  Tpop();
  Ccall(_stratego_b_10);
ENDPROC

PROC(_stratego_a_10)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_13;
  r_13 :
  TestFunFC(z_7,&&fail,Egetd(0,1));
  Rpush(y_7);
  goto q_13;
  y_7 :
  goto x_7;
  q_13 :
  Return();
  x_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_10)
  Epushd(0,1);
  Tdupl();
  Rpush(a_8);
  b_14 :
  Cpush(c_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_13;
  u_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_13;
  v_13 :
  TestFunFC(f_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_8);
  goto t_13;
  e_8 :
  goto d_8;
  t_13 :
  Move(0,1,1,3);
  Return();
  d_8 :
  Epopd(1,4);
  goto b_8;
  c_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_8);
  goto b_14;
  h_8 :
  AllBuild();
  goto g_8;
  b_8 :
  Cpop();
  g_8 :
  Return();
  a_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_c_10);
  Tset(MakeInt(1));
  Ccall(_stratego_d_10);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_10)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_10)
  _ST_exit();
ENDPROC

PROC(_stratego_e_10)
  Epushd(0,3);
  Tdupl();
  Cpush(j_8);
  Rpush(k_8);
  v_14 :
  Cpush(m_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_14;
  e_14 :
  TestFunFC(q_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_8);
  goto c_14;
  o_8 :
  goto n_8;
  c_14 :
  Move(0,1,1,3);
  Return();
  n_8 :
  Epopd(1,4);
  goto l_8;
  m_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_8);
  goto v_14;
  s_8 :
  AllBuild();
  goto r_8;
  l_8 :
  Cpop();
  r_8 :
  Return();
  k_8 :
  goto i_8;
  j_8 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto t_8;
  i_8 :
  Cpop();
  t_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_10);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_10)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_10)
  _ST_dtime();
ENDPROC

PROC(_stratego_h_10)
  Epushd(0,1);
  Tdupl();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(v_8);
  Rpush(w_8);
  a_16 :
  Cpush(y_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_14;
  x_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_14;
  y_14 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_9);
  goto w_14;
  b_9 :
  goto z_8;
  w_14 :
  Move(0,1,1,3);
  Return();
  z_8 :
  Epopd(1,4);
  goto x_8;
  y_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_9);
  goto a_16;
  e_9 :
  AllBuild();
  goto d_9;
  x_8 :
  Cpop();
  d_9 :
  Return();
  w_8 :
  goto u_8;
  v_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto g_9;
  u_8 :
  Cpop();
  g_9 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  Cpush(i_9);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(j_9);
  b_16 :
  Cpush(m_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_15;
  e_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_15;
  f_15 :
  TestFunFC(p_9,&&fail,Egetd(1,2));
  Rpush(o_9);
  goto d_15;
  o_9 :
  goto n_9;
  d_15 :
  Return();
  n_9 :
  Epopd(1,3);
  goto k_9;
  m_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_9);
  goto b_16;
  r_9 :
  AllBuild();
  goto q_9;
  k_9 :
  Cpop();
  q_9 :
  Return();
  j_9 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_10);
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  goto h_9;
  i_9 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_10);
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  goto s_9;
  h_9 :
  Cpop();
  s_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_10)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_j_10)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_k_10)
  Epushd(0,2);
  Tdupl();
  Cpush(u_9);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(v_9);
  Tdupl();
  Rpush(w_9);
  y_16 :
  Cpush(x_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_16;
  d_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_16;
  e_16 :
  TestFunFC(a_11,&&fail,Egetd(1,2));
  Rpush(z_10);
  goto c_16;
  z_10 :
  goto y_10;
  c_16 :
  Return();
  y_10 :
  Epopd(1,3);
  goto w_10;
  x_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_11);
  goto y_16;
  c_11 :
  AllBuild();
  goto b_11;
  w_10 :
  Cpop();
  b_11 :
  Return();
  w_9 :
  Cpop();
  Crestore();
  Cjump();
  v_9 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(e_11);
  z_16 :
  Cpush(g_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_16;
  g_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_16;
  h_16 :
  TestFunFC(j_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_11);
  goto f_16;
  i_11 :
  goto h_11;
  f_16 :
  Move(0,2,1,3);
  Return();
  h_11 :
  Epopd(1,4);
  goto f_11;
  g_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_11);
  goto z_16;
  m_11 :
  AllBuild();
  goto k_11;
  f_11 :
  Cpop();
  k_11 :
  Return();
  e_11 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(n_11);
  a_17 :
  Cpush(p_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_16;
  j_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_16;
  k_16 :
  TestFunFC(f_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_11);
  goto i_16;
  r_11 :
  goto q_11;
  i_16 :
  Move(0,1,1,3);
  Return();
  q_11 :
  Epopd(1,4);
  goto o_11;
  p_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_11);
  goto a_17;
  u_11 :
  AllBuild();
  goto s_11;
  o_11 :
  Cpop();
  s_11 :
  Return();
  n_11 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_c_10);
  goto t_9;
  u_9 :
  goto v_11;
  t_9 :
  Cpop();
  v_11 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_d_10);
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_10)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_10);
  Tset(MakeInt(1));
  Ccall(_stratego_d_10);
ENDPROC

PROC(_stratego_m_10)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_17;
  c_17 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  Rpush(x_11);
  goto b_17;
  x_11 :
  goto w_11;
  b_17 :
  Return();
  w_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_10)
  Rpush(y_11);
  r_17 :
  Cpush(a_12);
  Epushd(0,5);
  MoveTop(0,1);
  goto g_17;
  g_17 :
  TestFunFC(e_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto h_17;
  h_17 :
  TestFunFC(f_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto i_17;
  i_17 :
  TestFunFC(g_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(d_12);
  goto e_17;
  d_12 :
  goto c_12;
  e_17 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_o_10);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App3("Comment",ATmakeString("original expression: "),Egetd(0,1),Egetd(1,1)));
  Epopd(1,1);
  Return();
  c_12 :
  Epopd(0,5);
  goto z_11;
  a_12 :
  AllInit();
  j_12 :
  AllNextSon(&&k_12);
  Rpush(l_12);
  goto r_17;
  l_12 :
  goto j_12;
  k_12 :
  AllBuild();
  goto h_12;
  z_11 :
  Cpop();
  h_12 :
  Return();
  y_11 :
ENDPROC

PROC(_stratego_o_10)
  Rpush(m_12);
  g_21 :
  Cpush(p_12);
  o_12 :
  Cpush(r_12);
  Ccall(_stratego_p_10);
  goto q_12;
  r_12 :
  Epushd(0,7);
  MoveTop(0,1);
  goto f_18;
  f_18 :
  TestFunFC(e_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto g_18;
  g_18 :
  TestFunFC(f_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto h_18;
  h_18 :
  TestFunFC(g_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto i_18;
  i_18 :
  TestFunFC(v_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(u_12);
  goto s_17;
  u_12 :
  goto t_12;
  s_17 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,7);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Ccall(_stratego_r_10);
  MoveTop(2,1);
  goto u_17;
  u_17 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_17;
  v_17 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_17;
  w_17 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_17;
  x_17 :
  TestFunFC(t_0,&&fail,Egetd(2,7));
  Rpush(x_12);
  goto t_17;
  x_12 :
  goto w_12;
  t_17 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Move(1,3,2,6);
  Return();
  w_12 :
  Epopd(2,7);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",App2("Cons",App1("Exp",App2("Assign",App1("Var",Egetd(0,4)),App2("Call",Egetd(0,6),Egetd(1,3)))),App0("Nil")),App0("TNil"))));
  MoveTop(1,4);
  goto c_18;
  c_18 :
  TestFunFC(q_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto d_18;
  d_18 :
  TestFunFC(q_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto e_18;
  e_18 :
  TestFunFC(t_0,&&fail,Egetd(1,8));
  Rpush(a_13);
  goto y_17;
  a_13 :
  goto z_12;
  y_17 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(b_13);
  i_21 :
  Cpush(e_13);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_13);
  goto i_21;
  f_13 :
  AllBuild();
  goto c_13;
  e_13 :
  Ccall(_stratego_x_9);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto g_13;
  c_13 :
  Cpop();
  g_13 :
  Return();
  b_13 :
  MoveTop(2,1);
  NotNULLd(1,1);
  NotNULLd(2,1);
  Tset(App2("Block",Egetd(1,1),Egetd(2,1)));
  Epopd(2,1);
  Return();
  z_12 :
  Epopd(1,8);
  Return();
  t_12 :
  Epopd(0,7);
  goto s_12;
  q_12 :
  Cpop();
  s_12 :
  Tduplinv();
  goto o_12;
  p_12 :
  AllInit();
  h_13 :
  AllNextSon(&&j_13);
  Rpush(k_13);
  goto g_21;
  k_13 :
  goto h_13;
  j_13 :
  AllBuild();
  Return();
  m_12 :
  Rpush(f_14);
  j_21 :
  Rpush(g_14);
  k_21 :
  Cpush(i_14);
  Epushd(0,3);
  MoveTop(0,1);
  goto x_18;
  x_18 :
  TestFunFC(r_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_14);
  goto j_18;
  q_14 :
  goto o_14;
  j_18 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_14);
  l_21 :
  Cpush(z_14);
  Epushd(3,5);
  MoveTop(3,1);
  goto p_18;
  p_18 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto q_18;
  q_18 :
  TestFunFC(r_14,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  Rpush(b_15);
  goto k_18;
  b_15 :
  goto a_15;
  k_18 :
  Epushd(4,5);
  Move(1,1,3,3);
  Move(1,2,3,4);
  Move(1,3,3,5);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  MoveTop(4,1);
  goto m_18;
  m_18 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto n_18;
  n_18 :
  TestFunFC(q_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto o_18;
  o_18 :
  TestFunFC(t_0,&&fail,Egetd(4,5));
  Rpush(l_15);
  goto l_18;
  l_15 :
  goto c_15;
  l_18 :
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(n_15);
  m_21 :
  Cpush(p_15);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_15);
  goto m_21;
  q_15 :
  AllBuild();
  goto o_15;
  p_15 :
  Ccall(_stratego_x_9);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto r_15;
  o_15 :
  Cpop();
  r_15 :
  Return();
  n_15 :
  Return();
  c_15 :
  Epopd(4,5);
  Return();
  a_15 :
  Epopd(3,5);
  goto u_14;
  z_14 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_15);
  goto l_21;
  t_15 :
  AllBuild();
  goto s_15;
  u_14 :
  Cpop();
  s_15 :
  Return();
  s_14 :
  MoveTop(2,1);
  Move(1,4,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,5);
  goto u_18;
  u_18 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_18;
  v_18 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto w_18;
  w_18 :
  TestFunFC(t_0,&&fail,Egetd(1,9));
  Rpush(y_15);
  goto s_18;
  y_15 :
  goto x_15;
  s_18 :
  Epushd(2,1);
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(z_15);
  n_21 :
  Cpush(o_17);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_17);
  goto n_21;
  z_17 :
  AllBuild();
  goto f_17;
  o_17 :
  Ccall(_stratego_x_9);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto a_18;
  f_17 :
  Cpop();
  a_18 :
  Return();
  z_15 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("Block",Egetd(2,1),Egetd(1,4)));
  Epopd(2,1);
  Return();
  x_15 :
  Rpush(b_18);
  goto k_21;
  b_18 :
  Epopd(1,9);
  Return();
  o_14 :
  Epopd(0,3);
  goto h_14;
  i_14 :
  goto r_18;
  h_14 :
  Cpop();
  r_18 :
  Return();
  g_14 :
  AllInit();
  t_18 :
  AllNextSon(&&f_19);
  Rpush(g_19);
  goto j_21;
  g_19 :
  goto t_18;
  f_19 :
  AllBuild();
  Return();
  f_14 :
ENDPROC

PROC(_stratego_p_10)
  Epushd(0,5);
  MoveTop(0,1);
  goto e_22;
  e_22 :
  TestFunFC(e_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto f_22;
  f_22 :
  TestFunFC(f_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto g_22;
  g_22 :
  TestFunFC(g_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(x_19);
  goto o_21;
  x_19 :
  goto h_19;
  o_21 :
  Epushd(1,11);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_21;
  q_21 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_21;
  r_21 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_21;
  s_21 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  Rpush(a_20);
  goto p_21;
  a_20 :
  goto y_19;
  p_21 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  y_19 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,7);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_q_10);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_r_10);
  MoveTop(2,1);
  goto u_21;
  u_21 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_21;
  v_21 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_21;
  w_21 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_21;
  x_21 :
  TestFunFC(t_0,&&fail,Egetd(2,7));
  Rpush(f_20);
  goto t_21;
  f_20 :
  goto e_20;
  t_21 :
  Move(1,3,2,2);
  Move(1,4,2,4);
  Move(1,5,2,6);
  Return();
  e_20 :
  Epopd(2,7);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,5),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,6);
  NotNULLd(1,4);
  NotNULLd(0,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",App1("Exp",App2("Assign",App1("Var",Egetd(0,4)),Egetd(1,6))),App0("Nil")),App0("TNil"))));
  MoveTop(1,7);
  goto b_22;
  b_22 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto c_22;
  c_22 :
  TestFunFC(q_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto d_22;
  d_22 :
  TestFunFC(t_0,&&fail,Egetd(1,11));
  Rpush(v_20);
  goto z_21;
  v_20 :
  goto u_20;
  z_21 :
  Epushd(2,1);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  Rpush(c_21);
  q_23 :
  Cpush(f_21);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_21);
  goto q_23;
  y_21 :
  AllBuild();
  goto d_21;
  f_21 :
  Ccall(_stratego_x_9);
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  goto a_22;
  d_21 :
  Cpop();
  a_22 :
  Return();
  c_21 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Block",Egetd(1,3),Egetd(2,1)));
  Epopd(2,1);
  Return();
  u_20 :
  Epopd(1,11);
  Return();
  h_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_10)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_23;
  u_23 :
  TestStr(0,1,"Add",&&n_23);
  Rpush(m_23);
  goto r_23;
  n_23 :
  TestStr(0,1,"Mul",&&p_23);
  Rpush(m_23);
  goto s_23;
  p_23 :
  TestStr(0,1,"Sub",&&fail);
  Rpush(m_23);
  goto t_23;
  m_23 :
  goto g_23;
  t_23 :
  Return();
  g_23 :
  goto p_22;
  s_23 :
  Return();
  p_22 :
  goto m_22;
  r_23 :
  Return();
  m_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_10)
  Rpush(w_23);
  m_25 :
  Cpush(y_23);
  Ccall(_stratego_x_9);
  goto x_23;
  y_23 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  Cpush(f_24);
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_s_10);
  Ccall(_stratego_u_10);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",App1("VarDecl",Egetd(1,1)),App0("Nil")),App2("TCons",App2("Cons",App1("Exp",App2("Assign",App1("Var",Egetd(1,1)),Egetd(0,1))),App0("Nil")),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil")))));
  Epopd(1,1);
  goto c_24;
  f_24 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_t_10);
  Tpop();
  NotNULLd(0,1);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,1),App0("TNil")))));
  goto l_24;
  c_24 :
  Cpop();
  l_24 :
  Epopd(0,1);
  OneNextSon();
  Rpush(o_24);
  goto m_25;
  o_24 :
  AllBuild();
  goto z_23;
  x_23 :
  Cpop();
  z_23 :
  Return();
  w_23 :
  Rpush(q_24);
  n_25 :
  Cpush(v_24);
  Epushd(0,8);
  MoveTop(0,1);
  Rpush(x_24);
  o_25 :
  Cpush(c_25);
  Ccall(_stratego_x_9);
  goto b_25;
  c_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  MoveTop(1,1);
  goto b_24;
  b_24 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_25);
  goto a_24;
  l_25 :
  goto k_25;
  a_24 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  k_25 :
  Epopd(1,3);
  OneNextSon();
  Rpush(b_26);
  goto o_25;
  b_26 :
  AllBuild();
  goto e_25;
  b_25 :
  Cpop();
  e_25 :
  Return();
  x_24 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(c_26);
  p_25 :
  Cpush(g_26);
  Ccall(_stratego_x_9);
  goto f_26;
  g_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  MoveTop(1,1);
  goto e_24;
  e_24 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_26);
  goto d_24;
  j_26 :
  goto i_26;
  d_24 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Return();
  i_26 :
  Epopd(1,3);
  OneNextSon();
  Rpush(k_26);
  goto p_25;
  k_26 :
  AllBuild();
  goto h_26;
  f_26 :
  Cpop();
  h_26 :
  Return();
  c_26 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(m_26);
  goto n_25;
  m_26 :
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  MoveTop(0,4);
  goto h_24;
  h_24 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_24;
  i_24 :
  TestFunFC(q_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto j_24;
  j_24 :
  TestFunFC(t_0,&&fail,Egetd(0,8));
  Rpush(n_26);
  goto g_24;
  n_26 :
  goto l_26;
  g_24 :
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,5),Egetd(0,7)));
  Return();
  l_26 :
  Epopd(0,8);
  goto u_24;
  v_24 :
  Rpush(p_26);
  q_25 :
  Cpush(r_26);
  Ccall(_stratego_x_9);
  goto q_26;
  r_26 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_10);
  OneNextSon();
  Rpush(t_26);
  goto q_25;
  t_26 :
  AllBuild();
  goto s_26;
  q_26 :
  Cpop();
  s_26 :
  Return();
  p_26 :
  Tset(App0("TNil"));
  goto o_26;
  u_24 :
  Cpop();
  o_26 :
  Return();
  q_24 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_10);
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_10);
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  AllBuild();
  Cpush(u_26);
  Tdupl();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_9);
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_10);
  AllBuild();
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  u_26 :
ENDPROC

PROC(_stratego_s_10)
  Cpush(v_26);
  Tdupl();
  Ccall(_stratego_t_10);
  Cpop();
  Crestore();
  Cjump();
  v_26 :
ENDPROC

PROC(_stratego_t_10)
  Epushd(0,2);
  MoveTop(0,1);
  goto t_25;
  t_25 :
  TestFunFC(g_12,&&z_26,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_26);
  goto r_25;
  z_26 :
  TestFunFC(a_27,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_26);
  goto s_25;
  y_26 :
  goto x_26;
  s_25 :
  Return();
  x_26 :
  goto w_26;
  r_25 :
  Return();
  w_26 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_10)
  _ST_new();
ENDPROC

PROC(_stratego_v_10)
  Rpush(b_27);
  d_26 :
  Cpush(d_27);
  Ccall(_stratego_x_9);
  goto c_27;
  d_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_25;
  x_25 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_27);
  goto w_25;
  g_27 :
  goto f_27;
  w_25 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_27);
  e_26 :
  Cpush(j_27);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_27);
  goto e_26;
  k_27 :
  AllBuild();
  goto i_27;
  j_27 :
  Ccall(_stratego_x_9);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_27);
  goto d_26;
  m_27 :
  goto l_27;
  i_27 :
  Cpop();
  l_27 :
  Return();
  h_27 :
  Return();
  f_27 :
  Epopd(0,3);
  goto e_27;
  c_27 :
  Cpop();
  e_27 :
  Return();
  b_27 :
ENDPROC

DOIT

