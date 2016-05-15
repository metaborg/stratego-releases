#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(i_1);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto i_34;
  c_0 :
  Rpush(d_0);
  goto o_34;
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
  goto j_34;
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
  goto k_34;
  f_0 :
  a_0 :
  Epopd(0,0);
  Return();
  i_34 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  j_34 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  k_34 :
  Epushd(0,0);
  Tdupl();
  Rpush(g_0);
  goto l_34;
  g_0 :
  BuildInt(1);
  Rpush(h_0);
  goto n_34;
  h_0 :
  Tpop();
  Epopd(0,0);
  Return();
  l_34 :
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
  goto m_34;
  i_0 :
  Tpop();
  Epopd(0,0);
  Return();
  m_34 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  n_34 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  o_34 :
  Epushd(0,0);
  Rpush(j_0);
  p_33 :
  Cpush(l_0);
  Rpush(m_0);
  goto q_34;
  m_0 :
  Cpop();
  goto k_0;
  l_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Epushd(4,1);
  MatchFun("Module",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  Tpop();
  BuildVard(4,1);
  Epopd(4,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildStr("mod");
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epushd(3,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildStr(".");
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(n_0);
  goto p_34;
  n_0 :
  Epopd(3,2);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Rpush(o_0);
  goto j_34;
  o_0 :
  Epopd(1,1);
  OneNextSon();
  Rpush(p_0);
  goto p_33;
  p_0 :
  AllBuild();
  k_0 :
  Return();
  j_0 :
  Epopd(0,0);
  Return();
  p_34 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(q_0);
  e_34 :
  Cpush(s_0);
  Rpush(t_0);
  goto q_34;
  t_0 :
  Cpop();
  goto r_0;
  s_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(u_0);
  goto r_34;
  u_0 :
  OneNextSon();
  Rpush(v_0);
  goto e_34;
  v_0 :
  AllBuild();
  r_0 :
  Return();
  q_0 :
  Epopd(1,0);
  Rpush(w_0);
  goto s_34;
  w_0 :
  Rpush(x_0);
  goto t_34;
  x_0 :
  Epopd(0,0);
  Return();
  q_34 :
  MatchFun("Nil",0);
  Return();
  r_34 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  s_34 :
  Epushd(0,0);
  Rpush(y_0);
  h_26 :
  Cpush(a_1);
  Rpush(b_1);
  goto q_34;
  b_1 :
  Cpop();
  goto z_0;
  a_1 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,2);
  Epushd(2,0);
  Rpush(c_1);
  h_34 :
  Cpush(e_1);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_1);
  goto h_34;
  f_1 :
  AllBuild();
  Cpop();
  goto d_1;
  e_1 :
  Rpush(g_1);
  goto q_34;
  g_1 :
  BuildVard(1,1);
  Rpush(h_1);
  goto h_26;
  h_1 :
  d_1 :
  Return();
  c_1 :
  Epopd(2,0);
  Epopd(1,2);
  z_0 :
  Return();
  y_0 :
  Epopd(0,0);
  Return();
  t_34 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  i_1 :
DOIT_END
