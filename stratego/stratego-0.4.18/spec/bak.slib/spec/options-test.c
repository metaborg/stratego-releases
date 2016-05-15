#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(g_10);
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
  z_12 :
  Cpush(d_0);
  Cpush(f_0);
  Rpush(g_0);
  goto q_3;
  g_0 :
  goto e_0;
  f_0 :
  Rpush(i_0);
  goto r_3;
  i_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_0);
  goto z_12;
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
  goto a_13;
  m_0 :
  goto l_0;
  a_13 :
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
  goto s_3;
  p_0 :
  goto n_0;
  o_0 :
  Ccontinue(q_0);
  Epushd(0,6);
  Rpush(r_0);
  goto x_3;
  r_0 :
  Tdupl();
  Rpush(s_0);
  goto a_4;
  s_0 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_0);
  goto g_4;
  t_0 :
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Rpush(u_0);
  goto a_4;
  u_0 :
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
  Rpush(w_0);
  goto c_13;
  w_0 :
  goto v_0;
  c_13 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  v_0 :
  Rpush(x_0);
  goto b_4;
  x_0 :
  Rpush(y_0);
  goto e_4;
  y_0 :
  Epopd(0,6);
  goto n_0;
  q_0 :
  Rpush(a_1);
  goto f_4;
  a_1 :
  goto z_0;
  n_0 :
  Cpop();
  z_0 :
  Return();
  q_3 :
  MatchFun("Nil",0);
  TravInit();
  AllBuild();
  Return();
  r_3 :
  Epushd(0,5);
  MoveTop(0,3);
  j_6 :
  TestFun(0,3,"Cons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  k_6 :
  TestFun(0,5,"Cons",2,&&r_1);
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(t_1);
  Rpush(u_1);
  goto d_13;
  u_1 :
  goto s_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto g_13;
  w_1 :
  goto s_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto j_13;
  y_1 :
  goto s_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto m_13;
  a_2 :
  goto s_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto p_13;
  c_2 :
  goto s_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto s_13;
  e_2 :
  goto s_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto w_13;
  g_2 :
  goto s_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto a_14;
  i_2 :
  goto s_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto e_14;
  k_2 :
  goto s_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto i_14;
  m_2 :
  goto s_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto m_14;
  o_2 :
  goto s_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto p_14;
  q_2 :
  goto s_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto s_14;
  s_2 :
  goto s_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto v_14;
  u_2 :
  goto s_1;
  t_2 :
  Rpush(z_2);
  goto y_14;
  z_2 :
  goto v_2;
  s_1 :
  Cpop();
  v_2 :
  goto q_1;
  r_1 :
  Cpush(b_3);
  Rpush(c_3);
  goto d_13;
  c_3 :
  goto a_3;
  b_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto g_13;
  e_3 :
  goto a_3;
  d_3 :
  Ccontinue(f_3);
  Rpush(g_3);
  goto j_13;
  g_3 :
  goto a_3;
  f_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto m_13;
  i_3 :
  goto a_3;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto p_13;
  k_3 :
  goto a_3;
  j_3 :
  Ccontinue(l_3);
  Rpush(m_3);
  goto m_14;
  m_3 :
  goto a_3;
  l_3 :
  Ccontinue(n_3);
  Rpush(o_3);
  goto p_14;
  o_3 :
  goto a_3;
  n_3 :
  Ccontinue(p_3);
  Rpush(y_3);
  goto s_14;
  y_3 :
  goto a_3;
  p_3 :
  Ccontinue(h_4);
  Rpush(i_4);
  goto v_14;
  i_4 :
  goto a_3;
  h_4 :
  Rpush(k_4);
  goto y_14;
  k_4 :
  goto j_4;
  a_3 :
  Cpop();
  j_4 :
  goto q_1;
  q_1 :
  goto p_1;
  y_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  h_6 :
  TestStr(1,1,"-?",&&fail);
  Rpush(n_4);
  goto z_14;
  n_4 :
  goto l_4;
  z_14 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  p_1 :
  goto o_1;
  v_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  e_6 :
  TestStr(1,1,"-h",&&fail);
  Rpush(q_4);
  goto w_14;
  q_4 :
  goto o_4;
  w_14 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  o_1 :
  goto n_1;
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  b_6 :
  TestStr(1,1,"--help",&&fail);
  Rpush(t_4);
  goto t_14;
  t_4 :
  goto r_4;
  t_14 :
  Return();
  r_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  n_1 :
  goto m_1;
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  y_5 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_4);
  goto q_14;
  w_4 :
  goto u_4;
  q_14 :
  Return();
  u_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  m_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  v_5 :
  TestStr(1,1,"-b",&&fail);
  Rpush(z_4);
  goto n_14;
  z_4 :
  goto x_4;
  n_14 :
  Return();
  x_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  i_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  r_5 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_5);
  goto j_14;
  c_5 :
  goto a_5;
  j_14 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  k_1 :
  goto j_1;
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  n_5 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_5);
  goto f_14;
  e_5 :
  goto d_5;
  f_14 :
  Return();
  d_5 :
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
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  j_5 :
  TestStr(1,1,"--input",&&fail);
  Rpush(h_5);
  goto b_14;
  h_5 :
  goto g_5;
  b_14 :
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
  i_1 :
  goto h_1;
  w_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  f_5 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_5);
  goto x_13;
  k_5 :
  goto i_5;
  x_13 :
  Return();
  i_5 :
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
  s_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  b_5 :
  TestStr(1,1,"@version",&&fail);
  Rpush(m_5);
  goto t_13;
  m_5 :
  goto l_5;
  t_13 :
  Return();
  l_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_1 :
  goto f_1;
  p_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  y_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(p_5);
  goto q_13;
  p_5 :
  goto o_5;
  q_13 :
  Return();
  o_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  f_1 :
  goto e_1;
  m_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  v_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(s_5);
  goto n_13;
  s_5 :
  goto q_5;
  n_13 :
  Return();
  q_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  e_1 :
  goto d_1;
  j_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  s_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(u_5);
  goto k_13;
  u_5 :
  goto t_5;
  k_13 :
  Return();
  t_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  d_1 :
  goto c_1;
  g_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  p_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(x_5);
  goto h_13;
  x_5 :
  goto w_5;
  h_13 :
  Return();
  w_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  d_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  m_4 :
  TestStr(1,1,"-S",&&fail);
  Rpush(a_6);
  goto e_13;
  a_6 :
  goto z_5;
  e_13 :
  Return();
  z_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  b_1 :
  Epopd(0,5);
  Return();
  s_3 :
  Tdupl();
  c_6 :
  MatchFun("Cons",2);
  Cpush(d_6);
  Arg(0);
  Cpush(i_6);
  Rpush(l_6);
  goto t_3;
  l_6 :
  goto g_6;
  i_6 :
  MatchFun("Undefined",1);
  TravInit();
  OneNextSon();
  AllBuild();
  goto n_6;
  g_6 :
  Cpop();
  n_6 :
  Tpop();
  Cpop();
  goto f_6;
  d_6 :
  Arg(1);
  Tdrop();
  goto c_6;
  f_6 :
  Tpop();
  Rpush(p_6);
  goto u_3;
  p_6 :
  Return();
  t_3 :
  MatchFun("Help",0);
  TravInit();
  AllBuild();
  Return();
  u_3 :
  Epushd(0,1);
  Tdupl();
  Tdupl();
  q_6 :
  MatchFun("Cons",2);
  Cpush(r_6);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  m_6 :
  TestFun(1,1,"Program",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(v_6);
  goto d_15;
  v_6 :
  goto t_6;
  d_15 :
  Move(0,1,1,2);
  Return();
  t_6 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto s_6;
  r_6 :
  Arg(1);
  Tdrop();
  goto q_6;
  s_6 :
  Tpop();
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Rpush(w_6);
  goto v_3;
  w_6 :
  Tset(ATmakeInt(1));
  Rpush(x_6);
  goto w_3;
  x_6 :
  Tpop();
  Epopd(0,1);
  Return();
  v_3 :
  _ST_printnl();
  Return();
  w_3 :
  _ST_exit();
  Return();
  x_3 :
  Epushd(0,3);
  Tdupl();
  Cpush(z_6);
  Tdupl();
  b_7 :
  MatchFun("Cons",2);
  Cpush(d_7);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  o_6 :
  TestFun(1,1,"Input",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(m_7);
  goto f_15;
  m_7 :
  goto i_7;
  f_15 :
  Move(0,1,1,2);
  Return();
  i_7 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto f_7;
  d_7 :
  Arg(1);
  Tdrop();
  goto b_7;
  f_7 :
  Tpop();
  goto y_6;
  z_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto n_7;
  y_6 :
  Cpop();
  n_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(v_7);
  goto z_3;
  v_7 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
  Return();
  z_3 :
  _ST_ReadFromFile();
  Return();
  a_4 :
  _ST_dtime();
  Return();
  b_4 :
  Epushd(0,1);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(c_8);
  Tdupl();
  d_8 :
  MatchFun("Cons",2);
  Cpush(f_8);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  u_6 :
  TestFun(1,1,"Output",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(i_8);
  goto l_15;
  i_8 :
  goto h_8;
  l_15 :
  Move(0,1,1,2);
  Return();
  h_8 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto g_8;
  f_8 :
  Arg(1);
  Tdrop();
  goto d_8;
  g_8 :
  Tpop();
  goto w_7;
  c_8 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto k_8;
  w_7 :
  Cpop();
  k_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_8);
  goto g_4;
  l_8 :
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
  Rpush(m_8);
  goto g_4;
  m_8 :
  AllBuild();
  AllBuild();
  Cpush(p_8);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  q_8 :
  MatchFun("Cons",2);
  Cpush(r_8);
  Arg(0);
  Epushd(1,1);
  MoveTop(1,1);
  a_7 :
  TestFun(1,1,"Binary",0,&&fail);
  Rpush(v_8);
  goto r_15;
  v_8 :
  goto u_8;
  r_15 :
  Return();
  u_8 :
  Epopd(1,1);
  Tpop();
  Cpop();
  goto s_8;
  r_8 :
  Arg(1);
  Tdrop();
  goto q_8;
  s_8 :
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(w_8);
  goto c_4;
  w_8 :
  OneNextSon();
  Rpush(x_8);
  goto g_4;
  x_8 :
  AllBuild();
  AllBuild();
  goto n_8;
  p_8 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(a_9);
  goto d_4;
  a_9 :
  OneNextSon();
  Rpush(b_9);
  goto g_4;
  b_9 :
  AllBuild();
  AllBuild();
  goto z_8;
  n_8 :
  Cpop();
  z_8 :
  Epopd(0,1);
  Return();
  c_4 :
  _ST_WriteToBinaryFile();
  Return();
  d_4 :
  _ST_WriteToTextFile();
  Return();
  e_4 :
  Epushd(0,2);
  Tdupl();
  Cpush(d_9);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(f_9);
  Tdupl();
  Tdupl();
  g_9 :
  MatchFun("Cons",2);
  Cpush(h_9);
  Arg(0);
  Epushd(1,1);
  MoveTop(1,1);
  c_7 :
  TestFun(1,1,"Silent",0,&&fail);
  Rpush(k_9);
  goto t_15;
  k_9 :
  goto j_9;
  t_15 :
  Return();
  j_9 :
  Epopd(1,1);
  Tpop();
  Cpop();
  goto i_9;
  h_9 :
  Arg(1);
  Tdrop();
  goto g_9;
  i_9 :
  Tpop();
  Cpop();
  Crestore();
  Cjump();
  f_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_9);
  goto g_4;
  l_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  n_9 :
  MatchFun("Cons",2);
  Cpush(o_9);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  e_7 :
  TestFun(1,1,"Runtime",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(r_9);
  goto v_15;
  r_9 :
  goto q_9;
  v_15 :
  Move(0,2,1,2);
  Return();
  q_9 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto p_9;
  o_9 :
  Arg(1);
  Tdrop();
  goto n_9;
  p_9 :
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_9);
  goto g_4;
  s_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  t_9 :
  MatchFun("Cons",2);
  Cpush(v_9);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  g_7 :
  TestFun(1,1,"Program",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(y_9);
  goto x_15;
  y_9 :
  goto x_9;
  x_15 :
  Move(0,1,1,2);
  Return();
  x_9 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto w_9;
  v_9 :
  Arg(1);
  Tdrop();
  goto t_9;
  w_9 :
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_9);
  goto g_4;
  z_9 :
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Rpush(a_10);
  goto v_3;
  a_10 :
  goto c_9;
  d_9 :
  goto b_10;
  c_9 :
  Cpop();
  b_10 :
  Tpop();
  Tset(ATmakeInt(0));
  Rpush(d_10);
  goto w_3;
  d_10 :
  Epopd(0,2);
  Return();
  f_4 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Rpush(e_10);
  goto v_3;
  e_10 :
  Tset(ATmakeInt(1));
  Rpush(f_10);
  goto w_3;
  f_10 :
  Return();
  g_4 :
  MatchFun("TNil",0);
  TravInit();
  AllBuild();
  Return();
  g_10 :
DOIT_END
