#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(q_17);
  goto main;
  main :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(a_0);
  z_18 :
  Cpush(d_0);
  Cpush(f_0);
  Rpush(g_0);
  goto l_7;
  g_0 :
  goto e_0;
  f_0 :
  Rpush(i_0);
  goto m_7;
  i_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_0);
  goto z_18;
  j_0 :
  AllBuild();
  goto h_0;
  e_0 :
  Cpop();
  h_0 :
  goto b_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  c_0 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_0);
  goto a_19;
  m_0 :
  goto l_0;
  a_19 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  l_0 :
  Epopd(0,3);
  goto k_0;
  b_0 :
  Cpop();
  k_0 :
  Return();
  a_0 :
  AllBuild();
  Cpush(o_0);
  Rpush(p_0);
  goto n_7;
  p_0 :
  goto n_0;
  o_0 :
  Ccontinue(q_0);
  Epushd(0,6);
  Rpush(r_0);
  goto s_7;
  r_0 :
  Tdupl();
  Rpush(s_0);
  goto u_7;
  s_0 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_0);
  goto b_8;
  t_0 :
  OneNextSon();
  Rpush(u_0);
  goto a_8;
  u_0 :
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Rpush(v_0);
  goto u_7;
  v_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  w_2 :
  TestFun(0,2,"TCons",2,&&fail);
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  x_2 :
  TestFun(0,4,"TCons",2,&&fail);
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  y_2 :
  TestFun(0,6,"TNil",0,&&fail);
  Rpush(x_0);
  goto c_19;
  x_0 :
  goto w_0;
  c_19 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  w_0 :
  Rpush(y_0);
  goto v_7;
  y_0 :
  Rpush(z_0);
  goto y_7;
  z_0 :
  Epopd(0,6);
  goto n_0;
  q_0 :
  Rpush(b_1);
  goto z_7;
  b_1 :
  goto a_1;
  n_0 :
  Cpop();
  a_1 :
  Return();
  l_7 :
  Epushd(0,1);
  MoveTop(0,1);
  a_3 :
  TestFun(0,1,"Nil",0,&&fail);
  Rpush(d_1);
  goto d_19;
  d_1 :
  goto c_1;
  d_19 :
  Return();
  c_1 :
  Epopd(0,1);
  Return();
  m_7 :
  Epushd(0,5);
  MoveTop(0,3);
  j_6 :
  TestFun(0,3,"Cons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  k_6 :
  TestFun(0,5,"Cons",2,&&u_1);
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(w_1);
  Rpush(x_1);
  goto e_19;
  x_1 :
  goto v_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto h_19;
  z_1 :
  goto v_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto k_19;
  b_2 :
  goto v_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto n_19;
  d_2 :
  goto v_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto q_19;
  f_2 :
  goto v_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto t_19;
  h_2 :
  goto v_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto x_19;
  j_2 :
  goto v_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto b_20;
  l_2 :
  goto v_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto f_20;
  n_2 :
  goto v_1;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto j_20;
  p_2 :
  goto v_1;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto n_20;
  r_2 :
  goto v_1;
  q_2 :
  Ccontinue(s_2);
  Rpush(t_2);
  goto q_20;
  t_2 :
  goto v_1;
  s_2 :
  Ccontinue(u_2);
  Rpush(v_2);
  goto t_20;
  v_2 :
  goto v_1;
  u_2 :
  Ccontinue(z_2);
  Rpush(b_3);
  goto w_20;
  b_3 :
  goto v_1;
  z_2 :
  Rpush(d_3);
  goto z_20;
  d_3 :
  goto c_3;
  v_1 :
  Cpop();
  c_3 :
  goto t_1;
  u_1 :
  Cpush(f_3);
  Rpush(g_3);
  goto e_19;
  g_3 :
  goto e_3;
  f_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto h_19;
  i_3 :
  goto e_3;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto k_19;
  k_3 :
  goto e_3;
  j_3 :
  Ccontinue(l_3);
  Rpush(m_3);
  goto n_19;
  m_3 :
  goto e_3;
  l_3 :
  Ccontinue(n_3);
  Rpush(o_3);
  goto q_19;
  o_3 :
  goto e_3;
  n_3 :
  Ccontinue(p_3);
  Rpush(q_3);
  goto n_20;
  q_3 :
  goto e_3;
  p_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto q_20;
  s_3 :
  goto e_3;
  r_3 :
  Ccontinue(t_3);
  Rpush(u_3);
  goto t_20;
  u_3 :
  goto e_3;
  t_3 :
  Ccontinue(v_3);
  Rpush(w_3);
  goto w_20;
  w_3 :
  goto e_3;
  v_3 :
  Rpush(z_3);
  goto z_20;
  z_3 :
  goto x_3;
  e_3 :
  Cpop();
  x_3 :
  goto t_1;
  t_1 :
  goto s_1;
  z_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  h_6 :
  TestStr(1,1,"-?",&&fail);
  Rpush(c_4);
  goto a_21;
  c_4 :
  goto a_4;
  a_21 :
  Return();
  a_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  s_1 :
  goto r_1;
  w_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  e_6 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_4);
  goto x_20;
  f_4 :
  goto d_4;
  x_20 :
  Return();
  d_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  r_1 :
  goto q_1;
  t_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  b_6 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_4);
  goto u_20;
  i_4 :
  goto g_4;
  u_20 :
  Return();
  g_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  q_1 :
  goto p_1;
  q_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  y_5 :
  TestStr(1,1,"-s",&&fail);
  Rpush(k_4);
  goto r_20;
  k_4 :
  goto j_4;
  r_20 :
  Return();
  j_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  p_1 :
  goto o_1;
  n_20 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  o_5 :
  TestStr(1,1,"-b",&&fail);
  Rpush(n_4);
  goto o_20;
  n_4 :
  goto l_4;
  o_20 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  o_1 :
  goto n_1;
  j_20 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  k_5 :
  TestStr(2,1,"--output",&&fail);
  Rpush(q_4);
  goto k_20;
  q_4 :
  goto o_4;
  k_20 :
  Return();
  o_4 :
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
  n_1 :
  goto m_1;
  f_20 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  g_5 :
  TestStr(2,1,"-o",&&fail);
  Rpush(s_4);
  goto g_20;
  s_4 :
  goto r_4;
  g_20 :
  Return();
  r_4 :
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
  m_1 :
  goto l_1;
  b_20 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  c_5 :
  TestStr(2,1,"--input",&&fail);
  Rpush(u_4);
  goto c_20;
  u_4 :
  goto t_4;
  c_20 :
  Return();
  t_4 :
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
  l_1 :
  goto k_1;
  x_19 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  y_4 :
  TestStr(2,1,"-i",&&fail);
  Rpush(w_4);
  goto y_19;
  w_4 :
  goto v_4;
  y_19 :
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
  k_1 :
  goto j_1;
  t_19 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  p_4 :
  TestStr(2,1,"@version",&&fail);
  Rpush(z_4);
  goto u_19;
  z_4 :
  goto x_4;
  u_19 :
  Return();
  x_4 :
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
  j_1 :
  goto i_1;
  q_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  m_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(b_5);
  goto r_19;
  b_5 :
  goto a_5;
  r_19 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  n_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  h_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(e_5);
  goto o_19;
  e_5 :
  goto d_5;
  o_19 :
  Return();
  d_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  k_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  e_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto l_19;
  h_5 :
  goto f_5;
  l_19 :
  Return();
  f_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  g_1 :
  goto f_1;
  h_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  b_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto i_19;
  j_5 :
  goto i_5;
  i_19 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  f_1 :
  goto e_1;
  e_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  y_3 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_5);
  goto f_19;
  m_5 :
  goto l_5;
  f_19 :
  Return();
  l_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  e_1 :
  Epopd(0,5);
  Return();
  n_7 :
  Tdupl();
  n_5 :
  MatchFun("Cons",2);
  Cpush(p_5);
  Arg(0);
  Cpush(s_5);
  Rpush(t_5);
  goto o_7;
  t_5 :
  goto r_5;
  s_5 :
  Epushd(0,2);
  MoveTop(0,1);
  m_6 :
  TestFun(0,1,"Undefined",1,&&fail);
  MoveArg(0,2,0,1,0);
  Rpush(w_5);
  goto d_21;
  w_5 :
  goto v_5;
  d_21 :
  Return();
  v_5 :
  Epopd(0,2);
  goto u_5;
  r_5 :
  Cpop();
  u_5 :
  Tpop();
  Cpop();
  goto q_5;
  p_5 :
  Arg(1);
  Tdrop();
  goto n_5;
  q_5 :
  Tpop();
  Rpush(x_5);
  goto p_7;
  x_5 :
  Return();
  o_7 :
  Epushd(0,1);
  MoveTop(0,1);
  o_6 :
  TestFun(0,1,"Help",0,&&fail);
  Rpush(a_6);
  goto e_21;
  a_6 :
  goto z_5;
  e_21 :
  Return();
  z_5 :
  Epopd(0,1);
  Return();
  p_7 :
  Epushd(0,1);
  Tdupl();
  Rpush(c_6);
  f_21 :
  Cpush(f_6);
  Epushd(1,4);
  MoveTop(1,1);
  x_6 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  y_6 :
  TestFun(1,2,"Program",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(i_6);
  goto g_21;
  i_6 :
  goto g_6;
  g_21 :
  Move(0,1,1,3);
  Return();
  g_6 :
  Epopd(1,4);
  goto d_6;
  f_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_6);
  goto f_21;
  n_6 :
  AllBuild();
  goto l_6;
  d_6 :
  Cpop();
  l_6 :
  Return();
  c_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Rpush(p_6);
  goto q_7;
  p_6 :
  Tset(MakeInt(1));
  Rpush(q_6);
  goto r_7;
  q_6 :
  Tpop();
  Epopd(0,1);
  Return();
  q_7 :
  _ST_printnl();
  Return();
  r_7 :
  _ST_exit();
  Return();
  s_7 :
  Epushd(0,4);
  Tdupl();
  Cpush(s_6);
  Rpush(t_6);
  h_21 :
  Cpush(v_6);
  Epushd(1,4);
  MoveTop(1,1);
  f_7 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  i_8 :
  TestFun(1,2,"Input",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(z_6);
  goto i_21;
  z_6 :
  goto w_6;
  i_21 :
  Move(0,1,1,3);
  Return();
  w_6 :
  Epopd(1,4);
  goto u_6;
  v_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_7);
  goto h_21;
  b_7 :
  AllBuild();
  goto a_7;
  u_6 :
  Cpop();
  a_7 :
  Return();
  t_6 :
  goto r_6;
  s_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto c_7;
  r_6 :
  Cpop();
  c_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(d_7);
  goto t_7;
  d_7 :
  MoveTop(0,4);
  Move(0,3,0,4);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,4);
  Return();
  t_7 :
  _ST_ReadFromFile();
  Return();
  u_7 :
  _ST_dtime();
  Return();
  v_7 :
  Epushd(0,1);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(g_7);
  Rpush(h_7);
  n_21 :
  Cpush(j_7);
  Epushd(1,4);
  MoveTop(1,1);
  o_8 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  p_8 :
  TestFun(1,2,"Output",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(j_8);
  goto o_21;
  j_8 :
  goto k_7;
  o_21 :
  Move(0,1,1,3);
  Return();
  k_7 :
  Epopd(1,4);
  goto i_7;
  j_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_8);
  goto n_21;
  l_8 :
  AllBuild();
  goto k_8;
  i_7 :
  Cpop();
  k_8 :
  Return();
  h_7 :
  goto e_7;
  g_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto m_8;
  e_7 :
  Cpop();
  m_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_8);
  goto a_8;
  n_8 :
  AllBuild();
  AllBuild();
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Rpush(q_8);
  goto a_8;
  q_8 :
  AllBuild();
  AllBuild();
  Cpush(s_8);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_8);
  t_21 :
  Cpush(x_8);
  Epushd(1,3);
  MoveTop(1,1);
  v_8 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  w_8 :
  TestFun(1,2,"Binary",0,&&fail);
  Rpush(d_9);
  goto u_21;
  d_9 :
  goto a_9;
  u_21 :
  Return();
  a_9 :
  Epopd(1,3);
  goto u_8;
  x_8 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_9);
  goto t_21;
  i_9 :
  AllBuild();
  goto g_9;
  u_8 :
  Cpop();
  g_9 :
  Return();
  t_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(j_9);
  goto w_7;
  j_9 :
  OneNextSon();
  Rpush(k_9);
  goto a_8;
  k_9 :
  AllBuild();
  AllBuild();
  goto r_8;
  s_8 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_9);
  goto x_7;
  m_9 :
  OneNextSon();
  Rpush(n_9);
  goto a_8;
  n_9 :
  AllBuild();
  AllBuild();
  goto l_9;
  r_8 :
  Cpop();
  l_9 :
  Epopd(0,1);
  Return();
  w_7 :
  _ST_WriteToBinaryFile();
  Return();
  x_7 :
  _ST_WriteToTextFile();
  Return();
  y_7 :
  Epushd(0,2);
  Tdupl();
  Cpush(p_9);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(q_9);
  Tdupl();
  Rpush(r_9);
  v_21 :
  Cpush(t_9);
  Epushd(1,3);
  MoveTop(1,1);
  y_8 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  z_8 :
  TestFun(1,2,"Silent",0,&&fail);
  Rpush(v_9);
  goto w_21;
  v_9 :
  goto u_9;
  w_21 :
  Return();
  u_9 :
  Epopd(1,3);
  goto s_9;
  t_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_9);
  goto v_21;
  x_9 :
  AllBuild();
  goto w_9;
  s_9 :
  Cpop();
  w_9 :
  Return();
  r_9 :
  Cpop();
  Crestore();
  Cjump();
  q_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto a_8;
  y_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(z_9);
  x_21 :
  Cpush(b_10);
  Epushd(1,4);
  MoveTop(1,1);
  b_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  c_9 :
  TestFun(1,2,"Runtime",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(d_10);
  goto y_21;
  d_10 :
  goto c_10;
  y_21 :
  Move(0,2,1,3);
  Return();
  c_10 :
  Epopd(1,4);
  goto a_10;
  b_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_10);
  goto x_21;
  f_10 :
  AllBuild();
  goto e_10;
  a_10 :
  Cpop();
  e_10 :
  Return();
  z_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_10);
  goto a_8;
  g_10 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_10);
  z_21 :
  Cpush(l_10);
  Epushd(1,4);
  MoveTop(1,1);
  e_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  f_9 :
  TestFun(1,2,"Program",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(s_10);
  goto a_22;
  s_10 :
  goto o_10;
  a_22 :
  Move(0,1,1,3);
  Return();
  o_10 :
  Epopd(1,4);
  goto j_10;
  l_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_11);
  goto z_21;
  b_11 :
  AllBuild();
  goto t_10;
  j_10 :
  Cpop();
  t_10 :
  Return();
  h_10 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_11);
  goto a_8;
  c_11 :
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Rpush(j_11);
  goto q_7;
  j_11 :
  goto o_9;
  p_9 :
  goto k_11;
  o_9 :
  Cpop();
  k_11 :
  Tpop();
  Tset(MakeInt(0));
  Rpush(m_11);
  goto r_7;
  m_11 :
  Epopd(0,2);
  Return();
  z_7 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Rpush(n_11);
  goto q_7;
  n_11 :
  Tset(MakeInt(1));
  Rpush(o_11);
  goto r_7;
  o_11 :
  Return();
  a_8 :
  Epushd(0,1);
  MoveTop(0,1);
  h_9 :
  TestFun(0,1,"TNil",0,&&fail);
  Rpush(r_11);
  goto b_22;
  r_11 :
  goto p_11;
  b_22 :
  Return();
  p_11 :
  Epopd(0,1);
  Return();
  b_8 :
  Rpush(s_11);
  c_22 :
  Cpush(u_11);
  MatchFun("S",1);
  TravInit();
  OneNextSon();
  Rpush(w_11);
  goto c_8;
  w_11 :
  AllBuild();
  goto t_11;
  u_11 :
  Ccontinue(x_11);
  MatchFun("H",2);
  TravInit();
  OneNextSon();
  Rpush(y_11);
  d_22 :
  Cpush(b_12);
  Rpush(c_12);
  goto l_7;
  c_12 :
  goto z_11;
  b_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(g_12);
  MatchFun("SOpt",2);
  TravInit();
  OneNextSon();
  Rpush(h_12);
  goto e_8;
  h_12 :
  OneNextSon();
  Rpush(i_12);
  goto d_8;
  i_12 :
  AllBuild();
  goto e_12;
  g_12 :
  Ccontinue(j_12);
  MatchFun("SOptb",2);
  TravInit();
  OneNextSon();
  Rpush(k_12);
  goto e_8;
  k_12 :
  OneNextSon();
  Rpush(m_12);
  goto c_22;
  m_12 :
  AllBuild();
  goto e_12;
  j_12 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an SOption: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an SOption: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(p_12);
  goto q_7;
  p_12 :
  Epopd(0,2);
  Tpop();
  goto o_12;
  e_12 :
  Cpop();
  o_12 :
  OneNextSon();
  Rpush(q_12);
  goto d_22;
  q_12 :
  AllBuild();
  goto d_12;
  z_11 :
  Cpop();
  d_12 :
  Return();
  y_11 :
  OneNextSon();
  Rpush(r_12);
  j_22 :
  Cpush(u_12);
  Rpush(w_12);
  goto l_7;
  w_12 :
  goto s_12;
  u_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(y_12);
  goto c_22;
  y_12 :
  OneNextSon();
  Rpush(z_12);
  goto j_22;
  z_12 :
  AllBuild();
  goto x_12;
  s_12 :
  Cpop();
  x_12 :
  Return();
  r_12 :
  AllBuild();
  goto t_11;
  x_11 :
  Ccontinue(a_13);
  MatchFun("V",2);
  TravInit();
  OneNextSon();
  Rpush(c_13);
  k_22 :
  Cpush(f_13);
  Rpush(g_13);
  goto l_7;
  g_13 :
  goto e_13;
  f_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(j_13);
  MatchFun("SOpt",2);
  TravInit();
  OneNextSon();
  Rpush(k_13);
  goto e_8;
  k_13 :
  OneNextSon();
  Rpush(l_13);
  goto d_8;
  l_13 :
  AllBuild();
  goto i_13;
  j_13 :
  Ccontinue(m_13);
  MatchFun("SOptb",2);
  TravInit();
  OneNextSon();
  Rpush(n_13);
  goto e_8;
  n_13 :
  OneNextSon();
  Rpush(p_13);
  goto c_22;
  p_13 :
  AllBuild();
  goto i_13;
  m_13 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an SOption: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an SOption: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(s_13);
  goto q_7;
  s_13 :
  Epopd(0,2);
  Tpop();
  goto r_13;
  i_13 :
  Cpop();
  r_13 :
  OneNextSon();
  Rpush(t_13);
  goto k_22;
  t_13 :
  AllBuild();
  goto h_13;
  e_13 :
  Cpop();
  h_13 :
  Return();
  c_13 :
  OneNextSon();
  Rpush(u_13);
  q_22 :
  Cpush(x_13);
  Rpush(z_13);
  goto l_7;
  z_13 :
  goto v_13;
  x_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(b_14);
  goto c_22;
  b_14 :
  OneNextSon();
  Rpush(c_14);
  goto q_22;
  c_14 :
  AllBuild();
  goto a_14;
  v_13 :
  Cpop();
  a_14 :
  Return();
  u_13 :
  AllBuild();
  goto t_11;
  a_13 :
  Ccontinue(e_14);
  MatchFun("HV",2);
  TravInit();
  OneNextSon();
  Rpush(f_14);
  r_22 :
  Cpush(h_14);
  Rpush(j_14);
  goto l_7;
  j_14 :
  goto g_14;
  h_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(m_14);
  MatchFun("SOpt",2);
  TravInit();
  OneNextSon();
  Rpush(o_14);
  goto e_8;
  o_14 :
  OneNextSon();
  Rpush(p_14);
  goto d_8;
  p_14 :
  AllBuild();
  goto l_14;
  m_14 :
  Ccontinue(q_14);
  MatchFun("SOptb",2);
  TravInit();
  OneNextSon();
  Rpush(r_14);
  goto e_8;
  r_14 :
  OneNextSon();
  Rpush(t_14);
  goto c_22;
  t_14 :
  AllBuild();
  goto l_14;
  q_14 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an SOption: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an SOption: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(v_14);
  goto q_7;
  v_14 :
  Epopd(0,2);
  Tpop();
  goto u_14;
  l_14 :
  Cpop();
  u_14 :
  OneNextSon();
  Rpush(w_14);
  goto r_22;
  w_14 :
  AllBuild();
  goto k_14;
  g_14 :
  Cpop();
  k_14 :
  Return();
  f_14 :
  OneNextSon();
  Rpush(y_14);
  x_22 :
  Cpush(n_15);
  Rpush(p_15);
  goto l_7;
  p_15 :
  goto z_14;
  n_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(r_15);
  goto c_22;
  r_15 :
  OneNextSon();
  Rpush(z_15);
  goto x_22;
  z_15 :
  AllBuild();
  goto q_15;
  z_14 :
  Cpop();
  q_15 :
  Return();
  y_14 :
  AllBuild();
  goto t_11;
  e_14 :
  Ccontinue(b_16);
  MatchFun("ALT",2);
  TravInit();
  OneNextSon();
  Rpush(c_16);
  goto c_22;
  c_16 :
  OneNextSon();
  Rpush(d_16);
  goto c_22;
  d_16 :
  AllBuild();
  goto t_11;
  b_16 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an ABox: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not an ABox: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(f_16);
  goto q_7;
  f_16 :
  Epopd(0,2);
  Tpop();
  goto e_16;
  t_11 :
  Cpop();
  e_16 :
  Return();
  s_11 :
  Return();
  c_8 :
  _ST_is_string();
  Return();
  d_8 :
  _ST_is_int();
  Return();
  e_8 :
  Cpush(z_16);
  Rpush(a_17);
  goto f_8;
  a_17 :
  goto y_16;
  z_16 :
  Ccontinue(b_17);
  Rpush(d_17);
  goto g_8;
  d_17 :
  goto y_16;
  b_17 :
  Ccontinue(e_17);
  Rpush(f_17);
  goto h_8;
  f_17 :
  goto y_16;
  e_17 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not a SpaceSymbol: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("Not a SpaceSymbol: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(i_17);
  goto q_7;
  i_17 :
  Epopd(0,2);
  Tpop();
  goto g_17;
  y_16 :
  Cpop();
  g_17 :
  Return();
  f_8 :
  Epushd(0,1);
  MoveTop(0,1);
  i_10 :
  TestFun(0,1,"VS",0,&&fail);
  Rpush(k_17);
  goto i_23;
  k_17 :
  goto j_17;
  i_23 :
  Return();
  j_17 :
  Epopd(0,1);
  Return();
  g_8 :
  Epushd(0,1);
  MoveTop(0,1);
  k_10 :
  TestFun(0,1,"HS",0,&&fail);
  Rpush(n_17);
  goto j_23;
  n_17 :
  goto l_17;
  j_23 :
  Return();
  l_17 :
  Epopd(0,1);
  Return();
  h_8 :
  Epushd(0,1);
  MoveTop(0,1);
  m_10 :
  TestFun(0,1,"IS",0,&&fail);
  Rpush(p_17);
  goto k_23;
  p_17 :
  goto o_17;
  k_23 :
  Return();
  o_17 :
  Epopd(0,1);
  Return();
  q_17 :
DOIT_END
