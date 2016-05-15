#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(y_5);
  goto main;
  main :
  Epushd(0,0);
  BuildStr("stratlib-test");
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
  goto q_50;
  a_0 :
  Tpop();
  Epopd(1,0);
  Rpush(b_0);
  goto r_50;
  b_0 :
  Rpush(c_0);
  goto w_50;
  c_0 :
  Rpush(d_0);
  goto f_51;
  d_0 :
  Rpush(e_0);
  goto g_51;
  e_0 :
  Rpush(f_0);
  goto s_50;
  f_0 :
  Rpush(g_0);
  goto u_50;
  g_0 :
  Epopd(0,0);
  Return();
  q_50 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  r_50 :
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
  s_50 :
  Epushd(0,0);
  MatchFun("TCons");
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
  Rpush(h_0);
  goto q_50;
  h_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons");
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
  Rpush(i_0);
  goto q_50;
  i_0 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  Rpush(j_0);
  goto t_50;
  j_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  t_50 :
  MatchFun("TNil");
  Return();
  u_50 :
  Epushd(0,0);
  Cpush(l_0);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  MatchInt(0);
  OneNextSon();
  Rpush(m_0);
  goto t_50;
  m_0 :
  AllBuild();
  AllBuild();
  BuildInt(0);
  Rpush(n_0);
  goto v_50;
  n_0 :
  Cpop();
  goto k_0;
  l_0 :
  BuildInt(1);
  Rpush(o_0);
  goto v_50;
  o_0 :
  k_0 :
  Epopd(0,0);
  Return();
  v_50 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  w_50 :
  Epushd(0,2);
  Tdupl();
  BuildStr("tvars-test1");
  Rpush(p_0);
  goto a_51;
  p_0 :
  Tpop();
  Cpush(r_0);
  Tdupl();
  Cpush(t_0);
  BuildInt(1);
  Tpush();
  BuildFun("Int",1);
  Rpush(u_0);
  goto c_51;
  u_0 :
  MatchVard(0,1);
  Cpop();
  goto s_0;
  t_0 :
  BuildStr("  failed");
  Rpush(v_0);
  goto a_51;
  v_0 :
  Rpush(w_0);
  goto b_51;
  w_0 :
  s_0 :
  BuildFun("Nil",0);
  MatchVard(0,2);
  Cpush(y_0);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto x_0;
  y_0 :
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
  Rpush(z_0);
  goto q_50;
  z_0 :
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
  Rpush(a_1);
  goto q_50;
  a_1 :
  Tpop();
  Epopd(1,0);
  Rpush(b_1);
  goto b_51;
  b_1 :
  x_0 :
  Tpop();
  Rpush(c_1);
  goto x_50;
  c_1 :
  Cpop();
  goto q_0;
  r_0 :
  Rpush(d_1);
  goto z_50;
  d_1 :
  q_0 :
  Epopd(0,2);
  Return();
  x_50 :
  Epushd(0,0);
  MatchFun("TCons");
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
  Rpush(e_1);
  goto y_50;
  e_1 :
  Epopd(1,1);
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_1);
  goto t_50;
  f_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  y_50 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  z_50 :
  Epushd(0,0);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
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
  Rpush(g_1);
  goto y_50;
  g_1 :
  Epopd(1,1);
  OneNextSon();
  Rpush(h_1);
  goto t_50;
  h_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  a_51 :
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
  Rpush(i_1);
  goto q_50;
  i_1 :
  Tpop();
  Epopd(0,0);
  Return();
  b_51 :
  Epushd(0,1);
  MatchVard(0,1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Epopd(0,1);
  Return();
  c_51 :
  Epushd(0,0);
  Rpush(j_1);
  k_42 :
  Cpush(l_1);
  Epushd(1,1);
  MatchFun("Var");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Cpop();
  goto k_1;
  l_1 :
  Cpush(n_1);
  Epushd(1,1);
  Tdupl();
  Rpush(o_1);
  goto e_51;
  o_1 :
  MatchVard(1,1);
  Tpop();
  Epushd(2,1);
  MatchFun("Scope");
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(3,3);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(p_1);
  goto k_42;
  p_1 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(1,1);
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
  MatchFun("TCons");
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(3,3);
  Rpush(q_1);
  l_43 :
  Cpush(s_1);
  Rpush(t_1);
  goto d_51;
  t_1 :
  Cpop();
  goto r_1;
  s_1 :
  Cpush(v_1);
  Epushd(4,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,2);
  Epushd(5,0);
  Tdupl();
  w_1 :
  MatchFun("Cons");
  Cpush(x_1);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto y_1;
  x_1 :
  Arg(1);
  Tdrop();
  goto w_1;
  y_1 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(z_1);
  goto l_43;
  z_1 :
  Cpop();
  goto u_1;
  v_1 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_2);
  goto l_43;
  a_2 :
  AllBuild();
  u_1 :
  r_1 :
  Return();
  q_1 :
  Epopd(3,3);
  AllBuild();
  Epushd(3,1);
  MatchVard(3,1);
  Tdupl();
  BuildVard(3,1);
  _ST_explode_term();
  MatchFun("TCons");
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  Epopd(3,1);
  BuildVard(2,1);
  Epushd(3,0);
  Rpush(b_2);
  f_44 :
  Cpush(d_2);
  Rpush(e_2);
  goto d_51;
  e_2 :
  BuildFun("Nil",0);
  Cpop();
  goto c_2;
  d_2 :
  Epushd(4,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Epushd(5,1);
  BuildVard(4,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(f_2);
  goto f_44;
  f_2 :
  MatchVard(6,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  Epopd(5,1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,4);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,4);
  Rpush(g_2);
  k_44 :
  Cpush(i_2);
  Rpush(j_2);
  goto d_51;
  j_2 :
  BuildVard(4,3);
  Cpop();
  goto h_2;
  i_2 :
  Cpush(l_2);
  Epushd(5,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(4,3);
  Epushd(6,0);
  Tdupl();
  m_2 :
  MatchFun("Cons");
  Cpush(n_2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto o_2;
  n_2 :
  Arg(1);
  Tdrop();
  goto m_2;
  o_2 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(p_2);
  goto k_44;
  p_2 :
  Cpop();
  goto k_2;
  l_2 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_2);
  goto k_44;
  q_2 :
  AllBuild();
  k_2 :
  h_2 :
  Return();
  g_2 :
  Epopd(4,4);
  c_2 :
  Return();
  b_2 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto m_1;
  n_1 :
  Epushd(1,1);
  Epushd(2,1);
  MatchVard(2,1);
  Tdupl();
  BuildVard(2,1);
  _ST_explode_term();
  MatchFun("TCons");
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  Epopd(2,1);
  BuildVard(1,1);
  Epushd(2,0);
  Rpush(r_2);
  e_45 :
  Cpush(t_2);
  Rpush(u_2);
  goto d_51;
  u_2 :
  BuildFun("Nil",0);
  Cpop();
  goto s_2;
  t_2 :
  Epushd(3,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(v_2);
  goto k_42;
  v_2 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(w_2);
  goto e_45;
  w_2 :
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
  MatchFun("TCons");
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(3,4);
  Rpush(x_2);
  j_45 :
  Cpush(z_2);
  Rpush(a_3);
  goto d_51;
  a_3 :
  BuildVard(3,3);
  Cpop();
  goto y_2;
  z_2 :
  Cpush(c_3);
  Epushd(4,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,3);
  Epushd(5,0);
  Tdupl();
  d_3 :
  MatchFun("Cons");
  Cpush(e_3);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto f_3;
  e_3 :
  Arg(1);
  Tdrop();
  goto d_3;
  f_3 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(g_3);
  goto j_45;
  g_3 :
  Cpop();
  goto b_3;
  c_3 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_3);
  goto j_45;
  h_3 :
  AllBuild();
  b_3 :
  y_2 :
  Return();
  x_2 :
  Epopd(3,4);
  s_2 :
  Return();
  r_2 :
  Epopd(2,0);
  Epopd(1,1);
  m_1 :
  k_1 :
  Return();
  j_1 :
  Epopd(0,0);
  Return();
  d_51 :
  MatchFun("Nil");
  Return();
  e_51 :
  Cpush(j_3);
  Epushd(0,2);
  MatchFun("Scope");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,2);
  Epopd(0,2);
  Cpop();
  goto i_3;
  j_3 :
  Epushd(0,3);
  MatchFun("LRule");
  Arg(0);
  MatchFun("Rule");
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,3);
  Rpush(k_3);
  goto c_51;
  k_3 :
  Epopd(0,3);
  i_3 :
  Return();
  f_51 :
  Epushd(0,2);
  Tdupl();
  BuildStr("tvars-test2");
  Rpush(l_3);
  goto a_51;
  l_3 :
  Tpop();
  Cpush(n_3);
  Tdupl();
  Cpush(p_3);
  BuildReal(1.100000);
  Tpush();
  BuildFun("Real",1);
  Rpush(q_3);
  goto c_51;
  q_3 :
  MatchVard(0,1);
  Cpop();
  goto o_3;
  p_3 :
  BuildStr("  failed");
  Rpush(r_3);
  goto a_51;
  r_3 :
  Rpush(s_3);
  goto b_51;
  s_3 :
  o_3 :
  BuildFun("Nil",0);
  MatchVard(0,2);
  Cpush(u_3);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto t_3;
  u_3 :
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
  Rpush(v_3);
  goto q_50;
  v_3 :
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
  Rpush(w_3);
  goto q_50;
  w_3 :
  Tpop();
  Epopd(1,0);
  Rpush(x_3);
  goto b_51;
  x_3 :
  t_3 :
  Tpop();
  Rpush(y_3);
  goto x_50;
  y_3 :
  Cpop();
  goto m_3;
  n_3 :
  Rpush(z_3);
  goto z_50;
  z_3 :
  m_3 :
  Epopd(0,2);
  Return();
  g_51 :
  Epushd(0,2);
  Tdupl();
  BuildStr("tsubstitute-test1");
  Rpush(a_4);
  goto a_51;
  a_4 :
  Tpop();
  Cpush(c_4);
  Tdupl();
  Cpush(e_4);
  BuildStr("x");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("a");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("Add");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("z");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("TNil",0);
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
  BuildStr("BinExp");
  Tpush();
  BuildStr("x");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("*");
  Tpush();
  BuildFun("Str",1);
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(f_4);
  goto h_51;
  f_4 :
  MatchVard(0,1);
  Cpop();
  goto d_4;
  e_4 :
  BuildStr("  failed");
  Rpush(g_4);
  goto a_51;
  g_4 :
  Rpush(h_4);
  goto b_51;
  h_4 :
  d_4 :
  BuildStr("BinExp");
  Tpush();
  BuildStr("a");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("*");
  Tpush();
  BuildFun("Str",1);
  Tpush();
  BuildStr("Add");
  Tpush();
  BuildStr("y");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("z");
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  MatchVard(0,2);
  Cpush(j_4);
  BuildVard(0,2);
  MatchVard(0,1);
  Cpop();
  goto i_4;
  j_4 :
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
  Rpush(k_4);
  goto q_50;
  k_4 :
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
  Rpush(l_4);
  goto q_50;
  l_4 :
  Tpop();
  Epopd(1,0);
  Rpush(m_4);
  goto b_51;
  m_4 :
  i_4 :
  Tpop();
  Rpush(n_4);
  goto x_50;
  n_4 :
  Cpop();
  goto b_4;
  c_4 :
  Rpush(o_4);
  goto z_50;
  o_4 :
  b_4 :
  Epopd(0,2);
  Return();
  h_51 :
  Epushd(0,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(p_4);
  n_47 :
  Epushd(1,0);
  Rpush(q_4);
  e_49 :
  Cpush(s_4);
  Epushd(2,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(2,2);
  MatchFun("Var");
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(2,1);
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
  Rpush(t_4);
  goto i_51;
  t_4 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto r_4;
  s_4 :
  Cpush(v_4);
  Epushd(2,3);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,2);
  MatchFun("Var");
  BuildVard(0,2);
  MatchVard(2,3);
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(w_4);
  goto i_51;
  w_4 :
  Epopd(2,3);
  Cpop();
  goto u_4;
  v_4 :
  Cpush(y_4);
  Epushd(2,8);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Rpush(z_4);
  goto e_51;
  z_4 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(a_5);
  g_50 :
  Cpush(c_5);
  Rpush(d_5);
  goto d_51;
  d_5 :
  Cpop();
  goto b_5;
  c_5 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Rpush(e_5);
  goto j_51;
  e_5 :
  OneNextSon();
  Rpush(f_5);
  goto g_50;
  f_5 :
  AllBuild();
  b_5 :
  Return();
  a_5 :
  Epopd(3,0);
  MatchVard(2,3);
  Epushd(3,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(4,0);
  Rpush(g_5);
  h_50 :
  Cpush(i_5);
  Epushd(5,0);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Nil");
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Nil");
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildFun("Nil",0);
  Epopd(5,0);
  Cpop();
  goto h_5;
  i_5 :
  Epushd(5,4);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,4);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(j_5);
  goto h_50;
  j_5 :
  OneNextSon();
  Rpush(k_5);
  goto t_50;
  k_5 :
  AllBuild();
  AllBuild();
  Epushd(5,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,2);
  h_5 :
  Return();
  g_5 :
  Epopd(4,0);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epushd(3,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(3,2);
  Epushd(4,0);
  Rpush(l_5);
  i_50 :
  Cpush(n_5);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_5);
  goto i_50;
  o_5 :
  AllBuild();
  Cpop();
  goto m_5;
  n_5 :
  Rpush(p_5);
  goto d_51;
  p_5 :
  BuildVard(3,1);
  m_5 :
  Return();
  l_5 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  MatchFun("Scope");
  TravInit();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
  Epopd(4,0);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,8);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,7);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,6);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  BuildVard(2,8);
  Epushd(3,0);
  MatchFun("Scope");
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(2,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_5);
  goto n_47;
  q_5 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto x_4;
  y_4 :
  Epushd(2,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(2,2);
  AllInit();
  r_5 :
  AllNextSon(&&s_5);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(t_5);
  goto e_49;
  t_5 :
  Epopd(3,1);
  goto r_5;
  s_5 :
  AllBuild();
  Epopd(2,2);
  x_4 :
  u_4 :
  r_4 :
  Return();
  q_4 :
  Epopd(1,0);
  Return();
  p_4 :
  Epopd(0,2);
  Return();
  i_51 :
  Epushd(0,0);
  Rpush(u_5);
  b_22 :
  Cpush(w_5);
  Epushd(1,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto v_5;
  w_5 :
  Epushd(1,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
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
  Rpush(x_5);
  goto b_22;
  x_5 :
  v_5 :
  Return();
  u_5 :
  Epopd(0,0);
  Return();
  j_51 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  y_5 :
DOIT_END
