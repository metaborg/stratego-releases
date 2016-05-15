#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(t_28);
  goto main;
  main :
  Epushd(0,0);
  Rpush(p_0);
  goto f_25;
  p_0 :
  Epopd(0,0);
  Return();
  f_25 :
  Epushd(0,0);
  Cpush(w_0);
  Rpush(x_0);
  goto g_25;
  x_0 :
  Cpop();
  goto q_0;
  w_0 :
  Rpush(y_0);
  goto r_25;
  y_0 :
  BuildInt(1);
  Rpush(z_0);
  goto q_26;
  z_0 :
  q_0 :
  Cpush(f_5);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Epushd(2,0);
  Tdupl();
  h_5 :
  MatchFun("Cons",2);
  Cpush(i_5);
  Arg(0);
  Cpush(n_5);
  Rpush(o_5);
  goto p_25;
  o_5 :
  Cpop();
  goto m_5;
  n_5 :
  Cpush(q_5);
  MatchFun("Undefined",1);
  Cpop();
  goto p_5;
  q_5 :
  Rpush(r_5);
  goto q_25;
  r_5 :
  p_5 :
  m_5 :
  Tpop();
  Cpop();
  goto l_5;
  i_5 :
  Arg(1);
  Tdrop();
  goto h_5;
  l_5 :
  Tpop();
  Epopd(2,0);
  Rpush(s_5);
  goto r_25;
  s_5 :
  BuildInt(1);
  Rpush(t_5);
  goto q_26;
  t_5 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_5);
  goto o_26;
  u_5 :
  AllBuild();
  AllBuild();
  Cpop();
  goto e_5;
  f_5 :
  Cpush(w_5);
  Rpush(x_5);
  goto t_25;
  x_5 :
  Rpush(y_5);
  goto v_25;
  y_5 :
  Rpush(z_5);
  goto y_25;
  z_5 :
  Rpush(a_6);
  goto a_26;
  a_6 :
  Rpush(b_6);
  goto d_26;
  b_6 :
  Rpush(c_6);
  goto e_26;
  c_6 :
  Rpush(d_6);
  goto g_26;
  d_6 :
  Epushd(1,0);
  Cpush(f_6);
  Cpush(g_6);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  h_6 :
  MatchFun("Cons",2);
  Cpush(i_6);
  Arg(0);
  MatchFun("NORM",0);
  Tpop();
  Cpop();
  goto j_6;
  i_6 :
  Arg(1);
  Tdrop();
  goto h_6;
  j_6 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_6);
  goto o_26;
  k_6 :
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  g_6 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(l_6);
  goto m_26;
  l_6 :
  OneNextSon();
  Rpush(m_6);
  goto o_26;
  m_6 :
  AllBuild();
  AllBuild();
  Cpop();
  goto e_6;
  f_6 :
  e_6 :
  Epopd(1,0);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("compilation succeeded");
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
  Rpush(n_6);
  goto p_26;
  n_6 :
  BuildInt(0);
  Rpush(b_7);
  goto q_26;
  b_7 :
  Cpop();
  goto v_5;
  w_5 :
  BuildFun("stderr",0);
  Tpush();
  BuildStr("compilation failed");
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
  Rpush(c_7);
  goto p_26;
  c_7 :
  BuildInt(1);
  Rpush(d_7);
  goto q_26;
  d_7 :
  v_5 :
  e_5 :
  Epopd(0,0);
  Return();
  g_25 :
  Epushd(0,4);
  Tdupl();
  Epushd(1,0);
  Rpush(e_7);
  f_0 :
  Cpush(o_7);
  Rpush(q_7);
  goto h_25;
  q_7 :
  Cpop();
  goto f_7;
  o_7 :
  Cpush(s_7);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchString("-I");
  OneNextSon();
  AllBuild();
  Epushd(2,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_7);
  goto f_0;
  t_7 :
  AllBuild();
  Epopd(3,0);
  AllBuild();
  Epopd(2,0);
  Cpop();
  goto r_7;
  s_7 :
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
  Rpush(u_7);
  goto f_0;
  u_7 :
  r_7 :
  f_7 :
  Return();
  e_7 :
  Epopd(1,0);
  MatchVard(0,1);
  Tpop();
  Tdupl();
  Epushd(1,0);
  Rpush(v_7);
  k_0 :
  Cpush(x_7);
  Rpush(y_7);
  goto h_25;
  y_7 :
  Cpop();
  goto w_7;
  x_7 :
  Cpush(a_8);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchString("-CI");
  OneNextSon();
  AllBuild();
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,2);
  Epushd(3,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_8);
  goto k_0;
  b_8 :
  AllBuild();
  Epopd(3,0);
  Epopd(2,2);
  Cpop();
  goto z_7;
  a_8 :
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
  Rpush(h_8);
  goto k_0;
  h_8 :
  z_7 :
  w_7 :
  Return();
  v_7 :
  Epopd(1,0);
  MatchVard(0,2);
  Tpop();
  Tdupl();
  Epushd(1,0);
  Rpush(i_8);
  r_0 :
  Cpush(k_8);
  Rpush(l_8);
  goto h_25;
  l_8 :
  Cpop();
  goto j_8;
  k_8 :
  Cpush(q_8);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchString("-CL");
  OneNextSon();
  AllBuild();
  Epushd(2,2);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,2);
  Epushd(3,0);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_8);
  goto r_0;
  s_8 :
  AllBuild();
  Epopd(3,0);
  Epopd(2,2);
  Cpop();
  goto m_8;
  q_8 :
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
  Rpush(t_8);
  goto r_0;
  t_8 :
  m_8 :
  j_8 :
  Return();
  i_8 :
  Epopd(1,0);
  MatchVard(0,3);
  Tpop();
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
  Rpush(u_8);
  d_1 :
  Cpush(w_8);
  Cpush(y_8);
  Rpush(z_8);
  goto h_25;
  z_8 :
  Cpop();
  goto x_8;
  y_8 :
  Cpush(b_9);
  Rpush(c_9);
  goto i_25;
  c_9 :
  Cpop();
  goto a_9;
  b_9 :
  Rpush(d_9);
  goto o_25;
  d_9 :
  a_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_9);
  goto d_1;
  e_9 :
  AllBuild();
  x_8 :
  Cpop();
  goto v_8;
  w_8 :
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
  v_8 :
  Return();
  u_8 :
  AllBuild();
  Epopd(1,0);
  Cpush(g_9);
  Epushd(1,1);
  Epushd(2,0);
  Tdupl();
  h_9 :
  MatchFun("Cons",2);
  Cpush(i_9);
  Arg(0);
  MatchFun("Input",1);
  TravInit();
  OneNextSon();
  MatchVard(0,4);
  AllBuild();
  Tpop();
  Cpop();
  goto j_9;
  i_9 :
  Arg(1);
  Tdrop();
  goto h_9;
  j_9 :
  Tpop();
  Epopd(2,0);
  MatchVard(1,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("InclDir",1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("CInclDir",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("CLibDir",1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildStr(".r");
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
  Epopd(1,1);
  Cpop();
  goto f_9;
  g_9 :
  Epushd(1,1);
  MatchVard(1,1);
  BuildFun("Help",0);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("");
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  f_9 :
  Epopd(0,4);
  Return();
  h_25 :
  MatchFun("Nil",0);
  Return();
  i_25 :
  Epushd(0,0);
  Cpush(l_9);
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
  MatchString("-e");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("ExecDir",1);
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
  goto k_9;
  l_9 :
  Cpush(n_9);
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
  MatchString("-I");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("Ignore",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto m_9;
  n_9 :
  Cpush(p_9);
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
  MatchString("--Include");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("Ignore",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto o_9;
  p_9 :
  Cpush(r_9);
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
  MatchString("-CI");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("Ignore",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto q_9;
  r_9 :
  Cpush(t_9);
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
  MatchString("-CL");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("Ignore",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,3);
  Cpop();
  goto s_9;
  t_9 :
  Cpush(v_9);
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
  MatchString("-CC");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("CC",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto u_9;
  v_9 :
  Cpush(x_9);
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
  MatchString("-norm");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("NORM",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  Cpop();
  goto w_9;
  x_9 :
  Cpush(z_9);
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
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(a_10);
  goto l_25;
  a_10 :
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildFun("Input",1);
  Epopd(4,1);
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
  goto y_9;
  z_9 :
  Cpush(c_10);
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
  MatchString("--main");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Main",1);
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
  goto b_10;
  c_10 :
  Cpush(e_10);
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
  MatchString("-m");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Main",1);
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
  goto d_10;
  e_10 :
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
  MatchString("--ast");
  Tpop();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildFun("AST",0);
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Epopd(1,2);
  d_10 :
  b_10 :
  y_9 :
  w_9 :
  u_9 :
  s_9 :
  q_9 :
  o_9 :
  m_9 :
  k_9 :
  Epopd(0,0);
  Return();
  l_25 :
  Epushd(0,0);
  Rpush(f_10);
  goto m_25;
  f_10 :
  Epushd(1,0);
  Cpush(h_10);
  Rpush(i_10);
  z_2 :
  Cpush(k_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_10);
  goto z_2;
  l_10 :
  AllBuild();
  Cpop();
  goto j_10;
  k_10 :
  MatchFun("Cons",2);
  Arg(0);
  MatchInt(46);
  Tpop();
  Arg(1);
  Tpop();
  BuildFun("Nil",0);
  j_10 :
  Return();
  i_10 :
  Cpop();
  goto g_10;
  h_10 :
  g_10 :
  Epopd(1,0);
  Rpush(m_10);
  goto n_25;
  m_10 :
  Epopd(0,0);
  Return();
  m_25 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  n_25 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  o_25 :
  Epushd(0,0);
  Cpush(o_10);
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
  goto n_10;
  o_10 :
  Cpush(q_10);
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
  goto p_10;
  q_10 :
  Cpush(s_10);
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
  goto r_10;
  s_10 :
  Cpush(u_10);
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
  goto t_10;
  u_10 :
  Cpush(w_10);
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
  goto v_10;
  w_10 :
  Cpush(y_10);
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
  goto x_10;
  y_10 :
  Cpush(a_11);
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
  goto z_10;
  a_11 :
  Cpush(c_11);
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
  goto b_11;
  c_11 :
  Cpush(e_11);
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
  goto d_11;
  e_11 :
  Cpush(g_11);
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
  goto f_11;
  g_11 :
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
  Cpush(n_11);
  Rpush(o_11);
  goto a_0;
  o_11 :
  Cpop();
  goto m_11;
  n_11 :
  Cpush(q_11);
  Rpush(r_11);
  goto c_0;
  r_11 :
  Cpop();
  goto p_11;
  q_11 :
  Cpush(t_11);
  Rpush(u_11);
  goto d_0;
  u_11 :
  Cpop();
  goto s_11;
  t_11 :
  Cpush(w_11);
  Rpush(x_11);
  goto i_0;
  x_11 :
  Cpop();
  goto v_11;
  w_11 :
  Rpush(y_11);
  goto j_0;
  y_11 :
  v_11 :
  s_11 :
  p_11 :
  m_11 :
  goto l_11;
  j_0 :
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
  l_11 :
  goto k_11;
  i_0 :
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
  k_11 :
  goto j_11;
  d_0 :
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
  j_11 :
  goto i_11;
  c_0 :
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
  i_11 :
  goto h_11;
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
  h_11 :
  Epopd(1,10);
  f_11 :
  d_11 :
  b_11 :
  z_10 :
  x_10 :
  v_10 :
  t_10 :
  r_10 :
  p_10 :
  n_10 :
  Epopd(0,0);
  Return();
  p_25 :
  MatchFun("Help",0);
  Return();
  q_25 :
  MatchFun("Version",0);
  Return();
  r_25 :
  Epushd(0,0);
  Rpush(z_11);
  goto s_25;
  z_11 :
  BuildFun("stderr",0);
  Tpush();
  BuildStr("Usage: sc [options] -i file\n");
  Tpush();
  BuildStr("Options:\n");
  Tpush();
  BuildStr("  -i spec     Compile specification spec\n");
  Tpush();
  BuildStr("  -o target   Name executable target\n");
  Tpush();
  BuildStr("  --main s    Name main strategy [default: main]\n");
  Tpush();
  BuildStr("  -I dir      Look in dir for imported Stratego modules\n");
  Tpush();
  BuildStr("  -CI dir     Look in dir for C include files\n");
  Tpush();
  BuildStr("  -CL dir     Look in dir for C object libraries\n");
  Tpush();
  BuildStr("  --ast       Output abstract syntax of specification\n");
  Tpush();
  BuildStr("  -h|--help   Display this message");
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
  Rpush(a_12);
  goto p_26;
  a_12 :
  Epopd(0,0);
  Return();
  s_25 :
  Epushd(0,1);
  Cpush(c_12);
  Epushd(1,0);
  Tdupl();
  d_12 :
  MatchFun("Cons",2);
  Cpush(e_12);
  Arg(0);
  MatchFun("DeclVersion",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Tpop();
  Cpop();
  goto f_12;
  e_12 :
  Arg(1);
  Tdrop();
  goto d_12;
  f_12 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto b_12;
  c_12 :
  BuildStr("");
  MatchVard(0,1);
  b_12 :
  Tdupl();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("sc version ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
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
  Rpush(g_12);
  goto p_26;
  g_12 :
  Tpop();
  Epopd(0,1);
  Return();
  t_25 :
  Epushd(0,0);
  Cpush(i_12);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  j_12 :
  MatchFun("Cons",2);
  Cpush(k_12);
  Arg(0);
  Rpush(m_12);
  goto u_25;
  m_12 :
  Tpop();
  Cpop();
  goto l_12;
  k_12 :
  Arg(1);
  Tdrop();
  goto j_12;
  l_12 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_12);
  goto o_26;
  n_12 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_12);
  goto s_25;
  o_12 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_12);
  goto o_26;
  p_12 :
  AllBuild();
  AllBuild();
  Cpop();
  goto h_12;
  i_12 :
  h_12 :
  Epopd(0,0);
  Return();
  u_25 :
  MatchFun("Verbose",0);
  Return();
  v_25 :
  Epushd(0,2);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  q_12 :
  MatchFun("Cons",2);
  Cpush(r_12);
  Arg(0);
  MatchFun("InclDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  AllBuild();
  Tpop();
  Cpop();
  goto s_12;
  r_12 :
  Arg(1);
  Tdrop();
  goto q_12;
  s_12 :
  Tpop();
  Tdupl();
  t_12 :
  MatchFun("Cons",2);
  Cpush(u_12);
  Arg(0);
  MatchFun("ExecDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Tpop();
  Cpop();
  goto v_12;
  u_12 :
  Arg(1);
  Tdrop();
  goto t_12;
  v_12 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_12);
  goto o_26;
  w_12 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Rpush(x_12);
  goto w_25;
  x_12 :
  MatchVard(1,1);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".tree");
  OneNextSon();
  Rpush(y_12);
  goto o_26;
  y_12 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(z_12);
  goto w_25;
  z_12 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/pack-stratego");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(a_13);
  goto w_25;
  a_13 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildStr("--silent");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,2);
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
  Rpush(b_13);
  x_6 :
  Cpush(d_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_13);
  goto x_6;
  e_13 :
  AllBuild();
  Cpop();
  goto c_13;
  d_13 :
  Rpush(f_13);
  goto h_25;
  f_13 :
  BuildVard(4,1);
  c_13 :
  Return();
  b_13 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(g_13);
  goto x_25;
  g_13 :
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Rpush(h_13);
  goto o_26;
  h_13 :
  AllBuild();
  AllBuild();
  Epopd(0,2);
  Return();
  w_25 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(i_13);
  goto m_25;
  i_13 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(j_13);
  goto m_25;
  j_13 :
  OneNextSon();
  Rpush(k_13);
  goto o_26;
  k_13 :
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
  Rpush(l_13);
  a_7 :
  Cpush(n_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_13);
  goto a_7;
  o_13 :
  AllBuild();
  Cpop();
  goto m_13;
  n_13 :
  Rpush(p_13);
  goto h_25;
  p_13 :
  BuildVard(1,1);
  m_13 :
  Return();
  l_13 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(q_13);
  goto n_25;
  q_13 :
  Epopd(0,0);
  Return();
  x_25 :
  Epushd(0,0);
  _ST_call();
  Epopd(0,0);
  Return();
  y_25 :
  Epushd(0,2);
  Cpush(s_13);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  t_13 :
  MatchFun("Cons",2);
  Cpush(u_13);
  Arg(0);
  Rpush(w_13);
  goto z_25;
  w_13 :
  Tpop();
  Cpop();
  goto v_13;
  u_13 :
  Arg(1);
  Tdrop();
  goto t_13;
  v_13 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  OneNextSon();
  Rpush(x_13);
  goto o_26;
  x_13 :
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(y_13);
  goto o_26;
  y_13 :
  AllBuild();
  AllBuild();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("abstract syntax written to ");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
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
  Rpush(z_13);
  goto p_26;
  z_13 :
  BuildInt(0);
  Rpush(a_14);
  goto q_26;
  a_14 :
  Cpop();
  goto r_13;
  s_13 :
  r_13 :
  Epopd(0,2);
  Return();
  z_25 :
  MatchFun("AST",0);
  Return();
  a_26 :
  Epushd(0,1);
  Cpush(c_14);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  d_14 :
  MatchFun("Cons",2);
  Cpush(e_14);
  Arg(0);
  MatchFun("Main",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Tpop();
  Cpop();
  goto f_14;
  e_14 :
  Arg(1);
  Tdrop();
  goto d_14;
  f_14 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_14);
  goto o_26;
  g_14 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  Tdupl();
  Rpush(h_14);
  goto w_25;
  h_14 :
  MatchVard(1,1);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".tree1");
  OneNextSon();
  Rpush(i_14);
  goto o_26;
  i_14 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(j_14);
  goto w_25;
  j_14 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Rpush(k_14);
  goto b_26;
  k_14 :
  Epushd(2,1);
  MatchFun("Specification",1);
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Epushd(3,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(3,1);
  BuildStr("main");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("SVar",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Call",2);
  Tpush();
  BuildFun("SDef",3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Strategies",1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Specification",1);
  Epopd(3,1);
  Epopd(2,1);
  MatchVard(1,3);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(l_14);
  goto c_26;
  l_14 :
  Tpop();
  Epopd(1,3);
  OneNextSon();
  Rpush(m_14);
  goto o_26;
  m_14 :
  AllBuild();
  AllBuild();
  Cpop();
  goto b_14;
  c_14 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  Tdupl();
  Rpush(n_14);
  goto w_25;
  n_14 :
  MatchVard(1,1);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".tree1");
  OneNextSon();
  Rpush(o_14);
  goto o_26;
  o_14 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(p_14);
  goto w_25;
  p_14 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Rpush(q_14);
  goto b_26;
  q_14 :
  MatchVard(1,3);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(r_14);
  goto c_26;
  r_14 :
  Tpop();
  Epopd(1,3);
  OneNextSon();
  Rpush(s_14);
  goto o_26;
  s_14 :
  AllBuild();
  AllBuild();
  b_14 :
  Epopd(0,1);
  Return();
  b_26 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  c_26 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  d_26 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Rpush(t_14);
  r_8 :
  Cpush(v_14);
  Rpush(w_14);
  goto h_25;
  w_14 :
  Cpop();
  goto u_14;
  v_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(y_14);
  MatchFun("ExecDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto x_14;
  y_14 :
  x_14 :
  Epopd(2,0);
  OneNextSon();
  Rpush(z_14);
  goto r_8;
  z_14 :
  AllBuild();
  u_14 :
  Return();
  t_14 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_15);
  goto o_26;
  a_15 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,18);
  Tdupl();
  Rpush(b_15);
  goto w_25;
  b_15 :
  MatchVard(1,1);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".s1");
  OneNextSon();
  Rpush(d_15);
  goto o_26;
  d_15 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(e_15);
  goto w_25;
  e_15 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/frontend");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(f_15);
  goto w_25;
  f_15 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,2);
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
  Rpush(g_15);
  z_21 :
  Cpush(i_15);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_15);
  goto z_21;
  j_15 :
  AllBuild();
  Cpop();
  goto h_15;
  i_15 :
  Rpush(k_15);
  goto h_25;
  k_15 :
  BuildVard(4,1);
  h_15 :
  Return();
  g_15 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(l_15);
  goto x_25;
  l_15 :
  Tpop();
  Tdupl();
  Rpush(m_15);
  goto w_25;
  m_15 :
  MatchVard(1,3);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".s2");
  OneNextSon();
  Rpush(n_15);
  goto o_26;
  n_15 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(o_15);
  goto w_25;
  o_15 :
  MatchVard(1,4);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/extract");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(p_15);
  goto w_25;
  p_15 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,4);
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
  Rpush(q_15);
  a_22 :
  Cpush(s_15);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_15);
  goto a_22;
  t_15 :
  AllBuild();
  Cpop();
  goto r_15;
  s_15 :
  Rpush(u_15);
  goto h_25;
  u_15 :
  BuildVard(4,1);
  r_15 :
  Return();
  q_15 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(v_15);
  goto x_25;
  v_15 :
  Tpop();
  Tdupl();
  Rpush(w_15);
  goto w_25;
  w_15 :
  MatchVard(1,5);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".s");
  OneNextSon();
  Rpush(x_15);
  goto o_26;
  x_15 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(y_15);
  goto w_25;
  y_15 :
  MatchVard(1,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/inline");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(z_15);
  goto w_25;
  z_15 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,5);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,6);
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
  Rpush(a_16);
  b_22 :
  Cpush(c_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_16);
  goto b_22;
  d_16 :
  AllBuild();
  Cpop();
  goto b_16;
  c_16 :
  Rpush(e_16);
  goto h_25;
  e_16 :
  BuildVard(4,1);
  b_16 :
  Return();
  a_16 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(f_16);
  goto x_25;
  f_16 :
  Tpop();
  Tdupl();
  Rpush(g_16);
  goto w_25;
  g_16 :
  MatchVard(1,7);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".so1");
  OneNextSon();
  Rpush(h_16);
  goto o_26;
  h_16 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(i_16);
  goto w_25;
  i_16 :
  MatchVard(1,8);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/optimizer");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(j_16);
  goto w_25;
  j_16 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,7);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,8);
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
  Rpush(k_16);
  c_22 :
  Cpush(m_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_16);
  goto c_22;
  n_16 :
  AllBuild();
  Cpop();
  goto l_16;
  m_16 :
  Rpush(o_16);
  goto h_25;
  o_16 :
  BuildVard(4,1);
  l_16 :
  Return();
  k_16 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(p_16);
  goto x_25;
  p_16 :
  Tpop();
  Tdupl();
  Rpush(q_16);
  goto w_25;
  q_16 :
  MatchVard(1,9);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".so2");
  OneNextSon();
  Rpush(r_16);
  goto o_26;
  r_16 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(s_16);
  goto w_25;
  s_16 :
  MatchVard(1,10);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/matching-tree");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(t_16);
  goto w_25;
  t_16 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,9);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,10);
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
  Rpush(u_16);
  d_22 :
  Cpush(w_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_16);
  goto d_22;
  x_16 :
  AllBuild();
  Cpop();
  goto v_16;
  w_16 :
  Rpush(y_16);
  goto h_25;
  y_16 :
  BuildVard(4,1);
  v_16 :
  Return();
  u_16 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(z_16);
  goto x_25;
  z_16 :
  Tpop();
  Tdupl();
  Rpush(a_17);
  goto w_25;
  a_17 :
  MatchVard(1,11);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".so1");
  OneNextSon();
  Rpush(b_17);
  goto o_26;
  b_17 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(c_17);
  goto w_25;
  c_17 :
  MatchVard(1,12);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/optimizer");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(d_17);
  goto w_25;
  d_17 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,11);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,12);
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
  Rpush(e_17);
  e_22 :
  Cpush(g_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_17);
  goto e_22;
  h_17 :
  AllBuild();
  Cpop();
  goto f_17;
  g_17 :
  Rpush(i_17);
  goto h_25;
  i_17 :
  BuildVard(4,1);
  f_17 :
  Return();
  e_17 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(j_17);
  goto x_25;
  j_17 :
  Tpop();
  Tdupl();
  Rpush(k_17);
  goto w_25;
  k_17 :
  MatchVard(1,13);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".i1");
  OneNextSon();
  Rpush(l_17);
  goto o_26;
  l_17 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(m_17);
  goto w_25;
  m_17 :
  MatchVard(1,14);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/backend");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(n_17);
  goto w_25;
  n_17 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,13);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,14);
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
  Rpush(o_17);
  f_22 :
  Cpush(r_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_17);
  goto f_22;
  y_17 :
  AllBuild();
  Cpop();
  goto p_17;
  r_17 :
  Rpush(z_17);
  goto h_25;
  z_17 :
  BuildVard(4,1);
  p_17 :
  Return();
  o_17 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(a_18);
  goto x_25;
  a_18 :
  Tpop();
  Tdupl();
  Rpush(b_18);
  goto w_25;
  b_18 :
  MatchVard(1,15);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".i");
  OneNextSon();
  Rpush(t_18);
  goto o_26;
  t_18 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(u_18);
  goto w_25;
  u_18 :
  MatchVard(1,16);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/postprocess");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
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
  Epopd(4,1);
  Rpush(v_18);
  goto w_25;
  v_18 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,15);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,16);
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
  Rpush(w_18);
  g_22 :
  Cpush(i_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_22);
  goto g_22;
  k_22 :
  AllBuild();
  Cpop();
  goto x_18;
  i_22 :
  Rpush(l_22);
  goto h_25;
  l_22 :
  BuildVard(4,1);
  x_18 :
  Return();
  w_18 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(m_22);
  goto x_25;
  m_22 :
  Tpop();
  Tdupl();
  Rpush(n_22);
  goto w_25;
  n_22 :
  MatchVard(1,17);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".c");
  OneNextSon();
  Rpush(o_22);
  goto o_26;
  o_22 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(p_22);
  goto w_25;
  p_22 :
  MatchVard(1,18);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("pp-instructions");
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,17);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,18);
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
  Rpush(q_22);
  h_22 :
  Cpush(s_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_22);
  goto h_22;
  u_22 :
  AllBuild();
  Cpop();
  goto r_22;
  s_22 :
  Rpush(v_22);
  goto h_25;
  v_22 :
  BuildVard(4,1);
  r_22 :
  Return();
  q_22 :
  Epopd(5,0);
  Epopd(4,2);
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
  Rpush(y_22);
  goto x_25;
  y_22 :
  Tpop();
  Epopd(1,18);
  OneNextSon();
  Rpush(z_22);
  goto o_26;
  z_22 :
  AllBuild();
  AllBuild();
  Epopd(0,1);
  Return();
  e_26 :
  Epushd(0,3);
  Tdupl();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("compiling");
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
  Rpush(a_23);
  goto p_26;
  a_23 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Rpush(b_23);
  j_22 :
  Cpush(d_23);
  Rpush(e_23);
  goto h_25;
  e_23 :
  Cpop();
  goto c_23;
  d_23 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(g_23);
  MatchFun("CInclDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto f_23;
  g_23 :
  f_23 :
  Epopd(2,0);
  OneNextSon();
  Rpush(i_23);
  goto j_22;
  i_23 :
  AllBuild();
  c_23 :
  Return();
  b_23 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_23);
  goto o_26;
  j_23 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Rpush(k_23);
  goto w_25;
  k_23 :
  MatchVard(0,2);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr(".o");
  OneNextSon();
  Rpush(l_23);
  goto o_26;
  l_23 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(m_23);
  goto w_25;
  m_23 :
  MatchVard(0,3);
  Tpop();
  Tdupl();
  BuildVard(0,1);
  Tpush();
  BuildStr("-c");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr("-o");
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
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
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
  Rpush(n_23);
  x_22 :
  Cpush(p_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_23);
  goto x_22;
  q_23 :
  AllBuild();
  Cpop();
  goto o_23;
  p_23 :
  Rpush(r_23);
  goto h_25;
  r_23 :
  BuildVard(1,1);
  o_23 :
  Return();
  n_23 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(s_23);
  goto f_26;
  s_23 :
  Tpop();
  OneNextSon();
  Rpush(t_23);
  goto o_26;
  t_23 :
  AllBuild();
  AllBuild();
  Epopd(0,3);
  Return();
  f_26 :
  Epushd(0,1);
  MatchVard(0,1);
  BuildStr("gcc");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(u_23);
  goto x_25;
  u_23 :
  Epopd(0,1);
  Return();
  g_26 :
  Epushd(0,5);
  Tdupl();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("linking");
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
  Rpush(f_24);
  goto p_26;
  f_24 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Rpush(g_24);
  h_23 :
  Cpush(i_24);
  Rpush(j_24);
  goto h_25;
  j_24 :
  Cpop();
  goto h_24;
  i_24 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(t_24);
  Cpush(v_24);
  MatchFun("Dir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto u_24;
  v_24 :
  Cpush(x_24);
  MatchFun("CLibDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,5);
  AllBuild();
  Cpop();
  goto w_24;
  x_24 :
  MatchFun("Output",1);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  AllBuild();
  w_24 :
  u_24 :
  Cpop();
  goto k_24;
  t_24 :
  k_24 :
  Epopd(2,0);
  OneNextSon();
  Rpush(d_25);
  goto h_23;
  d_25 :
  AllBuild();
  h_24 :
  Return();
  g_24 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_25);
  goto o_26;
  j_25 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Rpush(k_25);
  goto w_25;
  k_25 :
  MatchVard(0,3);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Cpush(s_26);
  BuildVard(0,2);
  Cpop();
  goto r_26;
  s_26 :
  r_26 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr("");
  OneNextSon();
  Rpush(t_26);
  goto o_26;
  t_26 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(u_26);
  goto w_25;
  u_26 :
  MatchVard(0,4);
  Tpop();
  Tdupl();
  Epushd(1,1);
  BuildVard(0,5);
  Epushd(2,0);
  Rpush(v_26);
  y_23 :
  Cpush(x_26);
  Rpush(y_26);
  goto h_25;
  y_26 :
  Cpop();
  goto w_26;
  x_26 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(z_26);
  goto h_26;
  z_26 :
  OneNextSon();
  Rpush(a_27);
  goto y_23;
  a_27 :
  AllBuild();
  w_26 :
  Return();
  v_26 :
  Epopd(2,0);
  Rpush(b_27);
  goto l_26;
  b_27 :
  MatchVard(1,1);
  BuildVard(0,3);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(1,1);
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
  Rpush(c_27);
  z_23 :
  Cpush(e_27);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_27);
  goto z_23;
  f_27 :
  AllBuild();
  Cpop();
  goto d_27;
  e_27 :
  Rpush(g_27);
  goto h_25;
  g_27 :
  BuildVard(1,1);
  d_27 :
  Return();
  c_27 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(h_27);
  goto f_26;
  h_27 :
  Tpop();
  OneNextSon();
  Rpush(i_27);
  goto o_26;
  i_27 :
  AllBuild();
  AllBuild();
  Epopd(0,5);
  Return();
  h_26 :
  Epushd(0,0);
  Rpush(j_27);
  goto m_25;
  j_27 :
  Epushd(1,1);
  MatchVard(1,1);
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Rpush(k_27);
  n_28 :
  Cpush(m_27);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Nil",0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Rpush(n_27);
  goto i_26;
  n_27 :
  Rpush(o_27);
  goto n_25;
  o_27 :
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Rpush(p_27);
  goto i_26;
  p_27 :
  Epopd(1,2);
  Cpop();
  goto l_27;
  m_27 :
  Rpush(q_27);
  goto j_26;
  q_27 :
  Rpush(r_27);
  goto n_28;
  r_27 :
  l_27 :
  Return();
  k_27 :
  Epopd(0,0);
  Return();
  i_26 :
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
  Cpush(t_27);
  s_27 :
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
  goto s_27;
  t_27 :
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
  j_26 :
  Cpush(v_27);
  Epushd(0,3);
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
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchInt(32);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(w_27);
  goto i_26;
  w_27 :
  Rpush(x_27);
  goto n_25;
  x_27 :
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Epopd(0,3);
  Cpop();
  goto u_27;
  v_27 :
  Epushd(0,4);
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
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,4);
  Tpush();
  BuildInt(32);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpush(y_27);
  Tdupl();
  Rpush(z_27);
  goto k_26;
  z_27 :
  Cpop();
  Crestore();
  Cjump();
  y_27 :
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,4);
  u_27 :
  Return();
  k_26 :
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
  l_26 :
  Epushd(0,0);
  Rpush(a_28);
  d_34 :
  Cpush(c_28);
  Rpush(d_28);
  goto h_25;
  d_28 :
  Cpop();
  goto b_28;
  c_28 :
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
  Rpush(e_28);
  s_24 :
  Cpush(g_28);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_28);
  goto s_24;
  h_28 :
  AllBuild();
  Cpop();
  goto f_28;
  g_28 :
  Rpush(i_28);
  goto h_25;
  i_28 :
  BuildVard(1,1);
  Rpush(j_28);
  goto d_34;
  j_28 :
  f_28 :
  Return();
  e_28 :
  Epopd(2,0);
  Epopd(1,2);
  b_28 :
  Return();
  a_28 :
  Epopd(0,0);
  Return();
  m_26 :
  Epushd(0,1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,1);
  Tpush();
  BuildStr(".tree");
  Tpush();
  BuildStr(".s");
  Tpush();
  BuildStr(".so1");
  Tpush();
  BuildStr(".so2");
  Tpush();
  BuildStr(".i1");
  Tpush();
  BuildStr(".i");
  Tpush();
  BuildStr(".o");
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
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,0);
  Rpush(k_28);
  y_24 :
  Cpush(m_28);
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
  goto l_28;
  m_28 :
  Epushd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
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
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
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
  Epopd(2,3);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_28);
  goto w_25;
  o_28 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_28);
  goto y_24;
  p_28 :
  OneNextSon();
  Rpush(q_28);
  goto o_26;
  q_28 :
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
  l_28 :
  Return();
  k_28 :
  Epopd(1,0);
  Rpush(r_28);
  goto n_26;
  r_28 :
  Tpop();
  Epopd(0,1);
  Return();
  n_26 :
  Epushd(0,1);
  MatchVard(0,1);
  Tdupl();
  BuildStr("rm");
  Tpush();
  BuildStr("-f");
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(s_28);
  goto x_25;
  s_28 :
  Tpop();
  Epopd(0,1);
  Return();
  o_26 :
  MatchFun("TNil",0);
  Return();
  p_26 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  q_26 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  t_28 :
DOIT_END
