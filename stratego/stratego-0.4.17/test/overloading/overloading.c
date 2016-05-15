#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(o_1);
  goto main;
  main :
  Epushd(0,0);
  Cpush(s_0);
  BuildFun("stdin",0);
  Rpush(t_0);
  goto i_0;
  t_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  MatchFun("F",1);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  MatchFun("A",0);
  BuildFun("B",0);
  Epopd(2,0);
  AllBuild();
  Epopd(1,0);
  Rpush(u_0);
  goto o_0;
  u_0 :
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  MatchFun("G",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  MatchFun("A",0);
  BuildFun("B",0);
  Epopd(2,0);
  OneNextSon();
  Epushd(2,0);
  MatchFun("B",0);
  BuildFun("C",0);
  Epopd(2,0);
  AllBuild();
  Epopd(1,0);
  Rpush(v_0);
  goto p_0;
  v_0 :
  OneNextSon();
  Rpush(w_0);
  goto q_0;
  w_0 :
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
  Rpush(x_0);
  goto j_0;
  x_0 :
  Cpop();
  goto r_0;
  s_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(y_0);
  goto k_0;
  y_0 :
  r_0 :
  Epopd(0,0);
  Return();
  i_0 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  j_0 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  k_0 :
  Epushd(0,0);
  Tdupl();
  Rpush(z_0);
  goto l_0;
  z_0 :
  BuildInt(1);
  Rpush(a_1);
  goto n_0;
  a_1 :
  Tpop();
  Epopd(0,0);
  Return();
  l_0 :
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
  Rpush(b_1);
  goto m_0;
  b_1 :
  Tpop();
  Epopd(0,0);
  Return();
  m_0 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  n_0 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  o_0 :
  Epushd(0,2);
  MatchFun("F",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tdupl();
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(c_1);
  g_0 :
  Cpush(e_1);
  IsAppl();
  OneInit();
  f_1 :
  OneNextSon();
  Cpush(f_1);
  Rpush(h_1);
  goto g_0;
  h_1 :
  Cpop();
  OneBuild();
  Cpop();
  goto d_1;
  e_1 :
  MatchFun("B",0);
  BuildFun("D",0);
  d_1 :
  Return();
  c_1 :
  Epopd(1,0);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,2);
  Tpush();
  BuildFun("F",1);
  Epopd(0,2);
  Return();
  p_0 :
  Epushd(0,3);
  MatchFun("G",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tdupl();
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(i_1);
  h_0 :
  Cpush(k_1);
  MatchFun("B",0);
  BuildFun("D",0);
  Cpop();
  goto j_1;
  k_1 :
  IsAppl();
  OneInit();
  l_1 :
  OneNextSon();
  Cpush(l_1);
  Rpush(n_1);
  goto h_0;
  n_1 :
  Cpop();
  OneBuild();
  j_1 :
  Return();
  i_1 :
  Epopd(1,0);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("G",2);
  Epopd(0,3);
  Return();
  q_0 :
  MatchFun("Nil",0);
  Return();
  o_1 :
DOIT_END
