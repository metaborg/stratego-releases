#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(u_0);
  goto main;
  main :
  Epushd(0,0);
  Cpush(n_0);
  BuildFun("stdin",0);
  Rpush(o_0);
  goto g_0;
  o_0 :
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
  Rpush(p_0);
  goto h_0;
  p_0 :
  Cpop();
  goto m_0;
  n_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(q_0);
  goto i_0;
  q_0 :
  m_0 :
  Epopd(0,0);
  Return();
  g_0 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  h_0 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  i_0 :
  Epushd(0,0);
  Tdupl();
  Rpush(r_0);
  goto j_0;
  r_0 :
  BuildInt(1);
  Rpush(s_0);
  goto l_0;
  s_0 :
  Tpop();
  Epopd(0,0);
  Return();
  j_0 :
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
  Rpush(t_0);
  goto k_0;
  t_0 :
  Tpop();
  Epopd(0,0);
  Return();
  k_0 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  l_0 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  u_0 :
DOIT_END
