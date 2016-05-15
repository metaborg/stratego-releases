#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(h_10);
  goto main;
  main :
  Epushd(0,0);
  Cpush(u_0);
  BuildFun("stdin",0);
  Rpush(v_0);
  goto y_40;
  v_0 :
  Rpush(w_0);
  goto e_41;
  w_0 :
  Rpush(x_0);
  goto g_41;
  x_0 :
  Rpush(y_0);
  goto h_41;
  y_0 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("stdout",0);
  MatchVard(2,1);
  Epushd(3,1);
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
  Epopd(1,1);
  Rpush(z_0);
  goto z_40;
  z_0 :
  Cpop();
  goto t_0;
  u_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(a_1);
  goto a_41;
  a_1 :
  t_0 :
  Epopd(0,0);
  Return();
  y_40 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  z_40 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  a_41 :
  Epushd(0,0);
  Tdupl();
  Rpush(b_1);
  goto b_41;
  b_1 :
  BuildInt(1);
  Rpush(c_1);
  goto d_41;
  c_1 :
  Tpop();
  Epopd(0,0);
  Return();
  b_41 :
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
  Rpush(d_1);
  goto c_41;
  d_1 :
  Tpop();
  Epopd(0,0);
  Return();
  c_41 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  d_41 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  e_41 :
  Epushd(0,0);
  Rpush(e_1);
  t_35 :
  AllInit();
  f_1 :
  AllNextSon(&&g_1);
  Rpush(h_1);
  goto t_35;
  h_1 :
  goto f_1;
  g_1 :
  AllBuild();
  Cpush(j_1);
  Epushd(1,0);
  Rpush(k_1);
  u_35 :
  Epushd(2,0);
  Cpush(m_1);
  Rpush(n_1);
  goto f_41;
  n_1 :
  Rpush(o_1);
  goto u_35;
  o_1 :
  Cpop();
  goto l_1;
  m_1 :
  l_1 :
  Epopd(2,0);
  Return();
  k_1 :
  Epopd(1,0);
  Cpop();
  goto i_1;
  j_1 :
  Epushd(1,0);
  Cpush(q_1);
  p_1 :
  Rpush(r_1);
  goto f_41;
  r_1 :
  Tduplinv();
  goto p_1;
  q_1 :
  Epopd(1,0);
  i_1 :
  Return();
  e_1 :
  Epopd(0,0);
  Return();
  f_41 :
  Epushd(0,15);
  MatchFunFC("Not",1,&&m_2);
  Arg(0);
  MatchFunFC("True",0,&&o_2);
  Tpop();
  Rpush(p_2);
  goto a_0;
  p_2 :
  goto n_2;
  o_2 :
  MatchFunFC("False",0,&&q_2);
  Tpop();
  Rpush(r_2);
  goto b_0;
  r_2 :
  goto n_2;
  q_2 :
  goto fail;
  n_2 :
  goto l_2;
  m_2 :
  MatchFunFC("And",2,&&s_2);
  Arg(0);
  MatchFunFC("True",0,&&u_2);
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&w_2);
  MatchVard(0,1);
  Tpop();
  Cpush(y_2);
  Rpush(z_2);
  goto c_0;
  z_2 :
  Cpop();
  goto x_2;
  y_2 :
  Rpush(a_3);
  goto d_0;
  a_3 :
  x_2 :
  goto v_2;
  w_2 :
  MatchFunFC("False",0,&&b_3);
  MatchVard(0,1);
  Tpop();
  Cpush(d_3);
  Rpush(e_3);
  goto c_0;
  e_3 :
  Cpop();
  goto c_3;
  d_3 :
  Rpush(f_3);
  goto f_0;
  f_3 :
  c_3 :
  goto v_2;
  b_3 :
  MatchVard(0,1);
  Tpop();
  Rpush(g_3);
  goto c_0;
  g_3 :
  v_2 :
  goto t_2;
  u_2 :
  MatchFunFC("False",0,&&h_3);
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&j_3);
  MatchVard(0,3);
  Tpop();
  Cpush(l_3);
  Rpush(m_3);
  goto d_0;
  m_3 :
  Cpop();
  goto k_3;
  l_3 :
  Rpush(n_3);
  goto e_0;
  n_3 :
  k_3 :
  goto i_3;
  j_3 :
  MatchFunFC("False",0,&&o_3);
  MatchVard(0,3);
  Tpop();
  Cpush(q_3);
  Rpush(r_3);
  goto e_0;
  r_3 :
  Cpop();
  goto p_3;
  q_3 :
  Rpush(s_3);
  goto f_0;
  s_3 :
  p_3 :
  goto i_3;
  o_3 :
  MatchVard(0,3);
  Tpop();
  Rpush(t_3);
  goto e_0;
  t_3 :
  i_3 :
  goto t_2;
  h_3 :
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&v_3);
  Tpop();
  Rpush(w_3);
  goto d_0;
  w_3 :
  goto u_3;
  v_3 :
  MatchFunFC("False",0,&&x_3);
  Tpop();
  Rpush(y_3);
  goto f_0;
  y_3 :
  goto u_3;
  x_3 :
  goto fail;
  u_3 :
  t_2 :
  goto l_2;
  s_2 :
  MatchFunFC("Or",2,&&z_3);
  Arg(0);
  MatchFunFC("True",0,&&b_4);
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&d_4);
  MatchVard(0,5);
  Tpop();
  Cpush(f_4);
  Rpush(g_4);
  goto g_0;
  g_4 :
  Cpop();
  goto e_4;
  f_4 :
  Rpush(h_4);
  goto h_0;
  h_4 :
  e_4 :
  goto c_4;
  d_4 :
  MatchFunFC("False",0,&&i_4);
  MatchVard(0,5);
  Tpop();
  Cpush(k_4);
  Rpush(l_4);
  goto g_0;
  l_4 :
  Cpop();
  goto j_4;
  k_4 :
  Rpush(m_4);
  goto j_0;
  m_4 :
  j_4 :
  goto c_4;
  i_4 :
  MatchVard(0,5);
  Tpop();
  Rpush(n_4);
  goto g_0;
  n_4 :
  c_4 :
  goto a_4;
  b_4 :
  MatchFunFC("False",0,&&o_4);
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&q_4);
  MatchVard(0,7);
  Tpop();
  Cpush(s_4);
  Rpush(t_4);
  goto h_0;
  t_4 :
  Cpop();
  goto r_4;
  s_4 :
  Rpush(u_4);
  goto i_0;
  u_4 :
  r_4 :
  goto p_4;
  q_4 :
  MatchFunFC("False",0,&&v_4);
  MatchVard(0,7);
  Tpop();
  Cpush(x_4);
  Rpush(y_4);
  goto i_0;
  y_4 :
  Cpop();
  goto w_4;
  x_4 :
  Rpush(z_4);
  goto j_0;
  z_4 :
  w_4 :
  goto p_4;
  v_4 :
  MatchVard(0,7);
  Tpop();
  Rpush(a_5);
  goto i_0;
  a_5 :
  p_4 :
  goto a_4;
  o_4 :
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&c_5);
  Tpop();
  Rpush(d_5);
  goto h_0;
  d_5 :
  goto b_5;
  c_5 :
  MatchFunFC("False",0,&&e_5);
  Tpop();
  Rpush(f_5);
  goto j_0;
  f_5 :
  goto b_5;
  e_5 :
  goto fail;
  b_5 :
  a_4 :
  goto l_2;
  z_3 :
  MatchFunFC("Impl",2,&&g_5);
  Arg(0);
  MatchFunFC("False",0,&&i_5);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&k_5);
  MatchVard(0,11);
  Tpop();
  Cpush(m_5);
  Rpush(n_5);
  goto l_0;
  n_5 :
  Cpop();
  goto l_5;
  m_5 :
  Rpush(o_5);
  goto m_0;
  o_5 :
  l_5 :
  goto j_5;
  k_5 :
  MatchFunFC("False",0,&&p_5);
  MatchVard(0,11);
  Tpop();
  Cpush(r_5);
  Rpush(s_5);
  goto m_0;
  s_5 :
  Cpop();
  goto q_5;
  r_5 :
  Rpush(t_5);
  goto n_0;
  t_5 :
  q_5 :
  goto j_5;
  p_5 :
  MatchVard(0,11);
  Tpop();
  Rpush(u_5);
  goto m_0;
  u_5 :
  j_5 :
  goto h_5;
  i_5 :
  MatchFunFC("True",0,&&v_5);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&x_5);
  MatchVard(0,9);
  Tpop();
  Cpush(z_5);
  Rpush(a_6);
  goto k_0;
  a_6 :
  Cpop();
  goto y_5;
  z_5 :
  Rpush(b_6);
  goto l_0;
  b_6 :
  y_5 :
  goto w_5;
  x_5 :
  MatchFunFC("False",0,&&c_6);
  MatchVard(0,9);
  Tpop();
  Cpush(e_6);
  Rpush(f_6);
  goto k_0;
  f_6 :
  Cpop();
  goto d_6;
  e_6 :
  Rpush(g_6);
  goto o_0;
  g_6 :
  d_6 :
  goto w_5;
  c_6 :
  MatchVard(0,9);
  Tpop();
  Rpush(h_6);
  goto k_0;
  h_6 :
  w_5 :
  goto h_5;
  v_5 :
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFun("True",0);
  Tpop();
  Rpush(i_6);
  goto l_0;
  i_6 :
  h_5 :
  goto l_2;
  g_5 :
  MatchFunFC("Eq",2,&&j_6);
  Arg(0);
  MatchFunFC("False",0,&&l_6);
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",0,&&n_6);
  MatchVard(0,12);
  Tpop();
  Cpush(p_6);
  Rpush(q_6);
  goto p_0;
  q_6 :
  Cpop();
  goto o_6;
  p_6 :
  Rpush(r_6);
  goto q_0;
  r_6 :
  o_6 :
  goto m_6;
  n_6 :
  MatchFunFC("True",0,&&s_6);
  MatchVard(0,12);
  Tpop();
  Cpush(u_6);
  Rpush(v_6);
  goto p_0;
  v_6 :
  Cpop();
  goto t_6;
  u_6 :
  Rpush(w_6);
  goto s_0;
  w_6 :
  t_6 :
  goto m_6;
  s_6 :
  MatchVard(0,12);
  Tpop();
  Rpush(x_6);
  goto p_0;
  x_6 :
  m_6 :
  goto k_6;
  l_6 :
  MatchFunFC("True",0,&&y_6);
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",0,&&a_7);
  MatchVard(0,14);
  Tpop();
  Cpush(c_7);
  Rpush(d_7);
  goto q_0;
  d_7 :
  Cpop();
  goto b_7;
  c_7 :
  Rpush(e_7);
  goto r_0;
  e_7 :
  b_7 :
  goto z_6;
  a_7 :
  MatchFunFC("True",0,&&f_7);
  MatchVard(0,14);
  Tpop();
  Cpush(h_7);
  Rpush(i_7);
  goto r_0;
  i_7 :
  Cpop();
  goto g_7;
  h_7 :
  Rpush(j_7);
  goto s_0;
  j_7 :
  g_7 :
  goto z_6;
  f_7 :
  MatchVard(0,14);
  Tpop();
  Rpush(k_7);
  goto r_0;
  k_7 :
  z_6 :
  goto k_6;
  y_6 :
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",0,&&m_7);
  Tpop();
  Rpush(n_7);
  goto q_0;
  n_7 :
  goto l_7;
  m_7 :
  MatchFunFC("True",0,&&o_7);
  Tpop();
  Rpush(p_7);
  goto s_0;
  p_7 :
  goto l_7;
  o_7 :
  goto fail;
  l_7 :
  k_6 :
  goto l_2;
  j_6 :
  goto fail;
  l_2 :
  goto k_2;
  s_0 :
  BuildVard(0,15);
  Return();
  k_2 :
  goto j_2;
  r_0 :
  BuildVard(0,14);
  Return();
  j_2 :
  goto i_2;
  q_0 :
  BuildVard(0,13);
  Tpush();
  BuildFun("Not",1);
  Return();
  i_2 :
  goto h_2;
  p_0 :
  BuildVard(0,12);
  Tpush();
  BuildFun("Not",1);
  Return();
  h_2 :
  goto g_2;
  o_0 :
  BuildFun("False",0);
  Return();
  g_2 :
  goto f_2;
  n_0 :
  BuildFun("True",0);
  Return();
  f_2 :
  goto e_2;
  m_0 :
  BuildFun("True",0);
  Return();
  e_2 :
  goto d_2;
  l_0 :
  BuildFun("True",0);
  Return();
  d_2 :
  goto c_2;
  k_0 :
  BuildVard(0,9);
  Return();
  c_2 :
  goto b_2;
  j_0 :
  BuildVard(0,8);
  Return();
  b_2 :
  goto a_2;
  i_0 :
  BuildVard(0,7);
  Return();
  a_2 :
  goto z_1;
  h_0 :
  BuildFun("True",0);
  Return();
  z_1 :
  goto y_1;
  g_0 :
  BuildFun("True",0);
  Return();
  y_1 :
  goto x_1;
  f_0 :
  BuildFun("False",0);
  Return();
  x_1 :
  goto w_1;
  e_0 :
  BuildFun("False",0);
  Return();
  w_1 :
  goto v_1;
  d_0 :
  BuildVard(0,2);
  Return();
  v_1 :
  goto u_1;
  c_0 :
  BuildVard(0,1);
  Return();
  u_1 :
  goto t_1;
  b_0 :
  BuildFun("True",0);
  Return();
  t_1 :
  goto s_1;
  a_0 :
  BuildFun("False",0);
  Return();
  s_1 :
  Epopd(0,15);
  Return();
  g_41 :
  Epushd(0,0);
  Rpush(q_7);
  x_36 :
  Cpush(s_7);
  Epushd(1,0);
  Cpush(u_7);
  Cpush(w_7);
  Epushd(2,2);
  MatchFun("Impl",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Or",2);
  Epopd(2,2);
  Cpop();
  goto v_7;
  w_7 :
  Epushd(2,2);
  MatchFun("Eq",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Impl",2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Impl",2);
  Tpush();
  BuildFun("And",2);
  Epopd(2,2);
  v_7 :
  Cpop();
  goto t_7;
  u_7 :
  t_7 :
  Epopd(1,0);
  Cpop();
  goto r_7;
  s_7 :
  Epushd(1,0);
  Cpush(y_7);
  Cpush(a_8);
  Epushd(2,2);
  MatchFun("Impl",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Or",2);
  Epopd(2,2);
  Cpop();
  goto z_7;
  a_8 :
  Epushd(2,2);
  MatchFun("Eq",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Impl",2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Impl",2);
  Tpush();
  BuildFun("And",2);
  Epopd(2,2);
  z_7 :
  Cpop();
  goto x_7;
  y_7 :
  x_7 :
  Epopd(1,0);
  r_7 :
  AllInit();
  b_8 :
  AllNextSon(&&c_8);
  Rpush(d_8);
  goto x_36;
  d_8 :
  goto b_8;
  c_8 :
  AllBuild();
  Return();
  q_7 :
  Epopd(0,0);
  Return();
  h_41 :
  Epushd(0,0);
  Cpush(f_8);
  Epushd(1,0);
  Rpush(g_8);
  o_38 :
  Cpush(i_8);
  Epushd(2,0);
  Cpush(k_8);
  Epushd(3,0);
  Rpush(l_8);
  m_39 :
  Cpush(n_8);
  IsAppl();
  OneInit();
  o_8 :
  OneNextSon();
  Cpush(o_8);
  Rpush(q_8);
  goto m_39;
  q_8 :
  Cpop();
  OneBuild();
  Cpop();
  goto m_8;
  n_8 :
  Cpush(s_8);
  Epushd(4,3);
  MatchFun("And",2);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(4,3);
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(4,3);
  Cpop();
  goto r_8;
  s_8 :
  Cpush(u_8);
  Epushd(4,3);
  MatchFun("And",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,3);
  Tpop();
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(4,3);
  Cpop();
  goto t_8;
  u_8 :
  Cpush(w_8);
  Epushd(4,1);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Not",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Epopd(4,1);
  Cpop();
  goto v_8;
  w_8 :
  Cpush(y_8);
  Epushd(4,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("And",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("Or",2);
  Epopd(4,2);
  Cpop();
  goto x_8;
  y_8 :
  Epushd(4,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("And",2);
  Epopd(4,2);
  x_8 :
  v_8 :
  t_8 :
  r_8 :
  m_8 :
  Return();
  l_8 :
  Epopd(3,0);
  Rpush(z_8);
  goto o_38;
  z_8 :
  Cpop();
  goto j_8;
  k_8 :
  j_8 :
  Epopd(2,0);
  Cpop();
  goto h_8;
  i_8 :
  Epushd(2,0);
  Cpush(b_9);
  Epushd(3,0);
  Rpush(c_9);
  y_39 :
  Cpush(e_9);
  IsAppl();
  OneInit();
  f_9 :
  OneNextSon();
  Cpush(f_9);
  Rpush(h_9);
  goto y_39;
  h_9 :
  Cpop();
  OneBuild();
  Cpop();
  goto d_9;
  e_9 :
  Cpush(j_9);
  Epushd(4,3);
  MatchFun("And",2);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(4,3);
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(4,3);
  Cpop();
  goto i_9;
  j_9 :
  Cpush(l_9);
  Epushd(4,3);
  MatchFun("And",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,3);
  Tpop();
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(4,3);
  Cpop();
  goto k_9;
  l_9 :
  Cpush(n_9);
  Epushd(4,1);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Not",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Epopd(4,1);
  Cpop();
  goto m_9;
  n_9 :
  Cpush(p_9);
  Epushd(4,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("And",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("Or",2);
  Epopd(4,2);
  Cpop();
  goto o_9;
  p_9 :
  Epushd(4,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("And",2);
  Epopd(4,2);
  o_9 :
  m_9 :
  k_9 :
  i_9 :
  d_9 :
  Return();
  c_9 :
  Epopd(3,0);
  Rpush(q_9);
  goto o_38;
  q_9 :
  Cpop();
  goto a_9;
  b_9 :
  a_9 :
  Epopd(2,0);
  h_8 :
  Return();
  g_8 :
  Epopd(1,0);
  Cpop();
  goto e_8;
  f_8 :
  Epushd(1,0);
  Cpush(s_9);
  r_9 :
  Epushd(2,0);
  Rpush(t_9);
  x_40 :
  Cpush(v_9);
  IsAppl();
  OneInit();
  w_9 :
  OneNextSon();
  Cpush(w_9);
  Rpush(y_9);
  goto x_40;
  y_9 :
  Cpop();
  OneBuild();
  Cpop();
  goto u_9;
  v_9 :
  Cpush(a_10);
  Epushd(3,3);
  MatchFun("And",2);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(3,3);
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(3,3);
  Cpop();
  goto z_9;
  a_10 :
  Cpush(c_10);
  Epushd(3,3);
  MatchFun("And",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,3);
  Tpop();
  Tpop();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(3,3);
  Cpop();
  goto b_10;
  c_10 :
  Cpush(e_10);
  Epushd(3,1);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Not",1);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Epopd(3,1);
  Cpop();
  goto d_10;
  e_10 :
  Cpush(g_10);
  Epushd(3,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("And",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("Or",2);
  Epopd(3,2);
  Cpop();
  goto f_10;
  g_10 :
  Epushd(3,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("And",2);
  Epopd(3,2);
  f_10 :
  d_10 :
  b_10 :
  z_9 :
  u_9 :
  Return();
  t_9 :
  Epopd(2,0);
  Tduplinv();
  goto r_9;
  s_9 :
  Epopd(1,0);
  e_8 :
  Epopd(0,0);
  Return();
  h_10 :
DOIT_END
