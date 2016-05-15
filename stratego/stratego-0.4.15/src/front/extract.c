#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(k_46);
  goto main;
  main :
  Epushd(0,0);
  Rpush(y_2);
  goto l_56;
  y_2 :
  Epopd(0,0);
  Return();
  l_56 :
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
  goto m_56;
  i_3 :
  Cpop();
  goto f_3;
  h_3 :
  Rpush(j_3);
  goto n_56;
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
  goto o_56;
  x_3 :
  Cpop();
  goto l_3;
  m_3 :
  Cpush(z_3);
  Rpush(a_4);
  goto t_56;
  a_4 :
  Epushd(1,1);
  Tdupl();
  Rpush(c_4);
  goto v_56;
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
  goto c_57;
  d_4 :
  OneNextSon();
  Rpush(e_4);
  goto b_57;
  e_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(f_4);
  goto v_56;
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
  goto w_56;
  k_4 :
  Rpush(l_4);
  goto z_56;
  l_4 :
  Cpop();
  goto y_3;
  z_3 :
  Rpush(m_4);
  goto a_57;
  m_4 :
  y_3 :
  l_3 :
  Epopd(0,0);
  Return();
  m_56 :
  MatchFun("Nil",0);
  Return();
  n_56 :
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
  d_5 :
  Cpush(h_5);
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
  goto f_5;
  h_5 :
  Cpush(m_5);
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
  goto t_5;
  u_5 :
  Cpush(w_5);
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
  goto v_5;
  w_5 :
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
  Cpush(m_6);
  Rpush(n_6);
  goto a_0;
  n_6 :
  Cpop();
  goto c_6;
  m_6 :
  Cpush(p_6);
  Rpush(q_6);
  goto b_0;
  q_6 :
  Cpop();
  goto o_6;
  p_6 :
  Cpush(u_6);
  Rpush(v_6);
  goto c_0;
  v_6 :
  Cpop();
  goto r_6;
  u_6 :
  Cpush(d_7);
  Rpush(q_7);
  goto d_0;
  q_7 :
  Cpop();
  goto c_7;
  d_7 :
  Rpush(r_7);
  goto u_2;
  r_7 :
  c_7 :
  r_6 :
  o_6 :
  c_6 :
  goto b_6;
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
  b_6 :
  goto a_6;
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
  a_6 :
  goto z_5;
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
  z_5 :
  goto y_5;
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
  y_5 :
  goto x_5;
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
  x_5 :
  Epopd(1,10);
  v_5 :
  t_5 :
  r_5 :
  p_5 :
  n_5 :
  l_5 :
  f_5 :
  s_4 :
  q_4 :
  n_4 :
  Epopd(0,0);
  Return();
  o_56 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  v_8 :
  MatchFun("Cons",2);
  Cpush(w_8);
  Arg(0);
  Cpush(k_9);
  Rpush(l_9);
  goto p_56;
  l_9 :
  Cpop();
  goto j_9;
  k_9 :
  MatchFun("Undefined",1);
  j_9 :
  Tpop();
  Cpop();
  goto i_9;
  w_8 :
  Arg(1);
  Tdrop();
  goto v_8;
  i_9 :
  Tpop();
  Epopd(1,0);
  Rpush(m_9);
  goto q_56;
  m_9 :
  Epopd(0,0);
  Return();
  p_56 :
  MatchFun("Help",0);
  Return();
  q_56 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  n_9 :
  MatchFun("Cons",2);
  Cpush(o_9);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto p_9;
  o_9 :
  Arg(1);
  Tdrop();
  goto n_9;
  p_9 :
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
  Rpush(q_9);
  goto r_56;
  q_9 :
  BuildInt(1);
  Rpush(r_9);
  goto s_56;
  r_9 :
  Tpop();
  Epopd(0,1);
  Return();
  r_56 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  s_56 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  t_56 :
  Epushd(0,1);
  Cpush(t_9);
  Epushd(1,0);
  Tdupl();
  u_9 :
  MatchFun("Cons",2);
  Cpush(v_9);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto w_9;
  v_9 :
  Arg(1);
  Tdrop();
  goto u_9;
  w_9 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto s_9;
  t_9 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  s_9 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(x_9);
  goto u_56;
  x_9 :
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
  u_56 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  v_56 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  w_56 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(z_9);
  Epushd(1,0);
  Tdupl();
  a_10 :
  MatchFun("Cons",2);
  Cpush(b_10);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto c_10;
  b_10 :
  Arg(1);
  Tdrop();
  goto a_10;
  c_10 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto y_9;
  z_9 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  y_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto b_57;
  d_10 :
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
  Rpush(e_10);
  goto b_57;
  e_10 :
  AllBuild();
  AllBuild();
  Cpush(g_10);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  h_10 :
  MatchFun("Cons",2);
  Cpush(i_10);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto j_10;
  i_10 :
  Arg(1);
  Tdrop();
  goto h_10;
  j_10 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_10);
  goto x_56;
  m_10 :
  OneNextSon();
  Rpush(n_10);
  goto b_57;
  n_10 :
  AllBuild();
  AllBuild();
  Cpop();
  goto f_10;
  g_10 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_10);
  goto y_56;
  o_10 :
  OneNextSon();
  Rpush(p_10);
  goto b_57;
  p_10 :
  AllBuild();
  AllBuild();
  f_10 :
  Epopd(0,1);
  Return();
  x_56 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  y_56 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  z_56 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(r_10);
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
  goto b_57;
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
  goto m_11;
  h_11 :
  Arg(1);
  Tdrop();
  goto g_11;
  m_11 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_11);
  goto b_57;
  n_11 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  o_11 :
  MatchFun("Cons",2);
  Cpush(p_11);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto q_11;
  p_11 :
  Arg(1);
  Tdrop();
  goto o_11;
  q_11 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_11);
  goto b_57;
  r_11 :
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
  Rpush(s_11);
  goto r_56;
  s_11 :
  Cpop();
  goto q_10;
  r_10 :
  q_10 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(t_11);
  goto s_56;
  t_11 :
  Epopd(0,2);
  Return();
  a_57 :
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
  Rpush(u_11);
  goto r_56;
  u_11 :
  BuildInt(1);
  Rpush(v_11);
  goto s_56;
  v_11 :
  Epopd(0,0);
  Return();
  b_57 :
  MatchFun("TNil",0);
  Return();
  c_57 :
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
  Rpush(w_11);
  goto e_57;
  w_11 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(1,2);
  Epushd(5,0);
  Rpush(x_11);
  b_4 :
  Cpush(z_11);
  Rpush(a_12);
  goto m_56;
  a_12 :
  Cpop();
  goto y_11;
  z_11 :
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
  Rpush(b_12);
  goto i_57;
  b_12 :
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
  Rpush(c_12);
  goto b_4;
  c_12 :
  AllBuild();
  y_11 :
  Return();
  x_11 :
  Epopd(5,0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(1,3);
  Epushd(6,0);
  Rpush(d_12);
  o_4 :
  Cpush(f_12);
  Rpush(g_12);
  goto m_56;
  g_12 :
  Cpop();
  goto e_12;
  f_12 :
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
  Rpush(h_12);
  goto i_57;
  h_12 :
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
  Rpush(i_12);
  goto o_4;
  i_12 :
  AllBuild();
  e_12 :
  Return();
  d_12 :
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
  Rpush(j_12);
  goto d_57;
  j_12 :
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
  Rpush(k_12);
  goto k_57;
  k_12 :
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
  Rpush(l_12);
  goto o_57;
  l_12 :
  Rpush(m_12);
  goto c_58;
  m_12 :
  Epopd(0,0);
  Return();
  d_57 :
  Epushd(0,0);
  Rpush(n_12);
  b_44 :
  Cpush(p_12);
  Rpush(q_12);
  goto m_56;
  q_12 :
  Cpop();
  goto o_12;
  p_12 :
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
  Rpush(r_12);
  z_4 :
  Cpush(t_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_12);
  goto z_4;
  u_12 :
  AllBuild();
  Cpop();
  goto s_12;
  t_12 :
  Rpush(v_12);
  goto m_56;
  v_12 :
  BuildVard(1,1);
  Rpush(w_12);
  goto b_44;
  w_12 :
  s_12 :
  Return();
  r_12 :
  Epopd(2,0);
  Epopd(1,2);
  o_12 :
  Return();
  n_12 :
  Epopd(0,0);
  Return();
  e_57 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(x_12);
  a_5 :
  Cpush(z_12);
  Rpush(a_13);
  goto m_56;
  a_13 :
  Cpop();
  goto y_12;
  z_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(b_13);
  goto f_57;
  b_13 :
  OneNextSon();
  Rpush(c_13);
  goto a_5;
  c_13 :
  AllBuild();
  y_12 :
  Return();
  x_12 :
  Epopd(1,0);
  Rpush(d_13);
  goto d_57;
  d_13 :
  Epopd(0,0);
  Return();
  f_57 :
  Epushd(0,2);
  MatchFunFC("Sorts",1,&&h_13);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(i_13);
  goto w_2;
  i_13 :
  goto g_13;
  h_13 :
  MatchFunFC("Operations",1,&&j_13);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(k_13);
  goto x_2;
  k_13 :
  goto g_13;
  j_13 :
  goto fail;
  g_13 :
  goto f_13;
  x_2 :
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(l_13);
  b_5 :
  Cpush(n_13);
  Rpush(o_13);
  goto m_56;
  o_13 :
  Cpop();
  goto m_13;
  n_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(p_13);
  goto g_57;
  p_13 :
  OneNextSon();
  Rpush(q_13);
  goto b_5;
  q_13 :
  AllBuild();
  m_13 :
  Return();
  l_13 :
  Epopd(1,0);
  Return();
  f_13 :
  goto e_13;
  w_2 :
  BuildFun("Nil",0);
  Return();
  e_13 :
  Epopd(0,2);
  Return();
  g_57 :
  Cpush(b_14);
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
  goto a_14;
  b_14 :
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
  Rpush(c_14);
  c_5 :
  Cpush(p_14);
  Rpush(q_14);
  goto m_56;
  q_14 :
  Cpop();
  goto d_14;
  p_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(r_14);
  goto h_57;
  r_14 :
  OneNextSon();
  Rpush(s_14);
  goto c_5;
  s_14 :
  AllBuild();
  d_14 :
  Return();
  c_14 :
  Epopd(1,0);
  MatchVard(0,4);
  Tpop();
  Epushd(1,1);
  BuildVard(0,4);
  Epushd(2,0);
  Rpush(t_14);
  e_5 :
  Cpush(v_14);
  Rpush(w_14);
  goto m_56;
  w_14 :
  Cpop();
  goto u_14;
  v_14 :
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
  Rpush(x_14);
  goto e_5;
  x_14 :
  AllBuild();
  u_14 :
  Return();
  t_14 :
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
  a_14 :
  Return();
  h_57 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  i_57 :
  Epushd(0,0);
  Rpush(y_14);
  j_5 :
  Cpush(a_15);
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
  goto z_14;
  a_15 :
  Cpush(c_15);
  Epushd(1,1);
  Tdupl();
  Rpush(d_15);
  goto j_57;
  d_15 :
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
  Rpush(e_15);
  goto j_5;
  e_15 :
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
  Rpush(f_15);
  k_6 :
  Cpush(k_15);
  Rpush(l_15);
  goto m_56;
  l_15 :
  Cpop();
  goto g_15;
  k_15 :
  Cpush(v_15);
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
  w_15 :
  MatchFun("Cons",2);
  Cpush(x_15);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto y_15;
  x_15 :
  Arg(1);
  Tdrop();
  goto w_15;
  y_15 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(z_15);
  goto k_6;
  z_15 :
  Cpop();
  goto m_15;
  v_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_16);
  goto k_6;
  a_16 :
  AllBuild();
  m_15 :
  g_15 :
  Return();
  f_15 :
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
  Rpush(b_16);
  b_9 :
  Cpush(d_16);
  Rpush(e_16);
  goto m_56;
  e_16 :
  BuildFun("Nil",0);
  Cpop();
  goto c_16;
  d_16 :
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
  Rpush(f_16);
  goto b_9;
  f_16 :
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
  Rpush(g_16);
  g_9 :
  Cpush(t_16);
  Rpush(u_16);
  goto m_56;
  u_16 :
  BuildVard(4,3);
  Cpop();
  goto s_16;
  t_16 :
  Cpush(y_16);
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
  z_16 :
  MatchFun("Cons",2);
  Cpush(a_17);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto b_17;
  a_17 :
  Arg(1);
  Tdrop();
  goto z_16;
  b_17 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(c_17);
  goto g_9;
  c_17 :
  Cpop();
  goto v_16;
  y_16 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_17);
  goto g_9;
  d_17 :
  AllBuild();
  v_16 :
  s_16 :
  Return();
  g_16 :
  Epopd(4,4);
  c_16 :
  Return();
  b_16 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto b_15;
  c_15 :
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
  Rpush(e_17);
  w_10 :
  Cpush(g_17);
  Rpush(h_17);
  goto m_56;
  h_17 :
  BuildFun("Nil",0);
  Cpop();
  goto f_17;
  g_17 :
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
  Rpush(i_17);
  goto j_5;
  i_17 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(m_17);
  goto w_10;
  m_17 :
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
  Rpush(p_17);
  i_11 :
  Cpush(r_17);
  Rpush(s_17);
  goto m_56;
  s_17 :
  BuildVard(3,3);
  Cpop();
  goto q_17;
  r_17 :
  Cpush(a_18);
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
  b_18 :
  MatchFun("Cons",2);
  Cpush(c_18);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto d_18;
  c_18 :
  Arg(1);
  Tdrop();
  goto b_18;
  d_18 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(e_18);
  goto i_11;
  e_18 :
  Cpop();
  goto z_17;
  a_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_18);
  goto i_11;
  f_18 :
  AllBuild();
  z_17 :
  q_17 :
  Return();
  p_17 :
  Epopd(3,4);
  f_17 :
  Return();
  e_17 :
  Epopd(2,0);
  Epopd(1,1);
  b_15 :
  z_14 :
  Return();
  y_14 :
  Epopd(0,0);
  Return();
  j_57 :
  Cpush(h_18);
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
  goto g_18;
  h_18 :
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
  goto i_57;
  i_18 :
  Epopd(0,3);
  g_18 :
  Return();
  k_57 :
  Epushd(0,0);
  Rpush(j_18);
  goto l_57;
  j_18 :
  Rpush(m_18);
  goto n_57;
  m_18 :
  Epopd(0,0);
  Return();
  l_57 :
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
  Rpush(n_18);
  l_11 :
  Epushd(1,0);
  Rpush(o_18);
  h_15 :
  Cpush(q_18);
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
  Rpush(r_18);
  goto m_57;
  r_18 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto p_18;
  q_18 :
  Cpush(t_18);
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
  Rpush(u_18);
  goto j_57;
  u_18 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(v_18);
  k_17 :
  Cpush(x_18);
  Rpush(y_18);
  goto m_56;
  y_18 :
  Cpop();
  goto w_18;
  x_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(z_18);
  goto h_57;
  z_18 :
  OneNextSon();
  Rpush(a_19);
  goto k_17;
  a_19 :
  AllBuild();
  w_18 :
  Return();
  v_18 :
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
  Rpush(b_19);
  l_17 :
  Cpush(d_19);
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
  goto c_19;
  d_19 :
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
  Rpush(e_19);
  goto l_17;
  e_19 :
  OneNextSon();
  Rpush(f_19);
  goto b_57;
  f_19 :
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
  c_19 :
  Return();
  b_19 :
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
  Rpush(g_19);
  n_17 :
  Cpush(i_19);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_19);
  goto n_17;
  j_19 :
  AllBuild();
  Cpop();
  goto h_19;
  i_19 :
  Rpush(k_19);
  goto m_56;
  k_19 :
  BuildVard(3,1);
  h_19 :
  Return();
  g_19 :
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
  Rpush(l_19);
  goto l_11;
  l_19 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto s_18;
  t_18 :
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
  m_19 :
  AllNextSon(&&n_19);
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
  Rpush(o_19);
  goto h_15;
  o_19 :
  Epopd(3,1);
  goto m_19;
  n_19 :
  AllBuild();
  Epopd(2,2);
  s_18 :
  p_18 :
  Return();
  o_18 :
  Epopd(1,0);
  Return();
  n_18 :
  Epopd(0,0);
  Return();
  m_57 :
  Epushd(0,0);
  Rpush(p_19);
  p_40 :
  Cpush(r_19);
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
  goto q_19;
  r_19 :
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
  Rpush(s_19);
  goto p_40;
  s_19 :
  q_19 :
  Return();
  p_19 :
  Epopd(0,0);
  Return();
  n_57 :
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
  Rpush(t_19);
  l_18 :
  Epushd(1,0);
  Rpush(u_19);
  y_22 :
  Cpush(w_19);
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
  Rpush(x_19);
  goto m_57;
  x_19 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto v_19;
  w_19 :
  Cpush(z_19);
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
  Cpush(b_20);
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
  goto a_20;
  b_20 :
  Cpush(d_20);
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
  goto c_20;
  d_20 :
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
  c_20 :
  a_20 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(e_20);
  w_24 :
  Cpush(g_20);
  Rpush(h_20);
  goto m_56;
  h_20 :
  Cpop();
  goto f_20;
  g_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_20);
  goto h_57;
  i_20 :
  OneNextSon();
  Rpush(j_20);
  goto w_24;
  j_20 :
  AllBuild();
  f_20 :
  Return();
  e_20 :
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
  Rpush(k_20);
  x_24 :
  Cpush(m_20);
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
  goto l_20;
  m_20 :
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
  Rpush(n_20);
  goto x_24;
  n_20 :
  OneNextSon();
  Rpush(o_20);
  goto b_57;
  o_20 :
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
  l_20 :
  Return();
  k_20 :
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
  Rpush(p_20);
  y_24 :
  Cpush(r_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_20);
  goto y_24;
  s_20 :
  AllBuild();
  Cpop();
  goto q_20;
  r_20 :
  Rpush(t_20);
  goto m_56;
  t_20 :
  BuildVard(3,1);
  q_20 :
  Return();
  p_20 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Cpush(v_20);
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
  goto u_20;
  v_20 :
  Cpush(x_20);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
  Cpop();
  goto w_20;
  x_20 :
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
  w_20 :
  u_20 :
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
  Cpush(z_20);
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
  Rpush(a_21);
  goto l_18;
  a_21 :
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
  Rpush(b_21);
  goto l_18;
  b_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto y_20;
  z_20 :
  Cpush(d_21);
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
  Rpush(e_21);
  goto l_18;
  e_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto c_21;
  d_21 :
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
  Rpush(f_21);
  goto l_18;
  f_21 :
  Epopd(4,1);
  AllBuild();
  c_21 :
  y_20 :
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto y_19;
  z_19 :
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
  g_21 :
  AllNextSon(&&h_21);
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
  Rpush(i_21);
  goto y_22;
  i_21 :
  Epopd(3,1);
  goto g_21;
  h_21 :
  AllBuild();
  Epopd(2,2);
  y_19 :
  v_19 :
  Return();
  u_19 :
  Epopd(1,0);
  Return();
  t_19 :
  Epopd(0,0);
  Return();
  o_57 :
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
  Rpush(j_21);
  a_30 :
  Cpush(l_21);
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
  Rpush(m_21);
  goto p_57;
  m_21 :
  MatchVard(2,6);
  BuildVard(2,6);
  Rpush(n_21);
  goto a_58;
  n_21 :
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
  Rpush(o_21);
  g_31 :
  Cpush(q_21);
  Rpush(r_21);
  goto m_56;
  r_21 :
  Cpop();
  goto p_21;
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
  goto g_31;
  x_21 :
  Cpop();
  goto s_21;
  t_21 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_21);
  goto g_31;
  y_21 :
  AllBuild();
  s_21 :
  p_21 :
  Return();
  o_21 :
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
  Rpush(z_21);
  q_31 :
  Cpush(g_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_22);
  goto q_31;
  h_22 :
  AllBuild();
  Cpop();
  goto f_22;
  g_22 :
  Rpush(i_22);
  goto m_56;
  i_22 :
  BuildVard(4,1);
  f_22 :
  Return();
  z_21 :
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
  Rpush(j_22);
  r_31 :
  Cpush(l_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_22);
  goto r_31;
  m_22 :
  AllBuild();
  Cpop();
  goto k_22;
  l_22 :
  Rpush(n_22);
  goto m_56;
  n_22 :
  BuildVard(5,1);
  k_22 :
  Return();
  j_22 :
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
  goto k_21;
  l_21 :
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
  k_21 :
  Cpush(x_22);
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
  goto w_22;
  x_22 :
  Rpush(m_23);
  goto a_30;
  m_23 :
  w_22 :
  Return();
  j_21 :
  Epopd(1,3);
  Cpush(o_23);
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
  goto n_23;
  o_23 :
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
  Rpush(p_23);
  h_32 :
  Cpush(r_23);
  Rpush(z_23);
  goto m_56;
  z_23 :
  Cpop();
  goto q_23;
  r_23 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(b_24);
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
  Rpush(z_24);
  goto b_58;
  z_24 :
  Epopd(3,3);
  Cpop();
  goto a_24;
  b_24 :
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
  Rpush(a_25);
  goto b_58;
  a_25 :
  Epopd(3,2);
  a_24 :
  OneNextSon();
  Rpush(b_25);
  goto h_32;
  b_25 :
  AllBuild();
  q_23 :
  Return();
  p_23 :
  Epopd(2,0);
  Tpop();
  BuildVard(1,1);
  Epopd(1,3);
  BuildInt(1);
  Rpush(c_25);
  goto s_56;
  c_25 :
  n_23 :
  Epopd(0,0);
  Return();
  p_57 :
  Epushd(0,0);
  Cpush(e_25);
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
  Rpush(h_25);
  goto q_57;
  h_25 :
  MatchVard(1,5);
  Tpop();
  BuildVard(1,5);
  Epopd(1,5);
  Rpush(i_25);
  goto v_57;
  i_25 :
  Cpop();
  goto d_25;
  e_25 :
  Cpush(o_25);
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
  Rpush(r_25);
  i_33 :
  Cpush(t_25);
  Rpush(v_25);
  goto m_56;
  v_25 :
  Cpop();
  goto s_25;
  t_25 :
  Cpush(x_25);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  MatchVard(1,1);
  OneNextSon();
  Tdupl();
  Rpush(y_25);
  goto w_57;
  y_25 :
  MatchVard(1,2);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(z_25);
  goto i_33;
  z_25 :
  AllBuild();
  Cpop();
  goto w_25;
  x_25 :
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
  Rpush(a_26);
  goto i_33;
  a_26 :
  w_25 :
  s_25 :
  Return();
  r_25 :
  Epopd(2,0);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  Rpush(b_26);
  goto y_57;
  b_26 :
  Cpop();
  goto j_25;
  o_25 :
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
  Rpush(c_26);
  u_33 :
  Cpush(e_26);
  Rpush(f_26);
  goto m_56;
  f_26 :
  Cpop();
  goto d_26;
  e_26 :
  Cpush(h_26);
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
  Rpush(i_26);
  goto u_33;
  i_26 :
  AllBuild();
  Cpop();
  goto g_26;
  h_26 :
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
  Rpush(j_26);
  goto u_33;
  j_26 :
  g_26 :
  d_26 :
  Return();
  c_26 :
  Epopd(2,0);
  MatchVard(1,3);
  Tpop();
  BuildVard(1,3);
  Epopd(1,3);
  Rpush(k_26);
  goto y_57;
  k_26 :
  j_25 :
  d_25 :
  Epopd(0,0);
  Return();
  q_57 :
  Cpush(m_26);
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
  Rpush(n_26);
  goto h_57;
  n_26 :
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
  Rpush(o_26);
  a_36 :
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
  Rpush(p_26);
  goto s_57;
  p_26 :
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
  Rpush(q_26);
  goto r_57;
  q_26 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,2);
  Epushd(5,4);
  MatchVard(5,1);
  Tdupl();
  Rpush(r_26);
  goto h_57;
  r_26 :
  MatchVard(5,2);
  Rpush(s_26);
  goto h_57;
  s_26 :
  MatchVard(5,3);
  Rpush(t_26);
  goto h_57;
  t_26 :
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
  Cpush(v_26);
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
  goto u_26;
  v_26 :
  Rpush(w_26);
  goto a_36;
  w_26 :
  u_26 :
  Return();
  o_26 :
  Epopd(1,2);
  Epushd(1,0);
  Rpush(x_26);
  o_36 :
  Cpush(z_26);
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(a_27);
  p_37 :
  Cpush(c_27);
  Rpush(d_27);
  goto m_56;
  d_27 :
  Cpop();
  goto b_27;
  c_27 :
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
  Rpush(e_27);
  goto p_37;
  e_27 :
  AllBuild();
  b_27 :
  Return();
  a_27 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(f_27);
  s_37 :
  Cpush(h_27);
  Rpush(j_27);
  goto m_56;
  j_27 :
  Cpop();
  goto g_27;
  h_27 :
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
  Rpush(k_27);
  goto s_37;
  k_27 :
  AllBuild();
  g_27 :
  Return();
  f_27 :
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
  Rpush(l_27);
  goto o_36;
  l_27 :
  OneNextSon();
  Rpush(m_27);
  goto b_57;
  m_27 :
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
  goto y_26;
  z_26 :
  Epushd(2,0);
  Rpush(n_27);
  t_37 :
  Cpush(p_27);
  Rpush(q_27);
  goto m_56;
  q_27 :
  Cpop();
  goto o_27;
  p_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(r_27);
  goto b_57;
  r_27 :
  OneNextSon();
  Rpush(s_27);
  goto t_37;
  s_27 :
  AllBuild();
  o_27 :
  Return();
  n_27 :
  Epopd(2,0);
  BuildFun("TNil",0);
  y_26 :
  Return();
  x_26 :
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
  Rpush(t_27);
  z_37 :
  Cpush(v_27);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_27);
  goto z_37;
  w_27 :
  AllBuild();
  Cpop();
  goto u_27;
  v_27 :
  Rpush(x_27);
  goto m_56;
  x_27 :
  BuildVard(2,1);
  u_27 :
  Return();
  t_27 :
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
  goto l_26;
  m_26 :
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
  Rpush(y_27);
  goto t_57;
  y_27 :
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
  Rpush(z_27);
  d_39 :
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
  Rpush(a_28);
  goto s_57;
  a_28 :
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
  Rpush(e_28);
  goto r_57;
  e_28 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,2);
  Rpush(f_28);
  goto h_57;
  f_28 :
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
  Cpush(h_28);
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
  goto g_28;
  h_28 :
  Rpush(j_28);
  goto d_39;
  j_28 :
  g_28 :
  Return();
  z_27 :
  Epopd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,5);
  Tpop();
  BuildVard(0,5);
  Rpush(k_28);
  goto u_57;
  k_28 :
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
  Rpush(l_28);
  m_40 :
  Cpush(n_28);
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
  goto m_28;
  n_28 :
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
  Rpush(o_28);
  goto h_57;
  o_28 :
  MatchVard(2,3);
  Rpush(p_28);
  goto h_57;
  p_28 :
  MatchVard(2,4);
  Rpush(q_28);
  goto h_57;
  q_28 :
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
  Rpush(r_28);
  goto m_40;
  r_28 :
  OneNextSon();
  Rpush(s_28);
  goto b_57;
  s_28 :
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
  m_28 :
  Return();
  l_28 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(t_28);
  k_41 :
  Cpush(v_28);
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Rpush(w_28);
  l_42 :
  Cpush(y_28);
  Rpush(z_28);
  goto m_56;
  z_28 :
  Cpop();
  goto x_28;
  y_28 :
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
  Rpush(a_29);
  goto l_42;
  a_29 :
  AllBuild();
  x_28 :
  Return();
  w_28 :
  Epopd(4,0);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(b_29);
  o_42 :
  Cpush(d_29);
  Rpush(e_29);
  goto m_56;
  e_29 :
  Cpop();
  goto c_29;
  d_29 :
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
  Rpush(f_29);
  goto o_42;
  f_29 :
  AllBuild();
  c_29 :
  Return();
  b_29 :
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
  Rpush(g_29);
  goto k_41;
  g_29 :
  OneNextSon();
  Rpush(h_29);
  goto b_57;
  h_29 :
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
  goto u_28;
  v_28 :
  Epushd(2,0);
  Rpush(i_29);
  p_42 :
  Cpush(k_29);
  Rpush(l_29);
  goto m_56;
  l_29 :
  Cpop();
  goto j_29;
  k_29 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(m_29);
  goto b_57;
  m_29 :
  OneNextSon();
  Rpush(n_29);
  goto p_42;
  n_29 :
  AllBuild();
  j_29 :
  Return();
  i_29 :
  Epopd(2,0);
  BuildFun("TNil",0);
  u_28 :
  Return();
  t_28 :
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
  Rpush(o_29);
  goto d_57;
  o_29 :
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
  l_26 :
  Return();
  r_57 :
  Epushd(0,0);
  _ST_subt();
  Epopd(0,0);
  Return();
  s_57 :
  Epushd(0,0);
  _ST_geq();
  Epopd(0,0);
  Return();
  t_57 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  u_57 :
  Epushd(0,0);
  Rpush(p_29);
  n_40 :
  Cpush(r_29);
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
  goto q_29;
  r_29 :
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
  Rpush(s_29);
  goto n_40;
  s_29 :
  q_29 :
  Return();
  p_29 :
  Epopd(0,0);
  Return();
  v_57 :
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
  Rpush(t_29);
  goto r_56;
  t_29 :
  Tpop();
  Epopd(0,0);
  Return();
  w_57 :
  Epushd(0,0);
  Rpush(u_29);
  h_43 :
  Cpush(w_29);
  Rpush(x_29);
  goto m_56;
  x_29 :
  BuildInt(0);
  Cpop();
  goto v_29;
  w_29 :
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
  Rpush(y_29);
  goto h_43;
  y_29 :
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
  Rpush(z_29);
  goto x_57;
  z_29 :
  Epopd(1,1);
  v_29 :
  Return();
  u_29 :
  Epopd(0,0);
  Return();
  x_57 :
  Epushd(0,0);
  _ST_plus();
  Epopd(0,0);
  Return();
  y_57 :
  Epushd(0,0);
  Cpush(t_30);
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
  goto s_30;
  t_30 :
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
  Rpush(u_30);
  s_43 :
  Cpush(j_31);
  Rpush(k_31);
  goto m_56;
  k_31 :
  Cpop();
  goto i_31;
  j_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(l_31);
  goto h_57;
  l_31 :
  OneNextSon();
  Rpush(m_31);
  goto s_43;
  m_31 :
  AllBuild();
  i_31 :
  Return();
  u_30 :
  Epopd(2,0);
  MatchVard(1,3);
  BuildVard(1,3);
  Epushd(2,0);
  Rpush(n_31);
  u_43 :
  Cpush(p_31);
  Rpush(a_32);
  goto m_56;
  a_32 :
  Cpop();
  goto o_31;
  p_31 :
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
  Rpush(b_32);
  goto u_43;
  b_32 :
  AllBuild();
  o_31 :
  Return();
  n_31 :
  Epopd(2,0);
  MatchVard(1,5);
  BuildVard(1,6);
  Epushd(2,0);
  Rpush(c_32);
  x_43 :
  Cpush(e_32);
  Rpush(f_32);
  goto m_56;
  f_32 :
  Cpop();
  goto d_32;
  e_32 :
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
  Rpush(g_32);
  goto z_57;
  g_32 :
  Epopd(3,2);
  OneNextSon();
  Rpush(i_32);
  goto x_43;
  i_32 :
  AllBuild();
  d_32 :
  Return();
  c_32 :
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
  s_30 :
  Epopd(0,0);
  Return();
  z_57 :
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
  BuildVard(0,3);
  Epushd(1,1);
  Tdupl();
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
  Rpush(j_32);
  h_45 :
  Cpush(l_32);
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
  goto k_32;
  l_32 :
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
  Rpush(m_32);
  goto h_45;
  m_32 :
  OneNextSon();
  Rpush(r_32);
  goto b_57;
  r_32 :
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
  k_32 :
  Return();
  j_32 :
  Epopd(2,0);
  MatchVard(1,1);
  Tpop();
  Epushd(2,0);
  Rpush(s_32);
  k_45 :
  Cpush(w_32);
  Epushd(3,2);
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
  Epushd(4,1);
  MatchVard(4,1);
  Tdupl();
  BuildVard(1,1);
  Epushd(5,0);
  Tdupl();
  x_32 :
  MatchFun("Cons",2);
  Cpush(y_32);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,1);
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
  Cpop();
  goto z_32;
  y_32 :
  Arg(1);
  Tdrop();
  goto x_32;
  z_32 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(3,2);
  Epopd(4,1);
  Epopd(3,2);
  Cpop();
  goto t_32;
  w_32 :
  AllInit();
  k_33 :
  AllNextSon(&&o_33);
  Rpush(p_33);
  goto k_45;
  p_33 :
  goto k_33;
  o_33 :
  AllBuild();
  t_32 :
  Return();
  s_32 :
  Epopd(2,0);
  Epopd(1,1);
  Epopd(0,3);
  Return();
  a_58 :
  Epushd(0,0);
  Rpush(q_33);
  z_45 :
  Epushd(1,3);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Cpush(s_33);
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
  Rpush(x_33);
  goto w_57;
  x_33 :
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
  goto r_33;
  s_33 :
  BuildFun("Nil",0);
  r_33 :
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Cpush(z_33);
  Epushd(4,1);
  Tdupl();
  Cpush(b_34);
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
  goto a_34;
  b_34 :
  Cpush(d_34);
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
  goto c_34;
  d_34 :
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
  c_34 :
  a_34 :
  MatchVard(4,1);
  Tpop();
  Epushd(5,0);
  Cpush(f_34);
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
  Rpush(g_34);
  goto z_45;
  g_34 :
  AllBuild();
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(h_34);
  goto z_45;
  h_34 :
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
  Rpush(i_34);
  v_54 :
  Cpush(k_34);
  Rpush(l_34);
  goto m_56;
  l_34 :
  Cpop();
  goto j_34;
  k_34 :
  Cpush(n_34);
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
  Rpush(o_34);
  w_54 :
  Cpush(q_34);
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
  goto p_34;
  q_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_34);
  goto w_54;
  r_34 :
  AllBuild();
  p_34 :
  Return();
  o_34 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(s_34);
  goto v_54;
  s_34 :
  Cpop();
  goto m_34;
  n_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_34);
  goto v_54;
  t_34 :
  AllBuild();
  m_34 :
  j_34 :
  Return();
  i_34 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  Cpop();
  goto e_34;
  f_34 :
  Cpush(v_34);
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
  Rpush(w_34);
  goto z_45;
  w_34 :
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
  Rpush(x_34);
  x_54 :
  Cpush(z_34);
  Rpush(a_35);
  goto m_56;
  a_35 :
  Cpop();
  goto y_34;
  z_34 :
  Cpush(d_35);
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
  Rpush(e_35);
  y_54 :
  Cpush(i_35);
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
  goto f_35;
  i_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_35);
  goto y_54;
  j_35 :
  AllBuild();
  f_35 :
  Return();
  e_35 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(k_35);
  goto x_54;
  k_35 :
  Cpop();
  goto c_35;
  d_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_35);
  goto x_54;
  l_35 :
  AllBuild();
  c_35 :
  y_34 :
  Return();
  x_34 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  Cpop();
  goto u_34;
  v_34 :
  MatchFun("Rec",2);
  TravInit();
  OneNextSon();
  BuildFun("Nil",0);
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  Epushd(7,3);
  BuildVard(6,1);
  Rpush(m_35);
  goto z_45;
  m_35 :
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
  Rpush(n_35);
  z_54 :
  Cpush(p_35);
  Rpush(q_35);
  goto m_56;
  q_35 :
  Cpop();
  goto o_35;
  p_35 :
  Cpush(s_35);
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
  Rpush(t_35);
  a_55 :
  Cpush(v_35);
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
  goto u_35;
  v_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_35);
  goto a_55;
  w_35 :
  AllBuild();
  u_35 :
  Return();
  t_35 :
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(x_35);
  goto z_54;
  x_35 :
  Cpop();
  goto r_35;
  s_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_35);
  goto z_54;
  y_35 :
  AllBuild();
  r_35 :
  o_35 :
  Return();
  n_35 :
  Epopd(7,3);
  Epopd(6,1);
  AllBuild();
  u_34 :
  e_34 :
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
  Rpush(z_35);
  b_55 :
  Cpush(q_36);
  Rpush(r_36);
  goto m_56;
  r_36 :
  BuildFun("Nil",0);
  Cpop();
  goto p_36;
  q_36 :
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
  Rpush(s_36);
  goto b_55;
  s_36 :
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
  Rpush(t_36);
  c_55 :
  Cpush(v_36);
  Rpush(w_36);
  goto m_56;
  w_36 :
  BuildVard(8,3);
  Cpop();
  goto u_36;
  v_36 :
  Cpush(y_36);
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
  z_36 :
  MatchFun("Cons",2);
  Cpush(a_37);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto b_37;
  a_37 :
  Arg(1);
  Tdrop();
  goto z_36;
  b_37 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(c_37);
  goto c_55;
  c_37 :
  Cpop();
  goto x_36;
  y_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_37);
  goto c_55;
  d_37 :
  AllBuild();
  x_36 :
  u_36 :
  Return();
  t_36 :
  Epopd(8,4);
  p_36 :
  Return();
  z_35 :
  Epopd(7,0);
  Epopd(6,1);
  Epopd(5,0);
  Epopd(4,1);
  Cpop();
  goto y_33;
  z_33 :
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
  Rpush(e_37);
  e_55 :
  Cpush(g_37);
  Rpush(i_37);
  goto m_56;
  i_37 :
  BuildFun("Nil",0);
  Cpop();
  goto f_37;
  g_37 :
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
  Rpush(j_37);
  goto z_45;
  j_37 :
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,2);
  Rpush(k_37);
  goto e_55;
  k_37 :
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
  Rpush(u_37);
  f_55 :
  Cpush(w_37);
  Rpush(a_38);
  goto m_56;
  a_38 :
  BuildVard(6,3);
  Cpop();
  goto v_37;
  w_37 :
  Cpush(c_38);
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
  d_38 :
  MatchFun("Cons",2);
  Cpush(e_38);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Cpop();
  goto f_38;
  e_38 :
  Arg(1);
  Tdrop();
  goto d_38;
  f_38 :
  Tpop();
  Epopd(8,0);
  Tpop();
  BuildVard(7,1);
  Epopd(7,2);
  Rpush(g_38);
  goto f_55;
  g_38 :
  Cpop();
  goto b_38;
  c_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_38);
  goto f_55;
  h_38 :
  AllBuild();
  b_38 :
  v_37 :
  Return();
  u_37 :
  Epopd(6,4);
  f_37 :
  Return();
  e_37 :
  Epopd(5,0);
  Epopd(4,1);
  y_33 :
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
  Rpush(i_38);
  j_55 :
  Cpush(k_38);
  Rpush(l_38);
  goto m_56;
  l_38 :
  BuildVard(1,2);
  Cpop();
  goto j_38;
  k_38 :
  Cpush(p_38);
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
  q_38 :
  MatchFun("Cons",2);
  Cpush(r_38);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Cpop();
  goto s_38;
  r_38 :
  Arg(1);
  Tdrop();
  goto q_38;
  s_38 :
  Tpop();
  Epopd(3,0);
  Tpop();
  BuildVard(2,1);
  Epopd(2,2);
  Rpush(t_38);
  goto j_55;
  t_38 :
  Cpop();
  goto m_38;
  p_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_38);
  goto j_55;
  u_38 :
  AllBuild();
  m_38 :
  j_38 :
  Return();
  i_38 :
  Epopd(1,3);
  Return();
  q_33 :
  Epopd(0,0);
  Return();
  b_58 :
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
  Rpush(v_38);
  goto r_56;
  v_38 :
  Tpop();
  Epopd(0,0);
  Return();
  c_58 :
  Epushd(0,0);
  Rpush(w_38);
  q_55 :
  Cpush(y_38);
  Rpush(z_38);
  goto m_56;
  z_38 :
  Cpop();
  goto x_38;
  y_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(a_39);
  goto d_58;
  a_39 :
  AllBuild();
  OneNextSon();
  Rpush(b_39);
  goto q_55;
  b_39 :
  AllBuild();
  x_38 :
  Return();
  w_38 :
  Epopd(0,0);
  Return();
  d_58 :
  Epushd(0,0);
  Rpush(c_39);
  y_55 :
  Epushd(1,0);
  Cpush(j_39);
  Rpush(k_39);
  goto e_58;
  k_39 :
  Cpop();
  goto i_39;
  j_39 :
  i_39 :
  Epopd(1,0);
  Epushd(1,0);
  Cpush(m_39);
  l_39 :
  Cpush(o_39);
  Rpush(s_39);
  goto k_58;
  s_39 :
  Cpop();
  goto n_39;
  o_39 :
  Cpush(u_39);
  Cpush(w_39);
  Rpush(x_39);
  goto l_58;
  x_39 :
  Cpop();
  goto v_39;
  w_39 :
  Cpush(z_39);
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
  goto y_39;
  z_39 :
  Rpush(a_40);
  goto m_58;
  a_40 :
  y_39 :
  v_39 :
  Cpop();
  goto t_39;
  u_39 :
  Rpush(b_40);
  goto n_58;
  b_40 :
  t_39 :
  n_39 :
  Tduplinv();
  goto l_39;
  m_39 :
  Epopd(1,0);
  AllInit();
  c_40 :
  AllNextSon(&&d_40);
  Rpush(e_40);
  goto y_55;
  e_40 :
  goto c_40;
  d_40 :
  AllBuild();
  Return();
  c_39 :
  Epopd(0,0);
  Return();
  e_58 :
  Epushd(0,0);
  Rpush(f_40);
  b_35 :
  Epushd(1,0);
  Cpush(h_40);
  Cpush(j_40);
  Rpush(k_40);
  goto f_58;
  k_40 :
  Rpush(l_40);
  goto b_35;
  l_40 :
  Cpop();
  goto i_40;
  j_40 :
  Cpush(u_40);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_40);
  goto b_35;
  v_40 :
  AllBuild();
  Cpop();
  goto o_40;
  u_40 :
  Rpush(w_40);
  goto g_58;
  w_40 :
  o_40 :
  i_40 :
  Cpop();
  goto g_40;
  h_40 :
  g_40 :
  Epopd(1,0);
  Return();
  f_40 :
  Epopd(0,0);
  Return();
  f_58 :
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
  Rpush(x_40);
  goto h_57;
  x_40 :
  MatchVard(0,9);
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(y_40);
  d_56 :
  Cpush(a_41);
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
  goto z_40;
  a_41 :
  IsAppl();
  OneInit();
  l_41 :
  OneNextSon();
  Cpush(l_41);
  Rpush(n_41);
  goto d_56;
  n_41 :
  Cpop();
  OneBuild();
  z_40 :
  Return();
  y_40 :
  Epopd(1,0);
  MatchVard(0,10);
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(o_41);
  e_56 :
  Cpush(q_41);
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
  goto p_41;
  q_41 :
  IsAppl();
  OneInit();
  r_41 :
  OneNextSon();
  Cpush(r_41);
  Rpush(t_41);
  goto e_56;
  t_41 :
  Cpop();
  OneBuild();
  p_41 :
  Return();
  o_41 :
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
  g_58 :
  Cpush(v_41);
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
  Rpush(w_41);
  goto h_58;
  w_41 :
  BuildVard(0,3);
  Rpush(x_41);
  goto i_58;
  x_41 :
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
  goto u_41;
  v_41 :
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
  u_41 :
  Return();
  h_58 :
  Epushd(0,0);
  Cpush(y_41);
  Tdupl();
  Epushd(1,0);
  Rpush(z_41);
  f_56 :
  Cpush(b_42);
  MatchFun("Con",3);
  Cpop();
  goto a_42;
  b_42 :
  MatchFun("App",2);
  a_42 :
  AllInit();
  c_42 :
  AllNextSon(&&d_42);
  Rpush(e_42);
  goto f_56;
  e_42 :
  goto c_42;
  d_42 :
  AllBuild();
  Return();
  z_41 :
  Epopd(1,0);
  Cpop();
  Crestore();
  Cjump();
  y_41 :
  Epopd(0,0);
  Return();
  i_58 :
  Epushd(0,0);
  Cpush(f_42);
  Tdupl();
  Epushd(1,0);
  Rpush(v_42);
  g_56 :
  Cpush(z_42);
  MatchFun("Con",3);
  Cpop();
  goto w_42;
  z_42 :
  Rpush(a_43);
  goto j_58;
  a_43 :
  w_42 :
  AllInit();
  i_43 :
  AllNextSon(&&j_43);
  Rpush(l_43);
  goto g_56;
  l_43 :
  goto i_43;
  j_43 :
  AllBuild();
  Return();
  v_42 :
  Epopd(1,0);
  Cpop();
  Crestore();
  Cjump();
  f_42 :
  Epopd(0,0);
  Return();
  j_58 :
  MatchFun("Wld",0);
  Return();
  k_58 :
  Cpush(q_43);
  Epushd(0,0);
  MatchFun("Seqs",1);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  BuildFun("Id",0);
  Epopd(0,0);
  Cpop();
  goto m_43;
  q_43 :
  Cpush(t_43);
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
  goto r_43;
  t_43 :
  Cpush(y_43);
  Epushd(0,0);
  MatchFun("Choices",1);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(0,0);
  Cpop();
  goto v_43;
  y_43 :
  Cpush(d_44);
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
  goto z_43;
  d_44 :
  Cpush(i_44);
  Epushd(0,0);
  MatchFun("LChoices",1);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  BuildFun("Fail",0);
  Epopd(0,0);
  Cpop();
  goto h_44;
  i_44 :
  Cpush(k_44);
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
  goto j_44;
  k_44 :
  Cpush(m_44);
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
  goto l_44;
  m_44 :
  Cpush(o_44);
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
  goto n_44;
  o_44 :
  Cpush(q_44);
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
  goto p_44;
  q_44 :
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
  p_44 :
  n_44 :
  l_44 :
  j_44 :
  h_44 :
  z_43 :
  v_43 :
  r_43 :
  m_43 :
  Return();
  l_58 :
  Epushd(0,4);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tdupl();
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(r_44);
  h_56 :
  Cpush(t_44);
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
  goto s_44;
  t_44 :
  IsAppl();
  OneInit();
  u_44 :
  OneNextSon();
  Cpush(u_44);
  Rpush(x_44);
  goto h_56;
  x_44 :
  Cpop();
  OneBuild();
  s_44 :
  Return();
  r_44 :
  Epopd(1,0);
  MatchVard(0,4);
  Tpop();
  BuildVard(0,4);
  Tpush();
  BuildFun("Build",1);
  Epopd(0,4);
  Return();
  m_58 :
  Epushd(0,5);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tdupl();
  Rpush(y_44);
  goto h_57;
  y_44 :
  MatchVard(0,4);
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(z_44);
  i_56 :
  Cpush(i_45);
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
  goto a_45;
  i_45 :
  IsAppl();
  OneInit();
  j_45 :
  OneNextSon();
  Cpush(j_45);
  Rpush(q_45);
  goto i_56;
  q_45 :
  Cpop();
  OneBuild();
  a_45 :
  Return();
  z_44 :
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
  n_58 :
  Cpush(s_45);
  Epushd(0,5);
  MatchFun("Match",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tdupl();
  Rpush(t_45);
  goto h_57;
  t_45 :
  MatchVard(0,4);
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(u_45);
  j_56 :
  Cpush(w_45);
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
  goto v_45;
  w_45 :
  IsAppl();
  OneInit();
  x_45 :
  OneNextSon();
  Cpush(x_45);
  Rpush(a_46);
  goto j_56;
  a_46 :
  Cpop();
  OneBuild();
  v_45 :
  Return();
  u_45 :
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
  goto r_45;
  s_45 :
  Cpush(c_46);
  Epushd(0,5);
  MatchFun("Build",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tdupl();
  Rpush(d_46);
  goto h_57;
  d_46 :
  MatchVard(0,4);
  BuildVard(0,3);
  Epushd(1,0);
  Rpush(e_46);
  k_56 :
  Cpush(g_46);
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
  goto f_46;
  g_46 :
  IsAppl();
  OneInit();
  h_46 :
  OneNextSon();
  Cpush(h_46);
  Rpush(j_46);
  goto k_56;
  j_46 :
  Cpop();
  OneBuild();
  f_46 :
  Return();
  e_46 :
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
  goto b_46;
  c_46 :
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
  b_46 :
  r_45 :
  Return();
  k_46 :
DOIT_END
