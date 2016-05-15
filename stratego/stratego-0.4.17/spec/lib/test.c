#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(a_8);
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
  Rpush(w_2);
  h_0 :
  Cpush(y_2);
  Cpush(a_3);
  Rpush(b_3);
  goto x_3;
  b_3 :
  Cpop();
  goto z_2;
  a_3 :
  Rpush(c_3);
  goto y_3;
  c_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_3);
  goto h_0;
  d_3 :
  AllBuild();
  z_2 :
  Cpop();
  goto x_2;
  y_2 :
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
  x_2 :
  Return();
  w_2 :
  AllBuild();
  Epopd(1,0);
  Cpush(f_3);
  Rpush(g_3);
  goto z_3;
  g_3 :
  Cpop();
  goto e_3;
  f_3 :
  Cpush(l_3);
  Rpush(m_3);
  goto e_4;
  m_3 :
  Epushd(1,1);
  Tdupl();
  Rpush(o_3);
  goto g_4;
  o_3 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_3);
  goto m_4;
  p_3 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(q_3);
  goto g_4;
  q_3 :
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
  Rpush(r_3);
  goto h_4;
  r_3 :
  Rpush(s_3);
  goto k_4;
  s_3 :
  Cpop();
  goto k_3;
  l_3 :
  Rpush(t_3);
  goto l_4;
  t_3 :
  k_3 :
  e_3 :
  Epopd(0,0);
  Return();
  x_3 :
  MatchFun("Nil",0);
  Return();
  y_3 :
  Epushd(0,0);
  Cpush(o_4);
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
  o_4 :
  Cpush(q_4);
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
  goto p_4;
  q_4 :
  Cpush(s_4);
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
  goto r_4;
  s_4 :
  Cpush(u_4);
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
  goto t_4;
  u_4 :
  Cpush(w_4);
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
  goto v_4;
  w_4 :
  Cpush(y_4);
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
  goto x_4;
  y_4 :
  Cpush(a_5);
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
  goto z_4;
  a_5 :
  Cpush(c_5);
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
  goto b_5;
  c_5 :
  Cpush(e_5);
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
  goto d_5;
  e_5 :
  Cpush(g_5);
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
  goto f_5;
  g_5 :
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
  Cpush(n_5);
  Rpush(o_5);
  goto a_0;
  o_5 :
  Cpop();
  goto m_5;
  n_5 :
  Cpush(q_5);
  Rpush(r_5);
  goto b_0;
  r_5 :
  Cpop();
  goto p_5;
  q_5 :
  Cpush(t_5);
  Rpush(u_5);
  goto c_0;
  u_5 :
  Cpop();
  goto s_5;
  t_5 :
  Cpush(w_5);
  Rpush(x_5);
  goto d_0;
  x_5 :
  Cpop();
  goto v_5;
  w_5 :
  Rpush(y_5);
  goto u_2;
  y_5 :
  v_5 :
  s_5 :
  p_5 :
  m_5 :
  goto l_5;
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
  l_5 :
  goto k_5;
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
  k_5 :
  goto j_5;
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
  j_5 :
  goto i_5;
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
  i_5 :
  goto h_5;
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
  h_5 :
  Epopd(1,10);
  f_5 :
  d_5 :
  b_5 :
  z_4 :
  x_4 :
  v_4 :
  t_4 :
  r_4 :
  p_4 :
  n_4 :
  Epopd(0,0);
  Return();
  z_3 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  z_5 :
  MatchFun("Cons",2);
  Cpush(a_6);
  Arg(0);
  Cpush(d_6);
  Rpush(e_6);
  goto a_4;
  e_6 :
  Cpop();
  goto c_6;
  d_6 :
  MatchFun("Undefined",1);
  c_6 :
  Tpop();
  Cpop();
  goto b_6;
  a_6 :
  Arg(1);
  Tdrop();
  goto z_5;
  b_6 :
  Tpop();
  Epopd(1,0);
  Rpush(f_6);
  goto b_4;
  f_6 :
  Epopd(0,0);
  Return();
  a_4 :
  MatchFun("Help",0);
  Return();
  b_4 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  g_6 :
  MatchFun("Cons",2);
  Cpush(h_6);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto i_6;
  h_6 :
  Arg(1);
  Tdrop();
  goto g_6;
  i_6 :
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
  Rpush(j_6);
  goto c_4;
  j_6 :
  BuildInt(1);
  Rpush(k_6);
  goto d_4;
  k_6 :
  Tpop();
  Epopd(0,1);
  Return();
  c_4 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  d_4 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  e_4 :
  Epushd(0,1);
  Cpush(m_6);
  Epushd(1,0);
  Tdupl();
  n_6 :
  MatchFun("Cons",2);
  Cpush(o_6);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto p_6;
  o_6 :
  Arg(1);
  Tdrop();
  goto n_6;
  p_6 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto l_6;
  m_6 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  l_6 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(q_6);
  goto f_4;
  q_6 :
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
  f_4 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  g_4 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  h_4 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(s_6);
  Epushd(1,0);
  Tdupl();
  t_6 :
  MatchFun("Cons",2);
  Cpush(u_6);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto v_6;
  u_6 :
  Arg(1);
  Tdrop();
  goto t_6;
  v_6 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto r_6;
  s_6 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  r_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_6);
  goto m_4;
  w_6 :
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
  Rpush(x_6);
  goto m_4;
  x_6 :
  AllBuild();
  AllBuild();
  Cpush(z_6);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  a_7 :
  MatchFun("Cons",2);
  Cpush(b_7);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto c_7;
  b_7 :
  Arg(1);
  Tdrop();
  goto a_7;
  c_7 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(d_7);
  goto i_4;
  d_7 :
  OneNextSon();
  Rpush(e_7);
  goto m_4;
  e_7 :
  AllBuild();
  AllBuild();
  Cpop();
  goto y_6;
  z_6 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(f_7);
  goto j_4;
  f_7 :
  OneNextSon();
  Rpush(g_7);
  goto m_4;
  g_7 :
  AllBuild();
  AllBuild();
  y_6 :
  Epopd(0,1);
  Return();
  i_4 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  j_4 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  k_4 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(i_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(j_7);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  k_7 :
  MatchFun("Cons",2);
  Cpush(l_7);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto m_7;
  l_7 :
  Arg(1);
  Tdrop();
  goto k_7;
  m_7 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  j_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_7);
  goto m_4;
  n_7 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  o_7 :
  MatchFun("Cons",2);
  Cpush(p_7);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
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
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_7);
  goto m_4;
  r_7 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  s_7 :
  MatchFun("Cons",2);
  Cpush(t_7);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto u_7;
  t_7 :
  Arg(1);
  Tdrop();
  goto s_7;
  u_7 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_7);
  goto m_4;
  v_7 :
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
  Rpush(w_7);
  goto c_4;
  w_7 :
  Cpop();
  goto h_7;
  i_7 :
  h_7 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(x_7);
  goto d_4;
  x_7 :
  Epopd(0,2);
  Return();
  l_4 :
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
  Rpush(y_7);
  goto c_4;
  y_7 :
  BuildInt(1);
  Rpush(z_7);
  goto d_4;
  z_7 :
  Epopd(0,0);
  Return();
  m_4 :
  MatchFun("TNil",0);
  Return();
  a_8 :
DOIT_END
