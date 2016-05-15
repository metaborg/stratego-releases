#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_0);
VARDECL(AFun,q_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);

PROC(_stratego_init_afuns)
  MOVE(v_0,ATmakeAFun("Nil",0,0));
  MOVE(q_0,ATmakeAFun("Program",1,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,2);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(b_0);
  h_3 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_r_2);
  goto e_0;
  f_0 :
  Ccall(_stratego_s_2);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto h_3;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto c_0;
  d_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_2;
  g_2 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_0);
  goto i_3;
  k_0 :
  goto j_0;
  i_3 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  j_0 :
  Epopd(1,3);
  goto i_0;
  c_0 :
  Cpop();
  i_0 :
  Return();
  b_0 :
  AllBuild();
  MoveTop(0,1);
  Rpush(l_0);
  k_3 :
  Cpush(n_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_2;
  j_2 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_2;
  k_2 :
  TestFunFC(q_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_0);
  goto l_3;
  p_0 :
  goto o_0;
  l_3 :
  Move(0,2,1,3);
  Return();
  o_0 :
  Epopd(1,4);
  goto m_0;
  n_0 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_0);
  goto k_3;
  s_0 :
  AllBuild();
  goto r_0;
  m_0 :
  Cpop();
  r_0 :
  Return();
  l_0 :
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("\n"),App2("Cons",Egetd(0,1),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_t_2);
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_3;
  n_3 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(u_0);
  goto p_3;
  u_0 :
  goto t_0;
  p_3 :
  Return();
  t_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_2)
  Epushd(0,5);
  MoveTop(0,3);
  goto d_6;
  d_6 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_6;
  e_6 :
  TestFunFC(a_0,&&m_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(o_1);
  Rpush(p_1);
  goto w_9;
  p_1 :
  goto n_1;
  o_1 :
  Ccontinue(q_1);
  Rpush(r_1);
  goto z_9;
  r_1 :
  goto n_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto c_10;
  t_1 :
  goto n_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto f_10;
  v_1 :
  goto n_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto i_10;
  x_1 :
  goto n_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto l_10;
  z_1 :
  goto n_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto p_10;
  b_2 :
  goto n_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto t_10;
  d_2 :
  goto n_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto x_10;
  f_2 :
  goto n_1;
  e_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto b_11;
  i_2 :
  goto n_1;
  h_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto f_11;
  m_2 :
  goto n_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto i_11;
  o_2 :
  goto n_1;
  n_2 :
  Ccontinue(q_2);
  Rpush(x_2);
  goto l_11;
  x_2 :
  goto n_1;
  q_2 :
  Ccontinue(y_2);
  Rpush(a_3);
  goto o_11;
  a_3 :
  goto n_1;
  y_2 :
  Rpush(j_3);
  goto r_11;
  j_3 :
  goto g_3;
  n_1 :
  Cpop();
  g_3 :
  goto l_1;
  m_1 :
  Cpush(q_3);
  Rpush(r_3);
  goto w_9;
  r_3 :
  goto m_3;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto z_9;
  t_3 :
  goto m_3;
  s_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto c_10;
  v_3 :
  goto m_3;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto f_10;
  x_3 :
  goto m_3;
  w_3 :
  Ccontinue(y_3);
  Rpush(z_3);
  goto i_10;
  z_3 :
  goto m_3;
  y_3 :
  Ccontinue(a_4);
  Rpush(b_4);
  goto f_11;
  b_4 :
  goto m_3;
  a_4 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto i_11;
  d_4 :
  goto m_3;
  c_4 :
  Ccontinue(e_4);
  Rpush(f_4);
  goto l_11;
  f_4 :
  goto m_3;
  e_4 :
  Ccontinue(h_4);
  Rpush(i_4);
  goto o_11;
  i_4 :
  goto m_3;
  h_4 :
  Rpush(l_4);
  goto r_11;
  l_4 :
  goto k_4;
  m_3 :
  Cpop();
  k_4 :
  goto l_1;
  l_1 :
  goto k_1;
  r_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"-?",&&fail);
  Rpush(o_4);
  goto s_11;
  o_4 :
  goto n_4;
  s_11 :
  Return();
  n_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  o_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_4);
  goto p_11;
  r_4 :
  goto q_4;
  p_11 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  l_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_5;
  v_5 :
  TestStr(1,1,"--help",&&fail);
  Rpush(u_4);
  goto m_11;
  u_4 :
  goto t_4;
  m_11 :
  Return();
  t_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  i_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestStr(1,1,"-s",&&fail);
  Rpush(x_4);
  goto j_11;
  x_4 :
  goto w_4;
  j_11 :
  Return();
  w_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  f_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_5;
  p_5 :
  TestStr(1,1,"-b",&&fail);
  Rpush(a_5);
  goto g_11;
  a_5 :
  goto y_4;
  g_11 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  g_1 :
  goto f_1;
  b_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_5;
  l_5 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_5);
  goto c_11;
  c_5 :
  goto b_5;
  c_11 :
  Return();
  b_5 :
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
  x_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_5;
  h_5 :
  TestStr(1,1,"-o",&&fail);
  Rpush(f_5);
  goto y_10;
  f_5 :
  goto e_5;
  y_10 :
  Return();
  e_5 :
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
  t_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_5;
  d_5 :
  TestStr(1,1,"--input",&&fail);
  Rpush(i_5);
  goto u_10;
  i_5 :
  goto g_5;
  u_10 :
  Return();
  g_5 :
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
  p_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_4;
  z_4 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_5);
  goto q_10;
  k_5 :
  goto j_5;
  q_10 :
  Return();
  j_5 :
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
  l_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_4;
  v_4 :
  TestStr(1,1,"@version",&&fail);
  Rpush(n_5);
  goto m_10;
  n_5 :
  goto m_5;
  m_10 :
  Return();
  m_5 :
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
  i_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_4;
  s_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(q_5);
  goto j_10;
  q_5 :
  goto o_5;
  j_10 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  f_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_4;
  p_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(t_5);
  goto g_10;
  t_5 :
  goto r_5;
  g_10 :
  Return();
  r_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  c_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_4;
  m_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(w_5);
  goto d_10;
  w_5 :
  goto u_5;
  d_10 :
  Return();
  u_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  z_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_4;
  j_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(z_5);
  goto a_10;
  z_5 :
  goto x_5;
  a_10 :
  Return();
  x_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  goto w_0;
  w_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_4;
  g_4 :
  TestStr(1,1,"-S",&&fail);
  Rpush(c_6);
  goto x_9;
  c_6 :
  goto a_6;
  x_9 :
  Return();
  a_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  w_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_2)
  _ST_printnl();
ENDPROC

DOIT

