#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(c_10);
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
  goto f_16;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto g_16;
  b_0 :
  Epushd(1,0);
  Tdupl();
  BuildStr("test1");
  Rpush(c_0);
  goto q_16;
  c_0 :
  Tpop();
  Cpush(e_0);
  Tdupl();
  Cpush(g_0);
  Rpush(h_0);
  goto l_16;
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
  goto f_16;
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
  goto f_16;
  j_0 :
  Tpop();
  Epopd(2,0);
  Rpush(k_0);
  goto u_16;
  k_0 :
  f_0 :
  Tpop();
  Rpush(l_0);
  goto r_16;
  l_0 :
  Cpop();
  goto d_0;
  e_0 :
  Rpush(m_0);
  goto t_16;
  m_0 :
  d_0 :
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  BuildStr("test2");
  Rpush(n_0);
  goto q_16;
  n_0 :
  Tpop();
  Cpush(p_0);
  Tdupl();
  Cpush(r_0);
  Rpush(s_0);
  goto n_16;
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
  goto f_16;
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
  goto f_16;
  u_0 :
  Tpop();
  Epopd(2,0);
  Rpush(v_0);
  goto u_16;
  v_0 :
  q_0 :
  Tpop();
  Rpush(w_0);
  goto r_16;
  w_0 :
  Cpop();
  goto o_0;
  p_0 :
  Rpush(x_0);
  goto t_16;
  x_0 :
  o_0 :
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  BuildStr("test3");
  Rpush(y_0);
  goto q_16;
  y_0 :
  Tpop();
  Cpush(a_1);
  Tdupl();
  Cpush(c_1);
  Rpush(d_1);
  goto o_16;
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
  goto f_16;
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
  goto f_16;
  f_1 :
  Tpop();
  Epopd(2,0);
  Rpush(g_1);
  goto u_16;
  g_1 :
  b_1 :
  Tpop();
  Rpush(h_1);
  goto r_16;
  h_1 :
  Cpop();
  goto z_0;
  a_1 :
  Rpush(i_1);
  goto t_16;
  i_1 :
  z_0 :
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  BuildStr("test4");
  Rpush(j_1);
  goto q_16;
  j_1 :
  Tpop();
  Cpush(l_1);
  Tdupl();
  Cpush(n_1);
  Rpush(o_1);
  goto v_16;
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
  goto f_16;
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
  goto f_16;
  q_1 :
  Tpop();
  Epopd(2,0);
  Rpush(r_1);
  goto u_16;
  r_1 :
  m_1 :
  Tpop();
  Rpush(s_1);
  goto r_16;
  s_1 :
  Cpop();
  goto k_1;
  l_1 :
  Rpush(t_1);
  goto t_16;
  t_1 :
  k_1 :
  Epopd(1,0);
  Rpush(u_1);
  goto w_16;
  u_1 :
  Rpush(v_1);
  goto h_16;
  v_1 :
  Rpush(w_1);
  goto j_16;
  w_1 :
  Epopd(0,0);
  Return();
  f_16 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  g_16 :
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
  h_16 :
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
  Rpush(x_1);
  goto f_16;
  x_1 :
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
  Rpush(y_1);
  goto f_16;
  y_1 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(z_1);
  goto i_16;
  z_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  i_16 :
  MatchFun("TNil",0);
  Return();
  j_16 :
  Epushd(0,0);
  Cpush(b_2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(c_2);
  goto i_16;
  c_2 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(d_2);
  goto k_16;
  d_2 :
  Cpop();
  goto a_2;
  b_2 :
  BuildInt(1);
  Rpush(e_2);
  goto k_16;
  e_2 :
  a_2 :
  Epopd(0,0);
  Return();
  k_16 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  l_16 :
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
  Rpush(f_2);
  h_7 :
  Cpush(h_2);
  Rpush(i_2);
  goto m_16;
  i_2 :
  BuildVard(1,1);
  Cpop();
  goto g_2;
  h_2 :
  Cpush(k_2);
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
  l_2 :
  MatchFun("Cons",2);
  Cpush(m_2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto n_2;
  m_2 :
  Arg(1);
  Tdrop();
  goto l_2;
  n_2 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(o_2);
  goto h_7;
  o_2 :
  Cpop();
  goto j_2;
  k_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_2);
  goto h_7;
  p_2 :
  AllBuild();
  j_2 :
  g_2 :
  Return();
  f_2 :
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
  m_16 :
  MatchFun("Nil",0);
  Return();
  n_16 :
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
  Rpush(q_2);
  t_7 :
  Cpush(s_2);
  Rpush(t_2);
  goto m_16;
  t_2 :
  BuildVard(1,1);
  Cpop();
  goto r_2;
  s_2 :
  Cpush(v_2);
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
  w_2 :
  MatchFun("Cons",2);
  Cpush(x_2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto y_2;
  x_2 :
  Arg(1);
  Tdrop();
  goto w_2;
  y_2 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(z_2);
  goto t_7;
  z_2 :
  Cpop();
  goto u_2;
  v_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto t_7;
  a_3 :
  AllBuild();
  u_2 :
  r_2 :
  Return();
  q_2 :
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
  o_16 :
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
  Rpush(b_3);
  z_7 :
  Cpush(d_3);
  Rpush(e_3);
  goto m_16;
  e_3 :
  Cpop();
  goto c_3;
  d_3 :
  Cpush(g_3);
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
  h_3 :
  MatchFun("Cons",2);
  Cpush(i_3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto j_3;
  i_3 :
  Arg(1);
  Tdrop();
  goto h_3;
  j_3 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(k_3);
  goto z_7;
  k_3 :
  Cpop();
  goto f_3;
  g_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_3);
  goto z_7;
  l_3 :
  AllBuild();
  f_3 :
  c_3 :
  Return();
  b_3 :
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
  q_16 :
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
  Rpush(m_3);
  goto f_16;
  m_3 :
  Tpop();
  Epopd(0,0);
  Return();
  r_16 :
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
  Rpush(n_3);
  goto s_16;
  n_3 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_3);
  goto i_16;
  o_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  s_16 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  t_16 :
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
  Rpush(p_3);
  goto s_16;
  p_3 :
  Epopd(1,1);
  OneNextSon();
  Rpush(q_3);
  goto i_16;
  q_3 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  u_16 :
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
  v_16 :
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
  Rpush(r_3);
  m_8 :
  Cpush(t_3);
  Rpush(u_3);
  goto m_16;
  u_3 :
  Cpop();
  goto s_3;
  t_3 :
  Cpush(w_3);
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
  x_3 :
  MatchFun("Cons",2);
  Cpush(y_3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto z_3;
  y_3 :
  Arg(1);
  Tdrop();
  goto x_3;
  z_3 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(a_4);
  goto m_8;
  a_4 :
  Cpop();
  goto v_3;
  w_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_4);
  goto m_8;
  b_4 :
  AllBuild();
  v_3 :
  s_3 :
  Return();
  r_3 :
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
  w_16 :
  Epushd(0,2);
  Tdupl();
  BuildStr("test5");
  Rpush(n_5);
  goto q_16;
  n_5 :
  Tpop();
  Cpush(x_5);
  Tdupl();
  Cpush(z_5);
  BuildFun("A",0);
  Tpush();
  BuildFun("A",0);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("H",2);
  Tpush();
  BuildFun("G",2);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("C",0);
  Tpush();
  BuildFun("H",2);
  Tpush();
  BuildFun("F",2);
  Epushd(1,0);
  Rpush(a_6);
  u_14 :
  Cpush(c_6);
  Cpush(e_6);
  Rpush(f_6);
  goto x_16;
  f_6 :
  Cpop();
  goto d_6;
  e_6 :
  Rpush(g_6);
  goto y_16;
  g_6 :
  d_6 :
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Cpush(i_6);
  Epushd(5,2);
  MatchFun("H",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,2);
  Tpop();
  BuildVard(5,1);
  Tpush();
  BuildFun("I",1);
  Epopd(5,2);
  Cpop();
  goto h_6;
  i_6 :
  h_6 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Cpush(k_6);
  Epushd(5,2);
  MatchFun("H",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,2);
  Tpop();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("H",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,2);
  Cpop();
  goto j_6;
  k_6 :
  BuildFun("Nil",0);
  j_6 :
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
  Cpop();
  goto b_6;
  c_6 :
  Epushd(2,6);
  Epushd(3,1);
  MatchVard(3,1);
  Tdupl();
  BuildVard(3,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epopd(3,1);
  Tdupl();
  BuildVard(2,1);
  Epushd(3,0);
  Rpush(l_6);
  v_14 :
  Cpush(n_6);
  Rpush(o_6);
  goto m_16;
  o_6 :
  Cpop();
  goto m_6;
  n_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(t_6);
  goto u_14;
  t_6 :
  OneNextSon();
  Rpush(u_6);
  goto v_14;
  u_6 :
  AllBuild();
  m_6 :
  Return();
  l_6 :
  Epopd(3,0);
  Rpush(y_6);
  goto a_17;
  y_6 :
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
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
  Epushd(3,1);
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  _ST_mkterm();
  MatchVard(3,1);
  BuildVard(3,1);
  Epopd(3,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Epushd(5,0);
  Cpush(a_7);
  Epushd(6,2);
  MatchFun("H",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildFun("I",1);
  Epopd(6,2);
  Cpop();
  goto z_6;
  a_7 :
  z_6 :
  Epopd(5,0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Cpush(i_7);
  Epushd(6,2);
  MatchFun("H",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("H",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,2);
  Cpop();
  goto b_7;
  i_7 :
  BuildFun("Nil",0);
  b_7 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,5);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(3,1);
  Epushd(4,1);
  BuildVard(2,2);
  Rpush(j_7);
  goto z_16;
  j_7 :
  MatchVard(4,1);
  BuildVard(2,6);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(k_7);
  w_14 :
  Cpush(m_7);
  Rpush(n_7);
  goto m_16;
  n_7 :
  BuildVard(4,1);
  Cpop();
  goto l_7;
  m_7 :
  Cpush(q_8);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(4,1);
  Epushd(6,0);
  Tdupl();
  r_8 :
  MatchFun("Cons",2);
  Cpush(s_8);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto t_8;
  s_8 :
  Arg(1);
  Tdrop();
  goto r_8;
  t_8 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(u_8);
  goto w_14;
  u_8 :
  Cpop();
  goto i_8;
  q_8 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto w_14;
  v_8 :
  AllBuild();
  i_8 :
  l_7 :
  Return();
  k_7 :
  Epopd(4,2);
  MatchVard(3,1);
  BuildVard(2,5);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,6);
  b_6 :
  Return();
  a_6 :
  Epopd(1,0);
  MatchVard(0,1);
  Cpop();
  goto y_5;
  z_5 :
  BuildStr("  failed");
  Rpush(w_8);
  goto q_16;
  w_8 :
  Rpush(x_8);
  goto u_16;
  x_8 :
  y_5 :
  BuildFun("A",0);
  Tpush();
  BuildFun("A",0);
  Tpush();
  BuildFun("I",1);
  Tpush();
  BuildFun("G",2);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("I",1);
  Tpush();
  BuildFun("F",2);
  Tpush();
  BuildFun("A",0);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("H",2);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("C",0);
  Tpush();
  BuildFun("H",2);
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
  MatchVard(0,2);
  Cpush(a_9);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto z_8;
  a_9 :
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
  Rpush(b_9);
  goto f_16;
  b_9 :
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
  Rpush(c_9);
  goto f_16;
  c_9 :
  Tpop();
  Epopd(1,0);
  Rpush(d_9);
  goto u_16;
  d_9 :
  z_8 :
  Tpop();
  Rpush(e_9);
  goto r_16;
  e_9 :
  Cpop();
  goto w_5;
  x_5 :
  Rpush(f_9);
  goto t_16;
  f_9 :
  w_5 :
  Epopd(0,2);
  Return();
  x_16 :
  Epushd(0,0);
  _ST_is_string();
  Epopd(0,0);
  Return();
  y_16 :
  Epushd(0,0);
  _ST_is_int();
  Epopd(0,0);
  Return();
  z_16 :
  Epushd(0,0);
  Rpush(g_9);
  j_15 :
  Cpush(i_9);
  Rpush(j_9);
  goto m_16;
  j_9 :
  BuildFun("Nil",0);
  Cpop();
  goto h_9;
  i_9 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(k_9);
  goto j_15;
  k_9 :
  OneNextSon();
  Rpush(l_9);
  goto i_16;
  l_9 :
  AllBuild();
  AllBuild();
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
  Rpush(m_9);
  q_15 :
  Cpush(o_9);
  Rpush(p_9);
  goto m_16;
  p_9 :
  BuildVard(1,1);
  Cpop();
  goto n_9;
  o_9 :
  Cpush(r_9);
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
  s_9 :
  MatchFun("Cons",2);
  Cpush(t_9);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto u_9;
  t_9 :
  Arg(1);
  Tdrop();
  goto s_9;
  u_9 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(v_9);
  goto q_15;
  v_9 :
  Cpop();
  goto q_9;
  r_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_9);
  goto q_15;
  w_9 :
  AllBuild();
  q_9 :
  n_9 :
  Return();
  m_9 :
  Epopd(1,2);
  h_9 :
  Return();
  g_9 :
  Epopd(0,0);
  Return();
  a_17 :
  Epushd(0,0);
  Rpush(x_9);
  y_15 :
  Cpush(z_9);
  Epushd(1,0);
  MatchFun("Nil",0);
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,0);
  Cpop();
  goto y_9;
  z_9 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(a_10);
  goto y_15;
  a_10 :
  OneNextSon();
  Rpush(b_10);
  goto i_16;
  b_10 :
  AllBuild();
  AllBuild();
  Epushd(1,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,4);
  y_9 :
  Return();
  x_9 :
  Epopd(0,0);
  Return();
  c_10 :
DOIT_END
