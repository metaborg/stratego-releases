#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(d_4);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("reals-test");
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
  goto w_1;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto x_1;
  b_0 :
  Rpush(h_0);
  goto c_2;
  h_0 :
  Rpush(i_0);
  goto i_2;
  i_0 :
  Rpush(j_0);
  goto k_2;
  j_0 :
  Rpush(k_0);
  goto m_2;
  k_0 :
  Rpush(l_0);
  goto y_1;
  l_0 :
  Rpush(m_0);
  goto a_2;
  m_0 :
  Epopd(0,0);
  Return();
  w_1 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  x_1 :
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
  y_1 :
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
  Rpush(n_0);
  goto w_1;
  n_0 :
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
  Rpush(o_0);
  goto w_1;
  o_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(p_0);
  goto z_1;
  p_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  z_1 :
  MatchFun("TNil",0);
  Return();
  a_2 :
  Epushd(0,0);
  Cpush(r_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(s_0);
  goto z_1;
  s_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(t_0);
  goto b_2;
  t_0 :
  Cpop();
  goto q_0;
  r_0 :
  BuildInt(1);
  Rpush(u_0);
  goto b_2;
  u_0 :
  q_0 :
  Epopd(0,0);
  Return();
  b_2 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  c_2 :
  Epushd(0,1);
  Tdupl();
  BuildStr("id-test");
  Rpush(v_0);
  goto h_2;
  v_0 :
  Tpop();
  Cpush(x_0);
  Tdupl();
  Cpush(z_0);
  BuildReal(10.800000);
  MatchVard(0,1);
  Cpop();
  goto y_0;
  z_0 :
  BuildStr("  failed");
  Rpush(a_1);
  goto h_2;
  a_1 :
  Rpush(n_1);
  goto g_2;
  n_1 :
  y_0 :
  BuildStr("  succeeded; result: ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(o_2);
  goto h_2;
  o_2 :
  Tpop();
  Rpush(p_2);
  goto d_2;
  p_2 :
  Cpop();
  goto w_0;
  x_0 :
  Rpush(q_2);
  goto f_2;
  q_2 :
  w_0 :
  Epopd(0,1);
  Return();
  d_2 :
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
  Rpush(r_2);
  goto e_2;
  r_2 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_2);
  goto z_1;
  s_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  e_2 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  f_2 :
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
  Rpush(t_2);
  goto e_2;
  t_2 :
  Epopd(1,1);
  OneNextSon();
  Rpush(u_2);
  goto z_1;
  u_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  g_2 :
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
  h_2 :
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
  Rpush(v_2);
  goto w_1;
  v_2 :
  Tpop();
  Epopd(0,0);
  Return();
  i_2 :
  Epushd(0,1);
  Tdupl();
  BuildStr("cos-test");
  Rpush(w_2);
  goto h_2;
  w_2 :
  Tpop();
  Cpush(y_2);
  Tdupl();
  Cpush(a_3);
  BuildReal(10.800000);
  Rpush(b_3);
  goto j_2;
  b_3 :
  MatchVard(0,1);
  Cpop();
  goto z_2;
  a_3 :
  BuildStr("  failed");
  Rpush(c_3);
  goto h_2;
  c_3 :
  Rpush(d_3);
  goto g_2;
  d_3 :
  z_2 :
  BuildStr("  succeeded; result: ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(e_3);
  goto h_2;
  e_3 :
  Tpop();
  Rpush(f_3);
  goto d_2;
  f_3 :
  Cpop();
  goto x_2;
  y_2 :
  Rpush(g_3);
  goto f_2;
  g_3 :
  x_2 :
  Epopd(0,1);
  Return();
  j_2 :
  Epushd(0,0);
  _ST_cos();
  Epopd(0,0);
  Return();
  k_2 :
  Epushd(0,1);
  Tdupl();
  BuildStr("sin-test");
  Rpush(h_3);
  goto h_2;
  h_3 :
  Tpop();
  Cpush(j_3);
  Tdupl();
  Cpush(l_3);
  BuildReal(1.600000);
  Rpush(m_3);
  goto l_2;
  m_3 :
  MatchVard(0,1);
  Cpop();
  goto k_3;
  l_3 :
  BuildStr("  failed");
  Rpush(n_3);
  goto h_2;
  n_3 :
  Rpush(o_3);
  goto g_2;
  o_3 :
  k_3 :
  BuildStr("  succeeded; result: ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(p_3);
  goto h_2;
  p_3 :
  Tpop();
  Rpush(q_3);
  goto d_2;
  q_3 :
  Cpop();
  goto i_3;
  j_3 :
  Rpush(r_3);
  goto f_2;
  r_3 :
  i_3 :
  Epopd(0,1);
  Return();
  l_2 :
  Epushd(0,0);
  _ST_sin();
  Epopd(0,0);
  Return();
  m_2 :
  Epushd(0,1);
  Tdupl();
  BuildStr("sqrt-test");
  Rpush(s_3);
  goto h_2;
  s_3 :
  Tpop();
  Cpush(u_3);
  Tdupl();
  Cpush(w_3);
  BuildReal(1.600000);
  Rpush(x_3);
  goto n_2;
  x_3 :
  MatchVard(0,1);
  Cpop();
  goto v_3;
  w_3 :
  BuildStr("  failed");
  Rpush(y_3);
  goto h_2;
  y_3 :
  Rpush(z_3);
  goto g_2;
  z_3 :
  v_3 :
  BuildStr("  succeeded; result: ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(a_4);
  goto h_2;
  a_4 :
  Tpop();
  Rpush(b_4);
  goto d_2;
  b_4 :
  Cpop();
  goto t_3;
  u_3 :
  Rpush(c_4);
  goto f_2;
  c_4 :
  t_3 :
  Epopd(0,1);
  Return();
  n_2 :
  Epushd(0,0);
  _ST_sqrt();
  Epopd(0,0);
  Return();
  d_4 :
DOIT_END
