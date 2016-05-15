#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(n_1);
  goto main;
  main :
  Epushd(0,0);
  Cpush(w_0);
  BuildFun("stdin",0);
  Rpush(x_0);
  goto k_0;
  x_0 :
  Rpush(y_0);
  goto t_0;
  y_0 :
  Rpush(z_0);
  goto q_0;
  z_0 :
  Rpush(a_1);
  goto t_0;
  a_1 :
  Rpush(b_1);
  goto r_0;
  b_1 :
  Rpush(c_1);
  goto t_0;
  c_1 :
  Rpush(d_1);
  goto s_0;
  d_1 :
  Rpush(e_1);
  goto t_0;
  e_1 :
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
  Rpush(f_1);
  goto t_0;
  f_1 :
  Rpush(g_1);
  goto u_0;
  g_1 :
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
  Rpush(h_1);
  goto l_0;
  h_1 :
  Cpop();
  goto v_0;
  w_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(i_1);
  goto m_0;
  i_1 :
  v_0 :
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
  Rpush(j_1);
  goto n_0;
  j_1 :
  BuildInt(1);
  Rpush(k_1);
  goto p_0;
  k_1 :
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
  Rpush(l_1);
  goto o_0;
  l_1 :
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
  r_0 :
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
  s_0 :
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
  t_0 :
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
  Rpush(m_1);
  goto o_0;
  m_1 :
  Tpop();
  Epopd(0,0);
  Return();
  u_0 :
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
  n_1 :
DOIT_END
