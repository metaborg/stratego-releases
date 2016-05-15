#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(x_17);
  goto main;
  main :
  Epushd(0,0);
  Cpush(h_0);
  BuildFun("stdin",0);
  Rpush(i_0);
  goto b_28;
  i_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(j_0);
  goto h_28;
  j_0 :
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(k_0);
  goto n_28;
  k_0 :
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(l_0);
  goto p_28;
  l_0 :
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(m_0);
  goto z_28;
  m_0 :
  OneNextSon();
  Rpush(n_0);
  goto c_29;
  n_0 :
  AllBuild();
  AllBuild();
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
  Rpush(o_0);
  goto c_28;
  o_0 :
  Cpop();
  goto g_0;
  h_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(p_0);
  goto d_28;
  p_0 :
  g_0 :
  Epopd(0,0);
  Return();
  b_28 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  c_28 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  d_28 :
  Epushd(0,0);
  Tdupl();
  Rpush(r_0);
  goto e_28;
  r_0 :
  BuildInt(1);
  Rpush(s_0);
  goto g_28;
  s_0 :
  Tpop();
  Epopd(0,0);
  Return();
  e_28 :
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
  Rpush(t_0);
  goto f_28;
  t_0 :
  Tpop();
  Epopd(0,0);
  Return();
  f_28 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  g_28 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  h_28 :
  Epushd(0,0);
  Rpush(u_0);
  goto i_28;
  u_0 :
  Epopd(0,0);
  Return();
  i_28 :
  Epushd(0,0);
  Rpush(v_0);
  q_0 :
  Epushd(1,3);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Cpush(x_0);
  Epushd(3,2);
  MatchFun("Call",2);
  Arg(0);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Epushd(4,1);
  BuildVard(3,2);
  Rpush(y_0);
  goto j_28;
  y_0 :
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
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,2);
  Cpop();
  goto w_0;
  x_0 :
  BuildFun("Nil",0);
  w_0 :
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Cpush(a_1);
  Epushd(4,1);
  Tdupl();
  Cpush(c_1);
  Epushd(5,4);
  MatchFun("Let",2);
  Arg(0);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(5,4);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Arg(2);
  MatchVard(5,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(5,3);
  Tpop();
  BuildVard(5,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,4);
  Cpop();
  goto b_1;
  c_1 :
  Cpush(e_1);
  Epushd(5,3);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,3);
  Tpop();
  Arg(2);
  MatchVard(5,2);
  Tpop();
  BuildVard(5,3);
  Epopd(5,3);
  Cpop();
  goto d_1;
  e_1 :
  Epushd(5,2);
  MatchFun("Rec",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  BuildVard(5,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,2);
  d_1 :
  b_1 :
  MatchVard(4,1);
  Tpop();
  Epushd(5,0);
  Cpush(g_1);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Rpush(h_1);
  goto q_0;
  h_1 :
  AllBuild();
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(i_1);
  goto q_0;
  i_1 :
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,1);
  BuildVard(4,1);
  MatchVard(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(7,3);
  Rpush(j_1);
  j_10 :
  Cpush(l_1);
  Rpush(m_1);
  goto c_29;
  m_1 :
  Cpop();
  goto k_1;
  l_1 :
  Cpush(o_1);
  Epushd(8,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Arg(1);
  MatchVard(8,1);
  Tpop();
  Tdupl();
  BuildVard(7,2);
  Epushd(9,0);
  Rpush(p_1);
  k_10 :
  Cpush(r_1);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MatchVard(10,1);
  BuildVard(8,2);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(11,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epopd(11,1);
  Epopd(10,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto q_1;
  r_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto k_10;
  s_1 :
  AllBuild();
  q_1 :
  Return();
  p_1 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(t_1);
  goto j_10;
  t_1 :
  Cpop();
  goto n_1;
  o_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_1);
  goto j_10;
  u_1 :
  AllBuild();
  n_1 :
  k_1 :
  Return();
  j_1 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  Cpop();
  goto f_1;
  g_1 :
  Cpush(w_1);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(x_1);
  goto q_0;
  x_1 :
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,1);
  BuildVard(4,1);
  MatchVard(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(7,3);
  Rpush(y_1);
  l_10 :
  Cpush(a_2);
  Rpush(b_2);
  goto c_29;
  b_2 :
  Cpop();
  goto z_1;
  a_2 :
  Cpush(d_2);
  Epushd(8,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Arg(1);
  MatchVard(8,1);
  Tpop();
  Tdupl();
  BuildVard(7,2);
  Epushd(9,0);
  Rpush(e_2);
  m_10 :
  Cpush(g_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MatchVard(10,1);
  BuildVard(8,2);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(11,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epopd(11,1);
  Epopd(10,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto f_2;
  g_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_2);
  goto m_10;
  h_2 :
  AllBuild();
  f_2 :
  Return();
  e_2 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(i_2);
  goto l_10;
  i_2 :
  Cpop();
  goto c_2;
  d_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_2);
  goto l_10;
  j_2 :
  AllBuild();
  c_2 :
  z_1 :
  Return();
  y_1 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  Cpop();
  goto v_1;
  w_1 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(k_2);
  goto q_0;
  k_2 :
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,1);
  BuildVard(4,1);
  MatchVard(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(7,3);
  Rpush(l_2);
  n_10 :
  Cpush(n_2);
  Rpush(o_2);
  goto c_29;
  o_2 :
  Cpop();
  goto m_2;
  n_2 :
  Cpush(q_2);
  Epushd(8,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Arg(1);
  MatchVard(8,1);
  Tpop();
  Tdupl();
  BuildVard(7,2);
  Epushd(9,0);
  Rpush(r_2);
  o_10 :
  Cpush(t_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MatchVard(10,1);
  BuildVard(8,2);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(11,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epopd(11,1);
  Epopd(10,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto s_2;
  t_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_2);
  goto o_10;
  u_2 :
  AllBuild();
  s_2 :
  Return();
  r_2 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(v_2);
  goto n_10;
  v_2 :
  Cpop();
  goto p_2;
  q_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_2);
  goto n_10;
  w_2 :
  AllBuild();
  p_2 :
  m_2 :
  Return();
  l_2 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  v_1 :
  f_1 :
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
  Rpush(x_2);
  p_10 :
  Cpush(z_2);
  Rpush(a_3);
  goto c_29;
  a_3 :
  BuildFun("Nil",0);
  Cpop();
  goto y_2;
  z_2 :
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
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,2);
  Rpush(b_3);
  goto p_10;
  b_3 :
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
  Rpush(c_3);
  q_10 :
  Cpush(e_3);
  Rpush(f_3);
  goto c_29;
  f_3 :
  BuildVard(8,3);
  Cpop();
  goto d_3;
  e_3 :
  Cpush(h_3);
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
  i_3 :
  MatchFun("Cons",2);
  Cpush(j_3);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto k_3;
  j_3 :
  Arg(1);
  Tdrop();
  goto i_3;
  k_3 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(l_3);
  goto q_10;
  l_3 :
  Cpop();
  goto g_3;
  h_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_3);
  goto q_10;
  m_3 :
  AllBuild();
  g_3 :
  d_3 :
  Return();
  c_3 :
  Epopd(8,4);
  y_2 :
  Return();
  x_2 :
  Epopd(7,0);
  Epopd(6,1);
  Epopd(5,0);
  Epopd(4,1);
  Cpop();
  goto z_0;
  a_1 :
  Epushd(4,1);
  Epushd(5,1);
  MatchVard(5,1);
  Tdupl();
  BuildVard(5,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
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
  Tpop();
  Epopd(5,1);
  BuildVard(4,1);
  Epushd(5,0);
  Rpush(n_3);
  s_10 :
  Cpush(p_3);
  Rpush(q_3);
  goto c_29;
  q_3 :
  BuildFun("Nil",0);
  Cpop();
  goto o_3;
  p_3 :
  Epushd(6,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Epushd(7,1);
  BuildVard(6,1);
  Rpush(r_3);
  goto q_0;
  r_3 :
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,2);
  Rpush(s_3);
  goto s_10;
  s_3 :
  MatchVard(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  Epopd(7,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(6,4);
  Rpush(t_3);
  t_10 :
  Cpush(v_3);
  Rpush(w_3);
  goto c_29;
  w_3 :
  BuildVard(6,3);
  Cpop();
  goto u_3;
  v_3 :
  Cpush(y_3);
  Epushd(7,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchVard(7,1);
  Tpop();
  Tdupl();
  BuildVard(6,3);
  Epushd(8,0);
  Tdupl();
  z_3 :
  MatchFun("Cons",2);
  Cpush(a_4);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Cpop();
  goto b_4;
  a_4 :
  Arg(1);
  Tdrop();
  goto z_3;
  b_4 :
  Tpop();
  Epopd(8,0);
  Tpop();
  BuildVard(7,1);
  Epopd(7,2);
  Rpush(c_4);
  goto t_10;
  c_4 :
  Cpop();
  goto x_3;
  y_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_4);
  goto t_10;
  d_4 :
  AllBuild();
  x_3 :
  u_3 :
  Return();
  t_3 :
  Epopd(6,4);
  o_3 :
  Return();
  n_3 :
  Epopd(5,0);
  Epopd(4,1);
  z_0 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,3);
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
  BuildVard(1,3);
  Rpush(e_4);
  x_10 :
  Cpush(g_4);
  Rpush(h_4);
  goto c_29;
  h_4 :
  BuildVard(1,2);
  Cpop();
  goto f_4;
  g_4 :
  Cpush(j_4);
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Epushd(3,0);
  Tdupl();
  k_4 :
  MatchFun("Cons",2);
  Cpush(l_4);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto m_4;
  l_4 :
  Arg(1);
  Tdrop();
  goto k_4;
  m_4 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(n_4);
  goto x_10;
  n_4 :
  Cpop();
  goto i_4;
  j_4 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_4);
  goto x_10;
  o_4 :
  AllBuild();
  i_4 :
  f_4 :
  Return();
  e_4 :
  Epopd(1,3);
  Return();
  v_0 :
  Epopd(0,0);
  Return();
  j_28 :
  Epushd(0,0);
  Rpush(p_4);
  t_28 :
  Cpush(r_4);
  Rpush(s_4);
  goto c_29;
  s_4 :
  BuildInt(0);
  Cpop();
  goto q_4;
  r_4 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Rpush(t_4);
  goto t_28;
  t_4 :
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(u_4);
  goto k_28;
  u_4 :
  Epopd(1,1);
  q_4 :
  Return();
  p_4 :
  Epopd(0,0);
  Return();
  k_28 :
  Epushd(0,0);
  _ST_plus();
  Epopd(0,0);
  Return();
  n_28 :
  Epushd(0,0);
  Rpush(v_4);
  goto o_28;
  v_4 :
  Epopd(0,0);
  Return();
  o_28 :
  Epushd(0,0);
  Rpush(w_4);
  r_11 :
  Cpush(y_4);
  Epushd(1,1);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Cpop();
  goto x_4;
  y_4 :
  Cpush(a_5);
  Epushd(1,1);
  Tdupl();
  Cpush(c_5);
  Epushd(2,4);
  MatchFun("Let",2);
  Arg(0);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Arg(2);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  BuildVard(2,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,4);
  Cpop();
  goto b_5;
  c_5 :
  Cpush(e_5);
  Epushd(2,3);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Arg(2);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,3);
  Epopd(2,3);
  Cpop();
  goto d_5;
  e_5 :
  Epushd(2,2);
  MatchFun("Rec",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,2);
  d_5 :
  b_5 :
  MatchVard(1,1);
  Tpop();
  Epushd(2,1);
  Cpush(g_5);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Rpush(h_5);
  goto r_11;
  h_5 :
  AllBuild();
  OneNextSon();
  Epushd(3,3);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(i_5);
  goto r_11;
  i_5 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(1,1);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
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
  BuildVard(3,3);
  Rpush(j_5);
  p_13 :
  Cpush(l_5);
  Rpush(m_5);
  goto c_29;
  m_5 :
  Cpop();
  goto k_5;
  l_5 :
  Cpush(o_5);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,2);
  Epushd(5,0);
  Tdupl();
  p_5 :
  MatchFun("Cons",2);
  Cpush(q_5);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto r_5;
  q_5 :
  Arg(1);
  Tdrop();
  goto p_5;
  r_5 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(s_5);
  goto p_13;
  s_5 :
  Cpop();
  goto n_5;
  o_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_5);
  goto p_13;
  t_5 :
  AllBuild();
  n_5 :
  k_5 :
  Return();
  j_5 :
  Epopd(3,3);
  AllBuild();
  Cpop();
  goto f_5;
  g_5 :
  Cpush(v_5);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(3,3);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(w_5);
  goto r_11;
  w_5 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(1,1);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
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
  BuildVard(3,3);
  Rpush(x_5);
  m_14 :
  Cpush(z_5);
  Rpush(a_6);
  goto c_29;
  a_6 :
  Cpop();
  goto y_5;
  z_5 :
  Cpush(c_6);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,2);
  Epushd(5,0);
  Tdupl();
  d_6 :
  MatchFun("Cons",2);
  Cpush(e_6);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto f_6;
  e_6 :
  Arg(1);
  Tdrop();
  goto d_6;
  f_6 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(g_6);
  goto m_14;
  g_6 :
  Cpop();
  goto b_6;
  c_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_6);
  goto m_14;
  h_6 :
  AllBuild();
  b_6 :
  y_5 :
  Return();
  x_5 :
  Epopd(3,3);
  AllBuild();
  Cpop();
  goto u_5;
  v_5 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(3,3);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(i_6);
  goto r_11;
  i_6 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(1,1);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
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
  BuildVard(3,3);
  Rpush(j_6);
  f_15 :
  Cpush(l_6);
  Rpush(m_6);
  goto c_29;
  m_6 :
  Cpop();
  goto k_6;
  l_6 :
  Cpush(o_6);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,2);
  Epushd(5,0);
  Tdupl();
  p_6 :
  MatchFun("Cons",2);
  Cpush(q_6);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto r_6;
  q_6 :
  Arg(1);
  Tdrop();
  goto p_6;
  r_6 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(s_6);
  goto f_15;
  s_6 :
  Cpop();
  goto n_6;
  o_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_6);
  goto f_15;
  t_6 :
  AllBuild();
  n_6 :
  k_6 :
  Return();
  j_6 :
  Epopd(3,3);
  AllBuild();
  u_5 :
  f_5 :
  Epushd(3,1);
  MatchVard(3,1);
  Tdupl();
  BuildVard(3,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epopd(3,1);
  BuildVard(2,1);
  Epushd(3,0);
  Rpush(u_6);
  z_15 :
  Cpush(w_6);
  Rpush(x_6);
  goto c_29;
  x_6 :
  BuildFun("Nil",0);
  Cpop();
  goto v_6;
  w_6 :
  Epushd(4,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Epushd(5,1);
  BuildVard(4,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(y_6);
  goto z_15;
  y_6 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,4);
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
  BuildVard(4,4);
  Rpush(z_6);
  h_16 :
  Cpush(b_7);
  Rpush(c_7);
  goto c_29;
  c_7 :
  BuildVard(4,3);
  Cpop();
  goto a_7;
  b_7 :
  Cpush(e_7);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(4,3);
  Epushd(6,0);
  Tdupl();
  f_7 :
  MatchFun("Cons",2);
  Cpush(g_7);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto h_7;
  g_7 :
  Arg(1);
  Tdrop();
  goto f_7;
  h_7 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(i_7);
  goto h_16;
  i_7 :
  Cpop();
  goto d_7;
  e_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_7);
  goto h_16;
  j_7 :
  AllBuild();
  d_7 :
  a_7 :
  Return();
  z_6 :
  Epopd(4,4);
  v_6 :
  Return();
  u_6 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto z_4;
  a_5 :
  Epushd(1,1);
  Epushd(2,1);
  MatchVard(2,1);
  Tdupl();
  BuildVard(2,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
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
  Tpop();
  Epopd(2,1);
  BuildVard(1,1);
  Epushd(2,0);
  Rpush(k_7);
  n_17 :
  Cpush(m_7);
  Rpush(n_7);
  goto c_29;
  n_7 :
  BuildFun("Nil",0);
  Cpop();
  goto l_7;
  m_7 :
  Epushd(3,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(o_7);
  goto r_11;
  o_7 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(p_7);
  goto n_17;
  p_7 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,4);
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
  BuildVard(3,4);
  Rpush(v_7);
  s_17 :
  Cpush(l_9);
  Rpush(m_9);
  goto c_29;
  m_9 :
  BuildVard(3,3);
  Cpop();
  goto w_7;
  l_9 :
  Cpush(o_9);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,3);
  Epushd(5,0);
  Tdupl();
  e_10 :
  MatchFun("Cons",2);
  Cpush(f_10);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto z_10;
  f_10 :
  Arg(1);
  Tdrop();
  goto e_10;
  z_10 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(e_11);
  goto s_17;
  e_11 :
  Cpop();
  goto n_9;
  o_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_11);
  goto s_17;
  f_11 :
  AllBuild();
  n_9 :
  w_7 :
  Return();
  v_7 :
  Epopd(3,4);
  l_7 :
  Return();
  k_7 :
  Epopd(2,0);
  Epopd(1,1);
  z_4 :
  x_4 :
  Return();
  w_4 :
  Epopd(0,0);
  Return();
  p_28 :
  Epushd(0,0);
  Rpush(g_11);
  goto q_28;
  g_11 :
  Epopd(0,0);
  Return();
  q_28 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Rpush(h_11);
  g_18 :
  Epushd(1,0);
  Rpush(i_11);
  w_21 :
  Cpush(k_11);
  Epushd(2,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(2,2);
  MatchFun("SVar",1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(2,1);
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
  Epopd(3,1);
  Rpush(l_11);
  goto r_28;
  l_11 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto j_11;
  k_11 :
  Cpush(n_11);
  Epushd(2,8);
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
  Cpush(q_11);
  Epushd(3,4);
  MatchFun("Let",2);
  Arg(0);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Arg(2);
  MatchVard(3,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(3,3);
  Tpop();
  BuildVard(3,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,4);
  Cpop();
  goto p_11;
  q_11 :
  Cpush(c_12);
  Epushd(3,3);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,3);
  Tpop();
  Arg(2);
  MatchVard(3,2);
  Tpop();
  BuildVard(3,3);
  Epopd(3,3);
  Cpop();
  goto b_12;
  c_12 :
  Epushd(3,2);
  MatchFun("Rec",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  BuildVard(3,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,2);
  b_12 :
  p_11 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(d_12);
  p_23 :
  Cpush(f_12);
  Rpush(g_12);
  goto c_29;
  g_12 :
  Cpop();
  goto e_12;
  f_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(h_12);
  goto s_28;
  h_12 :
  OneNextSon();
  Rpush(i_12);
  goto p_23;
  i_12 :
  AllBuild();
  e_12 :
  Return();
  d_12 :
  Epopd(3,0);
  MatchVard(2,3);
  Epushd(3,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(4,0);
  Rpush(j_12);
  q_23 :
  Cpush(r_12);
  Epushd(5,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
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
  BuildFun("Nil",0);
  Epopd(5,0);
  Cpop();
  goto q_12;
  r_12 :
  Epushd(5,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,4);
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
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_12);
  goto q_23;
  s_12 :
  OneNextSon();
  Rpush(t_12);
  goto w_28;
  t_12 :
  AllBuild();
  AllBuild();
  Epushd(5,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(5,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,2);
  q_12 :
  Return();
  j_12 :
  Epopd(4,0);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epushd(3,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,2);
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
  BuildVard(3,2);
  Epushd(4,0);
  Rpush(u_12);
  r_23 :
  Cpush(w_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_12);
  goto r_23;
  x_12 :
  AllBuild();
  Cpop();
  goto v_12;
  w_12 :
  Rpush(y_12);
  goto c_29;
  y_12 :
  BuildVard(3,1);
  v_12 :
  Return();
  u_12 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Cpush(a_13);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  BuildVard(2,3);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  BuildVard(5,2);
  Epopd(5,2);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  Cpop();
  goto z_12;
  a_13 :
  Cpush(c_13);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
  Cpop();
  goto b_13;
  c_13 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  BuildVard(2,3);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  BuildVard(5,2);
  Epopd(5,2);
  OneNextSon();
  AllBuild();
  b_13 :
  z_12 :
  Epopd(4,0);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,7);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(2,8);
  Epushd(3,0);
  Cpush(e_13);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(2,7);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(f_13);
  goto g_18;
  f_13 :
  Epopd(4,1);
  AllBuild();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(2,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(g_13);
  goto g_18;
  g_13 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto d_13;
  e_13 :
  Cpush(r_13);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(2,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(s_13);
  goto g_18;
  s_13 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto h_13;
  r_13 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(2,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(t_13);
  goto g_18;
  t_13 :
  Epopd(4,1);
  AllBuild();
  h_13 :
  d_13 :
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto m_11;
  n_11 :
  Epushd(2,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(2,2);
  AllInit();
  u_13 :
  AllNextSon(&&v_13);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(w_13);
  goto w_21;
  w_13 :
  Epopd(3,1);
  goto u_13;
  v_13 :
  AllBuild();
  Epopd(2,2);
  m_11 :
  j_11 :
  Return();
  i_11 :
  Epopd(1,0);
  Return();
  h_11 :
  Epopd(0,0);
  Return();
  r_28 :
  Epushd(0,0);
  Rpush(x_13);
  v_25 :
  Cpush(z_13);
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
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
  Tpop();
  Arg(1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto y_13;
  z_13 :
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchVard(1,2);
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
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,2);
  Rpush(a_14);
  goto v_25;
  a_14 :
  y_13 :
  Return();
  x_13 :
  Epopd(0,0);
  Return();
  s_28 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  w_28 :
  MatchFun("TNil",0);
  Return();
  z_28 :
  Epushd(0,0);
  Rpush(b_14);
  goto a_29;
  b_14 :
  Epopd(0,0);
  Return();
  a_29 :
  Epushd(0,0);
  Rpush(c_14);
  i_24 :
  Cpush(e_14);
  Epushd(1,1);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Cpop();
  goto d_14;
  e_14 :
  Cpush(p_14);
  Epushd(1,1);
  Tdupl();
  Rpush(q_14);
  goto b_29;
  q_14 :
  MatchVard(1,1);
  Tpop();
  Epushd(2,1);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(3,3);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(r_14);
  goto i_24;
  r_14 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  BuildVard(1,1);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
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
  BuildVard(3,3);
  Rpush(s_14);
  s_25 :
  Cpush(u_14);
  Rpush(v_14);
  goto c_29;
  v_14 :
  Cpop();
  goto t_14;
  u_14 :
  Cpush(h_15);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,2);
  Epushd(5,0);
  Tdupl();
  i_15 :
  MatchFun("Cons",2);
  Cpush(j_15);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto k_15;
  j_15 :
  Arg(1);
  Tdrop();
  goto i_15;
  k_15 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(l_15);
  goto s_25;
  l_15 :
  Cpop();
  goto w_14;
  h_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_15);
  goto s_25;
  m_15 :
  AllBuild();
  w_14 :
  t_14 :
  Return();
  s_14 :
  Epopd(3,3);
  AllBuild();
  Epushd(3,1);
  MatchVard(3,1);
  Tdupl();
  BuildVard(3,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epopd(3,1);
  BuildVard(2,1);
  Epushd(3,0);
  Rpush(p_15);
  p_26 :
  Cpush(r_15);
  Rpush(s_15);
  goto c_29;
  s_15 :
  BuildFun("Nil",0);
  Cpop();
  goto q_15;
  r_15 :
  Epushd(4,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Epushd(5,1);
  BuildVard(4,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(t_15);
  goto p_26;
  t_15 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,4);
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
  BuildVard(4,4);
  Rpush(u_15);
  u_26 :
  Cpush(c_16);
  Rpush(d_16);
  goto c_29;
  d_16 :
  BuildVard(4,3);
  Cpop();
  goto b_16;
  c_16 :
  Cpush(k_16);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(4,3);
  Epushd(6,0);
  Tdupl();
  l_16 :
  MatchFun("Cons",2);
  Cpush(m_16);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto n_16;
  m_16 :
  Arg(1);
  Tdrop();
  goto l_16;
  n_16 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(o_16);
  goto u_26;
  o_16 :
  Cpop();
  goto j_16;
  k_16 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_16);
  goto u_26;
  p_16 :
  AllBuild();
  j_16 :
  b_16 :
  Return();
  u_15 :
  Epopd(4,4);
  q_15 :
  Return();
  p_15 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto o_14;
  p_14 :
  Epushd(1,1);
  Epushd(2,1);
  MatchVard(2,1);
  Tdupl();
  BuildVard(2,1);
  _ST_explode_term();
  MatchFun("TCons",2);
  Arg(0);
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
  Tpop();
  Epopd(2,1);
  BuildVard(1,1);
  Epushd(2,0);
  Rpush(q_16);
  u_27 :
  Cpush(s_16);
  Rpush(v_16);
  goto c_29;
  v_16 :
  BuildFun("Nil",0);
  Cpop();
  goto r_16;
  s_16 :
  Epushd(3,4);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(w_16);
  goto i_24;
  w_16 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(x_16);
  goto u_27;
  x_16 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,4);
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
  BuildVard(3,4);
  Rpush(y_16);
  z_27 :
  Cpush(a_17);
  Rpush(f_17);
  goto c_29;
  f_17 :
  BuildVard(3,3);
  Cpop();
  goto z_16;
  a_17 :
  Cpush(h_17);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,3);
  Epushd(5,0);
  Tdupl();
  i_17 :
  MatchFun("Cons",2);
  Cpush(j_17);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto k_17;
  j_17 :
  Arg(1);
  Tdrop();
  goto i_17;
  k_17 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(l_17);
  goto z_27;
  l_17 :
  Cpop();
  goto g_17;
  h_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_17);
  goto z_27;
  m_17 :
  AllBuild();
  g_17 :
  z_16 :
  Return();
  y_16 :
  Epopd(3,4);
  r_16 :
  Return();
  q_16 :
  Epopd(2,0);
  Epopd(1,1);
  o_14 :
  d_14 :
  Return();
  c_14 :
  Epopd(0,0);
  Return();
  b_29 :
  Cpush(v_17);
  Epushd(0,2);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,2);
  Epopd(0,2);
  Cpop();
  goto u_17;
  v_17 :
  Epushd(0,3);
  MatchFun("LRule",1);
  Arg(0);
  MatchFun("Rule",3);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,3);
  Rpush(w_17);
  goto a_29;
  w_17 :
  Epopd(0,3);
  u_17 :
  Return();
  c_29 :
  MatchFun("Nil",0);
  Return();
  x_17 :
DOIT_END
