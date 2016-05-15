#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(o_9);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("overloading-constructors-test");
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("test suite: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(h_0);
  goto i_9;
  h_0 :
  Tpop();
  Epopd(1,0);
  Rpush(i_0);
  goto j_9;
  i_0 :
  Rpush(j_0);
  goto r_9;
  j_0 :
  Rpush(k_0);
  goto e_10;
  k_0 :
  Rpush(l_0);
  goto f_10;
  l_0 :
  Rpush(m_0);
  goto g_10;
  m_0 :
  Rpush(n_0);
  goto h_10;
  n_0 :
  Rpush(o_0);
  goto i_10;
  o_0 :
  Rpush(p_0);
  goto k_9;
  p_0 :
  Rpush(q_0);
  goto m_9;
  q_0 :
  Epopd(0,0);
  Return();
  i_9 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  j_9 :
  Epushd(0,0);
  BuildInt(0);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,0);
  Return();
  k_9 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("successes: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(r_0);
  goto i_9;
  r_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("failures: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(s_0);
  goto i_9;
  s_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(t_0);
  goto l_9;
  t_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  l_9 :
  MatchFun("TNil",0);
  Return();
  m_9 :
  Epushd(0,0);
  Cpush(v_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(w_0);
  goto l_9;
  w_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(x_0);
  goto q_9;
  x_0 :
  Cpop();
  goto u_0;
  v_0 :
  BuildInt(1);
  Rpush(y_0);
  goto q_9;
  y_0 :
  u_0 :
  Epopd(0,0);
  Return();
  q_9 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  r_9 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test1");
  Rpush(z_0);
  goto z_9;
  z_0 :
  Tpop();
  Cpush(n_1);
  Tdupl();
  Cpush(p_1);
  BuildFun("True",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",2);
  Rpush(q_1);
  goto d_10;
  q_1 :
  MatchVard(0,1);
  Cpop();
  goto o_1;
  p_1 :
  BuildStr("  failed");
  Rpush(r_1);
  goto z_9;
  r_1 :
  Rpush(s_1);
  goto c_10;
  s_1 :
  o_1 :
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(u_1);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto t_1;
  u_1 :
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  result not equal: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(v_1);
  goto i_9;
  v_1 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,2);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  expected: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(w_1);
  goto i_9;
  w_1 :
  Tpop();
  Epopd(1,0);
  Rpush(x_1);
  goto c_10;
  x_1 :
  t_1 :
  Tpop();
  Rpush(y_1);
  goto s_9;
  y_1 :
  Cpop();
  goto d_1;
  n_1 :
  Rpush(z_1);
  goto y_9;
  z_1 :
  d_1 :
  Epopd(0,2);
  Return();
  s_9 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(a_2);
  goto x_9;
  a_2 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_2);
  goto l_9;
  m_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  x_9 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  y_9 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(a_3);
  goto x_9;
  a_3 :
  Epopd(1,1);
  OneNextSon();
  Rpush(b_3);
  goto l_9;
  b_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  z_9 :
  Epushd(0,0);
  Tdupl();
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("stderr",0);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
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
  Rpush(c_3);
  goto i_9;
  c_3 :
  Tpop();
  Epopd(0,0);
  Return();
  c_10 :
  Epushd(0,1);
  MatchVard(0,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epopd(0,1);
  Return();
  d_10 :
  Epushd(0,0);
  Cpush(e_3);
  Epushd(1,1);
  MatchFun("If",2);
  Arg(0);
  MatchFun("True",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto d_3;
  e_3 :
  Cpush(g_3);
  Epushd(1,1);
  MatchFun("If",2);
  Arg(0);
  MatchFun("False",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildFun("Skip",0);
  Epopd(1,1);
  Cpop();
  goto f_3;
  g_3 :
  Cpush(i_3);
  Epushd(1,2);
  MatchFun("If",3);
  Arg(0);
  MatchFun("True",0);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Arg(2);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto h_3;
  i_3 :
  Epushd(1,2);
  MatchFun("If",3);
  Arg(0);
  MatchFun("False",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Arg(2);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  h_3 :
  f_3 :
  d_3 :
  Epopd(0,0);
  Return();
  e_10 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test1");
  Rpush(j_3);
  goto z_9;
  j_3 :
  Tpop();
  Cpush(l_3);
  Tdupl();
  Cpush(n_3);
  BuildFun("False",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",2);
  Rpush(a_4);
  goto d_10;
  a_4 :
  MatchVard(0,1);
  Cpop();
  goto m_3;
  n_3 :
  BuildStr("  failed");
  Rpush(b_4);
  goto z_9;
  b_4 :
  Rpush(c_4);
  goto c_10;
  c_4 :
  m_3 :
  BuildFun("Skip",0);
  MatchVard(0,2);
  Cpush(e_4);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto d_4;
  e_4 :
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  result not equal: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(f_4);
  goto i_9;
  f_4 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,2);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  expected: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(g_4);
  goto i_9;
  g_4 :
  Tpop();
  Epopd(1,0);
  Rpush(h_4);
  goto c_10;
  h_4 :
  d_4 :
  Tpop();
  Rpush(i_4);
  goto s_9;
  i_4 :
  Cpop();
  goto k_3;
  l_3 :
  Rpush(j_4);
  goto y_9;
  j_4 :
  k_3 :
  Epopd(0,2);
  Return();
  f_10 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test3");
  Rpush(k_4);
  goto z_9;
  k_4 :
  Tpop();
  Cpush(m_4);
  Tdupl();
  Cpush(a_5);
  BuildFun("True",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",3);
  Rpush(b_5);
  goto d_10;
  b_5 :
  MatchVard(0,1);
  Cpop();
  goto n_4;
  a_5 :
  BuildStr("  failed");
  Rpush(c_5);
  goto z_9;
  c_5 :
  Rpush(d_5);
  goto c_10;
  d_5 :
  n_4 :
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(f_5);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto e_5;
  f_5 :
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  result not equal: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(g_5);
  goto i_9;
  g_5 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,2);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  expected: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(h_5);
  goto i_9;
  h_5 :
  Tpop();
  Epopd(1,0);
  Rpush(i_5);
  goto c_10;
  i_5 :
  e_5 :
  Tpop();
  Rpush(j_5);
  goto s_9;
  j_5 :
  Cpop();
  goto l_4;
  m_4 :
  Rpush(k_5);
  goto y_9;
  k_5 :
  l_4 :
  Epopd(0,2);
  Return();
  g_10 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test4");
  Rpush(l_5);
  goto z_9;
  l_5 :
  Tpop();
  Cpush(n_5);
  Tdupl();
  Cpush(z_5);
  BuildFun("False",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",3);
  Rpush(a_6);
  goto d_10;
  a_6 :
  MatchVard(0,1);
  Cpop();
  goto y_5;
  z_5 :
  BuildStr("  failed");
  Rpush(b_6);
  goto z_9;
  b_6 :
  Rpush(c_6);
  goto c_10;
  c_6 :
  y_5 :
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(g_6);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto d_6;
  g_6 :
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  result not equal: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(h_6);
  goto i_9;
  h_6 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,2);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  expected: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(i_6);
  goto i_9;
  i_6 :
  Tpop();
  Epopd(1,0);
  Rpush(j_6);
  goto c_10;
  j_6 :
  d_6 :
  Tpop();
  Rpush(k_6);
  goto s_9;
  k_6 :
  Cpop();
  goto m_5;
  n_5 :
  Rpush(l_6);
  goto y_9;
  l_6 :
  m_5 :
  Epopd(0,2);
  Return();
  h_10 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test5");
  Rpush(m_6);
  goto z_9;
  m_6 :
  Tpop();
  Cpush(o_6);
  Tdupl();
  Cpush(q_6);
  BuildFun("True",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",2);
  Cpush(s_6);
  Epushd(1,2);
  MatchFun("If",3);
  Arg(0);
  MatchFun("True",0);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Arg(2);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto r_6;
  s_6 :
  Cpush(u_6);
  Epushd(1,2);
  MatchFun("If",3);
  Arg(0);
  MatchFun("False",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Arg(2);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto t_6;
  u_6 :
  Epushd(1,2);
  MatchFun("If",2);
  Arg(0);
  MatchFunFC("True",0,&&y_6);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Rpush(z_6);
  goto a_0;
  z_6 :
  goto x_6;
  y_6 :
  MatchFunFC("False",0,&&h_7);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Rpush(i_7);
  goto b_0;
  i_7 :
  goto x_6;
  h_7 :
  goto fail;
  x_6 :
  goto w_6;
  b_0 :
  BuildFun("Skip",0);
  Return();
  w_6 :
  goto v_6;
  a_0 :
  BuildVard(1,1);
  Return();
  v_6 :
  Epopd(1,2);
  t_6 :
  r_6 :
  MatchVard(0,1);
  Cpop();
  goto p_6;
  q_6 :
  BuildStr("  failed");
  Rpush(j_7);
  goto z_9;
  j_7 :
  Rpush(k_7);
  goto c_10;
  k_7 :
  p_6 :
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(m_7);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto l_7;
  m_7 :
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  result not equal: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(w_7);
  goto i_9;
  w_7 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,2);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  expected: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(x_7);
  goto i_9;
  x_7 :
  Tpop();
  Epopd(1,0);
  Rpush(y_7);
  goto c_10;
  y_7 :
  l_7 :
  Tpop();
  Rpush(z_7);
  goto s_9;
  z_7 :
  Cpop();
  goto n_6;
  o_6 :
  Rpush(c_8);
  goto y_9;
  c_8 :
  n_6 :
  Epopd(0,2);
  Return();
  i_10 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test6");
  Rpush(d_8);
  goto z_9;
  d_8 :
  Tpop();
  Cpush(f_8);
  Tdupl();
  Cpush(h_8);
  BuildFun("False",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",2);
  Cpush(i_8);
  Tdupl();
  Cpush(k_8);
  Epushd(1,2);
  MatchFun("If",3);
  Arg(0);
  MatchFun("True",0);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Arg(2);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto j_8;
  k_8 :
  Epushd(1,2);
  MatchFun("If",3);
  Arg(0);
  MatchFun("False",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Arg(2);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  j_8 :
  Cpop();
  Crestore();
  Cjump();
  i_8 :
  MatchVard(0,1);
  Cpop();
  goto g_8;
  h_8 :
  BuildStr("  failed");
  Rpush(l_8);
  goto z_9;
  l_8 :
  Rpush(m_8);
  goto c_10;
  m_8 :
  g_8 :
  BuildFun("False",0);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  Tpush();
  BuildFun("If",2);
  MatchVard(0,2);
  Cpush(o_8);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto n_8;
  o_8 :
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  result not equal: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(p_8);
  goto i_9;
  p_8 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,2);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("  expected: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Rpush(q_8);
  goto i_9;
  q_8 :
  Tpop();
  Epopd(1,0);
  Rpush(r_8);
  goto c_10;
  r_8 :
  n_8 :
  Tpop();
  Rpush(s_8);
  goto s_9;
  s_8 :
  Cpop();
  goto e_8;
  f_8 :
  Rpush(t_8);
  goto y_9;
  t_8 :
  e_8 :
  Epopd(0,2);
  Return();
  o_9 :
DOIT_END
