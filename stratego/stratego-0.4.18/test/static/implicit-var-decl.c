#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

VARDECL(AFun,w_0);
VARDECL(AFun,r_0);
VARDECL(AFun,l_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_u_2);
PROCDECL(_stratego_v_2);

PROC(_stratego_init_afuns)
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(r_0,ATmakeAFun("Program",1,0));
  MOVE(l_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(a_0);
  q_9 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_t_2);
  goto e_0;
  f_0 :
  Ccall(_stratego_u_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto q_9;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto b_0;
  d_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_0;
  c_0 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_0);
  goto r_9;
  k_0 :
  goto j_0;
  r_9 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  j_0 :
  Epopd(1,3);
  goto i_0;
  b_0 :
  Cpop();
  i_0 :
  Return();
  a_0 :
  AllBuild();
  MoveTop(0,1);
  Rpush(m_0);
  t_9 :
  Cpush(o_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_2;
  h_2 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_2;
  i_2 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_0);
  goto u_9;
  q_0 :
  goto p_0;
  u_9 :
  Move(0,2,1,3);
  Return();
  p_0 :
  Epopd(1,4);
  goto n_0;
  o_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_0);
  goto t_9;
  t_0 :
  AllBuild();
  goto s_0;
  n_0 :
  Cpop();
  s_0 :
  Return();
  m_0 :
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("\n"),App2("Cons",Egetd(0,1),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_v_2);
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_2;
  k_2 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto v_9;
  v_0 :
  goto u_0;
  v_9 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_2)
  Epushd(0,5);
  MoveTop(0,3);
  goto h_5;
  h_5 :
  TestFunFC(l_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_5;
  i_5 :
  TestFunFC(l_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto w_9;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto z_9;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto c_10;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto f_10;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto i_10;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto l_10;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto p_10;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto t_10;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto x_10;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(j_2);
  Rpush(l_2);
  goto b_11;
  l_2 :
  goto o_1;
  j_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto f_11;
  n_2 :
  goto o_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto i_11;
  p_2 :
  goto o_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto l_11;
  r_2 :
  goto o_1;
  q_2 :
  Ccontinue(s_2);
  Rpush(w_2);
  goto o_11;
  w_2 :
  goto o_1;
  s_2 :
  Rpush(y_2);
  goto r_11;
  y_2 :
  goto x_2;
  o_1 :
  Cpop();
  x_2 :
  goto m_1;
  n_1 :
  Cpush(a_3);
  Rpush(b_3);
  goto w_9;
  b_3 :
  goto z_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto z_9;
  d_3 :
  goto z_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto c_10;
  f_3 :
  goto z_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto f_10;
  h_3 :
  goto z_2;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto i_10;
  j_3 :
  goto z_2;
  i_3 :
  Ccontinue(l_3);
  Rpush(m_3);
  goto f_11;
  m_3 :
  goto z_2;
  l_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto i_11;
  p_3 :
  goto z_2;
  o_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto l_11;
  s_3 :
  goto z_2;
  r_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto o_11;
  v_3 :
  goto z_2;
  u_3 :
  Rpush(y_3);
  goto r_11;
  y_3 :
  goto x_3;
  z_2 :
  Cpop();
  x_3 :
  goto m_1;
  m_1 :
  goto l_1;
  r_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_5;
  f_5 :
  TestStr(1,1,"-?",&&fail);
  Rpush(b_4);
  goto s_11;
  b_4 :
  goto a_4;
  s_11 :
  Return();
  a_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  o_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_5;
  c_5 :
  TestStr(1,1,"-h",&&fail);
  Rpush(e_4);
  goto p_11;
  e_4 :
  goto c_4;
  p_11 :
  Return();
  c_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  l_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_4;
  z_4 :
  TestStr(1,1,"--help",&&fail);
  Rpush(g_4);
  goto m_11;
  g_4 :
  goto f_4;
  m_11 :
  Return();
  f_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  i_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_4;
  w_4 :
  TestStr(1,1,"-s",&&fail);
  Rpush(j_4);
  goto j_11;
  j_4 :
  goto i_4;
  j_11 :
  Return();
  i_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  f_11 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_4;
  t_4 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_4);
  goto g_11;
  m_4 :
  goto k_4;
  g_11 :
  Return();
  k_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  b_11 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto p_4;
  p_4 :
  TestStr(2,1,"--output",&&fail);
  Rpush(o_4);
  goto c_11;
  o_4 :
  goto n_4;
  c_11 :
  Return();
  n_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  g_1 :
  goto f_1;
  x_10 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto l_4;
  l_4 :
  TestStr(2,1,"-o",&&fail);
  Rpush(r_4);
  goto y_10;
  r_4 :
  goto q_4;
  y_10 :
  Return();
  q_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  f_1 :
  goto e_1;
  t_10 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto h_4;
  h_4 :
  TestStr(2,1,"--input",&&fail);
  Rpush(u_4);
  goto u_10;
  u_4 :
  goto s_4;
  u_10 :
  Return();
  s_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  e_1 :
  goto d_1;
  p_10 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto d_4;
  d_4 :
  TestStr(2,1,"-i",&&fail);
  Rpush(x_4);
  goto q_10;
  x_4 :
  goto v_4;
  q_10 :
  Return();
  v_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  d_1 :
  goto c_1;
  l_10 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto z_3;
  z_3 :
  TestStr(2,1,"@version",&&fail);
  Rpush(a_5);
  goto m_10;
  a_5 :
  goto y_4;
  m_10 :
  Return();
  y_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  c_1 :
  goto b_1;
  i_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_3;
  w_3 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto j_10;
  d_5 :
  goto b_5;
  j_10 :
  Return();
  b_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  f_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_3;
  t_3 :
  TestStr(1,1,"-v",&&fail);
  Rpush(g_5);
  goto g_10;
  g_5 :
  goto e_5;
  g_10 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  c_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_3;
  q_3 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(o_5);
  goto d_10;
  o_5 :
  goto k_5;
  d_10 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  z_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_3;
  n_3 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(r_5);
  goto a_10;
  r_5 :
  goto p_5;
  a_10 :
  Return();
  p_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  w_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_3;
  k_3 :
  TestStr(1,1,"-S",&&fail);
  Rpush(e_6);
  goto x_9;
  e_6 :
  goto d_6;
  x_9 :
  Return();
  d_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_2)
  _ST_printnl();
ENDPROC
