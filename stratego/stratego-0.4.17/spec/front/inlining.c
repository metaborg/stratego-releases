#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(i_22);
  goto main;
  main :
  Epushd(0,0);
  Rpush(w_2);
  goto o_27;
  w_2 :
  Epopd(0,0);
  Return();
  o_27 :
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
  Rpush(c_3);
  goto p_27;
  c_3 :
  Cpop();
  goto a_3;
  b_3 :
  Rpush(d_3);
  goto q_27;
  d_3 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_3);
  goto h_0;
  e_3 :
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
  Cpush(g_3);
  Rpush(k_3);
  goto r_27;
  k_3 :
  Cpop();
  goto f_3;
  g_3 :
  Cpush(m_3);
  Rpush(o_3);
  goto d_28;
  o_3 :
  Epushd(1,1);
  Tdupl();
  Rpush(p_3);
  goto f_28;
  p_3 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(q_3);
  goto m_28;
  q_3 :
  OneNextSon();
  Rpush(r_3);
  goto l_28;
  r_3 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(s_3);
  goto f_28;
  s_3 :
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
  Rpush(t_3);
  goto g_28;
  t_3 :
  Rpush(a_4);
  goto j_28;
  a_4 :
  Cpop();
  goto l_3;
  m_3 :
  Rpush(b_4);
  goto k_28;
  b_4 :
  l_3 :
  f_3 :
  Epopd(0,0);
  Return();
  p_27 :
  MatchFun("Nil",0);
  Return();
  q_27 :
  Epushd(0,0);
  Cpush(d_4);
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
  goto c_4;
  d_4 :
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
  goto e_4;
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
  Cpush(l_4);
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
  l_4 :
  Cpush(n_4);
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
  goto m_4;
  n_4 :
  Cpush(p_4);
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
  goto o_4;
  p_4 :
  Cpush(t_4);
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
  goto s_4;
  t_4 :
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
  goto u_4;
  d_5 :
  Cpush(k_5);
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
  k_5 :
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
  Cpush(s_5);
  Rpush(t_5);
  goto a_0;
  t_5 :
  Cpop();
  goto r_5;
  s_5 :
  Cpush(v_5);
  Rpush(w_5);
  goto b_0;
  w_5 :
  Cpop();
  goto u_5;
  v_5 :
  Cpush(y_5);
  Rpush(d_6);
  goto c_0;
  d_6 :
  Cpop();
  goto x_5;
  y_5 :
  Cpush(f_6);
  Rpush(h_6);
  goto d_0;
  h_6 :
  Cpop();
  goto e_6;
  f_6 :
  Rpush(j_6);
  goto u_2;
  j_6 :
  e_6 :
  x_5 :
  u_5 :
  r_5 :
  goto q_5;
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
  q_5 :
  goto p_5;
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
  p_5 :
  goto o_5;
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
  o_5 :
  goto n_5;
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
  n_5 :
  goto l_5;
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
  l_5 :
  Epopd(1,10);
  e_5 :
  u_4 :
  s_4 :
  o_4 :
  m_4 :
  k_4 :
  i_4 :
  g_4 :
  e_4 :
  c_4 :
  Epopd(0,0);
  Return();
  r_27 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  k_6 :
  MatchFun("Cons",2);
  Cpush(l_6);
  Arg(0);
  Cpush(o_6);
  Rpush(p_6);
  goto z_27;
  p_6 :
  Cpop();
  goto n_6;
  o_6 :
  MatchFun("Undefined",1);
  n_6 :
  Tpop();
  Cpop();
  goto m_6;
  l_6 :
  Arg(1);
  Tdrop();
  goto k_6;
  m_6 :
  Tpop();
  Epopd(1,0);
  Rpush(q_6);
  goto a_28;
  q_6 :
  Epopd(0,0);
  Return();
  z_27 :
  MatchFun("Help",0);
  Return();
  a_28 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  r_6 :
  MatchFun("Cons",2);
  Cpush(s_6);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto t_6;
  s_6 :
  Arg(1);
  Tdrop();
  goto r_6;
  t_6 :
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
  Rpush(u_6);
  goto b_28;
  u_6 :
  BuildInt(1);
  Rpush(v_6);
  goto c_28;
  v_6 :
  Tpop();
  Epopd(0,1);
  Return();
  b_28 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  c_28 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  d_28 :
  Epushd(0,1);
  Cpush(x_6);
  Epushd(1,0);
  Tdupl();
  y_6 :
  MatchFun("Cons",2);
  Cpush(z_6);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto b_7;
  z_6 :
  Arg(1);
  Tdrop();
  goto y_6;
  b_7 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto w_6;
  x_6 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  w_6 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(c_7);
  goto e_28;
  c_7 :
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
  e_28 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  f_28 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  g_28 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(e_7);
  Epushd(1,0);
  Tdupl();
  f_7 :
  MatchFun("Cons",2);
  Cpush(g_7);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto h_7;
  g_7 :
  Arg(1);
  Tdrop();
  goto f_7;
  h_7 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto d_7;
  e_7 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  d_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_7);
  goto l_28;
  i_7 :
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
  Rpush(w_7);
  goto l_28;
  w_7 :
  AllBuild();
  AllBuild();
  Cpush(y_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  z_7 :
  MatchFun("Cons",2);
  Cpush(a_8);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto g_8;
  a_8 :
  Arg(1);
  Tdrop();
  goto z_7;
  g_8 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_8);
  goto h_28;
  h_8 :
  OneNextSon();
  Rpush(j_8);
  goto l_28;
  j_8 :
  AllBuild();
  AllBuild();
  Cpop();
  goto x_7;
  y_7 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(k_8);
  goto i_28;
  k_8 :
  OneNextSon();
  Rpush(l_8);
  goto l_28;
  l_8 :
  AllBuild();
  AllBuild();
  x_7 :
  Epopd(0,1);
  Return();
  h_28 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  i_28 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  j_28 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(n_8);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(o_8);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  p_8 :
  MatchFun("Cons",2);
  Cpush(q_8);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto r_8;
  q_8 :
  Arg(1);
  Tdrop();
  goto p_8;
  r_8 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  o_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_8);
  goto l_28;
  s_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  y_8 :
  MatchFun("Cons",2);
  Cpush(z_8);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto k_9;
  z_8 :
  Arg(1);
  Tdrop();
  goto y_8;
  k_9 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_9);
  goto l_28;
  l_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  m_9 :
  MatchFun("Cons",2);
  Cpush(n_9);
  Arg(0);
  MatchFun("Program",1);
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
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_9);
  goto l_28;
  p_9 :
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
  Rpush(q_9);
  goto b_28;
  q_9 :
  Cpop();
  goto m_8;
  n_8 :
  m_8 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(r_9);
  goto c_28;
  r_9 :
  Epopd(0,2);
  Return();
  k_28 :
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
  Rpush(s_9);
  goto b_28;
  s_9 :
  BuildInt(1);
  Rpush(t_9);
  goto c_28;
  t_9 :
  Epopd(0,0);
  Return();
  l_28 :
  MatchFun("TNil",0);
  Return();
  m_28 :
  Epushd(0,0);
  Epushd(1,3);
  MatchVard(1,1);
  Tdupl();
  BuildVard(1,1);
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
  Epushd(2,0);
  Cpush(v_9);
  u_9 :
  Cpush(x_9);
  Epushd(3,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,2);
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
  Tpop();
  Tdupl();
  BuildVard(3,4);
  Rpush(y_9);
  goto n_28;
  y_9 :
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,4);
  Tpush();
  BuildVard(3,3);
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
  Epopd(3,4);
  Cpop();
  goto w_9;
  x_9 :
  Epushd(3,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(3,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(3,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,4);
  w_9 :
  Tduplinv();
  goto u_9;
  v_9 :
  Epopd(2,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
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
  Tpop();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,3);
  Rpush(z_9);
  goto s_28;
  z_9 :
  Epushd(1,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,2);
  MatchVard(1,5);
  Tdupl();
  BuildVard(1,5);
  Epushd(2,0);
  Rpush(a_10);
  m_5 :
  Cpush(c_10);
  Rpush(d_10);
  goto p_27;
  d_10 :
  Cpop();
  goto b_10;
  c_10 :
  Cpush(f_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  Tpop();
  Arg(2);
  Tpop();
  Tdupl();
  Cpush(g_10);
  Tdupl();
  BuildVard(3,1);
  MatchString("main");
  Cpop();
  Crestore();
  Cjump();
  g_10 :
  Tpop();
  Epushd(4,1);
  BuildFun("TNil",0);
  Rpush(h_10);
  goto x_28;
  h_10 :
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
  OneNextSon();
  Rpush(i_10);
  goto m_5;
  i_10 :
  AllBuild();
  Cpop();
  goto e_10;
  f_10 :
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
  Rpush(j_10);
  goto m_5;
  j_10 :
  e_10 :
  b_10 :
  Return();
  a_10 :
  Epopd(2,0);
  MatchVard(1,3);
  BuildVard(1,3);
  Epushd(2,0);
  Rpush(k_10);
  g_6 :
  Cpush(m_10);
  Rpush(n_10);
  goto p_27;
  n_10 :
  Cpop();
  goto l_10;
  m_10 :
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
  Rpush(o_10);
  goto l_28;
  o_10 :
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(p_10);
  goto g_6;
  p_10 :
  AllBuild();
  l_10 :
  Return();
  k_10 :
  Epopd(2,0);
  MatchVard(1,4);
  BuildVard(1,5);
  Epushd(2,0);
  Rpush(q_10);
  a_7 :
  Cpush(s_10);
  Rpush(t_10);
  goto p_27;
  t_10 :
  Cpop();
  goto r_10;
  s_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  Arg(2);
  MatchVard(3,2);
  Tpop();
  Tdupl();
  Cpush(v_10);
  BuildVard(1,3);
  Epushd(4,0);
  Tdupl();
  w_10 :
  MatchFun("Cons",2);
  Cpush(x_10);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Cpop();
  goto y_10;
  x_10 :
  Arg(1);
  Tdrop();
  goto w_10;
  y_10 :
  Tpop();
  Epopd(4,0);
  Cpop();
  goto u_10;
  v_10 :
  BuildVard(3,3);
  MatchVard(3,4);
  u_10 :
  Tpop();
  Epushd(4,1);
  Epushd(5,1);
  BuildFun("TNil",0);
  BuildVard(1,4);
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  Rpush(z_10);
  goto e_29;
  z_10 :
  MatchVard(4,1);
  BuildVard(3,4);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("SDef",3);
  Epopd(4,1);
  Epopd(3,4);
  OneNextSon();
  Rpush(a_11);
  goto a_7;
  a_11 :
  AllBuild();
  r_10 :
  Return();
  q_10 :
  Epopd(2,0);
  MatchVard(1,6);
  Tpop();
  BuildVard(1,6);
  Epopd(1,6);
  Epopd(0,0);
  Return();
  n_28 :
  Epushd(0,0);
  Cpush(c_11);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  OneNextSon();
  AllBuild();
  Cpop();
  goto b_11;
  c_11 :
  Cpush(e_11);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Cpush(i_11);
  Tdupl();
  MatchString("main");
  Cpop();
  Crestore();
  Cjump();
  i_11 :
  OneNextSon();
  Rpush(q_11);
  goto p_27;
  q_11 :
  OneNextSon();
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
  AllBuild();
  Cpop();
  goto d_11;
  e_11 :
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Cpush(r_11);
  Tdupl();
  MatchString("main");
  Cpop();
  Crestore();
  Cjump();
  r_11 :
  OneNextSon();
  Rpush(s_11);
  goto p_27;
  s_11 :
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
  OneNextSon();
  AllBuild();
  AllBuild();
  OneNextSon();
  AllBuild();
  AllBuild();
  d_11 :
  b_11 :
  Epopd(0,0);
  Return();
  s_28 :
  Epushd(0,0);
  Rpush(t_11);
  m_38 :
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
  Epushd(2,1);
  BuildVard(1,1);
  AllInit();
  w_11 :
  AllNextSon(&&z_11);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Rpush(f_12);
  goto m_38;
  f_12 :
  Epushd(3,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,2);
  Tpop();
  Arg(1);
  MatchVard(3,1);
  Tpop();
  BuildVard(3,2);
  Epopd(3,2);
  goto w_11;
  z_11 :
  AllBuild();
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Cpush(h_12);
  Epushd(2,0);
  Rpush(i_12);
  b_8 :
  Rpush(j_12);
  goto t_28;
  j_12 :
  Cpush(l_12);
  Rpush(m_12);
  goto b_8;
  m_12 :
  Cpop();
  goto k_12;
  l_12 :
  k_12 :
  Return();
  i_12 :
  Epopd(2,0);
  Rpush(n_12);
  goto m_38;
  n_12 :
  Cpop();
  goto g_12;
  h_12 :
  g_12 :
  Epopd(1,2);
  Return();
  t_11 :
  Epopd(0,0);
  Return();
  t_28 :
  Cpush(e_13);
  Epushd(0,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Call",2);
  Arg(0);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,1);
  Rpush(k_13);
  goto b_29;
  k_13 :
  MatchVard(0,3);
  BuildVard(0,6);
  Epushd(1,0);
  Tdupl();
  l_13 :
  MatchFun("Cons",2);
  Cpush(m_13);
  Arg(0);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  OneNextSon();
  Tdupl();
  Rpush(o_13);
  goto b_29;
  o_13 :
  MatchVard(0,3);
  Tpop();
  MatchVard(0,4);
  OneNextSon();
  MatchVard(0,5);
  AllBuild();
  Tpop();
  Cpop();
  goto n_13;
  m_13 :
  Arg(1);
  Tdrop();
  goto l_13;
  n_13 :
  Tpop();
  Epopd(1,0);
  Tpop();
  Epushd(1,1);
  BuildVard(0,5);
  Rpush(p_13);
  goto u_28;
  p_13 :
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(0,4);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(3,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(4,3);
  BuildVard(3,1);
  Tpush();
  BuildVard(3,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(5,0);
  Rpush(q_13);
  t_8 :
  Cpush(s_13);
  Epushd(6,0);
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
  Epopd(6,0);
  Cpop();
  goto r_13;
  s_13 :
  Epushd(6,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(6,2);
  Tpop();
  Arg(1);
  MatchVard(6,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(6,3);
  Tpush();
  BuildVard(6,4);
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
  Epopd(6,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(6,2);
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
  BuildVard(6,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("SDef",3);
  Epopd(6,2);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_13);
  goto t_8;
  t_13 :
  OneNextSon();
  Rpush(u_13);
  goto l_28;
  u_13 :
  AllBuild();
  AllBuild();
  Epushd(6,2);
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
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(6,2);
  r_13 :
  Return();
  q_13 :
  Epopd(5,0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,3);
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
  BuildVard(4,3);
  Epushd(5,0);
  Rpush(g_14);
  g_9 :
  Cpush(j_14);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_14);
  goto g_9;
  k_14 :
  AllBuild();
  Cpop();
  goto i_14;
  j_14 :
  Rpush(l_14);
  goto p_27;
  l_14 :
  BuildVard(4,2);
  i_14 :
  Return();
  g_14 :
  Epopd(5,0);
  Epopd(4,3);
  Epopd(3,3);
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Epopd(1,1);
  Epopd(0,6);
  Cpop();
  goto d_13;
  e_13 :
  Epushd(0,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Call",2);
  Arg(0);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,4);
  Epushd(1,0);
  Tdupl();
  m_14 :
  MatchFun("Cons",2);
  Cpush(n_14);
  Arg(0);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Arg(2);
  MatchFun("Call",2);
  Arg(0);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  Cpop();
  goto o_14;
  n_14 :
  Arg(1);
  Tdrop();
  goto m_14;
  o_14 :
  Tpop();
  Epopd(1,0);
  Tpop();
  BuildVard(0,3);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,4);
  d_13 :
  Return();
  u_28 :
  Epushd(0,0);
  Rpush(p_14);
  goto v_28;
  p_14 :
  Rpush(q_14);
  goto a_29;
  q_14 :
  Epopd(0,0);
  Return();
  v_28 :
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
  Rpush(r_14);
  j_9 :
  Epushd(1,0);
  Rpush(s_14);
  f_11 :
  Cpush(u_14);
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
  Rpush(v_14);
  goto w_28;
  v_14 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto t_14;
  u_14 :
  Cpush(z_14);
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
  Rpush(a_15);
  goto y_28;
  a_15 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(b_15);
  z_12 :
  Cpush(d_15);
  Rpush(e_15);
  goto p_27;
  e_15 :
  Cpop();
  goto c_15;
  d_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(f_15);
  goto x_28;
  f_15 :
  OneNextSon();
  Rpush(g_15);
  goto z_12;
  g_15 :
  AllBuild();
  c_15 :
  Return();
  b_15 :
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
  Rpush(h_15);
  a_13 :
  Cpush(j_15);
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
  goto i_15;
  j_15 :
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
  Rpush(k_15);
  goto a_13;
  k_15 :
  OneNextSon();
  Rpush(l_15);
  goto l_28;
  l_15 :
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
  i_15 :
  Return();
  h_15 :
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
  Rpush(m_15);
  b_13 :
  Cpush(o_15);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_15);
  goto b_13;
  p_15 :
  AllBuild();
  Cpop();
  goto n_15;
  o_15 :
  Rpush(q_15);
  goto p_27;
  q_15 :
  BuildVard(3,1);
  n_15 :
  Return();
  m_15 :
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
  Rpush(t_15);
  goto j_9;
  t_15 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto w_14;
  z_14 :
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
  u_15 :
  AllNextSon(&&v_15);
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
  Rpush(z_15);
  goto f_11;
  z_15 :
  Epopd(3,1);
  goto u_15;
  v_15 :
  AllBuild();
  Epopd(2,2);
  w_14 :
  t_14 :
  Return();
  s_14 :
  Epopd(1,0);
  Return();
  r_14 :
  Epopd(0,0);
  Return();
  w_28 :
  Epushd(0,0);
  Rpush(a_16);
  c_29 :
  Cpush(c_16);
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
  goto b_16;
  c_16 :
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
  Rpush(d_16);
  goto c_29;
  d_16 :
  b_16 :
  Return();
  a_16 :
  Epopd(0,0);
  Return();
  x_28 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  y_28 :
  Cpush(h_16);
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
  goto e_16;
  h_16 :
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
  Rpush(n_16);
  goto z_28;
  n_16 :
  Epopd(0,3);
  e_16 :
  Return();
  z_28 :
  Epushd(0,0);
  Rpush(p_16);
  x_14 :
  Cpush(s_16);
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
  goto q_16;
  s_16 :
  Cpush(u_16);
  Epushd(1,1);
  Tdupl();
  Rpush(v_16);
  goto y_28;
  v_16 :
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
  Rpush(w_16);
  goto x_14;
  w_16 :
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
  Rpush(x_16);
  o_16 :
  Cpush(b_17);
  Rpush(c_17);
  goto p_27;
  c_17 :
  Cpop();
  goto a_17;
  b_17 :
  Cpush(e_17);
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
  f_17 :
  MatchFun("Cons",2);
  Cpush(r_17);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto s_17;
  r_17 :
  Arg(1);
  Tdrop();
  goto f_17;
  s_17 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(t_17);
  goto o_16;
  t_17 :
  Cpop();
  goto d_17;
  e_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_17);
  goto o_16;
  u_17 :
  AllBuild();
  d_17 :
  a_17 :
  Return();
  x_16 :
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
  Rpush(v_17);
  k_17 :
  Cpush(a_18);
  Rpush(b_18);
  goto p_27;
  b_18 :
  BuildFun("Nil",0);
  Cpop();
  goto w_17;
  a_18 :
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
  Rpush(c_18);
  goto k_17;
  c_18 :
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
  Rpush(d_18);
  p_17 :
  Cpush(f_18);
  Rpush(o_18);
  goto p_27;
  o_18 :
  BuildVard(4,3);
  Cpop();
  goto e_18;
  f_18 :
  Cpush(w_18);
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
  z_18 :
  MatchFun("Cons",2);
  Cpush(a_19);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto b_19;
  a_19 :
  Arg(1);
  Tdrop();
  goto z_18;
  b_19 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(c_19);
  goto p_17;
  c_19 :
  Cpop();
  goto p_18;
  w_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_19);
  goto p_17;
  d_19 :
  AllBuild();
  p_18 :
  e_18 :
  Return();
  d_18 :
  Epopd(4,4);
  w_17 :
  Return();
  v_17 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto t_16;
  u_16 :
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
  Rpush(e_19);
  r_18 :
  Cpush(g_19);
  Rpush(h_19);
  goto p_27;
  h_19 :
  BuildFun("Nil",0);
  Cpop();
  goto f_19;
  g_19 :
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
  Rpush(i_19);
  goto x_14;
  i_19 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(j_19);
  goto r_18;
  j_19 :
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
  Rpush(k_19);
  x_18 :
  Cpush(m_19);
  Rpush(p_19);
  goto p_27;
  p_19 :
  BuildVard(3,3);
  Cpop();
  goto l_19;
  m_19 :
  Cpush(r_19);
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
  s_19 :
  MatchFun("Cons",2);
  Cpush(t_19);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto u_19;
  t_19 :
  Arg(1);
  Tdrop();
  goto s_19;
  u_19 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(v_19);
  goto x_18;
  v_19 :
  Cpop();
  goto q_19;
  r_19 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_19);
  goto x_18;
  w_19 :
  AllBuild();
  q_19 :
  l_19 :
  Return();
  k_19 :
  Epopd(3,4);
  f_19 :
  Return();
  e_19 :
  Epopd(2,0);
  Epopd(1,1);
  t_16 :
  q_16 :
  Return();
  p_16 :
  Epopd(0,0);
  Return();
  a_29 :
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
  Rpush(x_19);
  o_19 :
  Epushd(1,0);
  Rpush(y_19);
  c_24 :
  Cpush(a_20);
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
  Rpush(b_20);
  goto w_28;
  b_20 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto z_19;
  a_20 :
  Cpush(d_20);
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
  Cpush(f_20);
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
  goto e_20;
  f_20 :
  Cpush(h_20);
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
  goto g_20;
  h_20 :
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
  g_20 :
  e_20 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(i_20);
  z_25 :
  Cpush(k_20);
  Rpush(l_20);
  goto p_27;
  l_20 :
  Cpop();
  goto j_20;
  k_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(m_20);
  goto x_28;
  m_20 :
  OneNextSon();
  Rpush(n_20);
  goto z_25;
  n_20 :
  AllBuild();
  j_20 :
  Return();
  i_20 :
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
  Rpush(o_20);
  a_26 :
  Cpush(q_20);
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
  goto p_20;
  q_20 :
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
  Rpush(r_20);
  goto a_26;
  r_20 :
  OneNextSon();
  Rpush(s_20);
  goto l_28;
  s_20 :
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
  p_20 :
  Return();
  o_20 :
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
  Rpush(t_20);
  b_26 :
  Cpush(v_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_20);
  goto b_26;
  w_20 :
  AllBuild();
  Cpop();
  goto u_20;
  v_20 :
  Rpush(x_20);
  goto p_27;
  x_20 :
  BuildVard(3,1);
  u_20 :
  Return();
  t_20 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Cpush(z_20);
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
  goto y_20;
  z_20 :
  Cpush(b_21);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
  Cpop();
  goto a_21;
  b_21 :
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
  a_21 :
  y_20 :
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
  Cpush(d_21);
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
  Rpush(e_21);
  goto o_19;
  e_21 :
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
  Rpush(f_21);
  goto o_19;
  f_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto c_21;
  d_21 :
  Cpush(h_21);
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
  Rpush(i_21);
  goto o_19;
  i_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto g_21;
  h_21 :
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
  Rpush(j_21);
  goto o_19;
  j_21 :
  Epopd(4,1);
  AllBuild();
  g_21 :
  c_21 :
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto c_20;
  d_20 :
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
  k_21 :
  AllNextSon(&&l_21);
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
  Rpush(m_21);
  goto c_24;
  m_21 :
  Epopd(3,1);
  goto k_21;
  l_21 :
  AllBuild();
  Epopd(2,2);
  c_20 :
  z_19 :
  Return();
  y_19 :
  Epopd(1,0);
  Return();
  x_19 :
  Epopd(0,0);
  Return();
  b_29 :
  Epushd(0,0);
  Rpush(n_21);
  b_32 :
  Cpush(p_21);
  Rpush(q_21);
  goto p_27;
  q_21 :
  BuildInt(0);
  Cpop();
  goto o_21;
  p_21 :
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
  Rpush(r_21);
  goto b_32;
  r_21 :
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
  Rpush(s_21);
  goto d_29;
  s_21 :
  Epopd(1,1);
  o_21 :
  Return();
  n_21 :
  Epopd(0,0);
  Return();
  d_29 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  e_29 :
  Epushd(0,2);
  Rpush(t_21);
  goto f_29;
  t_21 :
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
  Rpush(u_21);
  u_26 :
  Cpush(w_21);
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
  Rpush(x_21);
  goto w_28;
  x_21 :
  Epopd(2,3);
  Cpop();
  goto v_21;
  w_21 :
  AllInit();
  y_21 :
  AllNextSon(&&z_21);
  Rpush(a_22);
  goto u_26;
  a_22 :
  goto y_21;
  z_21 :
  AllBuild();
  v_21 :
  Return();
  u_21 :
  Epopd(1,0);
  Epopd(0,2);
  Return();
  f_29 :
  Epushd(0,2);
  Cpush(c_22);
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
  goto b_22;
  c_22 :
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
  Rpush(d_22);
  h_27 :
  Cpush(f_22);
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
  goto e_22;
  f_22 :
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
  Rpush(g_22);
  goto h_27;
  g_22 :
  OneNextSon();
  Rpush(h_22);
  goto l_28;
  h_22 :
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
  e_22 :
  Return();
  d_22 :
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
  b_22 :
  Epopd(0,2);
  Return();
  i_22 :
DOIT_END
