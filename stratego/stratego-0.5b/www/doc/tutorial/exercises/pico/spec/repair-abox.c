#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_15);
VARDECL(AFun,q_12);
VARDECL(AFun,i_11);
VARDECL(AFun,t_10);
VARDECL(AFun,g_10);
VARDECL(AFun,t_9);
VARDECL(AFun,i_9);
VARDECL(AFun,b_9);
VARDECL(AFun,x_8);
VARDECL(AFun,x_0);
VARDECL(AFun,t_0);
VARDECL(AFun,q_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_h_4);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);

PROC(_stratego_init_afuns)
  MOVE(d_15,ATmakeAFun("S",1,0));
  MOVE(q_12,ATmakeAFun("Runtime",1,0));
  MOVE(i_11,ATmakeAFun("Silent",0,0));
  MOVE(t_10,ATmakeAFun("Binary",0,0));
  MOVE(g_10,ATmakeAFun("Output",1,0));
  MOVE(t_9,ATmakeAFun("Input",1,0));
  MOVE(i_9,ATmakeAFun("Program",1,0));
  MOVE(b_9,ATmakeAFun("Help",0,0));
  MOVE(x_8,ATmakeAFun("Undefined",1,0));
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
  k_4 :
  Cpush(f_0);
  Cpush(h_0);
  Ccall(_stratego_s_3);
  goto g_0;
  h_0 :
  Ccall(_stratego_t_3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_0);
  goto k_4;
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
  Ccall(_stratego_u_3);
  goto n_0;
  o_0 :
  Ccontinue(p_0);
  Epushd(0,6);
  Ccall(_stratego_z_3);
  Tdupl();
  Ccall(_stratego_g_4);
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Ccall(_stratego_o_4);
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
  Ccall(_stratego_h_4);
  Ccall(_stratego_m_4);
  Epopd(0,6);
  goto n_0;
  p_0 :
  Ccall(_stratego_n_4);
  goto u_0;
  n_0 :
  Cpop();
  u_0 :
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_5;
  b_5 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  Rpush(w_0);
  goto a_5;
  w_0 :
  goto v_0;
  a_5 :
  Return();
  v_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto q_7;
  q_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_7;
  r_7 :
  TestFunFC(a_0,&&o_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(q_1);
  Rpush(r_1);
  goto d_5;
  r_1 :
  goto p_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto e_5;
  t_1 :
  goto p_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto f_5;
  v_1 :
  goto p_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto g_5;
  x_1 :
  goto p_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto h_5;
  z_1 :
  goto p_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto i_5;
  b_2 :
  goto p_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto j_5;
  d_2 :
  goto p_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto k_5;
  f_2 :
  goto p_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto l_5;
  h_2 :
  goto p_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto m_5;
  j_2 :
  goto p_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto n_5;
  l_2 :
  goto p_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto o_5;
  n_2 :
  goto p_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto p_5;
  p_2 :
  goto p_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto q_5;
  r_2 :
  goto p_1;
  q_2 :
  Rpush(t_2);
  goto r_5;
  t_2 :
  goto s_2;
  p_1 :
  Cpop();
  s_2 :
  goto n_1;
  o_1 :
  Cpush(a_3);
  Rpush(c_3);
  goto d_5;
  c_3 :
  goto v_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto e_5;
  e_3 :
  goto v_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto f_5;
  i_3 :
  goto v_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto g_5;
  n_3 :
  goto v_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto h_5;
  p_3 :
  goto v_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto n_5;
  r_3 :
  goto v_2;
  q_3 :
  Ccontinue(e_4);
  Rpush(j_4);
  goto o_5;
  j_4 :
  goto v_2;
  e_4 :
  Ccontinue(r_4);
  Rpush(s_4);
  goto p_5;
  s_4 :
  goto v_2;
  r_4 :
  Ccontinue(t_4);
  Rpush(u_5);
  goto q_5;
  u_5 :
  goto v_2;
  t_4 :
  Rpush(a_6);
  goto r_5;
  a_6 :
  goto x_5;
  v_2 :
  Cpop();
  x_5 :
  goto n_1;
  n_1 :
  goto m_1;
  r_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(g_6);
  goto n_7;
  g_6 :
  goto d_6;
  n_7 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  q_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(k_6);
  goto k_7;
  k_6 :
  goto j_6;
  k_7 :
  Return();
  j_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  p_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(o_6);
  goto h_7;
  o_6 :
  goto n_6;
  h_7 :
  Return();
  n_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  o_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(s_6);
  goto e_7;
  s_6 :
  goto r_6;
  e_7 :
  Return();
  r_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  n_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(w_6);
  goto b_7;
  w_6 :
  goto v_6;
  b_7 :
  Return();
  v_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  m_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(a_7);
  goto x_6;
  a_7 :
  goto z_6;
  x_6 :
  Return();
  z_6 :
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
  l_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(g_7);
  goto t_6;
  g_7 :
  goto d_7;
  t_6 :
  Return();
  d_7 :
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
  k_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(m_7);
  goto p_6;
  m_7 :
  goto j_7;
  p_6 :
  Return();
  j_7 :
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
  j_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(x_7);
  goto l_6;
  x_7 :
  goto p_7;
  l_6 :
  Return();
  p_7 :
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
  i_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(a_8);
  goto h_6;
  a_8 :
  goto y_7;
  h_6 :
  Return();
  y_7 :
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
  h_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_6;
  f_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(c_8);
  goto e_6;
  c_8 :
  goto b_8;
  e_6 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  g_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_8);
  goto b_6;
  f_8 :
  goto d_8;
  b_6 :
  Return();
  d_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  f_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_5;
  z_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_8);
  goto y_5;
  h_8 :
  goto g_8;
  y_5 :
  Return();
  g_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  e_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_5;
  w_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_8);
  goto v_5;
  k_8 :
  goto i_8;
  v_5 :
  Return();
  i_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  d_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_5;
  t_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_8);
  goto s_5;
  m_8 :
  goto l_8;
  s_5 :
  Return();
  l_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_3)
  Tdupl();
  n_8 :
  TestFunTop(a_0);
  Cpush(p_8);
  Arg(0);
  Cpush(s_8);
  Ccall(_stratego_v_3);
  goto r_8;
  s_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto k_11;
  k_11 :
  TestFunFC(x_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_8);
  goto j_11;
  w_8 :
  goto v_8;
  j_11 :
  Return();
  v_8 :
  Epopd(0,2);
  goto u_8;
  r_8 :
  Cpop();
  u_8 :
  Tpop();
  Cpop();
  goto q_8;
  p_8 :
  Arg(1);
  Tdrop();
  goto n_8;
  q_8 :
  Tpop();
  Ccall(_stratego_w_3);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_11;
  p_11 :
  TestFunFC(b_9,&&fail,Egetd(0,1));
  Rpush(a_9);
  goto o_11;
  a_9 :
  goto y_8;
  o_11 :
  Return();
  y_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  Tdupl();
  Rpush(c_9);
  z_11 :
  Cpush(e_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_11;
  s_11 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_11;
  t_11 :
  TestFunFC(i_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_9);
  goto r_11;
  g_9 :
  goto f_9;
  r_11 :
  Move(0,1,1,3);
  Return();
  f_9 :
  Epopd(1,4);
  goto d_9;
  e_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto z_11;
  k_9 :
  AllBuild();
  goto j_9;
  d_9 :
  Cpop();
  j_9 :
  Return();
  c_9 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_x_3);
  Tset(MakeInt(1));
  Ccall(_stratego_y_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_y_3)
  _ST_exit();
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,3);
  Tdupl();
  Cpush(m_9);
  Rpush(n_9);
  t_12 :
  Cpush(q_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_12;
  b_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_12;
  c_12 :
  TestFunFC(t_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_9);
  goto a_12;
  s_9 :
  goto r_9;
  a_12 :
  Move(0,1,1,3);
  Return();
  r_9 :
  Epopd(1,4);
  goto o_9;
  q_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_9);
  goto t_12;
  v_9 :
  AllBuild();
  goto u_9;
  o_9 :
  Cpop();
  u_9 :
  Return();
  n_9 :
  goto l_9;
  m_9 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto w_9;
  l_9 :
  Cpop();
  w_9 :
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
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(z_9);
  Rpush(a_10);
  t_13 :
  Cpush(c_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_12;
  v_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_12;
  w_12 :
  TestFunFC(g_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_10);
  goto u_12;
  e_10 :
  goto d_10;
  u_12 :
  Move(0,1,1,3);
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
  goto t_13;
  i_10 :
  AllBuild();
  goto h_10;
  b_10 :
  Cpop();
  h_10 :
  Return();
  a_10 :
  goto y_9;
  z_9 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto j_10;
  y_9 :
  Cpop();
  j_10 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_4);
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
  Ccall(_stratego_o_4);
  AllBuild();
  AllBuild();
  Cpush(l_10);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(n_10);
  u_13 :
  Cpush(p_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_13;
  c_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_13;
  d_13 :
  TestFunFC(t_10,&&fail,Egetd(1,2));
  Rpush(s_10);
  goto b_13;
  s_10 :
  goto q_10;
  b_13 :
  Return();
  q_10 :
  Epopd(1,3);
  goto o_10;
  p_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_10);
  goto u_13;
  v_10 :
  AllBuild();
  goto u_10;
  o_10 :
  Cpop();
  u_10 :
  Return();
  n_10 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_4);
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  AllBuild();
  goto k_10;
  l_10 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_4);
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  AllBuild();
  goto x_10;
  k_10 :
  Cpop();
  x_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_l_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,2);
  Tdupl();
  Cpush(z_10);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(a_11);
  Tdupl();
  Rpush(c_11);
  r_14 :
  Cpush(e_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto w_13;
  w_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_13;
  x_13 :
  TestFunFC(i_11,&&fail,Egetd(1,2));
  Rpush(h_11);
  goto v_13;
  h_11 :
  goto f_11;
  v_13 :
  Return();
  f_11 :
  Epopd(1,3);
  goto d_11;
  e_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_12);
  goto r_14;
  e_12 :
  AllBuild();
  goto d_12;
  d_11 :
  Cpop();
  d_12 :
  Return();
  c_11 :
  Cpop();
  Crestore();
  Cjump();
  a_11 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(f_12);
  s_14 :
  Cpush(m_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_13;
  z_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_14;
  a_14 :
  TestFunFC(q_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_12);
  goto y_13;
  p_12 :
  goto o_12;
  y_13 :
  Move(0,2,1,3);
  Return();
  o_12 :
  Epopd(1,4);
  goto g_12;
  m_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_12);
  goto s_14;
  x_12 :
  AllBuild();
  goto s_12;
  g_12 :
  Cpop();
  s_12 :
  Return();
  f_12 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(y_12);
  t_14 :
  Cpush(a_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_14;
  c_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_14;
  d_14 :
  TestFunFC(i_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_13);
  goto b_14;
  l_13 :
  goto j_13;
  b_14 :
  Move(0,1,1,3);
  Return();
  j_13 :
  Epopd(1,4);
  goto z_12;
  a_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_13);
  goto t_14;
  n_13 :
  AllBuild();
  goto m_13;
  z_12 :
  Cpop();
  m_13 :
  Return();
  y_12 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_x_3);
  goto y_10;
  z_10 :
  goto o_13;
  y_10 :
  Cpop();
  o_13 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_y_3);
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_x_3);
  Tset(MakeInt(1));
  Ccall(_stratego_y_3);
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_14;
  v_14 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  Rpush(y_14);
  goto u_14;
  y_14 :
  goto p_13;
  u_14 :
  Return();
  p_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Rpush(z_14);
  x_14 :
  Cpush(b_15);
  TestFunTop(d_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  goto a_15;
  b_15 :
  AllInit();
  f_15 :
  AllNextSon(&&g_15);
  Rpush(i_15);
  goto x_14;
  i_15 :
  goto f_15;
  g_15 :
  AllBuild();
  goto e_15;
  a_15 :
  Cpop();
  e_15 :
  Return();
  z_14 :
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,2);
  Ccall(_stratego_u_4);
  MoveTop(0,1);
  Ccall(_stratego_v_4);
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("Cons",MakeInt(34),App0("Nil")),App2("Cons",Egetd(0,2),App2("Cons",App2("Cons",MakeInt(34),App0("Nil")),App0("Nil")))));
  Ccall(_stratego_y_4);
  Ccall(_stratego_z_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_4)
  _ST_explode_string();
