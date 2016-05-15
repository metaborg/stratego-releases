#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,z_9);
VARDECL(AFun,q_9);
VARDECL(AFun,c_9);
VARDECL(AFun,p_8);
VARDECL(AFun,c_8);
VARDECL(AFun,p_7);
VARDECL(AFun,z_6);
VARDECL(AFun,v_6);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
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

PROC(_stratego_init_afuns)
  MOVE(z_9,ATmakeAFun("Runtime",1,0));
  MOVE(q_9,ATmakeAFun("Silent",0,0));
  MOVE(c_9,ATmakeAFun("Binary",0,0));
  MOVE(p_8,ATmakeAFun("Output",1,0));
  MOVE(c_8,ATmakeAFun("Input",1,0));
  MOVE(p_7,ATmakeAFun("Program",1,0));
  MOVE(z_6,ATmakeAFun("Help",0,0));
  MOVE(v_6,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
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
  n_4 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_q_3);
  goto f_0;
  g_0 :
  Ccall(_stratego_r_3);
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
  goto o_4;
  l_0 :
  goto k_0;
  o_4 :
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
  Ccall(_stratego_s_3);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_x_3);
  Tdupl();
  Ccall(_stratego_z_3);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_z_3);
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
  goto q_4;
  r_0 :
  goto q_0;
  q_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_a_4);
  Ccall(_stratego_d_4);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_e_4);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_q_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_4;
  s_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto u_4;
  v_0 :
  goto u_0;
  u_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto i_7;
  i_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_7;
  j_7 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto b_11;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto e_11;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto h_11;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto k_11;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto n_11;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto q_11;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto u_11;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto y_11;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto c_12;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto g_12;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto k_12;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto n_12;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto q_12;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto t_12;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto w_12;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto b_11;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(a_3);
  Rpush(c_3);
  goto e_11;
  c_3 :
  goto t_2;
  a_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto h_11;
  e_3 :
  goto t_2;
  d_3 :
  Ccontinue(g_3);
  Rpush(i_3);
  goto k_11;
  i_3 :
  goto t_2;
  g_3 :
  Ccontinue(j_3);
  Rpush(n_3);
  goto n_11;
  n_3 :
  goto t_2;
  j_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto k_12;
  p_3 :
  goto t_2;
  o_3 :
  Ccontinue(k_4);
  Rpush(l_4);
  goto n_12;
  l_4 :
  goto t_2;
  k_4 :
  Ccontinue(m_4);
  Rpush(p_4);
  goto q_12;
  p_4 :
  goto t_2;
  m_4 :
  Ccontinue(r_4);
  Rpush(v_4);
  goto t_12;
  v_4 :
  goto t_2;
  r_4 :
  Rpush(x_4);
  goto w_12;
  x_4 :
  goto w_4;
  t_2 :
  Cpop();
  w_4 :
  goto m_1;
  m_1 :
  goto l_1;
  w_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(z_4);
  goto x_12;
  z_4 :
  goto y_4;
  x_12 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  t_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(b_5);
  goto u_12;
  b_5 :
  goto a_5;
  u_12 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  q_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(d_5);
  goto r_12;
  d_5 :
  goto c_5;
  r_12 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  n_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_6;
  x_6 :
  TestStr(1,1,"-s",&&fail);
  Rpush(f_5);
  goto o_12;
  f_5 :
  goto e_5;
  o_12 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  k_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(h_5);
  goto l_12;
  h_5 :
  goto g_5;
  l_12 :
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
  g_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"--output",&&fail);
  Rpush(j_5);
  goto h_12;
  j_5 :
  goto i_5;
  h_12 :
  Return();
  i_5 :
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
  c_12 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(m_5);
  goto d_12;
  m_5 :
  goto k_5;
  d_12 :
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
  f_1 :
  goto e_1;
  y_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(p_5);
  goto z_11;
  p_5 :
  goto n_5;
  z_11 :
  Return();
  n_5 :
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
  u_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(s_5);
  goto v_11;
  s_5 :
  goto q_5;
  v_11 :
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
  d_1 :
  goto c_1;
  q_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(v_5);
  goto r_11;
  v_5 :
  goto t_5;
  r_11 :
  Return();
  t_5 :
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
  n_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_5;
  x_5 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_5);
  goto o_11;
  y_5 :
  goto w_5;
  o_11 :
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
  k_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_5;
  u_5 :
  TestStr(1,1,"-v",&&fail);
  Rpush(b_6);
  goto l_11;
  b_6 :
  goto z_5;
  l_11 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  h_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_5;
  r_5 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(d_6);
  goto i_11;
  d_6 :
  goto c_6;
  i_11 :
  Return();
  c_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  e_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_5;
  o_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(g_6);
  goto f_11;
  g_6 :
  goto f_6;
  f_11 :
  Return();
  f_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  b_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_5;
  l_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(j_6);
  goto c_11;
  j_6 :
  goto h_6;
  c_11 :
  Return();
  h_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_3)
  Tdupl();
  k_6 :
  TestFunTop(a_0);
  Cpush(l_6);
  Arg(0);
  Cpush(p_6);
  Ccall(_stratego_t_3);
  goto o_6;
  p_6 :
  Epushd(0,2);
  MoveTop(0,1);
  goto a_13;
  a_13 :
  TestFunFC(v_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_6);
  goto e_13;
  t_6 :
  goto s_6;
  e_13 :
  Return();
  s_6 :
  Epopd(0,2);
  goto r_6;
  o_6 :
  Cpop();
  r_6 :
  Tpop();
  Cpop();
  goto n_6;
  l_6 :
  Arg(1);
  Tdrop();
  goto k_6;
  n_6 :
  Tpop();
  Ccall(_stratego_u_3);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_13;
  g_13 :
  TestFunFC(z_6,&&fail,Egetd(0,1));
  Rpush(y_6);
  goto i_13;
  y_6 :
  goto w_6;
  i_13 :
  Return();
  w_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,1);
  Tdupl();
  Rpush(b_7);
  r_13 :
  Cpush(e_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_13;
  k_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_13;
  l_13 :
  TestFunFC(p_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto s_13;
  h_7 :
  goto f_7;
  s_13 :
  Move(0,1,1,3);
  Return();
  f_7 :
  Epopd(1,4);
  goto c_7;
  e_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_7);
  goto r_13;
  s_7 :
  AllBuild();
  goto q_7;
  c_7 :
  Cpop();
  q_7 :
  Return();
  b_7 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_v_3);
  Tset(MakeInt(1));
  Ccall(_stratego_w_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_w_3)
  _ST_exit();
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,3);
  Tdupl();
  Cpush(u_7);
  Rpush(v_7);
  m_14 :
  Cpush(y_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_13;
  u_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_13;
  v_13 :
  TestFunFC(c_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_8);
  goto n_14;
  a_8 :
  goto z_7;
  n_14 :
  Move(0,1,1,3);
  Return();
  z_7 :
  Epopd(1,4);
  goto x_7;
  y_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_8);
  goto m_14;
  e_8 :
  AllBuild();
  goto d_8;
  x_7 :
  Cpop();
  d_8 :
  Return();
  v_7 :
  goto t_7;
  u_7 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto f_8;
  t_7 :
  Cpop();
  f_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_y_3);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(i_8);
  Rpush(j_8);
  r_15 :
  Cpush(m_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_14;
  t_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_14;
  u_14 :
  TestFunFC(p_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_8);
  goto s_15;
  o_8 :
  goto n_8;
  s_15 :
  Move(0,1,1,3);
  Return();
  n_8 :
  Epopd(1,4);
  goto k_8;
  m_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_8);
  goto r_15;
  s_8 :
  AllBuild();
  goto q_8;
  k_8 :
  Cpop();
  q_8 :
  Return();
  j_8 :
  goto h_8;
  i_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto t_8;
  h_8 :
  Cpop();
  t_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
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
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  Cpush(v_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(w_8);
  x_15 :
  Cpush(y_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_15;
  a_15 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_15;
  b_15 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  Rpush(b_9);
  goto y_15;
  b_9 :
  goto a_9;
  y_15 :
  Return();
  a_9 :
  Epopd(1,3);
  goto x_8;
  y_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_9);
  goto x_15;
  e_9 :
  AllBuild();
  goto d_9;
  x_8 :
  Cpop();
  d_9 :
  Return();
  w_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_4);
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  goto u_8;
  v_8 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_4);
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  goto f_9;
  u_8 :
  Cpop();
  f_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_c_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,2);
  Tdupl();
  Cpush(i_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(j_9);
  Tdupl();
  Rpush(k_9);
  v_16 :
  Cpush(m_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_16;
  a_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_16;
  b_16 :
  TestFunFC(q_9,&&fail,Egetd(1,2));
  Rpush(o_9);
  goto w_16;
  o_9 :
  goto n_9;
  w_16 :
  Return();
  n_9 :
  Epopd(1,3);
  goto l_9;
  m_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_9);
  goto v_16;
  s_9 :
  AllBuild();
  goto r_9;
  l_9 :
  Cpop();
  r_9 :
  Return();
  k_9 :
  Cpop();
  Crestore();
  Cjump();
  j_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(t_9);
  x_16 :
  Cpush(v_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_16;
  d_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_16;
  e_16 :
  TestFunFC(z_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_9);
  goto y_16;
  y_9 :
  goto w_9;
  y_16 :
  Move(0,2,1,3);
  Return();
  w_9 :
  Epopd(1,4);
  goto u_9;
  v_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_10);
  goto x_16;
  b_10 :
  AllBuild();
  goto a_10;
  u_9 :
  Cpop();
  a_10 :
  Return();
  t_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(c_10);
  z_16 :
  Cpush(f_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_16;
  g_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_16;
  h_16 :
  TestFunFC(p_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_10);
  goto a_17;
  h_10 :
  goto g_10;
  a_17 :
  Move(0,1,1,3);
  Return();
  g_10 :
  Epopd(1,4);
  goto d_10;
  f_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_10);
  goto z_16;
  k_10 :
  AllBuild();
  goto i_10;
  d_10 :
  Cpop();
  i_10 :
  Return();
  c_10 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_v_3);
  goto g_9;
  i_9 :
  goto l_10;
  g_9 :
  Cpop();
  l_10 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_w_3);
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_v_3);
  Tset(MakeInt(1));
  Ccall(_stratego_w_3);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_17;
  c_17 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(n_10);
  goto e_17;
  n_10 :
  goto m_10;
  e_17 :
  Return();
  m_10 :
  Epopd(0,1);
ENDPROC
