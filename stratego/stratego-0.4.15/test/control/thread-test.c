#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(z_0);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto a_33;
  c_0 :
  Rpush(d_0);
  goto g_33;
  d_0 :
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
  Rpush(e_0);
  goto b_33;
  e_0 :
  Cpop();
  goto a_0;
  b_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(f_0);
  goto c_33;
  f_0 :
  a_0 :
  Epopd(0,0);
  Return();
  a_33 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  b_33 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  c_33 :
  Epushd(0,0);
  Tdupl();
  Rpush(g_0);
  goto d_33;
  g_0 :
  BuildInt(1);
  Rpush(h_0);
  goto f_33;
  h_0 :
  Tpop();
  Epopd(0,0);
  Return();
  d_33 :
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
  Rpush(i_0);
  goto e_33;
  i_0 :
  Tpop();
  Epopd(0,0);
  Return();
  e_33 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  f_33 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  g_33 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(j_0);
  goto h_33;
  j_0 :
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(0,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(k_0);
  goto j_33;
  k_0 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Rpush(l_0);
  goto k_33;
  l_0 :
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
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Epopd(1,1);
  Epopd(0,1);
  Return();
  h_33 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("Pair",2);
  Epopd(1,1);
  ThreadInit();
  m_0 :
  ThreadNextSon(&&n_0);
  Epushd(1,2);
  MatchFun("Pair",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Epushd(2,1);
  BuildVard(1,2);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(o_0);
  goto i_33;
  o_0 :
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Pair",2);
  Epopd(2,1);
  Epopd(1,2);
  ThreadSetEnv();
  goto m_0;
  n_0 :
  ThreadBuild();
  Epopd(0,0);
  Return();
  i_33 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  j_33 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("Pair",2);
  Epopd(1,1);
  Rpush(p_0);
  p_29 :
  Epushd(1,5);
  MatchFun("Pair",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Epushd(2,1);
  Epushd(3,1);
  BuildVard(1,2);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_0);
  goto i_33;
  q_0 :
  MatchVard(3,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Pair",2);
  Epopd(3,1);
  ThreadInit();
  r_0 :
  ThreadNextSon(&&s_0);
  Rpush(t_0);
  goto p_29;
  t_0 :
  ThreadSetEnv();
  goto r_0;
  s_0 :
  ThreadBuild();
  MatchVard(2,1);
  BuildVard(1,2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Ann",2);
  Epopd(2,1);
  MatchFun("Ann",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Pair",2);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchVard(1,5);
  Tpop();
  Tpop();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("Ann",2);
  Tpush();
  BuildVard(1,5);
  Tpush();
  BuildFun("Pair",2);
  Epopd(1,5);
  Return();
  p_0 :
  Epopd(0,0);
  Return();
  k_33 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("Pair",2);
  Epopd(1,1);
  Rpush(u_0);
  q_29 :
  ThreadInit();
  v_0 :
  ThreadNextSon(&&w_0);
  Rpush(x_0);
  goto q_29;
  x_0 :
  ThreadSetEnv();
  goto v_0;
  w_0 :
  ThreadBuild();
  Epushd(1,2);
  MatchFun("Pair",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Epushd(2,1);
  BuildVard(1,2);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(y_0);
  goto i_33;
  y_0 :
  MatchVard(2,1);
  BuildVard(1,2);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Ann",2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Pair",2);
  Epopd(2,1);
  Epopd(1,2);
  Return();
  u_0 :
  Epopd(0,0);
  Return();
  z_0 :
DOIT_END
