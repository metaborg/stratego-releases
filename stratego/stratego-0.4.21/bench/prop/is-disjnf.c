#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_15);
VARDECL(AFun,y_14);
VARDECL(AFun,a_14);
VARDECL(AFun,w_13);
VARDECL(AFun,z_12);
VARDECL(AFun,k_12);
VARDECL(AFun,d_10);
VARDECL(AFun,u_9);
VARDECL(AFun,e_9);
VARDECL(AFun,q_8);
VARDECL(AFun,v_7);
VARDECL(AFun,g_7);
VARDECL(AFun,y_6);
VARDECL(AFun,u_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_h_4);
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
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);

PROC(_stratego_init_afuns)
  MOVE(c_15,ATmakeAFun("False",0,0));
  MOVE(y_14,ATmakeAFun("True",0,0));
  MOVE(a_14,ATmakeAFun("Not",1,0));
  MOVE(w_13,ATmakeAFun("Atom",1,0));
  MOVE(z_12,ATmakeAFun("And",2,0));
  MOVE(k_12,ATmakeAFun("Or",2,0));
  MOVE(d_10,ATmakeAFun("Runtime",1,0));
  MOVE(u_9,ATmakeAFun("Silent",0,0));
  MOVE(e_9,ATmakeAFun("Binary",0,0));
  MOVE(q_8,ATmakeAFun("Output",1,0));
  MOVE(v_7,ATmakeAFun("Input",1,0));
  MOVE(g_7,ATmakeAFun("Program",1,0));
  MOVE(y_6,ATmakeAFun("Help",0,0));
  MOVE(u_6,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_h_4);
ENDPROC

