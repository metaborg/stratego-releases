#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(v_9);
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
  goto x_3;
  g_0 :
  goto e_0;
  f_0 :
  Rpush(h_0);
  goto y_3;
  h_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto z_12;
  i_0 :
  AllBuild();
  e_0 :
  Cpop();
  goto b_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  c_0 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto a_13;
  k_0 :
  goto j_0;
  a_13 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  j_0 :
  Epopd(0,3);
  b_0 :
  Cpop();
  Return();
  a_0 :
  AllBuild();
  Cpush(m_0);
  Rpush(n_0);
  goto z_3;
  n_0 :
  goto l_0;
  m_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Rpush(p_0);
  goto e_4;
  p_0 :
  Tdupl();
  Rpush(q_0);
  goto g_4;
  q_0 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_0);
  goto n_4;
  r_0 :
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Rpush(s_0);
  goto g_4;
  s_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  e_2 :
  TestFun(0,2,"TCons",2,&&fail);
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  f_2 :
  TestFun(0,4,"TCons",2,&&fail);
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  g_2 :
  TestFun(0,6,"TNil",0,&&fail);
  Rpush(u_0);
  goto c_13;
  u_0 :
  goto t_0;
  c_13 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  t_0 :
  Rpush(v_0);
  goto h_4;
  v_0 :
  Rpush(w_0);
  goto l_4;
  w_0 :
  Epopd(0,6);
  goto l_0;
  o_0 :
  Rpush(x_0);
  goto m_4;
  x_0 :
  l_0 :
  Cpop();
  Return();
  x_3 :
  MatchFun("Nil",0);
  TravInit();
  AllBuild();
  Return();
  y_3 :
  Epushd(0,5);
  MoveTop(0,3);
  j_6 :
  TestFun(0,3,"Cons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  k_6 :
  TestFun(0,5,"Cons",2,&&o_1);
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(q_1);
  Rpush(r_1);
  goto d_13;
  r_1 :
  goto p_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto g_13;
  t_1 :
  goto p_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto j_13;
  v_1 :
  goto p_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto m_13;
  x_1 :
  goto p_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto p_13;
  z_1 :
  goto p_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto s_13;
  b_2 :
  goto p_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto w_13;
  d_2 :
  goto p_1;
  c_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto a_14;
  i_2 :
  goto p_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto e_14;
  k_2 :
  goto p_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto i_14;
  m_2 :
  goto p_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto m_14;
  o_2 :
  goto p_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto p_14;
  q_2 :
  goto p_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto s_14;
  s_2 :
  goto p_1;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto v_14;
  u_2 :
  goto p_1;
  t_2 :
  Rpush(v_2);
  goto y_14;
  v_2 :
  p_1 :
  Cpop();
  goto n_1;
  o_1 :
  Cpush(x_2);
  Rpush(y_2);
  goto d_13;
  y_2 :
  goto w_2;
  x_2 :
  Ccontinue(z_2);
  Rpush(a_3);
  goto g_13;
  a_3 :
  goto w_2;
  z_2 :
  Ccontinue(b_3);
  Rpush(c_3);
  goto j_13;
  c_3 :
  goto w_2;
  b_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto m_13;
  e_3 :
  goto w_2;
  d_3 :
  Ccontinue(f_3);
  Rpush(g_3);
  goto p_13;
  g_3 :
  goto w_2;
  f_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto m_14;
  i_3 :
  goto w_2;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto p_14;
  k_3 :
  goto w_2;
  j_3 :
  Ccontinue(l_3);
  Rpush(m_3);
  goto s_14;
  m_3 :
  goto w_2;
  l_3 :
  Ccontinue(n_3);
  Rpush(o_3);
  goto v_14;
  o_3 :
  goto w_2;
  n_3 :
  Rpush(p_3);
  goto y_14;
  p_3 :
  w_2 :
  Cpop();
  goto n_1;
  n_1 :
  goto m_1;
  y_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  h_6 :
  TestStr(1,1,"-?",&&fail);
  Rpush(r_3);
  goto z_14;
  r_3 :
  goto q_3;
  z_14 :
  Return();
  q_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  v_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  e_6 :
  TestStr(1,1,"-h",&&fail);
  Rpush(u_3);
  goto w_14;
  u_3 :
  goto s_3;
  w_14 :
  Return();
  s_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  b_6 :
  TestStr(1,1,"--help",&&fail);
  Rpush(w_3);
  goto t_14;
  w_3 :
  goto v_3;
  t_14 :
  Return();
  v_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  y_5 :
  TestStr(1,1,"-s",&&fail);
  Rpush(o_4);
  goto q_14;
  o_4 :
  goto j_4;
  q_14 :
  Return();
  j_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  m_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  v_5 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto n_14;
  r_4 :
  goto q_4;
  n_14 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  i_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  r_5 :
  TestStr(1,1,"--output",&&fail);
  Rpush(u_4);
  goto j_14;
  u_4 :
  goto t_4;
  j_14 :
  Return();
  t_4 :
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
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  n_5 :
  TestStr(1,1,"-o",&&fail);
  Rpush(x_4);
  goto f_14;
  x_4 :
  goto w_4;
  f_14 :
  Return();
  w_4 :
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
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  j_5 :
  TestStr(1,1,"--input",&&fail);
  Rpush(a_5);
  goto b_14;
  a_5 :
  goto z_4;
  b_14 :
  Return();
  z_4 :
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
  w_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  f_5 :
  TestStr(1,1,"-i",&&fail);
  Rpush(d_5);
  goto x_13;
  d_5 :
  goto c_5;
  x_13 :
  Return();
  c_5 :
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
  s_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  b_5 :
  TestStr(1,1,"@version",&&fail);
  Rpush(g_5);
  goto t_13;
  g_5 :
  goto e_5;
  t_13 :
  Return();
  e_5 :
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
  p_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  y_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(i_5);
  goto q_13;
  i_5 :
  goto h_5;
  q_13 :
  Return();
  h_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  m_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  v_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(l_5);
  goto n_13;
  l_5 :
  goto k_5;
  n_13 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  j_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  s_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(o_5);
  goto k_13;
  o_5 :
  goto m_5;
  k_13 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  g_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  p_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(q_5);
  goto h_13;
  q_5 :
  goto p_5;
  h_13 :
  Return();
  p_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  d_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  t_3 :
  TestStr(1,1,"-S",&&fail);
  Rpush(t_5);
  goto e_13;
  t_5 :
  goto s_5;
  e_13 :
  Return();
  s_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  Epopd(0,5);
  Return();
  z_3 :
  Tdupl();
  u_5 :
  MatchFun("Cons",2);
  Cpush(w_5);
  Arg(0);
  Cpush(a_6);
  Rpush(c_6);
  goto a_4;
  c_6 :
  goto z_5;
  a_6 :
  MatchFun("Undefined",1);
  TravInit();
  OneNextSon();
  AllBuild();
  z_5 :
  Cpop();
  Tpop();
  Cpop();
  goto x_5;
  w_5 :
  Arg(1);
  Tdrop();
  goto u_5;
  x_5 :
  Tpop();
  Rpush(d_6);
  goto b_4;
  d_6 :
  Return();
  a_4 :
  MatchFun("Help",0);
  TravInit();
  AllBuild();
  Return();
  b_4 :
  Epushd(0,1);
  Tdupl();
  Tdupl();
  f_6 :
  MatchFun("Cons",2);
  Cpush(g_6);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  m_6 :
  TestFun(1,1,"Program",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(n_6);
  goto d_15;
  n_6 :
  goto l_6;
  d_15 :
  Move(0,1,1,2);
  Return();
  l_6 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto i_6;
  g_6 :
  Arg(1);
  Tdrop();
  goto f_6;
  i_6 :
  Tpop();
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Rpush(p_6);
  goto c_4;
  p_6 :
  Tset(ATmakeInt(1));
  Rpush(q_6);
  goto d_4;
  q_6 :
  Tpop();
  Epopd(0,1);
  Return();
  c_4 :
  _ST_printnl();
  Return();
  d_4 :
  _ST_exit();
  Return();
  e_4 :
  Epushd(0,3);
  Cpush(s_6);
  Tdupl();
  t_6 :
  MatchFun("Cons",2);
  Cpush(v_6);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  o_6 :
  TestFun(1,1,"Input",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(y_6);
  goto f_15;
  y_6 :
  goto x_6;
  f_15 :
  Move(0,1,1,2);
  Return();
  x_6 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto w_6;
  v_6 :
  Arg(1);
  Tdrop();
  goto t_6;
  w_6 :
  Tpop();
  goto r_6;
  s_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  r_6 :
  Cpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(z_6);
  goto f_4;
  z_6 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
  Return();
  f_4 :
  _ST_ReadFromFile();
  Return();
  g_4 :
  _ST_dtime();
  Return();
  h_4 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(d_7);
  Tdupl();
  f_7 :
  MatchFun("Cons",2);
  Cpush(i_7);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  u_6 :
  TestFun(1,1,"Output",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(v_7);
  goto l_15;
  v_7 :
  goto n_7;
  l_15 :
  Move(0,1,1,2);
  Return();
  n_7 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto m_7;
  i_7 :
  Arg(1);
  Tdrop();
  goto f_7;
  m_7 :
  Tpop();
  goto b_7;
  d_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  b_7 :
  Cpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_7);
  goto n_4;
  w_7 :
  AllBuild();
  AllBuild();
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
  Rpush(c_8);
  goto n_4;
  c_8 :
  AllBuild();
  AllBuild();
  Cpush(f_8);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  g_8 :
  MatchFun("Cons",2);
  Cpush(h_8);
  Arg(0);
  Epushd(1,1);
  MoveTop(1,1);
  a_7 :
  TestFun(1,1,"Binary",0,&&fail);
  Rpush(l_8);
  goto r_15;
  l_8 :
  goto k_8;
  r_15 :
  Return();
  k_8 :
  Epopd(1,1);
  Tpop();
  Cpop();
  goto i_8;
  h_8 :
  Arg(1);
  Tdrop();
  goto g_8;
  i_8 :
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_8);
  goto i_4;
  m_8 :
  OneNextSon();
  Rpush(n_8);
  goto n_4;
  n_8 :
  AllBuild();
  AllBuild();
  goto d_8;
  f_8 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_8);
  goto k_4;
  p_8 :
  OneNextSon();
  Rpush(q_8);
  goto n_4;
  q_8 :
  AllBuild();
  AllBuild();
  d_8 :
  Cpop();
  Epopd(0,1);
  Return();
  i_4 :
  _ST_WriteToBinaryFile();
  Return();
  k_4 :
  _ST_WriteToTextFile();
  Return();
  l_4 :
  Epushd(0,2);
  Tdupl();
  Cpush(s_8);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(u_8);
  Tdupl();
  Tdupl();
  v_8 :
  MatchFun("Cons",2);
  Cpush(w_8);
  Arg(0);
  Epushd(1,1);
  MoveTop(1,1);
  c_7 :
  TestFun(1,1,"Silent",0,&&fail);
  Rpush(a_9);
  goto t_15;
  a_9 :
  goto z_8;
  t_15 :
  Return();
  z_8 :
  Epopd(1,1);
  Tpop();
  Cpop();
  goto x_8;
  w_8 :
  Arg(1);
  Tdrop();
  goto v_8;
  x_8 :
  Tpop();
  Cpop();
  Crestore();
  Cjump();
  u_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto n_4;
  b_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  c_9 :
  MatchFun("Cons",2);
  Cpush(d_9);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  e_7 :
  TestFun(1,1,"Runtime",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(h_9);
  goto v_15;
  h_9 :
  goto g_9;
  v_15 :
  Move(0,2,1,2);
  Return();
  g_9 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto f_9;
  d_9 :
  Arg(1);
  Tdrop();
  goto c_9;
  f_9 :
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_9);
  goto n_4;
  i_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  j_9 :
  MatchFun("Cons",2);
  Cpush(k_9);
  Arg(0);
  Epushd(1,2);
  MoveTop(1,1);
  g_7 :
  TestFun(1,1,"Program",1,&&fail);
  MoveArg(1,2,1,1,0);
  Rpush(o_9);
  goto x_15;
  o_9 :
  goto n_9;
  x_15 :
  Move(0,1,1,2);
  Return();
  n_9 :
  Epopd(1,2);
  Tpop();
  Cpop();
  goto l_9;
  k_9 :
  Arg(1);
  Tdrop();
  goto j_9;
  l_9 :
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_9);
  goto n_4;
  p_9 :
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Rpush(q_9);
  goto c_4;
  q_9 :
  goto r_8;
  s_8 :
  r_8 :
  Cpop();
  Tpop();
  Tset(ATmakeInt(0));
  Rpush(r_9);
  goto d_4;
  r_9 :
  Epopd(0,2);
  Return();
  m_4 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Rpush(s_9);
  goto c_4;
  s_9 :
  Tset(ATmakeInt(1));
  Rpush(t_9);
  goto d_4;
  t_9 :
  Return();
  n_4 :
  MatchFun("TNil",0);
  TravInit();
  AllBuild();
  Return();
  v_9 :
DOIT_END
