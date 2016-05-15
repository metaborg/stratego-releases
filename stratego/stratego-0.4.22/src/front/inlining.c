#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(q_41);
  goto main;
  main :
  Epushd(0,0);
  Rpush(a_0);
  goto m_27;
  a_0 :
  Epopd(0,0);
  Return();
  m_27 :
  Epushd(0,0);
  Epushd(1,0);
  Epushd(2,0);
  Epushd(3,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("Program",1);
  Epopd(5,1);
  Epopd(4,1);
  OneNextSon();
  Rpush(b_0);
  h_0 :
  Cpush(d_0);
  Cpush(b_3);
  Rpush(d_3);
  goto n_27;
  d_3 :
  Cpop();
  goto a_3;
  b_3 :
  Rpush(e_3);
  goto o_27;
  e_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_3);
  goto h_0;
  f_3 :
  AllBuild();
  a_3 :
  Cpop();
  goto c_0;
  d_0 :
  Epushd(4,3);
  MoveTop(4,1);
  TestFun(4,1,"Cons",2,&&p_3);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Epushd(5,2);
  Move(5,1,4,2);
  Move(5,2,4,3);
  BuildVard(5,1);
  Tpush();
  BuildFun("Undefined",1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,2);
  goto o_3;
  p_3 :
  goto fail;
  o_3 :
  Epopd(4,3);
  c_0 :
  Return();
  b_0 :
  AllBuild();
  Epopd(3,0);
  Cpush(r_3);
  Rpush(s_3);
  goto p_27;
  s_3 :
  Cpop();
  goto q_3;
  r_3 :
  Cpush(a_4);
  Rpush(b_4);
  goto w_27;
  b_4 :
  Epushd(3,1);
  Tdupl();
  Rpush(c_4);
  goto y_27;
  c_4 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(d_4);
  goto f_28;
  d_4 :
  OneNextSon();
  Rpush(e_4);
  goto e_28;
  e_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(f_4);
  goto y_27;
  f_4 :
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  Epushd(4,5);
  MoveTop(4,1);
  TestFun(4,1,"TCons",2,&&h_4);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  TestFun(4,3,"TCons",2,&&j_4);
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  TestFun(4,5,"TNil",0,&&l_4);
  Epushd(5,2);
  Move(5,1,4,2);
  Move(5,2,4,4);
  BuildVard(3,1);
  Tpush();
  BuildFun("Runtime",1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,2);
  goto k_4;
  l_4 :
  goto fail;
  k_4 :
  goto i_4;
  j_4 :
  goto fail;
  i_4 :
  goto g_4;
  h_4 :
  goto fail;
  g_4 :
  Epopd(4,5);
  Epopd(3,1);
  Rpush(m_4);
  goto z_27;
  m_4 :
  Rpush(n_4);
  goto c_28;
  n_4 :
  Cpop();
  goto t_3;
  a_4 :
  Rpush(o_4);
  goto d_28;
  o_4 :
  t_3 :
  q_3 :
  Epopd(2,0);
  Epopd(1,0);
  Epopd(0,0);
  Return();
  n_27 :
  MatchFun("Nil",0);
  TravInit();
  AllBuild();
  Return();
  o_27 :
  Epushd(0,5);
  MoveTop(0,3);
  TestFun(0,3,"Cons",2,&&r_5);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  TestFun(0,5,"Cons",2,&&t_5);
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(v_5);
  Rpush(w_5);
  goto u_2;
  w_5 :
  Cpop();
  goto u_5;
  v_5 :
  Cpush(y_5);
  Rpush(z_5);
  goto w_2;
  z_5 :
  Cpop();
  goto x_5;
  y_5 :
  Cpush(e_6);
  Rpush(f_6);
  goto x_2;
  f_6 :
  Cpop();
  goto d_6;
  e_6 :
  Cpush(j_6);
  Rpush(k_6);
  goto y_2;
  k_6 :
  Cpop();
  goto h_6;
  j_6 :
  Cpush(m_6);
  Rpush(n_6);
  goto z_2;
  n_6 :
  Cpop();
  goto l_6;
  m_6 :
  Cpush(p_6);
  Epushd(1,0);
  Epushd(2,3);
  Move(2,3,0,4);
  Move(2,1,0,1);
  Move(2,2,0,2);
  Tdupl();
  BuildVard(2,3);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"@version",&&r_6);
  goto q_6;
  r_6 :
  goto fail;
  q_6 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("DeclVersion",1);
  Epopd(5,1);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,1,5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Epopd(1,0);
  Cpop();
  goto o_6;
  p_6 :
  Cpush(t_6);
  Epushd(1,0);
  Epushd(2,3);
  Move(2,3,0,4);
  Move(2,1,0,1);
  Move(2,2,0,2);
  Tdupl();
  BuildVard(2,3);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-i",&&v_6);
  goto u_6;
  v_6 :
  goto fail;
  u_6 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(5,1);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,1,5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Epopd(1,0);
  Cpop();
  goto s_6;
  t_6 :
  Cpush(x_6);
  Epushd(1,0);
  Epushd(2,3);
  Move(2,3,0,4);
  Move(2,1,0,1);
  Move(2,2,0,2);
  Tdupl();
  BuildVard(2,3);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"--input",&&z_6);
  goto y_6;
  z_6 :
  goto fail;
  y_6 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(5,1);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,1,5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Epopd(1,0);
  Cpop();
  goto w_6;
  x_6 :
  Cpush(c_7);
  Epushd(1,0);
  Epushd(2,3);
  Move(2,3,0,4);
  Move(2,1,0,1);
  Move(2,2,0,2);
  Tdupl();
  BuildVard(2,3);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-o",&&e_7);
  goto d_7;
  e_7 :
  goto fail;
  d_7 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("Output",1);
  Epopd(5,1);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,1,5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Epopd(1,0);
  Cpop();
  goto b_7;
  c_7 :
  Cpush(g_7);
  Epushd(1,0);
  Epushd(2,3);
  Move(2,3,0,4);
  Move(2,1,0,1);
  Move(2,2,0,2);
  Tdupl();
  BuildVard(2,3);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"--output",&&i_7);
  goto h_7;
  i_7 :
  goto fail;
  h_7 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildFun("Output",1);
  Epopd(5,1);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,1,5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Epopd(1,0);
  Cpop();
  goto f_7;
  g_7 :
  Cpush(d_8);
  Rpush(e_8);
  goto g_3;
  e_8 :
  Cpop();
  goto w_7;
  d_8 :
  Cpush(g_8);
  Rpush(h_8);
  goto h_3;
  h_8 :
  Cpop();
  goto f_8;
  g_8 :
  Cpush(j_8);
  Rpush(k_8);
  goto k_3;
  k_8 :
  Cpop();
  goto i_8;
  j_8 :
  Cpush(m_8);
  Rpush(n_8);
  goto m_3;
  n_8 :
  Cpop();
  goto l_8;
  m_8 :
  Rpush(o_8);
  goto n_3;
  o_8 :
  l_8 :
  i_8 :
  f_8 :
  w_7 :
  f_7 :
  b_7 :
  w_6 :
  s_6 :
  o_6 :
  l_6 :
  h_6 :
  d_6 :
  x_5 :
  u_5 :
  goto s_5;
  t_5 :
  Cpush(q_8);
  Rpush(r_8);
  goto u_2;
  r_8 :
  Cpop();
  goto p_8;
  q_8 :
  Cpush(y_8);
  Rpush(z_8);
  goto w_2;
  z_8 :
  Cpop();
  goto s_8;
  y_8 :
  Cpush(l_9);
  Rpush(m_9);
  goto x_2;
  m_9 :
  Cpop();
  goto k_9;
  l_9 :
  Cpush(o_9);
  Rpush(p_9);
  goto y_2;
  p_9 :
  Cpop();
  goto n_9;
  o_9 :
  Cpush(r_9);
  Rpush(s_9);
  goto z_2;
  s_9 :
  Cpop();
  goto q_9;
  r_9 :
  Cpush(u_9);
  Rpush(v_9);
  goto g_3;
  v_9 :
  Cpop();
  goto t_9;
  u_9 :
  Cpush(x_9);
  Rpush(y_9);
  goto h_3;
  y_9 :
  Cpop();
  goto w_9;
  x_9 :
  Cpush(a_10);
  Rpush(b_10);
  goto k_3;
  b_10 :
  Cpop();
  goto z_9;
  a_10 :
  Cpush(d_10);
  Rpush(e_10);
  goto m_3;
  e_10 :
  Cpop();
  goto c_10;
  d_10 :
  Rpush(f_10);
  goto n_3;
  f_10 :
  c_10 :
  z_9 :
  w_9 :
  t_9 :
  q_9 :
  n_9 :
  k_9 :
  s_8 :
  p_8 :
  s_5 :
  goto q_5;
  r_5 :
  goto fail;
  q_5 :
  goto o_5;
  n_3 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-?",&&i_10);
  goto g_10;
  i_10 :
  goto fail;
  g_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  o_5 :
  goto n_5;
  m_3 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-h",&&k_10);
  goto j_10;
  k_10 :
  goto fail;
  j_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  n_5 :
  goto l_5;
  k_3 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"--help",&&m_10);
  goto l_10;
  m_10 :
  goto fail;
  l_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  l_5 :
  goto k_5;
  h_3 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-s",&&o_10);
  goto n_10;
  o_10 :
  goto fail;
  n_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Statistics",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  k_5 :
  goto g_5;
  g_3 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-b",&&q_10);
  goto p_10;
  q_10 :
  goto fail;
  p_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Binary",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  g_5 :
  goto f_5;
  z_2 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"--version",&&s_10);
  goto r_10;
  s_10 :
  goto fail;
  r_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Version",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  f_5 :
  goto w_4;
  y_2 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-v",&&u_10);
  goto t_10;
  u_10 :
  goto fail;
  t_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Version",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  w_4 :
  goto v_4;
  x_2 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"--verbose",&&w_10);
  goto v_10;
  w_10 :
  goto fail;
  v_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Verbose",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  v_4 :
  goto u_4;
  w_2 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"--silent",&&y_10);
  goto x_10;
  y_10 :
  goto fail;
  x_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Silent",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  u_4 :
  goto p_4;
  u_2 :
  Epushd(1,0);
  Epushd(2,2);
  Move(2,2,0,4);
  Move(2,1,0,5);
  Tdupl();
  BuildVard(2,2);
  Epushd(3,1);
  MoveTop(3,1);
  TestStr(3,1,"-S",&&a_11);
  goto z_10;
  a_11 :
  goto fail;
  z_10 :
  Epopd(3,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildFun("Silent",0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epopd(1,0);
  Return();
  p_4 :
  Epopd(0,5);
  Return();
  p_27 :
  Epushd(0,0);
  Epushd(1,0);
  Epushd(2,0);
  Tdupl();
  b_11 :
  MatchFun("Cons",2);
  Cpush(c_11);
  Arg(0);
  Cpush(s_11);
  Rpush(a_12);
  goto q_27;
  a_12 :
  Cpop();
  goto e_11;
  s_11 :
  MatchFun("Undefined",1);
  TravInit();
  OneNextSon();
  AllBuild();
  e_11 :
  Tpop();
  Cpop();
  goto d_11;
  c_11 :
  Arg(1);
  Tdrop();
  goto b_11;
  d_11 :
  Tpop();
  Epopd(2,0);
  Epopd(1,0);
  Rpush(b_12);
  goto t_27;
  b_12 :
  Epopd(0,0);
  Return();
  q_27 :
  MatchFun("Help",0);
  TravInit();
  AllBuild();
  Return();
  t_27 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Epushd(2,0);
  Tdupl();
  c_12 :
  MatchFun("Cons",2);
  Cpush(d_12);
  Arg(0);
  Epushd(3,2);
  MoveTop(3,1);
  TestFun(3,1,"Program",1,&&p_12);
  MoveArg(3,2,3,1,0);
  Move(0,1,3,2);
  goto j_12;
  p_12 :
  goto fail;
  j_12 :
  Epopd(3,2);
  Tpop();
  Cpop();
  goto g_12;
  d_12 :
  Arg(1);
  Tdrop();
  goto c_12;
  g_12 :
  Tpop();
  Epopd(2,0);
  Epopd(1,0);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("usage : ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]");
  Tpush();
  BuildFun("Nil",0);
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
  Rpush(q_12);
  goto u_27;
  q_12 :
  BuildInt(1);
  Rpush(r_12);
  goto v_27;
  r_12 :
  Tpop();
  Epopd(0,1);
  Return();
  u_27 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  v_27 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  w_27 :
  Epushd(0,1);
  Cpush(t_12);
  Epushd(1,0);
  Epushd(2,0);
  Tdupl();
  u_12 :
  MatchFun("Cons",2);
  Cpush(v_12);
  Arg(0);
  Epushd(3,2);
  MoveTop(3,1);
  TestFun(3,1,"Input",1,&&j_13);
  MoveArg(3,2,3,1,0);
  Move(0,1,3,2);
  goto x_12;
  j_13 :
  goto fail;
  x_12 :
  Epopd(3,2);
  Tpop();
  Cpop();
  goto w_12;
  v_12 :
  Arg(1);
  Tdrop();
  goto u_12;
  w_12 :
  Tpop();
  Epopd(2,0);
  Epopd(1,0);
  Cpop();
  goto s_12;
  t_12 :
  BuildFun("stdin",0);
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  s_12 :
  Epushd(1,1);
  MoveTop(1,1);
  Epushd(2,1);
  Move(2,1,1,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epushd(5,1);
  BuildVard(2,1);
  BuildVard(0,1);
  Rpush(n_13);
  goto x_27;
  n_13 :
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,1,6,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  Epopd(0,1);
  Return();
  x_27 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  y_27 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  z_27 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(p_13);
  Epushd(1,0);
  Epushd(2,0);
  Tdupl();
  q_13 :
  MatchFun("Cons",2);
  Cpush(r_13);
  Arg(0);
  Epushd(3,2);
  MoveTop(3,1);
  TestFun(3,1,"Output",1,&&u_13);
  MoveArg(3,2,3,1,0);
  Move(0,1,3,2);
  goto t_13;
  u_13 :
  goto fail;
  t_13 :
  Epopd(3,2);
  Tpop();
  Cpop();
  goto s_13;
  r_13 :
  Arg(1);
  Tdrop();
  goto q_13;
  s_13 :
  Tpop();
  Epopd(2,0);
  Epopd(1,0);
  Cpop();
  goto o_13;
  p_13 :
  BuildFun("stdout",0);
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  o_13 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_13);
  goto e_28;
  v_13 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Epushd(2,1);
  Move(2,1,1,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildVard(0,1);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epushd(5,1);
  BuildVard(2,1);
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,1,6,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  OneNextSon();
  Rpush(w_13);
  goto e_28;
  w_13 :
  AllBuild();
  AllBuild();
  Cpush(y_13);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Epushd(2,0);
  Tdupl();
  z_13 :
  MatchFun("Cons",2);
  Cpush(a_14);
  Arg(0);
  Epushd(3,1);
  MoveTop(3,1);
  TestFun(3,1,"Binary",0,&&d_14);
  goto c_14;
  d_14 :
  goto fail;
  c_14 :
  Epopd(3,1);
  Tpop();
  Cpop();
  goto b_14;
  a_14 :
  Arg(1);
  Tdrop();
  goto z_13;
  b_14 :
  Tpop();
  Epopd(2,0);
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(e_14);
  goto a_28;
  e_14 :
  OneNextSon();
  Rpush(p_14);
  goto e_28;
  p_14 :
  AllBuild();
  AllBuild();
  Cpop();
  goto x_13;
  y_13 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(q_14);
  goto b_28;
  q_14 :
  OneNextSon();
  Rpush(r_14);
  goto e_28;
  r_14 :
  AllBuild();
  AllBuild();
  x_13 :
  Epopd(0,1);
  Return();
  a_28 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  b_28 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  c_28 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(t_14);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(u_14);
  Tdupl();
  Epushd(2,0);
  Epushd(3,0);
  Tdupl();
  v_14 :
  MatchFun("Cons",2);
  Cpush(w_14);
  Arg(0);
  Epushd(4,1);
  MoveTop(4,1);
  TestFun(4,1,"Silent",0,&&z_14);
  goto y_14;
  z_14 :
  goto fail;
  y_14 :
  Epopd(4,1);
  Tpop();
  Cpop();
  goto x_14;
  w_14 :
  Arg(1);
  Tdrop();
  goto v_14;
  x_14 :
  Tpop();
  Epopd(3,0);
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  u_14 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_15);
  goto e_28;
  a_15 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Epushd(3,0);
  Tdupl();
  b_15 :
  MatchFun("Cons",2);
  Cpush(c_15);
  Arg(0);
  Epushd(4,2);
  MoveTop(4,1);
  TestFun(4,1,"Runtime",1,&&f_15);
  MoveArg(4,2,4,1,0);
  Move(0,2,4,2);
  goto e_15;
  f_15 :
  goto fail;
  e_15 :
  Epopd(4,2);
  Tpop();
  Cpop();
  goto d_15;
  c_15 :
  Arg(1);
  Tdrop();
  goto b_15;
  d_15 :
  Tpop();
  Epopd(3,0);
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_15);
  goto e_28;
  g_15 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Epushd(3,0);
  Tdupl();
  h_15 :
  MatchFun("Cons",2);
  Cpush(i_15);
  Arg(0);
  Epushd(4,2);
  MoveTop(4,1);
  TestFun(4,1,"Program",1,&&l_15);
  MoveArg(4,2,4,1,0);
  Move(0,1,4,2);
  goto k_15;
  l_15 :
  goto fail;
  k_15 :
  Epopd(4,2);
  Tpop();
  Cpop();
  goto j_15;
  i_15 :
  Arg(1);
  Tdrop();
  goto h_15;
  j_15 :
  Tpop();
  Epopd(3,0);
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_15);
  goto e_28;
  m_15 :
  AllBuild();
  AllBuild();
  BuildFun("stderr",0);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(" (");
  Tpush();
  BuildVard(0,2);
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
  Rpush(n_15);
  goto u_27;
  n_15 :
  Cpop();
  goto s_14;
  t_14 :
  s_14 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(o_15);
  goto v_27;
  o_15 :
  Epopd(0,2);
  Return();
  d_28 :
  Epushd(0,0);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(p_15);
  goto u_27;
  p_15 :
  BuildInt(1);
  Rpush(q_15);
  goto v_27;
  q_15 :
  Epopd(0,0);
  Return();
  e_28 :
  MatchFun("TNil",0);
  TravInit();
  AllBuild();
  Return();
  f_28 :
  Epushd(0,1);
  MoveTop(0,1);
  Epushd(1,0);
  Epushd(2,3);
  Move(2,1,0,1);
  Tdupl();
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
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
  Epushd(3,0);
  Epushd(4,0);
  Cpush(w_15);
  v_15 :
  Epushd(5,9);
  MoveTop(5,1);
  TestFun(5,1,"TCons",2,&&y_15);
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  TestFun(5,2,"Cons",2,&&a_16);
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  TestFun(5,5,"TCons",2,&&e_16);
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  TestFun(5,7,"TCons",2,&&o_16);
  MoveArg(5,8,5,7,0);
  MoveArg(5,9,5,7,1);
  TestFun(5,9,"TNil",0,&&q_16);
  Cpush(s_16);
  Epushd(6,4);
  Move(6,4,5,3);
  Move(6,1,5,4);
  Move(6,2,5,6);
  Move(6,3,5,8);
  Tdupl();
  BuildVard(6,4);
  Rpush(t_16);
  goto g_28;
  t_16 :
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildVard(6,4);
  Tpush();
  BuildVard(6,3);
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
  Epopd(6,4);
  Cpop();
  goto r_16;
  s_16 :
  Epushd(6,4);
  Move(6,2,5,3);
  Move(6,1,5,4);
  Move(6,3,5,6);
  Move(6,4,5,8);
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildVard(6,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(6,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,4);
  r_16 :
  goto p_16;
  q_16 :
  goto fail;
  p_16 :
  goto f_16;
  o_16 :
  goto fail;
  f_16 :
  goto d_16;
  e_16 :
  goto fail;
  d_16 :
  goto z_15;
  a_16 :
  goto fail;
  z_15 :
  goto x_15;
  y_15 :
  goto fail;
  x_15 :
  Epopd(5,9);
  Tduplinv();
  goto v_15;
  w_15 :
  Epopd(4,0);
  Epopd(3,0);
  Epushd(3,7);
  MoveTop(3,1);
  TestFun(3,1,"TCons",2,&&x_16);
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  TestFun(3,2,"Nil",0,&&z_16);
  TestFun(3,3,"TCons",2,&&b_17);
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  TestFun(3,5,"TCons",2,&&d_17);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  TestFun(3,7,"TNil",0,&&f_17);
  Move(2,2,3,4);
  Move(2,3,3,6);
  goto e_17;
  f_17 :
  goto fail;
  e_17 :
  goto c_17;
  d_17 :
  goto fail;
  c_17 :
  goto a_17;
  b_17 :
  goto fail;
  a_17 :
  goto y_16;
  z_16 :
  goto fail;
  y_16 :
  goto u_16;
  x_16 :
  goto fail;
  u_16 :
  Epopd(3,7);
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,3);
  Rpush(r_17);
  goto o_28;
  r_17 :
  Epushd(2,3);
  MoveTop(2,1);
  TestFun(2,1,"TCons",2,&&t_17);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Epushd(3,2);
  Move(3,2,2,2);
  Move(3,1,2,3);
  BuildVard(3,2);
  Epopd(3,2);
  Epushd(3,1);
  MoveTop(3,1);
  Epushd(4,4);
  Move(4,3,3,1);
  Tdupl();
  BuildVard(4,3);
  Epushd(5,0);
  Rpush(u_17);
  m_5 :
  Cpush(w_17);
  Rpush(z_17);
  goto n_27;
  z_17 :
  Cpop();
  goto v_17;
  w_17 :
  Cpush(b_18);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,4);
  MoveTop(6,1);
  TestFun(6,1,"SDef",3,&&d_18);
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  MoveArg(6,4,6,1,2);
  Epushd(7,1);
  Move(7,1,6,2);
  Tdupl();
  Cpush(e_18);
  Tdupl();
  BuildVard(7,1);
  Epushd(8,1);
  MoveTop(8,1);
  TestStr(8,1,"main",&&x_18);
  goto w_18;
  x_18 :
  goto fail;
  w_18 :
  Epopd(8,1);
  Cpop();
  Crestore();
  Cjump();
  e_18 :
  Tpop();
  Epushd(8,1);
  BuildFun("TNil",0);
  Rpush(y_18);
  goto t_28;
  y_18 :
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,1);
  goto c_18;
  d_18 :
  goto fail;
  c_18 :
  Epopd(6,4);
  OneNextSon();
  Rpush(z_18);
  goto m_5;
  z_18 :
  AllBuild();
  Cpop();
  goto a_18;
  b_18 :
  Epushd(6,3);
  MoveTop(6,1);
  TestFun(6,1,"Cons",2,&&b_19);
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Epushd(7,2);
  Move(7,1,6,2);
  Move(7,2,6,3);
  BuildVard(7,2);
  Epopd(7,2);
  Rpush(c_19);
  goto m_5;
  c_19 :
  goto a_19;
  b_19 :
  goto fail;
  a_19 :
  Epopd(6,3);
  a_18 :
  v_17 :
  Return();
  u_17 :
  Epopd(5,0);
  Epushd(5,1);
  MoveTop(5,1);
  Move(4,1,5,1);
  BuildVard(4,1);
  Epushd(6,0);
  Rpush(d_19);
  g_6 :
  Cpush(f_19);
  Rpush(g_19);
  goto n_27;
  g_19 :
  Cpop();
  goto e_19;
  f_19 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(7,1);
  MoveTop(7,1);
  Epushd(8,1);
  Move(8,1,7,1);
  BuildVard(8,1);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Epopd(8,1);
  Epopd(7,1);
  OneNextSon();
  Rpush(h_19);
  goto e_28;
  h_19 :
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(k_19);
  goto g_6;
  k_19 :
  AllBuild();
  e_19 :
  Return();
  d_19 :
  Epopd(6,0);
  Epushd(6,1);
  MoveTop(6,1);
  Move(4,2,6,1);
  BuildVard(4,3);
  Epushd(7,0);
  Rpush(l_19);
  a_7 :
  Cpush(n_19);
  Rpush(o_19);
  goto n_27;
  o_19 :
  Cpop();
  goto m_19;
  n_19 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,4);
  MoveTop(8,1);
  TestFun(8,1,"SDef",3,&&q_19);
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  MoveArg(8,4,8,1,2);
  Epushd(9,4);
  Move(9,3,8,2);
  Move(9,1,8,3);
  Move(9,2,8,4);
  Tdupl();
  Cpush(s_19);
  BuildVard(4,1);
  Epushd(10,0);
  Tdupl();
  t_19 :
  MatchFun("Cons",2);
  Cpush(u_19);
  Arg(0);
  Epushd(11,5);
  MoveTop(11,1);
  TestFun(11,1,"TCons",2,&&x_19);
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  TestFun(11,3,"TCons",2,&&z_19);
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  TestFun(11,5,"TNil",0,&&b_20);
  Move(9,3,11,2);
  Move(9,4,11,4);
  goto a_20;
  b_20 :
  goto fail;
  a_20 :
  goto y_19;
  z_19 :
  goto fail;
  y_19 :
  goto w_19;
  x_19 :
  goto fail;
  w_19 :
  Epopd(11,5);
  Tpop();
  Cpop();
  goto v_19;
  u_19 :
  Arg(1);
  Tdrop();
  goto t_19;
  v_19 :
  Tpop();
  Epopd(10,0);
  Cpop();
  goto r_19;
  s_19 :
  BuildVard(9,3);
  Epushd(10,1);
  MoveTop(10,1);
  Move(9,4,10,1);
  Epopd(10,1);
  r_19 :
  Tpop();
  Epushd(10,1);
  Epushd(11,1);
  BuildFun("TNil",0);
  BuildVard(4,2);
  Epushd(12,1);
  MoveTop(12,1);
  Move(11,1,12,1);
  BuildVard(11,1);
  Tpush();
  BuildVard(9,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(12,1);
  Epopd(11,1);
  Rpush(c_20);
  goto z_28;
  c_20 :
  Epushd(11,1);
  MoveTop(11,1);
  Move(10,1,11,1);
  BuildVard(9,4);
  Tpush();
  BuildVard(9,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("SDef",3);
  Epopd(11,1);
  Epopd(10,1);
  Epopd(9,4);
  goto p_19;
  q_19 :
  goto fail;
  p_19 :
  Epopd(8,4);
  OneNextSon();
  Rpush(d_20);
  goto a_7;
  d_20 :
  AllBuild();
  m_19 :
  Return();
  l_19 :
  Epopd(7,0);
  Epushd(7,1);
  MoveTop(7,1);
  Move(4,4,7,1);
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,1);
  Tpop();
  BuildVard(4,4);
  Epopd(4,4);
  Epopd(3,1);
  goto s_17;
  t_17 :
  goto fail;
  s_17 :
  Epopd(2,3);
  Epopd(1,0);
  Epopd(0,1);
  Return();
  g_28 :
  Epushd(0,0);
  Cpush(f_20);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  Cpop();
  goto e_20;
  f_20 :
  Cpush(h_20);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Cpush(i_20);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  TestStr(1,1,"main",&&k_20);
  goto j_20;
  k_20 :
  goto fail;
  j_20 :
  Epopd(1,1);
  Cpop();
  Crestore();
  Cjump();
  i_20 :
  OneNextSon();
  Rpush(l_20);
  goto n_27;
  l_20 :
  OneNextSon();
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Seq",2);
  TravInit();
  OneNextSon();
  MatchFun("Match",1);
  TravInit();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  AllBuild();
  AllBuild();
  Cpop();
  goto g_20;
  h_20 :
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Cpush(m_20);
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  TestStr(1,1,"main",&&o_20);
  goto n_20;
  o_20 :
  goto fail;
  n_20 :
  Epopd(1,1);
  Cpop();
  Crestore();
  Cjump();
  m_20 :
  OneNextSon();
  Rpush(p_20);
  goto n_27;
  p_20 :
  OneNextSon();
  MatchFun("Seq",2);
  TravInit();
  OneNextSon();
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Seq",2);
  TravInit();
  OneNextSon();
  MatchFun("Match",1);
  TravInit();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  AllBuild();
  OneNextSon();
  AllBuild();
  AllBuild();
  g_20 :
  e_20 :
  Epopd(0,0);
  Return();
  o_28 :
  Epushd(0,0);
  Rpush(q_20);
  f_39 :
  Epushd(1,5);
  MoveTop(1,1);
  TestFun(1,1,"TCons",2,&&s_20);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  TestFun(1,3,"TCons",2,&&u_20);
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  TestFun(1,5,"TNil",0,&&w_20);
  Epushd(2,2);
  Move(2,1,1,2);
  Move(2,2,1,4);
  Epushd(3,1);
  BuildVard(2,1);
  AllInit();
  x_20 :
  AllNextSon(&&y_20);
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Rpush(z_20);
  goto f_39;
  z_20 :
  Epushd(5,3);
  MoveTop(5,1);
  TestFun(5,1,"TCons",2,&&b_21);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Epushd(6,2);
  Move(6,2,5,2);
  Move(6,1,5,3);
  BuildVard(6,2);
  Epopd(6,2);
  goto a_21;
  b_21 :
  goto fail;
  a_21 :
  Epopd(5,3);
  Epopd(4,1);
  goto x_20;
  y_20 :
  AllBuild();
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,2);
  Epushd(2,0);
  Cpush(d_21);
  Epushd(3,0);
  Epushd(4,0);
  Rpush(e_21);
  x_7 :
  Rpush(f_21);
  goto p_28;
  f_21 :
  Cpush(h_21);
  Rpush(i_21);
  goto x_7;
  i_21 :
  Cpop();
  goto g_21;
  h_21 :
  g_21 :
  Return();
  e_21 :
  Epopd(4,0);
  Epopd(3,0);
  Rpush(j_21);
  goto f_39;
  j_21 :
  Cpop();
  goto c_21;
  d_21 :
  c_21 :
  Epopd(2,0);
  goto v_20;
  w_20 :
  goto fail;
  v_20 :
  goto t_20;
  u_20 :
  goto fail;
  t_20 :
  goto r_20;
  s_20 :
  goto fail;
  r_20 :
  Epopd(1,5);
  Return();
  q_20 :
  Epopd(0,0);
  Return();
  p_28 :
  Epushd(0,8);
  MoveTop(0,1);
  TestFun(0,1,"TCons",2,&&l_21);
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  TestFun(0,2,"Call",2,&&n_21);
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  TestFun(0,3,"SVar",1,&&p_21);
  MoveArg(0,4,0,3,0);
  TestFun(0,6,"TCons",2,&&r_21);
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  TestFun(0,8,"TNil",0,&&t_21);
  Cpush(v_21);
  Epushd(1,6);
  Move(1,2,0,4);
  Move(1,1,0,5);
  Move(1,6,0,7);
  Tdupl();
  BuildVard(1,1);
  Rpush(w_21);
  goto x_28;
  w_21 :
  Epushd(2,1);
  MoveTop(2,1);
  Move(1,3,2,1);
  BuildVard(1,6);
  Epushd(3,0);
  Tdupl();
  x_21 :
  MatchFun("Cons",2);
  Cpush(y_21);
  Arg(0);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  OneNextSon();
  Tdupl();
  Rpush(a_22);
  goto x_28;
  a_22 :
  Epushd(4,1);
  MoveTop(4,1);
  Move(1,3,4,1);
  Epopd(4,1);
  Tpop();
  Epushd(4,1);
  MoveTop(4,1);
  Move(1,4,4,1);
  Epopd(4,1);
  OneNextSon();
  Epushd(4,1);
  MoveTop(4,1);
  Move(1,5,4,1);
  Epopd(4,1);
  AllBuild();
  Tpop();
  Cpop();
  goto z_21;
  y_21 :
  Arg(1);
  Tdrop();
  goto x_21;
  z_21 :
  Tpop();
  Epopd(3,0);
  Epopd(2,1);
  Tpop();
  Epushd(2,1);
  BuildVard(1,5);
  Rpush(b_22);
  goto q_28;
  b_22 :
  Epushd(3,1);
  MoveTop(3,1);
  Move(2,1,3,1);
  Epushd(4,1);
  BuildVard(1,4);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(5,7);
  MoveTop(5,1);
  TestFun(5,1,"TCons",2,&&d_22);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  TestFun(5,3,"TCons",2,&&f_22);
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  TestFun(5,5,"TCons",2,&&h_22);
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  TestFun(5,7,"TNil",0,&&j_22);
  Epushd(6,3);
  Move(6,1,5,2);
  Move(6,2,5,4);
  Move(6,3,5,6);
  Epushd(7,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(8,0);
  Epushd(9,0);
  Rpush(k_22);
  t_8 :
  Epushd(10,9);
  MoveTop(10,1);
  TestFun(10,1,"TCons",2,&&m_22);
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  TestFun(10,2,"Nil",0,&&o_22);
  TestFun(10,5,"TCons",2,&&q_22);
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  TestFun(10,6,"Nil",0,&&s_22);
  TestFun(10,9,"TNil",0,&&u_22);
  Epushd(11,0);
  BuildFun("Nil",0);
  Epopd(11,0);
  goto t_22;
  u_22 :
  goto fail;
  t_22 :
  goto r_22;
  s_22 :
  goto fail;
  r_22 :
  goto p_22;
  q_22 :
  goto fail;
  p_22 :
  goto n_22;
  o_22 :
  TestFun(10,2,"Cons",2,&&v_22);
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  TestFun(10,5,"TCons",2,&&x_22);
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  TestFun(10,6,"Cons",2,&&z_22);
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  TestFun(10,9,"TNil",0,&&b_23);
  Epushd(11,4);
  Move(11,1,10,3);
  Move(11,3,10,4);
  Move(11,2,10,7);
  Move(11,4,10,8);
  BuildVard(11,1);
  Tpush();
  BuildVard(11,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(11,3);
  Tpush();
  BuildVard(11,4);
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
  Epopd(11,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(11,5);
  MoveTop(11,1);
  TestFun(11,1,"TCons",2,&&d_23);
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  TestFun(11,3,"TCons",2,&&f_23);
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  TestFun(11,5,"TNil",0,&&h_23);
  Epushd(12,2);
  Move(12,1,11,2);
  Move(12,2,11,4);
  BuildVard(12,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(12,2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(12,2);
  goto g_23;
  h_23 :
  goto fail;
  g_23 :
  goto e_23;
  f_23 :
  goto fail;
  e_23 :
  goto c_23;
  d_23 :
  goto fail;
  c_23 :
  Epopd(11,5);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(i_23);
  goto t_8;
  i_23 :
  OneNextSon();
  Rpush(j_23);
  goto e_28;
  j_23 :
  AllBuild();
  AllBuild();
  Epushd(11,5);
  MoveTop(11,1);
  TestFun(11,1,"TCons",2,&&l_23);
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  TestFun(11,3,"TCons",2,&&n_23);
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  TestFun(11,5,"TNil",0,&&p_23);
  Epushd(12,2);
  Move(12,1,11,2);
  Move(12,2,11,4);
  BuildVard(12,1);
  Tpush();
  BuildVard(12,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(12,2);
  goto o_23;
  p_23 :
  goto fail;
  o_23 :
  goto m_23;
  n_23 :
  goto fail;
  m_23 :
  goto k_23;
  l_23 :
  goto fail;
  k_23 :
  Epopd(11,5);
  goto a_23;
  b_23 :
  goto fail;
  a_23 :
  goto y_22;
  z_22 :
  goto fail;
  y_22 :
  goto w_22;
  x_22 :
  goto fail;
  w_22 :
  goto n_22;
  v_22 :
  goto fail;
  n_22 :
  goto l_22;
  m_22 :
  goto fail;
  l_22 :
  Epopd(10,9);
  Return();
  k_22 :
  Epopd(9,0);
  Epopd(8,0);
  Epushd(8,1);
  MoveTop(8,1);
  Move(7,1,8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  Epopd(7,1);
  Epushd(7,5);
  MoveTop(7,1);
  TestFun(7,1,"TCons",2,&&s_23);
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  TestFun(7,3,"TCons",2,&&u_23);
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  TestFun(7,5,"TNil",0,&&f_24);
  Epushd(8,2);
  Move(8,2,7,2);
  Move(8,1,7,4);
  BuildVard(8,2);
  Epushd(9,0);
  Rpush(g_24);
  g_9 :
  Cpush(k_24);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_24);
  goto g_9;
  l_24 :
  AllBuild();
  Cpop();
  goto i_24;
  k_24 :
  Rpush(m_24);
  goto n_27;
  m_24 :
  BuildVard(8,1);
  i_24 :
  Return();
  g_24 :
  Epopd(9,0);
  Epopd(8,2);
  goto v_23;
  f_24 :
  goto fail;
  v_23 :
  goto t_23;
  u_23 :
  goto fail;
  t_23 :
  goto r_23;
  s_23 :
  goto fail;
  r_23 :
  Epopd(7,5);
  Epopd(6,3);
  Epushd(6,1);
  MoveTop(6,1);
  Move(4,1,6,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
  goto i_22;
  j_22 :
  goto fail;
  i_22 :
  goto g_22;
  h_22 :
  goto fail;
  g_22 :
  goto e_22;
  f_22 :
  goto fail;
  e_22 :
  goto c_22;
  d_22 :
  goto fail;
  c_22 :
  Epopd(5,7);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,6);
  Cpop();
  goto u_21;
  v_21 :
  Epushd(1,4);
  Move(1,2,0,4);
  Move(1,1,0,5);
  Move(1,4,0,7);
  Tdupl();
  BuildVard(1,4);
  Epushd(2,0);
  Tdupl();
  o_24 :
  MatchFun("Cons",2);
  Cpush(w_25);
  Arg(0);
  Epushd(3,7);
  MoveTop(3,1);
  TestFun(3,1,"SDef",3,&&z_25);
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  TestFun(3,3,"Nil",0,&&b_26);
  TestFun(3,4,"Call",2,&&d_26);
  MoveArg(3,5,3,4,0);
  MoveArg(3,7,3,4,1);
  TestFun(3,5,"SVar",1,&&i_26);
  MoveArg(3,6,3,5,0);
  TestFun(3,7,"Nil",0,&&m_26);
  Move(1,2,3,2);
  Move(1,3,3,6);
  goto l_26;
  m_26 :
  goto fail;
  l_26 :
  goto h_26;
  i_26 :
  goto fail;
  h_26 :
  goto c_26;
  d_26 :
  goto fail;
  c_26 :
  goto a_26;
  b_26 :
  goto fail;
  a_26 :
  goto y_25;
  z_25 :
  goto fail;
  y_25 :
  Epopd(3,7);
  Tpop();
  Cpop();
  goto x_25;
  w_25 :
  Arg(1);
  Tdrop();
  goto o_24;
  x_25 :
  Tpop();
  Epopd(2,0);
  Tpop();
  BuildVard(1,3);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,4);
  u_21 :
  goto s_21;
  t_21 :
  goto fail;
  s_21 :
  goto q_21;
  r_21 :
  goto fail;
  q_21 :
  goto o_21;
  p_21 :
  goto fail;
  o_21 :
  goto m_21;
  n_21 :
  goto fail;
  m_21 :
  goto k_21;
  l_21 :
  goto fail;
  k_21 :
  Epopd(0,8);
  Return();
  q_28 :
  Epushd(0,0);
  Rpush(n_26);
  goto r_28;
  n_26 :
  Rpush(o_26);
  goto w_28;
  o_26 :
  Epopd(0,0);
  Return();
  r_28 :
  Epushd(0,1);
  MoveTop(0,1);
  Epushd(1,0);
  Epushd(2,0);
  Epushd(3,1);
  Move(3,1,0,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Rpush(p_26);
  j_9 :
  Epushd(3,0);
  Rpush(v_26);
  f_11 :
  Epushd(4,5);
  MoveTop(4,1);
  TestFun(4,1,"TCons",2,&&x_26);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  TestFun(4,3,"TCons",2,&&z_26);
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  TestFun(4,5,"TNil",0,&&b_27);
  Cpush(d_27);
  Epushd(5,2);
  Move(5,2,4,2);
  Move(5,1,4,4);
  BuildVard(5,2);
  MatchFun("Var",1);
  TravInit();
  OneNextSon();
  Epushd(6,1);
  MoveTop(6,1);
  Epushd(7,1);
  Move(7,1,6,1);
  Epushd(8,1);
  BuildVard(7,1);
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  Epushd(10,1);
  BuildVard(7,1);
  BuildVard(5,1);
  Epushd(11,1);
  MoveTop(11,1);
  Move(10,1,11,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(11,1);
  Epopd(10,1);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,1);
  Rpush(e_27);
  goto s_28;
  e_27 :
  Epopd(6,1);
  AllBuild();
  Epopd(5,2);
  Cpop();
  goto c_27;
  d_27 :
  Cpush(s_27);
  Epushd(5,5);
  Move(5,1,4,2);
  Move(5,4,4,4);
  Tdupl();
  BuildVard(5,1);
  Rpush(h_28);
  goto u_28;
  h_28 :
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,2,6,1);
  Epushd(7,0);
  Rpush(i_28);
  z_12 :
  Cpush(k_28);
  Rpush(l_28);
  goto n_27;
  l_28 :
  Cpop();
  goto j_28;
  k_28 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(m_28);
  goto t_28;
  m_28 :
  OneNextSon();
  Rpush(n_28);
  goto z_12;
  n_28 :
  AllBuild();
  j_28 :
  Return();
  i_28 :
  Epopd(7,0);
  Epushd(7,1);
  MoveTop(7,1);
  Move(5,3,7,1);
  Epushd(8,1);
  BuildVard(5,2);
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Epushd(10,0);
  Rpush(b_29);
  a_13 :
  Epushd(11,9);
  MoveTop(11,1);
  TestFun(11,1,"TCons",2,&&d_29);
  MoveArg(11,2,11,1,0);
  MoveArg(11,5,11,1,1);
  TestFun(11,2,"Nil",0,&&f_29);
  TestFun(11,5,"TCons",2,&&h_29);
  MoveArg(11,6,11,5,0);
  MoveArg(11,9,11,5,1);
  TestFun(11,6,"Nil",0,&&j_29);
  TestFun(11,9,"TNil",0,&&l_29);
  Epushd(12,0);
  BuildFun("Nil",0);
  Epopd(12,0);
  goto k_29;
  l_29 :
  goto fail;
  k_29 :
  goto i_29;
  j_29 :
  goto fail;
  i_29 :
  goto g_29;
  h_29 :
  goto fail;
  g_29 :
  goto e_29;
  f_29 :
  TestFun(11,2,"Cons",2,&&m_29);
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  TestFun(11,5,"TCons",2,&&o_29);
  MoveArg(11,6,11,5,0);
  MoveArg(11,9,11,5,1);
  TestFun(11,6,"Cons",2,&&q_29);
  MoveArg(11,7,11,6,0);
  MoveArg(11,8,11,6,1);
  TestFun(11,9,"TNil",0,&&s_29);
  Epushd(12,4);
  Move(12,1,11,3);
  Move(12,3,11,4);
  Move(12,2,11,7);
  Move(12,4,11,8);
  BuildVard(12,1);
  Tpush();
  BuildVard(12,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(12,3);
  Tpush();
  BuildVard(12,4);
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
  Epopd(12,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_29);
  goto a_13;
  t_29 :
  OneNextSon();
  Rpush(u_29);
  goto e_28;
  u_29 :
  AllBuild();
  AllBuild();
  Epushd(12,5);
  MoveTop(12,1);
  TestFun(12,1,"TCons",2,&&x_29);
  MoveArg(12,2,12,1,0);
  MoveArg(12,3,12,1,1);
  TestFun(12,3,"TCons",2,&&z_29);
  MoveArg(12,4,12,3,0);
  MoveArg(12,5,12,3,1);
  TestFun(12,5,"TNil",0,&&b_30);
  Epushd(13,2);
  Move(13,1,12,2);
  Move(13,2,12,4);
  BuildVard(13,1);
  Tpush();
  BuildVard(13,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(13,2);
  goto a_30;
  b_30 :
  goto fail;
  a_30 :
  goto y_29;
  z_29 :
  goto fail;
  y_29 :
  goto w_29;
  x_29 :
  goto fail;
  w_29 :
  Epopd(12,5);
  goto r_29;
  s_29 :
  goto fail;
  r_29 :
  goto p_29;
  q_29 :
  goto fail;
  p_29 :
  goto n_29;
  o_29 :
  goto fail;
  n_29 :
  goto e_29;
  m_29 :
  goto fail;
  e_29 :
  goto c_29;
  d_29 :
  goto fail;
  c_29 :
  Epopd(11,9);
  Return();
  b_29 :
  Epopd(10,0);
  Epopd(9,0);
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
  Epushd(8,5);
  MoveTop(8,1);
  TestFun(8,1,"TCons",2,&&d_30);
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  TestFun(8,3,"TCons",2,&&f_30);
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  TestFun(8,5,"TNil",0,&&h_30);
  Epushd(9,2);
  Move(9,2,8,2);
  Move(9,1,8,4);
  BuildVard(9,2);
  Epushd(10,0);
  Rpush(i_30);
  b_13 :
  Cpush(k_30);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_30);
  goto b_13;
  l_30 :
  AllBuild();
  Cpop();
  goto j_30;
  k_30 :
  Rpush(m_30);
  goto n_27;
  m_30 :
  BuildVard(9,1);
  j_30 :
  Return();
  i_30 :
  Epopd(10,0);
  Epopd(9,2);
  Epushd(9,1);
  MoveTop(9,1);
  Move(5,5,9,1);
  Epopd(9,1);
  goto g_30;
  h_30 :
  goto fail;
  g_30 :
  goto e_30;
  f_30 :
  goto fail;
  e_30 :
  goto c_30;
  d_30 :
  goto fail;
  c_30 :
  Epopd(8,5);
  Epopd(7,1);
  Epopd(6,1);
  Tpop();
  Epushd(6,1);
  BuildVard(5,1);
  Epushd(7,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  BuildVard(5,3);
  OneNextSon();
  AllBuild();
  Epopd(7,0);
  Epushd(7,1);
  MoveTop(7,1);
  Move(6,1,7,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildVard(5,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,5);
  Epushd(5,7);
  MoveTop(5,1);
  TestFun(5,1,"TCons",2,&&o_30);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  TestFun(5,3,"TCons",2,&&q_30);
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  TestFun(5,5,"TCons",2,&&s_30);
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  TestFun(5,7,"TNil",0,&&u_30);
  Epushd(6,3);
  Move(6,3,5,2);
  Move(6,2,5,4);
  Move(6,1,5,6);
  BuildVard(6,3);
  Epushd(7,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(8,1);
  MoveTop(8,1);
  Epushd(9,1);
  Move(9,1,8,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(v_30);
  goto j_9;
  v_30 :
  Epopd(9,1);
  Epopd(8,1);
  AllBuild();
  Epopd(7,0);
  Epopd(6,3);
  goto t_30;
  u_30 :
  goto fail;
  t_30 :
  goto r_30;
  s_30 :
  goto fail;
  r_30 :
  goto p_30;
  q_30 :
  goto fail;
  p_30 :
  goto n_30;
  o_30 :
  goto fail;
  n_30 :
  Epopd(5,7);
  Cpop();
  goto r_27;
  s_27 :
  Epushd(5,2);
  Move(5,2,4,2);
  Move(5,1,4,4);
  BuildVard(5,2);
  AllInit();
  w_30 :
  AllNextSon(&&x_30);
  Epushd(6,1);
  MoveTop(6,1);
  Epushd(7,1);
  Move(7,1,6,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(y_30);
  goto f_11;
  y_30 :
  Epopd(7,1);
  Epopd(6,1);
  goto w_30;
  x_30 :
  AllBuild();
  Epopd(5,2);
  r_27 :
  c_27 :
  goto a_27;
  b_27 :
  goto fail;
  a_27 :
  goto y_26;
  z_26 :
  goto fail;
  y_26 :
  goto w_26;
  x_26 :
  goto fail;
  w_26 :
  Epopd(4,5);
  Return();
  v_26 :
  Epopd(3,0);
  Return();
  p_26 :
  Epopd(2,0);
  Epopd(1,0);
  Epopd(0,1);
  Return();
  s_28 :
  Epushd(0,0);
  Rpush(z_30);
  v_29 :
  Epushd(1,11);
  MoveTop(1,5);
  TestFun(1,5,"TCons",2,&&c_31);
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  TestFun(1,7,"TCons",2,&&e_31);
  MoveArg(1,8,1,7,0);
  MoveArg(1,11,1,7,1);
  TestFun(1,8,"Cons",2,&&g_31);
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  TestFun(1,11,"TNil",0,&&i_31);
  TestFun(1,9,"TCons",2,&&k_31);
  MoveArg(1,1,1,9,0);
  MoveArg(1,2,1,9,1);
  TestFun(1,2,"TCons",2,&&m_31);
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  TestFun(1,4,"TNil",0,&&o_31);
  Cpush(q_31);
  Epushd(2,2);
  Move(2,1,1,6);
  Move(2,1,1,1);
  Move(2,2,1,3);
  BuildVard(2,2);
  Epopd(2,2);
  Cpop();
  goto p_31;
  q_31 :
  Rpush(r_31);
  goto h_10;
  r_31 :
  p_31 :
  goto n_31;
  o_31 :
  Rpush(s_31);
  goto h_10;
  s_31 :
  n_31 :
  goto l_31;
  m_31 :
  Rpush(t_31);
  goto h_10;
  t_31 :
  l_31 :
  goto j_31;
  k_31 :
  Rpush(u_31);
  goto h_10;
  u_31 :
  j_31 :
  goto h_31;
  i_31 :
  goto fail;
  h_31 :
  goto f_31;
  g_31 :
  goto fail;
  f_31 :
  goto d_31;
  e_31 :
  goto fail;
  d_31 :
  goto b_31;
  c_31 :
  goto fail;
  b_31 :
  goto a_31;
  h_10 :
  Epushd(2,2);
  Move(2,1,1,6);
  Move(2,2,1,10);
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,2);
  Rpush(v_31);
  goto v_29;
  v_31 :
  Return();
  a_31 :
  Epopd(1,11);
  Return();
  z_30 :
  Epopd(0,0);
  Return();
  t_28 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  u_28 :
  Epushd(0,6);
  MoveTop(0,2);
  TestFun(0,2,"Scope",2,&&x_31);
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Epushd(1,2);
  Move(1,2,0,3);
  Move(1,1,0,1);
  BuildVard(1,2);
  Epopd(1,2);
  goto w_31;
  x_31 :
  TestFun(0,2,"LRule",1,&&y_31);
  MoveArg(0,3,0,2,0);
  TestFun(0,3,"Rule",3,&&a_32);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Epushd(1,3);
  Move(1,3,0,4);
  Move(1,1,0,5);
  Move(1,2,0,6);
  BuildVard(1,3);
  Rpush(b_32);
  goto v_28;
  b_32 :
  Epopd(1,3);
  goto z_31;
  a_32 :
  goto fail;
  z_31 :
  goto w_31;
  y_31 :
  goto fail;
  w_31 :
  Epopd(0,6);
  Return();
  v_28 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(c_32);
  l_13 :
  Cpush(e_32);
  Epushd(2,2);
  MoveTop(2,1);
  TestFun(2,1,"Var",1,&&g_32);
  MoveArg(2,2,2,1,0);
  Epushd(3,1);
  Move(3,1,2,2);
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,1);
  goto f_32;
  g_32 :
  goto fail;
  f_32 :
  Epopd(2,2);
  Cpop();
  goto d_32;
  e_32 :
  Cpush(i_32);
  Epushd(2,1);
  Tdupl();
  Rpush(j_32);
  goto u_28;
  j_32 :
  Epushd(3,1);
  MoveTop(3,1);
  Move(2,1,3,1);
  Epopd(3,1);
  Tpop();
  Epushd(3,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(4,1);
  MoveTop(4,1);
  Epushd(5,1);
  Move(5,1,4,1);
  Epushd(6,1);
  BuildVard(5,1);
  Rpush(k_32);
  goto l_13;
  k_32 :
  Epushd(7,1);
  MoveTop(7,1);
  Move(6,1,7,1);
  Epushd(8,1);
  BuildVard(5,1);
  BuildVard(2,1);
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,1);
  Epushd(5,5);
  MoveTop(5,1);
  TestFun(5,1,"TCons",2,&&m_32);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  TestFun(5,3,"TCons",2,&&o_32);
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  TestFun(5,5,"TNil",0,&&q_32);
  Epushd(6,2);
  Move(6,2,5,2);
  Move(6,1,5,4);
  BuildVard(6,2);
  Rpush(r_32);
  m_16 :
  Cpush(u_32);
  Rpush(v_32);
  goto n_27;
  v_32 :
  Cpop();
  goto t_32;
  u_32 :
  Cpush(x_32);
  Epushd(7,3);
  MoveTop(7,1);
  TestFun(7,1,"Cons",2,&&z_32);
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Epushd(8,2);
  Move(8,2,7,2);
  Move(8,1,7,3);
  Tdupl();
  BuildVard(6,1);
  Epushd(9,0);
  Tdupl();
  a_33 :
  MatchFun("Cons",2);
  Cpush(b_33);
  Arg(0);
  Epushd(10,1);
  MoveTop(10,1);
  Move(8,2,10,1);
  Epopd(10,1);
  Tpop();
  Cpop();
  goto c_33;
  b_33 :
  Arg(1);
  Tdrop();
  goto a_33;
  c_33 :
  Tpop();
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(d_33);
  goto m_16;
  d_33 :
  goto y_32;
  z_32 :
  goto fail;
  y_32 :
  Epopd(7,3);
  Cpop();
  goto w_32;
  x_32 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_33);
  goto m_16;
  e_33 :
  AllBuild();
  w_32 :
  t_32 :
  Return();
  r_32 :
  Epopd(6,2);
  goto p_32;
  q_32 :
  goto fail;
  p_32 :
  goto n_32;
  o_32 :
  goto fail;
  n_32 :
  goto l_32;
  m_32 :
  goto fail;
  l_32 :
  Epopd(5,5);
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,1);
  Epushd(2,1);
  MoveTop(2,1);
  Epushd(3,0);
  Epushd(4,1);
  Epushd(5,1);
  Move(5,1,2,1);
  Tdupl();
  BuildVard(5,1);
  _ST_explode_term();
  Epushd(6,5);
  MoveTop(6,1);
  TestFun(6,1,"TCons",2,&&g_33);
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  TestFun(6,3,"TCons",2,&&i_33);
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  TestFun(6,5,"TNil",0,&&k_33);
  Move(4,1,6,4);
  goto j_33;
  k_33 :
  goto fail;
  j_33 :
  goto h_33;
  i_33 :
  goto fail;
  h_33 :
  goto f_33;
  g_33 :
  goto fail;
  f_33 :
  Epopd(6,5);
  Tpop();
  Epopd(5,1);
  BuildVard(4,1);
  Epushd(5,0);
  Rpush(l_33);
  k_17 :
  Cpush(n_33);
  Rpush(o_33);
  goto n_27;
  o_33 :
  BuildFun("Nil",0);
  Cpop();
  goto m_33;
  n_33 :
  Epushd(6,3);
  MoveTop(6,1);
  TestFun(6,1,"Cons",2,&&q_33);
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Epushd(7,2);
  Move(7,1,6,2);
  Move(7,2,6,3);
  Epushd(8,1);
  BuildVard(7,1);
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  Epushd(10,1);
  BuildVard(7,2);
  Rpush(r_33);
  goto k_17;
  r_33 :
  Epushd(11,1);
  MoveTop(11,1);
  Move(10,1,11,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(11,1);
  Epopd(10,1);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,2);
  Epushd(7,5);
  MoveTop(7,1);
  TestFun(7,1,"TCons",2,&&t_33);
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  TestFun(7,3,"TCons",2,&&v_33);
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  TestFun(7,5,"TNil",0,&&x_33);
  Epushd(8,2);
  Move(8,2,7,2);
  Move(8,1,7,4);
  BuildVard(8,2);
  Rpush(y_33);
  p_17 :
  Cpush(a_34);
  Rpush(b_34);
  goto n_27;
  b_34 :
  BuildVard(8,1);
  Cpop();
  goto z_33;
  a_34 :
  Cpush(d_34);
  Epushd(9,3);
  MoveTop(9,1);
  TestFun(9,1,"Cons",2,&&f_34);
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Epushd(10,2);
  Move(10,2,9,2);
  Move(10,1,9,3);
  Tdupl();
  BuildVard(8,1);
  Epushd(11,0);
  Tdupl();
  g_34 :
  MatchFun("Cons",2);
  Cpush(h_34);
  Arg(0);
  Epushd(12,1);
  MoveTop(12,1);
  Move(10,2,12,1);
  Epopd(12,1);
  Tpop();
  Cpop();
  goto i_34;
  h_34 :
  Arg(1);
  Tdrop();
  goto g_34;
  i_34 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(j_34);
  goto p_17;
  j_34 :
  goto e_34;
  f_34 :
  goto fail;
  e_34 :
  Epopd(9,3);
  Cpop();
  goto c_34;
  d_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_34);
  goto p_17;
  k_34 :
  AllBuild();
  c_34 :
  z_33 :
  Return();
  y_33 :
  Epopd(8,2);
  goto w_33;
  x_33 :
  goto fail;
  w_33 :
  goto u_33;
  v_33 :
  goto fail;
  u_33 :
  goto s_33;
  t_33 :
  goto fail;
  s_33 :
  Epopd(7,5);
  goto p_33;
  q_33 :
  goto fail;
  p_33 :
  Epopd(6,3);
  m_33 :
  Return();
  l_33 :
  Epopd(5,0);
  Epopd(4,1);
  Epopd(3,0);
  Epopd(2,1);
  Cpop();
  goto h_32;
  i_32 :
  Epushd(2,1);
  MoveTop(2,1);
  Epushd(3,0);
  Epushd(4,1);
  Epushd(5,1);
  Move(5,1,2,1);
  Tdupl();
  BuildVard(5,1);
  _ST_explode_term();
  Epushd(6,5);
  MoveTop(6,1);
  TestFun(6,1,"TCons",2,&&m_34);
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  TestFun(6,3,"TCons",2,&&o_34);
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  TestFun(6,5,"TNil",0,&&q_34);
  Move(4,1,6,4);
  goto p_34;
  q_34 :
  goto fail;
  p_34 :
  goto n_34;
  o_34 :
  goto fail;
  n_34 :
  goto l_34;
  m_34 :
  goto fail;
  l_34 :
  Epopd(6,5);
  Tpop();
  Epopd(5,1);
  BuildVard(4,1);
  Epushd(5,0);
  Rpush(r_34);
  k_18 :
  Cpush(t_34);
  Rpush(u_34);
  goto n_27;
  u_34 :
  BuildFun("Nil",0);
  Cpop();
  goto s_34;
  t_34 :
  Epushd(6,3);
  MoveTop(6,1);
  TestFun(6,1,"Cons",2,&&w_34);
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Epushd(7,2);
  Move(7,1,6,2);
  Move(7,2,6,3);
  Epushd(8,1);
  BuildVard(7,1);
  Rpush(x_34);
  goto l_13;
  x_34 :
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  Epushd(10,1);
  BuildVard(7,2);
  Rpush(y_34);
  goto k_18;
  y_34 :
  Epushd(11,1);
  MoveTop(11,1);
  Move(10,1,11,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(11,1);
  Epopd(10,1);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,2);
  Epushd(7,5);
  MoveTop(7,1);
  TestFun(7,1,"TCons",2,&&a_35);
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  TestFun(7,3,"TCons",2,&&c_35);
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  TestFun(7,5,"TNil",0,&&e_35);
  Epushd(8,2);
  Move(8,2,7,2);
  Move(8,1,7,4);
  BuildVard(8,2);
  Rpush(f_35);
  p_18 :
  Cpush(h_35);
  Rpush(i_35);
  goto n_27;
  i_35 :
  BuildVard(8,1);
  Cpop();
  goto g_35;
  h_35 :
  Cpush(k_35);
  Epushd(9,3);
  MoveTop(9,1);
  TestFun(9,1,"Cons",2,&&m_35);
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Epushd(10,2);
  Move(10,2,9,2);
  Move(10,1,9,3);
  Tdupl();
  BuildVard(8,1);
  Epushd(11,0);
  Tdupl();
  n_35 :
  MatchFun("Cons",2);
  Cpush(o_35);
  Arg(0);
  Epushd(12,1);
  MoveTop(12,1);
  Move(10,2,12,1);
  Epopd(12,1);
  Tpop();
  Cpop();
  goto p_35;
  o_35 :
  Arg(1);
  Tdrop();
  goto n_35;
  p_35 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(q_35);
  goto p_18;
  q_35 :
  goto l_35;
  m_35 :
  goto fail;
  l_35 :
  Epopd(9,3);
  Cpop();
  goto j_35;
  k_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_35);
  goto p_18;
  r_35 :
  AllBuild();
  j_35 :
  g_35 :
  Return();
  f_35 :
  Epopd(8,2);
  goto d_35;
  e_35 :
  goto fail;
  d_35 :
  goto b_35;
  c_35 :
  goto fail;
  b_35 :
  goto z_34;
  a_35 :
  goto fail;
  z_34 :
  Epopd(7,5);
  goto v_34;
  w_34 :
  goto fail;
  v_34 :
  Epopd(6,3);
  s_34 :
  Return();
  r_34 :
  Epopd(5,0);
  Epopd(4,1);
  Epopd(3,0);
  Epopd(2,1);
  h_32 :
  d_32 :
  Return();
  c_32 :
  Epopd(1,0);
  Epopd(0,0);
  Return();
  w_28 :
  Epushd(0,1);
  MoveTop(0,1);
  Epushd(1,0);
  Epushd(2,0);
  Epushd(3,1);
  Move(3,1,0,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Rpush(s_35);
  j_19 :
  Epushd(3,0);
  Rpush(t_35);
  q_23 :
  Epushd(4,5);
  MoveTop(4,1);
  TestFun(4,1,"TCons",2,&&v_35);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  TestFun(4,3,"TCons",2,&&x_35);
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  TestFun(4,5,"TNil",0,&&z_35);
  Cpush(b_36);
  Epushd(5,2);
  Move(5,2,4,2);
  Move(5,1,4,4);
  BuildVard(5,2);
  MatchFun("SVar",1);
  TravInit();
  OneNextSon();
  Epushd(6,1);
  MoveTop(6,1);
  Epushd(7,1);
  Move(7,1,6,1);
  Epushd(8,1);
  BuildVard(7,1);
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  Epushd(10,1);
  BuildVard(7,1);
  BuildVard(5,1);
  Epushd(11,1);
  MoveTop(11,1);
  Move(10,1,11,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(11,1);
  Epopd(10,1);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,1);
  Rpush(c_36);
  goto s_28;
  c_36 :
  Epopd(6,1);
  AllBuild();
  Epopd(5,2);
  Cpop();
  goto a_36;
  b_36 :
  Cpush(e_36);
  Epushd(5,5);
  Move(5,1,4,2);
  Move(5,4,4,4);
  Tdupl();
  BuildVard(5,1);
  Epushd(6,7);
  MoveTop(6,5);
  TestFun(6,5,"Let",2,&&g_36);
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  TestFun(6,6,"SDef",3,&&i_36);
  MoveArg(6,1,6,6,0);
  MoveArg(6,2,6,6,1);
  MoveArg(6,3,6,6,2);
  Epushd(7,4);
  Move(7,4,6,1);
  Move(7,1,6,2);
  Move(7,2,6,3);
  Move(7,3,6,7);
  BuildVard(7,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,4);
  goto h_36;
  i_36 :
  goto fail;
  h_36 :
  goto f_36;
  g_36 :
  TestFun(6,5,"SDef",3,&&j_36);
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  MoveArg(6,4,6,5,2);
  Epushd(7,3);
  Move(7,1,6,6);
  Move(7,3,6,7);
  Move(7,2,6,4);
  BuildVard(7,3);
  Epopd(7,3);
  goto f_36;
  j_36 :
  TestFun(6,5,"Rec",2,&&k_36);
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  Epushd(7,2);
  Move(7,2,6,6);
  Move(7,1,6,7);
  BuildVard(7,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,2);
  goto f_36;
  k_36 :
  goto fail;
  f_36 :
  Epopd(6,7);
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,2,6,1);
  Epushd(7,0);
  Rpush(l_36);
  r_25 :
  Cpush(n_36);
  Rpush(o_36);
  goto n_27;
  o_36 :
  Cpop();
  goto m_36;
  n_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(p_36);
  goto t_28;
  p_36 :
  OneNextSon();
  Rpush(q_36);
  goto r_25;
  q_36 :
  AllBuild();
  m_36 :
  Return();
  l_36 :
  Epopd(7,0);
  Epushd(7,1);
  MoveTop(7,1);
  Move(5,3,7,1);
  Epushd(8,1);
  BuildVard(5,2);
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Epushd(10,0);
  Rpush(r_36);
  s_25 :
  Epushd(11,9);
  MoveTop(11,1);
  TestFun(11,1,"TCons",2,&&t_36);
  MoveArg(11,2,11,1,0);
  MoveArg(11,5,11,1,1);
  TestFun(11,2,"Nil",0,&&v_36);
  TestFun(11,5,"TCons",2,&&x_36);
  MoveArg(11,6,11,5,0);
  MoveArg(11,9,11,5,1);
  TestFun(11,6,"Nil",0,&&z_36);
  TestFun(11,9,"TNil",0,&&b_37);
  Epushd(12,0);
  BuildFun("Nil",0);
  Epopd(12,0);
  goto a_37;
  b_37 :
  goto fail;
  a_37 :
  goto y_36;
  z_36 :
  goto fail;
  y_36 :
  goto w_36;
  x_36 :
  goto fail;
  w_36 :
  goto u_36;
  v_36 :
  TestFun(11,2,"Cons",2,&&c_37);
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  TestFun(11,5,"TCons",2,&&e_37);
  MoveArg(11,6,11,5,0);
  MoveArg(11,9,11,5,1);
  TestFun(11,6,"Cons",2,&&g_37);
  MoveArg(11,7,11,6,0);
  MoveArg(11,8,11,6,1);
  TestFun(11,9,"TNil",0,&&i_37);
  Epushd(12,4);
  Move(12,1,11,3);
  Move(12,3,11,4);
  Move(12,2,11,7);
  Move(12,4,11,8);
  BuildVard(12,1);
  Tpush();
  BuildVard(12,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(12,3);
  Tpush();
  BuildVard(12,4);
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
  Epopd(12,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(j_37);
  goto s_25;
  j_37 :
  OneNextSon();
  Rpush(k_37);
  goto e_28;
  k_37 :
  AllBuild();
  AllBuild();
  Epushd(12,5);
  MoveTop(12,1);
  TestFun(12,1,"TCons",2,&&m_37);
  MoveArg(12,2,12,1,0);
  MoveArg(12,3,12,1,1);
  TestFun(12,3,"TCons",2,&&o_37);
  MoveArg(12,4,12,3,0);
  MoveArg(12,5,12,3,1);
  TestFun(12,5,"TNil",0,&&q_37);
  Epushd(13,2);
  Move(13,1,12,2);
  Move(13,2,12,4);
  BuildVard(13,1);
  Tpush();
  BuildVard(13,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(13,2);
  goto p_37;
  q_37 :
  goto fail;
  p_37 :
  goto n_37;
  o_37 :
  goto fail;
  n_37 :
  goto l_37;
  m_37 :
  goto fail;
  l_37 :
  Epopd(12,5);
  goto h_37;
  i_37 :
  goto fail;
  h_37 :
  goto f_37;
  g_37 :
  goto fail;
  f_37 :
  goto d_37;
  e_37 :
  goto fail;
  d_37 :
  goto u_36;
  c_37 :
  goto fail;
  u_36 :
  goto s_36;
  t_36 :
  goto fail;
  s_36 :
  Epopd(11,9);
  Return();
  r_36 :
  Epopd(10,0);
  Epopd(9,0);
  Epushd(9,1);
  MoveTop(9,1);
  Move(8,1,9,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
  Epushd(8,5);
  MoveTop(8,1);
  TestFun(8,1,"TCons",2,&&s_37);
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  TestFun(8,3,"TCons",2,&&u_37);
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  TestFun(8,5,"TNil",0,&&w_37);
  Epushd(9,2);
  Move(9,2,8,2);
  Move(9,1,8,4);
  BuildVard(9,2);
  Epushd(10,0);
  Rpush(x_37);
  t_25 :
  Cpush(z_37);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_38);
  goto t_25;
  a_38 :
  AllBuild();
  Cpop();
  goto y_37;
  z_37 :
  Rpush(b_38);
  goto n_27;
  b_38 :
  BuildVard(9,1);
  y_37 :
  Return();
  x_37 :
  Epopd(10,0);
  Epopd(9,2);
  Epushd(9,1);
  MoveTop(9,1);
  Move(5,5,9,1);
  Epopd(9,1);
  goto v_37;
  w_37 :
  goto fail;
  v_37 :
  goto t_37;
  u_37 :
  goto fail;
  t_37 :
  goto r_37;
  s_37 :
  goto fail;
  r_37 :
  Epopd(8,5);
  Epopd(7,1);
  Epopd(6,1);
  Tpop();
  Epushd(6,1);
  BuildVard(5,1);
  Epushd(7,0);
  Cpush(d_38);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  BuildVard(5,3);
  Epushd(8,3);
  MoveTop(8,1);
  TestFun(8,1,"Cons",2,&&f_38);
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Epushd(9,2);
  Move(9,2,8,2);
  Move(9,1,8,3);
  BuildVard(9,2);
  Epopd(9,2);
  goto e_38;
  f_38 :
  goto fail;
  e_38 :
  Epopd(8,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  Cpop();
  goto c_38;
  d_38 :
  Cpush(h_38);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  BuildVard(5,3);
  OneNextSon();
  AllBuild();
  Cpop();
  goto g_38;
  h_38 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  BuildVard(5,3);
  Epushd(8,3);
  MoveTop(8,1);
  TestFun(8,1,"Cons",2,&&j_38);
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Epushd(9,2);
  Move(9,2,8,2);
  Move(9,1,8,3);
  BuildVard(9,2);
  Epopd(9,2);
  goto i_38;
  j_38 :
  goto fail;
  i_38 :
  Epopd(8,3);
  OneNextSon();
  AllBuild();
  g_38 :
  c_38 :
  Epopd(7,0);
  Epushd(7,1);
  MoveTop(7,1);
  Move(6,1,7,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildVard(5,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(7,1);
  Epopd(6,1);
  Epopd(5,5);
  Epushd(5,7);
  MoveTop(5,1);
  TestFun(5,1,"TCons",2,&&l_38);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  TestFun(5,3,"TCons",2,&&n_38);
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  TestFun(5,5,"TCons",2,&&p_38);
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  TestFun(5,7,"TNil",0,&&r_38);
  Epushd(6,3);
  Move(6,3,5,2);
  Move(6,2,5,4);
  Move(6,1,5,6);
  BuildVard(6,3);
  Epushd(7,0);
  Cpush(t_38);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(8,1);
  MoveTop(8,1);
  Epushd(9,1);
  Move(9,1,8,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(u_38);
  goto j_19;
  u_38 :
  Epopd(9,1);
  Epopd(8,1);
  AllBuild();
  OneNextSon();
  Epushd(8,1);
  MoveTop(8,1);
  Epushd(9,1);
  Move(9,1,8,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(v_38);
  goto j_19;
  v_38 :
  Epopd(9,1);
  Epopd(8,1);
  AllBuild();
  Cpop();
  goto s_38;
  t_38 :
  Cpush(x_38);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(8,1);
  MoveTop(8,1);
  Epushd(9,1);
  Move(9,1,8,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(y_38);
  goto j_19;
  y_38 :
  Epopd(9,1);
  Epopd(8,1);
  AllBuild();
  Cpop();
  goto w_38;
  x_38 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(8,1);
  MoveTop(8,1);
  Epushd(9,1);
  Move(9,1,8,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(z_38);
  goto j_19;
  z_38 :
  Epopd(9,1);
  Epopd(8,1);
  AllBuild();
  w_38 :
  s_38 :
  Epopd(7,0);
  Epopd(6,3);
  goto q_38;
  r_38 :
  goto fail;
  q_38 :
  goto o_38;
  p_38 :
  goto fail;
  o_38 :
  goto m_38;
  n_38 :
  goto fail;
  m_38 :
  goto k_38;
  l_38 :
  goto fail;
  k_38 :
  Epopd(5,7);
  Cpop();
  goto d_36;
  e_36 :
  Epushd(5,2);
  Move(5,2,4,2);
  Move(5,1,4,4);
  BuildVard(5,2);
  AllInit();
  a_39 :
  AllNextSon(&&b_39);
  Epushd(6,1);
  MoveTop(6,1);
  Epushd(7,1);
  Move(7,1,6,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(c_39);
  goto q_23;
  c_39 :
  Epopd(7,1);
  Epopd(6,1);
  goto a_39;
  b_39 :
  AllBuild();
  Epopd(5,2);
  d_36 :
  a_36 :
  goto y_35;
  z_35 :
  goto fail;
  y_35 :
  goto w_35;
  x_35 :
  goto fail;
  w_35 :
  goto u_35;
  v_35 :
  goto fail;
  u_35 :
  Epopd(4,5);
  Return();
  t_35 :
  Epopd(3,0);
  Return();
  s_35 :
  Epopd(2,0);
  Epopd(1,0);
  Epopd(0,1);
  Return();
  x_28 :
  Epushd(0,0);
  Rpush(d_39);
  s_32 :
  Cpush(g_39);
  Rpush(h_39);
  goto n_27;
  h_39 :
  BuildInt(0);
  Cpop();
  goto e_39;
  g_39 :
  Epushd(1,3);
  MoveTop(1,1);
  TestFun(1,1,"Cons",2,&&j_39);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Epushd(2,2);
  Move(2,1,1,2);
  Move(2,2,1,3);
  BuildVard(2,2);
  Epopd(2,2);
  Rpush(k_39);
  goto s_32;
  k_39 :
  Epushd(2,1);
  MoveTop(2,1);
  Epushd(3,1);
  Move(3,1,2,1);
  BuildVard(3,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(l_39);
  goto y_28;
  l_39 :
  Epopd(3,1);
  Epopd(2,1);
  goto i_39;
  j_39 :
  goto fail;
  i_39 :
  Epopd(1,3);
  e_39 :
  Return();
  d_39 :
  Epopd(0,0);
  Return();
  y_28 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  z_28 :
  Epushd(0,0);
  Epushd(1,0);
  Epushd(2,2);
  Rpush(m_39);
  goto a_29;
  m_39 :
  Epushd(3,5);
  MoveTop(3,1);
  TestFun(3,1,"TCons",2,&&o_39);
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  TestFun(3,3,"TCons",2,&&q_39);
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  TestFun(3,5,"TNil",0,&&s_39);
  Move(2,2,3,2);
  Move(2,1,3,4);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(t_39);
  q_26 :
  Cpush(v_39);
  Epushd(5,1);
  MoveTop(5,1);
  Epushd(6,3);
  Move(6,1,5,1);
  Tdupl();
  BuildVard(6,1);
  Epushd(7,4);
  MoveTop(7,1);
  TestFun(7,1,"Call",2,&&y_39);
  MoveArg(7,2,7,1,0);
  MoveArg(7,4,7,1,1);
  TestFun(7,2,"SVar",1,&&a_40);
  MoveArg(7,3,7,2,0);
  TestFun(7,4,"Nil",0,&&c_40);
  Epushd(8,1);
  Move(8,1,7,3);
  BuildVard(8,1);
  Epopd(8,1);
  Epushd(8,1);
  MoveTop(8,1);
  Move(6,2,8,1);
  BuildVard(2,2);
  Epushd(9,1);
  MoveTop(9,1);
  Move(6,3,9,1);
  Epopd(9,1);
  Epopd(8,1);
  goto b_40;
  c_40 :
  goto fail;
  b_40 :
  goto z_39;
  a_40 :
  goto fail;
  z_39 :
  goto x_39;
  y_39 :
  goto fail;
  x_39 :
  Epopd(7,4);
  Tpop();
  BuildVard(6,2);
  Tpush();
  BuildVard(6,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(d_40);
  goto s_28;
  d_40 :
  Epopd(6,3);
  Epopd(5,1);
  Cpop();
  goto u_39;
  v_39 :
  AllInit();
  e_40 :
  AllNextSon(&&f_40);
  Rpush(g_40);
  goto q_26;
  g_40 :
  goto e_40;
  f_40 :
  AllBuild();
  u_39 :
  Return();
  t_39 :
  Epopd(4,0);
  goto r_39;
  s_39 :
  goto fail;
  r_39 :
  goto p_39;
  q_39 :
  goto fail;
  p_39 :
  goto n_39;
  o_39 :
  goto fail;
  n_39 :
  Epopd(3,5);
  Epopd(2,2);
  Epopd(1,0);
  Epopd(0,0);
  Return();
  a_29 :
  Epushd(0,7);
  MoveTop(0,1);
  TestFun(0,1,"TCons",2,&&i_40);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  TestFun(0,3,"TCons",2,&&k_40);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  TestFun(0,5,"TNil",0,&&m_40);
  Epushd(1,2);
  Move(1,1,0,2);
  Move(1,2,0,4);
  Epopd(1,2);
  goto l_40;
  m_40 :
  TestFun(0,5,"TCons",2,&&n_40);
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  TestFun(0,7,"TNil",0,&&p_40);
  Epushd(1,2);
  Epushd(2,3);
  Move(2,1,0,2);
  Move(2,2,0,4);
  Move(2,3,0,6);
  Epushd(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(4,0);
  Epushd(5,0);
  Rpush(q_40);
  f_27 :
  Epushd(6,9);
  MoveTop(6,1);
  TestFun(6,1,"TCons",2,&&s_40);
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  TestFun(6,2,"Nil",0,&&u_40);
  TestFun(6,5,"TCons",2,&&w_40);
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  TestFun(6,6,"Nil",0,&&y_40);
  TestFun(6,9,"TNil",0,&&a_41);
  Epushd(7,0);
  BuildFun("Nil",0);
  Epopd(7,0);
  goto z_40;
  a_41 :
  goto fail;
  z_40 :
  goto x_40;
  y_40 :
  goto fail;
  x_40 :
  goto v_40;
  w_40 :
  goto fail;
  v_40 :
  goto t_40;
  u_40 :
  TestFun(6,2,"Cons",2,&&b_41);
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  TestFun(6,5,"TCons",2,&&d_41);
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  TestFun(6,6,"Cons",2,&&f_41);
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  TestFun(6,9,"TNil",0,&&h_41);
  Epushd(7,4);
  Move(7,1,6,3);
  Move(7,3,6,4);
  Move(7,2,6,7);
  Move(7,4,6,8);
  BuildVard(7,1);
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(7,3);
  Tpush();
  BuildVard(7,4);
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
  Epopd(7,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(i_41);
  goto f_27;
  i_41 :
  OneNextSon();
  Rpush(j_41);
  goto e_28;
  j_41 :
  AllBuild();
  AllBuild();
  Epushd(7,5);
  MoveTop(7,1);
  TestFun(7,1,"TCons",2,&&l_41);
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  TestFun(7,3,"TCons",2,&&n_41);
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  TestFun(7,5,"TNil",0,&&p_41);
  Epushd(8,2);
  Move(8,1,7,2);
  Move(8,2,7,4);
  BuildVard(8,1);
  Tpush();
  BuildVard(8,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(8,2);
  goto o_41;
  p_41 :
  goto fail;
  o_41 :
  goto m_41;
  n_41 :
  goto fail;
  m_41 :
  goto k_41;
  l_41 :
  goto fail;
  k_41 :
  Epopd(7,5);
  goto g_41;
  h_41 :
  goto fail;
  g_41 :
  goto e_41;
  f_41 :
  goto fail;
  e_41 :
  goto c_41;
  d_41 :
  goto fail;
  c_41 :
  goto t_40;
  b_41 :
  goto fail;
  t_40 :
  goto r_40;
  s_40 :
  goto fail;
  r_40 :
  Epopd(6,9);
  Return();
  q_40 :
  Epopd(5,0);
  Epopd(4,0);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,1,4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Epopd(1,2);
  goto o_40;
  p_40 :
  goto fail;
  o_40 :
  goto l_40;
  n_40 :
  goto fail;
  l_40 :
  goto j_40;
  k_40 :
  goto fail;
  j_40 :
  goto h_40;
  i_40 :
  goto fail;
  h_40 :
  Epopd(0,7);
  Return();
  q_41 :
DOIT_END
