#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(s_0);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto k_32;
  c_0 :
  Rpush(d_0);
  goto t_32;
  d_0 :
  Rpush(e_0);
  goto q_32;
  e_0 :
  Rpush(f_0);
  goto t_32;
  f_0 :
  Rpush(g_0);
  goto r_32;
  g_0 :
  Rpush(h_0);
  goto t_32;
  h_0 :
  Rpush(i_0);
  goto s_32;
  i_0 :
  Rpush(j_0);
  goto t_32;
  j_0 :
  _ST_explode_term();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchFun("Cons",2);
  OneNextSon();
  MatchFun("TNil",0);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  Rpush(k_0);
  goto t_32;
  k_0 :
  Rpush(l_0);
  goto u_32;
  l_0 :
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
  Rpush(m_0);
  goto l_32;
  m_0 :
  Cpop();
  goto a_0;
  b_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(n_0);
  goto m_32;
  n_0 :
  a_0 :
  Epopd(0,0);
  Return();
  k_32 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  l_32 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  m_32 :
  Epushd(0,0);
  Tdupl();
  Rpush(o_0);
  goto n_32;
  o_0 :
  BuildInt(1);
  Rpush(p_0);
  goto p_32;
  p_0 :
  Tpop();
  Epopd(0,0);
  Return();
  n_32 :
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
  Rpush(q_0);
  goto o_32;
  q_0 :
  Tpop();
  Epopd(0,0);
  Return();
  o_32 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  p_32 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  q_32 :
  Epushd(0,4);
  MatchVard(0,3);
  Tdupl();
  BuildVard(0,3);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  _ST_mkterm();
  MatchVard(0,4);
  BuildVard(0,4);
  Epopd(0,4);
  Return();
  r_32 :
  Epushd(0,4);
  MatchVard(0,3);
  Tdupl();
  BuildVard(0,3);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildStr("b");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  _ST_mkterm();
  MatchVard(0,4);
  BuildVard(0,4);
  Epopd(0,4);
  Return();
  s_32 :
  Epushd(0,3);
  MatchVard(0,2);
  Tdupl();
  BuildVard(0,2);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  MatchString("b");
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildStr("c");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  _ST_mkterm();
  MatchVard(0,3);
  BuildVard(0,3);
  Epopd(0,3);
  Return();
  t_32 :
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
  Rpush(r_0);
  goto o_32;
  r_0 :
  Tpop();
  Epopd(0,0);
  Return();
  u_32 :
  Epushd(0,2);
  Epushd(1,1);
  MatchVard(1,1);
  Tdupl();
  BuildVard(1,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epopd(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,2);
  Return();
  s_0 :
DOIT_END
