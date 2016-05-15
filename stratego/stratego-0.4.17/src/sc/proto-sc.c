#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(l_29);
  goto main;
  main :
  Epushd(0,0);
  Rpush(p_0);
  goto x_25;
  p_0 :
  Epopd(0,0);
  Return();
  x_25 :
  Epushd(0,0);
  Cpush(w_0);
  Rpush(x_0);
  goto y_25;
  x_0 :
  Cpop();
  goto q_0;
  w_0 :
  Rpush(y_0);
  goto h_26;
  y_0 :
  BuildInt(1);
  Rpush(z_0);
  goto g_27;
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
  Cpush(o_5);
  Rpush(p_5);
  goto f_26;
  p_5 :
  Cpop();
  goto k_5;
  o_5 :
  Cpush(r_5);
  MatchFun("Undefined",1);
  Cpop();
  goto q_5;
  r_5 :
  Rpush(s_5);
  goto g_26;
  s_5 :
  q_5 :
  k_5 :
  Tpop();
  Cpop();
  goto j_5;
  i_5 :
  Arg(1);
  Tdrop();
  goto h_5;
  j_5 :
  Tpop();
  Epopd(2,0);
  Rpush(t_5);
  goto h_26;
  t_5 :
  BuildInt(1);
  Rpush(u_5);
  goto g_27;
  u_5 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_5);
  goto e_27;
  v_5 :
  AllBuild();
  AllBuild();
  Cpop();
  goto e_5;
  f_5 :
  Cpush(x_5);
  Rpush(y_5);
  goto j_26;
  y_5 :
  Rpush(z_5);
  goto l_26;
  z_5 :
  Rpush(a_6);
  goto o_26;
  a_6 :
  Rpush(b_6);
  goto q_26;
  b_6 :
  Rpush(c_6);
  goto t_26;
  c_6 :
  Rpush(d_6);
  goto u_26;
  d_6 :
  Rpush(e_6);
  goto w_26;
  e_6 :
  Epushd(1,0);
  Cpush(g_6);
  Cpush(h_6);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  i_6 :
  MatchFun("Cons",2);
  Cpush(j_6);
  Arg(0);
  MatchFun("NORM",0);
  Tpop();
  Cpop();
  goto k_6;
  j_6 :
  Arg(1);
  Tdrop();
  goto i_6;
  k_6 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_6);
  goto e_27;
  l_6 :
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  h_6 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_6);
  goto c_27;
  m_6 :
  OneNextSon();
  Rpush(n_6);
  goto e_27;
  n_6 :
  AllBuild();
  AllBuild();
  Cpop();
  goto f_6;
  g_6 :
  f_6 :
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
  Rpush(o_6);
  goto f_27;
  o_6 :
  BuildInt(0);
  Rpush(p_6);
  goto g_27;
  p_6 :
  Cpop();
  goto w_5;
  x_5 :
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
  Rpush(q_6);
  goto f_27;
  q_6 :
  BuildInt(1);
  Rpush(r_6);
  goto g_27;
  r_6 :
  w_5 :
  e_5 :
  Epopd(0,0);
  Return();
  y_25 :
  Epushd(0,4);
  Tdupl();
  Epushd(1,0);
  Rpush(s_6);
  f_0 :
  Cpush(u_6);
  Rpush(v_6);
  goto z_25;
  v_6 :
  Cpop();
  goto t_6;
  u_6 :
  Cpush(x_6);
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
  Rpush(y_6);
  goto f_0;
  y_6 :
  AllBuild();
  Epopd(3,0);
  AllBuild();
  Epopd(2,0);
  Cpop();
  goto w_6;
  x_6 :
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
  Rpush(z_6);
  goto f_0;
  z_6 :
  w_6 :
  t_6 :
  Return();
  s_6 :
  Epopd(1,0);
  MatchVard(0,1);
  Tpop();
  Tdupl();
  Epushd(1,0);
  Rpush(a_7);
  k_0 :
  Cpush(j_7);
  Rpush(k_7);
  goto z_25;
  k_7 :
  Cpop();
  goto b_7;
  j_7 :
  Cpush(d_8);
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
  Rpush(e_8);
  goto k_0;
  e_8 :
  AllBuild();
  Epopd(3,0);
  Epopd(2,2);
  Cpop();
  goto l_7;
  d_8 :
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
  Rpush(g_8);
  goto k_0;
  g_8 :
  l_7 :
  b_7 :
  Return();
  a_7 :
  Epopd(1,0);
  MatchVard(0,2);
  Tpop();
  Tdupl();
  Epushd(1,0);
  Rpush(i_8);
  r_0 :
  Cpush(k_8);
  Rpush(l_8);
  goto z_25;
  l_8 :
  Cpop();
  goto j_8;
  k_8 :
  Cpush(n_8);
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
  Rpush(o_8);
  goto r_0;
  o_8 :
  AllBuild();
  Epopd(3,0);
  Epopd(2,2);
  Cpop();
  goto m_8;
  n_8 :
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
  Rpush(p_8);
  goto r_0;
  p_8 :
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
  Rpush(q_8);
  d_1 :
  Cpush(s_8);
  Cpush(z_8);
  Rpush(a_9);
  goto z_25;
  a_9 :
  Cpop();
  goto t_8;
  z_8 :
  Cpush(c_9);
  Rpush(d_9);
  goto a_26;
  d_9 :
  Cpop();
  goto b_9;
  c_9 :
  Rpush(e_9);
  goto e_26;
  e_9 :
  b_9 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_9);
  goto d_1;
  i_9 :
  AllBuild();
  t_8 :
  Cpop();
  goto r_8;
  s_8 :
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
  r_8 :
  Return();
  q_8 :
  AllBuild();
  Epopd(1,0);
  Cpush(l_9);
  Epushd(1,1);
  Epushd(2,0);
  Tdupl();
  m_9 :
  MatchFun("Cons",2);
  Cpush(n_9);
  Arg(0);
  MatchFun("Input",1);
  TravInit();
  OneNextSon();
  MatchVard(0,4);
  AllBuild();
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
  goto k_9;
  l_9 :
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
  k_9 :
  Epopd(0,4);
  Return();
  z_25 :
  MatchFun("Nil",0);
  Return();
  a_26 :
  Epushd(0,0);
  Cpush(q_9);
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
  goto p_9;
  q_9 :
  Cpush(s_9);
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
  goto r_9;
  s_9 :
  Cpush(u_9);
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
  goto t_9;
  u_9 :
  Cpush(w_9);
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
  goto v_9;
  w_9 :
  Cpush(y_9);
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
  goto x_9;
  y_9 :
  Cpush(a_10);
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
  goto z_9;
  a_10 :
  Cpush(c_10);
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
  MatchString("-i");
  Tpop();
  Epushd(2,1);
  BuildVard(1,1);
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildVard(3,1);
  Rpush(f_10);
  goto b_26;
  f_10 :
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
  goto d_10;
  e_10 :
  Cpush(h_10);
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
  goto g_10;
  h_10 :
  Cpush(j_10);
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
  goto i_10;
  j_10 :
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
  i_10 :
  g_10 :
  d_10 :
  b_10 :
  z_9 :
  x_9 :
  v_9 :
  t_9 :
  r_9 :
  p_9 :
  Epopd(0,0);
  Return();
  b_26 :
  Epushd(0,0);
  Rpush(k_10);
  goto c_26;
  k_10 :
  Epushd(1,0);
  Cpush(m_10);
  Rpush(n_10);
  z_2 :
  Cpush(p_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto z_2;
  q_10 :
  AllBuild();
  Cpop();
  goto o_10;
  p_10 :
  MatchFun("Cons",2);
  Arg(0);
  MatchInt(46);
  Tpop();
  Arg(1);
  Tpop();
  BuildFun("Nil",0);
  o_10 :
  Return();
  n_10 :
  Cpop();
  goto l_10;
  m_10 :
  l_10 :
  Epopd(1,0);
  Rpush(r_10);
  goto d_26;
  r_10 :
  Epopd(0,0);
  Return();
  c_26 :
  Epushd(0,0);
  _ST_explode_string();
  Epopd(0,0);
  Return();
  d_26 :
  Epushd(0,0);
  _ST_implode_string();
  Epopd(0,0);
  Return();
  e_26 :
  Epushd(0,0);
  Cpush(t_10);
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
  goto s_10;
  t_10 :
  Cpush(v_10);
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
  goto u_10;
  v_10 :
  Cpush(x_10);
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
  goto w_10;
  x_10 :
  Cpush(z_10);
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
  goto y_10;
  z_10 :
  Cpush(b_11);
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
  goto a_11;
  b_11 :
  Cpush(d_11);
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
  goto c_11;
  d_11 :
  Cpush(f_11);
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
  goto e_11;
  f_11 :
  Cpush(h_11);
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
  goto g_11;
  h_11 :
  Cpush(j_11);
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
  goto i_11;
  j_11 :
  Cpush(l_11);
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
  goto k_11;
  l_11 :
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
  Cpush(s_11);
  Rpush(t_11);
  goto a_0;
  t_11 :
  Cpop();
  goto r_11;
  s_11 :
  Cpush(v_11);
  Rpush(w_11);
  goto c_0;
  w_11 :
  Cpop();
  goto u_11;
  v_11 :
  Cpush(y_11);
  Rpush(z_11);
  goto d_0;
  z_11 :
  Cpop();
  goto x_11;
  y_11 :
  Cpush(b_12);
  Rpush(c_12);
  goto i_0;
  c_12 :
  Cpop();
  goto a_12;
  b_12 :
  Rpush(d_12);
  goto j_0;
  d_12 :
  a_12 :
  x_11 :
  u_11 :
  r_11 :
  goto q_11;
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
  q_11 :
  goto p_11;
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
  p_11 :
  goto o_11;
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
  o_11 :
  goto n_11;
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
  n_11 :
  goto m_11;
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
  m_11 :
  Epopd(1,10);
  k_11 :
  i_11 :
  g_11 :
  e_11 :
  c_11 :
  a_11 :
  y_10 :
  w_10 :
  u_10 :
  s_10 :
  Epopd(0,0);
  Return();
  f_26 :
  MatchFun("Help",0);
  Return();
  g_26 :
  MatchFun("Version",0);
  Return();
  h_26 :
  Epushd(0,0);
  Rpush(e_12);
  goto i_26;
  e_12 :
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
  Rpush(f_12);
  goto f_27;
  f_12 :
  Epopd(0,0);
  Return();
  i_26 :
  Epushd(0,1);
  Cpush(h_12);
  Epushd(1,0);
  Tdupl();
  i_12 :
  MatchFun("Cons",2);
  Cpush(j_12);
  Arg(0);
  MatchFun("DeclVersion",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Tpop();
  Cpop();
  goto k_12;
  j_12 :
  Arg(1);
  Tdrop();
  goto i_12;
  k_12 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto g_12;
  h_12 :
  BuildStr("");
  MatchVard(0,1);
  g_12 :
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
  Rpush(l_12);
  goto f_27;
  l_12 :
  Tpop();
  Epopd(0,1);
  Return();
  j_26 :
  Epushd(0,0);
  Cpush(n_12);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  o_12 :
  MatchFun("Cons",2);
  Cpush(p_12);
  Arg(0);
  Rpush(r_12);
  goto k_26;
  r_12 :
  Tpop();
  Cpop();
  goto q_12;
  p_12 :
  Arg(1);
  Tdrop();
  goto o_12;
  q_12 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_12);
  goto e_27;
  s_12 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_12);
  goto i_26;
  t_12 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_12);
  goto e_27;
  u_12 :
  AllBuild();
  AllBuild();
  Cpop();
  goto m_12;
  n_12 :
  m_12 :
  Epopd(0,0);
  Return();
  k_26 :
  MatchFun("Verbose",0);
  Return();
  l_26 :
  Epushd(0,3);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  v_12 :
  MatchFun("Cons",2);
  Cpush(w_12);
  Arg(0);
  MatchFun("InclDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,3);
  AllBuild();
  Tpop();
  Cpop();
  goto x_12;
  w_12 :
  Arg(1);
  Tdrop();
  goto v_12;
  x_12 :
  Tpop();
  Epushd(2,0);
  Tdupl();
  y_12 :
  MatchFun("Cons",2);
  Cpush(z_12);
  Arg(0);
  MatchFun("ExecDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
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
  Cpush(c_13);
  Epushd(2,0);
  Tdupl();
  d_13 :
  MatchFun("Cons",2);
  Cpush(e_13);
  Arg(0);
  MatchFun("Output",1);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  AllBuild();
  Tpop();
  Cpop();
  goto f_13;
  e_13 :
  Arg(1);
  Tdrop();
  goto d_13;
  f_13 :
  Tpop();
  Epopd(2,0);
  Cpop();
  goto b_13;
  c_13 :
  b_13 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_13);
  goto e_27;
  g_13 :
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
  Rpush(h_13);
  goto m_26;
  h_13 :
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
  Rpush(i_13);
  goto e_27;
  i_13 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(j_13);
  goto m_26;
  j_13 :
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
  Rpush(k_13);
  goto m_26;
  k_13 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  Epushd(5,1);
  BuildFun("TNil",0);
  Cpush(m_13);
  BuildStr("-dep");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Cpop();
  goto l_13;
  m_13 :
  BuildFun("Nil",0);
  l_13 :
  MatchVard(5,1);
  BuildVard(5,1);
  Tpush();
  BuildStr("--silent");
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
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
  Rpush(n_13);
  y_7 :
  Cpush(p_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_13);
  goto y_7;
  q_13 :
  AllBuild();
  Cpop();
  goto o_13;
  p_13 :
  Rpush(r_13);
  goto z_25;
  r_13 :
  BuildVard(5,1);
  o_13 :
  Return();
  n_13 :
  Epopd(6,0);
  Epopd(5,2);
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
  Rpush(s_13);
  z_7 :
  Cpush(u_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_13);
  goto z_7;
  v_13 :
  AllBuild();
  Cpop();
  goto t_13;
  u_13 :
  Rpush(w_13);
  goto z_25;
  w_13 :
  BuildVard(4,1);
  t_13 :
  Return();
  s_13 :
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
  Rpush(x_13);
  goto n_26;
  x_13 :
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Rpush(y_13);
  goto e_27;
  y_13 :
  AllBuild();
  AllBuild();
  Epopd(0,3);
  Return();
  m_26 :
  Epushd(0,0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(z_13);
  goto c_26;
  z_13 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(a_14);
  goto c_26;
  a_14 :
  OneNextSon();
  Rpush(b_14);
  goto e_27;
  b_14 :
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
  Rpush(c_14);
  c_8 :
  Cpush(e_14);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_14);
  goto c_8;
  f_14 :
  AllBuild();
  Cpop();
  goto d_14;
  e_14 :
  Rpush(g_14);
  goto z_25;
  g_14 :
  BuildVard(1,1);
  d_14 :
  Return();
  c_14 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(h_14);
  goto d_26;
  h_14 :
  Epopd(0,0);
  Return();
  n_26 :
  Epushd(0,0);
  _ST_call();
  Epopd(0,0);
  Return();
  o_26 :
  Epushd(0,2);
  Cpush(j_14);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  k_14 :
  MatchFun("Cons",2);
  Cpush(l_14);
  Arg(0);
  Rpush(n_14);
  goto p_26;
  n_14 :
  Tpop();
  Cpop();
  goto m_14;
  l_14 :
  Arg(1);
  Tdrop();
  goto k_14;
  m_14 :
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
  Rpush(o_14);
  goto e_27;
  o_14 :
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(p_14);
  goto e_27;
  p_14 :
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
  Rpush(q_14);
  goto f_27;
  q_14 :
  BuildInt(0);
  Rpush(r_14);
  goto g_27;
  r_14 :
  Cpop();
  goto i_14;
  j_14 :
  i_14 :
  Epopd(0,2);
  Return();
  p_26 :
  MatchFun("AST",0);
  Return();
  q_26 :
  Epushd(0,1);
  Cpush(t_14);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  u_14 :
  MatchFun("Cons",2);
  Cpush(v_14);
  Arg(0);
  MatchFun("Main",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Tpop();
  Cpop();
  goto w_14;
  v_14 :
  Arg(1);
  Tdrop();
  goto u_14;
  w_14 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_14);
  goto e_27;
  x_14 :
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
  Rpush(y_14);
  goto m_26;
  y_14 :
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
  Rpush(z_14);
  goto e_27;
  z_14 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(b_15);
  goto m_26;
  b_15 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Rpush(c_15);
  goto r_26;
  c_15 :
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
  Rpush(d_15);
  goto s_26;
  d_15 :
  Tpop();
  Epopd(1,3);
  OneNextSon();
  Rpush(e_15);
  goto e_27;
  e_15 :
  AllBuild();
  AllBuild();
  Cpop();
  goto s_14;
  t_14 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  Tdupl();
  Rpush(f_15);
  goto m_26;
  f_15 :
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
  Rpush(g_15);
  goto e_27;
  g_15 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(h_15);
  goto m_26;
  h_15 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Rpush(i_15);
  goto r_26;
  i_15 :
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
  Rpush(j_15);
  goto s_26;
  j_15 :
  Tpop();
  Epopd(1,3);
  OneNextSon();
  Rpush(k_15);
  goto e_27;
  k_15 :
  AllBuild();
  AllBuild();
  s_14 :
  Epopd(0,1);
  Return();
  r_26 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  s_26 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  t_26 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Rpush(l_15);
  j_9 :
  Cpush(n_15);
  Rpush(o_15);
  goto z_25;
  o_15 :
  Cpop();
  goto m_15;
  n_15 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(q_15);
  MatchFun("ExecDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto p_15;
  q_15 :
  p_15 :
  Epopd(2,0);
  OneNextSon();
  Rpush(r_15);
  goto j_9;
  r_15 :
  AllBuild();
  m_15 :
  Return();
  l_15 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_15);
  goto e_27;
  s_15 :
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
  Rpush(t_15);
  goto m_26;
  t_15 :
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
  Rpush(u_15);
  goto e_27;
  u_15 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(v_15);
  goto m_26;
  v_15 :
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
  Rpush(w_15);
  goto m_26;
  w_15 :
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
  Rpush(x_15);
  s_22 :
  Cpush(z_15);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_16);
  goto s_22;
  a_16 :
  AllBuild();
  Cpop();
  goto y_15;
  z_15 :
  Rpush(b_16);
  goto z_25;
  b_16 :
  BuildVard(4,1);
  y_15 :
  Return();
  x_15 :
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
  Rpush(c_16);
  goto n_26;
  c_16 :
  Tpop();
  Tdupl();
  Rpush(d_16);
  goto m_26;
  d_16 :
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
  Rpush(e_16);
  goto e_27;
  e_16 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(f_16);
  goto m_26;
  f_16 :
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
  Rpush(g_16);
  goto m_26;
  g_16 :
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
  Rpush(h_16);
  t_22 :
  Cpush(j_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_16);
  goto t_22;
  k_16 :
  AllBuild();
  Cpop();
  goto i_16;
  j_16 :
  Rpush(l_16);
  goto z_25;
  l_16 :
  BuildVard(4,1);
  i_16 :
  Return();
  h_16 :
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
  Rpush(m_16);
  goto n_26;
  m_16 :
  Tpop();
  Tdupl();
  Rpush(n_16);
  goto m_26;
  n_16 :
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
  Rpush(o_16);
  goto e_27;
  o_16 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(p_16);
  goto m_26;
  p_16 :
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
  Rpush(q_16);
  goto m_26;
  q_16 :
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
  Rpush(r_16);
  v_22 :
  Cpush(t_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_16);
  goto v_22;
  u_16 :
  AllBuild();
  Cpop();
  goto s_16;
  t_16 :
  Rpush(v_16);
  goto z_25;
  v_16 :
  BuildVard(4,1);
  s_16 :
  Return();
  r_16 :
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
  Rpush(w_16);
  goto n_26;
  w_16 :
  Tpop();
  Tdupl();
  Rpush(x_16);
  goto m_26;
  x_16 :
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
  Rpush(y_16);
  goto e_27;
  y_16 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(z_16);
  goto m_26;
  z_16 :
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
  Rpush(a_17);
  goto m_26;
  a_17 :
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
  Rpush(b_17);
  x_22 :
  Cpush(d_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_17);
  goto x_22;
  e_17 :
  AllBuild();
  Cpop();
  goto c_17;
  d_17 :
  Rpush(f_17);
  goto z_25;
  f_17 :
  BuildVard(4,1);
  c_17 :
  Return();
  b_17 :
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
  Rpush(g_17);
  goto n_26;
  g_17 :
  Tpop();
  Tdupl();
  Rpush(h_17);
  goto m_26;
  h_17 :
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
  Rpush(i_17);
  goto e_27;
  i_17 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(j_17);
  goto m_26;
  j_17 :
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
  Rpush(k_17);
  goto m_26;
  k_17 :
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
  Rpush(l_17);
  z_22 :
  Cpush(n_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_17);
  goto z_22;
  o_17 :
  AllBuild();
  Cpop();
  goto m_17;
  n_17 :
  Rpush(p_17);
  goto z_25;
  p_17 :
  BuildVard(4,1);
  m_17 :
  Return();
  l_17 :
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
  Rpush(q_17);
  goto n_26;
  q_17 :
  Tpop();
  Tdupl();
  Rpush(r_17);
  goto m_26;
  r_17 :
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
  Rpush(u_17);
  goto e_27;
  u_17 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(w_17);
  goto m_26;
  w_17 :
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
  Rpush(d_18);
  goto m_26;
  d_18 :
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
  Rpush(e_18);
  c_23 :
  Cpush(g_18);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_18);
  goto c_23;
  z_18 :
  AllBuild();
  Cpop();
  goto f_18;
  g_18 :
  Rpush(a_19);
  goto z_25;
  a_19 :
  BuildVard(4,1);
  f_18 :
  Return();
  e_18 :
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
  Rpush(b_19);
  goto n_26;
  b_19 :
  Tpop();
  Tdupl();
  Rpush(c_19);
  goto m_26;
  c_19 :
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
  Rpush(d_19);
  goto e_27;
  d_19 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(e_19);
  goto m_26;
  e_19 :
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
  Rpush(f_19);
  goto m_26;
  f_19 :
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
  Rpush(g_19);
  d_23 :
  Cpush(i_19);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_19);
  goto d_23;
  j_19 :
  AllBuild();
  Cpop();
  goto h_19;
  i_19 :
  Rpush(k_19);
  goto z_25;
  k_19 :
  BuildVard(4,1);
  h_19 :
  Return();
  g_19 :
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
  Rpush(l_19);
  goto n_26;
  l_19 :
  Tpop();
  Tdupl();
  Rpush(m_19);
  goto m_26;
  m_19 :
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
  Rpush(n_19);
  goto e_27;
  n_19 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(o_19);
  goto m_26;
  o_19 :
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
  Rpush(p_19);
  goto m_26;
  p_19 :
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
  Rpush(q_19);
  l_23 :
  Cpush(w_22);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_22);
  goto l_23;
  y_22 :
  AllBuild();
  Cpop();
  goto u_22;
  w_22 :
  Rpush(a_23);
  goto z_25;
  a_23 :
  BuildVard(4,1);
  u_22 :
  Return();
  q_19 :
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
  Rpush(b_23);
  goto n_26;
  b_23 :
  Tpop();
  Tdupl();
  Rpush(e_23);
  goto m_26;
  e_23 :
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
  Rpush(f_23);
  goto e_27;
  f_23 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(g_23);
  goto m_26;
  g_23 :
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
  Rpush(h_23);
  n_23 :
  Cpush(j_23);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_23);
  goto n_23;
  k_23 :
  AllBuild();
  Cpop();
  goto i_23;
  j_23 :
  Rpush(m_23);
  goto z_25;
  m_23 :
  BuildVard(4,1);
  i_23 :
  Return();
  h_23 :
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
  Rpush(o_23);
  goto n_26;
  o_23 :
  Tpop();
  Epopd(1,18);
  OneNextSon();
  Rpush(q_23);
  goto e_27;
  q_23 :
  AllBuild();
  AllBuild();
  Epopd(0,1);
  Return();
  u_26 :
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
  Rpush(r_23);
  goto f_27;
  r_23 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Rpush(s_23);
  p_23 :
  Cpush(u_23);
  Rpush(v_23);
  goto z_25;
  v_23 :
  Cpop();
  goto t_23;
  u_23 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(z_23);
  MatchFun("CInclDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto y_23;
  z_23 :
  y_23 :
  Epopd(2,0);
  OneNextSon();
  Rpush(a_24);
  goto p_23;
  a_24 :
  AllBuild();
  t_23 :
  Return();
  s_23 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_24);
  goto e_27;
  b_24 :
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
  Rpush(d_24);
  goto m_26;
  d_24 :
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
  Rpush(f_24);
  goto e_27;
  f_24 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(g_24);
  goto m_26;
  g_24 :
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
  Rpush(h_24);
  c_24 :
  Cpush(j_24);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_24);
  goto c_24;
  k_24 :
  AllBuild();
  Cpop();
  goto i_24;
  j_24 :
  Rpush(l_24);
  goto z_25;
  l_24 :
  BuildVard(1,1);
  i_24 :
  Return();
  h_24 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(m_24);
  goto v_26;
  m_24 :
  Tpop();
  OneNextSon();
  Rpush(n_24);
  goto e_27;
  n_24 :
  AllBuild();
  AllBuild();
  Epopd(0,3);
  Return();
  v_26 :
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
  Rpush(y_24);
  goto n_26;
  y_24 :
  Epopd(0,1);
  Return();
  w_26 :
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
  Rpush(z_24);
  goto f_27;
  z_24 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Rpush(a_25);
  e_24 :
  Cpush(c_25);
  Rpush(d_25);
  goto z_25;
  d_25 :
  Cpop();
  goto b_25;
  c_25 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Cpush(l_25);
  Cpush(n_25);
  MatchFun("Dir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto m_25;
  n_25 :
  Cpush(p_25);
  MatchFun("CLibDir",1);
  TravInit();
  OneNextSon();
  MatchVard(0,5);
  AllBuild();
  Cpop();
  goto o_25;
  p_25 :
  MatchFun("Output",1);
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  AllBuild();
  o_25 :
  m_25 :
  Cpop();
  goto k_25;
  l_25 :
  k_25 :
  Epopd(2,0);
  OneNextSon();
  Rpush(q_25);
  goto e_24;
  q_25 :
  AllBuild();
  b_25 :
  Return();
  a_25 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_27);
  goto e_27;
  h_27 :
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
  Rpush(i_27);
  goto m_26;
  i_27 :
  MatchVard(0,3);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Cpush(k_27);
  BuildVard(0,2);
  Cpop();
  goto j_27;
  k_27 :
  j_27 :
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  BuildStr("");
  OneNextSon();
  Rpush(l_27);
  goto e_27;
  l_27 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(m_27);
  goto m_26;
  m_27 :
  MatchVard(0,4);
  Tpop();
  Tdupl();
  Epushd(1,1);
  BuildVard(0,5);
  Epushd(2,0);
  Rpush(n_27);
  r_24 :
  Cpush(p_27);
  Rpush(q_27);
  goto z_25;
  q_27 :
  Cpop();
  goto o_27;
  p_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(r_27);
  goto x_26;
  r_27 :
  OneNextSon();
  Rpush(s_27);
  goto r_24;
  s_27 :
  AllBuild();
  o_27 :
  Return();
  n_27 :
  Epopd(2,0);
  Rpush(t_27);
  goto b_27;
  t_27 :
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
  Rpush(u_27);
  s_24 :
  Cpush(w_27);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_27);
  goto s_24;
  x_27 :
  AllBuild();
  Cpop();
  goto v_27;
  w_27 :
  Rpush(y_27);
  goto z_25;
  y_27 :
  BuildVard(1,1);
  v_27 :
  Return();
  u_27 :
  Epopd(2,0);
  Epopd(1,2);
  Rpush(z_27);
  goto v_26;
  z_27 :
  Tpop();
  OneNextSon();
  Rpush(a_28);
  goto e_27;
  a_28 :
  AllBuild();
  AllBuild();
  Epopd(0,5);
  Return();
  x_26 :
  Epushd(0,0);
  Rpush(b_28);
  goto c_26;
  b_28 :
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
  Rpush(c_28);
  j_29 :
  Cpush(e_28);
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
  Rpush(f_28);
  goto y_26;
  f_28 :
  Rpush(g_28);
  goto d_26;
  g_28 :
  MatchVard(2,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,1);
  Rpush(h_28);
  goto y_26;
  h_28 :
  Epopd(1,2);
  Cpop();
  goto d_28;
  e_28 :
  Rpush(i_28);
  goto z_26;
  i_28 :
  Rpush(j_28);
  goto j_29;
  j_28 :
  d_28 :
  Return();
  c_28 :
  Epopd(0,0);
  Return();
  y_26 :
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
  Cpush(l_28);
  k_28 :
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
  goto k_28;
  l_28 :
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
  z_26 :
  Cpush(n_28);
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
  Rpush(o_28);
  goto y_26;
  o_28 :
  Rpush(p_28);
  goto d_26;
  p_28 :
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
  goto m_28;
  n_28 :
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
  Cpush(q_28);
  Tdupl();
  Rpush(r_28);
  goto a_27;
  r_28 :
  Cpop();
  Crestore();
  Cjump();
  q_28 :
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
  m_28 :
  Return();
  a_27 :
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
  b_27 :
  Epushd(0,0);
  Rpush(s_28);
  b_35 :
  Cpush(u_28);
  Rpush(v_28);
  goto z_25;
  v_28 :
  Cpop();
  goto t_28;
  u_28 :
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
  Rpush(w_28);
  j_25 :
  Cpush(y_28);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_28);
  goto j_25;
  z_28 :
  AllBuild();
  Cpop();
  goto x_28;
  y_28 :
  Rpush(a_29);
  goto z_25;
  a_29 :
  BuildVard(1,2);
  Rpush(b_29);
  goto b_35;
  b_29 :
  x_28 :
  Return();
  w_28 :
  Epopd(2,0);
  Epopd(1,2);
  t_28 :
  Return();
  s_28 :
  Epopd(0,0);
  Return();
  c_27 :
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
  BuildStr(".tree1");
  Tpush();
  BuildStr(".s");
  Tpush();
  BuildStr(".s1");
  Tpush();
  BuildStr(".s2");
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
  Rpush(c_29);
  r_25 :
  Cpush(e_29);
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
  goto d_29;
  e_29 :
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
  Rpush(f_29);
  goto m_26;
  f_29 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(g_29);
  goto r_25;
  g_29 :
  OneNextSon();
  Rpush(h_29);
  goto e_27;
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
  BuildFun("Cons",2);
  Epopd(2,2);
  d_29 :
  Return();
  c_29 :
  Epopd(1,0);
  Rpush(i_29);
  goto d_27;
  i_29 :
  Tpop();
  Epopd(0,1);
  Return();
  d_27 :
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
  Rpush(k_29);
  goto n_26;
  k_29 :
  Tpop();
  Epopd(0,1);
  Return();
  e_27 :
  MatchFun("TNil",0);
  Return();
  f_27 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  g_27 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  l_29 :
DOIT_END