ENDPROC

PROC(_stratego_v_4)
  Cpush(u_15);
  Ccall(_stratego_u_4);
  Rpush(v_15);
  j_15 :
  Cpush(e_16);
  Ccall(_stratego_w_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_16);
  goto j_15;
  k_16 :
  AllBuild();
  AllBuild();
  goto d_16;
  e_16 :
  Ccontinue(l_16);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_16);
  goto j_15;
  o_16 :
  AllBuild();
  goto d_16;
  l_16 :
  Ccall(_stratego_s_3);
  goto p_16;
  d_16 :
  Cpop();
  p_16 :
  Return();
  v_15 :
  Ccall(_stratego_z_4);
  goto t_15;
  u_15 :
  Rpush(r_16);
  k_15 :
  Cpush(t_16);
  Ccall(_stratego_x_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_16);
  goto k_15;
  u_16 :
  AllBuild();
  AllBuild();
  goto s_16;
  t_16 :
  Ccontinue(v_16);
  Ccall(_stratego_s_3);
  goto s_16;
  v_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_16);
  goto k_15;
  x_16 :
  AllBuild();
  goto w_16;
  s_16 :
  Cpop();
  w_16 :
  Return();
  r_16 :
  goto q_16;
  t_15 :
  Cpop();
  q_16 :
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,3);
  MoveTop(0,1);
  goto o_15;
  o_15 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_15;
  p_15 :
  TestInt(0,2,34,&&c_17);
  Rpush(b_17);
  goto l_15;
  c_17 :
  TestInt(0,2,92,&&d_17);
  Rpush(b_17);
  goto m_15;
  d_17 :
  TestInt(0,2,10,&&fail);
  Rpush(b_17);
  goto n_15;
  b_17 :
  goto a_17;
  n_15 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(110),Egetd(0,3))));
  Return();
  a_17 :
  goto z_16;
  m_15 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(92),Egetd(0,3))));
  Return();
  z_16 :
  goto y_16;
  l_15 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(34),Egetd(0,3))));
  Return();
  y_16 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,3);
  MoveTop(0,1);
  goto y_15;
  y_15 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_15;
  z_15 :
  TestInt(0,2,92,&&h_17);
  Rpush(g_17);
  goto w_15;
  h_17 :
  TestInt(0,2,34,&&fail);
  Rpush(g_17);
  goto x_15;
  g_17 :
  goto f_17;
  x_15 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(34),Egetd(0,3))));
  Return();
  f_17 :
  goto e_17;
  w_15 :
  NotNULLd(0,3);
  Tset(App2("Cons",MakeInt(92),App2("Cons",MakeInt(92),Egetd(0,3))));
  Return();
  e_17 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_4)
  Rpush(i_17);
  m_16 :
  Cpush(k_17);
  Ccall(_stratego_s_3);
  goto j_17;
  k_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_16;
  g_16 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_17);
  goto f_16;
  n_17 :
  goto m_17;
  f_16 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(o_17);
  n_16 :
  Cpush(q_17);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_17);
  goto n_16;
  r_17 :
  AllBuild();
  goto p_17;
  q_17 :
  Ccall(_stratego_s_3);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_17);
  goto m_16;
  t_17 :
  goto s_17;
  p_17 :
  Cpop();
  s_17 :
  Return();
  o_17 :
  Return();
  m_17 :
  Epopd(0,3);
  goto l_17;
  j_17 :
  Cpop();
  l_17 :
  Return();
  i_17 :
ENDPROC

PROC(_stratego_z_4)
  _ST_implode_string();
ENDPROC

DOIT

