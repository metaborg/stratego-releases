#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_11);
VARDECL(AFun,t_10);
VARDECL(AFun,f_10);
VARDECL(AFun,t_9);
VARDECL(AFun,g_9);
VARDECL(AFun,t_8);
VARDECL(AFun,e_8);
VARDECL(AFun,a_8);
VARDECL(AFun,a_2);
VARDECL(AFun,w_1);
VARDECL(AFun,q_1);
VARDECL(AFun,p_1);
VARDECL(AFun,n_1);
VARDECL(AFun,y_0);
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

PROC(_stratego_init_afuns)
  MOVE(c_11,ATmakeAFun("Runtime",1,0));
  MOVE(t_10,ATmakeAFun("Silent",0,0));
  MOVE(f_10,ATmakeAFun("Binary",0,0));
  MOVE(t_9,ATmakeAFun("Output",1,0));
  MOVE(g_9,ATmakeAFun("Input",1,0));
  MOVE(t_8,ATmakeAFun("Program",1,0));
  MOVE(e_8,ATmakeAFun("Help",0,0));
  MOVE(a_8,ATmakeAFun("Undefined",1,0));
  MOVE(a_2,ATmakeAFun("Nil",0,0));
  MOVE(w_1,ATmakeAFun("TNil",0,0));
  MOVE(q_1,ATmakeAFun("Succ",1,0));
  MOVE(p_1,ATmakeAFun("Zero",0,0));
  MOVE(n_1,ATmakeAFun("Plus",2,0));
  MOVE(y_0,ATmakeAFun("TCons",2,0));
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
  n_4 :
  Cpush(d_0);
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
  goto n_4;
  i_0 :
  AllBuild();
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  goto c_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_0;
  e_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_0);
  goto p_4;
  r_0 :
  goto m_0;
  p_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  m_0 :
  Epopd(0,3);
  goto l_0;
  c_0 :
  Cpop();
  l_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(w_0);
  Ccall(_stratego_b_5);
  goto v_0;
  w_0 :
  Ccontinue(x_0);
  Epushd(0,6);
  Ccall(_stratego_g_5);
  Tdupl();
  Ccall(_stratego_i_5);
  Tpop();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(z_0);
  q_4 :
  AllInit();
  a_1 :
  AllNextSon(&&f_1);
  Rpush(g_1);
  goto q_4;
  g_1 :
  goto a_1;
  f_1 :
  AllBuild();
  Rpush(h_1);
  r_4 :
  Cpush(j_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_0;
  j_0 :
  TestFunFC(n_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_0;
  k_0 :
  TestFunFC(p_1,&&o_1,Egetd(1,2));
  Rpush(m_1);
  goto s_4;
  o_1 :
  TestFunFC(q_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_1);
  goto t_4;
  m_1 :
  goto l_1;
  t_4 :
  Epushd(2,2);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("Plus",Egetd(1,3),Egetd(1,4)));
  Rpush(r_1);
  goto r_4;
  r_1 :
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(2,1);
  Tset(App1("Succ",Egetd(2,1)));
  Rpush(s_1);
  goto r_4;
  s_1 :
  Epopd(2,2);
  Return();
  l_1 :
  goto k_1;
  s_4 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  k_1 :
  Epopd(1,4);
  goto i_1;
  j_1 :
  goto t_1;
  i_1 :
  Cpop();
  t_1 :
  Return();
  h_1 :
  Return();
  z_0 :
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
  goto n_0;
  n_0 :
  TestFunFC(y_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_0;
  o_0 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto p_0;
  p_0 :
  TestFunFC(w_1,&&fail,Egetd(0,6));
  Rpush(v_1);
  goto p_5;
  v_1 :
  goto u_1;
  p_5 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  u_1 :
  Ccall(_stratego_j_5);
  Ccall(_stratego_m_5);
  Epopd(0,6);
  goto v_0;
  x_0 :
  Ccall(_stratego_n_5);
  goto x_1;
  v_0 :
  Cpop();
  x_1 :
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_5;
  r_5 :
  TestFunFC(a_2,&&fail,Egetd(0,1));
  Rpush(z_1);
  goto t_5;
  z_1 :
  goto y_1;
  t_5 :
  Return();
  y_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto h_8;
  h_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_8;
  i_8 :
  TestFunFC(a_0,&&w_2,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(y_2);
  Rpush(z_2);
  goto a_12;
  z_2 :
  goto x_2;
  y_2 :
  Ccontinue(a_3);
  Rpush(b_3);
  goto d_12;
  b_3 :
  goto x_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto g_12;
  d_3 :
  goto x_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto j_12;
  f_3 :
  goto x_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto m_12;
  h_3 :
  goto x_2;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto p_12;
  j_3 :
  goto x_2;
  i_3 :
  Ccontinue(k_3);
  Rpush(l_3);
  goto t_12;
  l_3 :
  goto x_2;
  k_3 :
  Ccontinue(m_3);
  Rpush(n_3);
  goto x_12;
  n_3 :
  goto x_2;
  m_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto g_13;
  p_3 :
  goto x_2;
  o_3 :
  Ccontinue(q_3);
  Rpush(r_3);
  goto k_13;
  r_3 :
  goto x_2;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto o_13;
  t_3 :
  goto x_2;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto r_13;
  v_3 :
  goto x_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto u_13;
  x_3 :
  goto x_2;
  w_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto x_13;
  z_3 :
  goto x_2;
  y_3 :
  Rpush(b_4);
  goto a_14;
  b_4 :
  goto a_4;
  x_2 :
  Cpop();
  a_4 :
  goto v_2;
  w_2 :
  Cpush(h_4);
  Rpush(i_4);
  goto a_12;
  i_4 :
  goto d_4;
  h_4 :
  Ccontinue(j_4);
  Rpush(k_4);
  goto d_12;
  k_4 :
  goto d_4;
  j_4 :
  Ccontinue(l_4);
  Rpush(m_4);
  goto g_12;
  m_4 :
  goto d_4;
  l_4 :
  Ccontinue(o_4);
  Rpush(u_4);
  goto j_12;
  u_4 :
  goto d_4;
  o_4 :
  Ccontinue(v_4);
  Rpush(w_4);
  goto m_12;
  w_4 :
  goto d_4;
  v_4 :
  Ccontinue(x_4);
  Rpush(y_4);
  goto o_13;
  y_4 :
  goto d_4;
  x_4 :
  Ccontinue(q_5);
  Rpush(u_5);
  goto r_13;
  u_5 :
  goto d_4;
  q_5 :
  Ccontinue(v_5);
  Rpush(w_5);
  goto u_13;
  w_5 :
  goto d_4;
  v_5 :
  Ccontinue(x_5);
  Rpush(y_5);
  goto x_13;
  y_5 :
  goto d_4;
  x_5 :
  Rpush(a_6);
  goto a_14;
  a_6 :
  goto z_5;
  d_4 :
  Cpop();
  z_5 :
  goto v_2;
  v_2 :
  goto u_2;
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_8;
  f_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(c_6);
  goto b_14;
  c_6 :
  goto b_6;
  b_14 :
  Return();
  b_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_2 :
  goto r_2;
  x_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_8;
  c_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(e_6);
  goto y_13;
  e_6 :
  goto d_6;
  y_13 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  r_2 :
  goto q_2;
  u_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(g_6);
  goto v_13;
  g_6 :
  goto f_6;
  v_13 :
  Return();
  f_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  q_2 :
  goto p_2;
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_7;
  w_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(i_6);
  goto s_13;
  i_6 :
  goto h_6;
  s_13 :
  Return();
  h_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  p_2 :
  goto o_2;
  o_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_7;
  t_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(l_6);
  goto p_13;
  l_6 :
  goto j_6;
  p_13 :
  Return();
  j_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  o_2 :
  goto k_2;
  k_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_6);
  goto l_13;
  o_6 :
  goto m_6;
  l_13 :
  Return();
  m_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  k_2 :
  goto j_2;
  g_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-o",&&fail);
  Rpush(r_6);
  goto h_13;
  r_6 :
  goto p_6;
  h_13 :
  Return();
  p_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  j_2 :
  goto i_2;
  x_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"--input",&&fail);
  Rpush(u_6);
  goto a_13;
  u_6 :
  goto s_6;
  a_13 :
  Return();
  s_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_2 :
  goto h_2;
  t_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"-i",&&fail);
  Rpush(x_6);
  goto u_12;
  x_6 :
  goto v_6;
  u_12 :
  Return();
  v_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_2 :
  goto g_2;
  p_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(a_7);
  goto q_12;
  a_7 :
  goto y_6;
  q_12 :
  Return();
  y_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_2 :
  goto f_2;
  m_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(c_7);
  goto n_12;
  c_7 :
  goto b_7;
  n_12 :
  Return();
  b_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  f_2 :
  goto e_2;
  j_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_6;
  t_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_7);
  goto k_12;
  f_7 :
  goto e_7;
  k_12 :
  Return();
  e_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  e_2 :
  goto d_2;
  g_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(i_7);
  goto h_12;
  i_7 :
  goto g_7;
  h_12 :
  Return();
  g_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  d_2 :
  goto c_2;
  d_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_6;
  n_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_7);
  goto e_12;
  k_7 :
  goto j_7;
  e_12 :
  Return();
  j_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  c_2 :
  goto b_2;
  a_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestStr(1,1,"-S",&&fail);
  Rpush(n_7);
  goto b_12;
  n_7 :
  goto m_7;
  b_12 :
  Return();
  m_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  b_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_5)
  Tdupl();
  o_7 :
  TestFunTop(a_0);
  Cpush(q_7);
  Arg(0);
  Cpush(u_7);
  Ccall(_stratego_c_5);
  goto s_7;
  u_7 :
  Epushd(0,2);
  MoveTop(0,1);
  goto e_14;
  e_14 :
  TestFunFC(a_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_7);
  goto i_14;
  y_7 :
  goto x_7;
  i_14 :
  Return();
  x_7 :
  Epopd(0,2);
  goto v_7;
  s_7 :
  Cpop();
  v_7 :
  Tpop();
  Cpop();
  goto r_7;
  q_7 :
  Arg(1);
  Tdrop();
  goto o_7;
  r_7 :
  Tpop();
  Ccall(_stratego_d_5);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_14;
  k_14 :
  TestFunFC(e_8,&&fail,Egetd(0,1));
  Rpush(d_8);
  goto m_14;
  d_8 :
  goto b_8;
  m_14 :
  Return();
  b_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  Tdupl();
  Rpush(g_8);
  v_14 :
  Cpush(p_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_14;
  o_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_14;
  p_14 :
  TestFunFC(t_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_8);
  goto w_14;
  s_8 :
  goto r_8;
  w_14 :
  Move(0,1,1,3);
  Return();
  r_8 :
  Epopd(1,4);
  goto o_8;
  p_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_8);
  goto v_14;
  w_8 :
  AllBuild();
  goto u_8;
  o_8 :
  Cpop();
  u_8 :
  Return();
  g_8 :
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
  Cpush(y_8);
  Rpush(z_8);
  q_15 :
  Cpush(c_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_14;
  y_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_14;
  z_14 :
  TestFunFC(g_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_9);
  goto r_15;
  e_9 :
  goto d_9;
  r_15 :
  Move(0,1,1,3);
  Return();
  d_9 :
  Epopd(1,4);
  goto b_9;
  c_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_9);
  goto q_15;
  i_9 :
  AllBuild();
  goto h_9;
  b_9 :
  Cpop();
  h_9 :
  Return();
  z_8 :
  goto x_8;
  y_8 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto j_9;
  x_8 :
  Cpop();
  j_9 :
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
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Cpush(m_9);
  Rpush(n_9);
  v_16 :
  Cpush(p_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_15;
  x_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_15;
  y_15 :
  TestFunFC(t_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_9);
  goto w_16;
  s_9 :
  goto r_9;
  w_16 :
  Move(0,1,1,3);
  Return();
  r_9 :
  Epopd(1,4);
  goto o_9;
  p_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_9);
  goto v_16;
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
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto w_9;
  l_9 :
  Cpop();
  w_9 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
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
  Cpush(z_9);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(a_10);
  b_17 :
  Cpush(c_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_16;
  e_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_16;
  f_16 :
  TestFunFC(f_10,&&fail,Egetd(1,2));
  Rpush(e_10);
  goto c_17;
  e_10 :
  goto d_10;
  c_17 :
  Return();
  d_10 :
  Epopd(1,3);
  goto b_10;
  c_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_10);
  goto b_17;
  i_10 :
  AllBuild();
  goto h_10;
  b_10 :
  Cpop();
  h_10 :
  Return();
  a_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_5);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  goto x_9;
  z_9 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_5);
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  goto j_10;
  x_9 :
  Cpop();
  j_10 :
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
  Cpush(l_10);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Cpush(m_10);
  Tdupl();
  Rpush(n_10);
  z_17 :
  Cpush(q_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_17;
  e_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_17;
  f_17 :
  TestFunFC(t_10,&&fail,Egetd(1,2));
  Rpush(s_10);
  goto a_18;
  s_10 :
  goto r_10;
  a_18 :
  Return();
  r_10 :
  Epopd(1,3);
  goto p_10;
  q_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_10);
  goto z_17;
  v_10 :
  AllBuild();
  goto u_10;
  p_10 :
  Cpop();
  u_10 :
  Return();
  n_10 :
  Cpop();
  Crestore();
  Cjump();
  m_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(x_10);
  b_18 :
  Cpush(z_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_17;
  h_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_17;
  i_17 :
  TestFunFC(c_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_11);
  goto c_18;
  b_11 :
  goto a_11;
  c_18 :
  Move(0,2,1,3);
  Return();
  a_11 :
  Epopd(1,4);
  goto y_10;
  z_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_11);
  goto b_18;
  f_11 :
  AllBuild();
  goto e_11;
  y_10 :
  Cpop();
  e_11 :
  Return();
  x_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_5);
  AllBuild();
  AllBuild();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(g_11);
  d_18 :
  Cpush(j_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_17;
  k_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_17;
  l_17 :
  TestFunFC(t_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_11);
  goto e_18;
  l_11 :
  goto k_11;
  e_18 :
  Move(0,1,1,3);
  Return();
  k_11 :
  Epopd(1,4);
  goto h_11;
  j_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_11);
  goto d_18;
  o_11 :
  AllBuild();
  goto m_11;
  h_11 :
  Cpop();
  m_11 :
  Return();
  g_11 :
  OneNextSon();
  TestFunTop(y_0);
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
  goto k_10;
  l_10 :
  goto p_11;
  k_10 :
  Cpop();
  p_11 :
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
  goto g_18;
  g_18 :
  TestFunFC(w_1,&&fail,Egetd(0,1));
  Rpush(r_11);
  goto i_18;
  r_11 :
  goto q_11;
  i_18 :
  Return();
  q_11 :
  Epopd(0,1);
ENDPROC

DOIT

