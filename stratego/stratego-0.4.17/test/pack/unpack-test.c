#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(k_2);
  goto main;
  main :
  Epushd(0,0);
  Cpush(h_0);
  BuildFun("stdin",0);
  Rpush(i_0);
  goto f_1;
  i_0 :
  Rpush(j_0);
  goto m_1;
  j_0 :
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
  Rpush(k_0);
  goto g_1;
  k_0 :
  Cpop();
  goto g_0;
  h_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(l_0);
  goto h_1;
  l_0 :
  g_0 :
  Epopd(0,0);
  Return();
  f_1 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  g_1 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  h_1 :
  Epushd(0,0);
  Tdupl();
  Rpush(m_0);
  goto i_1;
  m_0 :
  BuildInt(1);
  Rpush(n_0);
  goto k_1;
  n_0 :
  Tpop();
  Epopd(0,0);
  Return();
  i_1 :
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
  Rpush(p_0);
  goto j_1;
  p_0 :
  Tpop();
  Epopd(0,0);
  Return();
  j_1 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  k_1 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  m_1 :
  Epushd(0,0);
  Rpush(q_0);
  o_0 :
  Cpush(s_0);
  Rpush(t_0);
  goto o_1;
  t_0 :
  Cpop();
  goto r_0;
  s_0 :
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
  Rpush(u_0);
  goto n_1;
  u_0 :
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
  Rpush(v_0);
  goto g_1;
  v_0 :
  Epopd(1,1);
  OneNextSon();
  Rpush(l_1);
  goto o_0;
  l_1 :
  AllBuild();
  r_0 :
  Return();
  q_0 :
  Epopd(0,0);
  Return();
  n_1 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(s_1);
  d_1 :
  Cpush(u_1);
  Rpush(v_1);
  goto o_1;
  v_1 :
  Cpop();
  goto t_1;
  u_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(w_1);
  goto p_1;
  w_1 :
  OneNextSon();
  Rpush(x_1);
  goto d_1;
  x_1 :
  AllBuild();
  t_1 :
  Return();
  s_1 :
  Epopd(1,0);
  Rpush(y_1);
  goto q_1;
  y_1 :
  Rpush(z_1);
  goto r_1;
  z_1 :
  Epopd(0,0);
  Return();
  o_1 :
  MatchFun("Nil",0);
  Return();
  p_1 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  q_1 :
  Epushd(0,0);
  Rpush(a_2);
  u_27 :
  Cpush(c_2);
  Rpush(d_2);
  goto o_1;
  d_2 :
  Cpop();
  goto b_2;
  c_2 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,1);
  Epushd(2,0);
  Rpush(e_2);
  e_1 :
  Cpush(g_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_2);
  goto e_1;
  h_2 :
  AllBuild();
  Cpop();
  goto f_2;
  g_2 :
  Rpush(i_2);
  goto o_1;
  i_2 :
  BuildVard(1,2);
  Rpush(j_2);
  goto u_27;
  j_2 :
  f_2 :
  Return();
  e_2 :
  Epopd(2,0);
  Epopd(1,2);
  b_2 :
  Return();
  a_2 :
  Epopd(0,0);
  Return();
  r_1 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  k_2 :
DOIT_END
