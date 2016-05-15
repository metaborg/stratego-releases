#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(f_5);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("list-zip-test");
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
  goto e_8;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto f_8;
  b_0 :
  Rpush(h_0);
  goto k_8;
  h_0 :
  Rpush(i_0);
  goto y_8;
  i_0 :
  Rpush(j_0);
  goto g_8;
  j_0 :
  Rpush(k_0);
  goto i_8;
  k_0 :
  Epopd(0,0);
  Return();
  e_8 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  f_8 :
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
  g_8 :
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
  Rpush(l_0);
  goto e_8;
  l_0 :
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
  Rpush(m_0);
  goto e_8;
  m_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(n_0);
  goto h_8;
  n_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  h_8 :
  MatchFun("TNil",0);
  Return();
  i_8 :
  Epushd(0,0);
  Cpush(p_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(q_0);
  goto h_8;
  q_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(r_0);
  goto j_8;
  r_0 :
  Cpop();
  goto o_0;
  p_0 :
  BuildInt(1);
  Rpush(s_0);
  goto j_8;
  s_0 :
  o_0 :
  Epopd(0,0);
  Return();
  j_8 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  k_8 :
  Epushd(0,2);
  Tdupl();
  BuildStr("tuple-zip-test");
  Rpush(t_0);
  goto v_8;
  t_0 :
  Tpop();
  Cpush(v_0);
  Tdupl();
  Cpush(x_0);
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
  BuildInt(4);
  Tpush();
  BuildInt(5);
  Tpush();
  BuildInt(6);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildInt(7);
  Tpush();
  BuildInt(8);
  Tpush();
  BuildInt(9);
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
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,0);
  Rpush(y_0);
  l_4 :
  Cpush(k_1);
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(l_1);
  m_4 :
  Cpush(n_1);
  Rpush(o_1);
  goto h_8;
  o_1 :
  Cpop();
  goto m_1;
  n_1 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  BuildVard(5,2);
  Epopd(5,2);
  OneNextSon();
  Rpush(p_1);
  goto m_4;
  p_1 :
  AllBuild();
  m_1 :
  Return();
  l_1 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(q_1);
  n_4 :
  Cpush(s_1);
  Rpush(t_1);
  goto h_8;
  t_1 :
  Cpop();
  goto r_1;
  s_1 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(6,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  BuildVard(6,2);
  Epopd(6,2);
  OneNextSon();
  Rpush(u_1);
  goto n_4;
  u_1 :
  AllBuild();
  r_1 :
  Return();
  q_1 :
  Epopd(5,0);
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
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(v_1);
  goto l_4;
  v_1 :
  OneNextSon();
  Rpush(w_1);
  goto h_8;
  w_1 :
  AllBuild();
  AllBuild();
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
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,2);
  Cpop();
  goto z_0;
  k_1 :
  Epushd(2,0);
  Rpush(x_1);
  o_4 :
  Cpush(z_1);
  Rpush(a_2);
  goto h_8;
  a_2 :
  Cpop();
  goto y_1;
  z_1 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  goto x_8;
  b_2 :
  OneNextSon();
  Rpush(c_2);
  goto o_4;
  c_2 :
  AllBuild();
  y_1 :
  Return();
  x_1 :
  Epopd(2,0);
  BuildFun("Nil",0);
  z_0 :
  Return();
  y_0 :
  Epopd(1,0);
  MatchVard(0,1);
  Cpop();
  goto w_0;
  x_0 :
  BuildStr("  failed");
  Rpush(d_2);
  goto v_8;
  d_2 :
  Rpush(e_2);
  goto w_8;
  e_2 :
  w_0 :
  BuildInt(1);
  Tpush();
  BuildInt(4);
  Tpush();
  BuildInt(7);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildInt(2);
  Tpush();
  BuildInt(5);
  Tpush();
  BuildInt(8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildInt(3);
  Tpush();
  BuildInt(6);
  Tpush();
  BuildInt(9);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  MatchVard(0,2);
  Cpush(g_2);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto f_2;
  g_2 :
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
  Rpush(h_2);
  goto e_8;
  h_2 :
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
  Rpush(i_2);
  goto e_8;
  i_2 :
  Tpop();
  Epopd(1,0);
  Rpush(j_2);
  goto w_8;
  j_2 :
  f_2 :
  Tpop();
  Rpush(k_2);
  goto o_8;
  k_2 :
  Cpop();
  goto u_0;
  v_0 :
  Rpush(n_2);
  goto u_8;
  n_2 :
  u_0 :
  Epopd(0,2);
  Return();
  o_8 :
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
  Rpush(o_2);
  goto p_8;
  o_2 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_2);
  goto h_8;
  p_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  p_8 :
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
  Rpush(q_2);
  goto p_8;
  q_2 :
  Epopd(1,1);
  OneNextSon();
  Rpush(r_2);
  goto h_8;
  r_2 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  v_8 :
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
  Rpush(s_2);
  goto e_8;
  s_2 :
  Tpop();
  Epopd(0,0);
  Return();
  w_8 :
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
  x_8 :
  MatchFun("Nil",0);
  Return();
  y_8 :
  Epushd(0,2);
  Tdupl();
  BuildStr("tuple-unzip-test");
  Rpush(t_2);
  goto v_8;
  t_2 :
  Tpop();
  Cpush(v_2);
  Tdupl();
  Cpush(x_2);
  BuildInt(1);
  Tpush();
  BuildInt(4);
  Tpush();
  BuildInt(7);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildInt(2);
  Tpush();
  BuildInt(5);
  Tpush();
  BuildInt(8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildInt(3);
  Tpush();
  BuildInt(6);
  Tpush();
  BuildInt(9);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epushd(1,0);
  Rpush(y_2);
  a_8 :
  Cpush(a_3);
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(b_3);
  b_8 :
  Cpush(d_3);
  Rpush(e_3);
  goto x_8;
  e_3 :
  Cpop();
  goto c_3;
  d_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(5,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  BuildVard(5,2);
  Epopd(5,2);
  OneNextSon();
  Rpush(f_3);
  goto b_8;
  f_3 :
  AllBuild();
  c_3 :
  Return();
  b_3 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(g_3);
  c_8 :
  Cpush(i_3);
  Rpush(j_3);
  goto x_8;
  j_3 :
  Cpop();
  goto h_3;
  i_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  BuildVard(6,2);
  Epopd(6,2);
  OneNextSon();
  Rpush(k_3);
  goto c_8;
  k_3 :
  AllBuild();
  h_3 :
  Return();
  g_3 :
  Epopd(5,0);
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
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(l_3);
  goto a_8;
  l_3 :
  OneNextSon();
  Rpush(m_3);
  goto h_8;
  m_3 :
  AllBuild();
  AllBuild();
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
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,2);
  Cpop();
  goto z_2;
  a_3 :
  Epushd(2,0);
  Rpush(n_3);
  d_8 :
  Cpush(q_3);
  Rpush(r_3);
  goto x_8;
  r_3 :
  Cpop();
  goto p_3;
  q_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(s_3);
  goto h_8;
  s_3 :
  OneNextSon();
  Rpush(q_4);
  goto d_8;
  q_4 :
  AllBuild();
  p_3 :
  Return();
  n_3 :
  Epopd(2,0);
  BuildFun("TNil",0);
  z_2 :
  Return();
  y_2 :
  Epopd(1,0);
  MatchVard(0,1);
  Cpop();
  goto w_2;
  x_2 :
  BuildStr("  failed");
  Rpush(w_4);
  goto v_8;
  w_4 :
  Rpush(x_4);
  goto w_8;
  x_4 :
  w_2 :
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
  BuildInt(4);
  Tpush();
  BuildInt(5);
  Tpush();
  BuildInt(6);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildInt(7);
  Tpush();
  BuildInt(8);
  Tpush();
  BuildInt(9);
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
  Tpush();
  BuildFun("TCons",2);
  MatchVard(0,2);
  Cpush(z_4);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto y_4;
  z_4 :
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
  Rpush(a_5);
  goto e_8;
  a_5 :
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
  Rpush(b_5);
  goto e_8;
  b_5 :
  Tpop();
  Epopd(1,0);
  Rpush(c_5);
  goto w_8;
  c_5 :
  y_4 :
  Tpop();
  Rpush(d_5);
  goto o_8;
  d_5 :
  Cpop();
  goto u_2;
  v_2 :
  Rpush(e_5);
  goto u_8;
  e_5 :
  u_2 :
  Epopd(0,2);
  Return();
  f_5 :
DOIT_END
