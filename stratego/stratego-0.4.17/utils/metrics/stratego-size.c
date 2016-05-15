#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(a_13);
  goto main;
  main :
  Epushd(0,0);
  Rpush(f_0);
  goto a_8;
  f_0 :
  Epopd(0,0);
  Return();
  a_8 :
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
  Rpush(g_0);
  x_0 :
  Cpush(i_0);
  Cpush(k_0);
  Rpush(l_0);
  goto b_8;
  l_0 :
  Cpop();
  goto j_0;
  k_0 :
  Rpush(m_0);
  goto c_8;
  m_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_0);
  goto x_0;
  n_0 :
  AllBuild();
  j_0 :
  Cpop();
  goto h_0;
  i_0 :
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
  h_0 :
  Return();
  g_0 :
  AllBuild();
  Epopd(1,0);
  Cpush(p_0);
  Rpush(q_0);
  goto d_8;
  q_0 :
  Cpop();
  goto o_0;
  p_0 :
  Cpush(s_0);
  Rpush(t_0);
  goto i_8;
  t_0 :
  Epushd(1,1);
  Tdupl();
  Rpush(y_0);
  goto k_8;
  y_0 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(2,1);
  Rpush(z_0);
  goto s_8;
  z_0 :
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,1);
  Rpush(a_1);
  goto v_8;
  a_1 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(2,1);
  Rpush(b_1);
  goto w_8;
  b_1 :
  MatchVard(5,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Constructors",1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Size",3);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,1);
  OneNextSon();
  Rpush(s_3);
  goto r_8;
  s_3 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(u_3);
  goto k_8;
  u_3 :
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
  Rpush(v_3);
  goto l_8;
  v_3 :
  Rpush(w_3);
  goto p_8;
  w_3 :
  Cpop();
  goto r_0;
  s_0 :
  Rpush(x_3);
  goto q_8;
  x_3 :
  r_0 :
  o_0 :
  Epopd(0,0);
  Return();
  b_8 :
  MatchFun("Nil",0);
  Return();
  c_8 :
  Epushd(0,0);
  Cpush(z_3);
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
  goto y_3;
  z_3 :
  Cpush(f_4);
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
  goto d_4;
  f_4 :
  Cpush(h_4);
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
  goto g_4;
  h_4 :
  Cpush(j_4);
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
  goto i_4;
  j_4 :
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
  goto k_4;
  q_4 :
  Cpush(s_4);
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
  goto r_4;
  s_4 :
  Cpush(u_4);
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
  goto t_4;
  u_4 :
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
  goto v_4;
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
  goto b_5;
  c_5 :
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
  Cpush(y_5);
  Rpush(b_6);
  goto a_0;
  b_6 :
  Cpop();
  goto x_5;
  y_5 :
  Cpush(d_6);
  Rpush(e_6);
  goto b_0;
  e_6 :
  Cpop();
  goto c_6;
  d_6 :
  Cpush(g_6);
  Rpush(h_6);
  goto c_0;
  h_6 :
  Cpop();
  goto f_6;
  g_6 :
  Cpush(j_6);
  Rpush(k_6);
  goto d_0;
  k_6 :
  Cpop();
  goto i_6;
  j_6 :
  Rpush(l_6);
  goto e_0;
  l_6 :
  i_6 :
  f_6 :
  c_6 :
  x_5 :
  goto w_5;
  e_0 :
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
  w_5 :
  goto v_5;
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
  v_5 :
  goto u_5;
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
  u_5 :
  goto t_5;
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
  t_5 :
  goto d_5;
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
  d_5 :
  Epopd(1,10);
  b_5 :
  z_4 :
  v_4 :
  t_4 :
  r_4 :
  k_4 :
  i_4 :
  g_4 :
  d_4 :
  y_3 :
  Epopd(0,0);
  Return();
  d_8 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  p_6 :
  MatchFun("Cons",2);
  Cpush(q_6);
  Arg(0);
  Cpush(d_7);
  Rpush(e_7);
  goto e_8;
  e_7 :
  Cpop();
  goto c_7;
  d_7 :
  MatchFun("Undefined",1);
  c_7 :
  Tpop();
  Cpop();
  goto b_7;
  q_6 :
  Arg(1);
  Tdrop();
  goto p_6;
  b_7 :
  Tpop();
  Epopd(1,0);
  Rpush(f_7);
  goto f_8;
  f_7 :
  Epopd(0,0);
  Return();
  e_8 :
  MatchFun("Help",0);
  Return();
  f_8 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  g_7 :
  MatchFun("Cons",2);
  Cpush(j_7);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto k_7;
  j_7 :
  Arg(1);
  Tdrop();
  goto g_7;
  k_7 :
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
  Rpush(l_7);
  goto g_8;
  l_7 :
  BuildInt(1);
  Rpush(m_7);
  goto h_8;
  m_7 :
  Tpop();
  Epopd(0,1);
  Return();
  g_8 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  h_8 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  i_8 :
  Epushd(0,1);
  Tdupl();
  Cpush(o_7);
  Epushd(1,0);
  Tdupl();
  m_8 :
  MatchFun("Cons",2);
  Cpush(x_8);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto y_8;
  x_8 :
  Arg(1);
  Tdrop();
  goto m_8;
  y_8 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto n_7;
  o_7 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  n_7 :
  Tpop();
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(z_8);
  goto j_8;
  z_8 :
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
  j_8 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  k_8 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  l_8 :
  Epushd(0,1);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(b_9);
  Epushd(1,0);
  Tdupl();
  c_9 :
  MatchFun("Cons",2);
  Cpush(d_9);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto e_9;
  d_9 :
  Arg(1);
  Tdrop();
  goto c_9;
  e_9 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto a_9;
  b_9 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  a_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto r_8;
  f_9 :
  AllBuild();
  AllBuild();
  Tpop();
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
  Rpush(g_9);
  goto r_8;
  g_9 :
  AllBuild();
  AllBuild();
  Cpush(i_9);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  j_9 :
  MatchFun("Cons",2);
  Cpush(k_9);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto l_9;
  k_9 :
  Arg(1);
  Tdrop();
  goto j_9;
  l_9 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_9);
  goto n_8;
  m_9 :
  OneNextSon();
  Rpush(n_9);
  goto r_8;
  n_9 :
  AllBuild();
  AllBuild();
  Cpop();
  goto h_9;
  i_9 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_9);
  goto o_8;
  o_9 :
  OneNextSon();
  Rpush(p_9);
  goto r_8;
  p_9 :
  AllBuild();
  AllBuild();
  h_9 :
  Epopd(0,1);
  Return();
  n_8 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  o_8 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  p_8 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(r_9);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(s_9);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  t_9 :
  MatchFun("Cons",2);
  Cpush(u_9);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto v_9;
  u_9 :
  Arg(1);
  Tdrop();
  goto t_9;
  v_9 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  s_9 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_9);
  goto r_8;
  w_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  x_9 :
  MatchFun("Cons",2);
  Cpush(y_9);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto z_9;
  y_9 :
  Arg(1);
  Tdrop();
  goto x_9;
  z_9 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto r_8;
  a_10 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  b_10 :
  MatchFun("Cons",2);
  Cpush(c_10);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto d_10;
  c_10 :
  Arg(1);
  Tdrop();
  goto b_10;
  d_10 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_10);
  goto r_8;
  e_10 :
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
  Rpush(f_10);
  goto g_8;
  f_10 :
  Cpop();
  goto q_9;
  r_9 :
  q_9 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(g_10);
  goto h_8;
  g_10 :
  Epopd(0,2);
  Return();
  q_8 :
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
  Rpush(h_10);
  goto g_8;
  h_10 :
  BuildInt(1);
  Rpush(i_10);
  goto h_8;
  i_10 :
  Epopd(0,0);
  Return();
  r_8 :
  MatchFun("TNil",0);
  Return();
  s_8 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(j_10);
  p_4 :
  Cpush(l_10);
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
  goto k_10;
  l_10 :
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
  Rpush(m_10);
  i_5 :
  Cpush(o_10);
  Rpush(p_10);
  goto b_8;
  p_10 :
  BuildFun("Nil",0);
  Cpop();
  goto n_10;
  o_10 :
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
  Rpush(q_10);
  goto p_4;
  q_10 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(r_10);
  goto i_5;
  r_10 :
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
  Rpush(s_10);
  n_5 :
  Cpush(u_10);
  Rpush(v_10);
  goto b_8;
  v_10 :
  BuildVard(4,3);
  Cpop();
  goto t_10;
  u_10 :
  Cpush(x_10);
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
  y_10 :
  MatchFun("Cons",2);
  Cpush(z_10);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto a_11;
  z_10 :
  Arg(1);
  Tdrop();
  goto y_10;
  a_11 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(b_11);
  goto n_5;
  b_11 :
  Cpop();
  goto w_10;
  x_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_11);
  goto n_5;
  c_11 :
  AllBuild();
  w_10 :
  t_10 :
  Return();
  s_10 :
  Epopd(4,4);
  n_10 :
  Return();
  m_10 :
  Epopd(3,0);
  Epopd(2,1);
  k_10 :
  Return();
  j_10 :
  Epopd(1,0);
  Rpush(d_11);
  goto t_8;
  d_11 :
  Epopd(0,0);
  Return();
  t_8 :
  Epushd(0,0);
  Rpush(e_11);
  w_33 :
  Cpush(g_11);
  Rpush(h_11);
  goto b_8;
  h_11 :
  BuildInt(0);
  Cpop();
  goto f_11;
  g_11 :
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
  Rpush(i_11);
  goto w_33;
  i_11 :
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
  Rpush(j_11);
  goto u_8;
  j_11 :
  Epopd(1,1);
  f_11 :
  Return();
  e_11 :
  Epopd(0,0);
  Return();
  u_8 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  v_8 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(k_11);
  s_5 :
  Cpush(m_11);
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
  goto l_11;
  m_11 :
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
  Rpush(n_11);
  s_6 :
  Cpush(p_11);
  Rpush(q_11);
  goto b_8;
  q_11 :
  BuildFun("Nil",0);
  Cpop();
  goto o_11;
  p_11 :
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
  Rpush(r_11);
  goto s_5;
  r_11 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(s_11);
  goto s_6;
  s_11 :
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
  Rpush(t_11);
  x_6 :
  Cpush(v_11);
  Rpush(w_11);
  goto b_8;
  w_11 :
  BuildVard(4,3);
  Cpop();
  goto u_11;
  v_11 :
  Cpush(y_11);
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
  z_11 :
  MatchFun("Cons",2);
  Cpush(a_12);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto b_12;
  a_12 :
  Arg(1);
  Tdrop();
  goto z_11;
  b_12 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(c_12);
  goto x_6;
  c_12 :
  Cpop();
  goto x_11;
  y_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_12);
  goto x_6;
  d_12 :
  AllBuild();
  x_11 :
  u_11 :
  Return();
  t_11 :
  Epopd(4,4);
  o_11 :
  Return();
  n_11 :
  Epopd(3,0);
  Epopd(2,1);
  l_11 :
  Return();
  k_11 :
  Epopd(1,0);
  Rpush(e_12);
  goto t_8;
  e_12 :
  Epopd(0,0);
  Return();
  w_8 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(f_12);
  a_7 :
  Cpush(h_12);
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
  goto g_12;
  h_12 :
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
  Rpush(i_12);
  t_7 :
  Cpush(k_12);
  Rpush(l_12);
  goto b_8;
  l_12 :
  BuildFun("Nil",0);
  Cpop();
  goto j_12;
  k_12 :
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
  Rpush(m_12);
  goto a_7;
  m_12 :
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,2);
  Rpush(n_12);
  goto t_7;
  n_12 :
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
  Rpush(o_12);
  y_7 :
  Cpush(q_12);
  Rpush(r_12);
  goto b_8;
  r_12 :
  BuildVard(4,3);
  Cpop();
  goto p_12;
  q_12 :
  Cpush(t_12);
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
  u_12 :
  MatchFun("Cons",2);
  Cpush(v_12);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto w_12;
  v_12 :
  Arg(1);
  Tdrop();
  goto u_12;
  w_12 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(x_12);
  goto y_7;
  x_12 :
  Cpop();
  goto s_12;
  t_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_12);
  goto y_7;
  y_12 :
  AllBuild();
  s_12 :
  p_12 :
  Return();
  o_12 :
  Epopd(4,4);
  j_12 :
  Return();
  i_12 :
  Epopd(3,0);
  Epopd(2,1);
  g_12 :
  Return();
  f_12 :
  Epopd(1,0);
  Rpush(z_12);
  goto t_8;
  z_12 :
  Epopd(0,0);
  Return();
  a_13 :
DOIT_END
