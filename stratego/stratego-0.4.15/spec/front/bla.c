#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(w_0);
  goto main;
  main :
  Epushd(0,0);
  Cpush(d_0);
  BuildFun("stdin",0);
  Rpush(e_0);
  goto s_30;
  e_0 :
  Rpush(f_0);
  goto y_30;
  f_0 :
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
  Rpush(g_0);
  goto t_30;
  g_0 :
  Cpop();
  goto c_0;
  d_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(h_0);
  goto u_30;
  h_0 :
  c_0 :
  Epopd(0,0);
  Return();
  s_30 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  t_30 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  u_30 :
  Epushd(0,0);
  Tdupl();
  Rpush(i_0);
  goto v_30;
  i_0 :
  BuildInt(1);
  Rpush(j_0);
  goto x_30;
  j_0 :
  Tpop();
  Epopd(0,0);
  Return();
  v_30 :
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
  Rpush(k_0);
  goto w_30;
  k_0 :
  Tpop();
  Epopd(0,0);
  Return();
  w_30 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  x_30 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  y_30 :
  Epushd(0,0);
  Rpush(l_0);
  goto a_31;
  l_0 :
  Rpush(m_0);
  goto z_30;
  m_0 :
  Rpush(n_0);
  goto a_31;
  n_0 :
  Epopd(0,0);
  Return();
  z_30 :
  Epushd(0,2);
  MatchFunFC("S",1,&&r_0);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(s_0);
  goto a_0;
  s_0 :
  goto q_0;
  r_0 :
  MatchFunFC("R",1,&&t_0);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(u_0);
  goto b_0;
  u_0 :
  goto q_0;
  t_0 :
  goto fail;
  q_0 :
  goto p_0;
  b_0 :
  BuildVard(0,2);
  Return();
  p_0 :
  goto o_0;
  a_0 :
  BuildVard(0,1);
  Return();
  o_0 :
  Epopd(0,2);
  Return();
  a_31 :
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
  Rpush(v_0);
  goto w_30;
  v_0 :
  Tpop();
  Epopd(0,0);
  Return();
  w_0 :
DOIT_END
