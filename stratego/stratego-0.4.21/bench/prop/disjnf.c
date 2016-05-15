#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_14);
VARDECL(AFun,o_14);
VARDECL(AFun,y_13);
VARDECL(AFun,u_12);
VARDECL(AFun,d_10);
VARDECL(AFun,t_9);
VARDECL(AFun,d_9);
VARDECL(AFun,r_8);
VARDECL(AFun,d_8);
VARDECL(AFun,j_7);
VARDECL(AFun,a_7);
VARDECL(AFun,w_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
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

PROC(_stratego_init_afuns)
  MOVE(q_14,ATmakeAFun("Not",1,0));
  MOVE(o_14,ATmakeAFun("Atom",1,0));
  MOVE(y_13,ATmakeAFun("And",2,0));
  MOVE(u_12,ATmakeAFun("Or",2,0));
  MOVE(d_10,ATmakeAFun("Runtime",1,0));
  MOVE(t_9,ATmakeAFun("Silent",0,0));
  MOVE(d_9,ATmakeAFun("Binary",0,0));
  MOVE(r_8,ATmakeAFun("Output",1,0));
  MOVE(d_8,ATmakeAFun("Input",1,0));
  MOVE(j_7,ATmakeAFun("Program",1,0));
  MOVE(a_7,ATmakeAFun("Help",0,0));
  MOVE(w_6,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_t_3);
ENDPROC

PROC(_stratego_t_3)
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
  s_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_u_3);
  goto f_0;
  g_0 :
  Ccall(_stratego_v_3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto s_4;
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
  goto t_4;
  l_0 :
  goto k_0;
  t_4 :
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
  Ccall(_stratego_w_3);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_b_4);
  Tdupl();
  Ccall(_stratego_d_4);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_4);
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_d_4);
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
  goto v_4;
  r_0 :
  goto q_0;
  v_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_e_4);
  Ccall(_stratego_h_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_i_4);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_4;
  x_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto z_4;
  v_0 :
  goto u_0;
  z_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto n_7;
  n_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto o_7;
  o_7 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto g_11;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto j_11;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto m_11;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto p_11;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto s_11;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto v_11;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto z_11;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto d_12;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto h_12;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto l_12;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto p_12;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto s_12;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto v_12;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto y_12;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto b_13;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto g_11;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto j_11;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto m_11;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto p_11;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto s_11;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto p_12;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto s_12;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(p_4);
  goto v_12;
  p_4 :
  goto t_2;
  s_3 :
  Ccontinue(q_4);
  Rpush(r_4);
  goto y_12;
  r_4 :
  goto t_2;
  q_4 :
  Rpush(w_4);
  goto b_13;
  w_4 :
  goto u_4;
  t_2 :
  Cpop();
  u_4 :
  goto m_1;
  m_1 :
  goto l_1;
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(b_5);
  goto c_13;
  b_5 :
  goto a_5;
  c_13 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(d_5);
  goto z_12;
  d_5 :
  goto c_5;
  z_12 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  v_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(f_5);
  goto w_12;
  f_5 :
  goto e_5;
  w_12 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(h_5);
  goto t_12;
  h_5 :
  goto g_5;
  t_12 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  p_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(j_5);
  goto q_12;
  j_5 :
  goto i_5;
  q_12 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  l_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(l_5);
  goto m_12;
  l_5 :
  goto k_5;
  m_12 :
  Return();
  k_5 :
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
  h_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(n_5);
  goto i_12;
  n_5 :
  goto m_5;
  i_12 :
  Return();
  m_5 :
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
  d_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_6;
  n_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(p_5);
  goto e_12;
  p_5 :
  goto o_5;
  e_12 :
  Return();
  o_5 :
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
  z_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_6;
  j_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(s_5);
  goto a_12;
  s_5 :
  goto r_5;
  a_12 :
  Return();
  r_5 :
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
  v_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_6;
  f_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(v_5);
  goto w_11;
  v_5 :
  goto u_5;
  w_11 :
  Return();
  u_5 :
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
  s_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_5);
  goto t_11;
  y_5 :
  goto x_5;
  t_11 :
  Return();
  x_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  p_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_5;
  z_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(b_6);
  goto q_11;
  b_6 :
  goto a_6;
  q_11 :
  Return();
  a_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  m_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_5;
  w_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(e_6);
  goto n_11;
  e_6 :
  goto d_6;
  n_11 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  j_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_5;
  t_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(h_6);
  goto k_11;
  h_6 :
  goto g_6;
  k_11 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  g_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_5;
  q_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(k_6);
  goto h_11;
  k_6 :
  goto i_6;
  h_11 :
  Return();
  i_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_3)
  Tdupl();
  l_6 :
  TestFunTop(a_0);
  Cpush(m_6);
  Arg(0);
  Cpush(q_6);
  Ccall(_stratego_x_3);
  goto p_6;
  q_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto f_13;
  f_13 :
  TestFunFC(w_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(u_6);
  goto j_13;
  u_6 :
  goto t_6;
  j_13 :
  Return();
  t_6 :
  Epopd(0,2);
  goto s_6;
  p_6 :
  Cpop();
  s_6 :
  Tpop();
  Cpop();
  goto o_6;
  m_6 :
  Arg(1);
  Tdrop();
  goto l_6;
  o_6 :
  Tpop();
  Ccall(_stratego_y_3);
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_13;
  l_13 :
  TestFunFC(a_7,&&fail,Egetd(0,1));
  Rpush(y_6);
  goto n_13;
  y_6 :
  goto x_6;
  n_13 :
  Return();
  x_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,1);
  Tdupl();
  Rpush(b_7);
  w_13 :
  Cpush(e_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_13;
  p_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_13;
  q_13 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto x_13;
  h_7 :
  goto g_7;
  x_13 :
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
  Rpush(m_7);
  goto w_13;
  m_7 :
  AllBuild();
  goto k_7;
  d_7 :
  Cpop();
  k_7 :
  Return();
  b_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_3);
  Tset(MakeInt(1));
  Ccall(_stratego_a_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_a_4)
  _ST_exit();
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,3);
  Tdupl();
  Cpush(v_7);
  Rpush(x_7);
  r_14 :
  Cpush(z_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_13;
  z_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_14;
  a_14 :
  TestFunFC(d_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_8);
  goto s_14;
  c_8 :
  goto a_8;
  s_14 :
  Move(0,1,1,3);
  Return();
  a_8 :
  Epopd(1,4);
  goto y_7;
  z_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_8);
  goto r_14;
  f_8 :
  AllBuild();
  goto e_8;
  y_7 :
  Cpop();
  e_8 :
  Return();
  x_7 :
  goto u_7;
  v_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto h_8;
  u_7 :
  Cpop();
  h_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_d_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(j_8);
  Rpush(k_8);
  w_15 :
  Cpush(n_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_14;
  y_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_14;
  z_14 :
  TestFunFC(r_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_8);
  goto x_15;
  p_8 :
  goto o_8;
  x_15 :
  Move(0,1,1,3);
  Return();
  o_8 :
  Epopd(1,4);
  goto m_8;
  n_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_8);
  goto w_15;
  t_8 :
  AllBuild();
  goto s_8;
  m_8 :
  Cpop();
  s_8 :
  Return();
  k_8 :
  goto i_8;
  j_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto u_8;
  i_8 :
  Cpop();
  u_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
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
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  Cpush(x_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(y_8);
  c_16 :
  Cpush(a_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_15;
  f_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_15;
  g_15 :
  TestFunFC(d_9,&&fail,Egetd(1,2));
  Rpush(c_9);
  goto d_16;
  c_9 :
  goto b_9;
  d_16 :
  Return();
  b_9 :
  Epopd(1,3);
  goto z_8;
  a_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_9);
  goto c_16;
  g_9 :
  AllBuild();
  goto f_9;
  z_8 :
  Cpop();
  f_9 :
  Return();
  y_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_4);
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  goto v_8;
  x_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_4);
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  goto h_9;
  v_8 :
  Cpop();
  h_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_g_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,2);
  Tdupl();
  Cpush(j_9);
  Cpush(l_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(n_9);
  Tdupl();
  Rpush(o_9);
  u_17 :
  Cpush(q_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_16;
  f_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_16;
  g_16 :
  TestFunFC(t_9,&&fail,Egetd(1,2));
  Rpush(s_9);
  goto v_17;
  s_9 :
  goto r_9;
  v_17 :
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
  goto u_17;
  w_9 :
  AllBuild();
  goto v_9;
  p_9 :
  Cpop();
  v_9 :
  Return();
  o_9 :
  Cpop();
  Crestore();
  Cjump();
  n_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(x_9);
  w_17 :
  Cpush(z_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_16;
  i_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_16;
  j_16 :
  TestFunFC(d_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_10);
  goto x_17;
  b_10 :
  goto a_10;
  x_17 :
  Move(0,2,1,3);
  Return();
  a_10 :
  Epopd(1,4);
  goto y_9;
  z_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_10);
  goto w_17;
  f_10 :
  AllBuild();
  goto e_10;
  y_9 :
  Cpop();
  e_10 :
  Return();
  x_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(g_10);
  y_17 :
  Cpush(i_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_16;
  l_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_16;
  m_16 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_10);
  goto z_17;
  l_10 :
  goto k_10;
  z_17 :
  Move(0,1,1,3);
  Return();
  k_10 :
  Epopd(1,4);
  goto h_10;
  i_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_10);
  goto y_17;
  n_10 :
  AllBuild();
  goto m_10;
  h_10 :
  Cpop();
  m_10 :
  Return();
  g_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_z_3);
  goto k_9;
  l_9 :
  goto p_10;
  k_9 :
  Cpop();
  p_10 :
  goto i_9;
  j_9 :
  Ccontinue(q_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(r_10);
  Tdupl();
  Rpush(s_10);
  a_18 :
  Cpush(v_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto o_16;
  o_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_16;
  p_16 :
  TestFunFC(t_9,&&fail,Egetd(1,2));
  Rpush(x_10);
  goto b_18;
  x_10 :
  goto w_10;
  b_18 :
  Return();
  w_10 :
  Epopd(1,3);
  goto u_10;
  v_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_11);
  goto a_18;
  a_11 :
  AllBuild();
  goto z_10;
  u_10 :
  Cpop();
  z_10 :
  Return();
  s_10 :
  Cpop();
  Crestore();
  Cjump();
  r_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_11);
  c_18 :
  Cpush(e_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_16;
  r_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_16;
  s_16 :
  TestFunFC(d_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_11);
  goto d_18;
  i_11 :
  goto f_11;
  d_18 :
  Move(0,2,1,3);
  Return();
  f_11 :
  Epopd(1,4);
  goto c_11;
  e_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_11);
  goto c_18;
  o_11 :
  AllBuild();
  goto l_11;
  c_11 :
  Cpop();
  l_11 :
  Return();
  b_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(r_11);
  e_18 :
  Cpush(x_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_16;
  u_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_16;
  v_16 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_12);
  goto f_18;
  b_12 :
  goto y_11;
  f_18 :
  Move(0,1,1,3);
  Return();
  y_11 :
  Epopd(1,4);
  goto u_11;
  x_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_12);
  goto e_18;
  f_12 :
  AllBuild();
  goto c_12;
  u_11 :
  Cpop();
  c_12 :
  Return();
  r_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_z_3);
  goto i_9;
  q_10 :
  goto g_12;
  i_9 :
  Cpop();
  g_12 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_a_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_3);
  Tset(MakeInt(1));
  Ccall(_stratego_a_4);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_18;
  h_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(k_12);
  goto j_18;
  k_12 :
  goto j_12;
  j_18 :
  Return();
  j_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Rpush(n_12);
  r_18 :
  Cpush(r_12);
  TestFunTop(u_12);
  TravInit();
  OneNextSon();
  Rpush(x_12);
  goto r_18;
  x_12 :
  OneNextSon();
  Rpush(a_13);
  goto r_18;
  a_13 :
  AllBuild();
  goto o_12;
  r_12 :
  Rpush(e_13);
  s_18 :
  Cpush(o_13);
  TestFunTop(y_13);
  TravInit();
  OneNextSon();
  Rpush(b_14);
  goto s_18;
  b_14 :
  OneNextSon();
  Rpush(c_14);
  goto s_18;
  c_14 :
  AllBuild();
  goto k_13;
  o_13 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_18;
  m_18 :
  TestFunFC(o_14,&&n_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_14);
  goto t_18;
  n_14 :
  TestFunFC(q_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_18;
  n_18 :
  TestFunFC(o_14,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(m_14);
  goto w_18;
  m_14 :
  goto k_14;
  w_18 :
  Return();
  k_14 :
  goto e_14;
  t_18 :
  Return();
  e_14 :
  Epopd(0,3);
  goto d_14;
  k_13 :
  Cpop();
  d_14 :
  Return();
  e_13 :
  goto d_13;
  o_12 :
  Cpop();
  d_13 :
  Return();
  n_12 :
ENDPROC

DOIT

