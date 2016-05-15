#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(u_5);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("list-set-test");
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
  goto c_8;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto d_8;
  b_0 :
  Epushd(1,0);
  Tdupl();
  BuildStr("test1");
  Rpush(c_0);
  goto r_8;
  c_0 :
  Tpop();
  Cpush(e_0);
  Tdupl();
  Cpush(g_0);
  Rpush(h_0);
  goto n_8;
  h_0 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  succeeded: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(i_0);
  goto c_8;
  i_0 :
  Tpop();
  Epopd(2,0);
  Cpop();
  goto f_0;
  g_0 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  failed: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(j_0);
  goto c_8;
  j_0 :
  Tpop();
  Epopd(2,0);
  Rpush(k_0);
  goto v_8;
  k_0 :
  f_0 :
  Tpop();
  Rpush(l_0);
  goto s_8;
  l_0 :
  Cpop();
  goto d_0;
  e_0 :
  Rpush(m_0);
  goto u_8;
  m_0 :
  d_0 :
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  BuildStr("test2");
  Rpush(n_0);
  goto r_8;
  n_0 :
  Tpop();
  Cpush(p_0);
  Tdupl();
  Cpush(r_0);
  Rpush(s_0);
  goto p_8;
  s_0 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  succeeded: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(t_0);
  goto c_8;
  t_0 :
  Tpop();
  Epopd(2,0);
  Cpop();
  goto q_0;
  r_0 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  failed: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(u_0);
  goto c_8;
  u_0 :
  Tpop();
  Epopd(2,0);
  Rpush(v_0);
  goto v_8;
  v_0 :
  q_0 :
  Tpop();
  Rpush(w_0);
  goto s_8;
  w_0 :
  Cpop();
  goto o_0;
  p_0 :
  Rpush(x_0);
  goto u_8;
  x_0 :
  o_0 :
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  BuildStr("test3");
  Rpush(y_0);
  goto r_8;
  y_0 :
  Tpop();
  Cpush(a_1);
  Tdupl();
  Cpush(c_1);
  Rpush(d_1);
  goto q_8;
  d_1 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  succeeded: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(e_1);
  goto c_8;
  e_1 :
  Tpop();
  Epopd(2,0);
  Cpop();
  goto b_1;
  c_1 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  failed: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(f_1);
  goto c_8;
  f_1 :
  Tpop();
  Epopd(2,0);
  Rpush(g_1);
  goto v_8;
  g_1 :
  b_1 :
  Tpop();
  Rpush(h_1);
  goto s_8;
  h_1 :
  Cpop();
  goto z_0;
  a_1 :
  Rpush(i_1);
  goto u_8;
  i_1 :
  z_0 :
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  BuildStr("test4");
  Rpush(j_1);
  goto r_8;
  j_1 :
  Tpop();
  Cpush(l_1);
  Tdupl();
  Cpush(n_1);
  Rpush(o_1);
  goto w_8;
  o_1 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  succeeded: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(p_1);
  goto c_8;
  p_1 :
  Tpop();
  Epopd(2,0);
  Cpop();
  goto m_1;
  n_1 :
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("  failed: ");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(q_1);
  goto c_8;
  q_1 :
  Tpop();
  Epopd(2,0);
  Rpush(r_1);
  goto v_8;
  r_1 :
  m_1 :
  Tpop();
  Rpush(s_1);
  goto s_8;
  s_1 :
  Cpop();
  goto k_1;
  l_1 :
  Rpush(t_1);
  goto u_8;
  t_1 :
  k_1 :
  Epopd(1,0);
  Rpush(u_1);
  goto h_8;
  u_1 :
  Rpush(v_1);
  goto l_8;
  v_1 :
  Epopd(0,0);
  Return();
  c_8 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  d_8 :
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
  h_8 :
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
  Rpush(w_1);
  goto c_8;
  w_1 :
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
  Rpush(x_1);
  goto c_8;
  x_1 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(y_1);
  goto i_8;
  y_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  i_8 :
  MatchFun("TNil",0);
  Return();
  l_8 :
  Epushd(0,0);
  Cpush(a_2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(b_2);
  goto i_8;
  b_2 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(c_2);
  goto m_8;
  c_2 :
  Cpop();
  goto z_1;
  a_2 :
  BuildInt(1);
  Rpush(d_2);
  goto m_8;
  d_2 :
  z_1 :
  Epopd(0,0);
  Return();
  m_8 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  n_8 :
  Epushd(0,0);
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
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
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Rpush(e_2);
  z_6 :
  Cpush(g_2);
  Rpush(h_2);
  goto o_8;
  h_2 :
  BuildVard(1,1);
  Cpop();
  goto f_2;
  g_2 :
  Cpush(j_2);
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Epushd(3,0);
  Tdupl();
  k_2 :
  MatchFun("Cons",2);
  Cpush(l_2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto m_2;
  l_2 :
  Arg(1);
  Tdrop();
  goto k_2;
  m_2 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(n_2);
  goto z_6;
  n_2 :
  Cpop();
  goto i_2;
  j_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_2);
  goto z_6;
  o_2 :
  AllBuild();
  i_2 :
  f_2 :
  Return();
  e_2 :
  Epopd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("a");
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("b");
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("c");
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("d");
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Epopd(0,0);
  Return();
  o_8 :
  MatchFun("Nil",0);
  Return();
  p_8 :
  Epushd(0,0);
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("b");
  Tpush();
  BuildStr("d");
  Tpush();
  BuildFun("Nil",0);
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
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Rpush(p_2);
  f_7 :
  Cpush(r_2);
  Rpush(s_2);
  goto o_8;
  s_2 :
  BuildVard(1,1);
  Cpop();
  goto q_2;
  r_2 :
  Cpush(u_2);
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Epushd(3,0);
  Tdupl();
  v_2 :
  MatchFun("Cons",2);
  Cpush(w_2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto x_2;
  w_2 :
  Arg(1);
  Tdrop();
  goto v_2;
  x_2 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(y_2);
  goto f_7;
  y_2 :
  Cpop();
  goto t_2;
  u_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_2);
  goto f_7;
  z_2 :
  AllBuild();
  t_2 :
  q_2 :
  Return();
  p_2 :
  Epopd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("a");
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("b");
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("d");
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  Epopd(0,0);
  Return();
  q_8 :
  Epushd(0,0);
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
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
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Rpush(a_3);
  l_7 :
  Cpush(c_3);
  Rpush(d_3);
  goto o_8;
  d_3 :
  Cpop();
  goto b_3;
  c_3 :
  Cpush(f_3);
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Epushd(3,0);
  Tdupl();
  g_3 :
  MatchFun("Cons",2);
  Cpush(h_3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto i_3;
  h_3 :
  Arg(1);
  Tdrop();
  goto g_3;
  i_3 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(j_3);
  goto l_7;
  j_3 :
  Cpop();
  goto e_3;
  f_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_3);
  goto l_7;
  k_3 :
  AllBuild();
  e_3 :
  b_3 :
  Return();
  a_3 :
  Epopd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("a");
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("b");
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Epopd(0,0);
  Return();
  r_8 :
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
  Rpush(l_3);
  goto c_8;
  l_3 :
  Tpop();
  Epopd(0,0);
  Return();
  s_8 :
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
  Rpush(m_3);
  goto t_8;
  m_3 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_3);
  goto i_8;
  n_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  t_8 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  u_8 :
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
  Rpush(o_3);
  goto t_8;
  o_3 :
  Epopd(1,1);
  OneNextSon();
  Rpush(p_3);
  goto i_8;
  p_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  v_8 :
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
  w_8 :
  Epushd(0,0);
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("b");
  Tpush();
  BuildStr("d");
  Tpush();
  BuildFun("Nil",0);
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
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Rpush(q_3);
  y_7 :
  Cpush(s_3);
  Rpush(t_3);
  goto o_8;
  t_3 :
  Cpop();
  goto r_3;
  s_3 :
  Cpush(o_5);
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Epushd(3,0);
  Tdupl();
  p_5 :
  MatchFun("Cons",2);
  Cpush(q_5);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto r_5;
  q_5 :
  Arg(1);
  Tdrop();
  goto p_5;
  r_5 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(s_5);
  goto y_7;
  s_5 :
  Cpop();
  goto d_5;
  o_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_5);
  goto y_7;
  t_5 :
  AllBuild();
  d_5 :
  r_3 :
  Return();
  q_3 :
  Epopd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchString("a");
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Epopd(0,0);
  Return();
  u_5 :
DOIT_END
