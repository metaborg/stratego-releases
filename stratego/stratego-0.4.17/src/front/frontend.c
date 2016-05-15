#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(k_46);
  goto main;
  main :
  Epushd(0,0);
  Rpush(m_3);
  goto v_97;
  m_3 :
  Epopd(0,0);
  Return();
  v_97 :
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
  goto w_97;
  e_4 :
  Cpop();
  goto c_4;
  d_4 :
  Rpush(f_4);
  goto x_97;
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
  goto y_97;
  j_4 :
  Cpop();
  goto h_4;
  i_4 :
  Cpush(l_4);
  Rpush(m_4);
  goto d_98;
  m_4 :
  Epushd(1,1);
  Tdupl();
  Rpush(n_4);
  goto f_98;
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
  goto m_98;
  o_4 :
  OneNextSon();
  Rpush(p_4);
  goto l_98;
  p_4 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(q_4);
  goto f_98;
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
  goto g_98;
  r_4 :
  Rpush(s_4);
  goto j_98;
  s_4 :
  Cpop();
  goto k_4;
  l_4 :
  Rpush(t_4);
  goto k_98;
  t_4 :
  k_4 :
  h_4 :
  Epopd(0,0);
  Return();
  w_97 :
  MatchFun("Nil",0);
  Return();
  x_97 :
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
  y_97 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  b_8 :
  MatchFun("Cons",2);
  Cpush(c_8);
  Arg(0);
  Cpush(f_8);
  Rpush(g_8);
  goto z_97;
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
  goto a_98;
  h_8 :
  Epopd(0,0);
  Return();
  z_97 :
  MatchFun("Help",0);
  Return();
  a_98 :
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
  goto b_98;
  l_8 :
  BuildInt(1);
  Rpush(m_8);
  goto c_98;
  m_8 :
  Tpop();
  Epopd(0,1);
  Return();
  b_98 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  c_98 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  d_98 :
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
  goto e_98;
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
  e_98 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  f_98 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  g_98 :
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
  goto l_98;
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
  goto l_98;
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
  goto h_98;
  m_9 :
  OneNextSon();
  Rpush(n_9);
  goto l_98;
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
  goto i_98;
  o_9 :
  OneNextSon();
  Rpush(p_9);
  goto l_98;
  p_9 :
  AllBuild();
  AllBuild();
  h_9 :
  Epopd(0,1);
  Return();
  h_98 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  i_98 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  j_98 :
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
  goto l_98;
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
  goto l_98;
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
  goto l_98;
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
  goto b_98;
  f_10 :
  Cpop();
  goto q_9;
  r_9 :
  q_9 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(g_10);
  goto c_98;
  g_10 :
  Epopd(0,2);
  Return();
  k_98 :
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
  goto b_98;
  h_10 :
  BuildInt(1);
  Rpush(i_10);
  goto c_98;
  i_10 :
  Epopd(0,0);
  Return();
  l_98 :
  MatchFun("TNil",0);
  Return();
  m_98 :
  Epushd(0,0);
  Rpush(j_10);
  goto n_98;
  j_10 :
  Tdupl();
  Rpush(k_10);
  goto b_99;
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
  v_12 :
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
  x_12 :
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
  y_12 :
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(x_10);
  goto y_12;
  x_10 :
  OneNextSon();
  Rpush(y_10);
  goto l_98;
  y_10 :
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
  Rpush(z_10);
  goto x_12;
  z_10 :
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
  Rpush(a_11);
  goto t_99;
  a_11 :
  Epopd(5,4);
  Tduplinv();
  goto p_10;
  q_10 :
  Epopd(4,0);
  AllInit();
  b_11 :
  AllNextSon(&&c_11);
  Rpush(d_11);
  goto v_12;
  d_11 :
  goto b_11;
  c_11 :
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
  Cpush(f_11);
  Tdupl();
  Cpush(g_11);
  Tdupl();
  BuildVard(1,5);
  MatchFun("Nil",0);
  Cpop();
  Crestore();
  Cjump();
  g_11 :
  Tpop();
  Epushd(4,0);
  Rpush(h_11);
  l_17 :
  Epushd(5,0);
  Cpush(j_11);
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
  Rpush(k_11);
  m_17 :
  Cpush(m_11);
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
  Rpush(n_11);
  n_17 :
  Cpush(p_11);
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
  goto o_11;
  p_11 :
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(q_11);
  goto n_17;
  q_11 :
  OneNextSon();
  Rpush(r_11);
  goto l_98;
  r_11 :
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
  o_11 :
  Return();
  n_11 :
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
  goto l_11;
  m_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_11);
  goto m_17;
  s_11 :
  AllBuild();
  l_11 :
  Return();
  k_11 :
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
  Rpush(t_11);
  goto t_99;
  t_11 :
  Epopd(6,4);
  Cpop();
  goto i_11;
  j_11 :
  i_11 :
  Epopd(5,0);
  AllInit();
  u_11 :
  AllNextSon(&&v_11);
  Rpush(w_11);
  goto l_17;
  w_11 :
  goto u_11;
  v_11 :
  AllBuild();
  Return();
  h_11 :
  Epopd(4,0);
  Cpop();
  goto e_11;
  f_11 :
  e_11 :
  Epopd(3,0);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildVard(1,4);
  Epushd(5,0);
  Rpush(x_11);
  s_17 :
  Cpush(z_11);
  Rpush(a_12);
  goto w_97;
  a_12 :
  Cpop();
  goto y_11;
  z_11 :
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
  Rpush(b_12);
  goto r_99;
  b_12 :
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
  Rpush(c_12);
  goto s_17;
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
  Cpush(e_12);
  Tdupl();
  Cpush(f_12);
  Tdupl();
  BuildVard(1,5);
  MatchFun("Nil",0);
  Cpop();
  Crestore();
  Cjump();
  f_12 :
  Tpop();
  Epushd(7,0);
  Rpush(g_12);
  d_24 :
  Epushd(8,0);
  Cpush(z_12);
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
  Rpush(a_13);
  e_24 :
  Cpush(c_13);
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
  Rpush(d_13);
  f_24 :
  Cpush(f_13);
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
  goto e_13;
  f_13 :
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
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(g_13);
  goto f_24;
  g_13 :
  OneNextSon();
  Rpush(h_13);
  goto l_98;
  h_13 :
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
  e_13 :
  Return();
  d_13 :
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
  goto b_13;
  c_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_13);
  goto e_24;
  i_13 :
  AllBuild();
  b_13 :
  Return();
  a_13 :
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
  Rpush(j_13);
  goto t_99;
  j_13 :
  Epopd(9,4);
  Cpop();
  goto h_12;
  z_12 :
  h_12 :
  Epopd(8,0);
  AllInit();
  k_13 :
  AllNextSon(&&l_13);
  Rpush(m_13);
  goto d_24;
  m_13 :
  goto k_13;
  l_13 :
  AllBuild();
  Return();
  g_12 :
  Epopd(7,0);
  Cpop();
  goto d_12;
  e_12 :
  d_12 :
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
  Rpush(n_13);
  l_24 :
  Cpush(p_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_13);
  goto l_24;
  q_13 :
  AllBuild();
  Cpop();
  goto o_13;
  p_13 :
  Rpush(r_13);
  goto w_97;
  r_13 :
  BuildVard(4,1);
  o_13 :
  Return();
  n_13 :
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
  Cpush(t_13);
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
  Rpush(u_13);
  d_56 :
  Cpush(w_13);
  Rpush(x_13);
  goto w_97;
  x_13 :
  Cpop();
  goto v_13;
  w_13 :
  Cpush(z_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(b_14);
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
  Rpush(c_14);
  goto v_99;
  c_14 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(d_14);
  e_56 :
  Cpush(f_14);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(g_14);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(h_14);
  f_56 :
  Cpush(j_14);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(l_14);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto k_14;
  l_14 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  k_14 :
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
  Rpush(m_14);
  g_56 :
  Cpush(o_14);
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
  goto n_14;
  o_14 :
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
  Rpush(p_14);
  goto g_56;
  p_14 :
  OneNextSon();
  Rpush(q_14);
  goto l_98;
  q_14 :
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
  n_14 :
  Return();
  m_14 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto i_14;
  j_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_14);
  goto f_56;
  r_14 :
  AllBuild();
  i_14 :
  Return();
  h_14 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  g_14 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(s_14);
  goto y_99;
  s_14 :
  Rpush(t_14);
  goto a_100;
  t_14 :
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
  Rpush(u_14);
  goto v_99;
  u_14 :
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
  Rpush(v_14);
  goto b_98;
  v_14 :
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
  w_14 :
  AllNextSon(&&x_14);
  Epushd(6,0);
  Cpush(z_14);
  Rpush(a_15);
  goto e_56;
  a_15 :
  Cpop();
  goto y_14;
  z_14 :
  y_14 :
  Epopd(6,0);
  goto w_14;
  x_14 :
  AllBuild();
  Cpop();
  goto e_14;
  f_14 :
  IsAppl();
  SomeInit();
  b_15 :
  SomeNextSon(&&c_15);
  Cpush(b_15);
  Rpush(d_15);
  goto e_56;
  d_15 :
  Cpop();
  CounterOK();
  goto b_15;
  c_15 :
  SomeBuild();
  e_14 :
  Return();
  d_14 :
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
  goto a_14;
  b_14 :
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
  Rpush(e_15);
  goto v_99;
  e_15 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(f_15);
  h_56 :
  Cpush(h_15);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(i_15);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(j_15);
  i_56 :
  Cpush(l_15);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(n_15);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto m_15;
  n_15 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  m_15 :
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
  Rpush(o_15);
  j_56 :
  Cpush(q_15);
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
  goto p_15;
  q_15 :
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
  Rpush(r_15);
  goto j_56;
  r_15 :
  OneNextSon();
  Rpush(s_15);
  goto l_98;
  s_15 :
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
  p_15 :
  Return();
  o_15 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto k_15;
  l_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_15);
  goto i_56;
  t_15 :
  AllBuild();
  k_15 :
  Return();
  j_15 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  i_15 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(u_15);
  goto y_99;
  u_15 :
  Rpush(v_15);
  goto a_100;
  v_15 :
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
  Rpush(w_15);
  goto v_99;
  w_15 :
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
  Rpush(x_15);
  goto b_98;
  x_15 :
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
  y_15 :
  AllNextSon(&&z_15);
  Epushd(6,0);
  Cpush(b_16);
  Rpush(c_16);
  goto h_56;
  c_16 :
  Cpop();
  goto a_16;
  b_16 :
  a_16 :
  Epopd(6,0);
  goto y_15;
  z_15 :
  AllBuild();
  Cpop();
  goto g_15;
  h_15 :
  IsAppl();
  SomeInit();
  d_16 :
  SomeNextSon(&&e_16);
  Cpush(d_16);
  Rpush(f_16);
  goto h_56;
  f_16 :
  Cpop();
  CounterOK();
  goto d_16;
  e_16 :
  SomeBuild();
  g_15 :
  Return();
  f_15 :
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
  a_14 :
  OneNextSon();
  Rpush(g_16);
  goto d_56;
  g_16 :
  AllBuild();
  Cpop();
  goto y_13;
  z_13 :
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
  Rpush(h_16);
  goto d_56;
  h_16 :
  y_13 :
  v_13 :
  Return();
  u_13 :
  Epopd(3,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(3,0);
  Rpush(i_16);
  k_56 :
  Cpush(k_16);
  Rpush(l_16);
  goto w_97;
  l_16 :
  Cpop();
  goto j_16;
  k_16 :
  Cpush(n_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Cpush(p_16);
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
  Rpush(q_16);
  goto v_99;
  q_16 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(r_16);
  l_56 :
  Cpush(t_16);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(f_17);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(g_17);
  m_56 :
  Cpush(i_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(p_17);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto o_17;
  p_17 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  o_17 :
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
  Rpush(q_17);
  n_56 :
  Cpush(t_17);
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
  goto r_17;
  t_17 :
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
  Rpush(u_17);
  goto n_56;
  u_17 :
  OneNextSon();
  Rpush(v_17);
  goto l_98;
  v_17 :
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
  r_17 :
  Return();
  q_17 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto h_17;
  i_17 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_17);
  goto m_56;
  w_17 :
  AllBuild();
  h_17 :
  Return();
  g_17 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  f_17 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(b_18);
  goto y_99;
  b_18 :
  Rpush(c_18);
  goto a_100;
  c_18 :
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
  Rpush(d_18);
  goto v_99;
  d_18 :
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
  Rpush(e_18);
  goto b_98;
  e_18 :
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
  j_18 :
  AllNextSon(&&k_18);
  Epushd(6,0);
  Cpush(m_18);
  Rpush(n_18);
  goto l_56;
  n_18 :
  Cpop();
  goto l_18;
  m_18 :
  l_18 :
  Epopd(6,0);
  goto j_18;
  k_18 :
  AllBuild();
  Cpop();
  goto s_16;
  t_16 :
  IsAppl();
  SomeInit();
  o_18 :
  SomeNextSon(&&p_18);
  Cpush(o_18);
  Rpush(q_18);
  goto l_56;
  q_18 :
  Cpop();
  CounterOK();
  goto o_18;
  p_18 :
  SomeBuild();
  s_16 :
  Return();
  r_16 :
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
  goto o_16;
  p_16 :
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
  Rpush(r_18);
  goto v_99;
  r_18 :
  MatchVard(4,3);
  BuildVard(4,4);
  Epushd(5,0);
  Rpush(s_18);
  o_56 :
  Cpush(u_18);
  Epushd(6,2);
  MatchFun("Op",2);
  Arg(0);
  MatchVard(6,1);
  Tpop();
  Arg(1);
  MatchVard(6,2);
  Tpop();
  Tdupl();
  Cpush(v_18);
  Tdupl();
  BuildVard(2,1);
  Epushd(7,0);
  Rpush(w_18);
  p_56 :
  Cpush(y_18);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(8,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  MatchVard(6,1);
  OneNextSon();
  Cpush(a_19);
  MatchFun("ConstType",1);
  BuildFun("Nil",0);
  MatchVard(8,1);
  Cpop();
  goto z_18;
  a_19 :
  MatchFun("FunType",2);
  TravInit();
  OneNextSon();
  MatchVard(8,1);
  OneNextSon();
  AllBuild();
  z_18 :
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
  Rpush(b_19);
  q_56 :
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
  goto c_19;
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
  goto q_56;
  e_19 :
  OneNextSon();
  Rpush(f_19);
  goto l_98;
  f_19 :
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
  c_19 :
  Return();
  b_19 :
  Epopd(9,0);
  Epopd(8,1);
  OneNextSon();
  AllBuild();
  Cpop();
  goto x_18;
  y_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_19);
  goto p_56;
  g_19 :
  AllBuild();
  x_18 :
  Return();
  w_18 :
  Epopd(7,0);
  Cpop();
  Crestore();
  Cjump();
  v_18 :
  Epushd(7,1);
  BuildVard(6,2);
  Rpush(h_19);
  goto y_99;
  h_19 :
  Rpush(i_19);
  goto a_100;
  i_19 :
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
  goto v_99;
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
  goto b_98;
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
  goto o_56;
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
  goto t_18;
  u_18 :
  IsAppl();
  SomeInit();
  w_19 :
  SomeNextSon(&&x_19);
  Cpush(w_19);
  Rpush(y_19);
  goto o_56;
  y_19 :
  Cpop();
  CounterOK();
  goto w_19;
  x_19 :
  SomeBuild();
  t_18 :
  Return();
  s_18 :
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
  o_16 :
  OneNextSon();
  Rpush(z_19);
  goto k_56;
  z_19 :
  AllBuild();
  Cpop();
  goto m_16;
  n_16 :
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
  Rpush(a_20);
  goto k_56;
  a_20 :
  m_16 :
  j_16 :
  Return();
  i_16 :
  Epopd(3,0);
  OneNextSon();
  Rpush(c_20);
  goto l_98;
  c_20 :
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
  goto s_13;
  t_13 :
  s_13 :
  Epopd(1,5);
  Epopd(0,0);
  Return();
  n_98 :
  Epushd(0,0);
  Epushd(1,1);
  MatchFun("Specification",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  BuildVard(1,1);
  Epopd(1,1);
  Epushd(1,0);
  Rpush(d_20);
  s_56 :
  Cpush(g_20);
  Rpush(h_20);
  goto w_97;
  h_20 :
  Cpop();
  goto f_20;
  g_20 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(i_20);
  goto o_98;
  i_20 :
  OneNextSon();
  Rpush(j_20);
  goto s_56;
  j_20 :
  AllBuild();
  f_20 :
  Return();
  d_20 :
  Epopd(1,0);
  Epushd(1,0);
  Rpush(k_20);
  u_57 :
  Cpush(m_20);
  Rpush(p_20);
  goto w_97;
  p_20 :
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
  m_20 :
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
  Rpush(q_20);
  goto u_57;
  q_20 :
  OneNextSon();
  Rpush(r_20);
  goto l_98;
  r_20 :
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
  Rpush(s_20);
  w_58 :
  Cpush(u_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_20);
  goto w_58;
  v_20 :
  AllBuild();
  Cpop();
  goto t_20;
  u_20 :
  Rpush(w_20);
  goto w_97;
  w_20 :
  BuildVard(4,1);
  t_20 :
  Return();
  s_20 :
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
  Rpush(x_20);
  x_58 :
  Cpush(z_20);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_21);
  goto x_58;
  a_21 :
  AllBuild();
  Cpop();
  goto y_20;
  z_20 :
  Rpush(g_21);
  goto w_97;
  g_21 :
  BuildVard(5,1);
  y_20 :
  Return();
  x_20 :
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
  y_58 :
  Cpush(j_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_21);
  goto y_58;
  k_21 :
  AllBuild();
  Cpop();
  goto i_21;
  j_21 :
  Rpush(l_21);
  goto w_97;
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
  z_58 :
  Cpush(o_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_21);
  goto z_58;
  p_21 :
  AllBuild();
  Cpop();
  goto n_21;
  o_21 :
  Rpush(q_21);
  goto w_97;
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
  goto s_98;
  r_21 :
  AllBuild();
  Rpush(s_21);
  goto y_98;
  s_21 :
  Epopd(0,0);
  Return();
  o_98 :
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
  MatchFunFC("Rules",1,&&e_22);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Rpush(f_22);
  goto y_2;
  f_22 :
  goto x_21;
  e_22 :
  MatchFunFC("Overlays",1,&&g_22);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Rpush(k_22);
  goto z_2;
  k_22 :
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
  Rpush(l_22);
  goto p_98;
  l_22 :
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
  p_98 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(m_22);
  e_59 :
  Cpush(o_22);
  Rpush(p_22);
  goto w_97;
  p_22 :
  Cpop();
  goto n_22;
  o_22 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_22);
  goto q_98;
  q_22 :
  OneNextSon();
  Rpush(r_22);
  goto e_59;
  r_22 :
  AllBuild();
  n_22 :
  Return();
  m_22 :
  Epopd(1,0);
  Rpush(s_22);
  goto r_98;
  s_22 :
  Epopd(0,0);
  Return();
  q_98 :
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
  r_98 :
  Epushd(0,0);
  Rpush(a_23);
  t_41 :
  Cpush(c_23);
  Rpush(d_23);
  goto w_97;
  d_23 :
  Cpop();
  goto b_23;
  c_23 :
  Epushd(1,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,1);
  Epushd(2,0);
  Rpush(e_23);
  f_59 :
  Cpush(g_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_23);
  goto f_59;
  h_23 :
  AllBuild();
  Cpop();
  goto f_23;
  g_23 :
  Rpush(i_23);
  goto w_97;
  i_23 :
  BuildVard(1,2);
  Rpush(j_23);
  goto t_41;
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
  s_98 :
  Epushd(0,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Rpush(k_23);
  goto t_98;
  k_23 :
  Epushd(3,0);
  Rpush(l_23);
  e_60 :
  Cpush(n_23);
  Rpush(o_23);
  goto w_97;
  o_23 :
  Cpop();
  goto m_23;
  n_23 :
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
  Rpush(p_23);
  goto e_60;
  p_23 :
  AllBuild();
  m_23 :
  Return();
  l_23 :
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
  Rpush(m_24);
  goto v_98;
  m_24 :
  Epopd(0,0);
  Return();
  t_98 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(n_24);
  f_60 :
  Cpush(p_24);
  Rpush(q_24);
  goto w_97;
  q_24 :
  Cpop();
  goto o_24;
  p_24 :
  Cpush(s_24);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(t_24);
  goto u_98;
  t_24 :
  OneNextSon();
  Rpush(u_24);
  goto f_60;
  u_24 :
  AllBuild();
  Cpop();
  goto r_24;
  s_24 :
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
  Rpush(v_24);
  goto f_60;
  v_24 :
  r_24 :
  o_24 :
  Return();
  n_24 :
  Epopd(1,0);
  Rpush(w_24);
  goto r_98;
  w_24 :
  Epopd(0,0);
  Return();
  u_98 :
  Epushd(0,2);
  MatchFunFC("Signature",1,&&a_25);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(b_25);
  goto f_3;
  b_25 :
  goto z_24;
  a_25 :
  MatchFunFC("Overlays",1,&&c_25);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(d_25);
  goto h_3;
  d_25 :
  goto z_24;
  c_25 :
  goto fail;
  z_24 :
  goto y_24;
  h_3 :
  BuildVard(0,2);
  Epushd(1,0);
  Rpush(e_25);
  h_61 :
  Cpush(g_25);
  Rpush(h_25);
  goto w_97;
  h_25 :
  Cpop();
  goto f_25;
  g_25 :
  Cpush(j_25);
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
  Rpush(k_25);
  goto h_61;
  k_25 :
  AllBuild();
  Cpop();
  goto i_25;
  j_25 :
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
  Rpush(l_25);
  goto h_61;
  l_25 :
  i_25 :
  f_25 :
  Return();
  e_25 :
  Epopd(1,0);
  Return();
  y_24 :
  goto x_24;
  f_3 :
  BuildVard(0,1);
  Epushd(1,0);
  Rpush(m_25);
  p_60 :
  Cpush(o_25);
  Rpush(p_25);
  goto w_97;
  p_25 :
  Cpop();
  goto n_25;
  o_25 :
  Cpush(r_25);
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
  Rpush(s_25);
  c_61 :
  Cpush(u_25);
  Rpush(v_25);
  goto w_97;
  v_25 :
  Cpop();
  goto t_25;
  u_25 :
  Cpush(x_25);
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
  Rpush(y_25);
  goto c_61;
  y_25 :
  AllBuild();
  Cpop();
  goto w_25;
  x_25 :
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
  Rpush(z_25);
  goto c_61;
  z_25 :
  w_25 :
  t_25 :
  Return();
  s_25 :
  Epopd(3,0);
  Epopd(2,1);
  OneNextSon();
  Rpush(a_26);
  goto p_60;
  a_26 :
  AllBuild();
  Cpop();
  goto q_25;
  r_25 :
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
  Rpush(b_26);
  goto p_60;
  b_26 :
  q_25 :
  n_25 :
  Return();
  m_25 :
  Epopd(1,0);
  Rpush(c_26);
  goto r_98;
  c_26 :
  Return();
  x_24 :
  Epopd(0,2);
  Return();
  v_98 :
  Epushd(0,2);
  Rpush(d_26);
  goto w_98;
  d_26 :
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
  Rpush(e_26);
  a_62 :
  Cpush(g_26);
  Epushd(2,3);
  MatchVard(2,1);
  Tdupl();
  BuildVard(2,1);
  Epushd(3,1);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(3,1);
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
  Rpush(h_26);
  goto x_98;
  h_26 :
  Epopd(2,3);
  Cpop();
  goto f_26;
  g_26 :
  AllInit();
  i_26 :
  AllNextSon(&&j_26);
  Rpush(k_26);
  goto a_62;
  k_26 :
  goto i_26;
  j_26 :
  AllBuild();
  f_26 :
  Return();
  e_26 :
  Epopd(1,0);
  Epopd(0,2);
  Return();
  w_98 :
  Epushd(0,2);
  Cpush(m_26);
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
  goto l_26;
  m_26 :
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
  Rpush(n_26);
  l_62 :
  Cpush(p_26);
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
  goto o_26;
  p_26 :
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
  Rpush(q_26);
  goto l_62;
  q_26 :
  OneNextSon();
  Rpush(r_26);
  goto l_98;
  r_26 :
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
  o_26 :
  Return();
  n_26 :
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
  l_26 :
  Epopd(0,2);
  Return();
  x_98 :
  Epushd(0,0);
  Rpush(s_26);
  z_37 :
  Cpush(u_26);
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
  goto t_26;
  u_26 :
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
  Rpush(v_26);
  goto z_37;
  v_26 :
  t_26 :
  Return();
  s_26 :
  Epopd(0,0);
  Return();
  y_98 :
  Epushd(0,0);
  Rpush(w_26);
  e_63 :
  Epushd(1,0);
  Cpush(y_26);
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
  Rpush(z_26);
  goto z_98;
  z_26 :
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
  goto x_26;
  y_26 :
  x_26 :
  Epopd(1,0);
  AllInit();
  a_27 :
  AllNextSon(&&b_27);
  Rpush(c_27);
  goto e_63;
  c_27 :
  goto a_27;
  b_27 :
  AllBuild();
  Return();
  w_26 :
  Epopd(0,0);
  Return();
  z_98 :
  Epushd(0,0);
  Rpush(d_27);
  l_63 :
  Cpush(f_27);
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
  goto e_27;
  f_27 :
  Cpush(h_27);
  Epushd(1,1);
  Tdupl();
  Rpush(i_27);
  goto a_99;
  i_27 :
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
  Rpush(j_27);
  goto l_63;
  j_27 :
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
  Rpush(k_27);
  p_64 :
  Cpush(m_27);
  Rpush(n_27);
  goto w_97;
  n_27 :
  Cpop();
  goto l_27;
  m_27 :
  Cpush(p_27);
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
  q_27 :
  MatchFun("Cons",2);
  Cpush(r_27);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto s_27;
  r_27 :
  Arg(1);
  Tdrop();
  goto q_27;
  s_27 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(t_27);
  goto p_64;
  t_27 :
  Cpop();
  goto o_27;
  p_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_27);
  goto p_64;
  u_27 :
  AllBuild();
  o_27 :
  l_27 :
  Return();
  k_27 :
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
  Rpush(v_27);
  l_65 :
  Cpush(x_27);
  Rpush(y_27);
  goto w_97;
  y_27 :
  BuildFun("Nil",0);
  Cpop();
  goto w_27;
  x_27 :
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
  Rpush(z_27);
  goto l_65;
  z_27 :
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
  Rpush(a_28);
  r_65 :
  Cpush(c_28);
  Rpush(d_28);
  goto w_97;
  d_28 :
  BuildVard(4,3);
  Cpop();
  goto b_28;
  c_28 :
  Cpush(f_28);
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
  g_28 :
  MatchFun("Cons",2);
  Cpush(h_28);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto i_28;
  h_28 :
  Arg(1);
  Tdrop();
  goto g_28;
  i_28 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(j_28);
  goto r_65;
  j_28 :
  Cpop();
  goto e_28;
  f_28 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_28);
  goto r_65;
  k_28 :
  AllBuild();
  e_28 :
  b_28 :
  Return();
  a_28 :
  Epopd(4,4);
  w_27 :
  Return();
  v_27 :
  Epopd(3,0);
  Epopd(2,1);
  Epopd(1,1);
  Cpop();
  goto g_27;
  h_27 :
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
  Rpush(l_28);
  l_66 :
  Cpush(n_28);
  Rpush(o_28);
  goto w_97;
  o_28 :
  BuildFun("Nil",0);
  Cpop();
  goto m_28;
  n_28 :
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
  Rpush(p_28);
  goto l_63;
  p_28 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,2);
  Rpush(q_28);
  goto l_66;
  q_28 :
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
  Rpush(r_28);
  q_66 :
  Cpush(t_28);
  Rpush(u_28);
  goto w_97;
  u_28 :
  BuildVard(3,3);
  Cpop();
  goto s_28;
  t_28 :
  Cpush(w_28);
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
  x_28 :
  MatchFun("Cons",2);
  Cpush(y_28);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto z_28;
  y_28 :
  Arg(1);
  Tdrop();
  goto x_28;
  z_28 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(a_29);
  goto q_66;
  a_29 :
  Cpop();
  goto v_28;
  w_28 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_29);
  goto q_66;
  b_29 :
  AllBuild();
  v_28 :
  s_28 :
  Return();
  r_28 :
  Epopd(3,4);
  m_28 :
  Return();
  l_28 :
  Epopd(2,0);
  Epopd(1,1);
  g_27 :
  e_27 :
  Return();
  d_27 :
  Epopd(0,0);
  Return();
  a_99 :
  Cpush(d_29);
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
  goto c_29;
  d_29 :
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
  Rpush(e_29);
  goto z_98;
  e_29 :
  Epopd(0,3);
  c_29 :
  Return();
  b_99 :
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
  Rpush(f_29);
  goto c_99;
  f_29 :
  AllBuild();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Rules",1);
  TravInit();
  OneNextSon();
  Rpush(g_29);
  goto c_99;
  g_29 :
  AllBuild();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Strategies",1);
  TravInit();
  OneNextSon();
  Rpush(h_29);
  goto c_99;
  h_29 :
  AllBuild();
  OneNextSon();
  Rpush(i_29);
  goto w_97;
  i_29 :
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Epopd(0,0);
  Return();
  c_99 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(j_29);
  t_66 :
  Cpush(l_29);
  Rpush(m_29);
  goto w_97;
  m_29 :
  Cpop();
  goto k_29;
  l_29 :
  Cpush(o_29);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(p_29);
  goto d_99;
  p_29 :
  OneNextSon();
  Rpush(q_29);
  goto t_66;
  q_29 :
  AllBuild();
  Cpop();
  goto n_29;
  o_29 :
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
  Rpush(r_29);
  goto t_66;
  r_29 :
  n_29 :
  k_29 :
  Return();
  j_29 :
  Epopd(1,0);
  MatchFun("Nil",0);
  Epopd(0,0);
  Return();
  d_99 :
  Epushd(0,0);
  Cpush(t_29);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(u_29);
  goto e_99;
  u_29 :
  Cpush(v_29);
  Tdupl();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(w_29);
  goto w_97;
  w_29 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(x_29);
  goto w_97;
  x_29 :
  OneNextSon();
  Rpush(y_29);
  goto l_98;
  y_29 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(z_29);
  goto w_97;
  z_29 :
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  v_29 :
  AllBuild();
  Rpush(a_30);
  goto l_99;
  a_30 :
  Cpop();
  goto s_29;
  t_29 :
  Cpush(c_30);
  MatchFun("RDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(d_30);
  goto e_99;
  d_30 :
  Cpush(e_30);
  Tdupl();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(f_30);
  goto w_97;
  f_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(g_30);
  goto w_97;
  g_30 :
  OneNextSon();
  Rpush(h_30);
  goto l_98;
  h_30 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(i_30);
  goto w_97;
  i_30 :
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  e_30 :
  AllBuild();
  Rpush(j_30);
  goto l_99;
  j_30 :
  Cpop();
  goto b_30;
  c_30 :
  MatchFun("Overlay",3);
  Rpush(k_30);
  goto e_99;
  k_30 :
  Cpush(l_30);
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
  Rpush(m_30);
  goto w_97;
  m_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(n_30);
  goto w_97;
  n_30 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_30);
  goto w_97;
  o_30 :
  OneNextSon();
  Rpush(p_30);
  goto l_98;
  p_30 :
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(q_30);
  goto w_97;
  q_30 :
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  l_30 :
  Rpush(r_30);
  goto l_99;
  r_30 :
  b_30 :
  s_29 :
  Epopd(0,0);
  Return();
  e_99 :
  Epushd(0,0);
  Rpush(s_30);
  e_31 :
  Cpush(u_30);
  Epushd(1,0);
  Cpush(w_30);
  MatchFun("Build",1);
  TravInit();
  OneNextSon();
  Rpush(x_30);
  goto g_99;
  x_30 :
  AllBuild();
  Cpop();
  goto v_30;
  w_30 :
  Cpush(z_30);
  MatchFun("Match",1);
  TravInit();
  OneNextSon();
  Rpush(a_31);
  goto f_99;
  a_31 :
  AllBuild();
  Cpop();
  goto y_30;
  z_30 :
  Cpush(c_31);
  MatchFun("MA",2);
  TravInit();
  OneNextSon();
  Rpush(d_31);
  goto f_99;
  d_31 :
  OneNextSon();
  Rpush(f_31);
  goto e_31;
  f_31 :
  AllBuild();
  Cpop();
  goto b_31;
  c_31 :
  Cpush(h_31);
  MatchFun("AM",2);
  TravInit();
  OneNextSon();
  Rpush(i_31);
  goto e_31;
  i_31 :
  OneNextSon();
  Rpush(j_31);
  goto f_99;
  j_31 :
  AllBuild();
  Cpop();
  goto g_31;
  h_31 :
  Cpush(l_31);
  MatchFun("BA",2);
  TravInit();
  OneNextSon();
  Rpush(m_31);
  goto e_31;
  m_31 :
  OneNextSon();
  Rpush(n_31);
  goto g_99;
  n_31 :
  AllBuild();
  Cpop();
  goto k_31;
  l_31 :
  Cpush(p_31);
  MatchFun("BAM",3);
  TravInit();
  OneNextSon();
  Rpush(q_31);
  goto e_31;
  q_31 :
  OneNextSon();
  Rpush(r_31);
  goto g_99;
  r_31 :
  OneNextSon();
  Rpush(s_31);
  goto f_99;
  s_31 :
  AllBuild();
  Cpop();
  goto o_31;
  p_31 :
  Cpush(u_31);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_31);
  goto e_31;
  v_31 :
  AllBuild();
  Cpop();
  goto t_31;
  u_31 :
  Cpush(x_31);
  MatchFun("Rule",3);
  TravInit();
  OneNextSon();
  Rpush(y_31);
  goto f_99;
  y_31 :
  OneNextSon();
  Rpush(z_31);
  goto g_99;
  z_31 :
  OneNextSon();
  Rpush(a_32);
  goto e_31;
  a_32 :
  AllBuild();
  Cpop();
  goto w_31;
  x_31 :
  Cpush(c_32);
  MatchFun("Overlay",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Rpush(d_32);
  goto g_99;
  d_32 :
  AllBuild();
  Cpop();
  goto b_32;
  c_32 :
  MatchFun("Cong",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(2,0);
  Rpush(e_32);
  x_66 :
  Cpush(h_32);
  Rpush(i_32);
  goto w_97;
  i_32 :
  Cpop();
  goto f_32;
  h_32 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(j_32);
  goto e_31;
  j_32 :
  OneNextSon();
  Rpush(k_32);
  goto x_66;
  k_32 :
  AllBuild();
  f_32 :
  Return();
  e_32 :
  Epopd(2,0);
  AllBuild();
  b_32 :
  w_31 :
  t_31 :
  o_31 :
  k_31 :
  g_31 :
  b_31 :
  y_30 :
  v_30 :
  Epopd(1,0);
  Cpop();
  goto t_30;
  u_30 :
  AllInit();
  l_32 :
  AllNextSon(&&m_32);
  Rpush(n_32);
  goto e_31;
  n_32 :
  goto l_32;
  m_32 :
  AllBuild();
  t_30 :
  Cpush(p_32);
  Rpush(q_32);
  goto h_99;
  q_32 :
  Cpop();
  goto o_32;
  p_32 :
  Rpush(r_32);
  goto j_99;
  r_32 :
  o_32 :
  Return();
  s_30 :
  Epopd(0,0);
  Return();
  f_99 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(s_32);
  goto z_98;
  s_32 :
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
  g_99 :
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(t_32);
  goto z_98;
  t_32 :
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
  h_99 :
  Cpush(v_32);
  Epushd(0,1);
  MatchFun("Seqs",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,1);
  Rpush(w_32);
  goto i_99;
  w_32 :
  Epopd(0,1);
  Cpop();
  goto u_32;
  v_32 :
  Cpush(y_32);
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
  Rpush(z_32);
  goto i_99;
  z_32 :
  Epopd(0,2);
  Cpop();
  goto x_32;
  y_32 :
  Cpush(b_33);
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
  Rpush(c_33);
  goto i_99;
  c_33 :
  Epopd(0,3);
  Cpop();
  goto a_33;
  b_33 :
  Cpush(e_33);
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
  Rpush(f_33);
  goto i_99;
  f_33 :
  Epopd(0,3);
  Cpop();
  goto d_33;
  e_33 :
  Cpush(h_33);
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
  Rpush(i_33);
  goto i_99;
  i_33 :
  Epopd(0,2);
  Cpop();
  goto g_33;
  h_33 :
  Cpush(k_33);
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
  Rpush(l_33);
  goto i_99;
  l_33 :
  Epopd(0,2);
  Cpop();
  goto j_33;
  k_33 :
  Cpush(n_33);
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
  Rpush(o_33);
  goto i_99;
  o_33 :
  Epopd(0,2);
  Cpop();
  goto m_33;
  n_33 :
  Cpush(q_33);
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
  Rpush(r_33);
  goto i_99;
  r_33 :
  Epopd(0,3);
  Cpop();
  goto p_33;
  q_33 :
  Cpush(t_33);
  Epushd(0,2);
  MatchFun("Cong",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  BuildVard(0,2);
  Rpush(u_33);
  goto i_99;
  u_33 :
  Epopd(0,2);
  Cpop();
  goto s_33;
  t_33 :
  Cpush(w_33);
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
  Rpush(x_33);
  e_68 :
  Cpush(z_33);
  Rpush(a_34);
  goto w_97;
  a_34 :
  Cpop();
  goto y_33;
  z_33 :
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
  Rpush(b_34);
  o_70 :
  Cpush(d_34);
  Rpush(e_34);
  goto w_97;
  e_34 :
  Cpop();
  goto c_34;
  d_34 :
  Cpush(g_34);
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
  h_34 :
  MatchFun("Cons",2);
  Cpush(i_34);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto j_34;
  i_34 :
  Arg(1);
  Tdrop();
  goto h_34;
  j_34 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(k_34);
  goto o_70;
  k_34 :
  Cpop();
  goto f_34;
  g_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_34);
  goto o_70;
  l_34 :
  AllBuild();
  f_34 :
  c_34 :
  Return();
  b_34 :
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
  Rpush(m_34);
  q_70 :
  Cpush(o_34);
  Rpush(p_34);
  goto w_97;
  p_34 :
  Cpop();
  goto n_34;
  o_34 :
  Cpush(r_34);
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
  s_34 :
  MatchFun("Cons",2);
  Cpush(t_34);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto u_34;
  t_34 :
  Arg(1);
  Tdrop();
  goto s_34;
  u_34 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(v_34);
  goto q_70;
  v_34 :
  Cpop();
  goto q_34;
  r_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_34);
  goto q_70;
  w_34 :
  AllBuild();
  q_34 :
  n_34 :
  Return();
  m_34 :
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
  Rpush(x_34);
  t_70 :
  Cpush(z_34);
  Rpush(a_35);
  goto w_97;
  a_35 :
  Cpop();
  goto y_34;
  z_34 :
  Cpush(c_35);
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
  d_35 :
  MatchFun("Cons",2);
  Cpush(e_35);
  Arg(0);
  MatchVard(8,2);
  Tpop();
  Cpop();
  goto f_35;
  e_35 :
  Arg(1);
  Tdrop();
  goto d_35;
  f_35 :
  Tpop();
  Epopd(9,0);
  Tpop();
  BuildVard(8,1);
  Epopd(8,2);
  Rpush(g_35);
  goto t_70;
  g_35 :
  Cpop();
  goto b_35;
  c_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_35);
  goto t_70;
  h_35 :
  AllBuild();
  b_35 :
  y_34 :
  Return();
  x_34 :
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
  Rpush(i_35);
  v_70 :
  Cpush(k_35);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_35);
  goto v_70;
  l_35 :
  AllBuild();
  Cpop();
  goto j_35;
  k_35 :
  Rpush(m_35);
  goto w_97;
  m_35 :
  BuildVard(5,1);
  j_35 :
  Return();
  i_35 :
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
  Rpush(n_35);
  goto e_68;
  n_35 :
  AllBuild();
  y_33 :
  Return();
  x_33 :
  Epopd(1,0);
  Epopd(0,2);
  Cpop();
  goto v_33;
  w_33 :
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
  Rpush(o_35);
  goto i_99;
  o_35 :
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
  v_33 :
  s_33 :
  p_33 :
  m_33 :
  j_33 :
  g_33 :
  d_33 :
  a_33 :
  x_32 :
  u_32 :
  Return();
  i_99 :
  Epushd(0,0);
  Rpush(p_35);
  a_80 :
  Cpush(r_35);
  Rpush(s_35);
  goto w_97;
  s_35 :
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
  goto q_35;
  r_35 :
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
  Rpush(t_35);
  goto a_80;
  t_35 :
  OneNextSon();
  Rpush(u_35);
  goto l_98;
  u_35 :
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
  Rpush(v_35);
  n_81 :
  Cpush(x_35);
  Rpush(y_35);
  goto w_97;
  y_35 :
  Cpop();
  goto w_35;
  x_35 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(1,1);
  Epushd(4,0);
  Rpush(a_36);
  o_81 :
  Cpush(c_36);
  Rpush(d_36);
  goto w_97;
  d_36 :
  Cpop();
  goto b_36;
  c_36 :
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
  Rpush(e_36);
  p_81 :
  Cpush(g_36);
  Rpush(h_36);
  goto w_97;
  h_36 :
  Cpop();
  goto f_36;
  g_36 :
  Cpush(j_36);
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
  k_36 :
  MatchFun("Cons",2);
  Cpush(l_36);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto m_36;
  l_36 :
  Arg(1);
  Tdrop();
  goto k_36;
  m_36 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(n_36);
  goto p_81;
  n_36 :
  Cpop();
  goto i_36;
  j_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_36);
  goto p_81;
  o_36 :
  AllBuild();
  i_36 :
  f_36 :
  Return();
  e_36 :
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
  Rpush(p_36);
  r_81 :
  Cpush(r_36);
  Rpush(s_36);
  goto w_97;
  s_36 :
  BuildVard(8,1);
  Cpop();
  goto q_36;
  r_36 :
  Cpush(u_36);
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
  v_36 :
  MatchFun("Cons",2);
  Cpush(w_36);
  Arg(0);
  MatchVard(9,2);
  Tpop();
  Cpop();
  goto x_36;
  w_36 :
  Arg(1);
  Tdrop();
  goto v_36;
  x_36 :
  Tpop();
  Epopd(10,0);
  Tpop();
  BuildVard(9,1);
  Epopd(9,2);
  Rpush(y_36);
  goto r_81;
  y_36 :
  Cpop();
  goto t_36;
  u_36 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_36);
  goto r_81;
  z_36 :
  AllBuild();
  t_36 :
  q_36 :
  Return();
  p_36 :
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
  Rpush(a_37);
  t_81 :
  Cpush(c_37);
  Rpush(d_37);
  goto w_97;
  d_37 :
  BuildVard(9,1);
  Cpop();
  goto b_37;
  c_37 :
  Cpush(f_37);
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
  g_37 :
  MatchFun("Cons",2);
  Cpush(h_37);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto i_37;
  h_37 :
  Arg(1);
  Tdrop();
  goto g_37;
  i_37 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(j_37);
  goto t_81;
  j_37 :
  Cpop();
  goto e_37;
  f_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_37);
  goto t_81;
  k_37 :
  AllBuild();
  e_37 :
  b_37 :
  Return();
  a_37 :
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
  Rpush(l_37);
  v_81 :
  Cpush(n_37);
  Rpush(o_37);
  goto w_97;
  o_37 :
  BuildVard(10,1);
  Cpop();
  goto m_37;
  n_37 :
  Cpush(q_37);
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
  r_37 :
  MatchFun("Cons",2);
  Cpush(s_37);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Cpop();
  goto t_37;
  s_37 :
  Arg(1);
  Tdrop();
  goto r_37;
  t_37 :
  Tpop();
  Epopd(12,0);
  Tpop();
  BuildVard(11,1);
  Epopd(11,2);
  Rpush(u_37);
  goto v_81;
  u_37 :
  Cpop();
  goto p_37;
  q_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_37);
  goto v_81;
  v_37 :
  AllBuild();
  p_37 :
  m_37 :
  Return();
  l_37 :
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
  Rpush(w_37);
  goto o_81;
  w_37 :
  AllBuild();
  b_36 :
  Return();
  a_36 :
  Epopd(4,0);
  Epopd(3,1);
  OneNextSon();
  Rpush(x_37);
  goto n_81;
  x_37 :
  AllBuild();
  w_35 :
  Return();
  v_35 :
  Rpush(y_37);
  x_81 :
  Cpush(b_38);
  Rpush(c_38);
  goto w_97;
  c_38 :
  BuildFun("Nil",0);
  Cpop();
  goto a_38;
  b_38 :
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
  Rpush(d_38);
  goto x_81;
  d_38 :
  OneNextSon();
  Rpush(e_38);
  goto l_98;
  e_38 :
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
  Rpush(f_38);
  y_81 :
  Cpush(h_38);
  Rpush(i_38);
  goto w_97;
  i_38 :
  BuildVard(3,1);
  Cpop();
  goto g_38;
  h_38 :
  Cpush(k_38);
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
  l_38 :
  MatchFun("Cons",2);
  Cpush(m_38);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Cpop();
  goto n_38;
  m_38 :
  Arg(1);
  Tdrop();
  goto l_38;
  n_38 :
  Tpop();
  Epopd(5,0);
  Tpop();
  BuildVard(4,1);
  Epopd(4,2);
  Rpush(o_38);
  goto y_81;
  o_38 :
  Cpop();
  goto j_38;
  k_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_38);
  goto y_81;
  p_38 :
  AllBuild();
  j_38 :
  g_38 :
  Return();
  f_38 :
  Epopd(3,2);
  a_38 :
  Return();
  y_37 :
  Epopd(2,0);
  Epopd(1,2);
  q_35 :
  Return();
  p_35 :
  Epopd(0,0);
  Return();
  j_99 :
  Epushd(0,0);
  Rpush(q_38);
  goto k_99;
  q_38 :
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
  Rpush(r_38);
  m_89 :
  Cpush(t_38);
  Rpush(u_38);
  goto w_97;
  u_38 :
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
  goto s_38;
  t_38 :
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
  Rpush(v_38);
  goto m_89;
  v_38 :
  OneNextSon();
  Rpush(w_38);
  goto l_98;
  w_38 :
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
  Rpush(x_38);
  u_90 :
  Cpush(z_38);
  Rpush(a_39);
  goto w_97;
  a_39 :
  Cpop();
  goto y_38;
  z_38 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MatchVard(4,1);
  BuildVard(2,1);
  Epushd(5,0);
  Rpush(b_39);
  v_90 :
  Cpush(d_39);
  Rpush(e_39);
  goto w_97;
  e_39 :
  Cpop();
  goto c_39;
  d_39 :
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
  Rpush(f_39);
  w_90 :
  Cpush(h_39);
  Rpush(i_39);
  goto w_97;
  i_39 :
  BuildVard(9,1);
  Cpop();
  goto g_39;
  h_39 :
  Cpush(k_39);
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
  l_39 :
  MatchFun("Cons",2);
  Cpush(m_39);
  Arg(0);
  MatchVard(10,2);
  Tpop();
  Cpop();
  goto n_39;
  m_39 :
  Arg(1);
  Tdrop();
  goto l_39;
  n_39 :
  Tpop();
  Epopd(11,0);
  Tpop();
  BuildVard(10,1);
  Epopd(10,2);
  Rpush(o_39);
  goto w_90;
  o_39 :
  Cpop();
  goto j_39;
  k_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_39);
  goto w_90;
  p_39 :
  AllBuild();
  j_39 :
  g_39 :
  Return();
  f_39 :
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
  Rpush(q_39);
  y_90 :
  Cpush(s_39);
  Rpush(t_39);
  goto w_97;
  t_39 :
  BuildVard(10,1);
  Cpop();
  goto r_39;
  s_39 :
  Cpush(v_39);
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
  w_39 :
  MatchFun("Cons",2);
  Cpush(x_39);
  Arg(0);
  MatchVard(11,2);
  Tpop();
  Cpop();
  goto y_39;
  x_39 :
  Arg(1);
  Tdrop();
  goto w_39;
  y_39 :
  Tpop();
  Epopd(12,0);
  Tpop();
  BuildVard(11,1);
  Epopd(11,2);
  Rpush(z_39);
  goto y_90;
  z_39 :
  Cpop();
  goto u_39;
  v_39 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_40);
  goto y_90;
  a_40 :
  AllBuild();
  u_39 :
  r_39 :
  Return();
  q_39 :
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
  Rpush(b_40);
  a_91 :
  Cpush(d_40);
  Rpush(e_40);
  goto w_97;
  e_40 :
  BuildVard(11,1);
  Cpop();
  goto c_40;
  d_40 :
  Cpush(g_40);
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
  h_40 :
  MatchFun("Cons",2);
  Cpush(i_40);
  Arg(0);
  MatchVard(12,2);
  Tpop();
  Cpop();
  goto j_40;
  i_40 :
  Arg(1);
  Tdrop();
  goto h_40;
  j_40 :
  Tpop();
  Epopd(13,0);
  Tpop();
  BuildVard(12,1);
  Epopd(12,2);
  Rpush(k_40);
  goto a_91;
  k_40 :
  Cpop();
  goto f_40;
  g_40 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_40);
  goto a_91;
  l_40 :
  AllBuild();
  f_40 :
  c_40 :
  Return();
  b_40 :
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
  Rpush(m_40);
  goto v_90;
  m_40 :
  AllBuild();
  c_39 :
  Return();
  b_39 :
  Epopd(5,0);
  Epopd(4,1);
  OneNextSon();
  Rpush(n_40);
  goto u_90;
  n_40 :
  AllBuild();
  y_38 :
  Return();
  x_38 :
  Rpush(o_40);
  c_91 :
  Cpush(q_40);
  Rpush(r_40);
  goto w_97;
  r_40 :
  BuildFun("Nil",0);
  Cpop();
  goto p_40;
  q_40 :
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
  Rpush(s_40);
  goto c_91;
  s_40 :
  OneNextSon();
  Rpush(t_40);
  goto l_98;
  t_40 :
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
  Rpush(u_40);
  d_91 :
  Cpush(w_40);
  Rpush(x_40);
  goto w_97;
  x_40 :
  BuildVard(4,1);
  Cpop();
  goto v_40;
  w_40 :
  Cpush(a_41);
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
  b_41 :
  MatchFun("Cons",2);
  Cpush(c_41);
  Arg(0);
  MatchVard(5,2);
  Tpop();
  Cpop();
  goto d_41;
  c_41 :
  Arg(1);
  Tdrop();
  goto b_41;
  d_41 :
  Tpop();
  Epopd(6,0);
  Tpop();
  BuildVard(5,1);
  Epopd(5,2);
  Rpush(e_41);
  goto d_91;
  e_41 :
  Cpop();
  goto z_40;
  a_41 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_41);
  goto d_91;
  f_41 :
  AllBuild();
  z_40 :
  v_40 :
  Return();
  u_40 :
  Epopd(4,2);
  p_40 :
  Return();
  o_40 :
  Epopd(3,0);
  Epopd(2,2);
  s_38 :
  Return();
  r_38 :
  Epopd(1,3);
  Epopd(0,0);
  Return();
  k_99 :
  Epushd(0,0);
  _ST_explode_term();
  Epopd(0,0);
  Return();
  l_99 :
  Epushd(0,0);
  Rpush(g_41);
  goto m_99;
  g_41 :
  Rpush(h_41);
  goto p_99;
  h_41 :
  Epopd(0,0);
  Return();
  m_99 :
  Cpush(j_41);
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
  Rpush(k_41);
  k_91 :
  Cpush(m_41);
  Rpush(n_41);
  goto w_97;
  n_41 :
  Cpop();
  goto l_41;
  m_41 :
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
  Rpush(o_41);
  goto n_99;
  o_41 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(p_41);
  goto o_99;
  p_41 :
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
  Rpush(q_41);
  goto r_98;
  q_41 :
  Epopd(3,3);
  OneNextSon();
  Rpush(r_41);
  goto k_91;
  r_41 :
  AllBuild();
  l_41 :
  Return();
  k_41 :
  Epopd(2,0);
  Rpush(s_41);
  goto r_98;
  s_41 :
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
  goto i_41;
  j_41 :
  Cpush(v_41);
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
  Rpush(w_41);
  a_92 :
  Cpush(y_41);
  Rpush(z_41);
  goto w_97;
  z_41 :
  Cpop();
  goto x_41;
  y_41 :
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
  Rpush(a_42);
  goto n_99;
  a_42 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(b_42);
  goto o_99;
  b_42 :
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
  Rpush(c_42);
  goto r_98;
  c_42 :
  Epopd(3,3);
  OneNextSon();
  Rpush(d_42);
  goto a_92;
  d_42 :
  AllBuild();
  x_41 :
  Return();
  w_41 :
  Epopd(2,0);
  Rpush(e_42);
  goto r_98;
  e_42 :
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
  goto u_41;
  v_41 :
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
  Rpush(f_42);
  q_92 :
  Cpush(h_42);
  Rpush(i_42);
  goto w_97;
  i_42 :
  Cpop();
  goto g_42;
  h_42 :
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
  Rpush(j_42);
  goto n_99;
  j_42 :
  MatchVard(4,1);
  Epushd(5,1);
  BuildVard(3,3);
  Rpush(k_42);
  goto o_99;
  k_42 :
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
  Rpush(l_42);
  goto r_98;
  l_42 :
  Epopd(3,3);
  OneNextSon();
  Rpush(m_42);
  goto q_92;
  m_42 :
  AllBuild();
  g_42 :
  Return();
  f_42 :
  Epopd(2,0);
  Rpush(n_42);
  goto r_98;
  n_42 :
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
  u_41 :
  i_41 :
  Return();
  n_99 :
  Cpush(p_42);
  Epushd(0,0);
  MatchFun("Nil",0);
  BuildFun("Nil",0);
  Epopd(0,0);
  Cpop();
  goto o_42;
  p_42 :
  Cpush(r_42);
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
  goto q_42;
  r_42 :
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
  q_42 :
  o_42 :
  Return();
  o_99 :
  Cpush(t_42);
  Epushd(0,0);
  MatchFun("Nil",0);
  BuildFun("Nil",0);
  Epopd(0,0);
  Cpop();
  goto s_42;
  t_42 :
  Cpush(v_42);
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
  goto u_42;
  v_42 :
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
  u_42 :
  s_42 :
  Return();
  p_99 :
  Epushd(0,0);
  Tdupl();
  Rpush(w_42);
  goto q_99;
  w_42 :
  BuildInt(1);
  Rpush(x_42);
  goto c_98;
  x_42 :
  Tpop();
  Epopd(0,0);
  Return();
  q_99 :
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
  Rpush(y_42);
  goto b_98;
  y_42 :
  Tpop();
  Epopd(0,0);
  Return();
  r_99 :
  Epushd(0,0);
  Rpush(z_42);
  g_32 :
  Epushd(1,0);
  Cpush(b_43);
  MatchFun("Op",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(2,0);
  Rpush(c_43);
  g_93 :
  Cpush(e_43);
  Rpush(f_43);
  goto w_97;
  f_43 :
  Cpop();
  goto d_43;
  e_43 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(g_43);
  goto g_32;
  g_43 :
  OneNextSon();
  Rpush(h_43);
  goto g_93;
  h_43 :
  AllBuild();
  d_43 :
  Return();
  c_43 :
  Epopd(2,0);
  AllBuild();
  Cpop();
  goto a_43;
  b_43 :
  a_43 :
  Epopd(1,0);
  Rpush(i_43);
  goto s_99;
  i_43 :
  Return();
  z_42 :
  Epopd(0,0);
  Return();
  s_99 :
  Cpush(k_43);
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
  goto j_43;
  k_43 :
  Cpush(m_43);
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
  goto l_43;
  m_43 :
  Epushd(0,4);
  MatchFunFC("Str",1,&&s_43);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Rpush(t_43);
  goto i_3;
  t_43 :
  goto r_43;
  s_43 :
  MatchFunFC("Int",1,&&u_43);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Rpush(v_43);
  goto j_3;
  v_43 :
  goto r_43;
  u_43 :
  MatchFunFC("Real",1,&&w_43);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Rpush(x_43);
  goto k_3;
  x_43 :
  goto r_43;
  w_43 :
  MatchFunFC("BuildDefault",1,&&y_43);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Rpush(z_43);
  goto l_3;
  z_43 :
  goto r_43;
  y_43 :
  goto fail;
  r_43 :
  goto q_43;
  l_3 :
  BuildFun("Id",0);
  Return();
  q_43 :
  goto p_43;
  k_3 :
  BuildVard(0,3);
  Tpush();
  BuildFun("Real",1);
  Tpush();
  BuildFun("Match",1);
  Return();
  p_43 :
  goto o_43;
  j_3 :
  BuildVard(0,2);
  Tpush();
  BuildFun("Int",1);
  Tpush();
  BuildFun("Match",1);
  Return();
  o_43 :
  goto n_43;
  i_3 :
  BuildVard(0,1);
  Tpush();
  BuildFun("Str",1);
  Tpush();
  BuildFun("Match",1);
  Return();
  n_43 :
  Epopd(0,4);
  l_43 :
  j_43 :
  Return();
  t_99 :
  Epushd(0,2);
  Rpush(a_44);
  goto w_98;
  a_44 :
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
  Rpush(b_44);
  l_93 :
  Epushd(1,0);
  Rpush(c_44);
  g_95 :
  Cpush(e_44);
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
  Rpush(f_44);
  goto x_98;
  f_44 :
  AllBuild();
  Epopd(2,2);
  Cpop();
  goto d_44;
  e_44 :
  Cpush(h_44);
  Epushd(2,5);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,2);
  MatchVard(2,3);
  Tdupl();
  BuildVard(2,3);
  Epushd(3,1);
  MatchFun("Var",1);
  Arg(0);
  MatchVard(3,1);
  Tpop();
  BuildVard(3,1);
  Epopd(3,1);
  MatchVard(2,4);
  BuildVard(0,2);
  MatchVard(2,5);
  Tpop();
  BuildVard(2,4);
  Tpush();
  BuildVard(2,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(i_44);
  goto x_98;
  i_44 :
  Epopd(2,5);
  Cpop();
  goto g_44;
  h_44 :
  Cpush(k_44);
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
  Rpush(l_44);
  goto a_99;
  l_44 :
  MatchVard(2,2);
  Epushd(3,0);
  Rpush(m_44);
  l_96 :
  Cpush(o_44);
  Rpush(p_44);
  goto w_97;
  p_44 :
  Cpop();
  goto n_44;
  o_44 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(q_44);
  goto u_99;
  q_44 :
  OneNextSon();
  Rpush(r_44);
  goto l_96;
  r_44 :
  AllBuild();
  n_44 :
  Return();
  m_44 :
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
  Rpush(s_44);
  m_96 :
  Cpush(u_44);
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
  goto t_44;
  u_44 :
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
  Rpush(v_44);
  goto m_96;
  v_44 :
  OneNextSon();
  Rpush(w_44);
  goto l_98;
  w_44 :
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
  t_44 :
  Return();
  s_44 :
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
  Rpush(x_44);
  n_96 :
  Cpush(z_44);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_45);
  goto n_96;
  a_45 :
  AllBuild();
  Cpop();
  goto y_44;
  z_44 :
  Rpush(b_45);
  goto w_97;
  b_45 :
  BuildVard(3,1);
  y_44 :
  Return();
  x_44 :
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
  Rpush(c_45);
  goto l_93;
  c_45 :
  Epopd(4,1);
  AllBuild();
  Epopd(3,0);
  Epopd(2,8);
  Cpop();
  goto j_44;
  k_44 :
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
  d_45 :
  AllNextSon(&&e_45);
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
  Rpush(f_45);
  goto g_95;
  f_45 :
  Epopd(3,1);
  goto d_45;
  e_45 :
  AllBuild();
  Epopd(2,2);
  j_44 :
  g_44 :
  d_44 :
  Return();
  c_44 :
  Epopd(1,0);
  Return();
  b_44 :
  Epopd(0,2);
  Return();
  u_99 :
  Epushd(0,0);
  _ST_new();
  Epopd(0,0);
  Return();
  v_99 :
  Epushd(0,0);
  Epushd(1,0);
  Rpush(g_45);
  r_96 :
  Cpush(i_45);
  Rpush(j_45);
  goto w_97;
  j_45 :
  Cpop();
  goto h_45;
  i_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(k_45);
  goto w_99;
  k_45 :
  OneNextSon();
  Rpush(l_45);
  goto r_96;
  l_45 :
  AllBuild();
  h_45 :
  Return();
  g_45 :
  Epopd(1,0);
  Rpush(m_45);
  goto r_98;
  m_45 :
  Rpush(n_45);
  goto x_99;
  n_45 :
  Epopd(0,0);
  Return();
  w_99 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  x_99 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  y_99 :
  Epushd(0,0);
  Rpush(o_45);
  y_40 :
  Cpush(q_45);
  Rpush(r_45);
  goto w_97;
  r_45 :
  BuildInt(0);
  Cpop();
  goto p_45;
  q_45 :
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
  Rpush(s_45);
  goto y_40;
  s_45 :
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
  Rpush(t_45);
  goto z_99;
  t_45 :
  Epopd(1,1);
  p_45 :
  Return();
  o_45 :
  Epopd(0,0);
  Return();
  z_99 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  a_100 :
  Epushd(0,0);
  Rpush(u_45);
  z_35 :
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
  Rpush(v_45);
  goto b_100;
  v_45 :
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
  Rpush(w_45);
  goto z_99;
  w_45 :
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
  Rpush(x_45);
  goto c_100;
  x_45 :
  Epopd(4,1);
  Rpush(y_45);
  goto d_100;
  y_45 :
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
  Cpush(a_46);
  MatchInt(0);
  BuildFun("Nil",0);
  Cpop();
  goto z_45;
  a_46 :
  Rpush(b_46);
  goto z_35;
  b_46 :
  z_45 :
  OneNextSon();
  Rpush(c_46);
  goto l_98;
  c_46 :
  AllBuild();
  AllBuild();
  Rpush(d_46);
  goto e_100;
  d_46 :
  Return();
  u_45 :
  Rpush(e_46);
  goto f_100;
  e_46 :
  Rpush(f_46);
  goto x_99;
  f_46 :
  Epopd(0,0);
  Return();
  b_100 :
  Epushd(0,0);
  _ST_mod();
  Epopd(0,0);
  Return();
  c_100 :
  Epushd(0,0);
  _ST_div();
  Epopd(0,0);
  Return();
  d_100 :
  Epushd(0,0);
  _ST_int();
  Epopd(0,0);
  Return();
  e_100 :
  Cpush(h_46);
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
  goto g_46;
  h_46 :
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
  g_46 :
  Return();
  f_100 :
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
  Cpush(j_46);
  i_46 :
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
  goto i_46;
  j_46 :
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
  k_46 :
DOIT_END
