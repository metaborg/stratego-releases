#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(g_46);
  goto main;
  main :
  Epushd(0,0);
  Rpush(m_3);
  goto w_98;
  m_3 :
  Epopd(0,0);
  Return();
  w_98 :
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
  Rpush(z_3);
  h_0 :
  Cpush(b_4);
  Cpush(d_4);
  Rpush(e_4);
  goto x_98;
  e_4 :
  Cpop();
  goto c_4;
  d_4 :
  Rpush(f_4);
  goto y_98;
  f_4 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_4);
  goto h_0;
  g_4 :
  AllBuild();
  c_4 :
  Cpop();
  goto a_4;
  b_4 :
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
  a_4 :
  Return();
  z_3 :
  AllBuild();
  Epopd(1,0);
  Cpush(i_4);
  Rpush(j_4);
  goto z_98;
  j_4 :
  Cpop();
  goto h_4;
  i_4 :
  Cpush(l_4);
  Rpush(m_4);
  goto e_99;
  m_4 :
  Epushd(1,1);
  Tdupl();
  Rpush(n_4);
  goto g_99;
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
  goto n_99;
  o_4 :
  OneNextSon();
  Rpush(p_4);
  goto m_99;
  p_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(q_4);
  goto g_99;
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
  goto h_99;
  r_4 :
  Rpush(s_4);
  goto k_99;
  s_4 :
  Cpop();
  goto k_4;
  l_4 :
  Rpush(t_4);
  goto l_99;
  t_4 :
  k_4 :
  h_4 :
  Epopd(0,0);
  Return();
  x_98 :
  MatchFun("Nil",0);
  Return();
  y_98 :
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
  Cpush(g_6);
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
  g_6 :
  Cpush(i_6);
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
  goto h_6;
  i_6 :
  Cpush(o_6);
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
  goto n_6;
  o_6 :
  Cpush(q_6);
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
  goto p_6;
  q_6 :
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
  Cpush(k_7);
  Rpush(l_7);
  goto a_0;
  l_7 :
  Cpop();
  goto a_7;
  k_7 :
  Cpush(n_7);
  Rpush(o_7);
  goto b_0;
  o_7 :
  Cpop();
  goto m_7;
  n_7 :
  Cpush(q_7);
  Rpush(w_7);
  goto c_0;
  w_7 :
  Cpop();
  goto p_7;
  q_7 :
  Cpush(y_7);
  Rpush(z_7);
  goto d_0;
  z_7 :
  Cpop();
  goto x_7;
  y_7 :
  Rpush(a_8);
  goto u_2;
  a_8 :
  x_7 :
  p_7 :
  m_7 :
  a_7 :
  goto z_6;
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
  z_6 :
  goto y_6;
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
  y_6 :
  goto x_6;
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
  x_6 :
  goto w_6;
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
  w_6 :
  goto v_6;
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
  v_6 :
  Epopd(1,10);
  p_6 :
  n_6 :
  h_6 :
  g_5 :
  e_5 :
  c_5 :
  a_5 :
  y_4 :
  w_4 :
  u_4 :
  Epopd(0,0);
  Return();
  z_98 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  b_8 :
  MatchFun("Cons",2);
  Cpush(c_8);
  Arg(0);
  Cpush(f_8);
  Rpush(g_8);
  goto a_99;
  g_8 :
  Cpop();
  goto e_8;
  f_8 :
  MatchFun("Undefined",1);
  e_8 :
  Tpop();
  Cpop();
  goto d_8;
  c_8 :
  Arg(1);
  Tdrop();
  goto b_8;
  d_8 :
  Tpop();
  Epopd(1,0);
  Rpush(h_8);
  goto b_99;
  h_8 :
  Epopd(0,0);
  Return();
  a_99 :
  MatchFun("Help",0);
  Return();
  b_99 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  i_8 :
  MatchFun("Cons",2);
  Cpush(j_8);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto k_8;
  j_8 :
  Arg(1);
  Tdrop();
  goto i_8;
  k_8 :
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
  Rpush(l_8);
  goto c_99;
  l_8 :
  BuildInt(1);
  Rpush(m_8);
  goto d_99;
  m_8 :
  Tpop();
  Epopd(0,1);
  Return();
  c_99 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  d_99 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  e_99 :
  Epushd(0,1);
  Cpush(o_8);
  Epushd(1,0);
  Tdupl();
  p_8 :
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
  goto p_8;
  y_8 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto n_8;
  o_8 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  n_8 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(z_8);
  goto f_99;
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
  f_99 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  g_99 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  h_99 :
  Epushd(0,1);
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
  goto m_99;
  f_9 :
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
  Rpush(g_9);
  goto m_99;
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
  goto i_99;
  m_9 :
  OneNextSon();
  Rpush(n_9);
  goto m_99;
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
  goto j_99;
  o_9 :
  OneNextSon();
  Rpush(p_9);
  goto m_99;
  p_9 :
  AllBuild();
  AllBuild();
  h_9 :
  Epopd(0,1);
  Return();
  i_99 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  j_99 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  k_99 :
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
  goto m_99;
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
  goto m_99;
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
  goto m_99;
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
  goto c_99;
  f_10 :
  Cpop();
  goto q_9;
  r_9 :
  q_9 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(g_10);
  goto d_99;
  g_10 :
  Epopd(0,2);
  Return();
  l_99 :
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
  goto c_99;
  h_10 :
  BuildInt(1);
  Rpush(i_10);
  goto d_99;
  i_10 :
  Epopd(0,0);
  Return();
  m_99 :
  MatchFun("TNil",0);
  Return();
  n_99 :
  Epushd(0,0);
  Rpush(j_10);
  goto o_99;
  j_10 :
  Tdupl();
  Rpush(k_10);
  goto z_99;
  k_10 :
  Tpop();
  Epushd(1,5);
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
  MatchFun("Overlays",1);
  Arg(0);
  MatchVard(1,4);
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
  Tpop();
  Tdupl();
  BuildVard(1,4);
  Epushd(2,0);
  Cpush(m_10);
  Tdupl();
  Cpush(n_10);
  Tdupl();
  BuildVard(1,4);
  MatchFun("Nil",0);
  Cpop();
  Crestore();
  Cjump();
  n_10 :
  Tpop();
  Epushd(3,0);
  Rpush(o_10);
  n_13 :
  Epushd(4,0);
  Cpush(q_10);
  p_10 :
  Epushd(5,4);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(5,2);
  Tpop();
  Tdupl();
  BuildVard(1,4);
  Epushd(6,0);
  Rpush(r_10);
  q_13 :
  Cpush(t_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(7,2);
  MatchFun("Overlay",3);
  Arg(0);
  MatchVard(5,1);
  Tpop();
  Arg(1);
  MatchVard(7,1);
  Tpop();
  Arg(2);
  MatchVard(7,2);
  Tpop();
  Epushd(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(5,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Rpush(u_10);
  r_13 :
  Cpush(w_10);
  Epushd(10,0);
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
  Epopd(10,0);
  Cpop();
  goto v_10;
  w_10 :
  Epushd(10,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchVard(10,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(10,3);
  Tpush();
  BuildVard(10,4);
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
  Epopd(10,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MatchVard(10,1);
  BuildVard(10,1);
  Tpush();
  BuildFun("Var",1);
  Epopd(10,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_10);
  goto m_99;
  x_10 :
  AllBuild();
  AllBuild();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(y_10);
  goto r_13;
  y_10 :
  OneNextSon();
  Rpush(z_10);
  goto m_99;
  z_10 :
  AllBuild();
  AllBuild();
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(10,2);
  v_10 :
  Return();
  u_10 :
  Epopd(9,0);
  MatchVard(8,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  Epopd(7,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(5,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  OneNextSon();
  AllBuild();
  Cpop();
  goto s_10;
  t_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_11);
  goto q_13;
  a_11 :
  AllBuild();
  s_10 :
  Return();
  r_10 :
  Epopd(6,0);
  Tpop();
  BuildVard(5,3);
  Tpush();
  BuildVard(5,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(b_11);
  goto r_100;
  b_11 :
  Epopd(5,4);
  Tduplinv();
  goto p_10;
  q_10 :
  Epopd(4,0);
  AllInit();
  c_11 :
  AllNextSon(&&d_11);
  Rpush(e_11);
  goto n_13;
  e_11 :
  goto c_11;
  d_11 :
  AllBuild();
  Return();
  o_10 :
  Epopd(3,0);
  Cpop();
  goto l_10;
  m_10 :
  l_10 :
  Epopd(2,0);
  MatchVard(1,5);
  Tpop();
  Epushd(2,1);
  BuildVard(1,2);
  Epushd(3,0);
  Cpush(g_11);
  Tdupl();
  Cpush(h_11);
  Tdupl();
  BuildVard(1,5);
  MatchFun("Nil",0);
  Cpop();
  Crestore();
  Cjump();
  h_11 :
  Tpop();
  Epushd(4,0);
  Rpush(i_11);
  a_19 :
  Epushd(5,0);
  Cpush(k_11);
  Epushd(6,4);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  BuildVard(1,5);
  Epushd(7,0);
  Rpush(l_11);
  b_19 :
  Cpush(n_11);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(8,2);
  MatchFun("Overlay",3);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(8,1);
  Tpop();
  Arg(2);
  MatchVard(8,2);
  Tpop();
  Epushd(9,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(10,0);
  Rpush(o_11);
  c_19 :
  Cpush(q_11);
  Epushd(11,0);
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
  Epopd(11,0);
  Cpop();
  goto p_11;
  q_11 :
  Epushd(11,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchVard(11,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Arg(1);
  MatchVard(11,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(11,1);
  Tpush();
  BuildVard(11,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(11,3);
  Tpush();
  BuildVard(11,4);
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
  Epopd(11,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(11,1);
  MatchVard(11,1);
  BuildVard(11,1);
  Tpush();
  BuildFun("Var",1);
  Epopd(11,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_11);
  goto m_99;
  r_11 :
  AllBuild();
  AllBuild();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_11);
  goto c_19;
  s_11 :
  OneNextSon();
  Rpush(t_11);
  goto m_99;
  t_11 :
  AllBuild();
  AllBuild();
  Epushd(11,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(11,1);
  Tpush();
  BuildVard(11,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(11,2);
  p_11 :
  Return();
  o_11 :
  Epopd(10,0);
  MatchVard(9,1);
  BuildVard(9,1);
  Tpush();
  BuildVard(8,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  OneNextSon();
  AllBuild();
  Cpop();
  goto m_11;
  n_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_11);
  goto b_19;
  u_11 :
  AllBuild();
  m_11 :
  Return();
  l_11 :
  Epopd(7,0);
  Tpop();
  BuildVard(6,3);
  Tpush();
  BuildVard(6,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(v_11);
  goto r_100;
  v_11 :
  Epopd(6,4);
  Cpop();
  goto j_11;
  k_11 :
  j_11 :
  Epopd(5,0);
  AllInit();
  w_11 :
  AllNextSon(&&x_11);
  Rpush(y_11);
  goto a_19;
  y_11 :
  goto w_11;
  x_11 :
  AllBuild();
  Return();
  i_11 :
  Epopd(4,0);
  Cpop();
  goto f_11;
  g_11 :
  f_11 :
  Epopd(3,0);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildVard(1,4);
  Epushd(5,0);
  Rpush(z_11);
  o_20 :
  Cpush(b_12);
  Rpush(c_12);
  goto x_98;
  c_12 :
  Cpop();
  goto a_12;
  b_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MatchFun("Overlay",3);
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
  Rpush(d_12);
  goto p_100;
  d_12 :
  MatchVard(7,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildFun("SDef",3);
  Epopd(7,1);
  Epopd(6,3);
  OneNextSon();
  Rpush(e_12);
  goto o_20;
  e_12 :
  AllBuild();
  a_12 :
  Return();
  z_11 :
  Epopd(5,0);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(1,3);
  Epushd(6,0);
  Cpush(g_12);
  Tdupl();
  Cpush(h_12);
  Tdupl();
  BuildVard(1,5);
  MatchFun("Nil",0);
  Cpop();
  Crestore();
  Cjump();
  h_12 :
  Tpop();
  Epushd(7,0);
  Rpush(i_12);
  s_26 :
  Epushd(8,0);
  Cpush(k_12);
  Epushd(9,4);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchVard(9,2);
  Tpop();
  Tdupl();
  BuildVard(1,5);
  Epushd(10,0);
  Rpush(l_12);
  w_26 :
  Cpush(n_12);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(11,2);
  MatchFun("Overlay",3);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchVard(11,1);
  Tpop();
  Arg(2);
  MatchVard(11,2);
  Tpop();
  Epushd(12,1);
  BuildVard(11,1);
  Tpush();
  BuildVard(9,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(13,0);
  Rpush(o_12);
  x_26 :
  Cpush(q_12);
  Epushd(14,0);
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
  Epopd(14,0);
  Cpop();
  goto p_12;
  q_12 :
  Epushd(14,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(14,1);
  Tpop();
  Arg(1);
  MatchVard(14,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(14,2);
  Tpop();
  Arg(1);
  MatchVard(14,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(14,1);
  Tpush();
  BuildVard(14,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(14,3);
  Tpush();
  BuildVard(14,4);
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
  Epopd(14,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(14,1);
  MatchVard(14,1);
  BuildVard(14,1);
  Tpush();
  BuildFun("Var",1);
  Epopd(14,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_12);
  goto m_99;
  r_12 :
  AllBuild();
  AllBuild();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_12);
  goto x_26;
  s_12 :
  OneNextSon();
  Rpush(t_12);
  goto m_99;
  t_12 :
  AllBuild();
  AllBuild();
  Epushd(14,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(14,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(14,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(14,1);
  Tpush();
  BuildVard(14,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(14,2);
  p_12 :
  Return();
  o_12 :
  Epopd(13,0);
  MatchVard(12,1);
  BuildVard(12,1);
  Tpush();
  BuildVard(11,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(12,1);
  Epopd(11,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  OneNextSon();
  AllBuild();
  Cpop();
  goto m_12;
  n_12 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_12);
  goto w_26;
  u_12 :
  AllBuild();
  m_12 :
  Return();
  l_12 :
  Epopd(10,0);
  Tpop();
  BuildVard(9,3);
  Tpush();
  BuildVard(9,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(v_12);
  goto r_100;
  v_12 :
  Epopd(9,4);
  Cpop();
  goto j_12;
  k_12 :
  j_12 :
  Epopd(8,0);
  AllInit();
  b_13 :
  AllNextSon(&&c_13);
  Rpush(d_13);
  goto s_26;
  d_13 :
  goto b_13;
  c_13 :
  AllBuild();
  Return();
  i_12 :
  Epopd(7,0);
  Cpop();
  goto f_12;
  g_12 :
  f_12 :
  Epopd(6,0);
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
  Rpush(o_13);
  c_27 :
  Cpush(t_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto c_27;
  u_13 :
  AllBuild();
  Cpop();
  goto s_13;
  t_13 :
  Rpush(v_13);
  goto x_98;
  v_13 :
  BuildVard(4,1);
  s_13 :
  Return();
  o_13 :
  Epopd(5,0);
  Epopd(4,2);
  MatchVard(3,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Signature",1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Specification",1);
  Epopd(3,1);
  Epopd(2,1);
  Cpush(x_13);
  Epushd(2,3);
  MatchFun("Specification",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Signature",1);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Operations",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Rules",1);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("Strategies",1);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(3,0);
  Rpush(y_13);
  h_57 :
  Cpush(a_14);
  Rpush(b_14);
  goto x_98;
  b_14 :
  Cpop();
  goto z_13;
  a_14 :
  Cpush(d_14);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(f_14);
  Epushd(4,4);
  MatchFun("RDef",3);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Arg(2);
  MatchVard(4,4);
  Tpop();
  Tdupl();
  BuildStr("warning: in rule ");
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildStr(": ");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(g_14);
  goto u_100;
  g_14 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(h_14);
  i_57 :
  Cpush(j_14);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(k_14);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(l_14);
  j_57 :
  Cpush(n_14);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(p_14);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto o_14;
  p_14 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  o_14 :
  AllBuild();
  BuildVard(6,2);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Rpush(q_14);
  k_57 :
  Cpush(s_14);
  Epushd(10,0);
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
  Epopd(10,0);
  Cpop();
  goto r_14;
  s_14 :
  Epushd(10,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchVard(10,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(10,3);
  Tpush();
  BuildVard(10,4);
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
  Epopd(10,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_14);
  goto k_57;
  t_14 :
  OneNextSon();
  Rpush(u_14);
  goto m_99;
  u_14 :
  AllBuild();
  AllBuild();
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(10,2);
  r_14 :
  Return();
  q_14 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto m_14;
  n_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_14);
  goto j_57;
  v_14 :
  AllBuild();
  m_14 :
  Return();
  l_14 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  k_14 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(w_14);
  goto x_100;
  w_14 :
  Rpush(x_14);
  goto z_100;
  x_14 :
  MatchVard(7,1);
  BuildStr("constructor ");
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildStr(" not declared");
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
  Epopd(7,1);
  Rpush(y_14);
  goto u_100;
  y_14 :
  Epushd(7,0);
  Tdupl();
  Epushd(8,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(8,1);
  BuildFun("stderr",0);
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,1);
  Epushd(11,1);
  MatchVard(11,1);
  Epushd(12,1);
  BuildFun("TNil",0);
  BuildVard(4,3);
  MatchVard(12,1);
  BuildVard(12,1);
  Tpush();
  BuildVard(11,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(12,1);
  Epopd(11,1);
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
  Epopd(8,1);
  Rpush(z_14);
  goto c_99;
  z_14 :
  Tpop();
  Epopd(7,0);
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("Op",2);
  Epopd(6,2);
  AllInit();
  a_15 :
  AllNextSon(&&b_15);
  Epushd(6,0);
  Cpush(d_15);
  Rpush(e_15);
  goto i_57;
  e_15 :
  Cpop();
  goto c_15;
  d_15 :
  c_15 :
  Epopd(6,0);
  goto a_15;
  b_15 :
  AllBuild();
  Cpop();
  goto i_14;
  j_14 :
  IsAppl();
  SomeInit();
  f_15 :
  SomeNextSon(&&g_15);
  Cpush(f_15);
  Rpush(h_15);
  goto i_57;
  h_15 :
  Cpop();
  CounterOK();
  goto f_15;
  g_15 :
  SomeBuild();
  i_14 :
  Return();
  h_14 :
  Epopd(5,0);
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildFun("RDef",3);
  Epopd(4,4);
  Cpop();
  goto e_14;
  f_14 :
  Epushd(4,4);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Arg(2);
  MatchVard(4,4);
  Tpop();
  Tdupl();
  BuildStr("warning: in definition ");
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildStr(": ");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(i_15);
  goto u_100;
  i_15 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(j_15);
  l_57 :
  Cpush(l_15);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(m_15);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(n_15);
  m_57 :
  Cpush(p_15);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(r_15);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto q_15;
  r_15 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  q_15 :
  AllBuild();
  BuildVard(6,2);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Rpush(s_15);
  n_57 :
  Cpush(u_15);
  Epushd(10,0);
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
  Epopd(10,0);
  Cpop();
  goto t_15;
  u_15 :
  Epushd(10,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchVard(10,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(10,3);
  Tpush();
  BuildVard(10,4);
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
  Epopd(10,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(v_15);
  goto n_57;
  v_15 :
  OneNextSon();
  Rpush(w_15);
  goto m_99;
  w_15 :
  AllBuild();
  AllBuild();
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(10,2);
  t_15 :
  Return();
  s_15 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto o_15;
  p_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_15);
  goto m_57;
  x_15 :
  AllBuild();
  o_15 :
  Return();
  n_15 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  m_15 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(y_15);
  goto x_100;
  y_15 :
  Rpush(z_15);
  goto z_100;
  z_15 :
  MatchVard(7,1);
  BuildStr("constructor ");
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildStr(" not declared");
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
  Epopd(7,1);
  Rpush(a_16);
  goto u_100;
  a_16 :
  Epushd(7,0);
  Tdupl();
  Epushd(8,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(8,1);
  BuildFun("stderr",0);
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,1);
  Epushd(11,1);
  MatchVard(11,1);
  Epushd(12,1);
  BuildFun("TNil",0);
  BuildVard(4,3);
  MatchVard(12,1);
  BuildVard(12,1);
  Tpush();
  BuildVard(11,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(12,1);
  Epopd(11,1);
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
  Epopd(8,1);
  Rpush(b_16);
  goto c_99;
  b_16 :
  Tpop();
  Epopd(7,0);
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("Op",2);
  Epopd(6,2);
  AllInit();
  c_16 :
  AllNextSon(&&d_16);
  Epushd(6,0);
  Cpush(f_16);
  Rpush(g_16);
  goto l_57;
  g_16 :
  Cpop();
  goto e_16;
  f_16 :
  e_16 :
  Epopd(6,0);
  goto c_16;
  d_16 :
  AllBuild();
  Cpop();
  goto k_15;
  l_15 :
  IsAppl();
  SomeInit();
  h_16 :
  SomeNextSon(&&i_16);
  Cpush(h_16);
  Rpush(j_16);
  goto l_57;
  j_16 :
  Cpop();
  CounterOK();
  goto h_16;
  i_16 :
  SomeBuild();
  k_15 :
  Return();
  j_15 :
  Epopd(5,0);
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildFun("SDef",3);
  Epopd(4,4);
  e_14 :
  OneNextSon();
  Rpush(k_16);
  goto h_57;
  k_16 :
  AllBuild();
  Cpop();
  goto c_14;
  d_14 :
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
  Rpush(l_16);
  goto h_57;
  l_16 :
  c_14 :
  z_13 :
  Return();
  y_13 :
  Epopd(3,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(3,0);
  Rpush(m_16);
  p_57 :
  Cpush(o_16);
  Rpush(p_16);
  goto x_98;
  p_16 :
  Cpop();
  goto n_16;
  o_16 :
  Cpush(r_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(t_16);
  Epushd(4,4);
  MatchFun("RDef",3);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Arg(2);
  MatchVard(4,4);
  Tpop();
  Tdupl();
  BuildStr("warning: in rule ");
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildStr(": ");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(u_16);
  goto u_100;
  u_16 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(v_16);
  q_57 :
  Cpush(x_16);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(y_16);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(z_16);
  r_57 :
  Cpush(b_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(d_17);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto c_17;
  d_17 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  c_17 :
  AllBuild();
  BuildVard(6,2);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Rpush(e_17);
  s_57 :
  Cpush(g_17);
  Epushd(10,0);
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
  Epopd(10,0);
  Cpop();
  goto f_17;
  g_17 :
  Epushd(10,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchVard(10,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(10,3);
  Tpush();
  BuildVard(10,4);
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
  Epopd(10,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_17);
  goto s_57;
  h_17 :
  OneNextSon();
  Rpush(i_17);
  goto m_99;
  i_17 :
  AllBuild();
  AllBuild();
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(10,2);
  f_17 :
  Return();
  e_17 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto a_17;
  b_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_17);
  goto r_57;
  j_17 :
  AllBuild();
  a_17 :
  Return();
  z_16 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  y_16 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(k_17);
  goto x_100;
  k_17 :
  Rpush(l_17);
  goto z_100;
  l_17 :
  MatchVard(7,1);
  BuildStr("constructor ");
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildStr(" not declared");
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
  Epopd(7,1);
  Rpush(m_17);
  goto u_100;
  m_17 :
  Epushd(7,0);
  Tdupl();
  Epushd(8,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(8,1);
  BuildFun("stderr",0);
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,1);
  Epushd(11,1);
  MatchVard(11,1);
  Epushd(12,1);
  BuildFun("TNil",0);
  BuildVard(4,3);
  MatchVard(12,1);
  BuildVard(12,1);
  Tpush();
  BuildVard(11,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(12,1);
  Epopd(11,1);
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
  Epopd(8,1);
  Rpush(n_17);
  goto c_99;
  n_17 :
  Tpop();
  Epopd(7,0);
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("Op",2);
  Epopd(6,2);
  AllInit();
  o_17 :
  AllNextSon(&&p_17);
  Epushd(6,0);
  Cpush(r_17);
  Rpush(s_17);
  goto q_57;
  s_17 :
  Cpop();
  goto q_17;
  r_17 :
  q_17 :
  Epopd(6,0);
  goto o_17;
  p_17 :
  AllBuild();
  Cpop();
  goto w_16;
  x_16 :
  IsAppl();
  SomeInit();
  t_17 :
  SomeNextSon(&&w_17);
  Cpush(t_17);
  Rpush(x_17);
  goto q_57;
  x_17 :
  Cpop();
  CounterOK();
  goto t_17;
  w_17 :
  SomeBuild();
  w_16 :
  Return();
  v_16 :
  Epopd(5,0);
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildFun("RDef",3);
  Epopd(4,4);
  Cpop();
  goto s_16;
  t_16 :
  Epushd(4,4);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Arg(2);
  MatchVard(4,4);
  Tpop();
  Tdupl();
  BuildStr("warning: in definition ");
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildStr(": ");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(e_18);
  goto u_100;
  e_18 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(f_18);
  t_57 :
  Cpush(h_18);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(i_18);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(n_18);
  u_57 :
  Cpush(p_18);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(t_18);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto q_18;
  t_18 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  q_18 :
  AllBuild();
  BuildVard(6,2);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,0);
  Rpush(u_18);
  v_57 :
  Cpush(d_19);
  Epushd(10,0);
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
  Epopd(10,0);
  Cpop();
  goto v_18;
  d_19 :
  Epushd(10,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchVard(10,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(10,3);
  Tpush();
  BuildVard(10,4);
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
  Epopd(10,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(e_19);
  goto v_57;
  e_19 :
  OneNextSon();
  Rpush(l_19);
  goto m_99;
  l_19 :
  AllBuild();
  AllBuild();
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,1);
  Tpush();
  BuildVard(10,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(10,2);
  v_18 :
  Return();
  u_18 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto o_18;
  p_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_19);
  goto u_57;
  m_19 :
  AllBuild();
  o_18 :
  Return();
  n_18 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  i_18 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(n_19);
  goto x_100;
  n_19 :
  Rpush(o_19);
  goto z_100;
  o_19 :
  MatchVard(7,1);
  BuildStr("constructor ");
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildStr("/");
  Tpush();
  BuildVard(7,1);
  Tpush();
  BuildStr(" not declared");
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
  Epopd(7,1);
  Rpush(p_19);
  goto u_100;
  p_19 :
  Epushd(7,0);
  Tdupl();
  Epushd(8,1);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(8,1);
  BuildFun("stderr",0);
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(8,1);
  Epushd(11,1);
  MatchVard(11,1);
  Epushd(12,1);
  BuildFun("TNil",0);
  BuildVard(4,3);
  MatchVard(12,1);
  BuildVard(12,1);
  Tpush();
  BuildVard(11,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(12,1);
  Epopd(11,1);
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
  Epopd(8,1);
  Rpush(q_19);
  goto c_99;
  q_19 :
  Tpop();
  Epopd(7,0);
  Tpop();
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("Op",2);
  Epopd(6,2);
  AllInit();
  r_19 :
  AllNextSon(&&s_19);
  Epushd(6,0);
  Cpush(u_19);
  Rpush(v_19);
  goto t_57;
  v_19 :
  Cpop();
  goto t_19;
  u_19 :
  t_19 :
  Epopd(6,0);
  goto r_19;
  s_19 :
  AllBuild();
  Cpop();
  goto g_18;
  h_18 :
  IsAppl();
  SomeInit();
  w_19 :
  SomeNextSon(&&y_19);
  Cpush(w_19);
  Rpush(z_19);
  goto t_57;
  z_19 :
  Cpop();
  CounterOK();
  goto w_19;
  y_19 :
  SomeBuild();
  g_18 :
  Return();
  f_18 :
  Epopd(5,0);
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildFun("SDef",3);
  Epopd(4,4);
  s_16 :
  OneNextSon();
  Rpush(b_20);
  goto p_57;
  b_20 :
  AllBuild();
  Cpop();
  goto q_16;
  r_16 :
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
  Rpush(c_20);
  goto p_57;
  c_20 :
  q_16 :
  n_16 :
  Return();
  m_16 :
  Epopd(3,0);
  OneNextSon();
  Rpush(d_20);
  goto m_99;
  d_20 :
  AllBuild();
  AllBuild();
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
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("Operations",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Signature",1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Specification",1);
  Epopd(2,3);
  Cpop();
  goto w_13;
  x_13 :
  w_13 :
  Epopd(1,5);
  Epopd(0,0);
  Return();
  o_99 :
  Epushd(0,0);
  Epushd(1,1);
  MatchFun("Specification",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Epushd(1,0);
  Rpush(e_20);
  y_57 :
  Cpush(g_20);
  Rpush(h_20);
  goto x_98;
  h_20 :
  Cpop();
  goto f_20;
  g_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_20);
  goto p_99;
  i_20 :
  OneNextSon();
  Rpush(j_20);
  goto y_57;
  j_20 :
  AllBuild();
  f_20 :
  Return();
  e_20 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(k_20);
  c_59 :
  Cpush(p_20);
  Rpush(q_20);
  goto x_98;
  q_20 :
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
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
  Tpush();
  BuildFun("TCons",2);
  Cpop();
  goto l_20;
  p_20 :
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
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(r_20);
  goto c_59;
  r_20 :
  OneNextSon();
  Rpush(s_20);
  goto m_99;
  s_20 :
  AllBuild();
  AllBuild();
  Epushd(2,8);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,5);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,7);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,8);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
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
  Rpush(t_20);
  a_60 :
  Cpush(z_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_21);
  goto a_60;
  a_21 :
  AllBuild();
  Cpop();
  goto y_20;
  z_20 :
  Rpush(b_21);
  goto x_98;
  b_21 :
  BuildVard(4,1);
  y_20 :
  Return();
  t_20 :
  Epopd(5,0);
  Epopd(4,2);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(2,3);
  Tpush();
  BuildVard(2,4);
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
  Rpush(c_21);
  b_60 :
  Cpush(e_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_21);
  goto b_60;
  f_21 :
  AllBuild();
  Cpop();
  goto d_21;
  e_21 :
  Rpush(g_21);
  goto x_98;
  g_21 :
  BuildVard(5,1);
  d_21 :
  Return();
  c_21 :
  Epopd(6,0);
  Epopd(5,2);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(2,5);
  Tpush();
  BuildVard(2,6);
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
  Epushd(7,0);
  Rpush(h_21);
  d_60 :
  Cpush(j_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_21);
  goto d_60;
  k_21 :
  AllBuild();
  Cpop();
  goto i_21;
  j_21 :
  Rpush(l_21);
  goto x_98;
  l_21 :
  BuildVard(6,1);
  i_21 :
  Return();
  h_21 :
  Epopd(7,0);
  Epopd(6,2);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(2,7);
  Tpush();
  BuildVard(2,8);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(7,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(7,2);
  Epushd(8,0);
  Rpush(m_21);
  e_60 :
  Cpush(o_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_21);
  goto e_60;
  p_21 :
  AllBuild();
  Cpop();
  goto n_21;
  o_21 :
  Rpush(q_21);
  goto x_98;
  q_21 :
  BuildVard(7,1);
  n_21 :
  Return();
  m_21 :
  Epopd(8,0);
  Epopd(7,2);
  MatchVard(6,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(6,1);
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
  Epopd(6,1);
  Epopd(5,1);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,8);
  l_20 :
  Return();
  k_20 :
  Epopd(1,0);
  Epushd(1,4);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("Operations",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Signature",1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Overlays",1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Rules",1);
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("Strategies",1);
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
  BuildFun("Specification",1);
  Epopd(1,4);
  MatchFun("Specification",1);
  TravInit();
  OneNextSon();
  Rpush(r_21);
  goto t_99;
  r_21 :
  AllBuild();
  Rpush(s_21);
  goto w_99;
  s_21 :
  Epopd(0,0);
  Return();
  p_99 :
  Epushd(0,4);
  MatchFunFC("Signature",1,&&y_21);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(z_21);
  goto w_2;
  z_21 :
  goto x_21;
  y_21 :
  MatchFunFC("Strategies",1,&&a_22);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(b_22);
  goto x_2;
  b_22 :
  goto x_21;
  a_22 :
  MatchFunFC("Rules",1,&&c_22);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Rpush(d_22);
  goto y_2;
  d_22 :
  goto x_21;
  c_22 :
  MatchFunFC("Overlays",1,&&g_22);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Rpush(h_22);
  goto z_2;
  h_22 :
  goto x_21;
  g_22 :
  goto fail;
  x_21 :
  goto w_21;
  z_2 :
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,4);
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
  Tpush();
  BuildFun("TCons",2);
  Return();
  w_21 :
  goto v_21;
  y_2 :
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,3);
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
  Return();
  v_21 :
  goto u_21;
  x_2 :
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,2);
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
  Return();
  u_21 :
  goto t_21;
  w_2 :
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(i_22);
  goto q_99;
  i_22 :
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
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
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Return();
  t_21 :
  Epopd(0,4);
  Return();
  q_99 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(m_22);
  j_60 :
  Cpush(o_22);
  Rpush(p_22);
  goto x_98;
  p_22 :
  Cpop();
  goto n_22;
  o_22 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_22);
  goto r_99;
  q_22 :
  OneNextSon();
  Rpush(r_22);
  goto j_60;
  r_22 :
  AllBuild();
  n_22 :
  Return();
  m_22 :
  Epopd(1,0);
  Rpush(s_22);
  goto s_99;
  s_22 :
  Epopd(0,0);
  Return();
  r_99 :
  Epushd(0,2);
  MatchFunFC("Operations",1,&&w_22);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(x_22);
  goto a_3;
  x_22 :
  goto v_22;
  w_22 :
  MatchFunFC("Sorts",1,&&y_22);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(z_22);
  goto b_3;
  z_22 :
  goto v_22;
  y_22 :
  goto fail;
  v_22 :
  goto u_22;
  b_3 :
  BuildFun("Nil",0);
  Return();
  u_22 :
  goto t_22;
  a_3 :
  BuildVard(0,1);
  Return();
  t_22 :
  Epopd(0,2);
  Return();
  s_99 :
  Epushd(0,0);
  Rpush(a_23);
  o_40 :
  Cpush(c_23);
  Rpush(d_23);
  goto x_98;
  d_23 :
  Cpop();
  goto b_23;
  c_23 :
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
  Rpush(e_23);
  o_60 :
  Cpush(g_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_23);
  goto o_60;
  h_23 :
  AllBuild();
  Cpop();
  goto f_23;
  g_23 :
  Rpush(i_23);
  goto x_98;
  i_23 :
  BuildVard(1,1);
  Rpush(j_23);
  goto o_40;
  j_23 :
  f_23 :
  Return();
  e_23 :
  Epopd(2,0);
  Epopd(1,2);
  b_23 :
  Return();
  a_23 :
  Epopd(0,0);
  Return();
  t_99 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,0);
  Rpush(k_23);
  m_61 :
  Cpush(m_23);
  Rpush(n_23);
  goto x_98;
  n_23 :
  Cpop();
  goto l_23;
  m_23 :
  Cpush(p_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_23);
  goto u_99;
  q_23 :
  OneNextSon();
  Rpush(r_23);
  goto m_61;
  r_23 :
  AllBuild();
  Cpop();
  goto o_23;
  p_23 :
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
  Rpush(s_23);
  goto m_61;
  s_23 :
  o_23 :
  l_23 :
  Return();
  k_23 :
  Epopd(3,0);
  Rpush(t_23);
  goto s_99;
  t_23 :
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,1);
  Epushd(6,0);
  Rpush(u_23);
  n_61 :
  Cpush(w_23);
  Rpush(x_23);
  goto x_98;
  x_23 :
  Cpop();
  goto v_23;
  w_23 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(7,1);
  MatchVard(7,1);
  BuildVard(7,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Op",2);
  Epopd(7,1);
  OneNextSon();
  Rpush(y_23);
  goto n_61;
  y_23 :
  AllBuild();
  v_23 :
  Return();
  u_23 :
  Epopd(6,0);
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
  BuildVard(1,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,3);
  Rpush(z_23);
  goto v_99;
  z_23 :
  Epopd(0,0);
  Return();
  u_99 :
  Epushd(0,2);
  MatchFunFC("Signature",1,&&d_24);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(f_24);
  goto f_3;
  f_24 :
  goto c_24;
  d_24 :
  MatchFunFC("Overlays",1,&&g_24);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(h_24);
  goto h_3;
  h_24 :
  goto c_24;
  g_24 :
  goto fail;
  c_24 :
  goto b_24;
  h_3 :
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(i_24);
  n_62 :
  Cpush(k_24);
  Rpush(l_24);
  goto x_98;
  l_24 :
  Cpop();
  goto j_24;
  k_24 :
  Cpush(n_24);
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
  Rpush(o_24);
  goto n_62;
  o_24 :
  AllBuild();
  Cpop();
  goto m_24;
  n_24 :
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
  Rpush(p_24);
  goto n_62;
  p_24 :
  m_24 :
  j_24 :
  Return();
  i_24 :
  Epopd(1,0);
  Return();
  b_24 :
  goto a_24;
  f_3 :
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(q_24);
  y_61 :
  Cpush(s_24);
  Rpush(t_24);
  goto x_98;
  t_24 :
  Cpop();
  goto r_24;
  s_24 :
  Cpush(v_24);
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
  Rpush(w_24);
  i_62 :
  Cpush(y_24);
  Rpush(z_24);
  goto x_98;
  z_24 :
  Cpop();
  goto x_24;
  y_24 :
  Cpush(b_25);
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
  Rpush(c_25);
  goto i_62;
  c_25 :
  AllBuild();
  Cpop();
  goto a_25;
  b_25 :
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
  Rpush(d_25);
  goto i_62;
  d_25 :
  a_25 :
  x_24 :
  Return();
  w_24 :
  Epopd(3,0);
  Epopd(2,1);
  OneNextSon();
  Rpush(e_25);
  goto y_61;
  e_25 :
  AllBuild();
  Cpop();
  goto u_24;
  v_24 :
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
  Rpush(f_25);
  goto y_61;
  f_25 :
  u_24 :
  r_24 :
  Return();
  q_24 :
  Epopd(1,0);
  Rpush(g_25);
  goto s_99;
  g_25 :
  Return();
  a_24 :
  Epopd(0,2);
  Return();
  v_99 :
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
  Rpush(h_25);
  y_63 :
  Cpush(j_25);
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
  goto i_25;
  j_25 :
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
  Rpush(k_25);
  goto y_63;
  k_25 :
  OneNextSon();
  Rpush(t_25);
  goto m_99;
  t_25 :
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
  i_25 :
  Return();
  h_25 :
  Epopd(2,0);
  MatchVard(1,1);
  Tpop();
  Epushd(2,0);
  Rpush(u_25);
  b_64 :
  Cpush(y_25);
  Epushd(3,2);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  BuildVard(3,1);
  Epushd(4,1);
  MatchVard(4,1);
  Tdupl();
  BuildVard(1,1);
  Epushd(5,0);
  Tdupl();
  z_25 :
  MatchFun("Cons",2);
  Cpush(a_26);
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
  goto b_26;
  a_26 :
  Arg(1);
  Tdrop();
  goto z_25;
  b_26 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(3,2);
  Epopd(4,1);
  Epopd(3,2);
  Cpop();
  goto v_25;
  y_25 :
  AllInit();
  c_26 :
  AllNextSon(&&d_26);
  Rpush(e_26);
  goto b_64;
  e_26 :
  goto c_26;
  d_26 :
  AllBuild();
  v_25 :
  Return();
  u_25 :
  Epopd(2,0);
  Epopd(1,1);
  Epopd(0,3);
  Return();
  w_99 :
  Epushd(0,0);
  Rpush(f_26);
  o_64 :
  Epushd(1,0);
  Cpush(h_26);
  Epushd(2,3);
  MatchFun("LRule",1);
  Arg(0);
  MatchFun("Rule",3);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Arg(2);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  Rpush(j_26);
  goto x_99;
  j_26 :
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("Rule",3);
  Tpush();
  BuildFun("SRule",1);
  Tpush();
  BuildFun("Scope",2);
  Epopd(3,1);
  Epopd(2,3);
  Cpop();
  goto g_26;
  h_26 :
  g_26 :
  Epopd(1,0);
  AllInit();
  k_26 :
  AllNextSon(&&l_26);
  Rpush(m_26);
  goto o_64;
  m_26 :
  goto k_26;
  l_26 :
  AllBuild();
  Return();
  f_26 :
  Epopd(0,0);
  Return();
  x_99 :
  Epushd(0,0);
  Rpush(p_26);
  x_64 :
  Cpush(t_26);
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
  goto q_26;
  t_26 :
  Cpush(v_26);
  Epushd(1,1);
  Tdupl();
  Rpush(z_26);
  goto y_99;
  z_26 :
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
  Rpush(a_27);
  goto x_64;
  a_27 :
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
  Rpush(d_27);
  z_65 :
  Cpush(f_27);
  Rpush(g_27);
  goto x_98;
  g_27 :
  Cpop();
  goto e_27;
  f_27 :
  Cpush(i_27);
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
  j_27 :
  MatchFun("Cons",2);
  Cpush(k_27);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto l_27;
  k_27 :
  Arg(1);
  Tdrop();
  goto j_27;
  l_27 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(m_27);
  goto z_65;
  m_27 :
  Cpop();
  goto h_27;
  i_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_27);
  goto z_65;
  n_27 :
  AllBuild();
  h_27 :
  e_27 :
  Return();
  d_27 :
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
  Rpush(o_27);
  u_66 :
  Cpush(q_27);
  Rpush(r_27);
  goto x_98;
  r_27 :
  BuildFun("Nil",0);
  Cpop();
  goto p_27;
  q_27 :
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
  Rpush(s_27);
  goto u_66;
  s_27 :
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
  Rpush(t_27);
  z_66 :
  Cpush(v_27);
  Rpush(w_27);
  goto x_98;
  w_27 :
  BuildVard(4,3);
  Cpop();
  goto u_27;
  v_27 :
  Cpush(y_27);
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
  z_27 :
  MatchFun("Cons",2);
  Cpush(a_28);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto b_28;
  a_28 :
  Arg(1);
  Tdrop();
  goto z_27;
  b_28 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(c_28);
  goto z_66;
  c_28 :
  Cpop();
  goto x_27;
  y_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_28);
  goto z_66;
  d_28 :
  AllBuild();
  x_27 :
  u_27 :
  Return();
  t_27 :
  Epopd(4,4);
  p_27 :
  Return();
  o_27 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto u_26;
  v_26 :
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
  Rpush(e_28);
  t_67 :
  Cpush(g_28);
  Rpush(h_28);
  goto x_98;
  h_28 :
  BuildFun("Nil",0);
  Cpop();
  goto f_28;
  g_28 :
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
  Rpush(i_28);
  goto x_64;
  i_28 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(j_28);
  goto t_67;
  j_28 :
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
  Rpush(k_28);
  y_67 :
  Cpush(m_28);
  Rpush(n_28);
  goto x_98;
  n_28 :
  BuildVard(3,3);
  Cpop();
  goto l_28;
  m_28 :
  Cpush(p_28);
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
  q_28 :
  MatchFun("Cons",2);
  Cpush(r_28);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto s_28;
  r_28 :
  Arg(1);
  Tdrop();
  goto q_28;
  s_28 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(t_28);
  goto y_67;
  t_28 :
  Cpop();
  goto o_28;
  p_28 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_28);
  goto y_67;
  u_28 :
  AllBuild();
  o_28 :
  l_28 :
  Return();
  k_28 :
  Epopd(3,4);
  f_28 :
  Return();
  e_28 :
  Epopd(2,0);
  Epopd(1,1);
  u_26 :
  q_26 :
  Return();
  p_26 :
  Epopd(0,0);
  Return();
  y_99 :
  Cpush(w_28);
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
  goto v_28;
  w_28 :
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
  Rpush(x_28);
  goto x_99;
  x_28 :
  Epopd(0,3);
  v_28 :
  Return();
  z_99 :
  Epushd(0,0);
  MatchFun("Specification",1);
  TravInit();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Signature",1);
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Overlays",1);
  TravInit();
  OneNextSon();
  Rpush(y_28);
  goto a_100;
  y_28 :
  AllBuild();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Rules",1);
  TravInit();
  OneNextSon();
  Rpush(z_28);
  goto a_100;
  z_28 :
  AllBuild();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Strategies",1);
  TravInit();
  OneNextSon();
  Rpush(a_29);
  goto a_100;
  a_29 :
  AllBuild();
  OneNextSon();
  Rpush(b_29);
  goto x_98;
  b_29 :
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  a_100 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(c_29);
  a_68 :
  Cpush(e_29);
  Rpush(f_29);
  goto x_98;
  f_29 :
  Cpop();
  goto d_29;
  e_29 :
  Cpush(h_29);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_29);
  goto b_100;
  i_29 :
  OneNextSon();
  Rpush(j_29);
  goto a_68;
  j_29 :
  AllBuild();
  Cpop();
  goto g_29;
  h_29 :
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
  Rpush(k_29);
  goto a_68;
  k_29 :
  g_29 :
  d_29 :
  Return();
  c_29 :
  Epopd(1,0);
  MatchFun("Nil",0);
  Epopd(0,0);
  Return();
  b_100 :
  Epushd(0,0);
  Cpush(m_29);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(n_29);
  goto c_100;
  n_29 :
  Cpush(o_29);
  Tdupl();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_29);
  goto x_98;
  p_29 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(q_29);
  goto x_98;
  q_29 :
  OneNextSon();
  Rpush(r_29);
  goto m_99;
  r_29 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(s_29);
  goto x_98;
  s_29 :
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  o_29 :
  AllBuild();
  Rpush(t_29);
  goto j_100;
  t_29 :
  Cpop();
  goto l_29;
  m_29 :
  Cpush(v_29);
  MatchFun("RDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(w_29);
  goto c_100;
  w_29 :
  Cpush(x_29);
  Tdupl();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(y_29);
  goto x_98;
  y_29 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(z_29);
  goto x_98;
  z_29 :
  OneNextSon();
  Rpush(a_30);
  goto m_99;
  a_30 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(b_30);
  goto x_98;
  b_30 :
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  x_29 :
  AllBuild();
  Rpush(c_30);
  goto j_100;
  c_30 :
  Cpop();
  goto u_29;
  v_29 :
  MatchFun("Overlay",3);
  Rpush(d_30);
  goto c_100;
  d_30 :
  Cpush(e_30);
  Tdupl();
  MatchFun("Overlay",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(f_30);
  goto x_98;
  f_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(g_30);
  goto x_98;
  g_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_30);
  goto x_98;
  h_30 :
  OneNextSon();
  Rpush(i_30);
  goto m_99;
  i_30 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(j_30);
  goto x_98;
  j_30 :
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  e_30 :
  Rpush(k_30);
  goto j_100;
  k_30 :
  u_29 :
  l_29 :
  Epopd(0,0);
  Return();
  c_100 :
  Epushd(0,0);
  Rpush(l_30);
  a_31 :
  Cpush(n_30);
  Epushd(1,0);
  Cpush(p_30);
  MatchFun("Build",1);
  TravInit();
  OneNextSon();
  Rpush(q_30);
  goto e_100;
  q_30 :
  AllBuild();
  Cpop();
  goto o_30;
  p_30 :
  Cpush(s_30);
  MatchFun("Match",1);
  TravInit();
  OneNextSon();
  Rpush(t_30);
  goto d_100;
  t_30 :
  AllBuild();
  Cpop();
  goto r_30;
  s_30 :
  Cpush(v_30);
  MatchFun("MA",2);
  TravInit();
  OneNextSon();
  Rpush(w_30);
  goto d_100;
  w_30 :
  OneNextSon();
  Rpush(x_30);
  goto a_31;
  x_30 :
  AllBuild();
  Cpop();
  goto u_30;
  v_30 :
  Cpush(z_30);
  MatchFun("AM",2);
  TravInit();
  OneNextSon();
  Rpush(b_31);
  goto a_31;
  b_31 :
  OneNextSon();
  Rpush(c_31);
  goto d_100;
  c_31 :
  AllBuild();
  Cpop();
  goto y_30;
  z_30 :
  Cpush(e_31);
  MatchFun("BA",2);
  TravInit();
  OneNextSon();
  Rpush(f_31);
  goto a_31;
  f_31 :
  OneNextSon();
  Rpush(g_31);
  goto e_100;
  g_31 :
  AllBuild();
  Cpop();
  goto d_31;
  e_31 :
  Cpush(i_31);
  MatchFun("BAM",3);
  TravInit();
  OneNextSon();
  Rpush(j_31);
  goto a_31;
  j_31 :
  OneNextSon();
  Rpush(k_31);
  goto e_100;
  k_31 :
  OneNextSon();
  Rpush(l_31);
  goto d_100;
  l_31 :
  AllBuild();
  Cpop();
  goto h_31;
  i_31 :
  Cpush(n_31);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_31);
  goto a_31;
  o_31 :
  AllBuild();
  Cpop();
  goto m_31;
  n_31 :
  Cpush(q_31);
  MatchFun("Rule",3);
  TravInit();
  OneNextSon();
  Rpush(r_31);
  goto d_100;
  r_31 :
  OneNextSon();
  Rpush(s_31);
  goto e_100;
  s_31 :
  OneNextSon();
  Rpush(t_31);
  goto a_31;
  t_31 :
  AllBuild();
  Cpop();
  goto p_31;
  q_31 :
  Cpush(v_31);
  MatchFun("Overlay",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(w_31);
  goto e_100;
  w_31 :
  AllBuild();
  Cpop();
  goto u_31;
  v_31 :
  MatchFun("Cong",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(2,0);
  Rpush(x_31);
  e_68 :
  Cpush(z_31);
  Rpush(a_32);
  goto x_98;
  a_32 :
  Cpop();
  goto y_31;
  z_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(c_32);
  goto a_31;
  c_32 :
  OneNextSon();
  Rpush(d_32);
  goto e_68;
  d_32 :
  AllBuild();
  y_31 :
  Return();
  x_31 :
  Epopd(2,0);
  AllBuild();
  u_31 :
  p_31 :
  m_31 :
  h_31 :
  d_31 :
  y_30 :
  u_30 :
  r_30 :
  o_30 :
  Epopd(1,0);
  Cpop();
  goto m_30;
  n_30 :
  AllInit();
  e_32 :
  AllNextSon(&&f_32);
  Rpush(g_32);
  goto a_31;
  g_32 :
  goto e_32;
  f_32 :
  AllBuild();
  m_30 :
  Cpush(i_32);
  Rpush(j_32);
  goto f_100;
  j_32 :
  Cpop();
  goto h_32;
  i_32 :
  Rpush(k_32);
  goto h_100;
  k_32 :
  h_32 :
  Return();
  l_30 :
  Epopd(0,0);
  Return();
  d_100 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(l_32);
  goto x_99;
  l_32 :
  MatchVard(1,1);
  BuildFun("Nil",0);
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
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Epopd(0,1);
  Return();
  e_100 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(m_32);
  goto x_99;
  m_32 :
  MatchVard(1,1);
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
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Epopd(0,1);
  Return();
  f_100 :
  Cpush(o_32);
  Epushd(0,1);
  MatchFun("Seqs",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Rpush(p_32);
  goto g_100;
  p_32 :
  Epopd(0,1);
  Cpop();
  goto n_32;
  o_32 :
  Cpush(r_32);
  Epushd(0,2);
  MatchFun("Seq",2);
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
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(s_32);
  goto g_100;
  s_32 :
  Epopd(0,2);
  Cpop();
  goto q_32;
  r_32 :
  Cpush(u_32);
  Epushd(0,3);
  MatchFun("Rule",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Arg(2);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
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
  Rpush(v_32);
  goto g_100;
  v_32 :
  Epopd(0,3);
  Cpop();
  goto t_32;
  u_32 :
  Cpush(x_32);
  Epushd(0,3);
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
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
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
  Rpush(y_32);
  goto g_100;
  y_32 :
  Epopd(0,3);
  Cpop();
  goto w_32;
  x_32 :
  Cpush(a_33);
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
  BuildVard(0,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(b_33);
  goto g_100;
  b_33 :
  Epopd(0,2);
  Cpop();
  goto z_32;
  a_33 :
  Cpush(d_33);
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
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(e_33);
  goto g_100;
  e_33 :
  Epopd(0,2);
  Cpop();
  goto c_33;
  d_33 :
  Cpush(g_33);
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
  BuildVard(0,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(h_33);
  goto g_100;
  h_33 :
  Epopd(0,2);
  Cpop();
  goto f_33;
  g_33 :
  Cpush(j_33);
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
  BuildVard(0,2);
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
  Rpush(k_33);
  goto g_100;
  k_33 :
  Epopd(0,3);
  Cpop();
  goto i_33;
  j_33 :
  Cpush(m_33);
  Epushd(0,2);
  MatchFun("Cong",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,2);
  Rpush(n_33);
  goto g_100;
  n_33 :
  Epopd(0,2);
  Cpop();
  goto l_33;
  m_33 :
  Cpush(p_33);
  Epushd(0,2);
  MatchFun("Scope",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(q_33);
  p_69 :
  Cpush(s_33);
  Rpush(t_33);
  goto x_98;
  t_33 :
  Cpop();
  goto r_33;
  s_33 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
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
  Rpush(u_33);
  w_71 :
  Cpush(w_33);
  Rpush(x_33);
  goto x_98;
  x_33 :
  Cpop();
  goto v_33;
  w_33 :
  Cpush(z_33);
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
  a_34 :
  MatchFun("Cons",2);
  Cpush(b_34);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto c_34;
  b_34 :
  Arg(1);
  Tdrop();
  goto a_34;
  c_34 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(d_34);
  goto w_71;
  d_34 :
  Cpop();
  goto y_33;
  z_33 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_34);
  goto w_71;
  e_34 :
  AllBuild();
  y_33 :
  v_33 :
  Return();
  u_33 :
  Epopd(4,2);
  MatchVard(3,1);
  Epushd(4,1);
  Epushd(5,1);
  Epushd(6,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(6,1);
  BuildVard(2,2);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(6,1);
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
  Epushd(7,3);
  BuildVard(6,1);
  Tpush();
  BuildVard(6,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(8,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(8,2);
  Rpush(f_34);
  y_71 :
  Cpush(h_34);
  Rpush(i_34);
  goto x_98;
  i_34 :
  Cpop();
  goto g_34;
  h_34 :
  Cpush(k_34);
  Epushd(9,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchVard(9,1);
  Tpop();
  Tdupl();
  BuildVard(8,1);
  Epushd(10,0);
  Tdupl();
  l_34 :
  MatchFun("Cons",2);
  Cpush(m_34);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto n_34;
  m_34 :
  Arg(1);
  Tdrop();
  goto l_34;
  n_34 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(o_34);
  goto y_71;
  o_34 :
  Cpop();
  goto j_34;
  k_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_34);
  goto y_71;
  p_34 :
  AllBuild();
  j_34 :
  g_34 :
  Return();
  f_34 :
  Epopd(8,2);
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
  Rpush(q_34);
  a_72 :
  Cpush(s_34);
  Rpush(t_34);
  goto x_98;
  t_34 :
  Cpop();
  goto r_34;
  s_34 :
  Cpush(v_34);
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
  Tdupl();
  w_34 :
  MatchFun("Cons",2);
  Cpush(y_34);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Cpop();
  goto z_34;
  y_34 :
  Arg(1);
  Tdrop();
  goto w_34;
  z_34 :
  Tpop();
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(a_35);
  goto a_72;
  a_35 :
  Cpop();
  goto u_34;
  v_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_35);
  goto a_72;
  b_35 :
  AllBuild();
  u_34 :
  r_34 :
  Return();
  q_34 :
  Epopd(7,3);
  Epopd(6,2);
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
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
  Rpush(c_35);
  c_72 :
  Cpush(e_35);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_35);
  goto c_72;
  f_35 :
  AllBuild();
  Cpop();
  goto d_35;
  e_35 :
  Rpush(g_35);
  goto x_98;
  g_35 :
  BuildVard(5,1);
  d_35 :
  Return();
  c_35 :
  Epopd(6,0);
  Epopd(5,2);
  MatchVard(4,1);
  BuildVard(2,2);
  Tpush();
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
  BuildFun("TCons",2);
  Epopd(4,1);
  Epopd(3,1);
  Epopd(2,3);
  OneNextSon();
  Rpush(h_35);
  goto p_69;
  h_35 :
  AllBuild();
  r_33 :
  Return();
  q_33 :
  Epopd(1,0);
  Epopd(0,2);
  Cpop();
  goto o_33;
  p_33 :
  Epushd(0,3);
  MatchFun("Overlay",3);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Epushd(1,1);
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,2);
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
  BuildVard(0,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(i_35);
  goto g_100;
  i_35 :
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Overlay",3);
  Epopd(1,1);
  Epopd(0,3);
  o_33 :
  l_33 :
  i_33 :
  f_33 :
  c_33 :
  z_32 :
  w_32 :
  t_32 :
  q_32 :
  n_32 :
  Return();
  g_100 :
  Epushd(0,0);
  Rpush(j_35);
  g_81 :
  Cpush(l_35);
  Rpush(m_35);
  goto x_98;
  m_35 :
  BuildFun("Nil",0);
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
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Cpop();
  goto k_35;
  l_35 :
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
  Rpush(n_35);
  goto g_81;
  n_35 :
  OneNextSon();
  Rpush(o_35);
  goto m_99;
  o_35 :
  AllBuild();
  AllBuild();
  Epushd(1,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
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
  BuildVard(1,2);
  Epushd(2,0);
  Rpush(p_35);
  t_82 :
  Cpush(r_35);
  Rpush(s_35);
  goto x_98;
  s_35 :
  Cpop();
  goto q_35;
  r_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(1,1);
  Epushd(4,0);
  Rpush(t_35);
  u_82 :
  Cpush(v_35);
  Rpush(w_35);
  goto x_98;
  w_35 :
  Cpop();
  goto u_35;
  v_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(5,1);
  MatchVard(5,1);
  BuildVard(3,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(6,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,5);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(6,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epushd(7,1);
  Epushd(8,1);
  BuildVard(6,2);
  Tpush();
  BuildVard(6,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(9,2);
  Rpush(x_35);
  v_82 :
  Cpush(z_35);
  Rpush(a_36);
  goto x_98;
  a_36 :
  Cpop();
  goto y_35;
  z_35 :
  Cpush(c_36);
  Epushd(10,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,1);
  Tpop();
  Tdupl();
  BuildVard(9,1);
  Epushd(11,0);
  Tdupl();
  d_36 :
  MatchFun("Cons",2);
  Cpush(e_36);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto f_36;
  e_36 :
  Arg(1);
  Tdrop();
  goto d_36;
  f_36 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(g_36);
  goto v_82;
  g_36 :
  Cpop();
  goto b_36;
  c_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_36);
  goto v_82;
  h_36 :
  AllBuild();
  b_36 :
  y_35 :
  Return();
  x_35 :
  Epopd(9,2);
  MatchVard(8,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(8,1);
  Epushd(8,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(8,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(8,2);
  Rpush(i_36);
  x_82 :
  Cpush(k_36);
  Rpush(l_36);
  goto x_98;
  l_36 :
  BuildVard(8,1);
  Cpop();
  goto j_36;
  k_36 :
  Cpush(n_36);
  Epushd(9,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchVard(9,1);
  Tpop();
  Tdupl();
  BuildVard(8,1);
  Epushd(10,0);
  Tdupl();
  o_36 :
  MatchFun("Cons",2);
  Cpush(p_36);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto q_36;
  p_36 :
  Arg(1);
  Tdrop();
  goto o_36;
  q_36 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(r_36);
  goto x_82;
  r_36 :
  Cpop();
  goto m_36;
  n_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_36);
  goto x_82;
  s_36 :
  AllBuild();
  m_36 :
  j_36 :
  Return();
  i_36 :
  Epopd(8,2);
  MatchVard(7,1);
  Epushd(8,1);
  BuildVard(6,3);
  Tpush();
  BuildVard(6,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(9,2);
  Rpush(t_36);
  z_82 :
  Cpush(v_36);
  Rpush(x_36);
  goto x_98;
  x_36 :
  BuildVard(9,1);
  Cpop();
  goto u_36;
  v_36 :
  Cpush(z_36);
  Epushd(10,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,1);
  Tpop();
  Tdupl();
  BuildVard(9,1);
  Epushd(11,0);
  Tdupl();
  a_37 :
  MatchFun("Cons",2);
  Cpush(b_37);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto c_37;
  b_37 :
  Arg(1);
  Tdrop();
  goto a_37;
  c_37 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(d_37);
  goto z_82;
  d_37 :
  Cpop();
  goto y_36;
  z_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_37);
  goto z_82;
  e_37 :
  AllBuild();
  y_36 :
  u_36 :
  Return();
  t_36 :
  Epopd(9,2);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(6,5);
  Tpush();
  BuildVard(6,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,2);
  Rpush(f_37);
  b_83 :
  Cpush(h_37);
  Rpush(i_37);
  goto x_98;
  i_37 :
  BuildVard(10,1);
  Cpop();
  goto g_37;
  h_37 :
  Cpush(k_37);
  Epushd(11,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Arg(1);
  MatchVard(11,1);
  Tpop();
  Tdupl();
  BuildVard(10,1);
  Epushd(12,0);
  Tdupl();
  l_37 :
  MatchFun("Cons",2);
  Cpush(m_37);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Cpop();
  goto n_37;
  m_37 :
  Arg(1);
  Tdrop();
  goto l_37;
  n_37 :
  Tpop();
  Epopd(12,0);
  Tpop();
  BuildVard(11,1);
  Epopd(11,2);
  Rpush(o_37);
  goto b_83;
  o_37 :
  Cpop();
  goto j_37;
  k_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_37);
  goto b_83;
  p_37 :
  AllBuild();
  j_37 :
  g_37 :
  Return();
  f_37 :
  Epopd(10,2);
  MatchVard(9,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(8,1);
  Tpush();
  BuildVard(9,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,1);
  Epopd(6,6);
  Epopd(5,1);
  OneNextSon();
  Rpush(q_37);
  goto u_82;
  q_37 :
  AllBuild();
  u_35 :
  Return();
  t_35 :
  Epopd(4,0);
  Epopd(3,1);
  OneNextSon();
  Rpush(r_37);
  goto t_82;
  r_37 :
  AllBuild();
  q_35 :
  Return();
  p_35 :
  Rpush(s_37);
  d_83 :
  Cpush(u_37);
  Rpush(v_37);
  goto x_98;
  v_37 :
  BuildFun("Nil",0);
  Cpop();
  goto t_37;
  u_37 :
  Epushd(3,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  Arg(1);
  MatchVard(3,2);
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
  Epopd(3,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(w_37);
  goto d_83;
  w_37 :
  OneNextSon();
  Rpush(x_37);
  goto m_99;
  x_37 :
  AllBuild();
  AllBuild();
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
  Rpush(y_37);
  e_83 :
  Cpush(a_38);
  Rpush(b_38);
  goto x_98;
  b_38 :
  BuildVard(3,1);
  Cpop();
  goto z_37;
  a_38 :
  Cpush(d_38);
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
  e_38 :
  MatchFun("Cons",2);
  Cpush(f_38);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto g_38;
  f_38 :
  Arg(1);
  Tdrop();
  goto e_38;
  g_38 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(h_38);
  goto e_83;
  h_38 :
  Cpop();
  goto c_38;
  d_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_38);
  goto e_83;
  i_38 :
  AllBuild();
  c_38 :
  z_37 :
  Return();
  y_37 :
  Epopd(3,2);
  t_37 :
  Return();
  s_37 :
  Epopd(2,0);
  Epopd(1,2);
  k_35 :
  Return();
  j_35 :
  Epopd(0,0);
  Return();
  h_100 :
  Epushd(0,0);
  Rpush(j_38);
  goto i_100;
  j_38 :
  Epushd(1,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  BuildVard(1,3);
  Rpush(k_38);
  s_90 :
  Cpush(m_38);
  Rpush(n_38);
  goto x_98;
  n_38 :
  BuildFun("Nil",0);
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
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Cpop();
  goto l_38;
  m_38 :
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
  BuildVard(2,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_38);
  goto s_90;
  o_38 :
  OneNextSon();
  Rpush(p_38);
  goto m_99;
  p_38 :
  AllBuild();
  AllBuild();
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
  Rpush(q_38);
  a_92 :
  Cpush(s_38);
  Rpush(t_38);
  goto x_98;
  t_38 :
  Cpop();
  goto r_38;
  s_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(u_38);
  b_92 :
  Cpush(w_38);
  Rpush(x_38);
  goto x_98;
  x_38 :
  Cpop();
  goto v_38;
  w_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(6,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(7,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,3);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,5);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,4);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Epushd(8,1);
  BuildVard(7,1);
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(9,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(9,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(9,2);
  Rpush(y_38);
  c_92 :
  Cpush(a_39);
  Rpush(b_39);
  goto x_98;
  b_39 :
  BuildVard(9,1);
  Cpop();
  goto z_38;
  a_39 :
  Cpush(d_39);
  Epushd(10,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchVard(10,1);
  Tpop();
  Tdupl();
  BuildVard(9,1);
  Epushd(11,0);
  Tdupl();
  e_39 :
  MatchFun("Cons",2);
  Cpush(f_39);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto g_39;
  f_39 :
  Arg(1);
  Tdrop();
  goto e_39;
  g_39 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(h_39);
  goto c_92;
  h_39 :
  Cpop();
  goto c_39;
  d_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_39);
  goto c_92;
  i_39 :
  AllBuild();
  c_39 :
  z_38 :
  Return();
  y_38 :
  Epopd(9,2);
  MatchVard(8,1);
  Epushd(9,1);
  BuildVard(7,3);
  Tpush();
  BuildVard(7,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(10,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(10,1);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(10,2);
  Rpush(j_39);
  e_92 :
  Cpush(l_39);
  Rpush(m_39);
  goto x_98;
  m_39 :
  BuildVard(10,1);
  Cpop();
  goto k_39;
  l_39 :
  Cpush(o_39);
  Epushd(11,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Arg(1);
  MatchVard(11,1);
  Tpop();
  Tdupl();
  BuildVard(10,1);
  Epushd(12,0);
  Tdupl();
  p_39 :
  MatchFun("Cons",2);
  Cpush(q_39);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Cpop();
  goto r_39;
  q_39 :
  Arg(1);
  Tdrop();
  goto p_39;
  r_39 :
  Tpop();
  Epopd(12,0);
  Tpop();
  BuildVard(11,1);
  Epopd(11,2);
  Rpush(s_39);
  goto e_92;
  s_39 :
  Cpop();
  goto n_39;
  o_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_39);
  goto e_92;
  t_39 :
  AllBuild();
  n_39 :
  k_39 :
  Return();
  j_39 :
  Epopd(10,2);
  MatchVard(9,1);
  Epushd(10,1);
  BuildVard(7,5);
  Tpush();
  BuildVard(7,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(11,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(11,2);
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
  BuildVard(11,2);
  Rpush(v_39);
  g_92 :
  Cpush(x_39);
  Rpush(y_39);
  goto x_98;
  y_39 :
  BuildVard(11,1);
  Cpop();
  goto w_39;
  x_39 :
  Cpush(a_40);
  Epushd(12,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(12,2);
  Tpop();
  Arg(1);
  MatchVard(12,1);
  Tpop();
  Tdupl();
  BuildVard(11,1);
  Epushd(13,0);
  Tdupl();
  b_40 :
  MatchFun("Cons",2);
  Cpush(c_40);
  Arg(0);
  MatchVard(12,2);
  Tpop();
  Cpop();
  goto d_40;
  c_40 :
  Arg(1);
  Tdrop();
  goto b_40;
  d_40 :
  Tpop();
  Epopd(13,0);
  Tpop();
  BuildVard(12,1);
  Epopd(12,2);
  Rpush(e_40);
  goto g_92;
  e_40 :
  Cpop();
  goto z_39;
  a_40 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_40);
  goto g_92;
  f_40 :
  AllBuild();
  z_39 :
  w_39 :
  Return();
  v_39 :
  Epopd(11,2);
  MatchVard(10,1);
  BuildVard(8,1);
  Tpush();
  BuildVard(9,1);
  Tpush();
  BuildVard(10,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(10,1);
  Epopd(9,1);
  Epopd(8,1);
  Epopd(7,6);
  Epopd(6,1);
  OneNextSon();
  Rpush(g_40);
  goto b_92;
  g_40 :
  AllBuild();
  v_38 :
  Return();
  u_38 :
  Epopd(5,0);
  Epopd(4,1);
  OneNextSon();
  Rpush(h_40);
  goto a_92;
  h_40 :
  AllBuild();
  r_38 :
  Return();
  q_38 :
  Rpush(i_40);
  i_92 :
  Cpush(k_40);
  Rpush(l_40);
  goto x_98;
  l_40 :
  BuildFun("Nil",0);
  Cpop();
  goto j_40;
  k_40 :
  Epushd(4,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
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
  Epopd(4,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_40);
  goto i_92;
  m_40 :
  OneNextSon();
  Rpush(n_40);
  goto m_99;
  n_40 :
  AllBuild();
  AllBuild();
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
  Rpush(p_40);
  j_92 :
  Cpush(r_40);
  Rpush(s_40);
  goto x_98;
  s_40 :
  BuildVard(4,1);
  Cpop();
  goto q_40;
  r_40 :
  Cpush(u_40);
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
  v_40 :
  MatchFun("Cons",2);
  Cpush(w_40);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto x_40;
  w_40 :
  Arg(1);
  Tdrop();
  goto v_40;
  x_40 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(y_40);
  goto j_92;
  y_40 :
  Cpop();
  goto t_40;
  u_40 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_40);
  goto j_92;
  z_40 :
  AllBuild();
  t_40 :
  q_40 :
  Return();
  p_40 :
  Epopd(4,2);
  j_40 :
  Return();
  i_40 :
  Epopd(3,0);
  Epopd(2,2);
  l_38 :
  Return();
  k_38 :
  Epopd(1,3);
  Epopd(0,0);
  Return();
  i_100 :
  Epushd(0,0);
  _ST_explode_term();
  Epopd(0,0);
  Return();
  j_100 :
  Epushd(0,0);
  Rpush(a_41);
  goto k_100;
  a_41 :
  Rpush(b_41);
  goto n_100;
  b_41 :
  Epopd(0,0);
  Return();
  k_100 :
  Cpush(d_41);
  Epushd(0,3);
  MatchFun("RDef",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Epushd(1,1);
  BuildVard(0,3);
  Epushd(2,0);
  Rpush(e_41);
  q_92 :
  Cpush(g_41);
  Rpush(h_41);
  goto x_98;
  h_41 :
  Cpop();
  goto f_41;
  g_41 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(4,1);
  BuildVard(3,2);
  Rpush(i_41);
  goto l_100;
  i_41 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(j_41);
  goto m_100;
  j_41 :
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Rpush(k_41);
  goto s_99;
  k_41 :
  Epopd(3,3);
  OneNextSon();
  Rpush(l_41);
  goto q_92;
  l_41 :
  AllBuild();
  f_41 :
  Return();
  e_41 :
  Epopd(2,0);
  Rpush(m_41);
  goto s_99;
  m_41 :
  MatchVard(1,1);
  BuildStr("error in rule ");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr(" : ");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Epopd(0,3);
  Cpop();
  goto c_41;
  d_41 :
  Cpush(o_41);
  Epushd(0,3);
  MatchFun("SDef",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Epushd(1,1);
  BuildVard(0,3);
  Epushd(2,0);
  Rpush(p_41);
  g_93 :
  Cpush(r_41);
  Rpush(s_41);
  goto x_98;
  s_41 :
  Cpop();
  goto q_41;
  r_41 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(4,1);
  BuildVard(3,2);
  Rpush(t_41);
  goto l_100;
  t_41 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(u_41);
  goto m_100;
  u_41 :
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Rpush(v_41);
  goto s_99;
  v_41 :
  Epopd(3,3);
  OneNextSon();
  Rpush(w_41);
  goto g_93;
  w_41 :
  AllBuild();
  q_41 :
  Return();
  p_41 :
  Epopd(2,0);
  Rpush(x_41);
  goto s_99;
  x_41 :
  MatchVard(1,1);
  BuildStr("error in definition ");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr(" : ");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Epopd(0,3);
  Cpop();
  goto n_41;
  o_41 :
  Epushd(0,3);
  MatchFun("Overlay",3);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Arg(2);
  MatchVard(0,3);
  Tpop();
  Epushd(1,1);
  BuildVard(0,3);
  Epushd(2,0);
  Rpush(y_41);
  w_93 :
  Cpush(a_42);
  Rpush(b_42);
  goto x_98;
  b_42 :
  Cpop();
  goto z_41;
  a_42 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(4,1);
  BuildVard(3,2);
  Rpush(c_42);
  goto l_100;
  c_42 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(d_42);
  goto m_100;
  d_42 :
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Rpush(e_42);
  goto s_99;
  e_42 :
  Epopd(3,3);
  OneNextSon();
  Rpush(f_42);
  goto w_93;
  f_42 :
  AllBuild();
  z_41 :
  Return();
  y_41 :
  Epopd(2,0);
  Rpush(g_42);
  goto s_99;
  g_42 :
  MatchVard(1,1);
  BuildStr("error in overlay ");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr(" : ");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Epopd(0,3);
  n_41 :
  c_41 :
  Return();
  l_100 :
  Cpush(i_42);
  Epushd(0,0);
  MatchFun("Nil",0);
  BuildFun("Nil",0);
  Epopd(0,0);
  Cpop();
  goto h_42;
  i_42 :
  Cpush(k_42);
  Epushd(0,1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  BuildStr("variable ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(": used, but not bound");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,1);
  Cpop();
  goto j_42;
  k_42 :
  Epushd(0,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildStr("variables ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr(": used, but not bound");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,3);
  j_42 :
  h_42 :
  Return();
  m_100 :
  Cpush(m_42);
  Epushd(0,0);
  MatchFun("Nil",0);
  BuildFun("Nil",0);
  Epopd(0,0);
  Cpop();
  goto l_42;
  m_42 :
  Cpush(o_42);
  Epushd(0,1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("Nil",0);
  Tpop();
  BuildStr("variable ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildStr(": declared, but not bound");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,1);
  Cpop();
  goto n_42;
  o_42 :
  Epushd(0,3);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildStr("variables ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr(": declared, but not bound");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,3);
  n_42 :
  l_42 :
  Return();
  n_100 :
  Epushd(0,0);
  Tdupl();
  Rpush(p_42);
  goto o_100;
  p_42 :
  BuildInt(1);
  Rpush(q_42);
  goto d_99;
  q_42 :
  Tpop();
  Epopd(0,0);
  Return();
  o_100 :
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
  Rpush(r_42);
  goto c_99;
  r_42 :
  Tpop();
  Epopd(0,0);
  Return();
  p_100 :
  Epushd(0,0);
  Rpush(s_42);
  b_32 :
  Epushd(1,0);
  Cpush(u_42);
  MatchFun("Op",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(2,0);
  Rpush(v_42);
  m_94 :
  Cpush(x_42);
  Rpush(y_42);
  goto x_98;
  y_42 :
  Cpop();
  goto w_42;
  x_42 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(z_42);
  goto b_32;
  z_42 :
  OneNextSon();
  Rpush(a_43);
  goto m_94;
  a_43 :
  AllBuild();
  w_42 :
  Return();
  v_42 :
  Epopd(2,0);
  AllBuild();
  Cpop();
  goto t_42;
  u_42 :
  t_42 :
  Epopd(1,0);
  Rpush(b_43);
  goto q_100;
  b_43 :
  Return();
  s_42 :
  Epopd(0,0);
  Return();
  q_100 :
  Cpush(d_43);
  Epushd(0,1);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Epopd(0,1);
  Cpop();
  goto c_43;
  d_43 :
  Cpush(f_43);
  Epushd(0,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Call",2);
  Epopd(0,2);
  Cpop();
  goto e_43;
  f_43 :
  Epushd(0,4);
  MatchFunFC("Str",1,&&l_43);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(m_43);
  goto i_3;
  m_43 :
  goto k_43;
  l_43 :
  MatchFunFC("Int",1,&&n_43);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(o_43);
  goto j_3;
  o_43 :
  goto k_43;
  n_43 :
  MatchFunFC("Real",1,&&p_43);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Rpush(q_43);
  goto k_3;
  q_43 :
  goto k_43;
  p_43 :
  MatchFunFC("BuildDefault",1,&&r_43);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Rpush(s_43);
  goto l_3;
  s_43 :
  goto k_43;
  r_43 :
  goto fail;
  k_43 :
  goto j_43;
  l_3 :
  BuildFun("Id",0);
  Return();
  j_43 :
  goto i_43;
  k_3 :
  BuildVard(0,3);
  Tpush();
  BuildFun("Real",1);
  Tpush();
  BuildFun("Match",1);
  Return();
  i_43 :
  goto h_43;
  j_3 :
  BuildVard(0,2);
  Tpush();
  BuildFun("Int",1);
  Tpush();
  BuildFun("Match",1);
  Return();
  h_43 :
  goto g_43;
  i_3 :
  BuildVard(0,1);
  Tpush();
  BuildFun("Str",1);
  Tpush();
  BuildFun("Match",1);
  Return();
  g_43 :
  Epopd(0,4);
  e_43 :
  c_43 :
  Return();
  r_100 :
  Epushd(0,2);
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
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(t_43);
  p_94 :
  Epushd(1,0);
  Rpush(u_43);
  g_96 :
  Cpush(w_43);
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
  Rpush(x_43);
  goto s_100;
  x_43 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto v_43;
  w_43 :
  Cpush(z_43);
  Epushd(2,3);
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
  Tdupl();
  BuildVard(2,2);
  MatchFun("Var",1);
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
  Rpush(a_44);
  goto s_100;
  a_44 :
  Epopd(2,3);
  Cpop();
  goto y_43;
  z_43 :
  Cpush(c_44);
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
  Rpush(d_44);
  goto y_99;
  d_44 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(e_44);
  i_97 :
  Cpush(g_44);
  Rpush(h_44);
  goto x_98;
  h_44 :
  Cpop();
  goto f_44;
  g_44 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_44);
  goto t_100;
  i_44 :
  OneNextSon();
  Rpush(j_44);
  goto i_97;
  j_44 :
  AllBuild();
  f_44 :
  Return();
  e_44 :
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
  Rpush(k_44);
  j_97 :
  Cpush(m_44);
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
  goto l_44;
  m_44 :
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
  Rpush(n_44);
  goto j_97;
  n_44 :
  OneNextSon();
  Rpush(o_44);
  goto m_99;
  o_44 :
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
  l_44 :
  Return();
  k_44 :
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
  Rpush(p_44);
  k_97 :
  Cpush(r_44);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_44);
  goto k_97;
  s_44 :
  AllBuild();
  Cpop();
  goto q_44;
  r_44 :
  Rpush(t_44);
  goto x_98;
  t_44 :
  BuildVard(3,1);
  q_44 :
  Return();
  p_44 :
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
  Rpush(u_44);
  goto p_94;
  u_44 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto b_44;
  c_44 :
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
  v_44 :
  AllNextSon(&&w_44);
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
  Rpush(x_44);
  goto g_96;
  x_44 :
  Epopd(3,1);
  goto v_44;
  w_44 :
  AllBuild();
  Epopd(2,2);
  b_44 :
  y_43 :
  v_43 :
  Return();
  u_43 :
  Epopd(1,0);
  Return();
  t_43 :
  Epopd(0,2);
  Return();
  s_100 :
  Epushd(0,0);
  Rpush(y_44);
  w_36 :
  Cpush(a_45);
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
  goto z_44;
  a_45 :
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
  Rpush(b_45);
  goto w_36;
  b_45 :
  z_44 :
  Return();
  y_44 :
  Epopd(0,0);
  Return();
  t_100 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  u_100 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(c_45);
  s_97 :
  Cpush(e_45);
  Rpush(f_45);
  goto x_98;
  f_45 :
  Cpop();
  goto d_45;
  e_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(g_45);
  goto v_100;
  g_45 :
  OneNextSon();
  Rpush(h_45);
  goto s_97;
  h_45 :
  AllBuild();
  d_45 :
  Return();
  c_45 :
  Epopd(1,0);
  Rpush(i_45);
  goto s_99;
  i_45 :
  Rpush(j_45);
  goto w_100;
  j_45 :
  Epopd(0,0);
  Return();
  v_100 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  w_100 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  x_100 :
  Epushd(0,0);
  Rpush(k_45);
  u_39 :
  Cpush(m_45);
  Rpush(n_45);
  goto x_98;
  n_45 :
  BuildInt(0);
  Cpop();
  goto l_45;
  m_45 :
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
  Rpush(o_45);
  goto u_39;
  o_45 :
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
  Rpush(p_45);
  goto y_100;
  p_45 :
  Epopd(1,1);
  l_45 :
  Return();
  k_45 :
  Epopd(0,0);
  Return();
  y_100 :
  Epushd(0,0);
  _ST_plus();
  Epopd(0,0);
  Return();
  z_100 :
  Epushd(0,0);
  Rpush(q_45);
  x_34 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildInt(10);
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
  Rpush(r_45);
  goto a_101;
  r_45 :
  Epopd(3,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildInt(48);
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
  Rpush(s_45);
  goto b_101;
  s_45 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildFun("TNil",0);
  BuildInt(10);
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
  Rpush(t_45);
  goto c_101;
  t_45 :
  Epopd(4,1);
  Rpush(u_45);
  goto d_101;
  u_45 :
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
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(w_45);
  MatchInt(0);
  BuildFun("Nil",0);
  Cpop();
  goto v_45;
  w_45 :
  Rpush(x_45);
  goto x_34;
  x_45 :
  v_45 :
  OneNextSon();
  Rpush(y_45);
  goto m_99;
  y_45 :
  AllBuild();
  AllBuild();
  Rpush(z_45);
  goto e_101;
  z_45 :
  Return();
  q_45 :
  Rpush(a_46);
  goto f_101;
  a_46 :
  Rpush(b_46);
  goto w_100;
  b_46 :
  Epopd(0,0);
  Return();
  a_101 :
  Epushd(0,0);
  _ST_mod();
  Epopd(0,0);
  Return();
  b_101 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  c_101 :
  Epushd(0,0);
  _ST_div();
  Epopd(0,0);
  Return();
  d_101 :
  Epushd(0,0);
  _ST_int();
  Epopd(0,0);
  Return();
  e_101 :
  Cpush(d_46);
  Epushd(0,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
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
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,1);
  Cpop();
  goto c_46;
  d_46 :
  Epushd(0,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(0,3);
  c_46 :
  Return();
  f_101 :
  Epushd(0,2);
  MatchVard(0,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,0);
  Cpush(f_46);
  e_46 :
  Epushd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
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
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
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
  Epopd(2,3);
  Tduplinv();
  goto e_46;
  f_46 :
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
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
  BuildVard(0,2);
  Epopd(0,2);
  Return();
  g_46 :
DOIT_END
