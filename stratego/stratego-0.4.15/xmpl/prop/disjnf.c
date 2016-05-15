#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(g_10);
  goto main;
  main :
  Epushd(0,0);
  Cpush(u_0);
  BuildFun("stdin",0);
  Rpush(v_0);
  goto h_40;
  v_0 :
  Rpush(w_0);
  goto m_40;
  w_0 :
  Rpush(x_0);
  goto o_40;
  x_0 :
  Rpush(y_0);
  goto p_40;
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
  goto i_40;
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
  goto j_40;
  a_1 :
  t_0 :
  Epopd(0,0);
  Return();
  h_40 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  i_40 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  j_40 :
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
  Rpush(b_1);
  goto k_40;
  b_1 :
  BuildInt(1);
  Rpush(c_1);
  goto l_40;
  c_1 :
  Tpop();
  Epopd(0,0);
  Return();
  k_40 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  l_40 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  m_40 :
  Epushd(0,0);
  Rpush(d_1);
  c_35 :
  AllInit();
  e_1 :
  AllNextSon(&&f_1);
  Rpush(g_1);
  goto c_35;
  g_1 :
  goto e_1;
  f_1 :
  AllBuild();
  Cpush(i_1);
  Epushd(1,0);
  Rpush(j_1);
  d_35 :
  Epushd(2,0);
  Cpush(l_1);
  Rpush(m_1);
  goto n_40;
  m_1 :
  Rpush(n_1);
  goto d_35;
  n_1 :
  Cpop();
  goto k_1;
  l_1 :
  k_1 :
  Epopd(2,0);
  Return();
  j_1 :
  Epopd(1,0);
  Cpop();
  goto h_1;
  i_1 :
  Epushd(1,0);
  Cpush(p_1);
  o_1 :
  Rpush(q_1);
  goto n_40;
  q_1 :
  Tduplinv();
  goto o_1;
  p_1 :
  Epopd(1,0);
  h_1 :
  Return();
  d_1 :
  Epopd(0,0);
  Return();
  n_40 :
  Epushd(0,15);
  MatchFunFC("Not",&&l_2);
  Arg(0);
  MatchFunFC("True",&&n_2);
  Tpop();
  Rpush(o_2);
  goto a_0;
  o_2 :
  goto m_2;
  n_2 :
  MatchFunFC("False",&&p_2);
  Tpop();
  Rpush(q_2);
  goto b_0;
  q_2 :
  goto m_2;
  p_2 :
  goto fail;
  m_2 :
  goto k_2;
  l_2 :
  MatchFunFC("And",&&r_2);
  Arg(0);
  MatchFunFC("True",&&t_2);
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&v_2);
  MatchVard(0,1);
  Tpop();
  Cpush(x_2);
  Rpush(y_2);
  goto c_0;
  y_2 :
  Cpop();
  goto w_2;
  x_2 :
  Rpush(z_2);
  goto d_0;
  z_2 :
  w_2 :
  goto u_2;
  v_2 :
  MatchFunFC("False",&&a_3);
  MatchVard(0,1);
  Tpop();
  Cpush(c_3);
  Rpush(d_3);
  goto c_0;
  d_3 :
  Cpop();
  goto b_3;
  c_3 :
  Rpush(e_3);
  goto f_0;
  e_3 :
  b_3 :
  goto u_2;
  a_3 :
  MatchVard(0,1);
  Tpop();
  Rpush(f_3);
  goto c_0;
  f_3 :
  u_2 :
  goto s_2;
  t_2 :
  MatchFunFC("False",&&g_3);
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&i_3);
  MatchVard(0,3);
  Tpop();
  Cpush(k_3);
  Rpush(l_3);
  goto d_0;
  l_3 :
  Cpop();
  goto j_3;
  k_3 :
  Rpush(m_3);
  goto e_0;
  m_3 :
  j_3 :
  goto h_3;
  i_3 :
  MatchFunFC("False",&&n_3);
  MatchVard(0,3);
  Tpop();
  Cpush(p_3);
  Rpush(q_3);
  goto e_0;
  q_3 :
  Cpop();
  goto o_3;
  p_3 :
  Rpush(r_3);
  goto f_0;
  r_3 :
  o_3 :
  goto h_3;
  n_3 :
  MatchVard(0,3);
  Tpop();
  Rpush(s_3);
  goto e_0;
  s_3 :
  h_3 :
  goto s_2;
  g_3 :
  MatchVard(0,2);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&u_3);
  Tpop();
  Rpush(v_3);
  goto d_0;
  v_3 :
  goto t_3;
  u_3 :
  MatchFunFC("False",&&w_3);
  Tpop();
  Rpush(x_3);
  goto f_0;
  x_3 :
  goto t_3;
  w_3 :
  goto fail;
  t_3 :
  s_2 :
  goto k_2;
  r_2 :
  MatchFunFC("Or",&&y_3);
  Arg(0);
  MatchFunFC("True",&&a_4);
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&c_4);
  MatchVard(0,5);
  Tpop();
  Cpush(e_4);
  Rpush(f_4);
  goto g_0;
  f_4 :
  Cpop();
  goto d_4;
  e_4 :
  Rpush(g_4);
  goto h_0;
  g_4 :
  d_4 :
  goto b_4;
  c_4 :
  MatchFunFC("False",&&h_4);
  MatchVard(0,5);
  Tpop();
  Cpush(j_4);
  Rpush(k_4);
  goto g_0;
  k_4 :
  Cpop();
  goto i_4;
  j_4 :
  Rpush(l_4);
  goto j_0;
  l_4 :
  i_4 :
  goto b_4;
  h_4 :
  MatchVard(0,5);
  Tpop();
  Rpush(m_4);
  goto g_0;
  m_4 :
  b_4 :
  goto z_3;
  a_4 :
  MatchFunFC("False",&&n_4);
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&p_4);
  MatchVard(0,7);
  Tpop();
  Cpush(r_4);
  Rpush(s_4);
  goto h_0;
  s_4 :
  Cpop();
  goto q_4;
  r_4 :
  Rpush(t_4);
  goto i_0;
  t_4 :
  q_4 :
  goto o_4;
  p_4 :
  MatchFunFC("False",&&u_4);
  MatchVard(0,7);
  Tpop();
  Cpush(w_4);
  Rpush(x_4);
  goto i_0;
  x_4 :
  Cpop();
  goto v_4;
  w_4 :
  Rpush(y_4);
  goto j_0;
  y_4 :
  v_4 :
  goto o_4;
  u_4 :
  MatchVard(0,7);
  Tpop();
  Rpush(z_4);
  goto i_0;
  z_4 :
  o_4 :
  goto z_3;
  n_4 :
  MatchVard(0,6);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&b_5);
  Tpop();
  Rpush(c_5);
  goto h_0;
  c_5 :
  goto a_5;
  b_5 :
  MatchFunFC("False",&&d_5);
  Tpop();
  Rpush(e_5);
  goto j_0;
  e_5 :
  goto a_5;
  d_5 :
  goto fail;
  a_5 :
  z_3 :
  goto k_2;
  y_3 :
  MatchFunFC("Impl",&&f_5);
  Arg(0);
  MatchFunFC("False",&&h_5);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&j_5);
  MatchVard(0,11);
  Tpop();
  Cpush(l_5);
  Rpush(m_5);
  goto l_0;
  m_5 :
  Cpop();
  goto k_5;
  l_5 :
  Rpush(n_5);
  goto m_0;
  n_5 :
  k_5 :
  goto i_5;
  j_5 :
  MatchFunFC("False",&&o_5);
  MatchVard(0,11);
  Tpop();
  Cpush(q_5);
  Rpush(r_5);
  goto m_0;
  r_5 :
  Cpop();
  goto p_5;
  q_5 :
  Rpush(s_5);
  goto n_0;
  s_5 :
  p_5 :
  goto i_5;
  o_5 :
  MatchVard(0,11);
  Tpop();
  Rpush(t_5);
  goto m_0;
  t_5 :
  i_5 :
  goto g_5;
  h_5 :
  MatchFunFC("True",&&u_5);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFunFC("True",&&w_5);
  MatchVard(0,9);
  Tpop();
  Cpush(y_5);
  Rpush(z_5);
  goto k_0;
  z_5 :
  Cpop();
  goto x_5;
  y_5 :
  Rpush(a_6);
  goto l_0;
  a_6 :
  x_5 :
  goto v_5;
  w_5 :
  MatchFunFC("False",&&b_6);
  MatchVard(0,9);
  Tpop();
  Cpush(d_6);
  Rpush(e_6);
  goto k_0;
  e_6 :
  Cpop();
  goto c_6;
  d_6 :
  Rpush(f_6);
  goto o_0;
  f_6 :
  c_6 :
  goto v_5;
  b_6 :
  MatchVard(0,9);
  Tpop();
  Rpush(g_6);
  goto k_0;
  g_6 :
  v_5 :
  goto g_5;
  u_5 :
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFun("True");
  Tpop();
  Rpush(h_6);
  goto l_0;
  h_6 :
  g_5 :
  goto k_2;
  f_5 :
  MatchFunFC("Eq",&&i_6);
  Arg(0);
  MatchFunFC("False",&&k_6);
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",&&m_6);
  MatchVard(0,12);
  Tpop();
  Cpush(o_6);
  Rpush(p_6);
  goto p_0;
  p_6 :
  Cpop();
  goto n_6;
  o_6 :
  Rpush(q_6);
  goto q_0;
  q_6 :
  n_6 :
  goto l_6;
  m_6 :
  MatchFunFC("True",&&r_6);
  MatchVard(0,12);
  Tpop();
  Cpush(t_6);
  Rpush(u_6);
  goto p_0;
  u_6 :
  Cpop();
  goto s_6;
  t_6 :
  Rpush(v_6);
  goto s_0;
  v_6 :
  s_6 :
  goto l_6;
  r_6 :
  MatchVard(0,12);
  Tpop();
  Rpush(w_6);
  goto p_0;
  w_6 :
  l_6 :
  goto j_6;
  k_6 :
  MatchFunFC("True",&&x_6);
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",&&z_6);
  MatchVard(0,14);
  Tpop();
  Cpush(b_7);
  Rpush(c_7);
  goto q_0;
  c_7 :
  Cpop();
  goto a_7;
  b_7 :
  Rpush(d_7);
  goto r_0;
  d_7 :
  a_7 :
  goto y_6;
  z_6 :
  MatchFunFC("True",&&e_7);
  MatchVard(0,14);
  Tpop();
  Cpush(g_7);
  Rpush(h_7);
  goto r_0;
  h_7 :
  Cpop();
  goto f_7;
  g_7 :
  Rpush(i_7);
  goto s_0;
  i_7 :
  f_7 :
  goto y_6;
  e_7 :
  MatchVard(0,14);
  Tpop();
  Rpush(j_7);
  goto r_0;
  j_7 :
  y_6 :
  goto j_6;
  x_6 :
  MatchVard(0,13);
  MatchVard(0,15);
  Tpop();
  Arg(1);
  MatchFunFC("False",&&l_7);
  Tpop();
  Rpush(m_7);
  goto q_0;
  m_7 :
  goto k_7;
  l_7 :
  MatchFunFC("True",&&n_7);
  Tpop();
  Rpush(o_7);
  goto s_0;
  o_7 :
  goto k_7;
  n_7 :
  goto fail;
  k_7 :
  j_6 :
  goto k_2;
  i_6 :
  goto fail;
  k_2 :
  goto j_2;
  s_0 :
  BuildVard(0,15);
  Return();
  j_2 :
  goto i_2;
  r_0 :
  BuildVard(0,14);
  Return();
  i_2 :
  goto h_2;
  q_0 :
  BuildVard(0,13);
  Tpush();
  BuildFun("Not",1);
  Return();
  h_2 :
  goto g_2;
  p_0 :
  BuildVard(0,12);
  Tpush();
  BuildFun("Not",1);
  Return();
  g_2 :
  goto f_2;
  o_0 :
  BuildFun("False",0);
  Return();
  f_2 :
  goto e_2;
  n_0 :
  BuildFun("True",0);
  Return();
  e_2 :
  goto d_2;
  m_0 :
  BuildFun("True",0);
  Return();
  d_2 :
  goto c_2;
  l_0 :
  BuildFun("True",0);
  Return();
  c_2 :
  goto b_2;
  k_0 :
  BuildVard(0,9);
  Return();
  b_2 :
  goto a_2;
  j_0 :
  BuildVard(0,8);
  Return();
  a_2 :
  goto z_1;
  i_0 :
  BuildVard(0,7);
  Return();
  z_1 :
  goto y_1;
  h_0 :
  BuildFun("True",0);
  Return();
  y_1 :
  goto x_1;
  g_0 :
  BuildFun("True",0);
  Return();
  x_1 :
  goto w_1;
  f_0 :
  BuildFun("False",0);
  Return();
  w_1 :
  goto v_1;
  e_0 :
  BuildFun("False",0);
  Return();
  v_1 :
  goto u_1;
  d_0 :
  BuildVard(0,2);
  Return();
  u_1 :
  goto t_1;
  c_0 :
  BuildVard(0,1);
  Return();
  t_1 :
  goto s_1;
  b_0 :
  BuildFun("True",0);
  Return();
  s_1 :
  goto r_1;
  a_0 :
  BuildFun("False",0);
  Return();
  r_1 :
  Epopd(0,15);
  Return();
  o_40 :
  Epushd(0,0);
  Rpush(p_7);
  g_36 :
  Cpush(r_7);
  Epushd(1,0);
  Cpush(t_7);
  Cpush(v_7);
  Epushd(2,2);
  MatchFun("Impl");
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
  goto u_7;
  v_7 :
  Epushd(2,2);
  MatchFun("Eq");
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
  u_7 :
  Cpop();
  goto s_7;
  t_7 :
  s_7 :
  Epopd(1,0);
  Cpop();
  goto q_7;
  r_7 :
  Epushd(1,0);
  Cpush(x_7);
  Cpush(z_7);
  Epushd(2,2);
  MatchFun("Impl");
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
  goto y_7;
  z_7 :
  Epushd(2,2);
  MatchFun("Eq");
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
  y_7 :
  Cpop();
  goto w_7;
  x_7 :
  w_7 :
  Epopd(1,0);
  q_7 :
  AllInit();
  a_8 :
  AllNextSon(&&b_8);
  Rpush(c_8);
  goto g_36;
  c_8 :
  goto a_8;
  b_8 :
  AllBuild();
  Return();
  p_7 :
  Epopd(0,0);
  Return();
  p_40 :
  Epushd(0,0);
  Cpush(e_8);
  Epushd(1,0);
  Rpush(f_8);
  x_37 :
  Cpush(h_8);
  Epushd(2,0);
  Cpush(j_8);
  Epushd(3,0);
  Rpush(k_8);
  v_38 :
  Cpush(m_8);
  IsAppl();
  OneInit();
  n_8 :
  OneNextSon();
  Cpush(n_8);
  Rpush(p_8);
  goto v_38;
  p_8 :
  Cpop();
  OneBuild();
  Cpop();
  goto l_8;
  m_8 :
  Cpush(r_8);
  Epushd(4,3);
  MatchFun("And");
  Arg(0);
  MatchFun("Or");
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
  goto q_8;
  r_8 :
  Cpush(t_8);
  Epushd(4,3);
  MatchFun("And");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("Or");
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
  goto s_8;
  t_8 :
  Cpush(v_8);
  Epushd(4,1);
  MatchFun("Not");
  Arg(0);
  MatchFun("Not");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Epopd(4,1);
  Cpop();
  goto u_8;
  v_8 :
  Cpush(x_8);
  Epushd(4,2);
  MatchFun("Not");
  Arg(0);
  MatchFun("And");
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
  goto w_8;
  x_8 :
  Epushd(4,2);
  MatchFun("Not");
  Arg(0);
  MatchFun("Or");
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
  w_8 :
  u_8 :
  s_8 :
  q_8 :
  l_8 :
  Return();
  k_8 :
  Epopd(3,0);
  Rpush(y_8);
  goto x_37;
  y_8 :
  Cpop();
  goto i_8;
  j_8 :
  i_8 :
  Epopd(2,0);
  Cpop();
  goto g_8;
  h_8 :
  Epushd(2,0);
  Cpush(a_9);
  Epushd(3,0);
  Rpush(b_9);
  h_39 :
  Cpush(d_9);
  IsAppl();
  OneInit();
  e_9 :
  OneNextSon();
  Cpush(e_9);
  Rpush(g_9);
  goto h_39;
  g_9 :
  Cpop();
  OneBuild();
  Cpop();
  goto c_9;
  d_9 :
  Cpush(i_9);
  Epushd(4,3);
  MatchFun("And");
  Arg(0);
  MatchFun("Or");
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
  goto h_9;
  i_9 :
  Cpush(k_9);
  Epushd(4,3);
  MatchFun("And");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("Or");
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
  goto j_9;
  k_9 :
  Cpush(m_9);
  Epushd(4,1);
  MatchFun("Not");
  Arg(0);
  MatchFun("Not");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Epopd(4,1);
  Cpop();
  goto l_9;
  m_9 :
  Cpush(o_9);
  Epushd(4,2);
  MatchFun("Not");
  Arg(0);
  MatchFun("And");
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
  goto n_9;
  o_9 :
  Epushd(4,2);
  MatchFun("Not");
  Arg(0);
  MatchFun("Or");
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
  n_9 :
  l_9 :
  j_9 :
  h_9 :
  c_9 :
  Return();
  b_9 :
  Epopd(3,0);
  Rpush(p_9);
  goto x_37;
  p_9 :
  Cpop();
  goto z_8;
  a_9 :
  z_8 :
  Epopd(2,0);
  g_8 :
  Return();
  f_8 :
  Epopd(1,0);
  Cpop();
  goto d_8;
  e_8 :
  Epushd(1,0);
  Cpush(r_9);
  q_9 :
  Epushd(2,0);
  Rpush(s_9);
  g_40 :
  Cpush(u_9);
  IsAppl();
  OneInit();
  v_9 :
  OneNextSon();
  Cpush(v_9);
  Rpush(x_9);
  goto g_40;
  x_9 :
  Cpop();
  OneBuild();
  Cpop();
  goto t_9;
  u_9 :
  Cpush(z_9);
  Epushd(3,3);
  MatchFun("And");
  Arg(0);
  MatchFun("Or");
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
  goto y_9;
  z_9 :
  Cpush(b_10);
  Epushd(3,3);
  MatchFun("And");
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("Or");
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
  goto a_10;
  b_10 :
  Cpush(d_10);
  Epushd(3,1);
  MatchFun("Not");
  Arg(0);
  MatchFun("Not");
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Epopd(3,1);
  Cpop();
  goto c_10;
  d_10 :
  Cpush(f_10);
  Epushd(3,2);
  MatchFun("Not");
  Arg(0);
  MatchFun("And");
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
  goto e_10;
  f_10 :
  Epushd(3,2);
  MatchFun("Not");
  Arg(0);
  MatchFun("Or");
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
  e_10 :
  c_10 :
  a_10 :
  y_9 :
  t_9 :
  Return();
  s_9 :
  Epopd(2,0);
  Tduplinv();
  goto q_9;
  r_9 :
  Epopd(1,0);
  d_8 :
  Epopd(0,0);
  Return();
  g_10 :
DOIT_END
