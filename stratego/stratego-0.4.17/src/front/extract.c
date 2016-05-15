#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(i_46);
  goto main;
  main :
  Epushd(0,0);
  Rpush(y_2);
  goto a_56;
  y_2 :
  Epopd(0,0);
  Return();
  a_56 :
  Epushd(0,0);
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
  Rpush(z_2);
  h_0 :
  Cpush(b_3);
  Cpush(h_3);
  Rpush(i_3);
  goto b_56;
  i_3 :
  Cpop();
  goto f_3;
  h_3 :
  Rpush(j_3);
  goto c_56;
  j_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_3);
  goto h_0;
  k_3 :
  AllBuild();
  f_3 :
  Cpop();
  goto a_3;
  b_3 :
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
  a_3 :
  Return();
  z_2 :
  AllBuild();
  Epopd(1,0);
  Cpush(m_3);
  Rpush(x_3);
  goto d_56;
  x_3 :
  Cpop();
  goto l_3;
  m_3 :
  Cpush(z_3);
  Rpush(a_4);
  goto i_56;
  a_4 :
  Epushd(1,1);
  Tdupl();
  Rpush(c_4);
  goto k_56;
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
  goto r_56;
  d_4 :
  OneNextSon();
  Rpush(e_4);
  goto q_56;
  e_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(f_4);
  goto k_56;
  f_4 :
  MatchVard(1,1);
  Tpop();
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
  BuildVard(1,1);
  Tpush();
  BuildFun("Runtime",1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,2);
  Epopd(1,1);
  Rpush(k_4);
  goto l_56;
  k_4 :
  Rpush(l_4);
  goto o_56;
  l_4 :
  Cpop();
  goto y_3;
  z_3 :
  Rpush(m_4);
  goto p_56;
  m_4 :
  y_3 :
  l_3 :
  Epopd(0,0);
  Return();
  b_56 :
  MatchFun("Nil",0);
  Return();
  c_56 :
  Epushd(0,0);
  Cpush(p_4);
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
  goto n_4;
  p_4 :
  Cpush(r_4);
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
  goto q_4;
  r_4 :
  Cpush(b_5);
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
  goto s_4;
  b_5 :
  Cpush(f_5);
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
  goto d_5;
  f_5 :
  Cpush(k_5);
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
  goto j_5;
  k_5 :
  Cpush(m_5);
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
  goto l_5;
  m_5 :
  Cpush(o_5);
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
  goto n_5;
  o_5 :
  Cpush(q_5);
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
  goto p_5;
  q_5 :
  Cpush(s_5);
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
  goto r_5;
  s_5 :
  Cpush(u_5);
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
  goto t_5;
  u_5 :
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
  Cpush(k_6);
  Rpush(l_6);
  goto a_0;
  l_6 :
  Cpop();
  goto a_6;
  k_6 :
  Cpush(n_6);
  Rpush(o_6);
  goto b_0;
  o_6 :
  Cpop();
  goto m_6;
  n_6 :
  Cpush(s_6);
  Rpush(t_6);
  goto c_0;
  t_6 :
  Cpop();
  goto p_6;
  s_6 :
  Cpush(v_6);
  Rpush(c_7);
  goto d_0;
  c_7 :
  Cpop();
  goto u_6;
  v_6 :
  Rpush(d_7);
  goto u_2;
  d_7 :
  u_6 :
  p_6 :
  m_6 :
  a_6 :
  goto z_5;
  u_2 :
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
  z_5 :
  goto y_5;
  d_0 :
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
  y_5 :
  goto x_5;
  c_0 :
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
  x_5 :
  goto w_5;
  b_0 :
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
  w_5 :
  goto v_5;
  a_0 :
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
  v_5 :
  Epopd(1,10);
  t_5 :
  r_5 :
  p_5 :
  n_5 :
  l_5 :
  j_5 :
  d_5 :
  s_4 :
  q_4 :
  n_4 :
  Epopd(0,0);
  Return();
  d_56 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  q_7 :
  MatchFun("Cons",2);
  Cpush(r_7);
  Arg(0);
  Cpush(i_9);
  Rpush(j_9);
  goto e_56;
  j_9 :
  Cpop();
  goto h_9;
  i_9 :
  MatchFun("Undefined",1);
  h_9 :
  Tpop();
  Cpop();
  goto g_9;
  r_7 :
  Arg(1);
  Tdrop();
  goto q_7;
  g_9 :
  Tpop();
  Epopd(1,0);
  Rpush(k_9);
  goto f_56;
  k_9 :
  Epopd(0,0);
  Return();
  e_56 :
  MatchFun("Help",0);
  Return();
  f_56 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  l_9 :
  MatchFun("Cons",2);
  Cpush(m_9);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto n_9;
  m_9 :
  Arg(1);
  Tdrop();
  goto l_9;
  n_9 :
  Tpop();
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
  Rpush(o_9);
  goto g_56;
  o_9 :
  BuildInt(1);
  Rpush(p_9);
  goto h_56;
  p_9 :
  Tpop();
  Epopd(0,1);
  Return();
  g_56 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  h_56 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  i_56 :
  Epushd(0,1);
  Cpush(r_9);
  Epushd(1,0);
  Tdupl();
  s_9 :
  MatchFun("Cons",2);
  Cpush(t_9);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto u_9;
  t_9 :
  Arg(1);
  Tdrop();
  goto s_9;
  u_9 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto q_9;
  r_9 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  q_9 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(v_9);
  goto j_56;
  v_9 :
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
  j_56 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  k_56 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  l_56 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(x_9);
  Epushd(1,0);
  Tdupl();
  y_9 :
  MatchFun("Cons",2);
  Cpush(z_9);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto a_10;
  z_9 :
  Arg(1);
  Tdrop();
  goto y_9;
  a_10 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto w_9;
  x_9 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  w_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_10);
  goto q_56;
  b_10 :
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
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildVard(0,1);
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
  OneNextSon();
  Rpush(c_10);
  goto q_56;
  c_10 :
  AllBuild();
  AllBuild();
  Cpush(e_10);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  f_10 :
  MatchFun("Cons",2);
  Cpush(g_10);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto h_10;
  g_10 :
  Arg(1);
  Tdrop();
  goto f_10;
  h_10 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(k_10);
  goto m_56;
  k_10 :
  OneNextSon();
  Rpush(l_10);
  goto q_56;
  l_10 :
  AllBuild();
  AllBuild();
  Cpop();
  goto d_10;
  e_10 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_10);
  goto n_56;
  m_10 :
  OneNextSon();
  Rpush(n_10);
  goto q_56;
  n_10 :
  AllBuild();
  AllBuild();
  d_10 :
  Epopd(0,1);
  Return();
  m_56 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  n_56 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  o_56 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(p_10);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(x_10);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  y_10 :
  MatchFun("Cons",2);
  Cpush(z_10);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto a_11;
  z_10 :
  Arg(1);
  Tdrop();
  goto y_10;
  a_11 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  x_10 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_11);
  goto q_56;
  b_11 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  g_11 :
  MatchFun("Cons",2);
  Cpush(h_11);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto k_11;
  h_11 :
  Arg(1);
  Tdrop();
  goto g_11;
  k_11 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_11);
  goto q_56;
  l_11 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  m_11 :
  MatchFun("Cons",2);
  Cpush(n_11);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto o_11;
  n_11 :
  Arg(1);
  Tdrop();
  goto m_11;
  o_11 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_11);
  goto q_56;
  p_11 :
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
  Rpush(q_11);
  goto g_56;
  q_11 :
  Cpop();
  goto o_10;
  p_10 :
  o_10 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(r_11);
  goto h_56;
  r_11 :
  Epopd(0,2);
  Return();
  p_56 :
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
  Rpush(s_11);
  goto g_56;
  s_11 :
  BuildInt(1);
  Rpush(t_11);
  goto h_56;
  t_11 :
  Epopd(0,0);
  Return();
  q_56 :
  MatchFun("TNil",0);
  Return();
  r_56 :
  Epushd(0,0);
  Epushd(1,3);
  MatchFun("Specification",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Signature",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Rules",1);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Strategies",1);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Epushd(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Rpush(u_11);
  goto t_56;
  u_11 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(1,2);
  Epushd(5,0);
  Rpush(v_11);
  b_4 :
  Cpush(x_11);
  Rpush(y_11);
  goto b_56;
  y_11 :
  Cpop();
  goto w_11;
  x_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MatchFun("RDef",3);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Arg(2);
  MatchVard(6,3);
  Tpop();
  Epushd(7,1);
  BuildVard(6,3);
  Rpush(z_11);
  goto x_56;
  z_11 :
  MatchVard(7,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildVard(6,3);
  Tpush();
  BuildFun("SRule",1);
  Tpush();
  BuildFun("Scope",2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(7,1);
  Epopd(6,3);
  OneNextSon();
  Rpush(a_12);
  goto b_4;
  a_12 :
  AllBuild();
  w_11 :
  Return();
  v_11 :
  Epopd(5,0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(1,3);
  Epushd(6,0);
  Rpush(b_12);
  o_4 :
  Cpush(d_12);
  Rpush(e_12);
  goto b_56;
  e_12 :
  Cpop();
  goto c_12;
  d_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(7,3);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchVard(7,2);
  Tpop();
  Arg(2);
  MatchVard(7,3);
  Tpop();
  Epushd(8,1);
  BuildVard(7,3);
  Rpush(f_12);
  goto x_56;
  f_12 :
  MatchVard(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildVard(7,3);
  Tpush();
  BuildFun("Scope",2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(8,1);
  Epopd(7,3);
  OneNextSon();
  Rpush(g_12);
  goto o_4;
  g_12 :
  AllBuild();
  c_12 :
  Return();
  b_12 :
  Epopd(6,0);
  MatchVard(5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Rpush(h_12);
  goto s_56;
  h_12 :
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Signature",1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Specification",1);
  Epopd(2,1);
  Epopd(1,3);
  Rpush(i_12);
  goto z_56;
  i_12 :
  Epushd(1,1);
  MatchFun("Specification",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Strategies",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Rpush(j_12);
  goto d_57;
  j_12 :
  Rpush(k_12);
  goto r_57;
  k_12 :
  Epopd(0,0);
  Return();
  s_56 :
  Epushd(0,0);
  Rpush(l_12);
  d_45 :
  Cpush(n_12);
  Rpush(o_12);
  goto b_56;
  o_12 :
  Cpop();
  goto m_12;
  n_12 :
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
  Rpush(p_12);
  x_4 :
  Cpush(r_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_12);
  goto x_4;
  s_12 :
  AllBuild();
  Cpop();
  goto q_12;
  r_12 :
  Rpush(t_12);
  goto b_56;
  t_12 :
  BuildVard(1,2);
  Rpush(u_12);
  goto d_45;
  u_12 :
  q_12 :
  Return();
  p_12 :
  Epopd(2,0);
  Epopd(1,2);
  m_12 :
  Return();
  l_12 :
  Epopd(0,0);
  Return();
  t_56 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(v_12);
  y_4 :
  Cpush(x_12);
  Rpush(y_12);
  goto b_56;
  y_12 :
  Cpop();
  goto w_12;
  x_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(z_12);
  goto u_56;
  z_12 :
  OneNextSon();
  Rpush(a_13);
  goto y_4;
  a_13 :
  AllBuild();
  w_12 :
  Return();
  v_12 :
  Epopd(1,0);
  Rpush(b_13);
  goto s_56;
  b_13 :
  Epopd(0,0);
  Return();
  u_56 :
  Epushd(0,2);
  MatchFunFC("Sorts",1,&&f_13);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(g_13);
  goto w_2;
  g_13 :
  goto e_13;
  f_13 :
  MatchFunFC("Operations",1,&&h_13);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(i_13);
  goto x_2;
  i_13 :
  goto e_13;
  h_13 :
  goto fail;
  e_13 :
  goto d_13;
  x_2 :
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(j_13);
  z_4 :
  Cpush(l_13);
  Rpush(m_13);
  goto b_56;
  m_13 :
  Cpop();
  goto k_13;
  l_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(n_13);
  goto v_56;
  n_13 :
  OneNextSon();
  Rpush(o_13);
  goto z_4;
  o_13 :
  AllBuild();
  k_13 :
  Return();
  j_13 :
  Epopd(1,0);
  Return();
  d_13 :
  goto c_13;
  w_2 :
  BuildFun("Nil",0);
  Return();
  c_13 :
  Epopd(0,2);
  Return();
  v_56 :
  Cpush(q_13);
  Epushd(0,2);
  MatchFun("OpDecl",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("ConstType",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  BuildVard(0,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cong",2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(0,2);
  Cpop();
  goto p_13;
  q_13 :
  Epushd(0,4);
  MatchFun("OpDecl",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("FunType",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(r_13);
  a_5 :
  Cpush(c_14);
  Rpush(d_14);
  goto b_56;
  d_14 :
  Cpop();
  goto s_13;
  c_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(e_14);
  goto w_56;
  e_14 :
  OneNextSon();
  Rpush(f_14);
  goto a_5;
  f_14 :
  AllBuild();
  s_13 :
  Return();
  r_13 :
  Epopd(1,0);
  MatchVard(0,4);
  Tpop();
  Epushd(1,1);
  BuildVard(0,4);
  Epushd(2,0);
  Rpush(r_14);
  c_5 :
  Cpush(t_14);
  Rpush(u_14);
  goto b_56;
  u_14 :
  Cpop();
  goto s_14;
  t_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Epopd(3,1);
  OneNextSon();
  Rpush(v_14);
  goto c_5;
  v_14 :
  AllBuild();
  s_14 :
  Return();
  r_14 :
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(0,2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cong",2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(1,1);
  Epopd(0,4);
  p_13 :
  Return();
  w_56 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  x_56 :
  Epushd(0,0);
  Rpush(w_14);
  h_5 :
  Cpush(y_14);
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
  goto x_14;
  y_14 :
  Cpush(a_15);
  Epushd(1,1);
  Tdupl();
  Rpush(b_15);
  goto y_56;
  b_15 :
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
  Rpush(c_15);
  goto h_5;
  c_15 :
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
  Rpush(d_15);
  i_6 :
  Cpush(m_15);
  Rpush(n_15);
  goto b_56;
  n_15 :
  Cpop();
  goto e_15;
  m_15 :
  Cpush(x_15);
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
  y_15 :
  MatchFun("Cons",2);
  Cpush(i_16);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto j_16;
  i_16 :
  Arg(1);
  Tdrop();
  goto y_15;
  j_16 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(k_16);
  goto i_6;
  k_16 :
  Cpop();
  goto o_15;
  x_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_16);
  goto i_6;
  l_16 :
  AllBuild();
  o_15 :
  e_15 :
  Return();
  d_15 :
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
  Rpush(m_16);
  z_8 :
  Cpush(o_16);
  Rpush(p_16);
  goto b_56;
  p_16 :
  BuildFun("Nil",0);
  Cpop();
  goto n_16;
  o_16 :
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
  Rpush(q_16);
  goto z_8;
  q_16 :
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
  Rpush(r_16);
  e_9 :
  Cpush(e_17);
  Rpush(f_17);
  goto b_56;
  f_17 :
  BuildVard(4,3);
  Cpop();
  goto d_17;
  e_17 :
  Cpush(h_17);
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
  i_17 :
  MatchFun("Cons",2);
  Cpush(j_17);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto k_17;
  j_17 :
  Arg(1);
  Tdrop();
  goto i_17;
  k_17 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(l_17);
  goto e_9;
  l_17 :
  Cpop();
  goto g_17;
  h_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_17);
  goto e_9;
  m_17 :
  AllBuild();
  g_17 :
  d_17 :
  Return();
  r_16 :
  Epopd(4,4);
  n_16 :
  Return();
  m_16 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto z_14;
  a_15 :
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
  Rpush(n_17);
  u_10 :
  Cpush(p_17);
  Rpush(q_17);
  goto b_56;
  q_17 :
  BuildFun("Nil",0);
  Cpop();
  goto o_17;
  p_17 :
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
  Rpush(r_17);
  goto h_5;
  r_17 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(s_17);
  goto u_10;
  s_17 :
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
  Rpush(t_17);
  e_11 :
  Cpush(v_17);
  Rpush(w_17);
  goto b_56;
  w_17 :
  BuildVard(3,3);
  Cpop();
  goto u_17;
  v_17 :
  Cpush(y_17);
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
  z_17 :
  MatchFun("Cons",2);
  Cpush(a_18);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto b_18;
  a_18 :
  Arg(1);
  Tdrop();
  goto z_17;
  b_18 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(c_18);
  goto e_11;
  c_18 :
  Cpop();
  goto x_17;
  y_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_18);
  goto e_11;
  d_18 :
  AllBuild();
  x_17 :
  u_17 :
  Return();
  t_17 :
  Epopd(3,4);
  o_17 :
  Return();
  n_17 :
  Epopd(2,0);
  Epopd(1,1);
  z_14 :
  x_14 :
  Return();
  w_14 :
  Epopd(0,0);
  Return();
  y_56 :
  Cpush(f_18);
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
  goto e_18;
  f_18 :
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
  Rpush(i_18);
  goto x_56;
  i_18 :
  Epopd(0,3);
  e_18 :
  Return();
  z_56 :
  Epushd(0,0);
  Rpush(j_18);
  goto a_57;
  j_18 :
  Rpush(k_18);
  goto c_57;
  k_18 :
  Epopd(0,0);
  Return();
  a_57 :
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
  Rpush(l_18);
  j_11 :
  Epushd(1,0);
  Rpush(m_18);
  f_15 :
  Cpush(o_18);
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
  MatchFun("Var",1);
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
  Rpush(p_18);
  goto b_57;
  p_18 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto n_18;
  o_18 :
  Cpush(r_18);
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
  Rpush(s_18);
  goto y_56;
  s_18 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(t_18);
  t_16 :
  Cpush(v_18);
  Rpush(w_18);
  goto b_56;
  w_18 :
  Cpop();
  goto u_18;
  v_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(x_18);
  goto w_56;
  x_18 :
  OneNextSon();
  Rpush(y_18);
  goto t_16;
  y_18 :
  AllBuild();
  u_18 :
  Return();
  t_18 :
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
  Rpush(z_18);
  u_16 :
  Cpush(b_19);
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
  goto a_19;
  b_19 :
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
  Rpush(c_19);
  goto u_16;
  c_19 :
  OneNextSon();
  Rpush(d_19);
  goto q_56;
  d_19 :
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
  a_19 :
  Return();
  z_18 :
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
  Rpush(e_19);
  v_16 :
  Cpush(g_19);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_19);
  goto v_16;
  h_19 :
  AllBuild();
  Cpop();
  goto f_19;
  g_19 :
  Rpush(i_19);
  goto b_56;
  i_19 :
  BuildVard(3,1);
  f_19 :
  Return();
  e_19 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
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
  MatchFun("Scope",2);
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
  Rpush(j_19);
  goto j_11;
  j_19 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto q_18;
  r_18 :
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
  k_19 :
  AllNextSon(&&l_19);
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
  Rpush(m_19);
  goto f_15;
  m_19 :
  Epopd(3,1);
  goto k_19;
  l_19 :
  AllBuild();
  Epopd(2,2);
  q_18 :
  n_18 :
  Return();
  m_18 :
  Epopd(1,0);
  Return();
  l_18 :
  Epopd(0,0);
  Return();
  b_57 :
  Epushd(0,0);
  Rpush(n_19);
  p_41 :
  Cpush(p_19);
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
  goto o_19;
  p_19 :
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
  Rpush(q_19);
  goto p_41;
  q_19 :
  o_19 :
  Return();
  n_19 :
  Epopd(0,0);
  Return();
  c_57 :
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
  Rpush(r_19);
  h_18 :
  Epushd(1,0);
  Rpush(s_19);
  o_21 :
  Cpush(u_19);
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
  Rpush(v_19);
  goto b_57;
  v_19 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto t_19;
  u_19 :
  Cpush(x_19);
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
  Cpush(z_19);
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
  goto y_19;
  z_19 :
  Cpush(b_20);
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
  goto a_20;
  b_20 :
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
  a_20 :
  y_19 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(c_20);
  s_24 :
  Cpush(e_20);
  Rpush(f_20);
  goto b_56;
  f_20 :
  Cpop();
  goto d_20;
  e_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(g_20);
  goto w_56;
  g_20 :
  OneNextSon();
  Rpush(h_20);
  goto s_24;
  h_20 :
  AllBuild();
  d_20 :
  Return();
  c_20 :
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
  Rpush(i_20);
  t_24 :
  Cpush(k_20);
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
  goto j_20;
  k_20 :
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
  Rpush(l_20);
  goto t_24;
  l_20 :
  OneNextSon();
  Rpush(m_20);
  goto q_56;
  m_20 :
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
  j_20 :
  Return();
  i_20 :
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
  Rpush(n_20);
  u_24 :
  Cpush(p_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_20);
  goto u_24;
  q_20 :
  AllBuild();
  Cpop();
  goto o_20;
  p_20 :
  Rpush(r_20);
  goto b_56;
  r_20 :
  BuildVard(3,1);
  o_20 :
  Return();
  n_20 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Cpush(t_20);
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
  goto s_20;
  t_20 :
  Cpush(v_20);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
  Cpop();
  goto u_20;
  v_20 :
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
  u_20 :
  s_20 :
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
  Cpush(x_20);
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
  Rpush(y_20);
  goto h_18;
  y_20 :
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
  Rpush(z_20);
  goto h_18;
  z_20 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto w_20;
  x_20 :
  Cpush(b_21);
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
  Rpush(c_21);
  goto h_18;
  c_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto a_21;
  b_21 :
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
  Rpush(d_21);
  goto h_18;
  d_21 :
  Epopd(4,1);
  AllBuild();
  a_21 :
  w_20 :
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto w_19;
  x_19 :
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
  e_21 :
  AllNextSon(&&f_21);
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
  Rpush(g_21);
  goto o_21;
  g_21 :
  Epopd(3,1);
  goto e_21;
  f_21 :
  AllBuild();
  Epopd(2,2);
  w_19 :
  t_19 :
  Return();
  s_19 :
  Epopd(1,0);
  Return();
  r_19 :
  Epopd(0,0);
  Return();
  d_57 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  BuildStr("main");
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(1,1);
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
  Epopd(1,1);
  Epushd(1,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
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
  Rpush(h_21);
  w_29 :
  Cpush(j_21);
  Epushd(2,9);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,5);
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
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(k_21);
  goto e_57;
  k_21 :
  MatchVard(2,6);
  BuildVard(2,6);
  Rpush(l_21);
  goto o_57;
  l_21 :
  MatchVard(2,7);
  BuildVard(2,7);
  Tpush();
  BuildVard(2,8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  Rpush(m_21);
  h_31 :
  Cpush(q_21);
  Rpush(r_21);
  goto b_56;
  r_21 :
  Cpop();
  goto n_21;
  q_21 :
  Cpush(t_21);
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tdupl();
  BuildVard(3,1);
  Epushd(5,0);
  Tdupl();
  u_21 :
  MatchFun("Cons",2);
  Cpush(v_21);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto w_21;
  v_21 :
  Arg(1);
  Tdrop();
  goto u_21;
  w_21 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(x_21);
  goto h_31;
  x_21 :
  Cpop();
  goto s_21;
  t_21 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_22);
  goto h_31;
  a_22 :
  AllBuild();
  s_21 :
  n_21 :
  Return();
  m_21 :
  Epopd(3,2);
  MatchVard(2,9);
  Tpop();
  Epushd(3,1);
  BuildVard(2,9);
  Tpush();
  BuildVard(2,1);
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
  Epushd(5,0);
  Rpush(d_22);
  j_31 :
  Cpush(k_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_22);
  goto j_31;
  l_22 :
  AllBuild();
  Cpop();
  goto j_22;
  k_22 :
  Rpush(m_22);
  goto b_56;
  m_22 :
  BuildVard(4,1);
  j_22 :
  Return();
  d_22 :
  Epopd(5,0);
  Epopd(4,2);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,9);
  Tpush();
  BuildVard(2,8);
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
  Rpush(n_22);
  k_31 :
  Cpush(p_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_22);
  goto k_31;
  q_22 :
  AllBuild();
  Cpop();
  goto o_22;
  p_22 :
  Rpush(r_22);
  goto b_56;
  r_22 :
  BuildVard(5,1);
  o_22 :
  Return();
  n_22 :
  Epopd(6,0);
  Epopd(5,2);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(2,4);
  Tpush();
  BuildVard(2,6);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(6,2);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,2);
  MatchVard(5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(2,3);
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
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,9);
  Cpop();
  goto i_21;
  j_21 :
  Epushd(2,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,5);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
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
  Tpop();
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildVard(2,6);
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
  Epopd(2,6);
  i_21 :
  Cpush(r_23);
  Epushd(2,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  Arg(1);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  BuildVard(2,3);
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
  goto q_23;
  r_23 :
  Rpush(s_23);
  goto w_29;
  s_23 :
  q_23 :
  Return();
  h_21 :
  Epopd(1,3);
  Cpush(u_23);
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
  Cpop();
  goto t_23;
  u_23 :
  Epushd(1,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Cons",2);
  Epushd(2,0);
  Rpush(v_23);
  g_32 :
  Cpush(e_24);
  Rpush(f_24);
  goto b_56;
  f_24 :
  Cpop();
  goto d_24;
  e_24 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(z_24);
  Epushd(3,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Mod",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
  Tpop();
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
  BuildStr("error: operator ");
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildStr("^");
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildStr(" undefined ");
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
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(a_25);
  goto q_57;
  a_25 :
  Epopd(3,3);
  Cpop();
  goto y_24;
  z_24 :
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
  BuildStr("error: operator ");
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildStr(" undefined ");
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
  Rpush(b_25);
  goto q_57;
  b_25 :
  Epopd(3,2);
  y_24 :
  OneNextSon();
  Rpush(c_25);
  goto g_32;
  c_25 :
  AllBuild();
  d_24 :
  Return();
  v_23 :
  Epopd(2,0);
  Tpop();
  BuildVard(1,1);
  Epopd(1,3);
  BuildInt(1);
  Rpush(d_25);
  goto h_56;
  d_25 :
  t_23 :
  Epopd(0,0);
  Return();
  e_57 :
  Epushd(0,0);
  Cpush(f_25);
  Epushd(1,5);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Mod",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,3);
  Tpop();
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(g_25);
  goto f_57;
  g_25 :
  MatchVard(1,5);
  Tpop();
  BuildVard(1,5);
  Epopd(1,5);
  Cpop();
  goto e_25;
  f_25 :
  Cpush(i_25);
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
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
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
  Tdupl();
  BuildVard(1,3);
  Epushd(2,0);
  Rpush(l_25);
  j_33 :
  Cpush(n_25);
  Rpush(r_25);
  goto b_56;
  r_25 :
  Cpop();
  goto m_25;
  n_25 :
  Cpush(t_25);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  MatchVard(1,1);
  OneNextSon();
  Tdupl();
  Rpush(u_25);
  goto k_57;
  u_25 :
  MatchVard(1,2);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(v_25);
  goto j_33;
  v_25 :
  AllBuild();
  Cpop();
  goto s_25;
  t_25 :
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
  Rpush(w_25);
  goto j_33;
  w_25 :
  s_25 :
  m_25 :
  Return();
  l_25 :
  Epopd(2,0);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  Rpush(x_25);
  goto l_57;
  x_25 :
  Cpop();
  goto h_25;
  i_25 :
  Epushd(1,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
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
  Tdupl();
  BuildVard(1,2);
  Epushd(2,0);
  Rpush(y_25);
  p_33 :
  Cpush(b_26);
  Rpush(c_26);
  goto b_56;
  c_26 :
  Cpop();
  goto a_26;
  b_26 :
  Cpush(e_26);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  MatchVard(1,1);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(f_26);
  goto p_33;
  f_26 :
  AllBuild();
  Cpop();
  goto d_26;
  e_26 :
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
  Rpush(g_26);
  goto p_33;
  g_26 :
  d_26 :
  a_26 :
  Return();
  y_25 :
  Epopd(2,0);
  MatchVard(1,3);
  Tpop();
  BuildVard(1,3);
  Epopd(1,3);
  Rpush(h_26);
  goto l_57;
  h_26 :
  h_25 :
  e_25 :
  Epopd(0,0);
  Return();
  f_57 :
  Cpush(j_26);
  Epushd(0,9);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchString("D");
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
  Tpop();
  Tdupl();
  Rpush(k_26);
  goto w_56;
  k_26 :
  MatchVard(0,3);
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  BuildVard(1,2);
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
  Rpush(l_26);
  u_35 :
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
  Tdupl();
  BuildVard(2,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(m_26);
  goto h_57;
  m_26 :
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(n_26);
  goto g_57;
  n_26 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,2);
  Epushd(5,4);
  MatchVard(5,1);
  Tdupl();
  Rpush(o_26);
  goto w_56;
  o_26 :
  MatchVard(5,2);
  Rpush(p_26);
  goto w_56;
  p_26 :
  MatchVard(5,3);
  Rpush(q_26);
  goto w_56;
  q_26 :
  MatchVard(5,4);
  Tpop();
  BuildVard(5,2);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildStr("Pair");
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("BAM",3);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildVard(5,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("Var",1);
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
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,4);
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(4,1);
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
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Cpush(s_26);
  Epushd(2,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
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
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Cpop();
  goto r_26;
  s_26 :
  Rpush(t_26);
  goto u_35;
  t_26 :
  r_26 :
  Return();
  l_26 :
  Epopd(1,2);
  Epushd(1,0);
  Rpush(u_26);
  p_36 :
  Cpush(w_26);
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(x_26);
  j_37 :
  Cpush(z_26);
  Rpush(a_27);
  goto b_56;
  a_27 :
  Cpop();
  goto y_26;
  z_26 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
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
  OneNextSon();
  Rpush(b_27);
  goto j_37;
  b_27 :
  AllBuild();
  y_26 :
  Return();
  x_26 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(c_27);
  m_37 :
  Cpush(e_27);
  Rpush(f_27);
  goto b_56;
  f_27 :
  Cpop();
  goto d_27;
  e_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  BuildVard(6,2);
  Epopd(6,2);
  OneNextSon();
  Rpush(g_27);
  goto m_37;
  g_27 :
  AllBuild();
  d_27 :
  Return();
  c_27 :
  Epopd(5,0);
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
  Epopd(3,1);
  Epopd(2,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_27);
  goto p_36;
  h_27 :
  OneNextSon();
  Rpush(i_27);
  goto q_56;
  i_27 :
  AllBuild();
  AllBuild();
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
  BuildFun("TCons",2);
  Epopd(2,2);
  Cpop();
  goto v_26;
  w_26 :
  Epushd(2,0);
  Rpush(j_27);
  n_37 :
  Cpush(l_27);
  Rpush(m_27);
  goto b_56;
  m_27 :
  Cpop();
  goto k_27;
  l_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(n_27);
  goto q_56;
  n_27 :
  OneNextSon();
  Rpush(o_27);
  goto n_37;
  o_27 :
  AllBuild();
  k_27 :
  Return();
  j_27 :
  Epopd(2,0);
  BuildFun("TNil",0);
  v_26 :
  Return();
  u_26 :
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,6);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,7);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,9);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,6);
  Tpush();
  BuildVard(0,8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  Epushd(3,0);
  Rpush(p_27);
  u_37 :
  Cpush(r_27);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_27);
  goto u_37;
  y_27 :
  AllBuild();
  Cpop();
  goto q_27;
  r_27 :
  Rpush(z_27);
  goto b_56;
  z_27 :
  BuildVard(2,1);
  q_27 :
  Return();
  p_27 :
  Epopd(3,0);
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildStr("D");
  Tpush();
  BuildFun("Mod",2);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("Pair");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,7);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,9);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Seqs",1);
  Tpush();
  BuildFun("Rule",3);
  Tpush();
  BuildFun("SRule",1);
  Tpush();
  BuildFun("Scope",2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(1,1);
  Epopd(0,9);
  Cpop();
  goto i_26;
  j_26 :
  Epushd(0,11);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchString("T");
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
  Tpop();
  Tdupl();
  Epushd(1,1);
  BuildVard(0,2);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(a_28);
  goto i_57;
  a_28 :
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  BuildVard(1,2);
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
  Rpush(b_28);
  t_38 :
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
  Tdupl();
  BuildVard(2,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(c_28);
  goto h_57;
  c_28 :
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(d_28);
  goto g_57;
  d_28 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,2);
  Rpush(j_28);
  goto w_56;
  j_28 :
  MatchVard(4,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(4,1);
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
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  Cpush(l_28);
  Epushd(2,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
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
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Cpop();
  goto k_28;
  l_28 :
  Rpush(m_28);
  goto t_38;
  m_28 :
  k_28 :
  Return();
  b_28 :
  Epopd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,5);
  Tpop();
  BuildVard(0,5);
  Rpush(n_28);
  goto j_57;
  n_28 :
  MatchVard(0,3);
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,0);
  Rpush(o_28);
  c_40 :
  Cpush(r_28);
  Epushd(2,0);
  MatchFun("TCons",2);
  Arg(0);
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
  Epopd(2,0);
  Cpop();
  goto p_28;
  r_28 :
  Epushd(2,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
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
  Epopd(2,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,5);
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
  Tdupl();
  Rpush(s_28);
  goto w_56;
  s_28 :
  MatchVard(2,3);
  Rpush(t_28);
  goto w_56;
  t_28 :
  MatchVard(2,4);
  Rpush(u_28);
  goto w_56;
  u_28 :
  MatchVard(2,5);
  Tpop();
  BuildVard(2,3);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildStr("Pair");
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildStr("Pair");
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("BAM",3);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("Var",1);
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
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,5);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(v_28);
  goto c_40;
  v_28 :
  OneNextSon();
  Rpush(w_28);
  goto q_56;
  w_28 :
  AllBuild();
  AllBuild();
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
  BuildFun("Cons",2);
  Epopd(2,2);
  p_28 :
  Return();
  o_28 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(x_28);
  g_41 :
  Cpush(z_28);
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(a_29);
  f_42 :
  Cpush(c_29);
  Rpush(d_29);
  goto b_56;
  d_29 :
  Cpop();
  goto b_29;
  c_29 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
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
  OneNextSon();
  Rpush(e_29);
  goto f_42;
  e_29 :
  AllBuild();
  b_29 :
  Return();
  a_29 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(f_29);
  i_42 :
  Cpush(h_29);
  Rpush(i_29);
  goto b_56;
  i_29 :
  Cpop();
  goto g_29;
  h_29 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  BuildVard(6,2);
  Epopd(6,2);
  OneNextSon();
  Rpush(j_29);
  goto i_42;
  j_29 :
  AllBuild();
  g_29 :
  Return();
  f_29 :
  Epopd(5,0);
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
  Epopd(3,1);
  Epopd(2,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(k_29);
  goto g_41;
  k_29 :
  OneNextSon();
  Rpush(l_29);
  goto q_56;
  l_29 :
  AllBuild();
  AllBuild();
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
  BuildFun("TCons",2);
  Epopd(2,2);
  Cpop();
  goto y_28;
  z_28 :
  Epushd(2,0);
  Rpush(m_29);
  j_42 :
  Cpush(o_29);
  Rpush(p_29);
  goto b_56;
  p_29 :
  Cpop();
  goto n_29;
  o_29 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_29);
  goto q_56;
  q_29 :
  OneNextSon();
  Rpush(r_29);
  goto j_42;
  r_29 :
  AllBuild();
  n_29 :
  Return();
  m_29 :
  Epopd(2,0);
  BuildFun("TNil",0);
  y_28 :
  Return();
  x_28 :
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,6);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,7);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,9);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,10);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,11);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,5);
  Tpush();
  BuildVard(0,8);
  Tpush();
  BuildVard(0,10);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(s_29);
  goto s_56;
  s_29 :
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildStr("T");
  Tpush();
  BuildFun("Mod",2);
  Tpush();
  BuildVard(0,7);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("Pair");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,9);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildStr("Pair");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,11);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("Seqs",1);
  Tpush();
  BuildFun("Rule",3);
  Tpush();
  BuildFun("SRule",1);
  Tpush();
  BuildFun("Scope",2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(1,1);
  Epopd(0,11);
  i_26 :
  Return();
  g_57 :
  Epushd(0,0);
  _ST_subt();
  Epopd(0,0);
  Return();
  h_57 :
  Epushd(0,0);
  _ST_geq();
  Epopd(0,0);
  Return();
  i_57 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  j_57 :
  Epushd(0,0);
  Rpush(t_29);
  n_41 :
  Cpush(v_29);
  Epushd(1,1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto u_29;
  v_29 :
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
  Rpush(x_29);
  goto n_41;
  x_29 :
  u_29 :
  Return();
  t_29 :
  Epopd(0,0);
  Return();
  k_57 :
  Epushd(0,0);
  Rpush(y_29);
  i_44 :
  Cpush(a_30);
  Rpush(b_30);
  goto b_56;
  b_30 :
  BuildInt(0);
  Cpop();
  goto z_29;
  a_30 :
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
  Rpush(a_31);
  goto i_44;
  a_31 :
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
  Rpush(b_31);
  goto i_57;
  b_31 :
  Epopd(1,1);
  z_29 :
  Return();
  y_29 :
  Epopd(0,0);
  Return();
  l_57 :
  Epushd(0,0);
  Cpush(q_31);
  Epushd(1,1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto c_31;
  q_31 :
  Epushd(1,7);
  MatchVard(1,6);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Arg(2);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Arg(1);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Epushd(2,0);
  Rpush(r_31);
  g_43 :
  Cpush(t_31);
  Rpush(u_31);
  goto b_56;
  u_31 :
  Cpop();
  goto s_31;
  t_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(v_31);
  goto w_56;
  v_31 :
  OneNextSon();
  Rpush(w_31);
  goto g_43;
  w_31 :
  AllBuild();
  s_31 :
  Return();
  r_31 :
  Epopd(2,0);
  MatchVard(1,3);
  BuildVard(1,3);
  Epushd(2,0);
  Rpush(x_31);
  i_43 :
  Cpush(c_32);
  Rpush(d_32);
  goto b_56;
  d_32 :
  Cpop();
  goto b_32;
  c_32 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Epopd(3,1);
  OneNextSon();
  Rpush(e_32);
  goto i_43;
  e_32 :
  AllBuild();
  b_32 :
  Return();
  x_31 :
  Epopd(2,0);
  MatchVard(1,5);
  BuildVard(1,6);
  Epushd(2,0);
  Rpush(f_32);
  l_43 :
  Cpush(i_32);
  Rpush(j_32);
  goto b_56;
  j_32 :
  Cpop();
  goto h_32;
  i_32 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Arg(2);
  MatchVard(3,2);
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildVard(1,5);
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
  Rpush(k_32);
  goto m_57;
  k_32 :
  Epopd(3,2);
  OneNextSon();
  Rpush(l_32);
  goto l_43;
  l_32 :
  AllBuild();
  h_32 :
  Return();
  f_32 :
  Epopd(2,0);
  MatchVard(1,7);
  Tpop();
  BuildVard(1,4);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,7);
  Tpush();
  BuildFun("Choices",1);
  Tpush();
  BuildFun("SDef",3);
  Epopd(1,7);
  c_31 :
  Epopd(0,0);
  Return();
  m_57 :
  Epushd(0,2);
  Rpush(m_32);
  goto n_57;
  m_32 :
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(n_32);
  d_44 :
  Cpush(a_33);
  Epushd(2,3);
  MatchVard(2,1);
  Tdupl();
  BuildVard(2,1);
  Epushd(3,1);
  MatchFun("Call",2);
  Arg(0);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  BuildVard(3,1);
  Epopd(3,1);
  MatchVard(2,2);
  BuildVard(0,2);
  MatchVard(2,3);
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
  Rpush(b_33);
  goto b_57;
  b_33 :
  Epopd(2,3);
  Cpop();
  goto z_32;
  a_33 :
  AllInit();
  e_33 :
  AllNextSon(&&f_33);
  Rpush(g_33);
  goto d_44;
  g_33 :
  goto e_33;
  f_33 :
  AllBuild();
  z_32 :
  Return();
  n_32 :
  Epopd(1,0);
  Epopd(0,2);
  Return();
  n_57 :
  Epushd(0,2);
  Cpush(s_33);
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
  Cpop();
  goto h_33;
  s_33 :
  Epushd(1,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(3,0);
  Rpush(t_33);
  t_44 :
  Cpush(v_33);
  Epushd(4,0);
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
  Epopd(4,0);
  Cpop();
  goto u_33;
  v_33 :
  Epushd(4,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildVard(4,4);
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
  Epopd(4,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(w_33);
  goto t_44;
  w_33 :
  OneNextSon();
  Rpush(x_33);
  goto q_56;
  x_33 :
  AllBuild();
  AllBuild();
  Epushd(4,2);
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
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(4,2);
  u_33 :
  Return();
  t_33 :
  Epopd(3,0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Epopd(1,3);
  h_33 :
  Epopd(0,2);
  Return();
  o_57 :
  Epushd(0,0);
  Rpush(y_33);
  l_45 :
  Epushd(1,3);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Cpush(a_34);
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
  Rpush(b_34);
  goto k_57;
  b_34 :
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
  goto z_33;
  a_34 :
  BuildFun("Nil",0);
  z_33 :
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Cpush(d_34);
  Epushd(4,1);
  Tdupl();
  Cpush(f_34);
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
  goto e_34;
  f_34 :
  Cpush(h_34);
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
  goto g_34;
  h_34 :
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
  g_34 :
  e_34 :
  MatchVard(4,1);
  Tpop();
  Epushd(5,0);
  Cpush(j_34);
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
  Rpush(k_34);
  goto l_45;
  k_34 :
  AllBuild();
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(l_34);
  goto l_45;
  l_34 :
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
  Rpush(m_34);
  j_54 :
  Cpush(o_34);
  Rpush(p_34);
  goto b_56;
  p_34 :
  Cpop();
  goto n_34;
  o_34 :
  Cpush(r_34);
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
  Rpush(s_34);
  k_54 :
  Cpush(u_34);
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
  goto t_34;
  u_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_34);
  goto k_54;
  v_34 :
  AllBuild();
  t_34 :
  Return();
  s_34 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(w_34);
  goto j_54;
  w_34 :
  Cpop();
  goto q_34;
  r_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_34);
  goto j_54;
  x_34 :
  AllBuild();
  q_34 :
  n_34 :
  Return();
  m_34 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  Cpop();
  goto i_34;
  j_34 :
  Cpush(z_34);
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
  Rpush(a_35);
  goto l_45;
  a_35 :
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
  Rpush(c_35);
  l_54 :
  Cpush(f_35);
  Rpush(g_35);
  goto b_56;
  g_35 :
  Cpop();
  goto d_35;
  f_35 :
  Cpush(i_35);
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
  Rpush(k_35);
  m_54 :
  Cpush(m_35);
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
  goto l_35;
  m_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_35);
  goto m_54;
  n_35 :
  AllBuild();
  l_35 :
  Return();
  k_35 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(o_35);
  goto l_54;
  o_35 :
  Cpop();
  goto h_35;
  i_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_35);
  goto l_54;
  p_35 :
  AllBuild();
  h_35 :
  d_35 :
  Return();
  c_35 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  Cpop();
  goto y_34;
  z_34 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(q_35);
  goto l_45;
  q_35 :
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
  Rpush(r_35);
  n_54 :
  Cpush(t_35);
  Rpush(z_35);
  goto b_56;
  z_35 :
  Cpop();
  goto s_35;
  t_35 :
  Cpush(c_36);
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
  Rpush(e_36);
  o_54 :
  Cpush(g_36);
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
  goto f_36;
  g_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_36);
  goto o_54;
  i_36 :
  AllBuild();
  f_36 :
  Return();
  e_36 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(q_36);
  goto n_54;
  q_36 :
  Cpop();
  goto a_36;
  c_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_36);
  goto n_54;
  r_36 :
  AllBuild();
  a_36 :
  s_35 :
  Return();
  r_35 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  y_34 :
  i_34 :
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
  Rpush(s_36);
  p_54 :
  Cpush(u_36);
  Rpush(v_36);
  goto b_56;
  v_36 :
  BuildFun("Nil",0);
  Cpop();
  goto t_36;
  u_36 :
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
  Rpush(w_36);
  goto p_54;
  w_36 :
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
  Rpush(x_36);
  q_54 :
  Cpush(z_36);
  Rpush(a_37);
  goto b_56;
  a_37 :
  BuildVard(8,3);
  Cpop();
  goto y_36;
  z_36 :
  Cpush(c_37);
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
  d_37 :
  MatchFun("Cons",2);
  Cpush(q_37);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto r_37;
  q_37 :
  Arg(1);
  Tdrop();
  goto d_37;
  r_37 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(s_37);
  goto q_54;
  s_37 :
  Cpop();
  goto b_37;
  c_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_37);
  goto q_54;
  t_37 :
  AllBuild();
  b_37 :
  y_36 :
  Return();
  x_36 :
  Epopd(8,4);
  t_36 :
  Return();
  s_36 :
  Epopd(7,0);
  Epopd(6,1);
  Epopd(5,0);
  Epopd(4,1);
  Cpop();
  goto c_34;
  d_34 :
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
  Rpush(v_37);
  s_54 :
  Cpush(x_37);
  Rpush(y_37);
  goto b_56;
  y_37 :
  BuildFun("Nil",0);
  Cpop();
  goto w_37;
  x_37 :
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
  Rpush(z_37);
  goto l_45;
  z_37 :
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,2);
  Rpush(a_38);
  goto s_54;
  a_38 :
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
  Rpush(b_38);
  t_54 :
  Cpush(d_38);
  Rpush(e_38);
  goto b_56;
  e_38 :
  BuildVard(6,3);
  Cpop();
  goto c_38;
  d_38 :
  Cpush(g_38);
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
  j_38 :
  MatchFun("Cons",2);
  Cpush(k_38);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Cpop();
  goto l_38;
  k_38 :
  Arg(1);
  Tdrop();
  goto j_38;
  l_38 :
  Tpop();
  Epopd(8,0);
  Tpop();
  BuildVard(7,1);
  Epopd(7,2);
  Rpush(m_38);
  goto t_54;
  m_38 :
  Cpop();
  goto f_38;
  g_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_38);
  goto t_54;
  n_38 :
  AllBuild();
  f_38 :
  c_38 :
  Return();
  b_38 :
  Epopd(6,4);
  w_37 :
  Return();
  v_37 :
  Epopd(5,0);
  Epopd(4,1);
  c_34 :
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
  Rpush(o_38);
  x_54 :
  Cpush(q_38);
  Rpush(r_38);
  goto b_56;
  r_38 :
  BuildVard(1,2);
  Cpop();
  goto p_38;
  q_38 :
  Cpush(w_38);
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
  x_38 :
  MatchFun("Cons",2);
  Cpush(y_38);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto z_38;
  y_38 :
  Arg(1);
  Tdrop();
  goto x_38;
  z_38 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(f_39);
  goto x_54;
  f_39 :
  Cpop();
  goto s_38;
  w_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_39);
  goto x_54;
  g_39 :
  AllBuild();
  s_38 :
  p_38 :
  Return();
  o_38 :
  Epopd(1,3);
  Return();
  y_33 :
  Epopd(0,0);
  Return();
  q_57 :
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
  Rpush(h_39);
  goto g_56;
  h_39 :
  Tpop();
  Epopd(0,0);
  Return();
  r_57 :
  Epushd(0,0);
  Rpush(i_39);
  g_55 :
  Cpush(k_39);
  Rpush(l_39);
  goto b_56;
  l_39 :
  Cpop();
  goto j_39;
  k_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(m_39);
  goto s_57;
  m_39 :
  AllBuild();
  OneNextSon();
  Rpush(n_39);
  goto g_55;
  n_39 :
  AllBuild();
  j_39 :
  Return();
  i_39 :
  Epopd(0,0);
  Return();
  s_57 :
  Epushd(0,0);
  Rpush(o_39);
  o_55 :
  Epushd(1,0);
  Cpush(q_39);
  Rpush(r_39);
  goto t_57;
  r_39 :
  Cpop();
  goto p_39;
  q_39 :
  p_39 :
  Epopd(1,0);
  Epushd(1,0);
  Cpush(t_39);
  s_39 :
  Cpush(v_39);
  Rpush(w_39);
  goto z_57;
  w_39 :
  Cpop();
  goto u_39;
  v_39 :
  Cpush(y_39);
  Cpush(a_40);
  Rpush(b_40);
  goto a_58;
  b_40 :
  Cpop();
  goto z_39;
  a_40 :
  Cpush(g_40);
  Epushd(2,2);
  MatchFun("Build",1);
  Arg(0);
  MatchFun("App",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Seq",2);
  Epopd(2,2);
  Cpop();
  goto f_40;
  g_40 :
  Rpush(h_40);
  goto b_58;
  h_40 :
  f_40 :
  z_39 :
  Cpop();
  goto x_39;
  y_39 :
  Rpush(i_40);
  goto c_58;
  i_40 :
  x_39 :
  u_39 :
  Tduplinv();
  goto s_39;
  t_39 :
  Epopd(1,0);
  AllInit();
  j_40 :
  AllNextSon(&&k_40);
  Rpush(l_40);
  goto o_55;
  l_40 :
  goto j_40;
  k_40 :
  AllBuild();
  Return();
  o_39 :
  Epopd(0,0);
  Return();
  t_57 :
  Epushd(0,0);
  Rpush(o_40);
  j_35 :
  Epushd(1,0);
  Cpush(q_40);
  Cpush(s_40);
  Rpush(b_41);
  goto u_57;
  b_41 :
  Rpush(c_41);
  goto j_35;
  c_41 :
  Cpop();
  goto r_40;
  s_40 :
  Cpush(e_41);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_41);
  goto j_35;
  h_41 :
  AllBuild();
  Cpop();
  goto d_41;
  e_41 :
  Rpush(i_41);
  goto v_57;
  i_41 :
  d_41 :
  r_40 :
  Cpop();
  goto p_40;
  q_40 :
  p_40 :
  Epopd(1,0);
  Return();
  o_40 :
  Epopd(0,0);
  Return();
  u_57 :
  Epushd(0,11);
  MatchFun("SRule",1);
  Arg(0);
  MatchFun("Rule",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Tdupl();
  Rpush(j_41);
  goto w_56;
  j_41 :
  MatchVard(0,9);
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(k_41);
  s_55 :
  Cpush(m_41);
  MatchFun("Con",3);
  Arg(0);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(0,8);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,6);
  Tpop();
  Arg(2);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,8);
  Tpush();
  BuildFun("Var",1);
  Cpop();
  goto l_41;
  m_41 :
  IsAppl();
  OneInit();
  o_41 :
  OneNextSon();
  Cpush(o_41);
  Rpush(r_41);
  goto s_55;
  r_41 :
  Cpop();
  OneBuild();
  l_41 :
  Return();
  k_41 :
  Epopd(1,0);
  MatchVard(0,10);
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(s_41);
  t_55 :
  Cpush(u_41);
  MatchFun("Con",3);
  Arg(0);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(0,8);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,7);
  Tpop();
  Arg(2);
  MatchFun("Call",2);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  BuildVard(0,9);
  Tpush();
  BuildFun("Var",1);
  Cpop();
  goto t_41;
  u_41 :
  IsAppl();
  OneInit();
  v_41 :
  OneNextSon();
  Cpush(v_41);
  Rpush(x_41);
  goto t_55;
  x_41 :
  Cpop();
  OneBuild();
  t_41 :
  Return();
  s_41 :
  Epopd(1,0);
  MatchVard(0,11);
  Tpop();
  BuildVard(0,9);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,10);
  Tpush();
  BuildVard(0,11);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildVard(0,7);
  Tpush();
  BuildFun("Id",0);
  Tpush();
  BuildFun("Rule",3);
  Tpush();
  BuildFun("SRule",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildVard(0,8);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(0,9);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("BAM",3);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Rule",3);
  Tpush();
  BuildFun("SRule",1);
  Tpush();
  BuildFun("Scope",2);
  Epopd(0,11);
  Return();
  v_57 :
  Cpush(z_41);
  Epushd(0,3);
  MatchFun("SRule",1);
  Arg(0);
  MatchFun("Rule",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,2);
  Rpush(o_42);
  goto w_57;
  o_42 :
  BuildVard(0,3);
  Rpush(p_42);
  goto x_57;
  p_42 :
  Tpop();
  BuildVard(0,2);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Where",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Seqs",1);
  Epopd(0,3);
  Cpop();
  goto y_41;
  z_41 :
  Epushd(0,3);
  MatchFun("SRule",1);
  Arg(0);
  MatchFun("StratRule",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Where",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Seqs",1);
  Epopd(0,3);
  y_41 :
  Return();
  w_57 :
  Epushd(0,0);
  Cpush(q_42);
  Tdupl();
  Epushd(1,0);
  Rpush(r_42);
  u_55 :
  Cpush(t_42);
  MatchFun("Con",3);
  Cpop();
  goto s_42;
  t_42 :
  MatchFun("App",2);
  s_42 :
  AllInit();
  w_42 :
  AllNextSon(&&e_43);
  Rpush(f_43);
  goto u_55;
  f_43 :
  goto w_42;
  e_43 :
  AllBuild();
  Return();
  r_42 :
  Epopd(1,0);
  Cpop();
  Crestore();
  Cjump();
  q_42 :
  Epopd(0,0);
  Return();
  x_57 :
  Epushd(0,0);
  Cpush(h_43);
  Tdupl();
  Epushd(1,0);
  Rpush(j_43);
  v_55 :
  Cpush(n_43);
  MatchFun("Con",3);
  Cpop();
  goto m_43;
  n_43 :
  Rpush(q_43);
  goto y_57;
  q_43 :
  m_43 :
  AllInit();
  r_43 :
  AllNextSon(&&u_43);
  Rpush(v_43);
  goto v_55;
  v_43 :
  goto r_43;
  u_43 :
  AllBuild();
  Return();
  j_43 :
  Epopd(1,0);
  Cpop();
  Crestore();
  Cjump();
  h_43 :
  Epopd(0,0);
  Return();
  y_57 :
  MatchFun("Wld",0);
  Return();
  z_57 :
  Cpush(x_43);
  Epushd(0,0);
  MatchFun("Seqs",1);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(0,0);
  Cpop();
  goto w_43;
  x_43 :
  Cpush(z_43);
  Epushd(0,2);
  MatchFun("Seqs",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Seqs",1);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,2);
  Cpop();
  goto y_43;
  z_43 :
  Cpush(b_44);
  Epushd(0,0);
  MatchFun("Choices",1);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(0,0);
  Cpop();
  goto a_44;
  b_44 :
  Cpush(j_44);
  Epushd(0,2);
  MatchFun("Choices",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Choices",1);
  Tpush();
  BuildFun("Choice",2);
  Epopd(0,2);
  Cpop();
  goto c_44;
  j_44 :
  Cpush(l_44);
  Epushd(0,0);
  MatchFun("LChoices",1);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(0,0);
  Cpop();
  goto k_44;
  l_44 :
  Cpush(n_44);
  Epushd(0,2);
  MatchFun("LChoices",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("LChoices",1);
  Tpush();
  BuildFun("LChoice",2);
  Epopd(0,2);
  Cpop();
  goto m_44;
  n_44 :
  Cpush(p_44);
  Epushd(0,2);
  MatchFun("BA",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,2);
  Cpop();
  goto o_44;
  p_44 :
  Cpush(r_44);
  Epushd(0,2);
  MatchFun("MA",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,2);
  Cpop();
  goto q_44;
  r_44 :
  Cpush(a_45);
  Epushd(0,2);
  MatchFun("AM",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,2);
  Cpop();
  goto s_44;
  a_45 :
  Epushd(0,3);
  MatchFun("BAM",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Seqs",1);
  Epopd(0,3);
  s_44 :
  q_44 :
  o_44 :
  m_44 :
  k_44 :
  c_44 :
  a_44 :
  y_43 :
  w_43 :
  Return();
  a_58 :
  Epushd(0,4);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tdupl();
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(b_45);
  w_55 :
  Cpush(e_45);
  MatchFun("App",2);
  Arg(0);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,3);
  Cpop();
  goto c_45;
  e_45 :
  IsAppl();
  OneInit();
  f_45 :
  OneNextSon();
  Cpush(f_45);
  Rpush(h_45);
  goto w_55;
  h_45 :
  Cpop();
  OneBuild();
  c_45 :
  Return();
  b_45 :
  Epopd(1,0);
  MatchVard(0,4);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Build",1);
  Epopd(0,4);
  Return();
  b_58 :
  Epushd(0,5);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tdupl();
  Rpush(i_45);
  goto w_56;
  i_45 :
  MatchVard(0,4);
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(j_45);
  x_55 :
  Cpush(m_45);
  MatchFun("App",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Cpop();
  goto k_45;
  m_45 :
  IsAppl();
  OneInit();
  n_45 :
  OneNextSon();
  Cpush(n_45);
  Rpush(p_45);
  goto x_55;
  p_45 :
  Cpop();
  OneBuild();
  k_45 :
  Return();
  j_45 :
  Epopd(1,0);
  MatchVard(0,5);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("BAM",3);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(0,5);
  Return();
  c_58 :
  Cpush(r_45);
  Epushd(0,5);
  MatchFun("Match",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tdupl();
  Rpush(s_45);
  goto w_56;
  s_45 :
  MatchVard(0,4);
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(t_45);
  y_55 :
  Cpush(v_45);
  MatchFun("Explode",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Cpop();
  goto u_45;
  v_45 :
  IsAppl();
  OneInit();
  w_45 :
  OneNextSon();
  Cpush(w_45);
  Rpush(y_45);
  goto y_55;
  y_45 :
  Cpop();
  OneBuild();
  u_45 :
  Return();
  t_45 :
  Epopd(1,0);
  MatchVard(0,5);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildStr("_ST_explode_term");
  Tpush();
  BuildFun("Prim",1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildStr("TCons");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr("TCons");
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildStr("TNil");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("BAM",3);
  Tpush();
  BuildFun("Where",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(0,5);
  Cpop();
  goto q_45;
  r_45 :
  Cpush(a_46);
  Epushd(0,5);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tdupl();
  Rpush(b_46);
  goto w_56;
  b_46 :
  MatchVard(0,4);
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(c_46);
  z_55 :
  Cpush(e_46);
  MatchFun("Explode",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Cpop();
  goto d_46;
  e_46 :
  IsAppl();
  OneInit();
  f_46 :
  OneNextSon();
  Cpush(f_46);
  Rpush(h_46);
  goto z_55;
  h_46 :
  Cpop();
  OneBuild();
  d_46 :
  Return();
  c_46 :
  Epopd(1,0);
  MatchVard(0,5);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("_ST_mkterm");
  Tpush();
  BuildFun("Prim",1);
  Tpush();
  BuildStr("TCons");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr("TCons");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr("TNil");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Op",2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("BAM",3);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(0,5);
  Cpop();
  goto z_45;
  a_46 :
  Epushd(0,2);
  MatchFun("ExplodeCong",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildStr("_ST_explode_term");
  Tpush();
  BuildFun("Prim",1);
  Tpush();
  BuildStr("TCons");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr("TCons");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr("TNil");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cong",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cong",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cong",2);
  Tpush();
  BuildStr("_ST_mkterm");
  Tpush();
  BuildFun("Prim",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,2);
  z_45 :
  q_45 :
  Return();
  i_46 :
DOIT_END
