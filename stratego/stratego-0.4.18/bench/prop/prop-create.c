#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(v_3);
  goto main;
  main :
  Epushd(0,2);
  Epushd(1,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildFun("Program",1);
  Epopd(2,1);
  OneNextSon();
  Rpush(a_0);
  f_1 :
  Cpush(c_0);
  Cpush(e_0);
  Rpush(f_0);
  goto u_11;
  f_0 :
  Cpop();
  goto d_0;
  e_0 :
  Cpush(h_0);
  Epushd(2,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,3);
  MatchString("-conj");
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Rpush(i_0);
  goto v_11;
  i_0 :
  MatchVard(0,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,1);
  Epopd(2,3);
  Cpop();
  goto g_0;
  h_0 :
  Epushd(2,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,3);
  MatchString("-disj");
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Rpush(j_0);
  goto v_11;
  j_0 :
  MatchVard(0,2);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,1);
  Epopd(2,3);
  g_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_0);
  goto f_1;
  k_0 :
  AllBuild();
  d_0 :
  Cpop();
  goto b_0;
  c_0 :
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Undefined",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,2);
  b_0 :
  Return();
  a_0 :
  AllBuild();
  Epopd(1,0);
  BuildVard(0,2);
  Tpush();
  BuildStr("b");
  Tpush();
  BuildFun("Atom",1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,0);
  Cpush(m_0);
  Epushd(2,2);
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
  Tpush();
  BuildVard(2,2);
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
  Rpush(n_0);
  y_6 :
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
  Tdupl();
  BuildVard(3,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(o_0);
  goto a_12;
  o_0 :
  Tpop();
  Epushd(4,1);
  BuildVard(3,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(p_0);
  goto z_11;
  p_0 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  Tpush();
  BuildStr("a");
  Tpush();
  BuildFun("Atom",1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(8,0);
  Cpush(r_0);
  Epushd(9,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(9,1);
  Tpush();
  BuildVard(9,2);
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
  Rpush(s_0);
  y_7 :
  Epushd(10,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(10,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(t_0);
  goto a_12;
  t_0 :
  Tpop();
  Epushd(11,1);
  BuildVard(10,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(g_1);
  goto z_11;
  g_1 :
  MatchVard(11,1);
  Epushd(12,1);
  BuildVard(10,2);
  Epushd(13,1);
  MatchVard(13,1);
  Epushd(14,1);
  BuildFun("TNil",0);
  Rpush(h_1);
  goto d_12;
  h_1 :
  MatchVard(14,1);
  BuildVard(14,1);
  Tpush();
  BuildVard(13,1);
  Tpush();
  BuildFun("Or",2);
  Epopd(14,1);
  Epopd(13,1);
  MatchVard(12,1);
  BuildVard(11,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildVard(12,1);
  Tpush();
  BuildVard(10,3);
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
  Epopd(12,1);
  Epopd(11,1);
  Epopd(10,3);
  Cpush(j_1);
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(10,2);
  Epopd(10,2);
  Cpop();
  goto i_1;
  j_1 :
  Rpush(k_1);
  goto y_7;
  k_1 :
  i_1 :
  Return();
  s_0 :
  Epopd(9,2);
  Cpop();
  goto q_0;
  r_0 :
  Epushd(9,0);
  Rpush(l_1);
  z_7 :
  Cpush(n_1);
  Epushd(10,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Epopd(10,1);
  Cpop();
  goto m_1;
  n_1 :
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epushd(11,1);
  BuildVard(10,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(o_1);
  goto z_11;
  o_1 :
  MatchVard(11,1);
  Epushd(12,1);
  BuildVard(10,2);
  Epushd(13,1);
  MatchVard(13,1);
  Epushd(14,1);
  BuildFun("TNil",0);
  Rpush(p_1);
  goto d_12;
  p_1 :
  MatchVard(14,1);
  BuildVard(14,1);
  Tpush();
  BuildVard(13,1);
  Tpush();
  BuildFun("Or",2);
  Epopd(14,1);
  Epopd(13,1);
  MatchVard(12,1);
  BuildVard(11,1);
  Tpush();
  BuildVard(12,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(12,1);
  Epopd(11,1);
  Epopd(10,2);
  Rpush(q_1);
  goto z_7;
  q_1 :
  m_1 :
  Return();
  l_1 :
  Epopd(9,0);
  q_0 :
  Epopd(8,0);
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("And",2);
  Epopd(7,1);
  Epopd(6,1);
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(3,3);
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
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,3);
  Cpush(s_1);
  Epushd(3,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
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
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(3,2);
  Epopd(3,2);
  Cpop();
  goto r_1;
  s_1 :
  Rpush(t_1);
  goto y_6;
  t_1 :
  r_1 :
  Return();
  n_0 :
  Epopd(2,2);
  Cpop();
  goto l_0;
  m_0 :
  Epushd(2,0);
  Rpush(u_1);
  y_8 :
  Cpush(w_1);
  Epushd(3,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Epopd(3,1);
  Cpop();
  goto v_1;
  w_1 :
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
  Epushd(4,1);
  BuildVard(3,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(x_1);
  goto z_11;
  x_1 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  Tpush();
  BuildStr("a");
  Tpush();
  BuildFun("Atom",1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(8,0);
  Cpush(z_1);
  Epushd(9,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(9,1);
  Tpush();
  BuildVard(9,2);
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
  Rpush(a_2);
  y_9 :
  Epushd(10,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(10,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(b_2);
  goto a_12;
  b_2 :
  Tpop();
  Epushd(11,1);
  BuildVard(10,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(c_2);
  goto z_11;
  c_2 :
  MatchVard(11,1);
  Epushd(12,1);
  BuildVard(10,2);
  Epushd(13,1);
  MatchVard(13,1);
  Epushd(14,1);
  BuildFun("TNil",0);
  Rpush(d_2);
  goto d_12;
  d_2 :
  MatchVard(14,1);
  BuildVard(14,1);
  Tpush();
  BuildVard(13,1);
  Tpush();
  BuildFun("Or",2);
  Epopd(14,1);
  Epopd(13,1);
  MatchVard(12,1);
  BuildVard(11,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildVard(12,1);
  Tpush();
  BuildVard(10,3);
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
  Epopd(12,1);
  Epopd(11,1);
  Epopd(10,3);
  Cpush(f_2);
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(10,2);
  Epopd(10,2);
  Cpop();
  goto e_2;
  f_2 :
  Rpush(g_2);
  goto y_9;
  g_2 :
  e_2 :
  Return();
  a_2 :
  Epopd(9,2);
  Cpop();
  goto y_1;
  z_1 :
  Epushd(9,0);
  Rpush(h_2);
  z_9 :
  Cpush(j_2);
  Epushd(10,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Epopd(10,1);
  Cpop();
  goto i_2;
  j_2 :
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epushd(11,1);
  BuildVard(10,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(k_2);
  goto z_11;
  k_2 :
  MatchVard(11,1);
  Epushd(12,1);
  BuildVard(10,2);
  Epushd(13,1);
  MatchVard(13,1);
  Epushd(14,1);
  BuildFun("TNil",0);
  Rpush(l_2);
  goto d_12;
  l_2 :
  MatchVard(14,1);
  BuildVard(14,1);
  Tpush();
  BuildVard(13,1);
  Tpush();
  BuildFun("Or",2);
  Epopd(14,1);
  Epopd(13,1);
  MatchVard(12,1);
  BuildVard(11,1);
  Tpush();
  BuildVard(12,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(12,1);
  Epopd(11,1);
  Epopd(10,2);
  Rpush(m_2);
  goto z_9;
  m_2 :
  i_2 :
  Return();
  h_2 :
  Epopd(9,0);
  y_1 :
  Epopd(8,0);
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("And",2);
  Epopd(7,1);
  Epopd(6,1);
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
  Epopd(4,1);
  Epopd(3,2);
  Rpush(n_2);
  goto y_8;
  n_2 :
  v_1 :
  Return();
  u_1 :
  Epopd(2,0);
  l_0 :
  Epopd(1,0);
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
  Rpush(o_2);
  goto f_12;
  o_2 :
  Epopd(0,2);
  Return();
  u_11 :
  MatchFun("Nil",0);
  Return();
  v_11 :
  Epushd(0,0);
  Rpush(p_2);
  goto w_11;
  p_2 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildInt(0);
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
  Cpush(r_2);
  Epushd(1,0);
  Rpush(s_2);
  m_10 :
  Cpush(u_2);
  Epushd(2,0);
  Cpush(w_2);
  Epushd(3,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(3,3);
  Tpush();
  BuildInt(48);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(x_2);
  goto a_12;
  x_2 :
  BuildVard(3,3);
  Tpush();
  BuildInt(57);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(y_2);
  goto b_12;
  y_2 :
  Tpop();
  Epushd(4,1);
  Epushd(5,1);
  BuildInt(10);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(z_2);
  goto y_11;
  z_2 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(3,3);
  Tpush();
  BuildInt(48);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(a_3);
  goto z_11;
  a_3 :
  MatchVard(6,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  Epopd(5,1);
  Rpush(b_3);
  goto x_11;
  b_3 :
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,3);
  Rpush(c_3);
  goto m_10;
  c_3 :
  Cpop();
  goto v_2;
  w_2 :
  v_2 :
  Epopd(2,0);
  Cpop();
  goto t_2;
  u_2 :
  Epushd(2,0);
  Cpush(e_3);
  Epushd(3,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(3,3);
  Tpush();
  BuildInt(48);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(f_3);
  goto a_12;
  f_3 :
  BuildVard(3,3);
  Tpush();
  BuildInt(57);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(g_3);
  goto b_12;
  g_3 :
  Tpop();
  Epushd(4,1);
  Epushd(5,1);
  BuildInt(10);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(h_3);
  goto y_11;
  h_3 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(3,3);
  Tpush();
  BuildInt(48);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(i_3);
  goto z_11;
  i_3 :
  MatchVard(6,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  Epopd(5,1);
  Rpush(j_3);
  goto x_11;
  j_3 :
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,3);
  Rpush(k_3);
  goto m_10;
  k_3 :
  Cpop();
  goto d_3;
  e_3 :
  d_3 :
  Epopd(2,0);
  t_2 :
  Return();
  s_2 :
  Epopd(1,0);
  Cpop();
  goto q_2;
  r_2 :
  Epushd(1,0);
  Cpush(m_3);
  l_3 :
  Epushd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,3);
  Tpush();
  BuildInt(48);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(n_3);
  goto a_12;
  n_3 :
  BuildVard(2,3);
  Tpush();
  BuildInt(57);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(o_3);
  goto b_12;
  o_3 :
  Tpop();
  Epushd(3,1);
  Epushd(4,1);
  BuildInt(10);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(p_3);
  goto y_11;
  p_3 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(2,3);
  Tpush();
  BuildInt(48);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_3);
  goto z_11;
  q_3 :
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
  Epopd(4,1);
  Rpush(r_3);
  goto x_11;
  r_3 :
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,3);
  Tduplinv();
  goto l_3;
  m_3 :
  Epopd(1,0);
  q_2 :
  Epushd(1,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
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
  BuildVard(1,1);
  Epopd(1,1);
  Epopd(0,0);
  Return();
  w_11 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  x_11 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  y_11 :
  Epushd(0,0);
  _ST_mul();
  Epopd(0,0);
  Return();
  z_11 :
  Epushd(0,0);
  _ST_subt();
  Epopd(0,0);
  Return();
  a_12 :
  Epushd(0,0);
  _ST_geq();
  Epopd(0,0);
  Return();
  b_12 :
  Epushd(0,0);
  Cpush(s_3);
  Tdupl();
  Rpush(t_3);
  goto c_12;
  t_3 :
  Cpop();
  Crestore();
  Cjump();
  s_3 :
  Epopd(0,0);
  Return();
  c_12 :
  Epushd(0,0);
  _ST_gt();
  Epopd(0,0);
  Return();
  d_12 :
  Epushd(0,1);
  BuildFun("TNil",0);
  Rpush(u_3);
  goto e_12;
  u_3 :
  MatchVard(0,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Atom",1);
  Epopd(0,1);
  Return();
  e_12 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  f_12 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  v_3 :
DOIT_END
