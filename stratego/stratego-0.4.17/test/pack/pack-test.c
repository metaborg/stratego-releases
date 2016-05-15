#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(j_3);
  goto main;
  main :
  Epushd(0,0);
  Cpush(h_0);
  BuildFun("stdin",0);
  Rpush(i_0);
  goto v_11;
  i_0 :
  Rpush(k_0);
  goto b_12;
  k_0 :
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
  Rpush(l_0);
  goto w_11;
  l_0 :
  Cpop();
  goto g_0;
  h_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(m_0);
  goto x_11;
  m_0 :
  g_0 :
  Epopd(0,0);
  Return();
  v_11 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  w_11 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  x_11 :
  Epushd(0,0);
  Tdupl();
  Rpush(n_0);
  goto y_11;
  n_0 :
  BuildInt(1);
  Rpush(o_0);
  goto a_12;
  o_0 :
  Tpop();
  Epopd(0,0);
  Return();
  y_11 :
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
  goto z_11;
  p_0 :
  Tpop();
  Epopd(0,0);
  Return();
  z_11 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  a_12 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  b_12 :
  Epushd(0,1);
  MatchVard(0,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("TNil",0);
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
  Rpush(q_0);
  d_9 :
  Cpush(s_0);
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
  Epushd(4,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  BuildVard(4,2);
  Epopd(4,2);
  Rpush(t_0);
  goto e_12;
  t_0 :
  MatchVard(3,6);
  BuildVard(3,6);
  Epushd(4,0);
  Epushd(5,0);
  Rpush(u_0);
  x_10 :
  Cpush(w_0);
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
  goto v_0;
  w_0 :
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
  Rpush(x_0);
  d_11 :
  Cpush(z_0);
  Rpush(a_1);
  goto c_12;
  a_1 :
  BuildFun("Nil",0);
  Cpop();
  goto y_0;
  z_0 :
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
  Rpush(b_1);
  goto x_10;
  b_1 :
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,2);
  Rpush(c_1);
  goto d_11;
  c_1 :
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
  Rpush(d_1);
  e_11 :
  Cpush(f_1);
  Rpush(g_1);
  goto c_12;
  g_1 :
  BuildVard(8,3);
  Cpop();
  goto e_1;
  f_1 :
  Cpush(i_1);
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
  j_1 :
  MatchFun("Cons",2);
  Cpush(k_1);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto l_1;
  k_1 :
  Arg(1);
  Tdrop();
  goto j_1;
  l_1 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(m_1);
  goto e_11;
  m_1 :
  Cpop();
  goto h_1;
  i_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_1);
  goto e_11;
  n_1 :
  AllBuild();
  h_1 :
  e_1 :
  Return();
  d_1 :
  Epopd(8,4);
  y_0 :
  Return();
  x_0 :
  Epopd(7,0);
  Epopd(6,1);
  v_0 :
  Return();
  u_0 :
  Epopd(5,0);
  Rpush(o_1);
  goto d_12;
  o_1 :
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
  Rpush(p_1);
  g_11 :
  Cpush(r_1);
  Rpush(s_1);
  goto c_12;
  s_1 :
  Cpop();
  goto q_1;
  r_1 :
  Cpush(u_1);
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
  v_1 :
  MatchFun("Cons",2);
  Cpush(w_1);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto x_1;
  w_1 :
  Arg(1);
  Tdrop();
  goto v_1;
  x_1 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(y_1);
  goto g_11;
  y_1 :
  Cpop();
  goto t_1;
  u_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_1);
  goto g_11;
  z_1 :
  AllBuild();
  t_1 :
  q_1 :
  Return();
  p_1 :
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
  Rpush(a_2);
  i_11 :
  Cpush(c_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_2);
  goto i_11;
  d_2 :
  AllBuild();
  Cpop();
  goto b_2;
  c_2 :
  Rpush(e_2);
  goto c_12;
  e_2 :
  BuildVard(5,1);
  b_2 :
  Return();
  a_2 :
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
  Rpush(f_2);
  j_11 :
  Cpush(h_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_2);
  goto j_11;
  i_2 :
  AllBuild();
  Cpop();
  goto g_2;
  h_2 :
  Rpush(j_2);
  goto c_12;
  j_2 :
  BuildVard(6,1);
  g_2 :
  Return();
  f_2 :
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
  Epushd(7,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(7,2);
  Tpush();
  BuildVard(7,3);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,3);
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
  goto r_0;
  s_0 :
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
  r_0 :
  Cpush(l_2);
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
  goto k_2;
  l_2 :
  Rpush(m_2);
  goto d_9;
  m_2 :
  k_2 :
  Return();
  q_0 :
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
  Epopd(0,1);
  Return();
  c_12 :
  MatchFun("Nil",0);
  Return();
  d_12 :
  Epushd(0,0);
  Rpush(p_2);
  u_27 :
  Cpush(r_2);
  Rpush(s_2);
  goto c_12;
  s_2 :
  Cpop();
  goto q_2;
  r_2 :
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
  Rpush(t_2);
  o_11 :
  Cpush(v_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_2);
  goto o_11;
  w_2 :
  AllBuild();
  Cpop();
  goto u_2;
  v_2 :
  Rpush(x_2);
  goto c_12;
  x_2 :
  BuildVard(1,2);
  Rpush(y_2);
  goto u_27;
  y_2 :
  u_2 :
  Return();
  t_2 :
  Epopd(2,0);
  Epopd(1,2);
  q_2 :
  Return();
  p_2 :
  Epopd(0,0);
  Return();
  e_12 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildStr("trm");
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
  Epushd(1,2);
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
  Tpush();
  BuildStr(".");
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(z_2);
  goto f_12;
  z_2 :
  Epopd(1,2);
  Rpush(a_3);
  goto v_11;
  a_3 :
  Epopd(0,0);
  Return();
  f_12 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(b_3);
  u_11 :
  Cpush(d_3);
  Rpush(e_3);
  goto c_12;
  e_3 :
  Cpop();
  goto c_3;
  d_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(f_3);
  goto g_12;
  f_3 :
  OneNextSon();
  Rpush(g_3);
  goto u_11;
  g_3 :
  AllBuild();
  c_3 :
  Return();
  b_3 :
  Epopd(1,0);
  Rpush(h_3);
  goto d_12;
  h_3 :
  Rpush(i_3);
  goto h_12;
  i_3 :
  Epopd(0,0);
  Return();
  g_12 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  h_12 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  j_3 :
DOIT_END