PROC(_stratego_h_4)
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
  e_5 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_i_4);
  goto f_0;
  g_0 :
  Ccall(_stratego_j_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto e_5;
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
  goto f_5;
  l_0 :
  goto k_0;
  f_5 :
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
  Ccall(_stratego_k_4);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_p_4);
  Tdupl();
  Ccall(_stratego_r_4);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_4);
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
  goto h_5;
  r_0 :
  goto q_0;
  h_5 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_s_4);
  Ccall(_stratego_v_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_w_4);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_5;
  j_5 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto l_5;
  v_0 :
  goto u_0;
  l_5 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
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
  Rpush(c_3);
  goto v_11;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto y_11;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto b_12;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto e_12;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto b_13;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto e_13;
  r_3 :
  goto t_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(v_3);
  goto h_13;
  v_3 :
  goto t_2;
  s_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto k_13;
  x_3 :
  goto t_2;
  w_3 :
  Rpush(z_3);
  goto n_13;
  z_3 :
  goto y_3;
  t_2 :
  Cpop();
  y_3 :
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
  Rpush(d_4);
  goto o_13;
  d_4 :
  goto c_4;
  o_13 :
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
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_7;
  u_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto l_13;
  f_4 :
  goto e_4;
  l_13 :
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
  h_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(b_5);
  goto i_13;
  b_5 :
  goto g_4;
  i_13 :
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
  e_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(d_5);
  goto f_13;
  d_5 :
  goto c_5;
  f_13 :
  Return();
  c_5 :
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
  Rpush(i_5);
  goto c_13;
  i_5 :
  goto g_5;
  c_13 :
  Return();
  g_5 :
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
  Rpush(n_5);
  goto y_12;
  n_5 :
  goto m_5;
  y_12 :
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
  Rpush(p_5);
  goto u_12;
  p_5 :
  goto o_5;
  u_12 :
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
  Rpush(r_5);
  goto q_12;
  r_5 :
  goto q_5;
  q_12 :
  Return();
  q_5 :
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
  Rpush(t_5);
  goto m_12;
  t_5 :
  goto s_5;
  m_12 :
  Return();
  s_5 :
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
  Rpush(v_5);
  goto i_12;
  v_5 :
  goto u_5;
  i_12 :
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
  e_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(x_5);
  goto f_12;
  x_5 :
  goto w_5;
  f_12 :
  Return();
  w_5 :
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
  Rpush(z_5);
  goto c_12;
  z_5 :
  goto y_5;
  c_12 :
  Return();
  y_5 :
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
  Rpush(b_6);
  goto z_11;
  b_6 :
  goto a_6;
  z_11 :
  Return();
  a_6 :
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
  Rpush(e_6);
  goto w_11;
  e_6 :
  goto d_6;
  w_11 :
  Return();
  d_6 :
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
  Rpush(h_6);
  goto t_11;
  h_6 :
  goto g_6;
  t_11 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_4)
  Tdupl();
  j_6 :
  TestFunTop(a_0);
  Cpush(k_6);
  Arg(0);
  Cpush(p_6);
  Ccall(_stratego_l_4);
  goto n_6;
  p_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto r_13;
  r_13 :
  TestFunFC(u_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_6);
  goto v_13;
  t_6 :
  goto s_6;
  v_13 :
  Return();
  s_6 :
  Epopd(0,2);
  goto q_6;
  n_6 :
  Cpop();
  q_6 :
  Tpop();
  Cpop();
  goto m_6;
  k_6 :
  Arg(1);
  Tdrop();
  goto j_6;
  m_6 :
  Tpop();
  Ccall(_stratego_m_4);
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_13;
  x_13 :
  TestFunFC(y_6,&&fail,Egetd(0,1));
  Rpush(x_6);
  goto z_13;
  x_6 :
  goto w_6;
  z_13 :
  Return();
  w_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  Tdupl();
  Rpush(a_7);
  i_14 :
  Cpush(c_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_14;
  b_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_14;
  c_14 :
  TestFunFC(g_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_7);
  goto j_14;
  f_7 :
  goto e_7;
  j_14 :
  Move(0,1,1,3);
  Return();
  e_7 :
  Epopd(1,4);
  goto b_7;
  c_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_7);
  goto i_14;
  j_7 :
  AllBuild();
  goto i_7;
  b_7 :
  Cpop();
  i_7 :
  Return();
  a_7 :
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
  Cpush(m_7);
  Rpush(n_7);
  d_15 :
  Cpush(q_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_14;
  l_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_14;
  m_14 :
  TestFunFC(v_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_7);
  goto e_15;
  t_7 :
  goto s_7;
  e_15 :
  Move(0,1,1,3);
  Return();
  s_7 :
  Epopd(1,4);
  goto p_7;
  q_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_7);
  goto d_15;
  y_7 :
  AllBuild();
  goto w_7;
  p_7 :
  Cpop();
  w_7 :
  Return();
  n_7 :
  goto k_7;
  m_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto g_8;
  k_7 :
  Cpop();
  g_8 :
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
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(j_8);
  Rpush(k_8);
  i_16 :
  Cpush(m_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_15;
  k_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_15;
  l_15 :
  TestFunFC(q_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_8);
  goto j_16;
  p_8 :
  goto o_8;
  j_16 :
  Move(0,1,1,3);
  Return();
  o_8 :
  Epopd(1,4);
  goto l_8;
  m_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_8);
  goto i_16;
  t_8 :
  AllBuild();
  goto r_8;
  l_8 :
  Cpop();
  r_8 :
  Return();
  k_8 :
  goto h_8;
  j_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto u_8;
  h_8 :
  Cpop();
  u_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
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
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  Cpush(w_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(y_8);
  o_16 :
  Cpush(a_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_15;
  r_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_15;
  s_15 :
  TestFunFC(e_9,&&fail,Egetd(1,2));
  Rpush(d_9);
  goto p_16;
  d_9 :
  goto b_9;
  p_16 :
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
  goto o_16;
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
  Ccall(_stratego_t_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  goto v_8;
  w_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  goto h_9;
  v_8 :
  Cpop();
  h_9 :
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
  Cpush(k_9);
  Cpush(m_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(n_9);
  Tdupl();
  Rpush(o_9);
  g_18 :
  Cpush(r_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_16;
  r_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_16;
  s_16 :
  TestFunFC(u_9,&&fail,Egetd(1,2));
  Rpush(t_9);
  goto h_18;
  t_9 :
  goto s_9;
  h_18 :
  Return();
  s_9 :
  Epopd(1,3);
  goto p_9;
  r_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_9);
  goto g_18;
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
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(x_9);
  i_18 :
  Cpush(a_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_16;
  u_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_16;
  v_16 :
  TestFunFC(d_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_10);
  goto j_18;
  c_10 :
  goto b_10;
  j_18 :
  Move(0,2,1,3);
  Return();
  b_10 :
  Epopd(1,4);
  goto z_9;
  a_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_10);
  goto i_18;
  f_10 :
  AllBuild();
  goto e_10;
  z_9 :
  Cpop();
  e_10 :
  Return();
  x_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(h_10);
  k_18 :
  Cpush(j_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_16;
  x_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_16;
  y_16 :
  TestFunFC(g_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_10);
  goto l_18;
  l_10 :
  goto k_10;
  l_18 :
  Move(0,1,1,3);
  Return();
  k_10 :
  Epopd(1,4);
  goto i_10;
  j_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_10);
  goto k_18;
  n_10 :
  AllBuild();
  goto m_10;
  i_10 :
  Cpop();
  m_10 :
  Return();
  h_10 :
  OneNextSon();
  TestFunTop(p_0);
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
  goto l_9;
  m_9 :
  goto p_10;
  l_9 :
  Cpop();
  p_10 :
  goto j_9;
  k_9 :
  Ccontinue(q_10);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(r_10);
  Tdupl();
  Rpush(s_10);
  m_18 :
  Cpush(u_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_17;
  a_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_17;
  b_17 :
  TestFunFC(u_9,&&fail,Egetd(1,2));
  Rpush(x_10);
  goto n_18;
  x_10 :
  goto w_10;
  n_18 :
  Return();
  w_10 :
  Epopd(1,3);
  goto t_10;
  u_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_10);
  goto m_18;
  z_10 :
  AllBuild();
  goto y_10;
  t_10 :
  Cpop();
  y_10 :
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
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_11);
  o_18 :
  Cpush(d_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_17;
  d_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_17;
  e_17 :
  TestFunFC(d_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_11);
  goto p_18;
  g_11 :
  goto e_11;
  p_18 :
  Move(0,2,1,3);
  Return();
  e_11 :
  Epopd(1,4);
  goto c_11;
  d_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_11);
  goto o_18;
  i_11 :
  AllBuild();
  goto h_11;
  c_11 :
  Cpop();
  h_11 :
  Return();
  b_11 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(j_11);
  q_18 :
  Cpush(m_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_17;
  g_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_17;
  h_17 :
  TestFunFC(g_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_11);
  goto r_18;
  o_11 :
  goto n_11;
  r_18 :
  Move(0,1,1,3);
  Return();
  n_11 :
  Epopd(1,4);
  goto l_11;
  m_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_11);
  goto q_18;
  r_11 :
  AllBuild();
  goto q_11;
  l_11 :
  Cpop();
  q_11 :
  Return();
  j_11 :
  OneNextSon();
  TestFunTop(p_0);
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
  goto j_9;
  q_10 :
  goto u_11;
  j_9 :
  Cpop();
  u_11 :
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
  goto t_18;
  t_18 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(a_12);
  goto x_18;
  a_12 :
  goto x_11;
  x_18 :
  Return();
  x_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_4)
  Rpush(d_12);
  m_20 :
  Cpush(j_12);
  TestFunTop(k_12);
  TravInit();
  OneNextSon();
  Rpush(n_12);
  goto m_20;
  n_12 :
  OneNextSon();
  Rpush(o_12);
  goto m_20;
  o_12 :
  AllBuild();
  goto g_12;
  j_12 :
  Ccontinue(r_12);
  Rpush(s_12);
  n_20 :
  Cpush(w_12);
  TestFunTop(z_12);
  TravInit();
  OneNextSon();
  Rpush(a_13);
  goto n_20;
  a_13 :
  OneNextSon();
  Rpush(d_13);
  goto n_20;
  d_13 :
  AllBuild();
  goto v_12;
  w_12 :
  Ccontinue(g_13);
  Epushd(0,3);
  MoveTop(0,1);
  goto d_19;
  d_19 :
  TestFunFC(w_13,&&q_13,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_13);
  goto o_20;
  q_13 :
  TestFunFC(a_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto e_19;
  e_19 :
  TestFunFC(w_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_13);
  goto p_20;
  p_13 :
  goto m_13;
  p_20 :
  Return();
  m_13 :
  goto j_13;
  o_20 :
  Return();
  j_13 :
  Epopd(0,3);
  goto v_12;
  g_13 :
  Ccontinue(k_14);
  Ccall(_stratego_z_4);
  goto v_12;
  k_14 :
  Ccontinue(n_14);
  Ccall(_stratego_a_5);
  goto v_12;
  n_14 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a conjunct: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_4);
  Epopd(0,1);
  Tpop();
  goto o_14;
  v_12 :
  Cpop();
  o_14 :
  Return();
  s_12 :
  goto g_12;
  r_12 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a disjunct: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_4);
  Epopd(0,1);
  Tpop();
  goto p_14;
  g_12 :
  Cpop();
  p_14 :
  Return();
  d_12 :
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_21;
  b_21 :
  TestFunFC(y_14,&&fail,Egetd(0,1));
  Rpush(w_14);
  goto d_21;
  w_14 :
  goto q_14;
  d_21 :
  Return();
  q_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_21;
  f_21 :
  TestFunFC(c_15,&&fail,Egetd(0,1));
  Rpush(a_15);
  goto h_21;
  a_15 :
  goto z_14;
  h_21 :
  Return();
  z_14 :
  Epopd(0,1);
ENDPROC

DOIT

