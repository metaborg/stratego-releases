#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(b_2);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("list-basic-test");
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
  goto h_3;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto i_3;
  b_0 :
  Rpush(h_0);
  goto n_3;
  h_0 :
  Rpush(i_0);
  goto j_3;
  i_0 :
  Rpush(j_0);
  goto l_3;
  j_0 :
  Epopd(0,0);
  Return();
  h_3 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  i_3 :
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
  j_3 :
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
  goto h_3;
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
  goto h_3;
  l_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(m_0);
  goto k_3;
  m_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  k_3 :
  MatchFun("TNil",0);
  Return();
  l_3 :
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
  goto k_3;
  p_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(q_0);
  goto m_3;
  q_0 :
  Cpop();
  goto n_0;
  o_0 :
  BuildInt(1);
  Rpush(r_0);
  goto m_3;
  r_0 :
  n_0 :
  Epopd(0,0);
  Return();
  m_3 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  n_3 :
  Epushd(0,2);
  Tdupl();
  BuildStr("test1");
  Rpush(s_0);
  goto r_3;
  s_0 :
  Tpop();
  Cpush(u_0);
  Tdupl();
  Cpush(w_0);
  BuildInt(1);
  Tpush();
  BuildInt(2);
  Tpush();
  BuildInt(3);
  Tpush();
  BuildInt(4);
  Tpush();
  BuildInt(5);
  Tpush();
  BuildInt(6);
  Tpush();
  BuildInt(7);
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
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epushd(1,2);
  Rpush(x_0);
  z_2 :
  Cpush(z_0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchInt(4);
  OneNextSon();
  AllBuild();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchVard(1,1);
  AllBuild();
  BuildFun("Nil",0);
  Cpop();
  goto y_0;
  z_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_1);
  goto z_2;
  k_1 :
  AllBuild();
  y_0 :
  Return();
  x_0 :
  MatchVard(1,2);
  Epushd(2,1);
  BuildVard(1,2);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,2);
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
  Epopd(1,2);
  MatchVard(0,1);
  Cpop();
  goto v_0;
  w_0 :
  BuildStr("  failed");
  Rpush(l_1);
  goto r_3;
  l_1 :
  Rpush(m_1);
  goto s_3;
  m_1 :
  v_0 :
  BuildInt(1);
  Tpush();
  BuildInt(2);
  Tpush();
  BuildInt(3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildInt(5);
  Tpush();
  BuildInt(6);
  Tpush();
  BuildInt(7);
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
  MatchVard(0,2);
  Cpush(o_1);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto n_1;
  o_1 :
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
  Rpush(r_1);
  goto h_3;
  r_1 :
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
  Rpush(s_1);
  goto h_3;
  s_1 :
  Tpop();
  Epopd(1,0);
  Rpush(t_1);
  goto s_3;
  t_1 :
  n_1 :
  Tpop();
  Rpush(u_1);
  goto o_3;
  u_1 :
  Cpop();
  goto t_0;
  u_0 :
  Rpush(v_1);
  goto q_3;
  v_1 :
  t_0 :
  Epopd(0,2);
  Return();
  o_3 :
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
  Rpush(w_1);
  goto p_3;
  w_1 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_1);
  goto k_3;
  x_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  p_3 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  q_3 :
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
  Rpush(y_1);
  goto p_3;
  y_1 :
  Epopd(1,1);
  OneNextSon();
  Rpush(z_1);
  goto k_3;
  z_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  r_3 :
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
  Rpush(a_2);
  goto h_3;
  a_2 :
  Tpop();
  Epopd(0,0);
  Return();
  s_3 :
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
  b_2 :
DOIT_END
