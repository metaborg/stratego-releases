#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(l_9);
  goto main;
  main :
  Epushd(0,0);
  Rpush(w_2);
  goto t_3;
  w_2 :
  Epopd(0,0);
  Return();
  t_3 :
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
  Rpush(x_2);
  h_0 :
  Cpush(z_2);
  Cpush(b_3);
  Rpush(f_3);
  goto u_3;
  f_3 :
  Cpop();
  goto a_3;
  b_3 :
  Rpush(h_3);
  goto v_3;
  h_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_3);
  goto h_0;
  i_3 :
  AllBuild();
  a_3 :
  Cpop();
  goto y_2;
  z_2 :
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
  y_2 :
  Return();
  x_2 :
  AllBuild();
  Epopd(1,0);
  Cpush(k_3);
  Rpush(l_3);
  goto w_3;
  l_3 :
  Cpop();
  goto j_3;
  k_3 :
  Cpush(l_4);
  Rpush(m_4);
  goto b_4;
  m_4 :
  Epushd(1,1);
  Tdupl();
  Rpush(n_4);
  goto d_4;
  n_4 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_4);
  goto k_4;
  o_4 :
  OneNextSon();
  Rpush(p_4);
  goto j_4;
  p_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(q_4);
  goto d_4;
  q_4 :
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
  Rpush(r_4);
  goto e_4;
  r_4 :
  Rpush(s_4);
  goto h_4;
  s_4 :
  Cpop();
  goto m_3;
  l_4 :
  Rpush(t_4);
  goto i_4;
  t_4 :
  m_3 :
  j_3 :
  Epopd(0,0);
  Return();
  u_3 :
  MatchFun("Nil",0);
  Return();
  v_3 :
  Epushd(0,0);
  Cpush(v_4);
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
  goto u_4;
  v_4 :
  Cpush(x_4);
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
  goto w_4;
  x_4 :
  Cpush(z_4);
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
  goto y_4;
  z_4 :
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
  goto a_5;
  b_5 :
  Cpush(d_5);
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
  goto c_5;
  d_5 :
  Cpush(f_5);
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
  goto e_5;
  f_5 :
  Cpush(h_5);
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
  goto g_5;
  h_5 :
  Cpush(j_5);
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
  goto i_5;
  j_5 :
  Cpush(l_5);
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
  goto k_5;
  l_5 :
  Cpush(n_5);
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
  goto m_5;
  n_5 :
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
  Cpush(u_5);
  Rpush(v_5);
  goto a_0;
  v_5 :
  Cpop();
  goto t_5;
  u_5 :
  Cpush(x_5);
  Rpush(y_5);
  goto b_0;
  y_5 :
  Cpop();
  goto w_5;
  x_5 :
  Cpush(a_6);
  Rpush(b_6);
  goto c_0;
  b_6 :
  Cpop();
  goto z_5;
  a_6 :
  Cpush(d_6);
  Rpush(e_6);
  goto d_0;
  e_6 :
  Cpop();
  goto c_6;
  d_6 :
  Rpush(f_6);
  goto u_2;
  f_6 :
  c_6 :
  z_5 :
  w_5 :
  t_5 :
  goto s_5;
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
  s_5 :
  goto r_5;
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
  r_5 :
  goto q_5;
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
  q_5 :
  goto p_5;
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
  p_5 :
  goto o_5;
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
  o_5 :
  Epopd(1,10);
  m_5 :
  k_5 :
  i_5 :
  g_5 :
  e_5 :
  c_5 :
  a_5 :
  y_4 :
  w_4 :
  u_4 :
  Epopd(0,0);
  Return();
  w_3 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  g_6 :
  MatchFun("Cons",2);
  Cpush(h_6);
  Arg(0);
  Cpush(k_6);
  Rpush(l_6);
  goto x_3;
  l_6 :
  Cpop();
  goto j_6;
  k_6 :
  MatchFun("Undefined",1);
  j_6 :
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
  Rpush(m_6);
  goto y_3;
  m_6 :
  Epopd(0,0);
  Return();
  x_3 :
  MatchFun("Help",0);
  Return();
  y_3 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  n_6 :
  MatchFun("Cons",2);
  Cpush(o_6);
  Arg(0);
  MatchFun("Program",1);
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
  Rpush(q_6);
  goto z_3;
  q_6 :
  BuildInt(1);
  Rpush(r_6);
  goto a_4;
  r_6 :
  Tpop();
  Epopd(0,1);
  Return();
  z_3 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  a_4 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  b_4 :
  Epushd(0,1);
  Cpush(t_6);
  Epushd(1,0);
  Tdupl();
  u_6 :
  MatchFun("Cons",2);
  Cpush(v_6);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto w_6;
  v_6 :
  Arg(1);
  Tdrop();
  goto u_6;
  w_6 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto s_6;
  t_6 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  s_6 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(x_6);
  goto c_4;
  x_6 :
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
  c_4 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  d_4 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  e_4 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(z_6);
  Epushd(1,0);
  Tdupl();
  a_7 :
  MatchFun("Cons",2);
  Cpush(b_7);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
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
  Cpop();
  goto y_6;
  z_6 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  y_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_7);
  goto j_4;
  d_7 :
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
  Rpush(e_7);
  goto j_4;
  e_7 :
  AllBuild();
  AllBuild();
  Cpush(g_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  h_7 :
  MatchFun("Cons",2);
  Cpush(i_7);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto j_7;
  i_7 :
  Arg(1);
  Tdrop();
  goto h_7;
  j_7 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(k_7);
  goto f_4;
  k_7 :
  OneNextSon();
  Rpush(l_7);
  goto j_4;
  l_7 :
  AllBuild();
  AllBuild();
  Cpop();
  goto f_7;
  g_7 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_7);
  goto g_4;
  m_7 :
  OneNextSon();
  Rpush(n_7);
  goto j_4;
  n_7 :
  AllBuild();
  AllBuild();
  f_7 :
  Epopd(0,1);
  Return();
  f_4 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  g_4 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  h_4 :
  Epushd(0,2);
  Tdupl();
  Cpush(p_7);
  Epushd(1,0);
  Cpush(r_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(s_7);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  t_7 :
  MatchFun("Cons",2);
  Cpush(u_7);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto v_7;
  u_7 :
  Arg(1);
  Tdrop();
  goto t_7;
  v_7 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  s_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_7);
  goto j_4;
  w_7 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  x_7 :
  MatchFun("Cons",2);
  Cpush(y_7);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto z_7;
  y_7 :
  Arg(1);
  Tdrop();
  goto x_7;
  z_7 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_8);
  goto j_4;
  a_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  b_8 :
  MatchFun("Cons",2);
  Cpush(c_8);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto d_8;
  c_8 :
  Arg(1);
  Tdrop();
  goto b_8;
  d_8 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_8);
  goto j_4;
  e_8 :
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
  Rpush(f_8);
  goto z_3;
  f_8 :
  Cpop();
  goto q_7;
  r_7 :
  q_7 :
  Epopd(1,0);
  Cpop();
  goto o_7;
  p_7 :
  Epushd(1,0);
  Cpush(h_8);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(i_8);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  j_8 :
  MatchFun("Cons",2);
  Cpush(k_8);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto l_8;
  k_8 :
  Arg(1);
  Tdrop();
  goto j_8;
  l_8 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  i_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_8);
  goto j_4;
  m_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  n_8 :
  MatchFun("Cons",2);
  Cpush(o_8);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto p_8;
  o_8 :
  Arg(1);
  Tdrop();
  goto n_8;
  p_8 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_8);
  goto j_4;
  q_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  r_8 :
  MatchFun("Cons",2);
  Cpush(s_8);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto t_8;
  s_8 :
  Arg(1);
  Tdrop();
  goto r_8;
  t_8 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_8);
  goto j_4;
  u_8 :
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
  Rpush(v_8);
  goto z_3;
  v_8 :
  Cpop();
  goto g_8;
  h_8 :
  g_8 :
  Epopd(1,0);
  o_7 :
  Tpop();
  BuildInt(0);
  Rpush(w_8);
  goto a_4;
  w_8 :
  Epopd(0,2);
  Return();
  i_4 :
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
  Rpush(x_8);
  goto z_3;
  x_8 :
  BuildInt(1);
  Rpush(y_8);
  goto a_4;
  y_8 :
  Epopd(0,0);
  Return();
  j_4 :
  MatchFun("TNil",0);
  Return();
  k_4 :
  Epushd(0,0);
  Rpush(z_8);
  v_24 :
  Cpush(b_9);
  MatchFun("Or",2);
  TravInit();
  OneNextSon();
  Rpush(c_9);
  goto v_24;
  c_9 :
  OneNextSon();
  Rpush(d_9);
  goto v_24;
  d_9 :
  AllBuild();
  Cpop();
  goto a_9;
  b_9 :
  Rpush(e_9);
  w_24 :
  Cpush(g_9);
  MatchFun("And",2);
  TravInit();
  OneNextSon();
  Rpush(h_9);
  goto w_24;
  h_9 :
  OneNextSon();
  Rpush(i_9);
  goto w_24;
  i_9 :
  AllBuild();
  Cpop();
  goto f_9;
  g_9 :
  Cpush(k_9);
  MatchFun("Atom",1);
  Cpop();
  goto j_9;
  k_9 :
  MatchFun("Not",1);
  TravInit();
  OneNextSon();
  MatchFun("Atom",1);
  AllBuild();
  j_9 :
  f_9 :
  Return();
  e_9 :
  a_9 :
  Return();
  z_8 :
  Epopd(0,0);
  Return();
  l_9 :
DOIT_END
