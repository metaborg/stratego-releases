#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(b_8);
  goto main;
  main :
  Epushd(0,2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  OneNextSon();
  MatchVard(0,2);
  AllBuild();
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(e_0);
  a_0 :
  Cpush(g_0);
  Rpush(h_0);
  goto w_5;
  h_0 :
  Cpop();
  goto f_0;
  g_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_0);
  goto r_5;
  i_0 :
  OneNextSon();
  Rpush(j_0);
  goto a_0;
  j_0 :
  AllBuild();
  f_0 :
  Return();
  e_0 :
  Epopd(1,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Rpush(k_0);
  goto b_6;
  k_0 :
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
  goto d_6;
  m_0 :
  Epushd(1,0);
  Rpush(n_0);
  l_0 :
  Cpush(p_0);
  Rpush(q_0);
  goto w_5;
  q_0 :
  Cpop();
  goto o_0;
  p_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
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
  BuildVard(2,2);
  Epushd(3,0);
  Tdupl();
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(4,1);
  BuildFun("stdout",0);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,1);
  Epushd(7,1);
  MatchVard(7,1);
  Epushd(8,1);
  BuildFun("TNil",0);
  BuildVard(2,1);
  Tpush();
  BuildStr(": ");
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(r_0);
  goto f_6;
  r_0 :
  MatchVard(8,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(8,1);
  Epopd(7,1);
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
  Epopd(4,1);
  Rpush(s_0);
  goto e_6;
  s_0 :
  Tpop();
  Epopd(3,0);
  Epopd(2,2);
  OneNextSon();
  Rpush(a_1);
  goto l_0;
  a_1 :
  AllBuild();
  o_0 :
  Return();
  n_0 :
  Epopd(1,0);
  Epopd(0,2);
  Return();
  r_5 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Rpush(b_1);
  goto s_5;
  b_1 :
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(4,1);
  Rpush(c_1);
  goto v_5;
  c_1 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,1);
  Rpush(d_1);
  goto z_5;
  d_1 :
  MatchVard(6,1);
  Epushd(7,1);
  BuildVard(4,1);
  Rpush(n_1);
  goto a_6;
  n_1 :
  MatchVard(7,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("Constructors",1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Size",3);
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,1);
  Epopd(4,1);
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
  Epopd(0,1);
  Return();
  s_5 :
  Epushd(0,1);
  MatchVard(0,1);
  BuildStr("parse-mod");
  Tpush();
  BuildStr("-silent");
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildStr("pm.bla");
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
  Rpush(o_1);
  goto t_5;
  o_1 :
  BuildStr("pm.bla");
  Rpush(p_1);
  goto u_5;
  p_1 :
  Epopd(0,1);
  Return();
  t_5 :
  Epushd(0,0);
  _ST_call();
  Epopd(0,0);
  Return();
  u_5 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  v_5 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(q_1);
  m_1 :
  Cpush(s_1);
  MatchFun("OpDecl",2);
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Cpop();
  goto r_1;
  s_1 :
  Epushd(2,1);
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
  Rpush(v_1);
  f_2 :
  Cpush(x_1);
  Rpush(y_1);
  goto w_5;
  y_1 :
  BuildFun("Nil",0);
  Cpop();
  goto w_1;
  x_1 :
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
  Rpush(z_1);
  goto m_1;
  z_1 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(a_2);
  goto f_2;
  a_2 :
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
  Rpush(q_2);
  k_2 :
  Cpush(s_2);
  Rpush(t_2);
  goto w_5;
  t_2 :
  BuildVard(4,3);
  Cpop();
  goto r_2;
  s_2 :
  Cpush(v_2);
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
  y_2 :
  MatchFun("Cons",2);
  Cpush(z_2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto a_3;
  z_2 :
  Arg(1);
  Tdrop();
  goto y_2;
  a_3 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(b_3);
  goto k_2;
  b_3 :
  Cpop();
  goto u_2;
  v_2 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_3);
  goto k_2;
  c_3 :
  AllBuild();
  u_2 :
  r_2 :
  Return();
  q_2 :
  Epopd(4,4);
  w_1 :
  Return();
  v_1 :
  Epopd(3,0);
  Epopd(2,1);
  r_1 :
  Return();
  q_1 :
  Epopd(1,0);
  Rpush(d_3);
  goto x_5;
  d_3 :
  Epopd(0,0);
  Return();
  w_5 :
  MatchFun("Nil",0);
  Return();
  x_5 :
  Epushd(0,0);
  Rpush(r_3);
  k_34 :
  Cpush(t_3);
  Rpush(u_3);
  goto w_5;
  u_3 :
  BuildInt(0);
  Cpop();
  goto s_3;
  t_3 :
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
  Rpush(v_3);
  goto k_34;
  v_3 :
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
  Rpush(w_3);
  goto y_5;
  w_3 :
  Epopd(1,1);
  s_3 :
  Return();
  r_3 :
  Epopd(0,0);
  Return();
  y_5 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  z_5 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(z_3);
  p_2 :
  Cpush(b_4);
  MatchFun("RDef",3);
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Cpop();
  goto a_4;
  b_4 :
  Epushd(2,1);
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
  Rpush(c_4);
  i_3 :
  Cpush(e_4);
  Rpush(n_4);
  goto w_5;
  n_4 :
  BuildFun("Nil",0);
  Cpop();
  goto d_4;
  e_4 :
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
  Rpush(r_4);
  goto p_2;
  r_4 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(s_4);
  goto i_3;
  s_4 :
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
  Rpush(t_4);
  n_3 :
  Cpush(v_4);
  Rpush(w_4);
  goto w_5;
  w_4 :
  BuildVard(4,3);
  Cpop();
  goto u_4;
  v_4 :
  Cpush(y_4);
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
  z_4 :
  MatchFun("Cons",2);
  Cpush(a_5);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto i_6;
  a_5 :
  Arg(1);
  Tdrop();
  goto z_4;
  i_6 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(j_6);
  goto n_3;
  j_6 :
  Cpop();
  goto x_4;
  y_4 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_6);
  goto n_3;
  k_6 :
  AllBuild();
  x_4 :
  u_4 :
  Return();
  t_4 :
  Epopd(4,4);
  d_4 :
  Return();
  c_4 :
  Epopd(3,0);
  Epopd(2,1);
  a_4 :
  Return();
  z_3 :
  Epopd(1,0);
  Rpush(l_6);
  goto x_5;
  l_6 :
  Epopd(0,0);
  Return();
  a_6 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(m_6);
  q_3 :
  Cpush(o_6);
  MatchFun("SDef",3);
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Cpop();
  goto n_6;
  o_6 :
  Epushd(2,1);
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
  Rpush(p_6);
  j_4 :
  Cpush(r_6);
  Rpush(s_6);
  goto w_5;
  s_6 :
  BuildFun("Nil",0);
  Cpop();
  goto q_6;
  r_6 :
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
  Rpush(t_6);
  goto q_3;
  t_6 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(u_6);
  goto j_4;
  u_6 :
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
  Rpush(v_6);
  p_4 :
  Cpush(x_6);
  Rpush(y_6);
  goto w_5;
  y_6 :
  BuildVard(4,3);
  Cpop();
  goto w_6;
  x_6 :
  Cpush(a_7);
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
  b_7 :
  MatchFun("Cons",2);
  Cpush(c_7);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto d_7;
  c_7 :
  Arg(1);
  Tdrop();
  goto b_7;
  d_7 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(e_7);
  goto p_4;
  e_7 :
  Cpop();
  goto z_6;
  a_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_7);
  goto p_4;
  f_7 :
  AllBuild();
  z_6 :
  w_6 :
  Return();
  v_6 :
  Epopd(4,4);
  q_6 :
  Return();
  p_6 :
  Epopd(3,0);
  Epopd(2,1);
  n_6 :
  Return();
  m_6 :
  Epopd(1,0);
  Rpush(g_7);
  goto x_5;
  g_7 :
  Epopd(0,0);
  Return();
  b_6 :
  Epushd(0,0);
  Rpush(h_7);
  b_5 :
  Cpush(j_7);
  Rpush(k_7);
  goto w_5;
  k_7 :
  BuildStr("all");
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("Constructors",1);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Size",3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpop();
  goto i_7;
  j_7 :
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
  Rpush(l_7);
  goto b_5;
  l_7 :
  OneNextSon();
  Rpush(m_7);
  goto c_6;
  m_7 :
  AllBuild();
  AllBuild();
  Epushd(1,7);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Size",3);
  Arg(0);
  MatchFun("Constructors",1);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Rules",1);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Tpop();
  Arg(2);
  MatchFun("Strategies",1);
  Arg(0);
  MatchVard(1,6);
  Tpop();
  Tpop();
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
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Size",3);
  Arg(0);
  MatchFun("Constructors",1);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Rules",1);
  Arg(0);
  MatchVard(1,5);
  Tpop();
  Tpop();
  Arg(2);
  MatchFun("Strategies",1);
  Arg(0);
  MatchVard(1,7);
  Tpop();
  Tpop();
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
  Epushd(2,1);
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(n_7);
  goto y_5;
  n_7 :
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,4);
  Tpush();
  BuildVard(1,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(o_7);
  goto y_5;
  o_7 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(1,6);
  Tpush();
  BuildVard(1,7);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(p_7);
  goto y_5;
  p_7 :
  MatchVard(4,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Constructors",1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Size",3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,7);
  i_7 :
  Return();
  h_7 :
  Epopd(0,0);
  Return();
  c_6 :
  MatchFun("TNil",0);
  Return();
  d_6 :
  Cpush(r_7);
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
  goto q_7;
  r_7 :
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
  q_7 :
  Return();
  e_6 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  f_6 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_7);
  goto g_6;
  s_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_7);
  goto g_6;
  t_7 :
  OneNextSon();
  Rpush(u_7);
  goto c_6;
  u_7 :
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
  Rpush(v_7);
  q_5 :
  Cpush(x_7);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_7);
  goto q_5;
  y_7 :
  AllBuild();
  Cpop();
  goto w_7;
  x_7 :
  Rpush(z_7);
  goto w_5;
  z_7 :
  BuildVard(1,1);
  w_7 :
  Return();
  v_7 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(a_8);
  goto h_6;
  a_8 :
  Epopd(0,0);
  Return();
  g_6 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  h_6 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  b_8 :
DOIT_END
