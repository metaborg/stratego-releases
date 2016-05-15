#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(a_3);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto k_36;
  c_0 :
  Rpush(d_0);
  goto p_36;
  d_0 :
  Rpush(e_0);
  goto q_36;
  e_0 :
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
  Rpush(f_0);
  goto l_36;
  f_0 :
  Cpop();
  goto a_0;
  b_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(g_0);
  goto m_36;
  g_0 :
  a_0 :
  Epopd(0,0);
  Return();
  k_36 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  l_36 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  m_36 :
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
  Rpush(h_0);
  goto n_36;
  h_0 :
  BuildInt(1);
  Rpush(i_0);
  goto o_36;
  i_0 :
  Tpop();
  Epopd(0,0);
  Return();
  n_36 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  o_36 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  p_36 :
  Epushd(0,0);
  Rpush(j_0);
  j_32 :
  Cpush(l_0);
  Epushd(1,0);
  Cpush(n_0);
  Cpush(p_0);
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
  goto o_0;
  p_0 :
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
  o_0 :
  Cpop();
  goto m_0;
  n_0 :
  m_0 :
  Epopd(1,0);
  Cpop();
  goto k_0;
  l_0 :
  Epushd(1,0);
  Cpush(r_0);
  Cpush(t_0);
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
  goto s_0;
  t_0 :
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
  s_0 :
  Cpop();
  goto q_0;
  r_0 :
  q_0 :
  Epopd(1,0);
  k_0 :
  AllInit();
  u_0 :
  AllNextSon(&&v_0);
  Rpush(w_0);
  goto j_32;
  w_0 :
  goto u_0;
  v_0 :
  AllBuild();
  Return();
  j_0 :
  Epopd(0,0);
  Return();
  q_36 :
  Epushd(0,0);
  Cpush(y_0);
  Epushd(1,0);
  Cpush(a_1);
  z_0 :
  Epushd(2,0);
  Rpush(b_1);
  z_34 :
  Cpush(d_1);
  IsAppl();
  OneInit();
  e_1 :
  OneNextSon();
  Cpush(e_1);
  Rpush(g_1);
  goto z_34;
  g_1 :
  Cpop();
  OneBuild();
  Cpop();
  goto c_1;
  d_1 :
  Cpush(i_1);
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
  goto h_1;
  i_1 :
  Cpush(k_1);
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
  goto j_1;
  k_1 :
  Cpush(m_1);
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
  goto l_1;
  m_1 :
  Cpush(o_1);
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
  goto n_1;
  o_1 :
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
  n_1 :
  l_1 :
  j_1 :
  h_1 :
  c_1 :
  Return();
  b_1 :
  Epopd(2,0);
  Tduplinv();
  goto z_0;
  a_1 :
  Epopd(1,0);
  Cpop();
  goto x_0;
  y_0 :
  Epushd(1,0);
  Rpush(p_1);
  a_34 :
  Cpush(r_1);
  Epushd(2,0);
  Cpush(t_1);
  Epushd(3,0);
  Rpush(u_1);
  x_35 :
  Cpush(w_1);
  IsAppl();
  OneInit();
  x_1 :
  OneNextSon();
  Cpush(x_1);
  Rpush(z_1);
  goto x_35;
  z_1 :
  Cpop();
  OneBuild();
  Cpop();
  goto v_1;
  w_1 :
  Cpush(b_2);
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
  goto a_2;
  b_2 :
  Cpush(d_2);
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
  goto c_2;
  d_2 :
  Cpush(f_2);
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
  goto e_2;
  f_2 :
  Cpush(h_2);
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
  goto g_2;
  h_2 :
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
  g_2 :
  e_2 :
  c_2 :
  a_2 :
  v_1 :
  Return();
  u_1 :
  Epopd(3,0);
  Rpush(i_2);
  goto a_34;
  i_2 :
  Cpop();
  goto s_1;
  t_1 :
  s_1 :
  Epopd(2,0);
  Cpop();
  goto q_1;
  r_1 :
  Epushd(2,0);
  Cpush(k_2);
  Epushd(3,0);
  Rpush(l_2);
  j_36 :
  Cpush(n_2);
  IsAppl();
  OneInit();
  o_2 :
  OneNextSon();
  Cpush(o_2);
  Rpush(q_2);
  goto j_36;
  q_2 :
  Cpop();
  OneBuild();
  Cpop();
  goto m_2;
  n_2 :
  Cpush(s_2);
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
  goto r_2;
  s_2 :
  Cpush(u_2);
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
  goto t_2;
  u_2 :
  Cpush(w_2);
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
  goto v_2;
  w_2 :
  Cpush(y_2);
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
  goto x_2;
  y_2 :
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
  x_2 :
  v_2 :
  t_2 :
  r_2 :
  m_2 :
  Return();
  l_2 :
  Epopd(3,0);
  Rpush(z_2);
  goto a_34;
  z_2 :
  Cpop();
  goto j_2;
  k_2 :
  j_2 :
  Epopd(2,0);
  q_1 :
  Return();
  p_1 :
  Epopd(1,0);
  x_0 :
  Epopd(0,0);
  Return();
  a_3 :
DOIT_END
