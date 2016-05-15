#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(e_10);
  goto main;
  main :
  Epushd(0,0);
  Epushd(1,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildFun("Program",1);
  Epopd(2,1);
  OneNextSon();
  Rpush(f_0);
  c_3 :
  Cpush(h_0);
  Cpush(j_0);
  Rpush(k_0);
  goto k_8;
  k_0 :
  Cpop();
  goto i_0;
  j_0 :
  Rpush(l_0);
  goto l_8;
  l_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_0);
  goto c_3;
  m_0 :
  AllBuild();
  i_0 :
  Cpop();
  goto g_0;
  h_0 :
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Undefined",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,2);
  g_0 :
  Return();
  f_0 :
  AllBuild();
  Epopd(1,0);
  Cpush(o_0);
  Rpush(p_0);
  goto m_8;
  p_0 :
  Cpop();
  goto n_0;
  o_0 :
  Cpush(r_0);
  Rpush(s_0);
  goto r_8;
  s_0 :
  Epushd(1,1);
  Tdupl();
  Rpush(t_0);
  goto t_8;
  t_0 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,3);
  MatchFun("Block",1);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Tdupl();
  BuildVard(2,2);
  Epushd(3,0);
  Rpush(u_0);
  e_4 :
  Cpush(w_0);
  Rpush(x_0);
  goto k_8;
  x_0 :
  Cpop();
  goto v_0;
  w_0 :
  Cpush(z_0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchFun("ICountRule",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildFun("RuleCounter",1);
  Epopd(4,1);
  OneNextSon();
  Rpush(a_1);
  goto e_4;
  a_1 :
  AllBuild();
  Cpop();
  goto y_0;
  z_0 :
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  BuildVard(4,2);
  Epopd(4,2);
  Rpush(b_1);
  goto e_4;
  b_1 :
  y_0 :
  v_0 :
  Return();
  u_0 :
  Epopd(3,0);
  Rpush(c_1);
  goto a_9;
  c_1 :
  Epushd(3,0);
  Rpush(d_1);
  f_4 :
  Cpush(f_1);
  Rpush(g_1);
  goto k_8;
  g_1 :
  Cpop();
  goto e_1;
  f_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchFun("RuleCounter",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Epushd(5,1);
  BuildVard(4,1);
  Rpush(h_1);
  goto b_9;
  h_1 :
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("RuleCounter",2);
  Epopd(5,1);
  Epopd(4,1);
  OneNextSon();
  Rpush(i_1);
  goto f_4;
  i_1 :
  AllBuild();
  e_1 :
  Return();
  d_1 :
  Epopd(3,0);
  MatchVard(2,1);
  BuildVard(2,2);
  Epushd(3,0);
  Rpush(j_1);
  g_4 :
  Cpush(l_1);
  Rpush(m_1);
  goto k_8;
  m_1 :
  Cpop();
  goto k_1;
  l_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,0);
  Cpush(o_1);
  Epushd(5,2);
  MatchFun("ICountRule",1);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Epushd(6,0);
  Tdupl();
  p_1 :
  MatchFun("Cons",2);
  Cpush(q_1);
  Arg(0);
  MatchFun("RuleCounter",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,2);
  Tpop();
  Tpop();
  Cpop();
  goto r_1;
  q_1 :
  Arg(1);
  Tdrop();
  goto p_1;
  r_1 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,2);
  Tpush();
  BuildFun("ICountRule",1);
  Epopd(5,2);
  Cpop();
  goto n_1;
  o_1 :
  n_1 :
  Epopd(4,0);
  OneNextSon();
  Rpush(s_1);
  goto g_4;
  s_1 :
  AllBuild();
  k_1 :
  Return();
  j_1 :
  Epopd(3,0);
  MatchVard(2,3);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("RuleCounters",1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Block",1);
  Tpush();
  BuildFun("Program",2);
  Epopd(2,3);
  OneNextSon();
  Rpush(t_1);
  goto z_8;
  t_1 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(u_1);
  goto t_8;
  u_1 :
  MatchVard(1,1);
  Tpop();
  Epushd(2,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Runtime",1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,2);
  Epopd(1,1);
  Rpush(v_1);
  goto u_8;
  v_1 :
  Rpush(w_1);
  goto x_8;
  w_1 :
  Cpop();
  goto q_0;
  r_0 :
  Rpush(x_1);
  goto y_8;
  x_1 :
  q_0 :
  n_0 :
  Epopd(0,0);
  Return();
  k_8 :
  MatchFun("Nil",0);
  Return();
  l_8 :
  Epushd(0,0);
  Cpush(z_1);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("-S");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Silent",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto y_1;
  z_1 :
  Cpush(b_2);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("--silent");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Silent",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto a_2;
  b_2 :
  Cpush(d_2);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("--verbose");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Verbose",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto c_2;
  d_2 :
  Cpush(f_2);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("-v");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Version",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto e_2;
  f_2 :
  Cpush(h_2);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("--version");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Version",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto g_2;
  h_2 :
  Cpush(j_2);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("@version");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("DeclVersion",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto i_2;
  j_2 :
  Cpush(l_2);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("-i");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto k_2;
  l_2 :
  Cpush(n_2);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("--input");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto m_2;
  n_2 :
  Cpush(p_2);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("-o");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Output",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto o_2;
  p_2 :
  Cpush(r_2);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("--output");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Output",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto q_2;
  r_2 :
  Epushd(1,10);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  MatchVard(1,4);
  MatchVard(1,6);
  MatchVard(1,8);
  MatchVard(1,10);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  MatchVard(1,3);
  MatchVard(1,5);
  MatchVard(1,7);
  MatchVard(1,9);
  Tpop();
  Cpush(y_2);
  Rpush(d_3);
  goto a_0;
  d_3 :
  Cpop();
  goto x_2;
  y_2 :
  Cpush(f_3);
  Rpush(g_3);
  goto b_0;
  g_3 :
  Cpop();
  goto e_3;
  f_3 :
  Cpush(i_3);
  Rpush(j_3);
  goto c_0;
  j_3 :
  Cpop();
  goto h_3;
  i_3 :
  Cpush(l_3);
  Rpush(m_3);
  goto d_0;
  m_3 :
  Cpop();
  goto k_3;
  l_3 :
  Rpush(n_3);
  goto e_0;
  n_3 :
  k_3 :
  h_3 :
  e_3 :
  x_2 :
  goto w_2;
  e_0 :
  Tdupl();
  BuildVard(1,10);
  MatchString("-?");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,9);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  w_2 :
  goto v_2;
  d_0 :
  Tdupl();
  BuildVard(1,8);
  MatchString("-h");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,7);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  v_2 :
  goto u_2;
  c_0 :
  Tdupl();
  BuildVard(1,6);
  MatchString("--help");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,5);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  u_2 :
  goto t_2;
  b_0 :
  Tdupl();
  BuildVard(1,4);
  MatchString("-s");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Statistics",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  t_2 :
  goto s_2;
  a_0 :
  Tdupl();
  BuildVard(1,2);
  MatchString("-b");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Binary",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  s_2 :
  Epopd(1,10);
  q_2 :
  o_2 :
  m_2 :
  k_2 :
  i_2 :
  g_2 :
  e_2 :
  c_2 :
  a_2 :
  y_1 :
  Epopd(0,0);
  Return();
  m_8 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  o_3 :
  MatchFun("Cons",2);
  Cpush(p_3);
  Arg(0);
  Cpush(l_4);
  Rpush(m_4);
  goto n_8;
  m_4 :
  Cpop();
  goto k_4;
  l_4 :
  MatchFun("Undefined",1);
  k_4 :
  Tpop();
  Cpop();
  goto q_3;
  p_3 :
  Arg(1);
  Tdrop();
  goto o_3;
  q_3 :
  Tpop();
  Epopd(1,0);
  Rpush(n_4);
  goto o_8;
  n_4 :
  Epopd(0,0);
  Return();
  n_8 :
  MatchFun("Help",0);
  Return();
  o_8 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  o_4 :
  MatchFun("Cons",2);
  Cpush(t_4);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto u_4;
  t_4 :
  Arg(1);
  Tdrop();
  goto o_4;
  u_4 :
  Tpop();
  Epopd(1,0);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("usage : ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_6);
  goto p_8;
  q_6 :
  BuildInt(1);
  Rpush(z_6);
  goto q_8;
  z_6 :
  Tpop();
  Epopd(0,1);
  Return();
  p_8 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  q_8 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  r_8 :
  Epushd(0,1);
  Cpush(c_7);
  Epushd(1,0);
  Tdupl();
  d_7 :
  MatchFun("Cons",2);
  Cpush(e_7);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto f_7;
  e_7 :
  Arg(1);
  Tdrop();
  goto d_7;
  f_7 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto b_7;
  c_7 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  b_7 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(g_7);
  goto s_8;
  g_7 :
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  Epopd(0,1);
  Return();
  s_8 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  t_8 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  u_8 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(m_7);
  Epushd(1,0);
  Tdupl();
  n_7 :
  MatchFun("Cons",2);
  Cpush(o_7);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto p_7;
  o_7 :
  Arg(1);
  Tdrop();
  goto n_7;
  p_7 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto k_7;
  m_7 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  k_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_7);
  goto z_8;
  q_7 :
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
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildVard(0,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  OneNextSon();
  Rpush(r_7);
  goto z_8;
  r_7 :
  AllBuild();
  AllBuild();
  Cpush(w_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  x_7 :
  MatchFun("Cons",2);
  Cpush(y_7);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto z_7;
  y_7 :
  Arg(1);
  Tdrop();
  goto x_7;
  z_7 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(a_8);
  goto v_8;
  a_8 :
  OneNextSon();
  Rpush(b_8);
  goto z_8;
  b_8 :
  AllBuild();
  AllBuild();
  Cpop();
  goto v_7;
  w_7 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(c_8);
  goto w_8;
  c_8 :
  OneNextSon();
  Rpush(d_8);
  goto z_8;
  d_8 :
  AllBuild();
  AllBuild();
  v_7 :
  Epopd(0,1);
  Return();
  v_8 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  w_8 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  x_8 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(c_9);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(d_9);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  e_9 :
  MatchFun("Cons",2);
  Cpush(f_9);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto g_9;
  f_9 :
  Arg(1);
  Tdrop();
  goto e_9;
  g_9 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  d_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_9);
  goto z_8;
  h_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  i_9 :
  MatchFun("Cons",2);
  Cpush(j_9);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto k_9;
  j_9 :
  Arg(1);
  Tdrop();
  goto i_9;
  k_9 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_9);
  goto z_8;
  l_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  m_9 :
  MatchFun("Cons",2);
  Cpush(n_9);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto o_9;
  n_9 :
  Arg(1);
  Tdrop();
  goto m_9;
  o_9 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_9);
  goto z_8;
  p_9 :
  AllBuild();
  AllBuild();
  BuildFun("stderr",0);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(" (");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr(" secs)");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_9);
  goto p_8;
  q_9 :
  Cpop();
  goto e_8;
  c_9 :
  e_8 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(r_9);
  goto q_8;
  r_9 :
  Epopd(0,2);
  Return();
  y_8 :
  Epushd(0,0);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(s_9);
  goto p_8;
  s_9 :
  BuildInt(1);
  Rpush(t_9);
  goto q_8;
  t_9 :
  Epopd(0,0);
  Return();
  z_8 :
  MatchFun("TNil",0);
  Return();
  a_9 :
  Epushd(0,0);
  Rpush(u_9);
  f_8 :
  Cpush(w_9);
  Rpush(x_9);
  goto k_8;
  x_9 :
  Cpop();
  goto v_9;
  w_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto f_8;
  y_9 :
  AllBuild();
  v_9 :
  Epushd(1,0);
  Cpush(a_10);
  z_9 :
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Tdupl();
  BuildVard(2,2);
  Epushd(3,0);
  Tdupl();
  b_10 :
  MatchFun("Cons",2);
  Cpush(c_10);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Cpop();
  goto d_10;
  c_10 :
  Arg(1);
  Tdrop();
  goto b_10;
  d_10 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Tduplinv();
  goto z_9;
  a_10 :
  Epopd(1,0);
  Return();
  u_9 :
  Epopd(0,0);
  Return();
  b_9 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  e_10 :
DOIT_END
