#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(h_5);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("match-automaton-test");
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
  Rpush(j_0);
  goto a_4;
  j_0 :
  Tpop();
  Epopd(1,0);
  Rpush(k_0);
  goto b_4;
  k_0 :
  Rpush(l_0);
  goto g_4;
  l_0 :
  Rpush(m_0);
  goto m_4;
  m_0 :
  Rpush(n_0);
  goto c_4;
  n_0 :
  Rpush(o_0);
  goto e_4;
  o_0 :
  Epopd(0,0);
  Return();
  a_4 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  b_4 :
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
  c_4 :
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
  Rpush(p_0);
  goto a_4;
  p_0 :
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
  Rpush(q_0);
  goto a_4;
  q_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(r_0);
  goto d_4;
  r_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  d_4 :
  MatchFun("TNil",0);
  Return();
  e_4 :
  Epushd(0,0);
  Cpush(t_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(u_0);
  goto d_4;
  u_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(v_0);
  goto f_4;
  v_0 :
  Cpop();
  goto s_0;
  t_0 :
  BuildInt(1);
  Rpush(w_0);
  goto f_4;
  w_0 :
  s_0 :
  Epopd(0,0);
  Return();
  f_4 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  g_4 :
  Epushd(0,2);
  Tdupl();
  BuildStr("failure-in-case");
  Rpush(x_0);
  goto k_4;
  x_0 :
  Tpop();
  Cpush(z_0);
  Tdupl();
  Cpush(n_1);
  BuildFun("A",0);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("D",0);
  Tpush();
  BuildFun("G",2);
  Tpush();
  BuildFun("F",2);
  Epushd(1,2);
  MatchFun("F",2);
  Arg(0);
  MatchFunFC("A",0,&&r_1);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFunFC("G",2,&&t_1);
  MatchVard(1,1);
  Arg(0);
  MatchFun("B",0);
  Tpop();
  Arg(1);
  MatchFun("C",0);
  Tpop();
  Tpop();
  Cpush(v_1);
  Rpush(w_1);
  goto a_0;
  w_1 :
  Cpop();
  goto u_1;
  v_1 :
  Rpush(x_1);
  goto b_0;
  x_1 :
  u_1 :
  goto s_1;
  t_1 :
  MatchVard(1,1);
  Tpop();
  Rpush(y_1);
  goto a_0;
  y_1 :
  s_1 :
  goto q_1;
  r_1 :
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("G",2);
  Arg(0);
  MatchFun("B",0);
  Tpop();
  Arg(1);
  MatchFun("C",0);
  Tpop();
  Tpop();
  Rpush(z_1);
  goto b_0;
  z_1 :
  q_1 :
  goto p_1;
  b_0 :
  BuildFun("B",0);
  Return();
  p_1 :
  goto o_1;
  a_0 :
  BuildFun("A",0);
  Return();
  o_1 :
  Epopd(1,2);
  MatchVard(0,1);
  Cpop();
  goto a_1;
  n_1 :
  BuildStr("  failed");
  Rpush(a_2);
  goto k_4;
  a_2 :
  Rpush(b_2);
  goto l_4;
  b_2 :
  a_1 :
  BuildFun("A",0);
  MatchVard(0,2);
  Cpush(q_2);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto c_2;
  q_2 :
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
  Rpush(y_2);
  goto a_4;
  y_2 :
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
  Rpush(z_2);
  goto a_4;
  z_2 :
  Tpop();
  Epopd(1,0);
  Rpush(a_3);
  goto l_4;
  a_3 :
  c_2 :
  Tpop();
  Rpush(b_3);
  goto h_4;
  b_3 :
  Cpop();
  goto y_0;
  z_0 :
  Rpush(c_3);
  goto j_4;
  c_3 :
  y_0 :
  Epopd(0,2);
  Return();
  h_4 :
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
  Rpush(d_3);
  goto i_4;
  d_3 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_3);
  goto d_4;
  e_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  i_4 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  j_4 :
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
  Rpush(f_3);
  goto i_4;
  f_3 :
  Epopd(1,1);
  OneNextSon();
  Rpush(g_3);
  goto d_4;
  g_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  k_4 :
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
  Rpush(h_3);
  goto a_4;
  h_3 :
  Tpop();
  Epopd(0,0);
  Return();
  l_4 :
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
  m_4 :
  Epushd(0,2);
  Tdupl();
  BuildStr("failure-in-case");
  Rpush(i_3);
  goto k_4;
  i_3 :
  Tpop();
  Cpush(k_3);
  Tdupl();
  Cpush(m_3);
  BuildFun("A",0);
  Tpush();
  BuildFun("D",0);
  Tpush();
  BuildFun("F",2);
  Epushd(1,2);
  MatchFun("F",2);
  Arg(0);
  MatchFunFC("A",0,&&p_4);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFunFC("B",0,&&r_4);
  MatchVard(1,1);
  Tpop();
  Cpush(t_4);
  Rpush(u_4);
  goto h_0;
  u_4 :
  Cpop();
  goto s_4;
  t_4 :
  Rpush(v_4);
  goto i_0;
  v_4 :
  s_4 :
  goto q_4;
  r_4 :
  MatchVard(1,1);
  Tpop();
  Rpush(w_4);
  goto h_0;
  w_4 :
  q_4 :
  goto o_4;
  p_4 :
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("B",0);
  Tpop();
  Rpush(x_4);
  goto i_0;
  x_4 :
  o_4 :
  goto n_4;
  i_0 :
  BuildFun("B",0);
  Return();
  n_4 :
  goto n_3;
  h_0 :
  BuildFun("A",0);
  Return();
  n_3 :
  Epopd(1,2);
  MatchVard(0,1);
  Cpop();
  goto l_3;
  m_3 :
  BuildStr("  failed");
  Rpush(y_4);
  goto k_4;
  y_4 :
  Rpush(z_4);
  goto l_4;
  z_4 :
  l_3 :
  BuildFun("A",0);
  MatchVard(0,2);
  Cpush(b_5);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto a_5;
  b_5 :
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
  Rpush(c_5);
  goto a_4;
  c_5 :
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
  Rpush(d_5);
  goto a_4;
  d_5 :
  Tpop();
  Epopd(1,0);
  Rpush(e_5);
  goto l_4;
  e_5 :
  a_5 :
  Tpop();
  Rpush(f_5);
  goto h_4;
  f_5 :
  Cpop();
  goto j_3;
  k_3 :
  Rpush(g_5);
  goto j_4;
  g_5 :
  j_3 :
  Epopd(0,2);
  Return();
  h_5 :
DOIT_END
