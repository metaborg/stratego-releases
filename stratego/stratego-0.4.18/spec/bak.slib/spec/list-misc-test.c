#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(p_2);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("list-misc-test");
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
  Rpush(a_0);
  goto t_3;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto u_3;
  b_0 :
  Rpush(h_0);
  goto z_3;
  h_0 :
  Rpush(i_0);
  goto v_3;
  i_0 :
  Rpush(j_0);
  goto x_3;
  j_0 :
  Epopd(0,0);
  Return();
  t_3 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  u_3 :
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
  v_3 :
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
  Rpush(k_0);
  goto t_3;
  k_0 :
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
  Rpush(l_0);
  goto t_3;
  l_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(m_0);
  goto w_3;
  m_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  w_3 :
  MatchFun("TNil",0);
  Return();
  x_3 :
  Epushd(0,0);
  Cpush(o_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(p_0);
  goto w_3;
  p_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(q_0);
  goto y_3;
  q_0 :
  Cpop();
  goto n_0;
  o_0 :
  BuildInt(1);
  Rpush(r_0);
  goto y_3;
  r_0 :
  n_0 :
  Epopd(0,0);
  Return();
  y_3 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  z_3 :
  Epushd(0,2);
  Tdupl();
  BuildStr("test1");
  Rpush(s_0);
  goto d_4;
  s_0 :
  Tpop();
  Cpush(u_0);
  Tdupl();
  Cpush(w_0);
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildStr("c");
  Tpush();
  BuildStr("d");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("e");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(x_0);
  j_3 :
  Epushd(1,0);
  Rpush(y_0);
  k_3 :
  Cpush(g_1);
  Rpush(l_1);
  goto f_4;
  l_1 :
  Cpop();
  goto z_0;
  g_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(n_1);
  Rpush(o_1);
  goto g_4;
  o_1 :
  Rpush(p_1);
  goto j_3;
  p_1 :
  Cpop();
  goto m_1;
  n_1 :
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  m_1 :
  OneNextSon();
  Rpush(q_1);
  goto k_3;
  q_1 :
  AllBuild();
  Epushd(2,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(2,4);
  Epushd(3,0);
  Rpush(r_1);
  l_3 :
  Cpush(t_1);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_1);
  goto l_3;
  u_1 :
  AllBuild();
  Cpop();
  goto s_1;
  t_1 :
  Rpush(v_1);
  goto f_4;
  v_1 :
  BuildVard(2,3);
  s_1 :
  Return();
  r_1 :
  Epopd(3,0);
  Epopd(2,4);
  z_0 :
  Return();
  y_0 :
  Epopd(1,0);
  Return();
  x_0 :
  MatchVard(0,1);
  Cpop();
  goto v_0;
  w_0 :
  BuildStr("  failed");
  Rpush(y_1);
  goto d_4;
  y_1 :
  Rpush(z_1);
  goto e_4;
  z_1 :
  v_0 :
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildStr("c");
  Tpush();
  BuildStr("d");
  Tpush();
  BuildStr("e");
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
  BuildFun("Cons",2);
  MatchVard(0,2);
  Cpush(b_2);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto a_2;
  b_2 :
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
  Rpush(c_2);
  goto t_3;
  c_2 :
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
  Rpush(d_2);
  goto t_3;
  d_2 :
  Tpop();
  Epopd(1,0);
  Rpush(e_2);
  goto e_4;
  e_2 :
  a_2 :
  Tpop();
  Rpush(f_2);
  goto a_4;
  f_2 :
  Cpop();
  goto t_0;
  u_0 :
  Rpush(g_2);
  goto c_4;
  g_2 :
  t_0 :
  Epopd(0,2);
  Return();
  a_4 :
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
  Rpush(h_2);
  goto b_4;
  h_2 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_2);
  goto w_3;
  i_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  b_4 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  c_4 :
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
  Rpush(j_2);
  goto b_4;
  j_2 :
  Epopd(1,1);
  OneNextSon();
  Rpush(k_2);
  goto w_3;
  k_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  d_4 :
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
  Rpush(l_2);
  goto t_3;
  l_2 :
  Tpop();
  Epopd(0,0);
  Return();
  e_4 :
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
  f_4 :
  MatchFun("Nil",0);
  Return();
  g_4 :
  Epushd(0,0);
  Cpush(n_2);
  Rpush(o_2);
  goto f_4;
  o_2 :
  Cpop();
  goto m_2;
  n_2 :
  MatchFun("Cons",2);
  m_2 :
  Epopd(0,0);
  Return();
  p_2 :
DOIT_END
