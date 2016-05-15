#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(m_3);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("string-test");
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
  goto t_2;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto u_2;
  b_0 :
  Rpush(h_0);
  goto z_2;
  h_0 :
  Rpush(i_0);
  goto v_2;
  i_0 :
  Rpush(j_0);
  goto x_2;
  j_0 :
  Epopd(0,0);
  Return();
  t_2 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  u_2 :
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
  v_2 :
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
  goto t_2;
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
  goto t_2;
  l_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(m_0);
  goto w_2;
  m_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  w_2 :
  MatchFun("TNil",0);
  Return();
  x_2 :
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
  goto w_2;
  p_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(q_0);
  goto y_2;
  q_0 :
  Cpop();
  goto n_0;
  o_0 :
  BuildInt(1);
  Rpush(r_0);
  goto y_2;
  r_0 :
  n_0 :
  Epopd(0,0);
  Return();
  y_2 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  z_2 :
  Epushd(0,2);
  Tdupl();
  BuildStr("basename-test");
  Rpush(s_0);
  goto d_3;
  s_0 :
  Tpop();
  Cpush(u_0);
  Tdupl();
  Cpush(w_0);
  BuildStr("./number.r");
  Rpush(x_0);
  goto f_3;
  x_0 :
  MatchVard(0,1);
  Cpop();
  goto v_0;
  w_0 :
  BuildStr("  failed");
  Rpush(y_0);
  goto d_3;
  y_0 :
  Rpush(z_0);
  goto e_3;
  z_0 :
  v_0 :
  BuildStr("./number");
  MatchVard(0,2);
  Cpush(n_1);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto a_1;
  n_1 :
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
  Rpush(o_1);
  goto t_2;
  o_1 :
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
  Rpush(p_1);
  goto t_2;
  p_1 :
  Tpop();
  Epopd(1,0);
  Rpush(q_1);
  goto e_3;
  q_1 :
  a_1 :
  Tpop();
  Rpush(r_1);
  goto a_3;
  r_1 :
  Cpop();
  goto t_0;
  u_0 :
  Rpush(s_1);
  goto c_3;
  s_1 :
  t_0 :
  Epopd(0,2);
  Return();
  a_3 :
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
  Rpush(t_1);
  goto b_3;
  t_1 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_1);
  goto w_2;
  u_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  b_3 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  c_3 :
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
  Rpush(v_1);
  goto b_3;
  v_1 :
  Epopd(1,1);
  OneNextSon();
  Rpush(w_1);
  goto w_2;
  w_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  d_3 :
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
  Rpush(x_1);
  goto t_2;
  x_1 :
  Tpop();
  Epopd(0,0);
  Return();
  e_3 :
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
  f_3 :
  Epushd(0,0);
  Rpush(y_1);
  goto g_3;
  y_1 :
  Epushd(1,0);
  Cpush(a_2);
  Rpush(m_2);
  s_2 :
  Cpush(j_3);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_3);
  goto s_2;
  k_3 :
  AllBuild();
  Cpop();
  goto i_3;
  j_3 :
  MatchFun("Cons",2);
  Arg(0);
  MatchInt(46);
  Tpop();
  Arg(1);
  Tpop();
  BuildFun("Nil",0);
  i_3 :
  Return();
  m_2 :
  Cpop();
  goto z_1;
  a_2 :
  z_1 :
  Epopd(1,0);
  Rpush(l_3);
  goto h_3;
  l_3 :
  Epopd(0,0);
  Return();
  g_3 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  h_3 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  m_3 :
DOIT_END
