#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(c_33);
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
  Rpush(f_0);
  r_0 :
  Cpush(h_0);
  Cpush(j_0);
  Rpush(k_0);
  goto s_28;
  k_0 :
  Cpop();
  goto i_0;
  j_0 :
  Rpush(l_0);
  goto t_28;
  l_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_0);
  goto r_0;
  m_0 :
  AllBuild();
  i_0 :
  Cpop();
  goto g_0;
  h_0 :
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
  g_0 :
  Return();
  f_0 :
  AllBuild();
  Epopd(1,0);
  Cpush(s_0);
  Rpush(t_0);
  goto u_28;
  t_0 :
  Cpop();
  goto n_0;
  s_0 :
  Cpush(k_3);
  Rpush(l_3);
  goto z_28;
  l_3 :
  Epushd(1,1);
  Tdupl();
  Rpush(m_3);
  goto b_29;
  m_3 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Rpush(n_3);
  y_0 :
  Epushd(3,0);
  Cpush(p_3);
  Rpush(t_3);
  goto k_29;
  t_3 :
  Cpop();
  goto o_3;
  p_3 :
  Cpush(w_3);
  Epushd(4,1);
  MatchFun("Match",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildFun("Id",0);
  Tpush();
  BuildFun("Pat",2);
  Rpush(x_3);
  goto x_29;
  x_3 :
  Epopd(4,1);
  Cpop();
  goto v_3;
  w_3 :
  v_3 :
  o_3 :
  Epopd(3,0);
  AllInit();
  y_3 :
  AllNextSon(&&z_3);
  Rpush(a_4);
  goto y_0;
  a_4 :
  goto y_3;
  z_3 :
  AllBuild();
  Return();
  n_3 :
  Epopd(2,0);
  OneNextSon();
  Rpush(h_4);
  goto j_29;
  h_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(i_4);
  goto b_29;
  i_4 :
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
  Rpush(j_4);
  goto c_29;
  j_4 :
  Rpush(k_4);
  goto h_29;
  k_4 :
  Cpop();
  goto i_3;
  k_3 :
  Rpush(l_4);
  goto i_29;
  l_4 :
  i_3 :
  n_0 :
  Epopd(0,0);
  Return();
  s_28 :
  MatchFun("Nil",0);
  Return();
  t_28 :
  Epushd(0,0);
  Cpush(n_4);
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
  goto m_4;
  n_4 :
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
  goto o_4;
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
  goto q_4;
  r_4 :
  Cpush(t_4);
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
  goto s_4;
  t_4 :
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
  goto u_4;
  v_4 :
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
  Cpush(b_5);
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
  goto a_5;
  b_5 :
  Cpush(d_5);
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
  goto e_5;
  f_5 :
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
  Cpush(m_5);
  Rpush(n_5);
  goto a_0;
  n_5 :
  Cpop();
  goto l_5;
  m_5 :
  Cpush(q_6);
  Rpush(r_6);
  goto b_0;
  r_6 :
  Cpop();
  goto p_6;
  q_6 :
  Cpush(t_6);
  Rpush(u_6);
  goto c_0;
  u_6 :
  Cpop();
  goto s_6;
  t_6 :
  Cpush(w_6);
  Rpush(x_6);
  goto d_0;
  x_6 :
  Cpop();
  goto v_6;
  w_6 :
  Rpush(y_6);
  goto e_0;
  y_6 :
  v_6 :
  s_6 :
  p_6 :
  l_5 :
  goto k_5;
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
  k_5 :
  goto j_5;
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
  j_5 :
  goto i_5;
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
  i_5 :
  goto h_5;
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
  h_5 :
  goto g_5;
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
  g_5 :
  Epopd(1,10);
  e_5 :
  c_5 :
  a_5 :
  y_4 :
  w_4 :
  u_4 :
  s_4 :
  q_4 :
  o_4 :
  m_4 :
  Epopd(0,0);
  Return();
  u_28 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  z_6 :
  MatchFun("Cons",2);
  Cpush(a_7);
  Arg(0);
  Cpush(d_7);
  Rpush(k_7);
  goto v_28;
  k_7 :
  Cpop();
  goto c_7;
  d_7 :
  MatchFun("Undefined",1);
  c_7 :
  Tpop();
  Cpop();
  goto b_7;
  a_7 :
  Arg(1);
  Tdrop();
  goto z_6;
  b_7 :
  Tpop();
  Epopd(1,0);
  Rpush(l_7);
  goto w_28;
  l_7 :
  Epopd(0,0);
  Return();
  v_28 :
  MatchFun("Help",0);
  Return();
  w_28 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  m_7 :
  MatchFun("Cons",2);
  Cpush(n_7);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto o_7;
  n_7 :
  Arg(1);
  Tdrop();
  goto m_7;
  o_7 :
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
  Rpush(p_7);
  goto x_28;
  p_7 :
  BuildInt(1);
  Rpush(q_7);
  goto y_28;
  q_7 :
  Tpop();
  Epopd(0,1);
  Return();
  x_28 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  y_28 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  z_28 :
  Epushd(0,1);
  Cpush(s_7);
  Epushd(1,0);
  Tdupl();
  t_7 :
  MatchFun("Cons",2);
  Cpush(u_7);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto v_7;
  u_7 :
  Arg(1);
  Tdrop();
  goto t_7;
  v_7 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto r_7;
  s_7 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  r_7 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(w_7);
  goto a_29;
  w_7 :
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
  a_29 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  b_29 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  c_29 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(y_7);
  Epushd(1,0);
  Tdupl();
  z_7 :
  MatchFun("Cons",2);
  Cpush(a_8);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto b_8;
  a_8 :
  Arg(1);
  Tdrop();
  goto z_7;
  b_8 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto x_7;
  y_7 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  x_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_8);
  goto j_29;
  c_8 :
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
  Rpush(d_8);
  goto j_29;
  d_8 :
  AllBuild();
  AllBuild();
  Cpush(m_9);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  p_9 :
  MatchFun("Cons",2);
  Cpush(u_10);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto x_10;
  u_10 :
  Arg(1);
  Tdrop();
  goto p_9;
  x_10 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(n_12);
  goto d_29;
  n_12 :
  OneNextSon();
  Rpush(o_12);
  goto j_29;
  o_12 :
  AllBuild();
  AllBuild();
  Cpop();
  goto e_8;
  m_9 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_12);
  goto g_29;
  p_12 :
  OneNextSon();
  Rpush(q_12);
  goto j_29;
  q_12 :
  AllBuild();
  AllBuild();
  e_8 :
  Epopd(0,1);
  Return();
  d_29 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  g_29 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  h_29 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(s_12);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(t_12);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  u_12 :
  MatchFun("Cons",2);
  Cpush(v_12);
  Arg(0);
  MatchFun("Silent",0);
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
  Cpop();
  Crestore();
  Cjump();
  t_12 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_12);
  goto j_29;
  x_12 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  y_12 :
  MatchFun("Cons",2);
  Cpush(z_12);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto a_13;
  z_12 :
  Arg(1);
  Tdrop();
  goto y_12;
  a_13 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_13);
  goto j_29;
  b_13 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  c_13 :
  MatchFun("Cons",2);
  Cpush(d_13);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto e_13;
  d_13 :
  Arg(1);
  Tdrop();
  goto c_13;
  e_13 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_13);
  goto j_29;
  f_13 :
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
  Rpush(g_13);
  goto x_28;
  g_13 :
  Cpop();
  goto r_12;
  s_12 :
  r_12 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(n_13);
  goto y_28;
  n_13 :
  Epopd(0,2);
  Return();
  i_29 :
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
  Rpush(o_13);
  goto x_28;
  o_13 :
  BuildInt(1);
  Rpush(p_13);
  goto y_28;
  p_13 :
  Epopd(0,0);
  Return();
  j_29 :
  MatchFun("TNil",0);
  Return();
  k_29 :
  Epushd(0,0);
  Rpush(q_13);
  goto l_29;
  q_13 :
  Rpush(r_13);
  goto m_29;
  r_13 :
  Rpush(s_13);
  goto o_29;
  s_13 :
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto p_29;
  u_13 :
  Rpush(v_13);
  e_4 :
  Cpush(x_13);
  MatchFun("Let",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_13);
  goto e_4;
  y_13 :
  AllBuild();
  Cpop();
  goto w_13;
  x_13 :
  Rpush(z_13);
  goto r_29;
  z_13 :
  w_13 :
  Return();
  v_13 :
  AllBuild();
  Epopd(0,0);
  Return();
  l_29 :
  Epushd(0,0);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(a_14);
  f_4 :
  Cpush(k_14);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Seq",2);
  TravInit();
  OneNextSon();
  MatchFun("Match",1);
  OneNextSon();
  AllBuild();
  AllBuild();
  Cpop();
  goto b_14;
  k_14 :
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(l_14);
  goto f_4;
  l_14 :
  OneNextSon();
  Rpush(m_14);
  goto f_4;
  m_14 :
  AllBuild();
  b_14 :
  Return();
  a_14 :
  OneNextSon();
  Rpush(u_14);
  g_4 :
  Cpush(w_14);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Seq",2);
  TravInit();
  OneNextSon();
  MatchFun("Match",1);
  OneNextSon();
  AllBuild();
  AllBuild();
  Cpop();
  goto v_14;
  w_14 :
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(x_14);
  goto g_4;
  x_14 :
  OneNextSon();
  Rpush(y_14);
  goto g_4;
  y_14 :
  AllBuild();
  v_14 :
  Return();
  u_14 :
  AllBuild();
  Epopd(0,0);
  Return();
  m_29 :
  Epushd(0,0);
  Rpush(a_15);
  o_5 :
  Cpush(c_15);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(d_15);
  goto o_5;
  d_15 :
  OneNextSon();
  Rpush(e_15);
  goto o_5;
  e_15 :
  AllBuild();
  Cpop();
  goto b_15;
  c_15 :
  Epushd(1,6);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Match",1);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Id",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("Pair",2);
  Rpush(n_15);
  l_6 :
  Cpush(p_15);
  Cpush(r_15);
  Epushd(2,4);
  MatchFun("Pair",2);
  Arg(0);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
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
  Tpop();
  Tdupl();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpush(s_15);
  Tdupl();
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
  BuildVard(3,2);
  Epushd(4,0);
  Rpush(y_15);
  t_15 :
  Cpush(u_15);
  MatchVard(3,1);
  Cpop();
  goto x_15;
  u_15 :
  IsAppl();
  MatchTravInit();
  v_15 :
  OneMatchNextSon();
  Cpush(v_15);
  Rpush(w_15);
  goto t_15;
  w_15 :
  Cpop();
  MatchTravEnd();
  x_15 :
  Return();
  y_15 :
  Epopd(4,0);
  Epopd(3,2);
  Cpop();
  Crestore();
  Cjump();
  s_15 :
  Tpop();
  BuildVard(2,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
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
  BuildFun("TCons",2);
  Tpush();
  BuildFun("Pair",2);
  Epopd(2,4);
  Cpop();
  goto q_15;
  r_15 :
  Epushd(2,5);
  MatchFun("Pair",2);
  Arg(0);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,4);
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
  Tpop();
  Tdupl();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  BuildVard(3,2);
  Epushd(4,0);
  Rpush(e_16);
  z_15 :
  Cpush(a_16);
  MatchVard(3,1);
  Cpop();
  goto d_16;
  a_16 :
  IsAppl();
  MatchTravInit();
  b_16 :
  OneMatchNextSon();
  Cpush(b_16);
  Rpush(c_16);
  goto z_15;
  c_16 :
  Cpop();
  MatchTravEnd();
  d_16 :
  Return();
  e_16 :
  Epopd(4,0);
  Epopd(3,2);
  Rpush(f_16);
  goto n_29;
  f_16 :
  MatchVard(2,5);
  Tpop();
  BuildVard(2,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Build",1);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("Var",1);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("Pair",2);
  Epopd(2,5);
  q_15 :
  Cpop();
  goto o_15;
  p_15 :
  ThreadInit();
  g_16 :
  ThreadNextSon(&&h_16);
  Rpush(i_16);
  goto l_6;
  i_16 :
  ThreadSetEnv();
  goto g_16;
  h_16 :
  ThreadBuild();
  o_15 :
  Return();
  n_15 :
  MatchFun("Pair",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,5);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Epushd(2,1);
  BuildVard(1,4);
  Tpush();
  BuildVard(1,5);
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
  Epushd(4,0);
  Rpush(j_16);
  o_6 :
  Cpush(l_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_16);
  goto o_6;
  m_16 :
  AllBuild();
  Cpop();
  goto k_16;
  l_16 :
  Rpush(n_16);
  goto s_28;
  n_16 :
  BuildVard(3,1);
  k_16 :
  Return();
  j_16 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Match",1);
  Tpush();
  BuildVard(1,6);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Seq",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(2,1);
  Epopd(1,6);
  b_15 :
  Return();
  a_15 :
  Epopd(0,0);
  Return();
  n_29 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  o_29 :
  Epushd(0,0);
  Rpush(o_16);
  t_13 :
  Epushd(1,0);
  Cpush(q_16);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(r_16);
  goto t_13;
  r_16 :
  OneNextSon();
  Rpush(s_16);
  goto t_13;
  s_16 :
  AllBuild();
  Epushd(2,4);
  MatchFun("Choice",2);
  Arg(0);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,4);
  Tpop();
  Tpop();
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
  Rpush(t_16);
  j_14 :
  Cpush(v_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_16);
  goto j_14;
  w_16 :
  AllBuild();
  Cpop();
  goto u_16;
  v_16 :
  Rpush(x_16);
  goto s_28;
  x_16 :
  BuildVard(4,1);
  u_16 :
  Return();
  t_16 :
  Epopd(5,0);
  Epopd(4,2);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("Choice",2);
  Tpush();
  BuildFun("Scope",2);
  Epopd(3,1);
  Epopd(2,4);
  Cpop();
  goto p_16;
  q_16 :
  p_16 :
  Epopd(1,0);
  Return();
  o_16 :
  Epopd(0,0);
  Return();
  p_29 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(y_16);
  n_14 :
  Cpush(a_17);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(b_17);
  goto n_14;
  b_17 :
  OneNextSon();
  Rpush(c_17);
  goto n_14;
  c_17 :
  AllBuild();
  Cpop();
  goto z_16;
  a_17 :
  Epushd(2,3);
  MatchFun("Seq",2);
  Arg(0);
  MatchFun("Match",1);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  Rpush(d_17);
  goto n_29;
  d_17 :
  MatchVard(2,3);
  Tpop();
  BuildVard(2,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("SDef",3);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildFun("Pat",2);
  Tpush();
  BuildFun("Let",2);
  Epopd(2,3);
  z_16 :
  Return();
  y_16 :
  Epopd(1,0);
  Rpush(e_17);
  y_60 :
  Epushd(1,0);
  Rpush(f_17);
  r_14 :
  AllInit();
  g_17 :
  AllNextSon(&&h_17);
  Rpush(i_17);
  goto r_14;
  i_17 :
  goto g_17;
  h_17 :
  AllBuild();
  Epushd(2,0);
  Cpush(k_17);
  Rpush(l_17);
  goto q_29;
  l_17 :
  AllInit();
  m_17 :
  AllNextSon(&&n_17);
  Rpush(o_17);
  goto y_60;
  o_17 :
  goto m_17;
  n_17 :
  AllBuild();
  Cpop();
  goto j_17;
  k_17 :
  j_17 :
  Epopd(2,0);
  Return();
  f_17 :
  Epopd(1,0);
  Return();
  e_17 :
  Epopd(0,0);
  Return();
  q_29 :
  Cpush(q_17);
  Epushd(0,3);
  MatchFun("Choice",2);
  Arg(0);
  MatchFun("Let",2);
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
  BuildFun("Let",2);
  Epopd(0,3);
  Cpop();
  goto p_17;
  q_17 :
  Epushd(0,3);
  MatchFun("Choice",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("Let",2);
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
  BuildFun("Choice",2);
  Tpush();
  BuildFun("Let",2);
  Epopd(0,3);
  p_17 :
  Return();
  r_29 :
  Epushd(0,0);
  Rpush(r_17);
  goto s_29;
  r_17 :
  Epopd(0,0);
  Return();
  s_29 :
  Epushd(0,0);
  Rpush(s_17);
  goto t_29;
  s_17 :
  Rpush(t_17);
  goto u_29;
  t_17 :
  Rpush(u_17);
  goto b_30;
  u_17 :
  Epopd(0,0);
  Return();
  t_29 :
  Epushd(0,0);
  Rpush(v_17);
  s_14 :
  Cpush(x_17);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(y_17);
  goto s_14;
  y_17 :
  OneNextSon();
  Rpush(z_17);
  goto s_14;
  z_17 :
  AllBuild();
  Cpop();
  goto w_17;
  x_17 :
  Epushd(1,1);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  w_17 :
  Return();
  v_17 :
  Rpush(a_18);
  z_14 :
  Epushd(1,0);
  Cpush(c_18);
  MatchFun("Choice",2);
  TravInit();
  OneNextSon();
  Rpush(d_18);
  goto z_14;
  d_18 :
  OneNextSon();
  Rpush(e_18);
  goto z_14;
  e_18 :
  AllBuild();
  Epushd(2,2);
  MatchFun("Choice",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
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
  Rpush(f_18);
  j_15 :
  Cpush(h_18);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_18);
  goto j_15;
  i_18 :
  AllBuild();
  Cpop();
  goto g_18;
  h_18 :
  Rpush(j_18);
  goto s_28;
  j_18 :
  BuildVard(3,1);
  g_18 :
  Return();
  f_18 :
  Epopd(4,0);
  Epopd(3,2);
  Epopd(2,2);
  Cpop();
  goto b_18;
  c_18 :
  b_18 :
  Epopd(1,0);
  Return();
  a_18 :
  Epopd(0,0);
  Return();
  u_29 :
  Epushd(0,0);
  Rpush(k_18);
  k_15 :
  Cpush(m_18);
  Rpush(n_18);
  goto s_28;
  n_18 :
  Cpop();
  goto l_18;
  m_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(o_18);
  goto x_29;
  o_18 :
  OneNextSon();
  Rpush(p_18);
  goto k_15;
  p_18 :
  AllBuild();
  l_18 :
  Return();
  k_18 :
  Epopd(0,0);
  Return();
  x_29 :
  Epushd(0,2);
  MatchFun("Pat",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildFun("MatchTerm",3);
  Rpush(q_18);
  x_18 :
  Epushd(1,0);
  Cpush(s_18);
  r_18 :
  Cpush(u_18);
  Epushd(2,2);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("Wld",0);
  Tpop();
  Arg(2);
  MatchVard(2,2);
  Tpop();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(2,2);
  Cpop();
  goto t_18;
  u_18 :
  Cpush(w_18);
  Epushd(2,3);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("Str",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Str",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(2,3);
  Cpop();
  goto v_18;
  w_18 :
  Cpush(k_20);
  Rpush(l_20);
  goto y_29;
  l_20 :
  Cpop();
  goto j_20;
  k_20 :
  Cpush(n_20);
  Epushd(2,4);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("As",2);
  Arg(0);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(2,4);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("MatchTerm",3);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(2,4);
  Cpop();
  goto m_20;
  n_20 :
  Cpush(p_20);
  Epushd(2,3);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(2,3);
  Cpop();
  goto o_20;
  p_20 :
  Cpush(r_20);
  Epushd(2,4);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(2,4);
  Tpop();
  Epushd(3,1);
  BuildVard(2,3);
  Rpush(s_20);
  goto z_29;
  s_20 :
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Fun",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildFun("MatchKids",4);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(3,1);
  Epopd(2,4);
  Cpop();
  goto q_20;
  r_20 :
  Cpush(u_20);
  Epushd(2,3);
  MatchFun("MatchKids",4);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Arg(2);
  MatchFun("Nil",0);
  Tpop();
  Arg(3);
  MatchVard(2,3);
  Tpop();
  BuildVard(2,3);
  Epopd(2,3);
  Cpop();
  goto t_20;
  u_20 :
  Cpush(w_20);
  Epushd(2,5);
  MatchFun("MatchKids",4);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Arg(2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,4);
  Tpop();
  Tpop();
  Arg(3);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,2);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(x_20);
  goto a_30;
  x_20 :
  MatchVard(3,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("MatchKids",4);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildFun("MatchTerm",3);
  Tpush();
  BuildFun("Down",2);
  Epopd(3,1);
  Epopd(2,5);
  Cpop();
  goto v_20;
  w_20 :
  Epushd(2,3);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("BuildDefault",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(2,3);
  v_20 :
  t_20 :
  q_20 :
  o_20 :
  m_20 :
  j_20 :
  v_18 :
  t_18 :
  Tduplinv();
  goto r_18;
  s_18 :
  Epopd(1,0);
  AllInit();
  y_20 :
  AllNextSon(&&z_20);
  Rpush(a_21);
  goto x_18;
  a_21 :
  goto y_20;
  z_20 :
  AllBuild();
  Return();
  q_18 :
  Epopd(0,2);
  Return();
  y_29 :
  Cpush(c_21);
  Epushd(0,3);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("Int",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Int",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(0,3);
  Cpop();
  goto b_21;
  c_21 :
  Epushd(0,3);
  MatchFun("MatchTerm",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("Real",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Real",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(0,3);
  b_21 :
  Return();
  z_29 :
  Epushd(0,0);
  Rpush(d_21);
  r_54 :
  Cpush(f_21);
  Rpush(g_21);
  goto s_28;
  g_21 :
  BuildInt(0);
  Cpop();
  goto e_21;
  f_21 :
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
  Rpush(h_21);
  goto r_54;
  h_21 :
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
  Rpush(i_21);
  goto a_30;
  i_21 :
  Epopd(1,1);
  e_21 :
  Return();
  d_21 :
  Epopd(0,0);
  Return();
  a_30 :
  Epushd(0,0);
  _ST_plus();
  Epopd(0,0);
  Return();
  b_30 :
  Epushd(0,0);
  Rpush(j_21);
  e_20 :
  Cpush(l_21);
  Rpush(m_21);
  goto s_28;
  m_21 :
  BuildFun("Fail",0);
  Tpush();
  BuildFun("Accept",1);
  Cpop();
  goto k_21;
  l_21 :
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
  Rpush(n_21);
  goto e_20;
  n_21 :
  OneNextSon();
  Rpush(o_21);
  goto j_29;
  o_21 :
  AllBuild();
  AllBuild();
  Rpush(p_21);
  goto c_30;
  p_21 :
  k_21 :
  Return();
  j_21 :
  Epopd(0,0);
  Return();
  c_30 :
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
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Merge",2);
  Rpush(q_21);
  i_25 :
  Epushd(1,0);
  Cpush(s_21);
  r_21 :
  Cpush(u_21);
  Rpush(v_21);
  goto d_30;
  v_21 :
  Cpop();
  goto t_21;
  u_21 :
  Cpush(x_21);
  Epushd(2,6);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  Arg(3);
  MatchVard(2,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(2,5);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,5);
  Epushd(3,0);
  Rpush(y_21);
  s_26 :
  Cpush(a_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  Arg(3);
  MatchVard(4,2);
  Tpop();
  Epushd(5,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(6,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,2);
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
  BuildVard(6,2);
  Rpush(b_22);
  t_26 :
  Cpush(d_22);
  Rpush(e_22);
  goto s_28;
  e_22 :
  BuildVard(6,1);
  Cpop();
  goto c_22;
  d_22 :
  Cpush(g_22);
  Epushd(7,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchVard(7,1);
  Tpop();
  Tdupl();
  BuildVard(6,1);
  Epushd(8,0);
  Tdupl();
  h_22 :
  MatchFun("Cons",2);
  Cpush(i_22);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Cpop();
  goto j_22;
  i_22 :
  Arg(1);
  Tdrop();
  goto h_22;
  j_22 :
  Tpop();
  Epopd(8,0);
  Tpop();
  BuildVard(7,1);
  Epopd(7,2);
  Rpush(k_22);
  goto t_26;
  k_22 :
  Cpop();
  goto f_22;
  g_22 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_22);
  goto t_26;
  l_22 :
  AllBuild();
  f_22 :
  c_22 :
  Return();
  b_22 :
  Epopd(6,2);
  MatchVard(5,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(5,1);
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  Cpop();
  goto z_21;
  a_22 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_22);
  goto s_26;
  m_22 :
  AllBuild();
  z_21 :
  Return();
  y_21 :
  Epopd(3,0);
  MatchVard(2,6);
  Tpop();
  BuildVard(2,6);
  Tpush();
  BuildFun("Case",1);
  Epopd(2,6);
  Cpop();
  goto w_21;
  x_21 :
  Cpush(o_22);
  Epushd(2,7);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Arg(2);
  MatchVard(2,5);
  Tpop();
  Arg(3);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(2,7);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,7);
  Epushd(3,0);
  Tdupl();
  p_22 :
  MatchFun("Cons",2);
  Cpush(q_22);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(2,4);
  Tpop();
  Arg(1);
  MatchVard(2,5);
  Tpop();
  Arg(2);
  MatchVard(2,6);
  Tpop();
  Tpop();
  Cpop();
  goto r_22;
  q_22 :
  Arg(1);
  Tdrop();
  goto p_22;
  r_22 :
  Tpop();
  Epopd(3,0);
  Tpop();
  Epushd(3,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(2,4);
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
  Rpush(s_22);
  w_26 :
  Cpush(u_22);
  Rpush(v_22);
  goto s_28;
  v_22 :
  BuildVard(4,1);
  Cpop();
  goto t_22;
  u_22 :
  Cpush(x_22);
  Epushd(5,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Arg(1);
  MatchVard(5,1);
  Tpop();
  Tdupl();
  BuildVard(4,1);
  Epushd(6,0);
  Tdupl();
  y_22 :
  MatchFun("Cons",2);
  Cpush(z_22);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto a_23;
  z_22 :
  Arg(1);
  Tdrop();
  goto y_22;
  a_23 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(b_23);
  goto w_26;
  b_23 :
  Cpop();
  goto w_22;
  x_22 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_23);
  goto w_26;
  c_23 :
  AllBuild();
  w_22 :
  t_22 :
  Return();
  s_22 :
  Epopd(4,2);
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,6);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Tpush();
  BuildVard(2,7);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Case",1);
  Epopd(3,1);
  Epopd(2,7);
  Cpop();
  goto n_22;
  o_22 :
  Epushd(2,5);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  Arg(3);
  MatchVard(2,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(2,5);
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
  BuildFun("MatchFunA",4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Case",1);
  Epopd(2,5);
  n_22 :
  w_21 :
  t_21 :
  Tduplinv();
  goto r_21;
  s_21 :
  Epopd(1,0);
  AllInit();
  d_23 :
  AllNextSon(&&e_23);
  Rpush(f_23);
  goto i_25;
  f_23 :
  goto d_23;
  e_23 :
  AllBuild();
  Return();
  q_21 :
  Epopd(0,2);
  Return();
  d_30 :
  Cpush(h_23);
  Epushd(0,3);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Down",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Down",2);
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
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Down",2);
  Epopd(0,3);
  Cpop();
  goto g_23;
  h_23 :
  Cpush(j_23);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Up",1);
  Epopd(0,2);
  Cpop();
  goto i_23;
  j_23 :
  Cpush(l_23);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Choice",2);
  Tpush();
  BuildFun("Accept",1);
  Epopd(0,2);
  Cpop();
  goto k_23;
  l_23 :
  Cpush(n_23);
  Epushd(0,3);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Down",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Up",1);
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
  BuildFun("Up",1);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Down",2);
  Epopd(0,3);
  Cpop();
  goto m_23;
  n_23 :
  Cpush(p_23);
  Epushd(0,3);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Down",2);
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
  BuildFun("Up",1);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Down",2);
  Epopd(0,3);
  Cpop();
  goto o_23;
  p_23 :
  Cpush(r_23);
  Epushd(0,5);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Arg(3);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(0,5);
  Cpop();
  goto q_23;
  r_23 :
  Cpush(t_23);
  Epushd(0,5);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Arg(3);
  MatchVard(0,5);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(0,5);
  Cpop();
  goto s_23;
  t_23 :
  Cpush(v_23);
  Epushd(0,4);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(0,4);
  Cpop();
  goto u_23;
  v_23 :
  Cpush(x_23);
  Epushd(0,4);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(0,4);
  Cpop();
  goto w_23;
  x_23 :
  Cpush(z_23);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,2);
  Epushd(2,0);
  Rpush(a_24);
  y_26 :
  Cpush(c_24);
  Rpush(d_24);
  goto s_28;
  d_24 :
  Cpop();
  goto b_24;
  c_24 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Merge",2);
  Epopd(3,1);
  OneNextSon();
  Rpush(e_24);
  goto y_26;
  e_24 :
  AllBuild();
  b_24 :
  Return();
  a_24 :
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Case",1);
  Epopd(1,1);
  Epopd(0,2);
  Cpop();
  goto y_23;
  z_23 :
  Cpush(g_24);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,2);
  Epushd(2,0);
  Rpush(h_24);
  b_27 :
  Cpush(j_24);
  Rpush(k_24);
  goto s_28;
  k_24 :
  Cpop();
  goto i_24;
  j_24 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Merge",2);
  Epopd(3,1);
  OneNextSon();
  Rpush(l_24);
  goto b_27;
  l_24 :
  AllBuild();
  i_24 :
  Return();
  h_24 :
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Case",1);
  Epopd(1,1);
  Epopd(0,2);
  Cpop();
  goto f_24;
  g_24 :
  Cpush(n_24);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Up",1);
  Epopd(0,2);
  Cpop();
  goto m_24;
  n_24 :
  Cpush(p_24);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Up",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Up",1);
  Epopd(0,2);
  Cpop();
  goto o_24;
  p_24 :
  Cpush(r_24);
  Epushd(0,3);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Down",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Accept",1);
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
  BuildFun("Accept",1);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Down",2);
  Epopd(0,3);
  Cpop();
  goto q_24;
  r_24 :
  Cpush(t_24);
  Epushd(0,3);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Down",2);
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
  BuildFun("Accept",1);
  Tpush();
  BuildFun("Up",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("Down",2);
  Epopd(0,3);
  Cpop();
  goto s_24;
  t_24 :
  Cpush(v_24);
  Epushd(0,5);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Arg(3);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(0,5);
  Cpop();
  goto u_24;
  v_24 :
  Cpush(x_24);
  Epushd(0,5);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Arg(3);
  MatchVard(0,5);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(0,5);
  Cpop();
  goto w_24;
  x_24 :
  Cpush(z_24);
  Epushd(0,4);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(0,4);
  Cpop();
  goto y_24;
  z_24 :
  Cpush(b_25);
  Epushd(0,4);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(0,4);
  Cpop();
  goto a_25;
  b_25 :
  Cpush(d_25);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,2);
  Epushd(2,0);
  Rpush(e_25);
  e_27 :
  Cpush(g_25);
  Rpush(h_25);
  goto s_28;
  h_25 :
  Cpop();
  goto f_25;
  g_25 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Merge",2);
  Epopd(3,1);
  OneNextSon();
  Rpush(v_25);
  goto e_27;
  v_25 :
  AllBuild();
  f_25 :
  Return();
  e_25 :
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Case",1);
  Epopd(1,1);
  Epopd(0,2);
  Cpop();
  goto c_25;
  d_25 :
  Cpush(a_26);
  Epushd(0,2);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Accept",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,2);
  Epushd(2,0);
  Rpush(b_26);
  h_27 :
  Cpush(c_27);
  Rpush(f_27);
  goto s_28;
  f_27 :
  Cpop();
  goto z_26;
  c_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Accept",1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Merge",2);
  Epopd(3,1);
  OneNextSon();
  Rpush(i_27);
  goto h_27;
  i_27 :
  AllBuild();
  z_26 :
  Return();
  b_26 :
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Case",1);
  Epopd(1,1);
  Epopd(0,2);
  Cpop();
  goto w_25;
  a_26 :
  Cpush(e_29);
  Epushd(0,5);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,5);
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
  Rpush(f_29);
  m_27 :
  Cpush(w_29);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_30);
  goto m_27;
  f_30 :
  AllBuild();
  Cpop();
  goto v_29;
  w_29 :
  Rpush(g_30);
  goto s_28;
  g_30 :
  BuildVard(2,1);
  v_29 :
  Return();
  f_29 :
  Epopd(3,0);
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(1,1);
  Epopd(0,5);
  Cpop();
  goto p_28;
  e_29 :
  Cpush(i_30);
  Epushd(0,6);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Arg(3);
  MatchVard(0,5);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Arg(3);
  MatchVard(0,6);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
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
  Rpush(j_30);
  p_27 :
  Cpush(l_30);
  Rpush(m_30);
  goto s_28;
  m_30 :
  BuildVard(2,1);
  Cpop();
  goto k_30;
  l_30 :
  Cpush(o_30);
  Epushd(3,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Epushd(4,0);
  Tdupl();
  p_30 :
  MatchFun("Cons",2);
  Cpush(q_30);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Cpop();
  goto r_30;
  q_30 :
  Arg(1);
  Tdrop();
  goto p_30;
  r_30 :
  Tpop();
  Epopd(4,0);
  Tpop();
  BuildVard(3,1);
  Epopd(3,2);
  Rpush(s_30);
  goto p_27;
  s_30 :
  Cpop();
  goto n_30;
  o_30 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_30);
  goto p_27;
  t_30 :
  AllBuild();
  n_30 :
  k_30 :
  Return();
  j_30 :
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(1,1);
  Epopd(0,6);
  Cpop();
  goto h_30;
  i_30 :
  Cpush(v_30);
  Epushd(0,7);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,6);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Arg(3);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,7);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Arg(3);
  MatchVard(0,5);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,6);
  Tpush();
  BuildVard(0,7);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpush(w_30);
  Tdupl();
  Rpush(x_30);
  goto e_30;
  x_30 :
  Cpop();
  Crestore();
  Cjump();
  w_30 :
  Tpop();
  BuildVard(0,6);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("MatchFunA",4);
  Tpush();
  BuildVard(0,7);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("MatchFunA",4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Case",1);
  Epopd(0,7);
  Cpop();
  goto u_30;
  v_30 :
  Cpush(z_30);
  Epushd(0,6);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,5);
  Tpop();
  Arg(3);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,5);
  Tpop();
  Arg(2);
  MatchVard(0,6);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,4);
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
  Rpush(a_31);
  v_27 :
  Cpush(c_31);
  Rpush(d_31);
  goto s_28;
  d_31 :
  BuildVard(2,1);
  Cpop();
  goto b_31;
  c_31 :
  Cpush(f_31);
  Epushd(3,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Epushd(4,0);
  Tdupl();
  g_31 :
  MatchFun("Cons",2);
  Cpush(h_31);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Cpop();
  goto i_31;
  h_31 :
  Arg(1);
  Tdrop();
  goto g_31;
  i_31 :
  Tpop();
  Epopd(4,0);
  Tpop();
  BuildVard(3,1);
  Epopd(3,2);
  Rpush(j_31);
  goto v_27;
  j_31 :
  Cpop();
  goto e_31;
  f_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_31);
  goto v_27;
  k_31 :
  AllBuild();
  e_31 :
  b_31 :
  Return();
  a_31 :
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("MatchVars",3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Case",1);
  Epopd(1,1);
  Epopd(0,6);
  Cpop();
  goto y_30;
  z_30 :
  Cpush(m_31);
  Epushd(0,6);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,5);
  Tpop();
  Arg(2);
  MatchVard(0,6);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,5);
  Tpop();
  Arg(3);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,4);
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
  Rpush(n_31);
  b_28 :
  Cpush(p_31);
  Rpush(q_31);
  goto s_28;
  q_31 :
  BuildVard(2,1);
  Cpop();
  goto o_31;
  p_31 :
  Cpush(s_31);
  Epushd(3,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Epushd(4,0);
  Tdupl();
  t_31 :
  MatchFun("Cons",2);
  Cpush(u_31);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Cpop();
  goto v_31;
  u_31 :
  Arg(1);
  Tdrop();
  goto t_31;
  v_31 :
  Tpop();
  Epopd(4,0);
  Tpop();
  BuildVard(3,1);
  Epopd(3,2);
  Rpush(w_31);
  goto b_28;
  w_31 :
  Cpop();
  goto r_31;
  s_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_31);
  goto b_28;
  x_31 :
  AllBuild();
  r_31 :
  o_31 :
  Return();
  n_31 :
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("MatchVars",3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Case",1);
  Epopd(1,1);
  Epopd(0,6);
  Cpop();
  goto l_31;
  m_31 :
  Cpush(z_31);
  Epushd(0,6);
  MatchFun("Merge2",2);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,4);
  Tpop();
  Arg(2);
  MatchVard(0,5);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchFunA",4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Arg(3);
  MatchVard(0,6);
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
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
  Rpush(a_32);
  h_28 :
  Cpush(c_32);
  Rpush(d_32);
  goto s_28;
  d_32 :
  BuildVard(2,1);
  Cpop();
  goto b_32;
  c_32 :
  Cpush(f_32);
  Epushd(3,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tdupl();
  BuildVard(2,1);
  Epushd(4,0);
  Tdupl();
  g_32 :
  MatchFun("Cons",2);
  Cpush(h_32);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Cpop();
  goto i_32;
  h_32 :
  Arg(1);
  Tdrop();
  goto g_32;
  i_32 :
  Tpop();
  Epopd(4,0);
  Tpop();
  BuildVard(3,1);
  Epopd(3,2);
  Rpush(j_32);
  goto h_28;
  j_32 :
  Cpop();
  goto e_32;
  f_32 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_32);
  goto h_28;
  k_32 :
  AllBuild();
  e_32 :
  b_32 :
  Return();
  a_32 :
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchFunA",4);
  Epopd(1,1);
  Epopd(0,6);
  Cpop();
  goto y_31;
  z_31 :
  Cpush(m_32);
  Epushd(0,5);
  MatchFun("Merge2",2);
  Arg(0);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("MatchVars",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,5);
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
  Rpush(n_32);
  n_28 :
  Cpush(p_32);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_32);
  goto n_28;
  q_32 :
  AllBuild();
  Cpop();
  goto o_32;
  p_32 :
  Rpush(r_32);
  goto s_28;
  r_32 :
  BuildVard(2,1);
  o_32 :
  Return();
  n_32 :
  Epopd(3,0);
  Epopd(2,2);
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Merge",2);
  Tpush();
  BuildFun("MatchVars",3);
  Epopd(1,1);
  Epopd(0,5);
  Cpop();
  goto l_32;
  m_32 :
  Epushd(0,6);
  MatchFun("Merge",2);
  Arg(0);
  MatchFun("MatchVars",3);
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
  Arg(1);
  MatchFun("Case",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(s_32);
  o_28 :
  Cpush(u_32);
  Rpush(v_32);
  goto s_28;
  v_32 :
  Cpop();
  goto t_32;
  u_32 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchVard(2,1);
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("MatchVars",3);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Merge2",2);
  Epopd(2,1);
  OneNextSon();
  Rpush(w_32);
  goto o_28;
  w_32 :
  AllBuild();
  t_32 :
  Return();
  s_32 :
  Epopd(1,0);
  MatchVard(0,5);
  Cpush(y_32);
  BuildVard(0,1);
  Epushd(1,0);
  Tdupl();
  z_32 :
  MatchFun("Cons",2);
  Cpush(a_33);
  Arg(0);
  MatchFun("MatchVars",3);
  Tpop();
  Cpop();
  goto b_33;
  a_33 :
  Arg(1);
  Tdrop();
  goto z_32;
  b_33 :
  Tpop();
  Epopd(1,0);
  BuildVard(0,5);
  Cpop();
  goto x_32;
  y_32 :
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("MatchVars",3);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Cons",2);
  x_32 :
  MatchVard(0,6);
  Tpop();
  BuildVard(0,6);
  Tpush();
  BuildFun("Case",1);
  Epopd(0,6);
  l_32 :
  y_31 :
  l_31 :
  y_30 :
  u_30 :
  h_30 :
  p_28 :
  w_25 :
  c_25 :
  a_25 :
  y_24 :
  w_24 :
  u_24 :
  s_24 :
  q_24 :
  o_24 :
  m_24 :
  f_24 :
  y_23 :
  w_23 :
  u_23 :
  s_23 :
  q_23 :
  o_23 :
  m_23 :
  k_23 :
  i_23 :
  g_23 :
  Return();
  e_30 :
  Epushd(0,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
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
  Epopd(0,1);
  Return();
  c_33 :
DOIT_END
