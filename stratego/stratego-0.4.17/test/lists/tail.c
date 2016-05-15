#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(x_0);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto m_0;
  c_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  AllBuild();
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
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
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,3);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  AllBuild();
  AllBuild();
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
  Rpush(s_0);
  goto n_0;
  s_0 :
  Cpop();
  goto a_0;
  b_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(t_0);
  goto o_0;
  t_0 :
  a_0 :
  Epopd(0,0);
  Return();
  m_0 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  n_0 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  o_0 :
  Epushd(0,0);
  Tdupl();
  Rpush(u_0);
  goto p_0;
  u_0 :
  BuildInt(1);
  Rpush(v_0);
  goto r_0;
  v_0 :
  Tpop();
  Epopd(0,0);
  Return();
  p_0 :
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
  Rpush(w_0);
  goto q_0;
  w_0 :
  Tpop();
  Epopd(0,0);
  Return();
  q_0 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  r_0 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  x_0 :
DOIT_END
