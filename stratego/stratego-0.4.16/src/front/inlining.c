#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(b_22);
  goto main;
  main :
  Epushd(0,0);
  Rpush(w_2);
  goto f_27;
  w_2 :
  Epopd(0,0);
  Return();
  f_27 :
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
  goto g_27;
  c_3 :
  Cpop();
  goto a_3;
  b_3 :
  Rpush(d_3);
  goto h_27;
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
  goto i_27;
  k_3 :
  Cpop();
  goto f_3;
  g_3 :
  Cpush(m_3);
  Rpush(o_3);
  goto n_27;
  o_3 :
  Epushd(1,1);
  Tdupl();
  Rpush(p_3);
  goto p_27;
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
  goto a_28;
  q_3 :
  OneNextSon();
  Rpush(r_3);
  goto z_27;
  r_3 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(s_3);
  goto p_27;
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
  goto q_27;
  t_3 :
  Rpush(a_4);
  goto x_27;
  a_4 :
  Cpop();
  goto l_3;
  m_3 :
  Rpush(b_4);
  goto y_27;
  b_4 :
  l_3 :
  f_3 :
  Epopd(0,0);
  Return();
  g_27 :
  MatchFun("Nil",0);
  Return();
  h_27 :
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
  Cpush(r_4);
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
  goto q_4;
  r_4 :
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
  goto s_4;
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
  goto c_5;
  d_5 :
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
  Cpush(k_5);
  Rpush(l_5);
  goto a_0;
  l_5 :
  Cpop();
  goto j_5;
  k_5 :
  Cpush(u_5);
  Rpush(v_5);
  goto b_0;
  v_5 :
  Cpop();
  goto m_5;
  u_5 :
  Cpush(y_5);
  Rpush(z_5);
  goto c_0;
  z_5 :
  Cpop();
  goto x_5;
  y_5 :
  Cpush(b_6);
  Rpush(c_6);
  goto d_0;
  c_6 :
  Cpop();
  goto a_6;
  b_6 :
  Rpush(e_6);
  goto u_2;
  e_6 :
  a_6 :
  x_5 :
  m_5 :
  j_5 :
  goto i_5;
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
  i_5 :
  goto h_5;
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
  h_5 :
  goto g_5;
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
  g_5 :
  goto f_5;
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
  f_5 :
  goto e_5;
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
  e_5 :
  Epopd(1,10);
  c_5 :
  s_4 :
  q_4 :
  o_4 :
  m_4 :
  k_4 :
  i_4 :
  g_4 :
  e_4 :
  c_4 :
  Epopd(0,0);
  Return();
  i_27 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  f_6 :
  MatchFun("Cons",2);
  Cpush(j_6);
  Arg(0);
  Cpush(m_6);
  Rpush(n_6);
  goto j_27;
  n_6 :
  Cpop();
  goto l_6;
  m_6 :
  MatchFun("Undefined",1);
  l_6 :
  Tpop();
  Cpop();
  goto k_6;
  j_6 :
  Arg(1);
  Tdrop();
  goto f_6;
  k_6 :
  Tpop();
  Epopd(1,0);
  Rpush(o_6);
  goto k_27;
  o_6 :
  Epopd(0,0);
  Return();
  j_27 :
  MatchFun("Help",0);
  Return();
  k_27 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  p_6 :
  MatchFun("Cons",2);
  Cpush(r_6);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto s_6;
  r_6 :
  Arg(1);
  Tdrop();
  goto p_6;
  s_6 :
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
  goto l_27;
  u_6 :
  BuildInt(1);
  Rpush(v_6);
  goto m_27;
  v_6 :
  Tpop();
  Epopd(0,1);
  Return();
  l_27 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  m_27 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  n_27 :
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
  goto a_7;
  z_6 :
  Arg(1);
  Tdrop();
  goto y_6;
  a_7 :
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
  Rpush(b_7);
  goto o_27;
  b_7 :
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
  o_27 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  p_27 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  q_27 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(d_7);
  Epushd(1,0);
  Tdupl();
  e_7 :
  MatchFun("Cons",2);
  Cpush(f_7);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto g_7;
  f_7 :
  Arg(1);
  Tdrop();
  goto e_7;
  g_7 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto c_7;
  d_7 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  c_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_7);
  goto z_27;
  h_7 :
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
  Rpush(i_7);
  goto z_27;
  i_7 :
  AllBuild();
  AllBuild();
  Cpush(k_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  l_7 :
  MatchFun("Cons",2);
  Cpush(m_7);
  Arg(0);
  MatchFun("Binary",0);
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_7);
  goto r_27;
  o_7 :
  OneNextSon();
  Rpush(q_7);
  goto z_27;
  q_7 :
  AllBuild();
  AllBuild();
  Cpop();
  goto j_7;
  k_7 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(r_7);
  goto s_27;
  r_7 :
  OneNextSon();
  Rpush(s_7);
  goto z_27;
  s_7 :
  AllBuild();
  AllBuild();
  j_7 :
  Epopd(0,1);
  Return();
  r_27 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  s_27 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  x_27 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(u_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(v_7);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  w_7 :
  MatchFun("Cons",2);
  Cpush(x_7);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto y_7;
  x_7 :
  Arg(1);
  Tdrop();
  goto w_7;
  y_7 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  v_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_7);
  goto z_27;
  z_7 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  a_8 :
  MatchFun("Cons",2);
  Cpush(b_8);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto c_8;
  b_8 :
  Arg(1);
  Tdrop();
  goto a_8;
  c_8 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_8);
  goto z_27;
  d_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  w_8 :
  MatchFun("Cons",2);
  Cpush(d_9);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto e_9;
  d_9 :
  Arg(1);
  Tdrop();
  goto w_8;
  e_9 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto z_27;
  f_9 :
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
  Rpush(g_9);
  goto l_27;
  g_9 :
  Cpop();
  goto t_7;
  u_7 :
  t_7 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(h_9);
  goto m_27;
  h_9 :
  Epopd(0,2);
  Return();
  y_27 :
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
  Rpush(i_9);
  goto l_27;
  i_9 :
  BuildInt(1);
  Rpush(j_9);
  goto m_27;
  j_9 :
  Epopd(0,0);
  Return();
  z_27 :
  MatchFun("TNil",0);
  Return();
  a_28 :
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
  Cpush(l_9);
  k_9 :
  Cpush(n_9);
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
  Rpush(o_9);
  goto b_28;
  o_9 :
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
  goto m_9;
  n_9 :
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
  m_9 :
  Tduplinv();
  goto k_9;
  l_9 :
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
  Rpush(p_9);
  goto c_28;
  p_9 :
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
  Rpush(q_9);
  w_5 :
  Cpush(x_9);
  Rpush(e_10);
  goto g_27;
  e_10 :
  Cpop();
  goto w_9;
  x_9 :
  Cpush(k_10);
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
  Cpush(l_10);
  Tdupl();
  BuildVard(3,1);
  MatchString("main");
  Cpop();
  Crestore();
  Cjump();
  l_10 :
  Tpop();
  Epushd(4,1);
  BuildFun("TNil",0);
  Rpush(m_10);
  goto i_28;
  m_10 :
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
  Rpush(n_10);
  goto w_5;
  n_10 :
  AllBuild();
  Cpop();
  goto f_10;
  k_10 :
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
  Rpush(o_10);
  goto w_5;
  o_10 :
  f_10 :
  w_9 :
  Return();
  q_9 :
  Epopd(2,0);
  MatchVard(1,3);
  BuildVard(1,3);
  Epushd(2,0);
  Rpush(p_10);
  q_6 :
  Cpush(r_10);
  Rpush(s_10);
  goto g_27;
  s_10 :
  Cpop();
  goto q_10;
  r_10 :
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
  Rpush(t_10);
  goto z_27;
  t_10 :
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(u_10);
  goto q_6;
  u_10 :
  AllBuild();
  q_10 :
  Return();
  p_10 :
  Epopd(2,0);
  MatchVard(1,4);
  BuildVard(1,5);
  Epushd(2,0);
  Rpush(v_10);
  p_7 :
  Cpush(x_10);
  Rpush(y_10);
  goto g_27;
  y_10 :
  Cpop();
  goto w_10;
  x_10 :
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
  Cpush(a_11);
  BuildVard(1,3);
  Epushd(4,0);
  Tdupl();
  b_11 :
  MatchFun("Cons",2);
  Cpush(c_11);
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
  goto d_11;
  c_11 :
  Arg(1);
  Tdrop();
  goto b_11;
  d_11 :
  Tpop();
  Epopd(4,0);
  Cpop();
  goto z_10;
  a_11 :
  BuildVard(3,3);
  MatchVard(3,4);
  z_10 :
  Tpop();
  Epushd(4,1);
  BuildVard(3,2);
  Epushd(5,1);
  Tdupl();
  BuildVard(1,4);
  MatchVard(5,1);
  Tpop();
  Epushd(6,0);
  Rpush(e_11);
  o_8 :
  Cpush(g_11);
  Epushd(7,2);
  MatchFun("Call",2);
  Arg(0);
  MatchFun("SVar",1);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  BuildVard(7,1);
  Epushd(8,1);
  MatchVard(8,1);
  Tdupl();
  BuildVard(5,1);
  Epushd(9,0);
  Tdupl();
  h_11 :
  MatchFun("Cons",2);
  Cpush(i_11);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,1);
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
  Tpop();
  Cpop();
  goto j_11;
  i_11 :
  Arg(1);
  Tdrop();
  goto h_11;
  j_11 :
  Tpop();
  Epopd(9,0);
  Tpop();
  BuildVard(7,2);
  Epopd(8,1);
  Epopd(7,2);
  Cpop();
  goto f_11;
  g_11 :
  AllInit();
  k_11 :
  AllNextSon(&&l_11);
  Rpush(m_11);
  goto o_8;
  m_11 :
  goto k_11;
  l_11 :
  AllBuild();
  f_11 :
  Return();
  e_11 :
  Epopd(6,0);
  Epopd(5,1);
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
  Rpush(n_11);
  goto p_7;
  n_11 :
  AllBuild();
  w_10 :
  Return();
  v_10 :
  Epopd(2,0);
  MatchVard(1,6);
  Tpop();
  BuildVard(1,6);
  Epopd(1,6);
  Epopd(0,0);
  Return();
  b_28 :
  Epushd(0,0);
  Cpush(p_11);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  OneNextSon();
  AllBuild();
  Cpop();
  goto o_11;
  p_11 :
  Cpush(r_11);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Cpush(s_11);
  Tdupl();
  MatchString("main");
  Cpop();
  Crestore();
  Cjump();
  s_11 :
  OneNextSon();
  Rpush(t_11);
  goto g_27;
  t_11 :
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
  goto q_11;
  r_11 :
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  Cpush(u_11);
  Tdupl();
  MatchString("main");
  Cpop();
  Crestore();
  Cjump();
  u_11 :
  OneNextSon();
  Rpush(v_11);
  goto g_27;
  v_11 :
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
  q_11 :
  o_11 :
  Epopd(0,0);
  Return();
  c_28 :
  Epushd(0,0);
  Rpush(b_12);
  d_37 :
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
  c_12 :
  AllNextSon(&&d_12);
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
  Rpush(e_12);
  goto d_37;
  e_12 :
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
  goto c_12;
  d_12 :
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
  Cpush(g_12);
  Epushd(2,0);
  Rpush(h_12);
  x_8 :
  Rpush(i_12);
  goto d_28;
  i_12 :
  Cpush(k_12);
  Rpush(l_12);
  goto x_8;
  l_12 :
  Cpop();
  goto j_12;
  k_12 :
  j_12 :
  Return();
  h_12 :
  Epopd(2,0);
  Rpush(m_12);
  goto d_37;
  m_12 :
  Cpop();
  goto f_12;
  g_12 :
  f_12 :
  Epopd(1,2);
  Return();
  b_12 :
  Epopd(0,0);
  Return();
  d_28 :
  Cpush(o_12);
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
  Rpush(p_12);
  goto m_28;
  p_12 :
  MatchVard(0,3);
  BuildVard(0,6);
  Epushd(1,0);
  Tdupl();
  q_12 :
  MatchFun("Cons",2);
  Cpush(z_12);
  Arg(0);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  OneNextSon();
  Tdupl();
  Rpush(g_13);
  goto m_28;
  g_13 :
  MatchVard(0,3);
  Tpop();
  MatchVard(0,4);
  OneNextSon();
  MatchVard(0,5);
  AllBuild();
  Tpop();
  Cpop();
  goto a_13;
  z_12 :
  Arg(1);
  Tdrop();
  goto q_12;
  a_13 :
  Tpop();
  Epopd(1,0);
  Tpop();
  Epushd(1,1);
  BuildVard(0,5);
  Rpush(h_13);
  goto e_28;
  h_13 :
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
  Rpush(i_13);
  r_9 :
  Cpush(k_13);
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
  goto j_13;
  k_13 :
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
  Rpush(l_13);
  goto r_9;
  l_13 :
  OneNextSon();
  Rpush(m_13);
  goto z_27;
  m_13 :
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
  j_13 :
  Return();
  i_13 :
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
  Rpush(n_13);
  g_10 :
  Cpush(p_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_13);
  goto g_10;
  q_13 :
  AllBuild();
  Cpop();
  goto o_13;
  p_13 :
  Rpush(e_14);
  goto g_27;
  e_14 :
  BuildVard(4,2);
  o_13 :
  Return();
  n_13 :
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
  goto n_12;
  o_12 :
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
  f_14 :
  MatchFun("Cons",2);
  Cpush(g_14);
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
  goto h_14;
  g_14 :
  Arg(1);
  Tdrop();
  goto f_14;
  h_14 :
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
  n_12 :
  Return();
  e_28 :
  Epushd(0,0);
  Rpush(i_14);
  goto f_28;
  i_14 :
  Rpush(j_14);
  goto l_28;
  j_14 :
  Epopd(0,0);
  Return();
  f_28 :
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
  Rpush(k_14);
  j_10 :
  Epushd(1,0);
  Rpush(l_14);
  r_12 :
  Cpush(n_14);
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
  Rpush(o_14);
  goto g_28;
  o_14 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto m_14;
  n_14 :
  Cpush(q_14);
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
  Rpush(r_14);
  goto j_28;
  r_14 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(s_14);
  c_15 :
  Cpush(i_15);
  Rpush(j_15);
  goto g_27;
  j_15 :
  Cpop();
  goto h_15;
  i_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(k_15);
  goto i_28;
  k_15 :
  OneNextSon();
  Rpush(l_15);
  goto c_15;
  l_15 :
  AllBuild();
  h_15 :
  Return();
  s_14 :
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
  Rpush(m_15);
  d_15 :
  Cpush(q_15);
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
  goto p_15;
  q_15 :
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
  Rpush(r_15);
  goto d_15;
  r_15 :
  OneNextSon();
  Rpush(a_16);
  goto z_27;
  a_16 :
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
  p_15 :
  Return();
  m_15 :
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
  Rpush(c_16);
  e_15 :
  Cpush(g_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_16);
  goto e_15;
  h_16 :
  AllBuild();
  Cpop();
  goto f_16;
  g_16 :
  Rpush(i_16);
  goto g_27;
  i_16 :
  BuildVard(3,1);
  f_16 :
  Return();
  c_16 :
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
  Rpush(j_16);
  goto j_10;
  j_16 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto p_14;
  q_14 :
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
  k_16 :
  AllNextSon(&&l_16);
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
  Rpush(m_16);
  goto r_12;
  m_16 :
  Epopd(3,1);
  goto k_16;
  l_16 :
  AllBuild();
  Epopd(2,2);
  p_14 :
  m_14 :
  Return();
  l_14 :
  Epopd(1,0);
  Return();
  k_14 :
  Epopd(0,0);
  Return();
  g_28 :
  Epushd(0,0);
  Rpush(n_16);
  h_28 :
  Cpush(p_16);
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
  goto o_16;
  p_16 :
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
  Rpush(q_16);
  goto h_28;
  q_16 :
  o_16 :
  Return();
  n_16 :
  Epopd(0,0);
  Return();
  i_28 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  j_28 :
  Cpush(s_16);
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
  goto r_16;
  s_16 :
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
  Rpush(t_16);
  goto k_28;
  t_16 :
  Epopd(0,3);
  r_16 :
  Return();
  k_28 :
  Epushd(0,0);
  Rpush(u_16);
  d_16 :
  Cpush(w_16);
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
  goto v_16;
  w_16 :
  Cpush(y_16);
  Epushd(1,1);
  Tdupl();
  Rpush(z_16);
  goto j_28;
  z_16 :
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
  Rpush(j_17);
  goto d_16;
  j_17 :
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
  Rpush(k_17);
  h_17 :
  Cpush(m_17);
  Rpush(o_17);
  goto g_27;
  o_17 :
  Cpop();
  goto l_17;
  m_17 :
  Cpush(s_17);
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
  t_17 :
  MatchFun("Cons",2);
  Cpush(u_17);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto v_17;
  u_17 :
  Arg(1);
  Tdrop();
  goto t_17;
  v_17 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(w_17);
  goto h_17;
  w_17 :
  Cpop();
  goto p_17;
  s_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_17);
  goto h_17;
  x_17 :
  AllBuild();
  p_17 :
  l_17 :
  Return();
  k_17 :
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
  Rpush(y_17);
  f_18 :
  Cpush(a_18);
  Rpush(m_18);
  goto g_27;
  m_18 :
  BuildFun("Nil",0);
  Cpop();
  goto z_17;
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
  Rpush(n_18);
  goto f_18;
  n_18 :
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
  Rpush(o_18);
  k_18 :
  Cpush(q_18);
  Rpush(r_18);
  goto g_27;
  r_18 :
  BuildVard(4,3);
  Cpop();
  goto p_18;
  q_18 :
  Cpush(u_18);
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
  v_18 :
  MatchFun("Cons",2);
  Cpush(x_18);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto y_18;
  x_18 :
  Arg(1);
  Tdrop();
  goto v_18;
  y_18 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(z_18);
  goto k_18;
  z_18 :
  Cpop();
  goto s_18;
  u_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_19);
  goto k_18;
  a_19 :
  AllBuild();
  s_18 :
  p_18 :
  Return();
  o_18 :
  Epopd(4,4);
  z_17 :
  Return();
  y_17 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto x_16;
  y_16 :
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
  Rpush(b_19);
  m_19 :
  Cpush(d_19);
  Rpush(e_19);
  goto g_27;
  e_19 :
  BuildFun("Nil",0);
  Cpop();
  goto c_19;
  d_19 :
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
  Rpush(f_19);
  goto d_16;
  f_19 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(i_19);
  goto m_19;
  i_19 :
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
  Rpush(j_19);
  z_19 :
  Cpush(p_19);
  Rpush(q_19);
  goto g_27;
  q_19 :
  BuildVard(3,3);
  Cpop();
  goto o_19;
  p_19 :
  Cpush(s_19);
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
  t_19 :
  MatchFun("Cons",2);
  Cpush(u_19);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto v_19;
  u_19 :
  Arg(1);
  Tdrop();
  goto t_19;
  v_19 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(b_20);
  goto z_19;
  b_20 :
  Cpop();
  goto r_19;
  s_19 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_20);
  goto z_19;
  c_20 :
  AllBuild();
  r_19 :
  o_19 :
  Return();
  j_19 :
  Epopd(3,4);
  c_19 :
  Return();
  b_19 :
  Epopd(2,0);
  Epopd(1,1);
  x_16 :
  v_16 :
  Return();
  u_16 :
  Epopd(0,0);
  Return();
  l_28 :
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
  Rpush(d_20);
  o_20 :
  Epushd(1,0);
  Rpush(e_20);
  n_24 :
  Cpush(g_20);
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
  Rpush(h_20);
  goto g_28;
  h_20 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto f_20;
  g_20 :
  Cpush(j_20);
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
  Cpush(l_20);
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
  goto k_20;
  l_20 :
  Cpush(p_20);
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
  goto m_20;
  p_20 :
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
  m_20 :
  k_20 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(q_20);
  o_26 :
  Cpush(s_20);
  Rpush(t_20);
  goto g_27;
  t_20 :
  Cpop();
  goto r_20;
  s_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(u_20);
  goto i_28;
  u_20 :
  OneNextSon();
  Rpush(v_20);
  goto o_26;
  v_20 :
  AllBuild();
  r_20 :
  Return();
  q_20 :
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
  Rpush(w_20);
  p_26 :
  Cpush(y_20);
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
  goto x_20;
  y_20 :
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
  Rpush(z_20);
  goto p_26;
  z_20 :
  OneNextSon();
  Rpush(a_21);
  goto z_27;
  a_21 :
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
  x_20 :
  Return();
  w_20 :
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
  Rpush(b_21);
  s_26 :
  Cpush(d_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_21);
  goto s_26;
  e_21 :
  AllBuild();
  Cpop();
  goto c_21;
  d_21 :
  Rpush(f_21);
  goto g_27;
  f_21 :
  BuildVard(3,1);
  c_21 :
  Return();
  b_21 :
  Epopd(4,0);
  Epopd(3,2);
  MatchVard(2,5);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Epushd(4,0);
  Cpush(h_21);
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
  goto g_21;
  h_21 :
  Cpush(j_21);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  BuildVard(2,3);
  OneNextSon();
  AllBuild();
  Cpop();
  goto i_21;
  j_21 :
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
  i_21 :
  g_21 :
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
  Cpush(l_21);
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
  Rpush(m_21);
  goto o_20;
  m_21 :
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
  Rpush(n_21);
  goto o_20;
  n_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto k_21;
  l_21 :
  Cpush(p_21);
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
  Rpush(q_21);
  goto o_20;
  q_21 :
  Epopd(4,1);
  AllBuild();
  Cpop();
  goto o_21;
  p_21 :
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
  Rpush(r_21);
  goto o_20;
  r_21 :
  Epopd(4,1);
  AllBuild();
  o_21 :
  k_21 :
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto i_20;
  j_20 :
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
  s_21 :
  AllNextSon(&&t_21);
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
  Rpush(u_21);
  goto n_24;
  u_21 :
  Epopd(3,1);
  goto s_21;
  t_21 :
  AllBuild();
  Epopd(2,2);
  i_20 :
  f_20 :
  Return();
  e_20 :
  Epopd(1,0);
  Return();
  d_20 :
  Epopd(0,0);
  Return();
  m_28 :
  Epushd(0,0);
  Rpush(v_21);
  f_31 :
  Cpush(x_21);
  Rpush(y_21);
  goto g_27;
  y_21 :
  BuildInt(0);
  Cpop();
  goto w_21;
  x_21 :
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
  Rpush(z_21);
  goto f_31;
  z_21 :
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
  Rpush(a_22);
  goto o_28;
  a_22 :
  Epopd(1,1);
  w_21 :
  Return();
  v_21 :
  Epopd(0,0);
  Return();
  o_28 :
  Epushd(0,0);
  _ST_plus();
  Epopd(0,0);
  Return();
  b_22 :
DOIT_END
