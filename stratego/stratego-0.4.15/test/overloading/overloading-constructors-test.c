#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(d_5);
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
  Rpush(c_0);
  goto m_35;
  c_0 :
  Tpop();
  Epopd(1,0);
  Rpush(d_0);
  goto n_35;
  d_0 :
  Rpush(e_0);
  goto s_35;
  e_0 :
  Rpush(f_0);
  goto z_35;
  f_0 :
  Rpush(g_0);
  goto a_36;
  g_0 :
  Rpush(h_0);
  goto b_36;
  h_0 :
  Rpush(i_0);
  goto c_36;
  i_0 :
  Rpush(j_0);
  goto d_36;
  j_0 :
  Rpush(k_0);
  goto o_35;
  k_0 :
  Rpush(l_0);
  goto q_35;
  l_0 :
  Epopd(0,0);
  Return();
  m_35 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  n_35 :
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
  o_35 :
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
  Rpush(m_0);
  goto m_35;
  m_0 :
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
  Rpush(n_0);
  goto m_35;
  n_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(o_0);
  goto p_35;
  o_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  p_35 :
  MatchFun("TNil",0);
  Return();
  q_35 :
  Epushd(0,0);
  Cpush(q_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(r_0);
  goto p_35;
  r_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(s_0);
  goto r_35;
  s_0 :
  Cpop();
  goto p_0;
  q_0 :
  BuildInt(1);
  Rpush(t_0);
  goto r_35;
  t_0 :
  p_0 :
  Epopd(0,0);
  Return();
  r_35 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  s_35 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test1");
  Rpush(u_0);
  goto w_35;
  u_0 :
  Tpop();
  Cpush(w_0);
  Tdupl();
  Cpush(y_0);
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
  Rpush(z_0);
  goto y_35;
  z_0 :
  MatchVard(0,1);
  Cpop();
  goto x_0;
  y_0 :
  BuildStr("  failed");
  Rpush(a_1);
  goto w_35;
  a_1 :
  Rpush(b_1);
  goto x_35;
  b_1 :
  x_0 :
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(d_1);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto c_1;
  d_1 :
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
  Rpush(e_1);
  goto m_35;
  e_1 :
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
  Rpush(f_1);
  goto m_35;
  f_1 :
  Tpop();
  Epopd(1,0);
  Rpush(g_1);
  goto x_35;
  g_1 :
  c_1 :
  Tpop();
  Rpush(h_1);
  goto t_35;
  h_1 :
  Cpop();
  goto v_0;
  w_0 :
  Rpush(i_1);
  goto v_35;
  i_1 :
  v_0 :
  Epopd(0,2);
  Return();
  t_35 :
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
  Rpush(j_1);
  goto u_35;
  j_1 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_1);
  goto p_35;
  k_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  u_35 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  v_35 :
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
  Rpush(l_1);
  goto u_35;
  l_1 :
  Epopd(1,1);
  OneNextSon();
  Rpush(m_1);
  goto p_35;
  m_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  w_35 :
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
  Rpush(n_1);
  goto m_35;
  n_1 :
  Tpop();
  Epopd(0,0);
  Return();
  x_35 :
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
  y_35 :
  Epushd(0,0);
  Cpush(p_1);
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
  goto o_1;
  p_1 :
  Cpush(r_1);
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
  goto q_1;
  r_1 :
  Cpush(t_1);
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
  goto s_1;
  t_1 :
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
  s_1 :
  q_1 :
  o_1 :
  Epopd(0,0);
  Return();
  z_35 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test1");
  Rpush(u_1);
  goto w_35;
  u_1 :
  Tpop();
  Cpush(w_1);
  Tdupl();
  Cpush(y_1);
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
  Rpush(z_1);
  goto y_35;
  z_1 :
  MatchVard(0,1);
  Cpop();
  goto x_1;
  y_1 :
  BuildStr("  failed");
  Rpush(a_2);
  goto w_35;
  a_2 :
  Rpush(b_2);
  goto x_35;
  b_2 :
  x_1 :
  BuildFun("Skip",0);
  MatchVard(0,2);
  Cpush(d_2);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto c_2;
  d_2 :
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
  Rpush(e_2);
  goto m_35;
  e_2 :
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
  Rpush(f_2);
  goto m_35;
  f_2 :
  Tpop();
  Epopd(1,0);
  Rpush(g_2);
  goto x_35;
  g_2 :
  c_2 :
  Tpop();
  Rpush(h_2);
  goto t_35;
  h_2 :
  Cpop();
  goto v_1;
  w_1 :
  Rpush(i_2);
  goto v_35;
  i_2 :
  v_1 :
  Epopd(0,2);
  Return();
  a_36 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test3");
  Rpush(j_2);
  goto w_35;
  j_2 :
  Tpop();
  Cpush(l_2);
  Tdupl();
  Cpush(n_2);
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
  Rpush(o_2);
  goto y_35;
  o_2 :
  MatchVard(0,1);
  Cpop();
  goto m_2;
  n_2 :
  BuildStr("  failed");
  Rpush(p_2);
  goto w_35;
  p_2 :
  Rpush(q_2);
  goto x_35;
  q_2 :
  m_2 :
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(s_2);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto r_2;
  s_2 :
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
  Rpush(t_2);
  goto m_35;
  t_2 :
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
  Rpush(u_2);
  goto m_35;
  u_2 :
  Tpop();
  Epopd(1,0);
  Rpush(v_2);
  goto x_35;
  v_2 :
  r_2 :
  Tpop();
  Rpush(w_2);
  goto t_35;
  w_2 :
  Cpop();
  goto k_2;
  l_2 :
  Rpush(x_2);
  goto v_35;
  x_2 :
  k_2 :
  Epopd(0,2);
  Return();
  b_36 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test4");
  Rpush(y_2);
  goto w_35;
  y_2 :
  Tpop();
  Cpush(a_3);
  Tdupl();
  Cpush(c_3);
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
  Rpush(d_3);
  goto y_35;
  d_3 :
  MatchVard(0,1);
  Cpop();
  goto b_3;
  c_3 :
  BuildStr("  failed");
  Rpush(e_3);
  goto w_35;
  e_3 :
  Rpush(f_3);
  goto x_35;
  f_3 :
  b_3 :
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(h_3);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto g_3;
  h_3 :
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
  Rpush(i_3);
  goto m_35;
  i_3 :
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
  Rpush(j_3);
  goto m_35;
  j_3 :
  Tpop();
  Epopd(1,0);
  Rpush(k_3);
  goto x_35;
  k_3 :
  g_3 :
  Tpop();
  Rpush(l_3);
  goto t_35;
  l_3 :
  Cpop();
  goto z_2;
  a_3 :
  Rpush(m_3);
  goto v_35;
  m_3 :
  z_2 :
  Epopd(0,2);
  Return();
  c_36 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test5");
  Rpush(n_3);
  goto w_35;
  n_3 :
  Tpop();
  Cpush(p_3);
  Tdupl();
  Cpush(r_3);
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
  Cpush(t_3);
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
  goto s_3;
  t_3 :
  Cpush(v_3);
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
  goto u_3;
  v_3 :
  Epushd(1,2);
  MatchFun("If",2);
  Arg(0);
  MatchFunFC("True",0,"z_3");
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Rpush(a_4);
  goto a_0;
  a_4 :
  goto y_3;
  z_3 :
  MatchFunFC("False",0,"b_4");
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Rpush(c_4);
  goto b_0;
  c_4 :
  goto y_3;
  b_4 :
  goto fail;
  y_3 :
  goto x_3;
  b_0 :
  BuildFun("Skip",0);
  Return();
  x_3 :
  goto w_3;
  a_0 :
  BuildVard(1,1);
  Return();
  w_3 :
  Epopd(1,2);
  u_3 :
  s_3 :
  MatchVard(0,1);
  Cpop();
  goto q_3;
  r_3 :
  BuildStr("  failed");
  Rpush(d_4);
  goto w_35;
  d_4 :
  Rpush(e_4);
  goto x_35;
  e_4 :
  q_3 :
  BuildStr("x");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Assign",2);
  MatchVard(0,2);
  Cpush(g_4);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto f_4;
  g_4 :
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
  Rpush(h_4);
  goto m_35;
  h_4 :
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
  Rpush(i_4);
  goto m_35;
  i_4 :
  Tpop();
  Epopd(1,0);
  Rpush(j_4);
  goto x_35;
  j_4 :
  f_4 :
  Tpop();
  Rpush(k_4);
  goto t_35;
  k_4 :
  Cpop();
  goto o_3;
  p_3 :
  Rpush(l_4);
  goto v_35;
  l_4 :
  o_3 :
  Epopd(0,2);
  Return();
  d_36 :
  Epushd(0,2);
  Tdupl();
  BuildStr("eval-test6");
  Rpush(m_4);
  goto w_35;
  m_4 :
  Tpop();
  Cpush(o_4);
  Tdupl();
  Cpush(q_4);
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
  Cpush(r_4);
  Tdupl();
  Cpush(t_4);
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
  goto s_4;
  t_4 :
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
  s_4 :
  Cpop();
  Crestore();
  Cjump();
  r_4 :
  MatchVard(0,1);
  Cpop();
  goto p_4;
  q_4 :
  BuildStr("  failed");
  Rpush(u_4);
  goto w_35;
  u_4 :
  Rpush(v_4);
  goto x_35;
  v_4 :
  p_4 :
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
  Cpush(x_4);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto w_4;
  x_4 :
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
  Rpush(y_4);
  goto m_35;
  y_4 :
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
  Rpush(z_4);
  goto m_35;
  z_4 :
  Tpop();
  Epopd(1,0);
  Rpush(a_5);
  goto x_35;
  a_5 :
  w_4 :
  Tpop();
  Rpush(b_5);
  goto t_35;
  b_5 :
  Cpop();
  goto n_4;
  o_4 :
  Rpush(c_5);
  goto v_35;
  c_5 :
  n_4 :
  Epopd(0,2);
  Return();
  d_5 :
DOIT_END
