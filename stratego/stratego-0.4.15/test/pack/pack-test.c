#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(a_3);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto s_46;
  c_0 :
  Rpush(d_0);
  goto y_46;
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
  goto t_46;
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
  goto u_46;
  f_0 :
  a_0 :
  Epopd(0,0);
  Return();
  s_46 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  t_46 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  u_46 :
  Epushd(0,0);
  Tdupl();
  Rpush(g_0);
  goto v_46;
  g_0 :
  BuildInt(1);
  Rpush(h_0);
  goto x_46;
  h_0 :
  Tpop();
  Epopd(0,0);
  Return();
  v_46 :
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
  goto w_46;
  i_0 :
  Tpop();
  Epopd(0,0);
  Return();
  w_46 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  x_46 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  y_46 :
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
  Rpush(j_0);
  f_44 :
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
  Rpush(m_0);
  goto b_47;
  m_0 :
  MatchVard(3,6);
  BuildVard(3,6);
  Epushd(4,0);
  Epushd(5,0);
  Rpush(n_0);
  x_45 :
  Cpush(p_0);
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
  goto o_0;
  p_0 :
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
  Rpush(q_0);
  y_45 :
  Cpush(s_0);
  Rpush(t_0);
  goto z_46;
  t_0 :
  BuildFun("Nil",0);
  Cpop();
  goto r_0;
  s_0 :
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
  Rpush(u_0);
  goto x_45;
  u_0 :
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,2);
  Rpush(v_0);
  goto y_45;
  v_0 :
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
  Rpush(w_0);
  z_45 :
  Cpush(y_0);
  Rpush(z_0);
  goto z_46;
  z_0 :
  BuildVard(8,3);
  Cpop();
  goto x_0;
  y_0 :
  Cpush(b_1);
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
  c_1 :
  MatchFun("Cons",2);
  Cpush(d_1);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto e_1;
  d_1 :
  Arg(1);
  Tdrop();
  goto c_1;
  e_1 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(f_1);
  goto z_45;
  f_1 :
  Cpop();
  goto a_1;
  b_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_1);
  goto z_45;
  g_1 :
  AllBuild();
  a_1 :
  x_0 :
  Return();
  w_0 :
  Epopd(8,4);
  r_0 :
  Return();
  q_0 :
  Epopd(7,0);
  Epopd(6,1);
  o_0 :
  Return();
  n_0 :
  Epopd(5,0);
  Rpush(h_1);
  goto a_47;
  h_1 :
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
  Rpush(i_1);
  b_46 :
  Cpush(k_1);
  Rpush(l_1);
  goto z_46;
  l_1 :
  Cpop();
  goto j_1;
  k_1 :
  Cpush(n_1);
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
  o_1 :
  MatchFun("Cons",2);
  Cpush(p_1);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto q_1;
  p_1 :
  Arg(1);
  Tdrop();
  goto o_1;
  q_1 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(r_1);
  goto b_46;
  r_1 :
  Cpop();
  goto m_1;
  n_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto b_46;
  s_1 :
  AllBuild();
  m_1 :
  j_1 :
  Return();
  i_1 :
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
  Rpush(t_1);
  d_46 :
  Cpush(v_1);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_1);
  goto d_46;
  w_1 :
  AllBuild();
  Cpop();
  goto u_1;
  v_1 :
  Rpush(x_1);
  goto z_46;
  x_1 :
  BuildVard(5,1);
  u_1 :
  Return();
  t_1 :
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
  Rpush(y_1);
  e_46 :
  Cpush(a_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_2);
  goto e_46;
  b_2 :
  AllBuild();
  Cpop();
  goto z_1;
  a_2 :
  Rpush(c_2);
  goto z_46;
  c_2 :
  BuildVard(6,1);
  z_1 :
  Return();
  y_1 :
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
  Cpush(e_2);
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
  goto d_2;
  e_2 :
  Rpush(f_2);
  goto f_44;
  f_2 :
  d_2 :
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
  Epopd(0,1);
  Return();
  z_46 :
  MatchFun("Nil",0);
  Return();
  a_47 :
  Epushd(0,0);
  Rpush(g_2);
  h_26 :
  Cpush(i_2);
  Rpush(j_2);
  goto z_46;
  j_2 :
  Cpop();
  goto h_2;
  i_2 :
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
  Rpush(k_2);
  l_46 :
  Cpush(m_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_2);
  goto l_46;
  n_2 :
  AllBuild();
  Cpop();
  goto l_2;
  m_2 :
  Rpush(o_2);
  goto z_46;
  o_2 :
  BuildVard(1,1);
  Rpush(p_2);
  goto h_26;
  p_2 :
  l_2 :
  Return();
  k_2 :
  Epopd(2,0);
  Epopd(1,2);
  h_2 :
  Return();
  g_2 :
  Epopd(0,0);
  Return();
  b_47 :
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
  Rpush(q_2);
  goto c_47;
  q_2 :
  Epopd(1,2);
  Rpush(r_2);
  goto s_46;
  r_2 :
  Epopd(0,0);
  Return();
  c_47 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(s_2);
  r_46 :
  Cpush(u_2);
  Rpush(v_2);
  goto z_46;
  v_2 :
  Cpop();
  goto t_2;
  u_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(w_2);
  goto d_47;
  w_2 :
  OneNextSon();
  Rpush(x_2);
  goto r_46;
  x_2 :
  AllBuild();
  t_2 :
  Return();
  s_2 :
  Epopd(1,0);
  Rpush(y_2);
  goto a_47;
  y_2 :
  Rpush(z_2);
  goto e_47;
  z_2 :
  Epopd(0,0);
  Return();
  d_47 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  e_47 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  a_3 :
DOIT_END
