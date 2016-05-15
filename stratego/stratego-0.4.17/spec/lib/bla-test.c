#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(k_14);
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
  Rpush(y_2);
  h_0 :
  Cpush(a_3);
  Cpush(f_3);
  Rpush(h_3);
  goto v_8;
  h_3 :
  Cpop();
  goto b_3;
  f_3 :
  Rpush(i_3);
  goto w_8;
  i_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_3);
  goto h_0;
  j_3 :
  AllBuild();
  b_3 :
  Cpop();
  goto z_2;
  a_3 :
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
  z_2 :
  Return();
  y_2 :
  AllBuild();
  Epopd(1,0);
  Cpush(l_3);
  Rpush(m_3);
  goto x_8;
  m_3 :
  Cpop();
  goto k_3;
  l_3 :
  Cpush(r_3);
  Rpush(s_3);
  goto c_9;
  s_3 :
  Epushd(1,1);
  Tdupl();
  Rpush(t_3);
  goto e_9;
  t_3 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(u_3);
  goto l_9;
  u_3 :
  OneNextSon();
  Rpush(v_3);
  goto k_9;
  v_3 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(w_3);
  goto e_9;
  w_3 :
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
  Rpush(x_3);
  goto f_9;
  x_3 :
  Rpush(y_3);
  goto i_9;
  y_3 :
  Cpop();
  goto q_3;
  r_3 :
  Rpush(z_3);
  goto j_9;
  z_3 :
  q_3 :
  k_3 :
  Epopd(0,0);
  Return();
  v_8 :
  MatchFun("Nil",0);
  Return();
  w_8 :
  Epushd(0,0);
  Cpush(b_4);
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
  goto a_4;
  b_4 :
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
  goto c_4;
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
  goto t_4;
  u_4 :
  Cpush(x_4);
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
  goto w_4;
  x_4 :
  Cpush(z_4);
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
  goto y_4;
  z_4 :
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
  goto e_5;
  f_5 :
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
  goto g_5;
  o_5 :
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
  Cpush(h_6);
  Rpush(i_6);
  goto a_0;
  i_6 :
  Cpop();
  goto g_6;
  h_6 :
  Cpush(m_6);
  Rpush(n_6);
  goto b_0;
  n_6 :
  Cpop();
  goto j_6;
  m_6 :
  Cpush(p_6);
  Rpush(v_6);
  goto c_0;
  v_6 :
  Cpop();
  goto o_6;
  p_6 :
  Cpush(c_7);
  Rpush(d_7);
  goto d_0;
  d_7 :
  Cpop();
  goto w_6;
  c_7 :
  Rpush(j_7);
  goto u_2;
  j_7 :
  w_6 :
  o_6 :
  j_6 :
  g_6 :
  goto f_6;
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
  f_6 :
  goto e_6;
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
  e_6 :
  goto s_5;
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
  s_5 :
  goto r_5;
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
  r_5 :
  goto p_5;
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
  p_5 :
  Epopd(1,10);
  g_5 :
  e_5 :
  b_5 :
  y_4 :
  w_4 :
  t_4 :
  r_4 :
  p_4 :
  c_4 :
  a_4 :
  Epopd(0,0);
  Return();
  x_8 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  l_7 :
  MatchFun("Cons",2);
  Cpush(m_7);
  Arg(0);
  Cpush(u_7);
  Rpush(v_7);
  goto y_8;
  v_7 :
  Cpop();
  goto o_7;
  u_7 :
  MatchFun("Undefined",1);
  o_7 :
  Tpop();
  Cpop();
  goto n_7;
  m_7 :
  Arg(1);
  Tdrop();
  goto l_7;
  n_7 :
  Tpop();
  Epopd(1,0);
  Rpush(b_8);
  goto z_8;
  b_8 :
  Epopd(0,0);
  Return();
  y_8 :
  MatchFun("Help",0);
  Return();
  z_8 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  c_8 :
  MatchFun("Cons",2);
  Cpush(i_8);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto j_8;
  i_8 :
  Arg(1);
  Tdrop();
  goto c_8;
  j_8 :
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
  Rpush(k_8);
  goto a_9;
  k_8 :
  BuildInt(1);
  Rpush(l_8);
  goto b_9;
  l_8 :
  Tpop();
  Epopd(0,1);
  Return();
  a_9 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  b_9 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  c_9 :
  Epushd(0,1);
  Cpush(n_8);
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
  goto m_8;
  n_8 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  m_8 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(v_9);
  goto d_9;
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
  d_9 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  e_9 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  f_9 :
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
  goto k_9;
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
  goto k_9;
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
  Rpush(i_10);
  goto g_9;
  i_10 :
  OneNextSon();
  Rpush(j_10);
  goto k_9;
  j_10 :
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
  Rpush(k_10);
  goto h_9;
  k_10 :
  OneNextSon();
  Rpush(l_10);
  goto k_9;
  l_10 :
  AllBuild();
  AllBuild();
  d_10 :
  Epopd(0,1);
  Return();
  g_9 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  h_9 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  i_9 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(n_10);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(o_10);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  p_10 :
  MatchFun("Cons",2);
  Cpush(q_10);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto r_10;
  q_10 :
  Arg(1);
  Tdrop();
  goto p_10;
  r_10 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  o_10 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_10);
  goto k_9;
  s_10 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  t_10 :
  MatchFun("Cons",2);
  Cpush(u_10);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_10);
  goto k_9;
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
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
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
  goto k_9;
  a_11 :
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
  Rpush(b_11);
  goto a_9;
  b_11 :
  Cpop();
  goto m_10;
  n_10 :
  m_10 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(c_11);
  goto b_9;
  c_11 :
  Epopd(0,2);
  Return();
  j_9 :
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
  Rpush(d_11);
  goto a_9;
  d_11 :
  BuildInt(1);
  Rpush(e_11);
  goto b_9;
  e_11 :
  Epopd(0,0);
  Return();
  k_9 :
  MatchFun("TNil",0);
  Return();
  l_9 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Rpush(f_11);
  goto m_9;
  f_11 :
  Epushd(3,0);
  Rpush(g_11);
  k_4 :
  Cpush(i_11);
  Rpush(j_11);
  goto v_8;
  j_11 :
  Cpop();
  goto h_11;
  i_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(4,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,1);
  Epushd(7,1);
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Op",2);
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
  OneNextSon();
  Rpush(k_11);
  goto k_4;
  k_11 :
  AllBuild();
  h_11 :
  Return();
  g_11 :
  Epopd(3,0);
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
  Rpush(l_11);
  goto p_9;
  l_11 :
  Rpush(m_11);
  goto q_9;
  m_11 :
  Epopd(0,0);
  Return();
  m_9 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(n_11);
  l_4 :
  Cpush(p_11);
  Rpush(q_11);
  goto v_8;
  q_11 :
  Cpop();
  goto o_11;
  p_11 :
  Cpush(s_11);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(t_11);
  goto n_9;
  t_11 :
  OneNextSon();
  Rpush(u_11);
  goto l_4;
  u_11 :
  AllBuild();
  Cpop();
  goto r_11;
  s_11 :
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
  Rpush(v_11);
  goto l_4;
  v_11 :
  r_11 :
  o_11 :
  Return();
  n_11 :
  Epopd(1,0);
  Rpush(w_11);
  goto o_9;
  w_11 :
  Epopd(0,0);
  Return();
  n_9 :
  Epushd(0,2);
  MatchFunFC("Signature",1,&&a_12);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(b_12);
  goto w_2;
  b_12 :
  goto z_11;
  a_12 :
  MatchFunFC("Overlays",1,&&c_12);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(d_12);
  goto x_2;
  d_12 :
  goto z_11;
  c_12 :
  goto fail;
  z_11 :
  goto y_11;
  x_2 :
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(e_12);
  q_5 :
  Cpush(g_12);
  Rpush(h_12);
  goto v_8;
  h_12 :
  Cpop();
  goto f_12;
  g_12 :
  Cpush(j_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,2);
  MatchFun("Overlay",3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Arg(2);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  OneNextSon();
  Rpush(k_12);
  goto q_5;
  k_12 :
  AllBuild();
  Cpop();
  goto i_12;
  j_12 :
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
  Rpush(l_12);
  goto q_5;
  l_12 :
  i_12 :
  f_12 :
  Return();
  e_12 :
  Epopd(1,0);
  Return();
  y_11 :
  goto x_11;
  w_2 :
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(m_12);
  v_4 :
  Cpush(o_12);
  Rpush(p_12);
  goto v_8;
  p_12 :
  Cpop();
  goto n_12;
  o_12 :
  Cpush(r_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("Operations",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,1);
  Epushd(3,0);
  Rpush(s_12);
  l_5 :
  Cpush(u_12);
  Rpush(v_12);
  goto v_8;
  v_12 :
  Cpop();
  goto t_12;
  u_12 :
  Cpush(x_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchFun("OpDecl",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("ConstType",1);
  Arg(0);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Epopd(4,1);
  OneNextSon();
  Rpush(y_12);
  goto l_5;
  y_12 :
  AllBuild();
  Cpop();
  goto w_12;
  x_12 :
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  BuildVard(4,2);
  Epopd(4,2);
  Rpush(z_12);
  goto l_5;
  z_12 :
  w_12 :
  t_12 :
  Return();
  s_12 :
  Epopd(3,0);
  Epopd(2,1);
  OneNextSon();
  Rpush(a_13);
  goto v_4;
  a_13 :
  AllBuild();
  Cpop();
  goto q_12;
  r_12 :
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
  Rpush(b_13);
  goto v_4;
  b_13 :
  q_12 :
  n_12 :
  Return();
  m_12 :
  Epopd(1,0);
  Rpush(c_13);
  goto o_9;
  c_13 :
  Return();
  x_11 :
  Epopd(0,2);
  Return();
  o_9 :
  Epushd(0,0);
  Rpush(d_13);
  r_35 :
  Cpush(f_13);
  Rpush(g_13);
  goto v_8;
  g_13 :
  Cpop();
  goto e_13;
  f_13 :
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
  Rpush(h_13);
  z_5 :
  Cpush(j_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_13);
  goto z_5;
  k_13 :
  AllBuild();
  Cpop();
  goto i_13;
  j_13 :
  Rpush(l_13);
  goto v_8;
  l_13 :
  BuildVard(1,1);
  Rpush(m_13);
  goto r_35;
  m_13 :
  i_13 :
  Return();
  h_13 :
  Epopd(2,0);
  Epopd(1,2);
  e_13 :
  Return();
  d_13 :
  Epopd(0,0);
  Return();
  p_9 :
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
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
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
  Rpush(n_13);
  goto a_9;
  n_13 :
  Tpop();
  Epopd(0,0);
  Return();
  q_9 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  BuildStr(": obsolete library strategy");
  Epushd(2,0);
  Tdupl();
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  BuildFun("stderr",0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildFun("TNil",0);
  BuildStr("subs/1");
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
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
  Epopd(3,1);
  Rpush(o_13);
  goto a_9;
  o_13 :
  Tpop();
  Epopd(2,0);
  Tpop();
  Epopd(1,0);
  Epushd(1,0);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("subs/1 a: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
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
  Rpush(p_13);
  goto a_9;
  p_13 :
  Tpop();
  Epopd(1,0);
  Rpush(q_13);
  goto r_9;
  q_13 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  BuildFun("stderr",0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildStr("subs/1 b: ");
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,1);
  Epopd(5,1);
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
  Rpush(r_13);
  goto a_9;
  r_13 :
  Tpop();
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
  BuildVard(1,2);
  Epushd(2,1);
  Epushd(3,0);
  Tdupl();
  BuildStr(": obsolete library strategy");
  Epushd(4,0);
  Tdupl();
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(5,1);
  BuildFun("stderr",0);
  MatchVard(6,1);
  Epushd(7,1);
  BuildVard(5,1);
  Epushd(8,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildFun("TNil",0);
  BuildStr("subs/2");
  MatchVard(9,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(9,1);
  Epopd(8,1);
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
  Rpush(s_13);
  goto a_9;
  s_13 :
  Tpop();
  Epopd(4,0);
  Tpop();
  Epopd(3,0);
  Epushd(3,0);
  Tdupl();
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(4,1);
  BuildFun("stderr",0);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,1);
  Epushd(7,1);
  MatchVard(7,1);
  Epushd(8,1);
  BuildFun("TNil",0);
  BuildStr("subs/2 a: ");
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
  Rpush(t_13);
  goto a_9;
  t_13 :
  Tpop();
  Epopd(3,0);
  Tdupl();
  BuildVard(1,1);
  MatchVard(2,1);
  Tpop();
  Epushd(3,0);
  Rpush(u_13);
  d_8 :
  Cpush(w_13);
  Epushd(4,2);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  BuildVard(4,1);
  Epushd(5,1);
  MatchVard(5,1);
  Tdupl();
  BuildVard(2,1);
  Epushd(6,0);
  Tdupl();
  x_13 :
  MatchFun("Cons",2);
  Cpush(y_13);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,1);
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
  Tpop();
  Cpop();
  goto z_13;
  y_13 :
  Arg(1);
  Tdrop();
  goto x_13;
  z_13 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(4,2);
  Epopd(5,1);
  Epopd(4,2);
  Cpop();
  goto v_13;
  w_13 :
  AllInit();
  a_14 :
  AllNextSon(&&b_14);
  Rpush(c_14);
  goto d_8;
  c_14 :
  goto a_14;
  b_14 :
  AllBuild();
  v_13 :
  Return();
  u_13 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,2);
  Epopd(0,0);
  Return();
  r_9 :
  Cpush(e_14);
  Epushd(0,2);
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
  Epopd(0,2);
  Cpop();
  goto d_14;
  e_14 :
  Epushd(0,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
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
  Epushd(2,0);
  Rpush(f_14);
  o_8 :
  Cpush(h_14);
  Epushd(3,0);
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
  Epopd(3,0);
  Cpop();
  goto g_14;
  h_14 :
  Epushd(3,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildVard(3,4);
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
  Epopd(3,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(i_14);
  goto o_8;
  i_14 :
  OneNextSon();
  Rpush(j_14);
  goto k_9;
  j_14 :
  AllBuild();
  AllBuild();
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
  BuildVard(3,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,2);
  g_14 :
  Return();
  f_14 :
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Epopd(0,3);
  d_14 :
  Return();
  k_14 :
DOIT_END
