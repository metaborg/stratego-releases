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
  goto e_31;
  c_0 :
  Rpush(d_0);
  goto k_31;
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
  goto f_31;
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
  goto g_31;
  f_0 :
  a_0 :
  Epopd(0,0);
  Return();
  e_31 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  f_31 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  g_31 :
  Epushd(0,0);
  Tdupl();
  Rpush(g_0);
  goto h_31;
  g_0 :
  BuildInt(1);
  Rpush(h_0);
  goto j_31;
  h_0 :
  Tpop();
  Epopd(0,0);
  Return();
  h_31 :
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
  goto i_31;
  i_0 :
  Tpop();
  Epopd(0,0);
  Return();
  i_31 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  j_31 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  k_31 :
  Epushd(0,0);
  Tdupl();
  BuildStr("A");
  Rpush(j_0);
  goto l_31;
  j_0 :
  Tpop();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(k_0);
  goto n_31;
  k_0 :
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(l_0);
  goto n_31;
  l_0 :
  OneNextSon();
  Rpush(m_0);
  goto q_31;
  m_0 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  l_31 :
  Epushd(0,0);
  Rpush(n_0);
  goto m_31;
  n_0 :
  Epopd(0,0);
  Return();
  m_31 :
  Epushd(0,0);
  _ST_create_table();
  Epopd(0,0);
  Return();
  n_31 :
  Epushd(0,2);
  MatchVard(0,1);
  Tdupl();
  Cpush(p_0);
  Epushd(1,1);
  BuildFun("TNil",0);
  BuildStr("A");
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Rpush(q_0);
  goto o_31;
  q_0 :
  MatchVard(0,2);
  Cpop();
  goto o_0;
  p_0 :
  BuildVard(0,1);
  Epushd(1,0);
  MatchFun("A",0);
  BuildFun("B",0);
  Epopd(1,0);
  MatchVard(0,2);
  Epushd(1,1);
  BuildFun("TNil",0);
  BuildStr("A");
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Rpush(r_0);
  goto p_31;
  r_0 :
  o_0 :
  Tpop();
  BuildVard(0,2);
  Epopd(0,2);
  Return();
  o_31 :
  Epushd(0,0);
  _ST_table_get();
  Epopd(0,0);
  Return();
  p_31 :
  Epushd(0,0);
  _ST_table_put();
  Epopd(0,0);
  Return();
  q_31 :
  MatchFun("Nil",0);
  Return();
  s_0 :
DOIT_END
