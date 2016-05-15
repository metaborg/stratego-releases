#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(w_10);
  goto main;
  main :
  Epushd(0,0);
  Cpush(s_1);
  BuildFun("stdin",0);
  Rpush(t_1);
  goto w_3;
  t_1 :
  Rpush(u_1);
  goto c_4;
  u_1 :
  Rpush(v_1);
  goto e_4;
  v_1 :
  Rpush(w_1);
  goto f_4;
  w_1 :
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
  Rpush(x_1);
  goto x_3;
  x_1 :
  Cpop();
  goto r_1;
  s_1 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(y_1);
  goto y_3;
  y_1 :
  r_1 :
  Epopd(0,0);
  Return();
  w_3 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  x_3 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  y_3 :
  Epushd(0,0);
  Tdupl();
  Rpush(z_1);
  goto z_3;
  z_1 :
  BuildInt(1);
  Rpush(a_2);
  goto b_4;
  a_2 :
  Tpop();
  Epopd(0,0);
  Return();
  z_3 :
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
  Rpush(i_2);
  goto a_4;
  i_2 :
  Tpop();
  Epopd(0,0);
  Return();
  a_4 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  b_4 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  c_4 :
  Epushd(0,0);
  Rpush(j_2);
  i_0 :
  AllInit();
  k_2 :
  AllNextSon(&&l_2);
  Rpush(m_2);
  goto i_0;
  m_2 :
  goto k_2;
  l_2 :
  AllBuild();
  Cpush(q_2);
  Epushd(1,0);
  Rpush(r_2);
  j_0 :
  Epushd(2,0);
  Cpush(t_2);
  Rpush(u_2);
  goto d_4;
  u_2 :
  Rpush(v_2);
  goto j_0;
  v_2 :
  Cpop();
  goto s_2;
  t_2 :
  s_2 :
  Epopd(2,0);
  Return();
  r_2 :
  Epopd(1,0);
  Cpop();
  goto n_2;
  q_2 :
  Epushd(1,0);
  Cpush(x_2);
  w_2 :
  Rpush(y_2);
  goto d_4;
  y_2 :
  Tduplinv();
  goto w_2;
  x_2 :
  Epopd(1,0);
  n_2 :
  Return();
  j_2 :
  Epopd(0,0);
  Return();
  d_4 :
  Epushd(0,15);
  MatchFunFC("Not",1,&&p_4);
  Arg(0);
  MatchFunFC("True",0,&&r_4);
  Tpop();
  Rpush(s_4);
  goto g_0;
  s_4 :
  goto q_4;
  r_4 :
  MatchFunFC("False",0,&&t_4);
  Tpop();
  Rpush(u_4);
  goto h_0;
  u_4 :
  goto q_4;
  t_4 :
  goto fail;
  q_4 :
  goto o_4;
  p_4 :
  MatchFunFC("And",2,&&v_4);
  Arg(0);
  MatchFunFC("True",0,&&x_4);
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&z_4);
  MatchVard(0,1);
  Tpop();
  Cpush(b_5);
  Rpush(c_5);
  goto x_0;
  c_5 :
  Cpop();
  goto a_5;
  b_5 :
  Rpush(d_5);
  goto y_0;
  d_5 :
  a_5 :
  goto y_4;
  z_4 :
  MatchFunFC("False",0,&&e_5);
  MatchVard(0,1);
  Tpop();
  Cpush(g_5);
  Rpush(h_5);
  goto x_0;
  h_5 :
  Cpop();
  goto f_5;
  g_5 :
  Rpush(i_5);
  goto a_1;
  i_5 :
  f_5 :
  goto y_4;
  e_5 :
  MatchVard(0,1);
  Tpop();
  Rpush(j_5);
  goto x_0;
  j_5 :
  y_4 :
  goto w_4;
  x_4 :
  MatchFunFC("False",0,&&k_5);
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&m_5);
  MatchVard(0,3);
  Tpop();
  Cpush(o_5);
  Rpush(p_5);
  goto y_0;
  p_5 :
  Cpop();
  goto n_5;
  o_5 :
  Rpush(q_5);
  goto z_0;
  q_5 :
  n_5 :
  goto l_5;
  m_5 :
  MatchFunFC("False",0,&&r_5);
  MatchVard(0,3);
  Tpop();
  Cpush(t_5);
  Rpush(u_5);
  goto z_0;
  u_5 :
  Cpop();
  goto s_5;
  t_5 :
  Rpush(v_5);
  goto a_1;
  v_5 :
  s_5 :
  goto l_5;
  r_5 :
  MatchVard(0,3);
  Tpop();
  Rpush(w_5);
  goto z_0;
  w_5 :
  l_5 :
  goto w_4;
  k_5 :
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&y_5);
  Tpop();
  Rpush(z_5);
  goto y_0;
  z_5 :
  goto x_5;
  y_5 :
  MatchFunFC("False",0,&&a_6);
  Tpop();
  Rpush(b_6);
  goto a_1;
  b_6 :
  goto x_5;
  a_6 :
  goto fail;
  x_5 :
  w_4 :
  goto o_4;
  v_4 :
  MatchFunFC("Or",2,&&c_6);
  Arg(0);
  MatchFunFC("True",0,&&e_6);
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&g_6);
  MatchVard(0,5);
  Tpop();
  Cpush(i_6);
  Rpush(j_6);
  goto b_1;
  j_6 :
  Cpop();
  goto h_6;
  i_6 :
  Rpush(k_6);
  goto c_1;
  k_6 :
  h_6 :
  goto f_6;
  g_6 :
  MatchFunFC("False",0,&&l_6);
  MatchVard(0,5);
  Tpop();
  Cpush(n_6);
  Rpush(o_6);
  goto b_1;
  o_6 :
  Cpop();
  goto m_6;
  n_6 :
  Rpush(p_6);
  goto e_1;
  p_6 :
  m_6 :
  goto f_6;
  l_6 :
  MatchVard(0,5);
  Tpop();
  Rpush(q_6);
  goto b_1;
  q_6 :
  f_6 :
  goto d_6;
  e_6 :
  MatchFunFC("False",0,&&r_6);
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&t_6);
  MatchVard(0,7);
  Tpop();
  Cpush(v_6);
  Rpush(w_6);
  goto c_1;
  w_6 :
  Cpop();
  goto u_6;
  v_6 :
  Rpush(x_6);
  goto d_1;
  x_6 :
  u_6 :
  goto s_6;
  t_6 :
  MatchFunFC("False",0,&&y_6);
  MatchVard(0,7);
  Tpop();
  Cpush(a_7);
  Rpush(b_7);
  goto d_1;
  b_7 :
  Cpop();
  goto z_6;
  a_7 :
  Rpush(c_7);
  goto e_1;
  c_7 :
  z_6 :
  goto s_6;
  y_6 :
  MatchVard(0,7);
  Tpop();
  Rpush(d_7);
  goto d_1;
  d_7 :
  s_6 :
  goto d_6;
  r_6 :
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&f_7);
  Tpop();
  Rpush(g_7);
  goto c_1;
  g_7 :
  goto e_7;
  f_7 :
  MatchFunFC("False",0,&&h_7);
  Tpop();
  Rpush(i_7);
  goto e_1;
  i_7 :
  goto e_7;
  h_7 :
  goto fail;
  e_7 :
  d_6 :
  goto o_4;
  c_6 :
  MatchFunFC("Impl",2,&&j_7);
  Arg(0);
  MatchFunFC("False",0,&&l_7);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&n_7);
  MatchVard(0,11);
  Tpop();
  Cpush(p_7);
  Rpush(q_7);
  goto g_1;
  q_7 :
  Cpop();
  goto o_7;
  p_7 :
  Rpush(r_7);
  goto h_1;
  r_7 :
  o_7 :
  goto m_7;
  n_7 :
  MatchFunFC("False",0,&&s_7);
  MatchVard(0,11);
  Tpop();
  Cpush(u_7);
  Rpush(v_7);
  goto h_1;
  v_7 :
  Cpop();
  goto t_7;
  u_7 :
  Rpush(w_7);
  goto i_1;
  w_7 :
  t_7 :
  goto m_7;
  s_7 :
  MatchVard(0,11);
  Tpop();
  Rpush(x_7);
  goto h_1;
  x_7 :
  m_7 :
  goto k_7;
  l_7 :
  MatchFunFC("True",0,&&y_7);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFunFC("True",0,&&a_8);
  MatchVard(0,9);
  Tpop();
  Cpush(c_8);
  Rpush(d_8);
  goto f_1;
  d_8 :
  Cpop();
  goto b_8;
  c_8 :
  Rpush(e_8);
  goto g_1;
  e_8 :
  b_8 :
  goto z_7;
  a_8 :
  MatchFunFC("False",0,&&f_8);
  MatchVard(0,9);
  Tpop();
  Cpush(h_8);
  Rpush(i_8);
  goto f_1;
  i_8 :
  Cpop();
  goto g_8;
  h_8 :
  Rpush(j_8);
  goto j_1;
  j_8 :
  g_8 :
  goto z_7;
  f_8 :
  MatchVard(0,9);
  Tpop();
  Rpush(k_8);
  goto f_1;
  k_8 :
  z_7 :
  goto k_7;
  y_7 :
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFun("True",0);
  Tpop();
  Rpush(l_8);
  goto g_1;
  l_8 :
  k_7 :
  goto o_4;
  j_7 :
  MatchFunFC("Eq",2,&&m_8);
  Arg(0);
  MatchFunFC("False",0,&&o_8);
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",0,&&q_8);
  MatchVard(0,12);
  Tpop();
  Cpush(s_8);
  Rpush(t_8);
  goto k_1;
  t_8 :
  Cpop();
  goto r_8;
  s_8 :
  Rpush(u_8);
  goto l_1;
  u_8 :
  r_8 :
  goto p_8;
  q_8 :
  MatchFunFC("True",0,&&v_8);
  MatchVard(0,12);
  Tpop();
  Cpush(x_8);
  Rpush(y_8);
  goto k_1;
  y_8 :
  Cpop();
  goto w_8;
  x_8 :
  Rpush(z_8);
  goto q_1;
  z_8 :
  w_8 :
  goto p_8;
  v_8 :
  MatchVard(0,12);
  Tpop();
  Rpush(a_9);
  goto k_1;
  a_9 :
  p_8 :
  goto n_8;
  o_8 :
  MatchFunFC("True",0,&&b_9);
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",0,&&d_9);
  MatchVard(0,14);
  Tpop();
  Cpush(f_9);
  Rpush(g_9);
  goto l_1;
  g_9 :
  Cpop();
  goto e_9;
  f_9 :
  Rpush(h_9);
  goto p_1;
  h_9 :
  e_9 :
  goto c_9;
  d_9 :
  MatchFunFC("True",0,&&i_9);
  MatchVard(0,14);
  Tpop();
  Cpush(k_9);
  Rpush(l_9);
  goto p_1;
  l_9 :
  Cpop();
  goto j_9;
  k_9 :
  Rpush(m_9);
  goto q_1;
  m_9 :
  j_9 :
  goto c_9;
  i_9 :
  MatchVard(0,14);
  Tpop();
  Rpush(n_9);
  goto p_1;
  n_9 :
  c_9 :
  goto n_8;
  b_9 :
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",0,&&p_9);
  Tpop();
  Rpush(q_9);
  goto l_1;
  q_9 :
  goto o_9;
  p_9 :
  MatchFunFC("True",0,&&r_9);
  Tpop();
  Rpush(s_9);
  goto q_1;
  s_9 :
  goto o_9;
  r_9 :
  goto fail;
  o_9 :
  n_8 :
  goto o_4;
  m_8 :
  goto fail;
  o_4 :
  goto n_4;
  q_1 :
  BuildVard(0,15);
  Return();
  n_4 :
  goto m_4;
  p_1 :
  BuildVard(0,14);
  Return();
  m_4 :
  goto l_4;
  l_1 :
  BuildVard(0,13);
  Tpush();
  BuildFun("Not",1);
  Return();
  l_4 :
  goto k_4;
  k_1 :
  BuildVard(0,12);
  Tpush();
  BuildFun("Not",1);
  Return();
  k_4 :
  goto j_4;
  j_1 :
  BuildFun("False",0);
  Return();
  j_4 :
  goto i_4;
  i_1 :
  BuildFun("True",0);
  Return();
  i_4 :
  goto h_4;
  h_1 :
  BuildFun("True",0);
  Return();
  h_4 :
  goto g_4;
  g_1 :
  BuildFun("True",0);
  Return();
  g_4 :
  goto j_3;
  f_1 :
  BuildVard(0,9);
  Return();
  j_3 :
  goto i_3;
  e_1 :
  BuildVard(0,8);
  Return();
  i_3 :
  goto h_3;
  d_1 :
  BuildVard(0,7);
  Return();
  h_3 :
  goto g_3;
  c_1 :
  BuildFun("True",0);
  Return();
  g_3 :
  goto f_3;
  b_1 :
  BuildFun("True",0);
  Return();
  f_3 :
  goto e_3;
  a_1 :
  BuildFun("False",0);
  Return();
  e_3 :
  goto d_3;
  z_0 :
  BuildFun("False",0);
  Return();
  d_3 :
  goto c_3;
  y_0 :
  BuildVard(0,2);
  Return();
  c_3 :
  goto b_3;
  x_0 :
  BuildVard(0,1);
  Return();
  b_3 :
  goto a_3;
  h_0 :
  BuildFun("True",0);
  Return();
  a_3 :
  goto z_2;
  g_0 :
  BuildFun("False",0);
  Return();
  z_2 :
  Epopd(0,15);
  Return();
  e_4 :
  Epushd(0,0);
  Rpush(t_9);
  b_2 :
  Cpush(v_9);
  Epushd(1,0);
  Cpush(x_9);
  Cpush(z_9);
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
  goto y_9;
  z_9 :
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
  y_9 :
  Cpop();
  goto w_9;
  x_9 :
  w_9 :
  Epopd(1,0);
  Cpop();
  goto u_9;
  v_9 :
  Epushd(1,0);
  Cpush(b_10);
  Cpush(d_10);
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
  goto c_10;
  d_10 :
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
  c_10 :
  Cpop();
  goto a_10;
  b_10 :
  a_10 :
  Epopd(1,0);
  u_9 :
  AllInit();
  e_10 :
  AllNextSon(&&f_10);
  Rpush(g_10);
  goto b_2;
  g_10 :
  goto e_10;
  f_10 :
  AllBuild();
  Return();
  t_9 :
  Epopd(0,0);
  Return();
  f_4 :
  Epushd(0,0);
  Rpush(h_10);
  k_3 :
  AllInit();
  i_10 :
  AllNextSon(&&j_10);
  Rpush(k_10);
  goto k_3;
  k_10 :
  goto i_10;
  j_10 :
  AllBuild();
  Cpush(m_10);
  Cpush(o_10);
  Epushd(1,3);
  MatchFun("And",2);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(1,3);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(1,3);
  Cpop();
  goto n_10;
  o_10 :
  Cpush(q_10);
  Epushd(1,3);
  MatchFun("And",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,3);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("And",2);
  Tpush();
  BuildFun("Or",2);
  Epopd(1,3);
  Cpop();
  goto p_10;
  q_10 :
  Cpush(s_10);
  Epushd(1,1);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Not",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto r_10;
  s_10 :
  Cpush(u_10);
  Epushd(1,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("And",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("Or",2);
  Epopd(1,2);
  Cpop();
  goto t_10;
  u_10 :
  Epushd(1,2);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Or",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Not",1);
  Tpush();
  BuildFun("And",2);
  Epopd(1,2);
  t_10 :
  r_10 :
  p_10 :
  n_10 :
  Rpush(v_10);
  goto k_3;
  v_10 :
  Cpop();
  goto l_10;
  m_10 :
  l_10 :
  Return();
  h_10 :
  Epopd(0,0);
  Return();
  w_10 :
DOIT_END
