#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(q_11);
  goto main;
  main :
  Epushd(0,13);
  Rpush(z_0);
  goto q_23;
  z_0 :
  MatchVard(0,8);
  Epushd(1,0);
  Cpush(b_1);
  Epushd(2,0);
  Epushd(3,0);
  Tdupl();
  c_1 :
  MatchFun("Cons",2);
  Cpush(d_1);
  Arg(0);
  Cpush(g_1);
  Rpush(h_1);
  goto z_23;
  h_1 :
  Cpop();
  goto f_1;
  g_1 :
  Cpush(j_1);
  MatchFun("Undefined",1);
  Cpop();
  goto i_1;
  j_1 :
  Rpush(k_1);
  goto a_24;
  k_1 :
  i_1 :
  f_1 :
  Tpop();
  Cpop();
  goto e_1;
  d_1 :
  Arg(1);
  Tdrop();
  goto c_1;
  e_1 :
  Tpop();
  Epopd(3,0);
  Rpush(l_1);
  goto b_24;
  l_1 :
  Epopd(2,0);
  Cpop();
  goto a_1;
  b_1 :
  a_1 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(m_1);
  q_0 :
  Cpush(o_1);
  Rpush(p_1);
  goto r_23;
  p_1 :
  Cpop();
  goto n_1;
  o_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(r_1);
  Cpush(t_1);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,12);
  Tpop();
  Cpop();
  goto s_1;
  t_1 :
  Cpush(v_1);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Cpop();
  goto u_1;
  v_1 :
  Cpush(x_1);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Cpop();
  goto w_1;
  x_1 :
  Cpush(z_1);
  MatchFun("Binary",1);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Cpop();
  goto y_1;
  z_1 :
  MatchFun("Dependency",1);
  Arg(0);
  MatchVard(0,7);
  Tpop();
  y_1 :
  w_1 :
  u_1 :
  s_1 :
  Cpop();
  goto q_1;
  r_1 :
  q_1 :
  Epopd(2,0);
  OneNextSon();
  Rpush(a_2);
  goto q_0;
  a_2 :
  AllBuild();
  n_1 :
  Return();
  m_1 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(b_2);
  r_0 :
  Cpush(d_2);
  Rpush(e_2);
  goto r_23;
  e_2 :
  Cpop();
  goto c_2;
  d_2 :
  Cpush(i_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("Include",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,1);
  Epopd(2,1);
  OneNextSon();
  Rpush(j_2);
  goto r_0;
  j_2 :
  AllBuild();
  Cpop();
  goto f_2;
  i_2 :
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Rpush(k_2);
  goto r_0;
  k_2 :
  f_2 :
  c_2 :
  Return();
  b_2 :
  Epopd(1,0);
  MatchVard(0,3);
  Cpush(m_2);
  BuildVard(0,1);
  Cpop();
  goto l_2;
  m_2 :
  BuildFun("stdin",0);
  l_2 :
  MatchVard(0,4);
  Cpush(o_2);
  BuildVard(0,2);
  Cpop();
  goto n_2;
  o_2 :
  BuildFun("stdout",0);
  n_2 :
  MatchVard(0,9);
  BuildVard(0,4);
  Epushd(1,0);
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
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
  Epopd(2,1);
  Epushd(2,2);
  Epushd(3,3);
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
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
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
  Rpush(p_2);
  c_11 :
  Cpush(r_2);
  Epushd(4,9);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,4);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,5);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(4,4);
  Tpush();
  BuildVard(4,5);
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
  MatchVard(5,1);
  Tpop();
  BuildVard(5,2);
  Epopd(5,2);
  Epushd(5,1);
  Epushd(6,0);
  Rpush(s_2);
  goto q_25;
  s_2 :
  Epushd(7,3);
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(7,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(7,1);
  BuildFun("TNil",0);
  BuildStr("r");
  MatchVard(9,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(9,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
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
  BuildVard(7,2);
  Tpush();
  BuildStr(".");
  Tpush();
  BuildVard(7,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(t_2);
  goto f_24;
  t_2 :
  Epopd(7,3);
  Epopd(6,0);
  Epushd(6,0);
  Cpush(v_2);
  Rpush(w_2);
  goto v_24;
  w_2 :
  Cpop();
  goto u_2;
  v_2 :
  Cpush(y_2);
  Epushd(7,3);
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(7,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(7,1);
  BuildVard(0,3);
  MatchVard(9,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(9,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
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
  BuildVard(7,3);
  Rpush(z_2);
  u_13 :
  Cpush(b_3);
  Epushd(8,1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(8,1);
  Tpop();
  Arg(1);
  Tpop();
  BuildVard(8,1);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(c_3);
  goto f_24;
  c_3 :
  Rpush(d_3);
  goto v_24;
  d_3 :
  Epopd(8,1);
  Cpop();
  goto a_3;
  b_3 :
  Epushd(8,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(8,1);
  Tpop();
  Arg(1);
  MatchVard(8,2);
  Tpop();
  BuildVard(8,2);
  Epopd(8,2);
  Rpush(e_3);
  goto u_13;
  e_3 :
  a_3 :
  Return();
  z_2 :
  Epopd(7,3);
  Cpop();
  goto x_2;
  y_2 :
  Epushd(7,1);
  MatchVard(7,1);
  BuildStr("no such file: ");
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(f_3);
  goto w_24;
  f_3 :
  Epopd(7,1);
  x_2 :
  u_2 :
  Epopd(6,0);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(5,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildVard(5,1);
  Epushd(8,3);
  MatchVard(8,1);
  Tdupl();
  Epushd(9,1);
  BuildFun("TNil",0);
  Rpush(g_3);
  goto z_24;
  g_3 :
  Rpush(h_3);
  goto a_25;
  h_3 :
  MatchVard(9,1);
  BuildStr("pack-stratego");
  Tpush();
  BuildVard(9,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Rpush(i_3);
  goto y_24;
  i_3 :
  MatchVard(8,3);
  BuildStr("parse-mod");
  Tpush();
  BuildStr("-silent");
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(8,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(j_3);
  goto j_25;
  j_3 :
  BuildVard(8,3);
  Rpush(k_3);
  goto k_25;
  k_3 :
  MatchVard(8,2);
  BuildVard(8,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(l_3);
  goto l_25;
  l_3 :
  Tpop();
  BuildVard(8,2);
  Epopd(8,3);
  MatchVard(7,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,1);
  MatchVard(4,6);
  BuildVard(4,6);
  Rpush(m_3);
  goto m_25;
  m_3 :
  MatchVard(4,7);
  BuildVard(4,7);
  Tpush();
  BuildVard(4,8);
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
  Rpush(n_3);
  v_13 :
  Cpush(p_3);
  Rpush(q_3);
  goto r_23;
  q_3 :
  Cpop();
  goto o_3;
  p_3 :
  Cpush(s_3);
  Epushd(6,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(6,2);
  Tpop();
  Arg(1);
  MatchVard(6,1);
  Tpop();
  Tdupl();
  BuildVard(5,1);
  Epushd(7,0);
  Tdupl();
  t_3 :
  MatchFun("Cons",2);
  Cpush(u_3);
  Arg(0);
  MatchVard(6,2);
  Tpop();
  Cpop();
  goto v_3;
  u_3 :
  Arg(1);
  Tdrop();
  goto t_3;
  v_3 :
  Tpop();
  Epopd(7,0);
  Tpop();
  BuildVard(6,1);
  Epopd(6,2);
  Rpush(w_3);
  goto v_13;
  w_3 :
  Cpop();
  goto r_3;
  s_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_3);
  goto v_13;
  x_3 :
  AllBuild();
  r_3 :
  o_3 :
  Return();
  n_3 :
  Epopd(5,2);
  MatchVard(4,9);
  Tpop();
  Epushd(5,1);
  BuildVard(4,9);
  Tpush();
  BuildVard(4,1);
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
  Rpush(y_3);
  d_14 :
  Cpush(a_4);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_4);
  goto d_14;
  b_4 :
  AllBuild();
  Cpop();
  goto z_3;
  a_4 :
  Rpush(c_4);
  goto r_23;
  c_4 :
  BuildVard(6,1);
  z_3 :
  Return();
  y_3 :
  Epopd(7,0);
  Epopd(6,2);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,9);
  Tpush();
  BuildVard(4,8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  Rpush(d_4);
  e_14 :
  Cpush(f_4);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_4);
  goto e_14;
  g_4 :
  AllBuild();
  Cpop();
  goto e_4;
  f_4 :
  Rpush(h_4);
  goto r_23;
  h_4 :
  BuildVard(7,1);
  e_4 :
  Return();
  d_4 :
  Epopd(8,0);
  Epopd(7,2);
  MatchVard(6,1);
  Epushd(7,1);
  BuildVard(4,4);
  Tpush();
  BuildVard(4,6);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(8,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,2);
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
  Tpop();
  BuildVard(8,2);
  Tpush();
  BuildVard(8,3);
  Tpush();
  BuildFun("Cons",2);
  Epopd(8,3);
  MatchVard(7,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildVard(4,5);
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildVard(4,3);
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
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,1);
  Epopd(4,9);
  Cpop();
  goto q_2;
  r_2 :
  Epushd(4,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,5);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildVard(4,5);
  Tpush();
  BuildVard(4,6);
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
  Epopd(4,6);
  q_2 :
  Cpush(j_4);
  Epushd(4,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  BuildVard(4,3);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,4);
  Cpop();
  goto i_4;
  j_4 :
  Rpush(k_4);
  goto c_11;
  k_4 :
  i_4 :
  Return();
  p_2 :
  Epopd(3,3);
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
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(l_4);
  goto n_25;
  l_4 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_4);
  goto o_25;
  m_4 :
  OneNextSon();
  Rpush(n_4);
  goto p_25;
  n_4 :
  AllBuild();
  AllBuild();
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,11);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,9);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpush(p_4);
  BuildVard(0,5);
  Rpush(q_4);
  goto d_24;
  q_4 :
  Cpop();
  goto o_4;
  p_4 :
  Rpush(r_4);
  goto e_24;
  r_4 :
  o_4 :
  Epushd(1,0);
  Cpush(t_4);
  Cpush(v_4);
  BuildVard(0,7);
  Cpop();
  goto u_4;
  v_4 :
  Cpush(w_4);
  Tdupl();
  BuildVard(0,8);
  Epushd(2,0);
  Tdupl();
  x_4 :
  MatchFun("Cons",2);
  Cpush(y_4);
  Arg(0);
  MatchFun("NoDependency",0);
  Tpop();
  Cpop();
  goto z_4;
  y_4 :
  Arg(1);
  Tdrop();
  goto x_4;
  z_4 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  w_4 :
  BuildVard(0,9);
  u_4 :
  MatchVard(0,10);
  BuildVard(0,10);
  Tpush();
  BuildVard(0,11);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(2,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Rpush(a_5);
  goto q_25;
  a_5 :
  MatchVard(2,3);
  BuildVard(2,3);
  Tpush();
  BuildStr("dep");
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  Rpush(b_5);
  goto f_24;
  b_5 :
  Epopd(3,2);
  Rpush(c_5);
  goto n_24;
  c_5 :
  MatchVard(2,2);
  Epushd(3,1);
  BuildVard(2,3);
  Tpush();
  BuildStr(":");
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epushd(4,0);
  Cpush(e_5);
  Rpush(f_5);
  goto r_23;
  f_5 :
  Cpop();
  goto d_5;
  e_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_5);
  g_16 :
  Cpush(i_5);
  Rpush(j_5);
  goto r_23;
  j_5 :
  Cpop();
  goto h_5;
  i_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_5);
  goto g_16;
  k_5 :
  AllBuild();
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,2);
  Tpop();
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr(" ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,2);
  h_5 :
  Return();
  g_5 :
  AllBuild();
  d_5 :
  Epopd(4,0);
  MatchVard(3,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Rpush(l_5);
  goto p_24;
  l_5 :
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,4);
  Cpop();
  goto s_4;
  t_4 :
  s_4 :
  Epopd(1,0);
  Rpush(m_5);
  goto o_24;
  m_5 :
  MatchVard(0,13);
  BuildFun("stderr",0);
  Tpush();
  BuildVard(0,12);
  Tpush();
  BuildStr(" (");
  Tpush();
  BuildVard(0,13);
  Tpush();
  BuildStr(" secs)");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(n_5);
  goto p_24;
  n_5 :
  Epopd(0,13);
  Return();
  q_23 :
  Epushd(0,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Program",1);
  Epopd(1,1);
  OneNextSon();
  Rpush(o_5);
  j_18 :
  Cpush(q_5);
  Cpush(s_5);
  Rpush(t_5);
  goto r_23;
  t_5 :
  Cpop();
  goto r_5;
  s_5 :
  Cpush(v_5);
  Rpush(w_5);
  goto y_23;
  w_5 :
  Cpop();
  goto u_5;
  v_5 :
  Cpush(y_5);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("-I");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Include",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto x_5;
  y_5 :
  Cpush(a_6);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("-nodep");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("NoDependency",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto z_5;
  a_6 :
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("-dep");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Dependency",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  z_5 :
  x_5 :
  u_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_6);
  goto j_18;
  b_6 :
  AllBuild();
  r_5 :
  Cpop();
  goto p_5;
  q_5 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Undefined",1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,2);
  p_5 :
  Return();
  o_5 :
  AllBuild();
  Epopd(0,0);
  Return();
  r_23 :
  MatchFun("Nil",0);
  Return();
  y_23 :
  Epushd(0,0);
  Cpush(d_6);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("-S");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Silent",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto c_6;
  d_6 :
  Cpush(f_6);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("--silent");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Silent",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto e_6;
  f_6 :
  Cpush(h_6);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("--verbose");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Verbose",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto g_6;
  h_6 :
  Cpush(j_6);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("-v");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Version",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto i_6;
  j_6 :
  Cpush(l_6);
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  MatchString("--version");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Version",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto k_6;
  l_6 :
  Cpush(n_6);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("@version");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("DeclVersion",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto m_6;
  n_6 :
  Cpush(p_6);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("-i");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto o_6;
  p_6 :
  Cpush(r_6);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("--input");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto q_6;
  r_6 :
  Cpush(t_6);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("-o");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Output",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto s_6;
  t_6 :
  Cpush(v_6);
  Epushd(1,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,3);
  MatchString("--output");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Output",1);
  Epopd(3,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto u_6;
  v_6 :
  Epushd(1,10);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  MatchVard(1,4);
  MatchVard(1,6);
  MatchVard(1,8);
  MatchVard(1,10);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  MatchVard(1,3);
  MatchVard(1,5);
  MatchVard(1,7);
  MatchVard(1,9);
  Tpop();
  Cpush(c_7);
  Rpush(d_7);
  goto n_0;
  d_7 :
  Cpop();
  goto b_7;
  c_7 :
  Cpush(f_7);
  Rpush(g_7);
  goto o_0;
  g_7 :
  Cpop();
  goto e_7;
  f_7 :
  Cpush(i_7);
  Rpush(j_7);
  goto s_0;
  j_7 :
  Cpop();
  goto h_7;
  i_7 :
  Cpush(l_7);
  Rpush(m_7);
  goto x_0;
  m_7 :
  Cpop();
  goto k_7;
  l_7 :
  Rpush(n_7);
  goto y_0;
  n_7 :
  k_7 :
  h_7 :
  e_7 :
  b_7 :
  goto a_7;
  y_0 :
  Tdupl();
  BuildVard(1,10);
  MatchString("-?");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,9);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  a_7 :
  goto z_6;
  x_0 :
  Tdupl();
  BuildVard(1,8);
  MatchString("-h");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,7);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  z_6 :
  goto y_6;
  s_0 :
  Tdupl();
  BuildVard(1,6);
  MatchString("--help");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,5);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  y_6 :
  goto x_6;
  o_0 :
  Tdupl();
  BuildVard(1,4);
  MatchString("-s");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Statistics",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  x_6 :
  goto w_6;
  n_0 :
  Tdupl();
  BuildVard(1,2);
  MatchString("-b");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Binary",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Return();
  w_6 :
  Epopd(1,10);
  u_6 :
  s_6 :
  q_6 :
  o_6 :
  m_6 :
  k_6 :
  i_6 :
  g_6 :
  e_6 :
  c_6 :
  Epopd(0,0);
  Return();
  z_23 :
  MatchFun("Help",0);
  Return();
  a_24 :
  MatchFun("Version",0);
  Return();
  b_24 :
  Epushd(0,1);
  Epushd(1,0);
  Tdupl();
  o_7 :
  MatchFun("Cons",2);
  Cpush(p_7);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto q_7;
  p_7 :
  Arg(1);
  Tdrop();
  goto o_7;
  q_7 :
  Tpop();
  Epopd(1,0);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("usage : ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(" [-S] [-I dir] [-i file]");
  Tpush();
  BuildStr(" [-o file] [-b] [-s] [--help|-h|-?]");
  Tpush();
  BuildStr(" [-dep target | -nodep]");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(r_7);
  goto p_24;
  r_7 :
  BuildInt(1);
  Rpush(s_7);
  goto c_24;
  s_7 :
  Epopd(0,1);
  Return();
  c_24 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  d_24 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  e_24 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  f_24 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(t_7);
  w_20 :
  Cpush(v_7);
  Rpush(w_7);
  goto r_23;
  w_7 :
  Cpop();
  goto u_7;
  v_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(x_7);
  goto g_24;
  x_7 :
  OneNextSon();
  Rpush(y_7);
  goto w_20;
  y_7 :
  AllBuild();
  u_7 :
  Return();
  t_7 :
  Epopd(1,0);
  Rpush(z_7);
  goto h_24;
  z_7 :
  Rpush(a_8);
  goto m_24;
  a_8 :
  Epopd(0,0);
  Return();
  g_24 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  h_24 :
  Epushd(0,0);
  Rpush(b_8);
  b_35 :
  Cpush(d_8);
  Rpush(e_8);
  goto r_23;
  e_8 :
  Cpop();
  goto c_8;
  d_8 :
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
  Rpush(f_8);
  z_20 :
  Cpush(h_8);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_8);
  goto z_20;
  i_8 :
  AllBuild();
  Cpop();
  goto g_8;
  h_8 :
  Rpush(j_8);
  goto r_23;
  j_8 :
  BuildVard(1,1);
  Rpush(k_8);
  goto b_35;
  k_8 :
  g_8 :
  Return();
  f_8 :
  Epopd(2,0);
  Epopd(1,2);
  c_8 :
  Return();
  b_8 :
  Epopd(0,0);
  Return();
  m_24 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  n_24 :
  Epushd(0,0);
  _ST_open_file();
  Epopd(0,0);
  Return();
  o_24 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  p_24 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  v_24 :
  Epushd(0,0);
  _ST_file_exists();
  Epopd(0,0);
  Return();
  w_24 :
  Epushd(0,0);
  Tdupl();
  Rpush(o_8);
  goto x_24;
  o_8 :
  BuildInt(1);
  Rpush(p_8);
  goto c_24;
  p_8 :
  Tpop();
  Epopd(0,0);
  Return();
  x_24 :
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
  Rpush(q_8);
  goto p_24;
  q_8 :
  Tpop();
  Epopd(0,0);
  Return();
  y_24 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(r_8);
  goto g_24;
  r_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_8);
  goto g_24;
  s_8 :
  OneNextSon();
  Rpush(t_8);
  goto p_25;
  t_8 :
  AllBuild();
  AllBuild();
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Epushd(2,0);
  Rpush(u_8);
  f_21 :
  Cpush(w_8);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_8);
  goto f_21;
  x_8 :
  AllBuild();
  Cpop();
  goto v_8;
  w_8 :
  Rpush(y_8);
  goto r_23;
  y_8 :
  BuildVard(1,1);
  v_8 :
  Return();
  u_8 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(z_8);
  goto m_24;
  z_8 :
  Epopd(0,0);
  Return();
  z_24 :
  Epushd(0,0);
  _ST_get_pid();
  Epopd(0,0);
  Return();
  a_25 :
  Epushd(0,0);
  Rpush(a_9);
  k_29 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildInt(10);
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
  Rpush(b_9);
  goto b_25;
  b_9 :
  Epopd(3,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildInt(48);
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
  Rpush(c_9);
  goto c_25;
  c_9 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildFun("TNil",0);
  BuildInt(10);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Rpush(d_9);
  goto e_25;
  d_9 :
  Epopd(4,1);
  Rpush(e_9);
  goto f_25;
  e_9 :
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
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(g_9);
  MatchInt(0);
  BuildFun("Nil",0);
  Cpop();
  goto f_9;
  g_9 :
  Rpush(h_9);
  goto k_29;
  h_9 :
  f_9 :
  OneNextSon();
  Rpush(i_9);
  goto p_25;
  i_9 :
  AllBuild();
  AllBuild();
  Rpush(j_9);
  goto g_25;
  j_9 :
  Return();
  a_9 :
  Rpush(k_9);
  goto i_25;
  k_9 :
  Rpush(l_9);
  goto m_24;
  l_9 :
  Epopd(0,0);
  Return();
  b_25 :
  Epushd(0,0);
  _ST_mod();
  Epopd(0,0);
  Return();
  c_25 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  e_25 :
  Epushd(0,0);
  _ST_div();
  Epopd(0,0);
  Return();
  f_25 :
  Epushd(0,0);
  _ST_int();
  Epopd(0,0);
  Return();
  g_25 :
  Cpush(n_9);
  Epushd(0,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,1);
  Cpop();
  goto m_9;
  n_9 :
  Epushd(0,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,3);
  m_9 :
  Return();
  i_25 :
  Epushd(0,2);
  MatchVard(0,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,0);
  Cpush(p_9);
  o_9 :
  Epushd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
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
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,3);
  Tduplinv();
  goto o_9;
  p_9 :
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
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
  BuildVard(0,2);
  Epopd(0,2);
  Return();
  j_25 :
  Epushd(0,0);
  _ST_call();
  Epopd(0,0);
  Return();
  k_25 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  l_25 :
  Epushd(0,1);
  MatchVard(0,1);
  Tdupl();
  BuildStr("rm");
  Tpush();
  BuildStr("-f");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_9);
  goto j_25;
  q_9 :
  Tpop();
  Epopd(0,1);
  Return();
  m_25 :
  Epushd(0,0);
  Epushd(1,1);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Specification",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Epushd(1,0);
  Rpush(r_9);
  h_22 :
  Cpush(t_9);
  Rpush(u_9);
  goto r_23;
  u_9 :
  Cpop();
  goto s_9;
  t_9 :
  Cpush(w_9);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("Imports",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,1);
  Epopd(2,1);
  OneNextSon();
  Rpush(x_9);
  goto h_22;
  x_9 :
  AllBuild();
  Cpop();
  goto v_9;
  w_9 :
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Rpush(y_9);
  goto h_22;
  y_9 :
  v_9 :
  s_9 :
  Return();
  r_9 :
  Epopd(1,0);
  Rpush(z_9);
  goto h_24;
  z_9 :
  Epopd(0,0);
  Return();
  n_25 :
  Epushd(0,0);
  Rpush(a_10);
  s_22 :
  Cpush(c_10);
  Epushd(1,0);
  MatchFun("Nil",0);
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,0);
  Cpop();
  goto b_10;
  c_10 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(d_10);
  goto s_22;
  d_10 :
  OneNextSon();
  Rpush(e_10);
  goto p_25;
  e_10 :
  AllBuild();
  AllBuild();
  Epushd(1,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,4);
  b_10 :
  Return();
  a_10 :
  Epopd(0,0);
  Return();
  o_25 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(f_10);
  c_23 :
  Cpush(h_10);
  Rpush(i_10);
  goto r_23;
  i_10 :
  Cpop();
  goto g_10;
  h_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("Specification",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,1);
  Rpush(j_10);
  m_23 :
  Cpush(l_10);
  Rpush(m_10);
  goto r_23;
  m_10 :
  Cpop();
  goto k_10;
  l_10 :
  Cpush(o_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(p_10);
  Tdupl();
  MatchFun("Imports",1);
  Cpop();
  Crestore();
  Cjump();
  p_10 :
  OneNextSon();
  Rpush(q_10);
  goto m_23;
  q_10 :
  AllBuild();
  Cpop();
  goto n_10;
  o_10 :
  Epushd(3,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  BuildVard(3,2);
  Epopd(3,2);
  Rpush(r_10);
  goto m_23;
  r_10 :
  n_10 :
  k_10 :
  Return();
  j_10 :
  Epopd(2,1);
  OneNextSon();
  Rpush(s_10);
  goto c_23;
  s_10 :
  AllBuild();
  g_10 :
  Return();
  f_10 :
  Epopd(1,0);
  Rpush(t_10);
  goto h_24;
  t_10 :
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Specification",1);
  Epopd(1,1);
  Epopd(0,0);
  Return();
  p_25 :
  MatchFun("TNil",0);
  Return();
  q_25 :
  Epushd(0,0);
  Rpush(u_10);
  goto g_24;
  u_10 :
  Epushd(1,0);
  Cpush(w_10);
  Rpush(x_10);
  n_23 :
  Cpush(z_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_11);
  goto n_23;
  a_11 :
  AllBuild();
  Cpop();
  goto y_10;
  z_10 :
  MatchFun("Cons",2);
  Arg(0);
  MatchInt(46);
  Tpop();
  Arg(1);
  Tpop();
  BuildFun("Nil",0);
  y_10 :
  Return();
  x_10 :
  Cpop();
  goto v_10;
  w_10 :
  v_10 :
  Epopd(1,0);
  Rpush(b_11);
  goto m_24;
  b_11 :
  Epopd(0,0);
  Return();
  q_11 :
DOIT_END
