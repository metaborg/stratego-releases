#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_10);
VARDECL(AFun,t_9);
VARDECL(AFun,f_9);
VARDECL(AFun,t_8);
VARDECL(AFun,f_8);
VARDECL(AFun,t_7);
VARDECL(AFun,e_7);
VARDECL(AFun,z_6);
VARDECL(AFun,z_0);
VARDECL(AFun,v_0);
VARDECL(AFun,s_0);
VARDECL(AFun,e_0);
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
  MOVE(c_10,ATmakeAFun("Runtime",1,0));
  MOVE(t_9,ATmakeAFun("Silent",0,0));
  MOVE(f_9,ATmakeAFun("Binary",0,0));
  MOVE(t_8,ATmakeAFun("Output",1,0));
  MOVE(f_8,ATmakeAFun("Input",1,0));
  MOVE(t_7,ATmakeAFun("Program",1,0));
  MOVE(e_7,ATmakeAFun("Help",0,0));
  MOVE(z_6,ATmakeAFun("Undefined",1,0));
  MOVE(z_0,ATmakeAFun("Nil",0,0));
  MOVE(v_0,ATmakeAFun("TNil",0,0));
  MOVE(s_0,ATmakeAFun("TCons",2,0));
  MOVE(e_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Ccall(_stratego_main);
  goto a_0;
  b_0 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(f_0);
  n_4 :
  Cpush(h_0);
  Cpush(j_0);
  Ccall(_stratego_x_3);
  goto i_0;
  j_0 :
  Ccall(_stratego_y_3);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_0);
  goto n_4;
  l_0 :
  AllBuild();
  goto k_0;
  i_0 :
  Cpop();
  k_0 :
  goto g_0;
  h_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_0);
  goto o_4;
  o_0 :
  goto n_0;
  o_4 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  n_0 :
  Epopd(0,3);
  goto m_0;
  g_0 :
  Cpop();
  m_0 :
  Return();
  f_0 :
  AllBuild();
  Cpush(q_0);
  Ccall(_stratego_z_3);
  goto p_0;
  q_0 :
  Ccontinue(r_0);
  Epushd(0,6);
  Ccall(_stratego_e_4);
  Tdupl();
  Ccall(_stratego_g_4);
  Tpop();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
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
  goto h_2;
  h_2 :
  TestFunFC(s_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_2;
  i_2 :
  TestFunFC(s_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_2;
  j_2 :
  TestFunFC(v_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto q_4;
  u_0 :
  goto t_0;
  q_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  t_0 :
  Ccall(_stratego_h_4);
  Ccall(_stratego_k_4);
  Epopd(0,6);
  goto p_0;
  r_0 :
  Ccall(_stratego_l_4);
  goto w_0;
  p_0 :
  Cpop();
  w_0 :
  goto d_0;
  a_0 :
  Cpop();
  d_0 :
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_4;
  s_4 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  Rpush(y_0);
  goto u_4;
  y_0 :
  goto x_0;
  u_4 :
  Return();
  x_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto i_7;
  i_7 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_7;
  j_7 :
  TestFunFC(e_0,&&q_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(s_1);
  Rpush(t_1);
  goto b_11;
  t_1 :
  goto r_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto e_11;
  v_1 :
  goto r_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto h_11;
  x_1 :
  goto r_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto k_11;
  z_1 :
  goto r_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto n_11;
  b_2 :
  goto r_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto q_11;
  d_2 :
  goto r_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto u_11;
  f_2 :
  goto r_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(l_2);
  goto y_11;
  l_2 :
  goto r_1;
  g_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto c_12;
  n_2 :
  goto r_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto g_12;
  p_2 :
  goto r_1;
  o_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto k_12;
  s_2 :
  goto r_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto n_12;
  u_2 :
  goto r_1;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto s_12;
  w_2 :
  goto r_1;
  v_2 :
  Ccontinue(x_2);
  Rpush(y_2);
  goto y_12;
  y_2 :
  goto r_1;
  x_2 :
  Rpush(a_3);
  goto b_13;
  a_3 :
  goto z_2;
  r_1 :
  Cpop();
  z_2 :
  goto p_1;
  q_1 :
  Cpush(e_3);
  Rpush(f_3);
  goto b_11;
  f_3 :
  goto c_3;
  e_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto e_11;
  k_3 :
  goto c_3;
  j_3 :
  Ccontinue(l_3);
  Rpush(n_3);
  goto h_11;
  n_3 :
  goto c_3;
  l_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto k_11;
  s_3 :
  goto c_3;
  r_3 :
  Ccontinue(t_3);
  Rpush(u_3);
  goto n_11;
  u_3 :
  goto c_3;
  t_3 :
  Ccontinue(v_3);
  Rpush(w_3);
  goto k_12;
  w_3 :
  goto c_3;
  v_3 :
  Ccontinue(p_4);
  Rpush(r_4);
  goto n_12;
  r_4 :
  goto c_3;
  p_4 :
  Ccontinue(v_4);
  Rpush(w_4);
  goto s_12;
  w_4 :
  goto c_3;
  v_4 :
  Ccontinue(x_4);
  Rpush(y_4);
  goto y_12;
  y_4 :
  goto c_3;
  x_4 :
  Rpush(a_5);
  goto b_13;
  a_5 :
  goto z_4;
  c_3 :
  Cpop();
  z_4 :
  goto p_1;
  p_1 :
  goto o_1;
  b_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(c_5);
  goto c_13;
  c_5 :
  goto b_5;
  c_13 :
  Return();
  b_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  o_1 :
  goto n_1;
  y_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(e_5);
  goto z_12;
  e_5 :
  goto d_5;
  z_12 :
  Return();
  d_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  n_1 :
  goto m_1;
  s_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(g_5);
  goto t_12;
  g_5 :
  goto f_5;
  t_12 :
  Return();
  f_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  n_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"-s",&&fail);
  Rpush(i_5);
  goto o_12;
  i_5 :
  goto h_5;
  o_12 :
  Return();
  h_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  k_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(k_5);
  goto l_12;
  k_5 :
  goto j_5;
  l_12 :
  Return();
  j_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  g_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(n_5);
  goto h_12;
  n_5 :
  goto m_5;
  h_12 :
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
  j_1 :
  goto i_1;
  c_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(q_5);
  goto d_12;
  q_5 :
  goto p_5;
  d_12 :
  Return();
  p_5 :
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
  y_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(t_5);
  goto z_11;
  t_5 :
  goto s_5;
  z_11 :
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
  h_1 :
  goto g_1;
  u_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(w_5);
  goto v_11;
  w_5 :
  goto v_5;
  v_11 :
  Return();
  v_5 :
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
  q_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(z_5);
  goto r_11;
  z_5 :
  goto y_5;
  r_11 :
  Return();
  y_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  n_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_5;
  x_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(c_6);
  goto o_11;
  c_6 :
  goto b_6;
  o_11 :
  Return();
  b_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  e_1 :
  goto d_1;
  k_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_5;
  u_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_6);
  goto l_11;
  f_6 :
  goto d_6;
  l_11 :
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
  h_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_5;
  r_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_6);
  goto i_11;
  h_6 :
  goto g_6;
  i_11 :
  Return();
  g_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  e_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_5;
  o_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_6);
  goto f_11;
  k_6 :
  goto j_6;
  f_11 :
  Return();
  j_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  b_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_5;
  l_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(n_6);
  goto c_11;
  n_6 :
  goto l_6;
  c_11 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  a_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_3)
  Tdupl();
  o_6 :
  TestFunTop(e_0);
  Cpush(p_6);
  Arg(0);
  Cpush(t_6);
  Ccall(_stratego_a_4);
  goto s_6;
  t_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto f_13;
  f_13 :
  TestFunFC(z_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_6);
  goto j_13;
  y_6 :
  goto w_6;
  j_13 :
  Return();
  w_6 :
  Epopd(0,2);
  goto v_6;
  s_6 :
  Cpop();
  v_6 :
  Tpop();
  Cpop();
  goto r_6;
  p_6 :
  Arg(1);
  Tdrop();
  goto o_6;
  r_6 :
  Tpop();
  Ccall(_stratego_b_4);
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_13;
  l_13 :
  TestFunFC(e_7,&&fail,Egetd(0,1));
  Rpush(c_7);
  goto n_13;
  c_7 :
  goto b_7;
  n_13 :
  Return();
  b_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  Tdupl();
  Rpush(f_7);
  w_13 :
  Cpush(p_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_13;
  p_13 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_13;
  q_13 :
  TestFunFC(t_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_7);
  goto x_13;
  s_7 :
  goto q_7;
  x_13 :
  Move(0,1,1,3);
  Return();
  q_7 :
  Epopd(1,4);
  goto h_7;
  p_7 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_7);
  goto w_13;
  v_7 :
  AllBuild();
  goto u_7;
  h_7 :
  Cpop();
  u_7 :
  Return();
  f_7 :
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
  Cpush(y_7);
  Rpush(z_7);
  r_14 :
  Cpush(c_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_13;
  z_13 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_14;
  a_14 :
  TestFunFC(f_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_8);
  goto s_14;
  e_8 :
  goto d_8;
  s_14 :
  Move(0,1,1,3);
  Return();
  d_8 :
  Epopd(1,4);
  goto a_8;
  c_8 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_8);
  goto r_14;
  i_8 :
  AllBuild();
  goto h_8;
  a_8 :
  Cpop();
  h_8 :
  Return();
  z_7 :
  goto x_7;
  y_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto j_8;
  x_7 :
  Cpop();
  j_8 :
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
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Cpush(m_8);
  Rpush(n_8);
  w_15 :
  Cpush(p_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_14;
  y_14 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_14;
  z_14 :
  TestFunFC(t_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_8);
  goto x_15;
  s_8 :
  goto q_8;
  x_15 :
  Move(0,1,1,3);
  Return();
  q_8 :
  Epopd(1,4);
  goto o_8;
  p_8 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto w_15;
  v_8 :
  AllBuild();
  goto u_8;
  o_8 :
  Cpop();
  u_8 :
  Return();
  n_8 :
  goto k_8;
  m_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto w_8;
  k_8 :
  Cpop();
  w_8 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(s_0);
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
  Cpush(y_8);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(a_9);
  c_16 :
  Cpush(c_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_15;
  f_15 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_15;
  g_15 :
  TestFunFC(f_9,&&fail,Egetd(1,2));
  Rpush(e_9);
  goto d_16;
  e_9 :
  goto d_9;
  d_16 :
  Return();
  d_9 :
  Epopd(1,3);
  goto b_9;
  c_9 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_9);
  goto c_16;
  i_9 :
  AllBuild();
  goto g_9;
  b_9 :
  Cpop();
  g_9 :
  Return();
  a_9 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_4);
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  goto x_8;
  y_8 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_4);
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  goto j_9;
  x_8 :
  Cpop();
  j_9 :
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
  Cpush(l_9);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Cpush(m_9);
  Tdupl();
  Rpush(n_9);
  a_17 :
  Cpush(q_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_16;
  f_16 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_16;
  g_16 :
  TestFunFC(t_9,&&fail,Egetd(1,2));
  Rpush(s_9);
  goto b_17;
  s_9 :
  goto r_9;
  b_17 :
  Return();
  r_9 :
  Epopd(1,3);
  goto o_9;
  q_9 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_9);
  goto a_17;
  v_9 :
  AllBuild();
  goto u_9;
  o_9 :
  Cpop();
  u_9 :
  Return();
  n_9 :
  Cpop();
  Crestore();
  Cjump();
  m_9 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(w_9);
  c_17 :
  Cpush(z_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_16;
  i_16 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_16;
  j_16 :
  TestFunFC(c_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_10);
  goto d_17;
  b_10 :
  goto a_10;
  d_17 :
  Move(0,2,1,3);
  Return();
  a_10 :
  Epopd(1,4);
  goto y_9;
  z_9 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_10);
  goto c_17;
  f_10 :
  AllBuild();
  goto d_10;
  y_9 :
  Cpop();
  d_10 :
  Return();
  w_9 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_4);
  AllBuild();
  AllBuild();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(g_10);
  e_17 :
  Cpush(i_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_16;
  l_16 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_16;
  m_16 :
  TestFunFC(t_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_10);
  goto f_17;
  l_10 :
  goto k_10;
  f_17 :
  Move(0,1,1,3);
  Return();
  k_10 :
  Epopd(1,4);
  goto h_10;
  i_10 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_10);
  goto e_17;
  n_10 :
  AllBuild();
  goto m_10;
  h_10 :
  Cpop();
  m_10 :
  Return();
  g_10 :
  OneNextSon();
  TestFunTop(s_0);
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
  goto k_9;
  l_9 :
  goto p_10;
  k_9 :
  Cpop();
  p_10 :
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
  goto h_17;
  h_17 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(r_10);
  goto j_17;
  r_10 :
  goto q_10;
  j_17 :
  Return();
  q_10 :
  Epopd(0,1);
ENDPROC

DOIT

