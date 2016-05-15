#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(i_0);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto o_21;
  c_0 :
  Epushd(1,0);
  MatchReal(0.600000);
  BuildReal(1.200000);
  Epopd(1,0);
  MatchReal(1.200000);
  _ST_explode_term();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TNil",0);
  AllBuild();
  AllBuild();
  _ST_mkterm();
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
  Rpush(d_0);
  goto p_21;
  d_0 :
  Cpop();
  goto a_0;
  b_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(e_0);
  goto q_21;
  e_0 :
  a_0 :
  Epopd(0,0);
  Return();
  o_21 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  p_21 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  q_21 :
  Epushd(0,0);
  Tdupl();
  Rpush(f_0);
  goto r_21;
  f_0 :
  BuildInt(1);
  Rpush(g_0);
  goto t_21;
  g_0 :
  Tpop();
  Epopd(0,0);
  Return();
  r_21 :
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
  goto s_21;
  h_0 :
  Tpop();
  Epopd(0,0);
  Return();
  s_21 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  t_21 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  i_0 :
DOIT_END
