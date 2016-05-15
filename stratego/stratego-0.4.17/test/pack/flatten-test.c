#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(s_3);
  goto main;
  main :
  Epushd(0,0);
  Cpush(h_0);
  BuildFun("stdin",0);
  Rpush(i_0);
  goto t_14;
  i_0 :
  Rpush(l_0);
  goto f_15;
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
  goto u_14;
  m_0 :
  Cpop();
  goto g_0;
  h_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(n_0);
  goto x_14;
  n_0 :
  g_0 :
  Epopd(0,0);
  Return();
  t_14 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  u_14 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  x_14 :
  Epushd(0,0);
  Tdupl();
  Rpush(o_0);
  goto y_14;
  o_0 :
  BuildInt(1);
  Rpush(p_0);
  goto e_15;
  p_0 :
  Tpop();
  Epopd(0,0);
  Return();
  y_14 :
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
  goto z_14;
  q_0 :
  Tpop();
  Epopd(0,0);
  Return();
  z_14 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  e_15 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  f_15 :
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
  Rpush(r_0);
  a_12 :
  Cpush(t_0);
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
  Rpush(u_0);
  c_14 :
  Cpush(w_0);
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
  goto v_0;
  w_0 :
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
  Rpush(x_0);
  goto c_14;
  x_0 :
  v_0 :
  Return();
  u_0 :
  Epopd(4,0);
  MatchVard(3,6);
  BuildVard(3,6);
  Epushd(4,0);
  Epushd(5,0);
  Rpush(y_0);
  d_14 :
  Cpush(a_1);
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
  goto z_0;
  a_1 :
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
  Rpush(b_1);
  e_14 :
  Cpush(d_1);
  Rpush(e_1);
  goto g_15;
  e_1 :
  BuildFun("Nil",0);
  Cpop();
  goto c_1;
  d_1 :
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
  Rpush(f_1);
  goto d_14;
  f_1 :
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,2);
  Rpush(g_1);
  goto e_14;
  g_1 :
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
  Rpush(h_1);
  f_14 :
  Cpush(j_1);
  Rpush(k_1);
  goto g_15;
  k_1 :
  BuildVard(8,3);
  Cpop();
  goto i_1;
  j_1 :
  Cpush(m_1);
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
  n_1 :
  MatchFun("Cons",2);
  Cpush(o_1);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto p_1;
  o_1 :
  Arg(1);
  Tdrop();
  goto n_1;
  p_1 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(q_1);
  goto f_14;
  q_1 :
  Cpop();
  goto l_1;
  m_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_1);
  goto f_14;
  r_1 :
  AllBuild();
  l_1 :
  i_1 :
  Return();
  h_1 :
  Epopd(8,4);
  c_1 :
  Return();
  b_1 :
  Epopd(7,0);
  Epopd(6,1);
  z_0 :
  Return();
  y_0 :
  Epopd(5,0);
  Rpush(s_1);
  goto h_15;
  s_1 :
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
  Rpush(t_1);
  i_14 :
  Cpush(v_1);
  Rpush(w_1);
  goto g_15;
  w_1 :
  Cpop();
  goto u_1;
  v_1 :
  Cpush(y_1);
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
  z_1 :
  MatchFun("Cons",2);
  Cpush(a_2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto b_2;
  a_2 :
  Arg(1);
  Tdrop();
  goto z_1;
  b_2 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(c_2);
  goto i_14;
  c_2 :
  Cpop();
  goto x_1;
  y_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_2);
  goto i_14;
  d_2 :
  AllBuild();
  x_1 :
  u_1 :
  Return();
  t_1 :
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
  Rpush(e_2);
  k_14 :
  Cpush(g_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_2);
  goto k_14;
  h_2 :
  AllBuild();
  Cpop();
  goto f_2;
  g_2 :
  Rpush(i_2);
  goto g_15;
  i_2 :
  BuildVard(5,1);
  f_2 :
  Return();
  e_2 :
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
  Rpush(j_2);
  l_14 :
  Cpush(l_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_2);
  goto l_14;
  m_2 :
  AllBuild();
  Cpop();
  goto k_2;
  l_2 :
  Rpush(n_2);
  goto g_15;
  n_2 :
  BuildVard(6,1);
  k_2 :
  Return();
  j_2 :
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
  Rpush(o_2);
  m_14 :
  Cpush(q_2);
  Rpush(r_2);
  goto g_15;
  r_2 :
  Cpop();
  goto p_2;
  q_2 :
  Cpush(t_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(u_2);
  Tdupl();
  MatchFun("Imports",1);
  Cpop();
  Crestore();
  Cjump();
  u_2 :
  OneNextSon();
  Rpush(v_2);
  goto m_14;
  v_2 :
  AllBuild();
  Cpop();
  goto s_2;
  t_2 :
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
  Rpush(w_2);
  goto m_14;
  w_2 :
  s_2 :
  p_2 :
  Return();
  o_2 :
  Epopd(8,0);
  Epopd(7,2);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_2);
  goto i_15;
  x_2 :
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
  Rpush(y_2);
  n_14 :
  Cpush(a_3);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_3);
  goto n_14;
  b_3 :
  AllBuild();
  Cpop();
  goto z_2;
  a_3 :
  Rpush(c_3);
  goto g_15;
  c_3 :
  BuildVard(7,1);
  z_2 :
  Return();
  y_2 :
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
  goto s_0;
  t_0 :
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
  s_0 :
  Cpush(e_3);
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
  goto d_3;
  e_3 :
  Rpush(f_3);
  goto a_12;
  f_3 :
  d_3 :
  Return();
  r_0 :
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
  g_15 :
  MatchFun("Nil",0);
  Return();
  h_15 :
  Epushd(0,0);
  Rpush(g_3);
  b_28 :
  Cpush(i_3);
  Rpush(j_3);
  goto g_15;
  j_3 :
  Cpop();
  goto h_3;
  i_3 :
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
  Rpush(m_3);
  s_14 :
  Cpush(o_3);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_3);
  goto s_14;
  p_3 :
  AllBuild();
  Cpop();
  goto n_3;
  o_3 :
  Rpush(q_3);
  goto g_15;
  q_3 :
  BuildVard(1,2);
  Rpush(r_3);
  goto b_28;
  r_3 :
  n_3 :
  Return();
  m_3 :
  Epopd(2,0);
  Epopd(1,2);
  h_3 :
  Return();
  g_3 :
  Epopd(0,0);
  Return();
  i_15 :
  MatchFun("TNil",0);
  Return();
  s_3 :
DOIT_END
