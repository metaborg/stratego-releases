#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(s_47);
  goto main;
  main :
  Epushd(0,0);
  Rpush(m_3);
  goto w_102;
  m_3 :
  Epopd(0,0);
  Return();
  w_102 :
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
  goto x_102;
  e_4 :
  Cpop();
  goto c_4;
  d_4 :
  Rpush(f_4);
  goto y_102;
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
  goto z_102;
  j_4 :
  Cpop();
  goto h_4;
  i_4 :
  Cpush(l_4);
  Rpush(m_4);
  goto e_103;
  m_4 :
  Epushd(1,1);
  Tdupl();
  Rpush(n_4);
  goto g_103;
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
  goto n_103;
  o_4 :
  OneNextSon();
  Rpush(p_4);
  goto m_103;
  p_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(q_4);
  goto g_103;
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
  goto h_103;
  r_4 :
  Rpush(s_4);
  goto k_103;
  s_4 :
  Cpop();
  goto k_4;
  l_4 :
  Rpush(t_4);
  goto l_103;
  t_4 :
  k_4 :
  h_4 :
  Epopd(0,0);
  Return();
  x_102 :
  MatchFun("Nil",0);
  Return();
  y_102 :
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
  z_102 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  b_8 :
  MatchFun("Cons",2);
  Cpush(c_8);
  Arg(0);
  Cpush(f_8);
  Rpush(g_8);
  goto a_103;
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
  goto b_103;
  h_8 :
  Epopd(0,0);
  Return();
  a_103 :
  MatchFun("Help",0);
  Return();
  b_103 :
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
  goto c_103;
  l_8 :
  BuildInt(1);
  Rpush(m_8);
  goto d_103;
  m_8 :
  Tpop();
  Epopd(0,1);
  Return();
  c_103 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  d_103 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  e_103 :
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
  goto f_103;
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
  f_103 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  g_103 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  h_103 :
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
  goto m_103;
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
  goto m_103;
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
  goto i_103;
  m_9 :
  OneNextSon();
  Rpush(n_9);
  goto m_103;
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
  goto j_103;
  o_9 :
  OneNextSon();
  Rpush(p_9);
  goto m_103;
  p_9 :
  AllBuild();
  AllBuild();
  h_9 :
  Epopd(0,1);
  Return();
  i_103 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  j_103 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  k_103 :
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
  goto m_103;
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
  goto m_103;
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
  goto m_103;
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
  goto c_103;
  f_10 :
  Cpop();
  goto q_9;
  r_9 :
  q_9 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(g_10);
  goto d_103;
  g_10 :
  Epopd(0,2);
  Return();
  l_103 :
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
  goto c_103;
  h_10 :
  BuildInt(1);
  Rpush(i_10);
  goto d_103;
  i_10 :
  Epopd(0,0);
  Return();
  m_103 :
  MatchFun("TNil",0);
  Return();
  n_103 :
  Epushd(0,0);
  Rpush(j_10);
  goto o_103;
  j_10 :
  Tdupl();
  Rpush(k_10);
  goto z_103;
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
  goto m_103;
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
  goto m_103;
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
  goto r_104;
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
  goto m_103;
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
  goto m_103;
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
  goto r_104;
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
  goto x_102;
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
  goto p_104;
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
  v_26 :
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
  z_26 :
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
  a_27 :
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
  goto m_103;
  r_12 :
  AllBuild();
  AllBuild();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(s_12);
  goto a_27;
  s_12 :
  OneNextSon();
  Rpush(t_12);
  goto m_103;
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
  goto z_26;
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
  goto r_104;
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
  goto v_26;
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
  f_27 :
  Cpush(t_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto f_27;
  u_13 :
  AllBuild();
  Cpop();
  goto s_13;
  t_13 :
  Rpush(v_13);
  goto x_102;
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
  n_57 :
  Cpush(a_14);
  Rpush(b_14);
  goto x_102;
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
  goto u_104;
  g_14 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(h_14);
  o_57 :
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
  p_57 :
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
  q_57 :
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
  goto q_57;
  t_14 :
  OneNextSon();
  Rpush(u_14);
  goto m_103;
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
  goto p_57;
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
  goto x_104;
  w_14 :
  Rpush(x_14);
  goto z_104;
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
  goto u_104;
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
  goto c_103;
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
  goto o_57;
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
  goto o_57;
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
  goto u_104;
  i_15 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(j_15);
  r_57 :
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
  s_57 :
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
  t_57 :
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
  goto t_57;
  v_15 :
  OneNextSon();
  Rpush(w_15);
  goto m_103;
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
  goto s_57;
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
  goto x_104;
  y_15 :
  Rpush(z_15);
  goto z_104;
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
  goto u_104;
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
  goto c_103;
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
  goto r_57;
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
  goto r_57;
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
  goto n_57;
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
  goto n_57;
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
  v_57 :
  Cpush(o_16);
  Rpush(p_16);
  goto x_102;
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
  goto u_104;
  u_16 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(v_16);
  w_57 :
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
  x_57 :
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
  y_57 :
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
  goto y_57;
  h_17 :
  OneNextSon();
  Rpush(i_17);
  goto m_103;
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
  goto x_57;
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
  goto x_104;
  k_17 :
  Rpush(l_17);
  goto z_104;
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
  goto u_104;
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
  goto c_103;
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
  goto w_57;
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
  goto w_57;
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
  goto u_104;
  e_18 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(f_18);
  z_57 :
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
  a_58 :
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
  b_58 :
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
  goto b_58;
  e_19 :
  OneNextSon();
  Rpush(l_19);
  goto m_103;
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
  goto a_58;
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
  goto x_104;
  n_19 :
  Rpush(o_19);
  goto z_104;
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
  goto u_104;
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
  goto c_103;
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
  goto z_57;
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
  goto z_57;
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
  goto v_57;
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
  goto v_57;
  c_20 :
  q_16 :
  n_16 :
  Return();
  m_16 :
  Epopd(3,0);
  OneNextSon();
  Rpush(d_20);
  goto m_103;
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
  o_103 :
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
  e_58 :
  Cpush(g_20);
  Rpush(h_20);
  goto x_102;
  h_20 :
  Cpop();
  goto f_20;
  g_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_20);
  goto p_103;
  i_20 :
  OneNextSon();
  Rpush(j_20);
  goto e_58;
  j_20 :
  AllBuild();
  f_20 :
  Return();
  e_20 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(k_20);
  h_59 :
  Cpush(p_20);
  Rpush(q_20);
  goto x_102;
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
  goto h_59;
  r_20 :
  OneNextSon();
  Rpush(s_20);
  goto m_103;
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
  i_60 :
  Cpush(z_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_21);
  goto i_60;
  a_21 :
  AllBuild();
  Cpop();
  goto y_20;
  z_20 :
  Rpush(b_21);
  goto x_102;
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
  j_60 :
  Cpush(e_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_21);
  goto j_60;
  f_21 :
  AllBuild();
  Cpop();
  goto d_21;
  e_21 :
  Rpush(g_21);
  goto x_102;
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
  k_60 :
  Cpush(j_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_21);
  goto k_60;
  k_21 :
  AllBuild();
  Cpop();
  goto i_21;
  j_21 :
  Rpush(l_21);
  goto x_102;
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
  l_60 :
  Cpush(o_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_21);
  goto l_60;
  p_21 :
  AllBuild();
  Cpop();
  goto n_21;
  o_21 :
  Rpush(q_21);
  goto x_102;
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
  goto t_103;
  r_21 :
  AllBuild();
  Rpush(s_21);
  goto w_103;
  s_21 :
  Epopd(0,0);
  Return();
  p_103 :
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
  MatchFunFC("Overlays",1,&&e_22);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Rpush(f_22);
  goto z_2;
  f_22 :
  goto x_21;
  e_22 :
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
  Rpush(g_22);
  goto q_103;
  g_22 :
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
  q_103 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(j_22);
  q_60 :
  Cpush(l_22);
  Rpush(p_22);
  goto x_102;
  p_22 :
  Cpop();
  goto k_22;
  l_22 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_22);
  goto r_103;
  q_22 :
  OneNextSon();
  Rpush(r_22);
  goto q_60;
  r_22 :
  AllBuild();
  k_22 :
  Return();
  j_22 :
  Epopd(1,0);
  Rpush(s_22);
  goto s_103;
  s_22 :
  Epopd(0,0);
  Return();
  r_103 :
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
  s_103 :
  Epushd(0,0);
  Rpush(a_23);
  z_40 :
  Cpush(c_23);
  Rpush(d_23);
  goto x_102;
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
  t_60 :
  Cpush(g_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_23);
  goto t_60;
  h_23 :
  AllBuild();
  Cpop();
  goto f_23;
  g_23 :
  Rpush(i_23);
  goto x_102;
  i_23 :
  BuildVard(1,1);
  Rpush(j_23);
  goto z_40;
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
  t_103 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,0);
  Rpush(k_23);
  u_61 :
  Cpush(m_23);
  Rpush(n_23);
  goto x_102;
  n_23 :
  Cpop();
  goto l_23;
  m_23 :
  Cpush(p_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_23);
  goto u_103;
  q_23 :
  OneNextSon();
  Rpush(r_23);
  goto u_61;
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
  goto u_61;
  s_23 :
  o_23 :
  l_23 :
  Return();
  k_23 :
  Epopd(3,0);
  Rpush(t_23);
  goto s_103;
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
  v_61 :
  Cpush(w_23);
  Rpush(x_23);
  goto x_102;
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
  goto v_61;
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
  goto v_103;
  z_23 :
  Epopd(0,0);
  Return();
  u_103 :
  Epushd(0,2);
  MatchFunFC("Signature",1,&&d_24);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(e_24);
  goto f_3;
  e_24 :
  goto c_24;
  d_24 :
  MatchFunFC("Overlays",1,&&f_24);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(g_24);
  goto h_3;
  g_24 :
  goto c_24;
  f_24 :
  goto fail;
  c_24 :
  goto b_24;
  h_3 :
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(i_24);
  v_62 :
  Cpush(k_24);
  Rpush(l_24);
  goto x_102;
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
  goto v_62;
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
  goto v_62;
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
  g_62 :
  Cpush(s_24);
  Rpush(t_24);
  goto x_102;
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
  q_62 :
  Cpush(y_24);
  Rpush(z_24);
  goto x_102;
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
  goto q_62;
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
  goto q_62;
  d_25 :
  a_25 :
  x_24 :
  Return();
  w_24 :
  Epopd(3,0);
  Epopd(2,1);
  OneNextSon();
  Rpush(e_25);
  goto g_62;
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
  goto g_62;
  f_25 :
  u_24 :
  r_24 :
  Return();
  q_24 :
  Epopd(1,0);
  Rpush(g_25);
  goto s_103;
  g_25 :
  Return();
  a_24 :
  Epopd(0,2);
  Return();
  v_103 :
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
  f_64 :
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
  goto f_64;
  k_25 :
  OneNextSon();
  Rpush(l_25);
  goto m_103;
  l_25 :
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
  Rpush(m_25);
  j_64 :
  Cpush(w_25);
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
  x_25 :
  MatchFun("Cons",2);
  Cpush(y_25);
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
  y_25 :
  Arg(1);
  Tdrop();
  goto x_25;
  b_26 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(3,2);
  Epopd(4,1);
  Epopd(3,2);
  Cpop();
  goto n_25;
  w_25 :
  AllInit();
  c_26 :
  AllNextSon(&&d_26);
  Rpush(e_26);
  goto j_64;
  e_26 :
  goto c_26;
  d_26 :
  AllBuild();
  n_25 :
  Return();
  m_25 :
  Epopd(2,0);
  Epopd(1,1);
  Epopd(0,3);
  Return();
  w_103 :
  Epushd(0,0);
  Rpush(f_26);
  w_64 :
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
  Rpush(i_26);
  goto x_103;
  i_26 :
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
  j_26 :
  AllNextSon(&&k_26);
  Rpush(m_26);
  goto w_64;
  m_26 :
  goto j_26;
  k_26 :
  AllBuild();
  Return();
  f_26 :
  Epopd(0,0);
  Return();
  x_103 :
  Epushd(0,0);
  Rpush(n_26);
  d_65 :
  Cpush(p_26);
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
  goto o_26;
  p_26 :
  Cpush(t_26);
  Epushd(1,1);
  Tdupl();
  Rpush(w_26);
  goto y_103;
  w_26 :
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
  Rpush(x_26);
  goto d_65;
  x_26 :
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
  Rpush(y_26);
  h_66 :
  Cpush(d_27);
  Rpush(g_27);
  goto x_102;
  g_27 :
  Cpop();
  goto c_27;
  d_27 :
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
  goto h_66;
  m_27 :
  Cpop();
  goto h_27;
  i_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_27);
  goto h_66;
  n_27 :
  AllBuild();
  h_27 :
  c_27 :
  Return();
  y_26 :
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
  c_67 :
  Cpush(q_27);
  Rpush(r_27);
  goto x_102;
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
  goto c_67;
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
  h_67 :
  Cpush(v_27);
  Rpush(w_27);
  goto x_102;
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
  goto h_67;
  c_28 :
  Cpop();
  goto x_27;
  y_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_28);
  goto h_67;
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
  goto s_26;
  t_26 :
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
  b_68 :
  Cpush(g_28);
  Rpush(h_28);
  goto x_102;
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
  goto d_65;
  i_28 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(j_28);
  goto b_68;
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
  g_68 :
  Cpush(m_28);
  Rpush(n_28);
  goto x_102;
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
  goto g_68;
  t_28 :
  Cpop();
  goto o_28;
  p_28 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_28);
  goto g_68;
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
  s_26 :
  o_26 :
  Return();
  n_26 :
  Epopd(0,0);
  Return();
  y_103 :
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
  goto x_103;
  x_28 :
  Epopd(0,3);
  v_28 :
  Return();
  z_103 :
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
  goto a_104;
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
  goto a_104;
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
  goto a_104;
  a_29 :
  AllBuild();
  OneNextSon();
  Rpush(b_29);
  goto x_102;
  b_29 :
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  a_104 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(c_29);
  i_68 :
  Cpush(e_29);
  Rpush(f_29);
  goto x_102;
  f_29 :
  Cpop();
  goto d_29;
  e_29 :
  Cpush(h_29);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_29);
  goto b_104;
  i_29 :
  OneNextSon();
  Rpush(j_29);
  goto i_68;
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
  goto i_68;
  k_29 :
  g_29 :
  d_29 :
  Return();
  c_29 :
  Epopd(1,0);
  MatchFun("Nil",0);
  Epopd(0,0);
  Return();
  b_104 :
  Epushd(0,0);
  Cpush(m_29);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(n_29);
  goto c_104;
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
  goto x_102;
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
  goto x_102;
  q_29 :
  OneNextSon();
  Rpush(r_29);
  goto m_103;
  r_29 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(s_29);
  goto x_102;
  s_29 :
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  o_29 :
  AllBuild();
  Rpush(t_29);
  goto j_104;
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
  goto c_104;
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
  goto x_102;
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
  goto x_102;
  z_29 :
  OneNextSon();
  Rpush(a_30);
  goto m_103;
  a_30 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(b_30);
  goto x_102;
  b_30 :
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  x_29 :
  AllBuild();
  Rpush(c_30);
  goto j_104;
  c_30 :
  Cpop();
  goto u_29;
  v_29 :
  MatchFun("Overlay",3);
  Rpush(d_30);
  goto c_104;
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
  goto x_102;
  f_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(g_30);
  goto x_102;
  g_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_30);
  goto x_102;
  h_30 :
  OneNextSon();
  Rpush(i_30);
  goto m_103;
  i_30 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(j_30);
  goto x_102;
  j_30 :
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  e_30 :
  Rpush(k_30);
  goto j_104;
  k_30 :
  u_29 :
  l_29 :
  Epopd(0,0);
  Return();
  c_104 :
  Epushd(0,0);
  Rpush(l_30);
  d_31 :
  Cpush(n_30);
  Epushd(1,0);
  Cpush(p_30);
  MatchFun("Build",1);
  TravInit();
  OneNextSon();
  Rpush(q_30);
  goto e_104;
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
  goto d_104;
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
  goto d_104;
  w_30 :
  OneNextSon();
  Rpush(x_30);
  goto d_31;
  x_30 :
  AllBuild();
  Cpop();
  goto u_30;
  v_30 :
  Cpush(z_30);
  MatchFun("AM",2);
  TravInit();
  OneNextSon();
  Rpush(a_31);
  goto d_31;
  a_31 :
  OneNextSon();
  Rpush(b_31);
  goto d_104;
  b_31 :
  AllBuild();
  Cpop();
  goto y_30;
  z_30 :
  Cpush(e_31);
  MatchFun("BA",2);
  TravInit();
  OneNextSon();
  Rpush(f_31);
  goto d_31;
  f_31 :
  OneNextSon();
  Rpush(g_31);
  goto e_104;
  g_31 :
  AllBuild();
  Cpop();
  goto c_31;
  e_31 :
  Cpush(i_31);
  MatchFun("BAM",3);
  TravInit();
  OneNextSon();
  Rpush(j_31);
  goto d_31;
  j_31 :
  OneNextSon();
  Rpush(k_31);
  goto e_104;
  k_31 :
  OneNextSon();
  Rpush(l_31);
  goto d_104;
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
  goto d_31;
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
  goto d_104;
  r_31 :
  OneNextSon();
  Rpush(s_31);
  goto e_104;
  s_31 :
  OneNextSon();
  Rpush(t_31);
  goto d_31;
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
  goto e_104;
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
  m_68 :
  Cpush(z_31);
  Rpush(a_32);
  goto x_102;
  a_32 :
  Cpop();
  goto y_31;
  z_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(b_32);
  goto d_31;
  b_32 :
  OneNextSon();
  Rpush(c_32);
  goto m_68;
  c_32 :
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
  c_31 :
  y_30 :
  u_30 :
  r_30 :
  o_30 :
  Epopd(1,0);
  Cpop();
  goto m_30;
  n_30 :
  AllInit();
  d_32 :
  AllNextSon(&&f_32);
  Rpush(g_32);
  goto d_31;
  g_32 :
  goto d_32;
  f_32 :
  AllBuild();
  m_30 :
  Cpush(i_32);
  Rpush(j_32);
  goto f_104;
  j_32 :
  Cpop();
  goto h_32;
  i_32 :
  Rpush(k_32);
  goto h_104;
  k_32 :
  h_32 :
  Return();
  l_30 :
  Epopd(0,0);
  Return();
  d_104 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(l_32);
  goto x_103;
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
  e_104 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(m_32);
  goto x_103;
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
  f_104 :
  Cpush(o_32);
  Epushd(0,1);
  MatchFun("Seqs",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Rpush(p_32);
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  goto g_104;
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
  t_69 :
  Cpush(s_33);
  Rpush(t_33);
  goto x_102;
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
  e_72 :
  Cpush(w_33);
  Rpush(x_33);
  goto x_102;
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
  goto e_72;
  d_34 :
  Cpop();
  goto y_33;
  z_33 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_34);
  goto e_72;
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
  g_72 :
  Cpush(h_34);
  Rpush(i_34);
  goto x_102;
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
  goto g_72;
  o_34 :
  Cpop();
  goto j_34;
  k_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_34);
  goto g_72;
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
  i_72 :
  Cpush(s_34);
  Rpush(t_34);
  goto x_102;
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
  Cpush(x_34);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Cpop();
  goto y_34;
  x_34 :
  Arg(1);
  Tdrop();
  goto w_34;
  y_34 :
  Tpop();
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(z_34);
  goto i_72;
  z_34 :
  Cpop();
  goto u_34;
  v_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_35);
  goto i_72;
  a_35 :
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
  Rpush(b_35);
  k_72 :
  Cpush(d_35);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_35);
  goto k_72;
  e_35 :
  AllBuild();
  Cpop();
  goto c_35;
  d_35 :
  Rpush(f_35);
  goto x_102;
  f_35 :
  BuildVard(5,1);
  c_35 :
  Return();
  b_35 :
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
  Rpush(g_35);
  goto t_69;
  g_35 :
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
  Rpush(h_35);
  goto g_104;
  h_35 :
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
  g_104 :
  Epushd(0,0);
  Rpush(j_35);
  o_81 :
  Cpush(l_35);
  Rpush(m_35);
  goto x_102;
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
  goto o_81;
  n_35 :
  OneNextSon();
  Rpush(o_35);
  goto m_103;
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
  b_83 :
  Cpush(r_35);
  Rpush(s_35);
  goto x_102;
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
  c_83 :
  Cpush(v_35);
  Rpush(w_35);
  goto x_102;
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
  d_83 :
  Cpush(z_35);
  Rpush(a_36);
  goto x_102;
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
  goto d_83;
  g_36 :
  Cpop();
  goto b_36;
  c_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_36);
  goto d_83;
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
  f_83 :
  Cpush(k_36);
  Rpush(l_36);
  goto x_102;
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
  goto f_83;
  r_36 :
  Cpop();
  goto m_36;
  n_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_36);
  goto f_83;
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
  h_83 :
  Cpush(v_36);
  Rpush(w_36);
  goto x_102;
  w_36 :
  BuildVard(9,1);
  Cpop();
  goto u_36;
  v_36 :
  Cpush(y_36);
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
  z_36 :
  MatchFun("Cons",2);
  Cpush(a_37);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto b_37;
  a_37 :
  Arg(1);
  Tdrop();
  goto z_36;
  b_37 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(c_37);
  goto h_83;
  c_37 :
  Cpop();
  goto x_36;
  y_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_37);
  goto h_83;
  d_37 :
  AllBuild();
  x_36 :
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
  Rpush(e_37);
  j_83 :
  Cpush(g_37);
  Rpush(i_37);
  goto x_102;
  i_37 :
  BuildVard(10,1);
  Cpop();
  goto f_37;
  g_37 :
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
  goto j_83;
  o_37 :
  Cpop();
  goto j_37;
  k_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_37);
  goto j_83;
  p_37 :
  AllBuild();
  j_37 :
  f_37 :
  Return();
  e_37 :
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
  goto c_83;
  q_37 :
  AllBuild();
  u_35 :
  Return();
  t_35 :
  Epopd(4,0);
  Epopd(3,1);
  OneNextSon();
  Rpush(r_37);
  goto b_83;
  r_37 :
  AllBuild();
  q_35 :
  Return();
  p_35 :
  Rpush(s_37);
  l_83 :
  Cpush(u_37);
  Rpush(v_37);
  goto x_102;
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
  goto l_83;
  w_37 :
  OneNextSon();
  Rpush(x_37);
  goto m_103;
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
  m_83 :
  Cpush(a_38);
  Rpush(b_38);
  goto x_102;
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
  goto m_83;
  h_38 :
  Cpop();
  goto c_38;
  d_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_38);
  goto m_83;
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
  h_104 :
  Epushd(0,0);
  Rpush(j_38);
  goto i_104;
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
  a_91 :
  Cpush(m_38);
  Rpush(n_38);
  goto x_102;
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
  goto a_91;
  o_38 :
  OneNextSon();
  Rpush(p_38);
  goto m_103;
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
  i_92 :
  Cpush(s_38);
  Rpush(t_38);
  goto x_102;
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
  j_92 :
  Cpush(w_38);
  Rpush(x_38);
  goto x_102;
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
  k_92 :
  Cpush(a_39);
  Rpush(b_39);
  goto x_102;
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
  goto k_92;
  h_39 :
  Cpop();
  goto c_39;
  d_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_39);
  goto k_92;
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
  m_92 :
  Cpush(l_39);
  Rpush(m_39);
  goto x_102;
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
  goto m_92;
  s_39 :
  Cpop();
  goto n_39;
  o_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_39);
  goto m_92;
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
  Rpush(u_39);
  o_92 :
  Cpush(w_39);
  Rpush(x_39);
  goto x_102;
  x_39 :
  BuildVard(11,1);
  Cpop();
  goto v_39;
  w_39 :
  Cpush(z_39);
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
  a_40 :
  MatchFun("Cons",2);
  Cpush(b_40);
  Arg(0);
  MatchVard(12,2);
  Tpop();
  Cpop();
  goto c_40;
  b_40 :
  Arg(1);
  Tdrop();
  goto a_40;
  c_40 :
  Tpop();
  Epopd(13,0);
  Tpop();
  BuildVard(12,1);
  Epopd(12,2);
  Rpush(d_40);
  goto o_92;
  d_40 :
  Cpop();
  goto y_39;
  z_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_40);
  goto o_92;
  e_40 :
  AllBuild();
  y_39 :
  v_39 :
  Return();
  u_39 :
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
  goto j_92;
  g_40 :
  AllBuild();
  v_38 :
  Return();
  u_38 :
  Epopd(5,0);
  Epopd(4,1);
  OneNextSon();
  Rpush(h_40);
  goto i_92;
  h_40 :
  AllBuild();
  r_38 :
  Return();
  q_38 :
  Rpush(i_40);
  q_92 :
  Cpush(k_40);
  Rpush(l_40);
  goto x_102;
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
  goto q_92;
  m_40 :
  OneNextSon();
  Rpush(n_40);
  goto m_103;
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
  Rpush(o_40);
  r_92 :
  Cpush(q_40);
  Rpush(r_40);
  goto x_102;
  r_40 :
  BuildVard(4,1);
  Cpop();
  goto p_40;
  q_40 :
  Cpush(t_40);
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
  u_40 :
  MatchFun("Cons",2);
  Cpush(v_40);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto w_40;
  v_40 :
  Arg(1);
  Tdrop();
  goto u_40;
  w_40 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(x_40);
  goto r_92;
  x_40 :
  Cpop();
  goto s_40;
  t_40 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_40);
  goto r_92;
  y_40 :
  AllBuild();
  s_40 :
  p_40 :
  Return();
  o_40 :
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
  i_104 :
  Epushd(0,0);
  _ST_explode_term();
  Epopd(0,0);
  Return();
  j_104 :
  Epushd(0,0);
  Rpush(a_41);
  goto k_104;
  a_41 :
  Rpush(b_41);
  goto n_104;
  b_41 :
  Epopd(0,0);
  Return();
  k_104 :
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
  y_92 :
  Cpush(g_41);
  Rpush(h_41);
  goto x_102;
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
  goto l_104;
  i_41 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(j_41);
  goto m_104;
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
  goto s_103;
  k_41 :
  Epopd(3,3);
  OneNextSon();
  Rpush(l_41);
  goto y_92;
  l_41 :
  AllBuild();
  f_41 :
  Return();
  e_41 :
  Epopd(2,0);
  Rpush(m_41);
  goto s_103;
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
  o_93 :
  Cpush(r_41);
  Rpush(s_41);
  goto x_102;
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
  goto l_104;
  t_41 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(u_41);
  goto m_104;
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
  goto s_103;
  v_41 :
  Epopd(3,3);
  OneNextSon();
  Rpush(w_41);
  goto o_93;
  w_41 :
  AllBuild();
  q_41 :
  Return();
  p_41 :
  Epopd(2,0);
  Rpush(x_41);
  goto s_103;
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
  e_94 :
  Cpush(a_42);
  Rpush(b_42);
  goto x_102;
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
  goto l_104;
  c_42 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(d_42);
  goto m_104;
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
  goto s_103;
  e_42 :
  Epopd(3,3);
  OneNextSon();
  Rpush(f_42);
  goto e_94;
  f_42 :
  AllBuild();
  z_41 :
  Return();
  y_41 :
  Epopd(2,0);
  Rpush(g_42);
  goto s_103;
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
  l_104 :
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
  m_104 :
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
  n_104 :
  Epushd(0,0);
  Tdupl();
  Rpush(p_42);
  goto o_104;
  p_42 :
  BuildInt(1);
  Rpush(q_42);
  goto d_103;
  q_42 :
  Tpop();
  Epopd(0,0);
  Return();
  o_104 :
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
  goto c_103;
  r_42 :
  Tpop();
  Epopd(0,0);
  Return();
  p_104 :
  Epushd(0,0);
  Rpush(s_42);
  e_32 :
  Epushd(1,0);
  Cpush(u_42);
  MatchFun("Op",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(2,0);
  Rpush(v_42);
  u_94 :
  Cpush(x_42);
  Rpush(y_42);
  goto x_102;
  y_42 :
  Cpop();
  goto w_42;
  x_42 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(z_42);
  goto e_32;
  z_42 :
  OneNextSon();
  Rpush(a_43);
  goto u_94;
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
  goto q_104;
  b_43 :
  Return();
  s_42 :
  Epopd(0,0);
  Return();
  q_104 :
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
  r_104 :
  Epushd(0,0);
  Cpush(u_43);
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
  Epushd(2,3);
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
  Rpush(v_43);
  f_95 :
  Cpush(x_43);
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
  goto w_43;
  x_43 :
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
  Rpush(y_43);
  goto f_95;
  y_43 :
  OneNextSon();
  Rpush(z_43);
  goto m_103;
  z_43 :
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
  w_43 :
  Return();
  v_43 :
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
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,3);
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
  BuildVard(2,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(a_44);
  o_95 :
  Epushd(3,0);
  Rpush(b_44);
  f_97 :
  Cpush(d_44);
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
  MatchFun("Var",1);
  TravInit();
  OneNextSon();
  Epushd(5,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(5,1);
  MatchVard(6,1);
  Epushd(7,1);
  BuildVard(5,1);
  BuildVard(4,1);
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
  Rpush(e_44);
  goto s_104;
  e_44 :
  AllBuild();
  Epopd(4,2);
  Cpop();
  goto c_44;
  d_44 :
  Cpush(g_44);
  Epushd(4,3);
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
  Tdupl();
  BuildVard(4,2);
  MatchFun("Var",1);
  BuildVard(2,3);
  MatchVard(4,3);
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(h_44);
  goto s_104;
  h_44 :
  Epopd(4,3);
  Cpop();
  goto f_44;
  g_44 :
  Cpush(j_44);
  Epushd(4,8);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,4);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(4,1);
  Rpush(k_44);
  goto y_103;
  k_44 :
  MatchVard(4,2);
  Epushd(5,0);
  Rpush(l_44);
  h_98 :
  Cpush(n_44);
  Rpush(o_44);
  goto x_102;
  o_44 :
  Cpop();
  goto m_44;
  n_44 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(p_44);
  goto t_104;
  p_44 :
  OneNextSon();
  Rpush(q_44);
  goto h_98;
  q_44 :
  AllBuild();
  m_44 :
  Return();
  l_44 :
  Epopd(5,0);
  MatchVard(4,3);
  Epushd(5,1);
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(6,0);
  Rpush(r_44);
  i_98 :
  Cpush(t_44);
  Epushd(7,0);
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
  Epopd(7,0);
  Cpop();
  goto s_44;
  t_44 :
  Epushd(7,4);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(7,1);
  Tpop();
  Arg(1);
  MatchVard(7,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(7,2);
  Tpop();
  Arg(1);
  MatchVard(7,4);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(7,1);
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(7,3);
  Tpush();
  BuildVard(7,4);
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
  Epopd(7,4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(u_44);
  goto i_98;
  u_44 :
  OneNextSon();
  Rpush(v_44);
  goto m_103;
  v_44 :
  AllBuild();
  AllBuild();
  Epushd(7,2);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(7,1);
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
  BuildVard(7,1);
  Tpush();
  BuildVard(7,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(7,2);
  s_44 :
  Return();
  r_44 :
  Epopd(6,0);
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(4,4);
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
  Rpush(w_44);
  j_98 :
  Cpush(y_44);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_44);
  goto j_98;
  z_44 :
  AllBuild();
  Cpop();
  goto x_44;
  y_44 :
  Rpush(a_45);
  goto x_102;
  a_45 :
  BuildVard(5,1);
  x_44 :
  Return();
  w_44 :
  Epopd(6,0);
  Epopd(5,2);
  MatchVard(4,5);
  Tpop();
  Epushd(5,1);
  BuildVard(4,1);
  Epushd(6,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  BuildVard(4,3);
  OneNextSon();
  AllBuild();
  Epopd(6,0);
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(4,4);
  Tpush();
  BuildVard(4,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(5,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,7);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(4,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(4,8);
  Epushd(5,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(6,1);
  MatchVard(6,1);
  BuildVard(6,1);
  Tpush();
  BuildVard(4,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(b_45);
  goto o_95;
  b_45 :
  Epopd(6,1);
  AllBuild();
  Epopd(5,0);
  Epopd(4,8);
  Cpop();
  goto i_44;
  j_44 :
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
  AllInit();
  c_45 :
  AllNextSon(&&d_45);
  Epushd(5,1);
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(e_45);
  goto f_97;
  e_45 :
  Epopd(5,1);
  goto c_45;
  d_45 :
  AllBuild();
  Epopd(4,2);
  i_44 :
  f_44 :
  c_44 :
  Return();
  b_44 :
  Epopd(3,0);
  Return();
  a_44 :
  Epopd(2,3);
  Epopd(1,3);
  Cpop();
  goto t_43;
  u_43 :
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
  BuildVard(1,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(f_45);
  p_98 :
  Epushd(2,0);
  Rpush(g_45);
  g_100 :
  Cpush(i_45);
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
  MatchFun("Var",1);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(4,1);
  MatchVard(5,1);
  Epushd(6,1);
  BuildVard(4,1);
  BuildVard(3,1);
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
  Rpush(j_45);
  goto s_104;
  j_45 :
  AllBuild();
  Epopd(3,2);
  Cpop();
  goto h_45;
  i_45 :
  Cpush(l_45);
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
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(3,2);
  MatchFun("Var",1);
  BuildVard(1,2);
  MatchVard(3,3);
  Tpop();
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(m_45);
  goto s_104;
  m_45 :
  Epopd(3,3);
  Cpop();
  goto k_45;
  l_45 :
  Cpush(o_45);
  Epushd(3,8);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,1);
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
  Tdupl();
  BuildVard(3,1);
  Rpush(p_45);
  goto y_103;
  p_45 :
  MatchVard(3,2);
  Epushd(4,0);
  Rpush(q_45);
  i_101 :
  Cpush(s_45);
  Rpush(t_45);
  goto x_102;
  t_45 :
  Cpop();
  goto r_45;
  s_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(u_45);
  goto t_104;
  u_45 :
  OneNextSon();
  Rpush(v_45);
  goto i_101;
  v_45 :
  AllBuild();
  r_45 :
  Return();
  q_45 :
  Epopd(4,0);
  MatchVard(3,3);
  Epushd(4,1);
  BuildVard(3,2);
  Tpush();
  BuildVard(3,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(5,0);
  Rpush(w_45);
  j_101 :
  Cpush(y_45);
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
  goto x_45;
  y_45 :
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(z_45);
  goto j_101;
  z_45 :
  OneNextSon();
  Rpush(a_46);
  goto m_103;
  a_46 :
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
  x_45 :
  Return();
  w_45 :
  Epopd(5,0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,4);
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
  Epushd(5,0);
  Rpush(b_46);
  k_101 :
  Cpush(d_46);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_46);
  goto k_101;
  e_46 :
  AllBuild();
  Cpop();
  goto c_46;
  d_46 :
  Rpush(f_46);
  goto x_102;
  f_46 :
  BuildVard(4,1);
  c_46 :
  Return();
  b_46 :
  Epopd(5,0);
  Epopd(4,2);
  MatchVard(3,5);
  Tpop();
  Epushd(4,1);
  BuildVard(3,1);
  Epushd(5,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  BuildVard(3,3);
  OneNextSon();
  AllBuild();
  Epopd(5,0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,4);
  Tpush();
  BuildVard(3,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,8);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,7);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(3,6);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(3,8);
  Epushd(4,0);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(5,1);
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildVard(3,6);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(g_46);
  goto p_98;
  g_46 :
  Epopd(5,1);
  AllBuild();
  Epopd(4,0);
  Epopd(3,8);
  Cpop();
  goto n_45;
  o_45 :
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
  AllInit();
  h_46 :
  AllNextSon(&&i_46);
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(j_46);
  goto g_100;
  j_46 :
  Epopd(4,1);
  goto h_46;
  i_46 :
  AllBuild();
  Epopd(3,2);
  n_45 :
  k_45 :
  h_45 :
  Return();
  g_45 :
  Epopd(2,0);
  Return();
  f_45 :
  Epopd(1,2);
  t_43 :
  Epopd(0,0);
  Return();
  s_104 :
  Epushd(0,0);
  Rpush(k_46);
  h_37 :
  Cpush(m_46);
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
  goto l_46;
  m_46 :
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
  Rpush(n_46);
  goto h_37;
  n_46 :
  l_46 :
  Return();
  k_46 :
  Epopd(0,0);
  Return();
  t_104 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  u_104 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(o_46);
  s_101 :
  Cpush(q_46);
  Rpush(r_46);
  goto x_102;
  r_46 :
  Cpop();
  goto p_46;
  q_46 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(s_46);
  goto v_104;
  s_46 :
  OneNextSon();
  Rpush(t_46);
  goto s_101;
  t_46 :
  AllBuild();
  p_46 :
  Return();
  o_46 :
  Epopd(1,0);
  Rpush(u_46);
  goto s_103;
  u_46 :
  Rpush(v_46);
  goto w_104;
  v_46 :
  Epopd(0,0);
  Return();
  v_104 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  w_104 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  x_104 :
  Epushd(0,0);
  Rpush(w_46);
  f_40 :
  Cpush(y_46);
  Rpush(z_46);
  goto x_102;
  z_46 :
  BuildInt(0);
  Cpop();
  goto x_46;
  y_46 :
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
  Rpush(a_47);
  goto f_40;
  a_47 :
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
  Rpush(b_47);
  goto y_104;
  b_47 :
  Epopd(1,1);
  x_46 :
  Return();
  w_46 :
  Epopd(0,0);
  Return();
  y_104 :
  Epushd(0,0);
  _ST_plus();
  Epopd(0,0);
  Return();
  z_104 :
  Epushd(0,0);
  Rpush(c_47);
  i_35 :
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
  Rpush(d_47);
  goto a_105;
  d_47 :
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
  Rpush(e_47);
  goto b_105;
  e_47 :
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
  Rpush(f_47);
  goto c_105;
  f_47 :
  Epopd(4,1);
  Rpush(g_47);
  goto d_105;
  g_47 :
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
  Cpush(i_47);
  MatchInt(0);
  BuildFun("Nil",0);
  Cpop();
  goto h_47;
  i_47 :
  Rpush(j_47);
  goto i_35;
  j_47 :
  h_47 :
  OneNextSon();
  Rpush(k_47);
  goto m_103;
  k_47 :
  AllBuild();
  AllBuild();
  Rpush(l_47);
  goto e_105;
  l_47 :
  Return();
  c_47 :
  Rpush(m_47);
  goto f_105;
  m_47 :
  Rpush(n_47);
  goto w_104;
  n_47 :
  Epopd(0,0);
  Return();
  a_105 :
  Epushd(0,0);
  _ST_mod();
  Epopd(0,0);
  Return();
  b_105 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  c_105 :
  Epushd(0,0);
  _ST_div();
  Epopd(0,0);
  Return();
  d_105 :
  Epushd(0,0);
  _ST_int();
  Epopd(0,0);
  Return();
  e_105 :
  Cpush(p_47);
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
  goto o_47;
  p_47 :
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
  o_47 :
  Return();
  f_105 :
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
  Cpush(r_47);
  q_47 :
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
  goto q_47;
  r_47 :
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
  s_47 :
DOIT_END
