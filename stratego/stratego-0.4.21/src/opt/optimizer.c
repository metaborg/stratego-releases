#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(h_18);
  goto main;
  main :
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
  Rpush(e_3);
  h_0 :
  Cpush(g_3);
  Cpush(l_3);
  Rpush(m_3);
  goto m_5;
  m_3 :
  Cpop();
  goto k_3;
  l_3 :
  Rpush(o_3);
  goto n_5;
  o_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_3);
  goto h_0;
  p_3 :
  AllBuild();
  k_3 :
  Cpop();
  goto f_3;
  g_3 :
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
  f_3 :
  Return();
  e_3 :
  AllBuild();
  Epopd(1,0);
  Cpush(r_3);
  Rpush(s_3);
  goto o_5;
  s_3 :
  Cpop();
  goto q_3;
  r_3 :
  Cpush(x_3);
  Rpush(n_6);
  goto t_5;
  n_6 :
  Epushd(1,1);
  Tdupl();
  Rpush(o_6);
  goto v_5;
  o_6 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_6);
  goto c_6;
  p_6 :
  OneNextSon();
  Rpush(q_6);
  goto b_6;
  q_6 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(r_6);
  goto v_5;
  r_6 :
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
  Rpush(s_6);
  goto w_5;
  s_6 :
  Rpush(t_6);
  goto z_5;
  t_6 :
  Cpop();
  goto t_3;
  x_3 :
  Rpush(u_6);
  goto a_6;
  u_6 :
  t_3 :
  q_3 :
  Epopd(0,0);
  Return();
  m_5 :
  MatchFun("Nil",0);
  Return();
  n_5 :
  Epushd(0,0);
  Cpush(w_6);
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
  goto v_6;
  w_6 :
  Cpush(y_6);
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
  goto x_6;
  y_6 :
  Cpush(a_7);
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
  goto z_6;
  a_7 :
  Cpush(c_7);
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
  goto b_7;
  c_7 :
  Cpush(e_7);
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
  goto d_7;
  e_7 :
  Cpush(g_7);
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
  goto f_7;
  g_7 :
  Cpush(i_7);
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
  goto h_7;
  i_7 :
  Cpush(k_7);
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
  goto j_7;
  k_7 :
  Cpush(m_7);
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
  goto l_7;
  m_7 :
  Cpush(o_7);
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
  goto n_7;
  o_7 :
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
  Cpush(v_7);
  Rpush(w_7);
  goto a_0;
  w_7 :
  Cpop();
  goto u_7;
  v_7 :
  Cpush(y_7);
  Rpush(z_7);
  goto b_0;
  z_7 :
  Cpop();
  goto x_7;
  y_7 :
  Cpush(b_8);
  Rpush(c_8);
  goto c_0;
  c_8 :
  Cpop();
  goto a_8;
  b_8 :
  Cpush(e_8);
  Rpush(f_8);
  goto d_0;
  f_8 :
  Cpop();
  goto d_8;
  e_8 :
  Rpush(g_8);
  goto u_2;
  g_8 :
  d_8 :
  a_8 :
  x_7 :
  u_7 :
  goto t_7;
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
  t_7 :
  goto s_7;
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
  s_7 :
  goto r_7;
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
  r_7 :
  goto q_7;
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
  q_7 :
  goto p_7;
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
  p_7 :
  Epopd(1,10);
  n_7 :
  l_7 :
  j_7 :
  h_7 :
  f_7 :
  d_7 :
  b_7 :
  z_6 :
  x_6 :
  v_6 :
  Epopd(0,0);
  Return();
  o_5 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  h_8 :
  MatchFun("Cons",2);
  Cpush(i_8);
  Arg(0);
  Cpush(v_8);
  Rpush(w_8);
  goto p_5;
  w_8 :
  Cpop();
  goto u_8;
  v_8 :
  MatchFun("Undefined",1);
  u_8 :
  Tpop();
  Cpop();
  goto t_8;
  i_8 :
  Arg(1);
  Tdrop();
  goto h_8;
  t_8 :
  Tpop();
  Epopd(1,0);
  Rpush(x_8);
  goto q_5;
  x_8 :
  Epopd(0,0);
  Return();
  p_5 :
  MatchFun("Help",0);
  Return();
  q_5 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  y_8 :
  MatchFun("Cons",2);
  Cpush(z_8);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto e_9;
  z_8 :
  Arg(1);
  Tdrop();
  goto y_8;
  e_9 :
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
  Rpush(f_9);
  goto r_5;
  f_9 :
  BuildInt(1);
  Rpush(g_9);
  goto s_5;
  g_9 :
  Tpop();
  Epopd(0,1);
  Return();
  r_5 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  s_5 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  t_5 :
  Epushd(0,1);
  Cpush(l_9);
  Epushd(1,0);
  Tdupl();
  m_9 :
  MatchFun("Cons",2);
  Cpush(n_9);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto o_9;
  n_9 :
  Arg(1);
  Tdrop();
  goto m_9;
  o_9 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto h_9;
  l_9 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  h_9 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(p_9);
  goto u_5;
  p_9 :
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
  u_5 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  v_5 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  w_5 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(y_9);
  Epushd(1,0);
  Tdupl();
  z_9 :
  MatchFun("Cons",2);
  Cpush(a_10);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto b_10;
  a_10 :
  Arg(1);
  Tdrop();
  goto z_9;
  b_10 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto x_9;
  y_9 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  x_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_10);
  goto b_6;
  c_10 :
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
  Rpush(d_10);
  goto b_6;
  d_10 :
  AllBuild();
  AllBuild();
  Cpush(f_10);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  g_10 :
  MatchFun("Cons",2);
  Cpush(h_10);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto i_10;
  h_10 :
  Arg(1);
  Tdrop();
  goto g_10;
  i_10 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_10);
  goto x_5;
  m_10 :
  OneNextSon();
  Rpush(n_10);
  goto b_6;
  n_10 :
  AllBuild();
  AllBuild();
  Cpop();
  goto e_10;
  f_10 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_10);
  goto y_5;
  o_10 :
  OneNextSon();
  Rpush(p_10);
  goto b_6;
  p_10 :
  AllBuild();
  AllBuild();
  e_10 :
  Epopd(0,1);
  Return();
  x_5 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  y_5 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  z_5 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(r_10);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(s_10);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  t_10 :
  MatchFun("Cons",2);
  Cpush(u_10);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto v_10;
  u_10 :
  Arg(1);
  Tdrop();
  goto t_10;
  v_10 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  s_10 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_10);
  goto b_6;
  w_10 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  x_10 :
  MatchFun("Cons",2);
  Cpush(y_10);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto z_10;
  y_10 :
  Arg(1);
  Tdrop();
  goto x_10;
  z_10 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_11);
  goto b_6;
  a_11 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  b_11 :
  MatchFun("Cons",2);
  Cpush(c_11);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_11);
  goto b_6;
  e_11 :
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
  Rpush(f_11);
  goto r_5;
  f_11 :
  Cpop();
  goto q_10;
  r_10 :
  q_10 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(g_11);
  goto s_5;
  g_11 :
  Epopd(0,2);
  Return();
  a_6 :
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
  Rpush(h_11);
  goto r_5;
  h_11 :
  BuildInt(1);
  Rpush(i_11);
  goto s_5;
  i_11 :
  Epopd(0,0);
  Return();
  b_6 :
  MatchFun("TNil",0);
  Return();
  c_6 :
  Epushd(0,0);
  Rpush(j_11);
  y_3 :
  Epushd(1,0);
  Cpush(l_11);
  k_11 :
  Rpush(m_11);
  goto d_6;
  m_11 :
  Tduplinv();
  goto k_11;
  l_11 :
  Epopd(1,0);
  AllInit();
  n_11 :
  AllNextSon(&&o_11);
  Rpush(p_11);
  goto y_3;
  p_11 :
  goto n_11;
  o_11 :
  AllBuild();
  Epushd(1,0);
  Cpush(r_11);
  q_11 :
  Rpush(s_11);
  goto d_6;
  s_11 :
  Tduplinv();
  goto q_11;
  r_11 :
  Epopd(1,0);
  Return();
  j_11 :
  Epopd(0,0);
  Return();
  d_6 :
  Epushd(0,0);
  Cpush(u_11);
  Rpush(v_11);
  goto e_6;
  v_11 :
  Cpop();
  goto t_11;
  u_11 :
  Cpush(x_11);
  Rpush(y_11);
  goto h_6;
  y_11 :
  Cpop();
  goto w_11;
  x_11 :
  Cpush(a_12);
  Rpush(b_12);
  goto i_6;
  b_12 :
  Cpop();
  goto z_11;
  a_12 :
  Cpush(d_12);
  Rpush(e_12);
  goto j_6;
  e_12 :
  Cpop();
  goto c_12;
  d_12 :
  Cpush(g_12);
  Rpush(h_12);
  goto k_6;
  h_12 :
  Cpop();
  goto f_12;
  g_12 :
  Cpush(j_12);
  Rpush(k_12);
  goto l_6;
  k_12 :
  Cpop();
  goto i_12;
  j_12 :
  Rpush(l_12);
  goto m_6;
  l_12 :
  i_12 :
  f_12 :
  c_12 :
  z_11 :
  w_11 :
  t_11 :
  Epopd(0,0);
  Return();
  e_6 :
  Epushd(0,0);
  Cpush(n_12);
  Epushd(1,0);
  MatchFun("Test",1);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,0);
  Cpop();
  goto m_12;
  n_12 :
  Cpush(p_12);
  Epushd(1,0);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,0);
  Cpop();
  goto o_12;
  p_12 :
  Cpush(r_12);
  Epushd(1,1);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto q_12;
  r_12 :
  Cpush(t_12);
  Epushd(1,1);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Id",0);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto s_12;
  t_12 :
  Cpush(v_12);
  Epushd(1,1);
  MatchFun("Choice",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Id",0);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto u_12;
  v_12 :
  Cpush(x_12);
  Epushd(1,1);
  MatchFun("Choice",2);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Cpop();
  goto w_12;
  x_12 :
  Cpush(z_12);
  Epushd(1,1);
  MatchFun("LChoice",2);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,1);
  Cpop();
  goto y_12;
  z_12 :
  Cpush(b_13);
  Epushd(1,1);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,1);
  Cpop();
  goto a_13;
  b_13 :
  Cpush(d_13);
  Epushd(1,1);
  MatchFun("Rec",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,1);
  Cpop();
  goto c_13;
  d_13 :
  Cpush(f_13);
  Epushd(1,0);
  MatchFun("All",1);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,0);
  Cpop();
  goto e_13;
  f_13 :
  Cpush(h_13);
  Epushd(1,1);
  MatchFun("Path",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,1);
  Cpop();
  goto g_13;
  h_13 :
  Cpush(j_13);
  Epushd(1,0);
  MatchFun("Where",1);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,0);
  Cpop();
  goto i_13;
  j_13 :
  Cpush(l_13);
  Epushd(1,2);
  MatchFun("Cong",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Epushd(2,0);
  Rpush(m_13);
  m_4 :
  Cpush(o_13);
  Rpush(p_13);
  goto m_5;
  p_13 :
  Cpop();
  goto n_13;
  o_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Id",0);
  OneNextSon();
  Rpush(q_13);
  goto m_4;
  q_13 :
  AllBuild();
  n_13 :
  Return();
  m_13 :
  Epopd(2,0);
  Tpop();
  Epushd(2,1);
  BuildVard(1,2);
  Rpush(r_13);
  goto f_6;
  r_13 :
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Fun",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Id",0);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto k_13;
  l_13 :
  Epushd(1,2);
  MatchFunFC("CongWld",1,&&w_13);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Rpush(x_13);
  goto w_2;
  x_13 :
  goto v_13;
  w_13 :
  MatchFunFC("App",2,&&y_13);
  Arg(0);
  MatchFun("Id",0);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Rpush(z_13);
  goto x_2;
  z_13 :
  goto v_13;
  y_13 :
  MatchFunFC("Match",1,&&a_14);
  Arg(0);
  MatchFun("Wld",0);
  Tpop();
  Rpush(b_14);
  goto y_2;
  b_14 :
  goto v_13;
  a_14 :
  goto fail;
  v_13 :
  goto u_13;
  y_2 :
  BuildFun("Id",0);
  Return();
  u_13 :
  goto t_13;
  x_2 :
  BuildVard(1,2);
  Return();
  t_13 :
  goto s_13;
  w_2 :
  Tdupl();
  BuildVard(1,1);
  Epushd(2,0);
  Rpush(c_14);
  o_4 :
  Cpush(e_14);
  Rpush(f_14);
  goto m_5;
  f_14 :
  Cpop();
  goto d_14;
  e_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Id",0);
  OneNextSon();
  Rpush(g_14);
  goto o_4;
  g_14 :
  AllBuild();
  d_14 :
  Return();
  c_14 :
  Epopd(2,0);
  Tpop();
  BuildFun("Id",0);
  Return();
  s_13 :
  Epopd(1,2);
  k_13 :
  i_13 :
  g_13 :
  e_13 :
  c_13 :
  a_13 :
  y_12 :
  w_12 :
  u_12 :
  s_12 :
  q_12 :
  o_12 :
  m_12 :
  Epopd(0,0);
  Return();
  f_6 :
  Epushd(0,0);
  Rpush(h_14);
  i_43 :
  Cpush(j_14);
  Rpush(k_14);
  goto m_5;
  k_14 :
  BuildInt(0);
  Cpop();
  goto i_14;
  j_14 :
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
  Rpush(l_14);
  goto i_43;
  l_14 :
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
  Rpush(m_14);
  goto g_6;
  m_14 :
  Epopd(1,1);
  i_14 :
  Return();
  h_14 :
  Epopd(0,0);
  Return();
  g_6 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  h_6 :
  Epushd(0,0);
  Cpush(o_14);
  Epushd(1,0);
  MatchFun("Test",1);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,0);
  Cpop();
  goto n_14;
  o_14 :
  Cpush(q_14);
  Epushd(1,0);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(1,0);
  Cpop();
  goto p_14;
  q_14 :
  Cpush(s_14);
  Epushd(1,1);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,1);
  Cpop();
  goto r_14;
  s_14 :
  Cpush(u_14);
  Epushd(1,1);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,1);
  Cpop();
  goto t_14;
  u_14 :
  Cpush(w_14);
  Epushd(1,1);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,1);
  Cpop();
  goto v_14;
  w_14 :
  Cpush(y_14);
  Epushd(1,1);
  MatchFun("Rec",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,1);
  Cpop();
  goto x_14;
  y_14 :
  Cpush(a_15);
  Epushd(1,0);
  MatchFun("Some",1);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,0);
  Cpop();
  goto z_14;
  a_15 :
  Cpush(c_15);
  Epushd(1,0);
  MatchFun("One",1);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,0);
  Cpop();
  goto b_15;
  c_15 :
  Cpush(e_15);
  Epushd(1,1);
  MatchFun("Path",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("Fail",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,1);
  Cpop();
  goto d_15;
  e_15 :
  Cpush(g_15);
  Epushd(1,2);
  MatchFun("Cong",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Epushd(2,0);
  Tdupl();
  h_15 :
  MatchFun("Cons",2);
  Cpush(i_15);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  Cpop();
  goto j_15;
  i_15 :
  Arg(1);
  Tdrop();
  goto h_15;
  j_15 :
  Tpop();
  Epopd(2,0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(1,2);
  Cpop();
  goto f_15;
  g_15 :
  Epushd(1,4);
  MatchFunFC("Choice",2,&&q_15);
  Arg(0);
  MatchFunFC("Fail",0,&&s_15);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFunFC("Fail",0,&&u_15);
  MatchVard(1,1);
  Tpop();
  Cpush(w_15);
  Rpush(x_15);
  goto z_2;
  x_15 :
  Cpop();
  goto v_15;
  w_15 :
  Rpush(y_15);
  goto a_3;
  y_15 :
  v_15 :
  goto t_15;
  u_15 :
  MatchVard(1,1);
  Tpop();
  Rpush(z_15);
  goto z_2;
  z_15 :
  t_15 :
  goto r_15;
  s_15 :
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("Fail",0);
  Tpop();
  Rpush(a_16);
  goto a_3;
  a_16 :
  r_15 :
  goto p_15;
  q_15 :
  MatchFunFC("LChoice",2,&&b_16);
  Arg(0);
  MatchFunFC("Fail",0,&&d_16);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFunFC("Fail",0,&&f_16);
  MatchVard(1,3);
  Tpop();
  Cpush(h_16);
  Rpush(i_16);
  goto b_3;
  i_16 :
  Cpop();
  goto g_16;
  h_16 :
  Rpush(j_16);
  goto c_3;
  j_16 :
  g_16 :
  goto e_16;
  f_16 :
  MatchVard(1,3);
  Tpop();
  Rpush(k_16);
  goto b_3;
  k_16 :
  e_16 :
  goto c_16;
  d_16 :
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFun("Fail",0);
  Tpop();
  Rpush(l_16);
  goto c_3;
  l_16 :
  c_16 :
  goto p_15;
  b_16 :
  MatchFunFC("Where",1,&&m_16);
  Arg(0);
  MatchFun("Fail",0);
  Tpop();
  Rpush(n_16);
  goto d_3;
  n_16 :
  goto p_15;
  m_16 :
  goto fail;
  p_15 :
  goto o_15;
  d_3 :
  BuildFun("Fail",0);
  Return();
  o_15 :
  goto n_15;
  c_3 :
  BuildVard(1,4);
  Return();
  n_15 :
  goto m_15;
  b_3 :
  BuildVard(1,3);
  Return();
  m_15 :
  goto l_15;
  a_3 :
  BuildVard(1,2);
  Return();
  l_15 :
  goto k_15;
  z_2 :
  BuildVard(1,1);
  Return();
  k_15 :
  Epopd(1,4);
  f_15 :
  d_15 :
  b_15 :
  z_14 :
  x_14 :
  v_14 :
  t_14 :
  r_14 :
  p_14 :
  n_14 :
  Epopd(0,0);
  Return();
  i_6 :
  Cpush(p_16);
  Epushd(0,3);
  MatchFun("Choice",2);
  Arg(0);
  MatchFun("Choice",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Choice",2);
  Tpush();
  BuildFun("Choice",2);
  Epopd(0,3);
  Cpop();
  goto o_16;
  p_16 :
  Cpush(r_16);
  Epushd(0,3);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,3);
  Cpop();
  goto q_16;
  r_16 :
  Epushd(0,3);
  MatchFun("LChoice",2);
  Arg(0);
  MatchFun("LChoice",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("LChoice",2);
  Tpush();
  BuildFun("LChoice",2);
  Epopd(0,3);
  q_16 :
  o_16 :
  Return();
  j_6 :
  Cpush(t_16);
  Epushd(0,1);
  MatchFun("Choice",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Epopd(0,1);
  Cpop();
  goto s_16;
  t_16 :
  Cpush(v_16);
  Epushd(0,1);
  MatchFun("LChoice",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Epopd(0,1);
  Cpop();
  goto u_16;
  v_16 :
  Cpush(x_16);
  Epushd(0,1);
  MatchFun("Where",1);
  Arg(0);
  MatchFun("Where",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Where",1);
  Epopd(0,1);
  Cpop();
  goto w_16;
  x_16 :
  Cpush(z_16);
  Epushd(0,1);
  MatchFun("Not",1);
  Arg(0);
  MatchFun("Not",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Test",1);
  Epopd(0,1);
  Cpop();
  goto y_16;
  z_16 :
  Cpush(b_17);
  Epushd(0,1);
  MatchFun("Test",1);
  Arg(0);
  MatchFun("Test",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Test",1);
  Epopd(0,1);
  Cpop();
  goto a_17;
  b_17 :
  Epushd(0,3);
  MatchFun("Where",1);
  Arg(0);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Where",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Where",1);
  Epopd(0,3);
  a_17 :
  y_16 :
  w_16 :
  u_16 :
  s_16 :
  Return();
  k_6 :
  Cpush(d_17);
  Epushd(0,3);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
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
  Rpush(e_17);
  g_5 :
  Cpush(g_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_17);
  goto g_5;
  h_17 :
  AllBuild();
  Cpop();
  goto f_17;
  g_17 :
  Rpush(i_17);
  goto m_5;
  i_17 :
  BuildVard(2,1);
  f_17 :
  Return();
  e_17 :
  Epopd(3,0);
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Scope",2);
  Epopd(1,1);
  Epopd(0,3);
  Cpop();
  goto c_17;
  d_17 :
  Cpush(k_17);
  Epushd(0,4);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
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
  Rpush(l_17);
  j_5 :
  Cpush(n_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_17);
  goto j_5;
  o_17 :
  AllBuild();
  Cpop();
  goto m_17;
  n_17 :
  Rpush(p_17);
  goto m_5;
  p_17 :
  BuildVard(2,1);
  m_17 :
  Return();
  l_17 :
  Epopd(3,0);
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(1,1);
  Epopd(0,4);
  Cpop();
  goto j_17;
  k_17 :
  Epushd(0,3);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("CountRule",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("CountRule",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(0,3);
  j_17 :
  c_17 :
  Return();
  l_6 :
  Cpush(r_17);
  Epushd(0,3);
  MatchFun("LChoice",2);
  Arg(0);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("LChoice",2);
  Tpush();
  BuildFun("Seq",2);
  Epopd(0,3);
  Cpop();
  goto q_17;
  r_17 :
  Cpush(t_17);
  Epushd(0,4);
  MatchFun("LChoice",2);
  Arg(0);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("LChoice",2);
  Arg(0);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,4);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("LChoice",2);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("LChoice",2);
  Epopd(0,4);
  Cpop();
  goto s_17;
  t_17 :
  Cpush(v_17);
  Epushd(0,3);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("LChoice",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("CountRule",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("CountRule",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("CountRule",1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("LChoice",2);
  Epopd(0,3);
  Cpop();
  goto u_17;
  v_17 :
  Epushd(0,3);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Path",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Path",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Path",2);
  Epopd(0,3);
  u_17 :
  s_17 :
  q_17 :
  Return();
  m_6 :
  Epushd(0,5);
  MatchFun("Choice",2);
  Arg(0);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,4);
  Tpop();
  Tdupl();
  BuildVard(0,4);
  Epushd(1,0);
  Rpush(w_17);
  l_5 :
  Cpush(y_17);
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildFun("Fail",0);
  Cpop();
  goto x_17;
  y_17 :
  Cpush(a_18);
  Epushd(2,1);
  Cpush(c_18);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildFun("Fail",0);
  OneNextSon();
  MatchVard(2,1);
  AllBuild();
  Cpop();
  goto b_18;
  c_18 :
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  MatchVard(2,1);
  OneNextSon();
  MatchFun("Seq",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  BuildFun("Fail",0);
  AllBuild();
  b_18 :
  BuildVard(2,1);
  Epopd(2,1);
  Cpop();
  goto z_17;
  a_18 :
  Cpush(e_18);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(f_18);
  goto l_5;
  f_18 :
  OneNextSon();
  AllBuild();
  Cpop();
  goto d_18;
  e_18 :
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_18);
  goto l_5;
  g_18 :
  AllBuild();
  d_18 :
  z_17 :
  x_17 :
  Return();
  w_17 :
  Epopd(1,0);
  MatchVard(0,5);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Choice",2);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Choice",2);
  Epopd(0,5);
  Return();
  h_18 :
DOIT_END
