#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(a_6);
  goto main;
  main :
  Epushd(0,0);
  Cpush(g_0);
  BuildFun("stdin",0);
  Rpush(h_0);
  goto s_3;
  h_0 :
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
  Rpush(n_0);
  l_0 :
  Cpush(p_0);
  Cpush(r_0);
  Rpush(w_0);
  goto y_3;
  w_0 :
  Cpop();
  goto q_0;
  r_0 :
  Rpush(x_0);
  goto z_3;
  x_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_4);
  goto l_0;
  a_4 :
  AllBuild();
  q_0 :
  Cpop();
  goto o_0;
  p_0 :
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
  o_0 :
  Return();
  n_0 :
  AllBuild();
  Epopd(1,0);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("stdout",0);
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
  Rpush(b_4);
  goto t_3;
  b_4 :
  Cpop();
  goto f_0;
  g_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(c_4);
  goto u_3;
  c_4 :
  f_0 :
  Epopd(0,0);
  Return();
  s_3 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  t_3 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  u_3 :
  Epushd(0,0);
  Tdupl();
  Rpush(d_4);
  goto v_3;
  d_4 :
  BuildInt(1);
  Rpush(e_4);
  goto x_3;
  e_4 :
  Tpop();
  Epopd(0,0);
  Return();
  v_3 :
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
  Rpush(f_4);
  goto w_3;
  f_4 :
  Tpop();
  Epopd(0,0);
  Return();
  w_3 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  x_3 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  y_3 :
  MatchFun("Nil",0);
  Return();
  z_3 :
  Cpush(h_4);
  Epushd(0,0);
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
  goto k_4;
  l_4 :
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
  goto q_4;
  r_4 :
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
  goto s_4;
  t_4 :
  Cpush(v_4);
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
  goto a_5;
  b_5 :
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
  Cpush(i_5);
  Rpush(j_5);
  goto a_0;
  j_5 :
  Cpop();
  goto h_5;
  i_5 :
  Cpush(l_5);
  Rpush(m_5);
  goto b_0;
  m_5 :
  Cpop();
  goto k_5;
  l_5 :
  Cpush(o_5);
  Rpush(p_5);
  goto c_0;
  p_5 :
  Cpop();
  goto n_5;
  o_5 :
  Cpush(r_5);
  Rpush(s_5);
  goto d_0;
  s_5 :
  Cpop();
  goto q_5;
  r_5 :
  Rpush(t_5);
  goto e_0;
  t_5 :
  q_5 :
  n_5 :
  k_5 :
  h_5 :
  goto g_5;
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
  g_5 :
  goto f_5;
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
  f_5 :
  goto e_5;
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
  e_5 :
  goto d_5;
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
  d_5 :
  goto c_5;
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
  c_5 :
  Epopd(1,10);
  a_5 :
  y_4 :
  w_4 :
  u_4 :
  s_4 :
  q_4 :
  o_4 :
  m_4 :
  k_4 :
  i_4 :
  Epopd(0,0);
  Cpop();
  goto g_4;
  h_4 :
  Epushd(0,0);
  Cpush(v_5);
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
  MatchString("-silent");
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
  goto u_5;
  v_5 :
  Cpush(x_5);
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
  goto w_5;
  x_5 :
  Cpush(z_5);
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
  goto y_5;
  z_5 :
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
  MatchString("-h");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("Help",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  y_5 :
  w_5 :
  u_5 :
  Epopd(0,0);
  g_4 :
  Return();
  a_6 :
DOIT_END
