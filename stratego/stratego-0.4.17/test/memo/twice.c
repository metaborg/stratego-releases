#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(p_1);
  goto main;
  main :
  Epushd(0,0);
  Cpush(y_0);
  BuildFun("stdin",0);
  Rpush(z_0);
  goto k_0;
  z_0 :
  Rpush(a_1);
  goto q_0;
  a_1 :
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
  Rpush(b_1);
  goto l_0;
  b_1 :
  Cpop();
  goto x_0;
  y_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(c_1);
  goto m_0;
  c_1 :
  x_0 :
  Epopd(0,0);
  Return();
  k_0 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  l_0 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  m_0 :
  Epushd(0,0);
  Tdupl();
  Rpush(d_1);
  goto n_0;
  d_1 :
  BuildInt(1);
  Rpush(e_1);
  goto p_0;
  e_1 :
  Tpop();
  Epopd(0,0);
  Return();
  n_0 :
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
  Rpush(f_1);
  goto o_0;
  f_1 :
  Tpop();
  Epopd(0,0);
  Return();
  o_0 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  p_0 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  q_0 :
  Epushd(0,0);
  Tdupl();
  BuildStr("A");
  Rpush(g_1);
  goto r_0;
  g_1 :
  Tpop();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(h_1);
  goto t_0;
  h_1 :
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_1);
  goto t_0;
  i_1 :
  OneNextSon();
  Rpush(j_1);
  goto w_0;
  j_1 :
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  r_0 :
  Epushd(0,0);
  Rpush(k_1);
  goto s_0;
  k_1 :
  Epopd(0,0);
  Return();
  s_0 :
  Epushd(0,0);
  _ST_create_table();
  Epopd(0,0);
  Return();
  t_0 :
  Epushd(0,2);
  MatchVard(0,1);
  Tdupl();
  Cpush(m_1);
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
  Rpush(n_1);
  goto u_0;
  n_1 :
  MatchVard(0,2);
  Cpop();
  goto l_1;
  m_1 :
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
  Rpush(o_1);
  goto v_0;
  o_1 :
  l_1 :
  Tpop();
  BuildVard(0,2);
  Epopd(0,2);
  Return();
  u_0 :
  Epushd(0,0);
  _ST_table_get();
  Epopd(0,0);
  Return();
  v_0 :
  Epushd(0,0);
  _ST_table_put();
  Epopd(0,0);
  Return();
  w_0 :
  MatchFun("Nil",0);
  Return();
  p_1 :
DOIT_END
