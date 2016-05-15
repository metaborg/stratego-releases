#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(i_3);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto b_50;
  c_0 :
  Rpush(d_0);
  goto h_50;
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
  goto c_50;
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
  goto d_50;
  f_0 :
  a_0 :
  Epopd(0,0);
  Return();
  b_50 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  c_50 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  d_50 :
  Epushd(0,0);
  Tdupl();
  Rpush(g_0);
  goto e_50;
  g_0 :
  BuildInt(1);
  Rpush(h_0);
  goto g_50;
  h_0 :
  Tpop();
  Epopd(0,0);
  Return();
  e_50 :
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
  goto f_50;
  i_0 :
  Tpop();
  Epopd(0,0);
  Return();
  f_50 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  g_50 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  h_50 :
  Epushd(0,2);
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
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,2);
  Epushd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(j_0);
  j_47 :
  Cpush(l_0);
  Epushd(3,9);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,5);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(3,4);
  Tpush();
  BuildVard(3,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(4,0);
  Rpush(m_0);
  j_49 :
  Cpush(o_0);
  Epushd(5,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(6,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Module",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epopd(6,1);
  Tpop();
  BuildVard(5,2);
  Epopd(5,2);
  Cpop();
  goto n_0;
  o_0 :
  Epushd(5,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchVard(5,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,2);
  Rpush(p_0);
  goto j_49;
  p_0 :
  n_0 :
  Return();
  m_0 :
  Epopd(4,0);
  MatchVard(3,6);
  BuildVard(3,6);
  Epushd(4,0);
  Epushd(5,0);
  Rpush(q_0);
  k_49 :
  Cpush(s_0);
  Epushd(6,2);
  MatchFun("Imports",1);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  BuildVard(6,1);
  MatchVard(6,2);
  BuildVard(6,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,2);
  Cpop();
  goto r_0;
  s_0 :
  Epushd(6,1);
  Epushd(7,1);
  MatchVard(7,1);
  Tdupl();
  BuildVard(7,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epopd(7,1);
  BuildVard(6,1);
  Epushd(7,0);
  Rpush(t_0);
  l_49 :
  Cpush(v_0);
  Rpush(w_0);
  goto i_50;
  w_0 :
  BuildFun("Nil",0);
  Cpop();
  goto u_0;
  v_0 :
  Epushd(8,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(8,1);
  Tpop();
  Arg(1);
  MatchVard(8,2);
  Tpop();
  Epushd(9,1);
  BuildVard(8,1);
  Rpush(x_0);
  goto k_49;
  x_0 :
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,2);
  Rpush(y_0);
  goto l_49;
  y_0 :
  MatchVard(10,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(10,1);
  Epopd(9,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(8,4);
  Rpush(z_0);
  m_49 :
  Cpush(b_1);
  Rpush(c_1);
  goto i_50;
  c_1 :
  BuildVard(8,3);
  Cpop();
  goto a_1;
  b_1 :
  Cpush(e_1);
  Epushd(9,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchVard(9,1);
  Tpop();
  Tdupl();
  BuildVard(8,3);
  Epushd(10,0);
  Tdupl();
  f_1 :
  MatchFun("Cons",2);
  Cpush(g_1);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto h_1;
  g_1 :
  Arg(1);
  Tdrop();
  goto f_1;
  h_1 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(i_1);
  goto m_49;
  i_1 :
  Cpop();
  goto d_1;
  e_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_1);
  goto m_49;
  j_1 :
  AllBuild();
  d_1 :
  a_1 :
  Return();
  z_0 :
  Epopd(8,4);
  u_0 :
  Return();
  t_0 :
  Epopd(7,0);
  Epopd(6,1);
  r_0 :
  Return();
  q_0 :
  Epopd(5,0);
  Rpush(k_1);
  goto j_50;
  k_1 :
  Epopd(4,0);
  MatchVard(3,7);
  BuildVard(3,7);
  Tpush();
  BuildVard(3,8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(4,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(l_1);
  o_49 :
  Cpush(n_1);
  Rpush(o_1);
  goto i_50;
  o_1 :
  Cpop();
  goto m_1;
  n_1 :
  Cpush(q_1);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(4,1);
  Epushd(6,0);
  Tdupl();
  r_1 :
  MatchFun("Cons",2);
  Cpush(s_1);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto t_1;
  s_1 :
  Arg(1);
  Tdrop();
  goto r_1;
  t_1 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(u_1);
  goto o_49;
  u_1 :
  Cpop();
  goto p_1;
  q_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_1);
  goto o_49;
  v_1 :
  AllBuild();
  p_1 :
  m_1 :
  Return();
  l_1 :
  Epopd(4,2);
  MatchVard(3,9);
  Tpop();
  Epushd(4,1);
  BuildVard(3,9);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(5,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(5,2);
  Epushd(6,0);
  Rpush(w_1);
  q_49 :
  Cpush(y_1);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_1);
  goto q_49;
  z_1 :
  AllBuild();
  Cpop();
  goto x_1;
  y_1 :
  Rpush(a_2);
  goto i_50;
  a_2 :
  BuildVard(5,1);
  x_1 :
  Return();
  w_1 :
  Epopd(6,0);
  Epopd(5,2);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,9);
  Tpush();
  BuildVard(3,8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(6,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(6,2);
  Epushd(7,0);
  Rpush(b_2);
  r_49 :
  Cpush(d_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_2);
  goto r_49;
  e_2 :
  AllBuild();
  Cpop();
  goto c_2;
  d_2 :
  Rpush(f_2);
  goto i_50;
  f_2 :
  BuildVard(6,1);
  c_2 :
  Return();
  b_2 :
  Epopd(7,0);
  Epopd(6,2);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(3,4);
  Tpush();
  BuildVard(3,6);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(7,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchVard(7,2);
  Tpop();
  BuildVard(7,2);
  Epopd(7,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(7,2);
  MatchFun("Module",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchVard(7,2);
  Tpop();
  BuildVard(7,2);
  Epushd(8,0);
  Rpush(g_2);
  s_49 :
  Cpush(i_2);
  Rpush(j_2);
  goto i_50;
  j_2 :
  Cpop();
  goto h_2;
  i_2 :
  Cpush(l_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(m_2);
  Tdupl();
  MatchFun("Imports",1);
  Cpop();
  Crestore();
  Cjump();
  m_2 :
  OneNextSon();
  Rpush(n_2);
  goto s_49;
  n_2 :
  AllBuild();
  Cpop();
  goto k_2;
  l_2 :
  Epushd(9,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchVard(9,2);
  Tpop();
  BuildVard(9,2);
  Epopd(9,2);
  Rpush(o_2);
  goto s_49;
  o_2 :
  k_2 :
  h_2 :
  Return();
  g_2 :
  Epopd(8,0);
  Epopd(7,2);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_2);
  goto k_50;
  p_2 :
  AllBuild();
  AllBuild();
  Epushd(7,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(7,2);
  Epushd(8,0);
  Rpush(q_2);
  t_49 :
  Cpush(s_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_2);
  goto t_49;
  t_2 :
  AllBuild();
  Cpop();
  goto r_2;
  s_2 :
  Rpush(u_2);
  goto i_50;
  u_2 :
  BuildVard(7,1);
  r_2 :
  Return();
  q_2 :
  Epopd(8,0);
  Epopd(7,2);
  MatchVard(6,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(3,5);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,9);
  Cpop();
  goto k_0;
  l_0 :
  Epushd(3,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,5);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildVard(3,4);
  Tpush();
  BuildVard(3,5);
  Tpush();
  BuildVard(3,6);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,6);
  k_0 :
  Cpush(w_2);
  Epushd(3,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  Arg(1);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  BuildVard(3,3);
  Tpush();
  BuildVard(3,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,4);
  Cpop();
  goto v_2;
  w_2 :
  Rpush(x_2);
  goto j_47;
  x_2 :
  v_2 :
  Return();
  j_0 :
  Epopd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Epopd(1,2);
  Epopd(0,2);
  Return();
  i_50 :
  MatchFun("Nil",0);
  Return();
  j_50 :
  Epushd(0,0);
  Rpush(y_2);
  o_26 :
  Cpush(a_3);
  Rpush(b_3);
  goto i_50;
  b_3 :
  Cpop();
  goto z_2;
  a_3 :
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
  Rpush(c_3);
  a_50 :
  Cpush(e_3);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_3);
  goto a_50;
  f_3 :
  AllBuild();
  Cpop();
  goto d_3;
  e_3 :
  Rpush(g_3);
  goto i_50;
  g_3 :
  BuildVard(1,1);
  Rpush(h_3);
  goto o_26;
  h_3 :
  d_3 :
  Return();
  c_3 :
  Epopd(2,0);
  Epopd(1,2);
  z_2 :
  Return();
  y_2 :
  Epopd(0,0);
  Return();
  k_50 :
  MatchFun("TNil",0);
  Return();
  i_3 :
DOIT_END
