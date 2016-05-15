#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(b_10);
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
  k_4 :
  Cpush(h_0);
  Cpush(j_0);
  Rpush(k_0);
  goto e_9;
  k_0 :
  Cpop();
  goto i_0;
  j_0 :
  Rpush(l_0);
  goto f_9;
  l_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_0);
  goto k_4;
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
  Cpush(o_0);
  Rpush(p_0);
  goto g_9;
  p_0 :
  Cpop();
  goto n_0;
  o_0 :
  Cpush(r_0);
  Rpush(s_0);
  goto l_9;
  s_0 :
  Epushd(1,1);
  Tdupl();
  Rpush(t_0);
  goto n_9;
  t_0 :
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Rpush(u_0);
  w_5 :
  Cpush(w_0);
  Epushd(3,0);
  MatchFun("cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_0);
  goto w_5;
  x_0 :
  AllBuild();
  Epopd(3,0);
  Cpop();
  goto v_0;
  w_0 :
  AllInit();
  y_0 :
  AllNextSon(&&z_0);
  Rpush(a_1);
  goto w_5;
  a_1 :
  goto y_0;
  z_0 :
  AllBuild();
  v_0 :
  Epushd(3,0);
  Cpush(c_1);
  Cpush(e_1);
  Epushd(4,0);
  MatchFun("primes",0);
  BuildInt(2);
  Tpush();
  BuildFun("from",1);
  Tpush();
  BuildFun("sieve",1);
  Epopd(4,0);
  Cpop();
  goto d_1;
  e_1 :
  Cpush(g_1);
  Epushd(4,1);
  MatchFun("from",1);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Epushd(5,1);
  BuildVard(4,1);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(h_1);
  goto u_9;
  h_1 :
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildFun("from",1);
  Tpush();
  BuildFun("cons",2);
  Epopd(5,1);
  Epopd(4,1);
  Cpop();
  goto f_1;
  g_1 :
  Cpush(j_1);
  Epushd(4,2);
  MatchFun("sieve",1);
  Arg(0);
  MatchFun("cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("filter",2);
  Tpush();
  BuildFun("sieve",1);
  Tpush();
  BuildFun("cons",2);
  Epopd(4,2);
  Cpop();
  goto i_1;
  j_1 :
  Cpush(l_1);
  Epushd(4,3);
  MatchFun("filter",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("cons",2);
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(m_1);
  goto v_9;
  m_1 :
  Tpop();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("filter",2);
  Epopd(4,3);
  Cpop();
  goto k_1;
  l_1 :
  Cpush(o_1);
  Epushd(4,3);
  MatchFun("filter",2);
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("cons",2);
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchVard(4,1);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpush(p_1);
  Tdupl();
  Rpush(q_1);
  goto v_9;
  q_1 :
  Cpop();
  Crestore();
  Cjump();
  p_1 :
  Tpop();
  BuildVard(4,3);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildVard(4,1);
  Tpush();
  BuildFun("filter",2);
  Tpush();
  BuildFun("cons",2);
  Epopd(4,3);
  Cpop();
  goto n_1;
  o_1 :
  Cpush(s_1);
  Epushd(4,2);
  MatchFun("take",2);
  Arg(0);
  MatchInt(0);
  Tpop();
  Arg(1);
  MatchFun("cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  BuildFun("nil",0);
  Epopd(4,2);
  Cpop();
  goto r_1;
  s_1 :
  Epushd(4,3);
  MatchFun("take",2);
  Arg(0);
  MatchVard(4,3);
  Tpop();
  Arg(1);
  MatchFun("cons",2);
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchVard(4,2);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(4,3);
  Tpush();
  BuildInt(0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(t_1);
  goto y_9;
  t_1 :
  Tpop();
  Epushd(5,1);
  BuildVard(4,3);
  Tpush();
  BuildInt(1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(u_1);
  goto x_9;
  u_1 :
  MatchVard(5,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(5,1);
  Tpush();
  BuildVard(4,2);
  Tpush();
  BuildFun("take",2);
  Tpush();
  BuildFun("cons",2);
  Epopd(5,1);
  Epopd(4,3);
  r_1 :
  n_1 :
  k_1 :
  i_1 :
  f_1 :
  d_1 :
  Rpush(v_1);
  goto w_5;
  v_1 :
  Cpop();
  goto b_1;
  c_1 :
  b_1 :
  Epopd(3,0);
  Return();
  u_0 :
  Epopd(2,0);
  OneNextSon();
  Rpush(w_1);
  goto t_9;
  w_1 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(x_1);
  goto n_9;
  x_1 :
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
  Rpush(y_1);
  goto o_9;
  y_1 :
  Rpush(z_1);
  goto r_9;
  z_1 :
  Cpop();
  goto q_0;
  r_0 :
  Rpush(a_2);
  goto s_9;
  a_2 :
  q_0 :
  n_0 :
  Epopd(0,0);
  Return();
  e_9 :
  MatchFun("Nil",0);
  Return();
  f_9 :
  Epushd(0,0);
  Cpush(c_2);
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
  goto b_2;
  c_2 :
  Cpush(e_2);
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
  goto d_2;
  e_2 :
  Cpush(g_2);
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
  goto f_2;
  g_2 :
  Cpush(i_2);
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
  goto h_2;
  i_2 :
  Cpush(k_2);
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
  goto j_2;
  k_2 :
  Cpush(m_2);
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
  goto l_2;
  m_2 :
  Cpush(o_2);
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
  goto n_2;
  o_2 :
  Cpush(q_2);
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
  goto p_2;
  q_2 :
  Cpush(s_2);
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
  goto r_2;
  s_2 :
  Cpush(u_2);
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
  goto t_2;
  u_2 :
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
  Cpush(b_3);
  Rpush(c_3);
  goto a_0;
  c_3 :
  Cpop();
  goto a_3;
  b_3 :
  Cpush(e_3);
  Rpush(f_3);
  goto b_0;
  f_3 :
  Cpop();
  goto d_3;
  e_3 :
  Cpush(h_3);
  Rpush(i_3);
  goto c_0;
  i_3 :
  Cpop();
  goto g_3;
  h_3 :
  Cpush(k_3);
  Rpush(l_3);
  goto d_0;
  l_3 :
  Cpop();
  goto j_3;
  k_3 :
  Rpush(m_3);
  goto e_0;
  m_3 :
  j_3 :
  g_3 :
  d_3 :
  a_3 :
  goto z_2;
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
  z_2 :
  goto y_2;
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
  y_2 :
  goto x_2;
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
  x_2 :
  goto w_2;
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
  w_2 :
  goto v_2;
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
  v_2 :
  Epopd(1,10);
  t_2 :
  r_2 :
  p_2 :
  n_2 :
  l_2 :
  j_2 :
  h_2 :
  f_2 :
  d_2 :
  b_2 :
  Epopd(0,0);
  Return();
  g_9 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  n_3 :
  MatchFun("Cons",2);
  Cpush(o_3);
  Arg(0);
  Cpush(r_3);
  Rpush(s_3);
  goto h_9;
  s_3 :
  Cpop();
  goto q_3;
  r_3 :
  MatchFun("Undefined",1);
  q_3 :
  Tpop();
  Cpop();
  goto p_3;
  o_3 :
  Arg(1);
  Tdrop();
  goto n_3;
  p_3 :
  Tpop();
  Epopd(1,0);
  Rpush(t_3);
  goto i_9;
  t_3 :
  Epopd(0,0);
  Return();
  h_9 :
  MatchFun("Help",0);
  Return();
  i_9 :
  Epushd(0,1);
  Tdupl();
  Epushd(1,0);
  Tdupl();
  u_3 :
  MatchFun("Cons",2);
  Cpush(v_3);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto w_3;
  v_3 :
  Arg(1);
  Tdrop();
  goto u_3;
  w_3 :
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
  Rpush(x_3);
  goto j_9;
  x_3 :
  BuildInt(1);
  Rpush(y_3);
  goto k_9;
  y_3 :
  Tpop();
  Epopd(0,1);
  Return();
  j_9 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  k_9 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  l_9 :
  Epushd(0,1);
  Cpush(a_4);
  Epushd(1,0);
  Tdupl();
  b_4 :
  MatchFun("Cons",2);
  Cpush(c_4);
  Arg(0);
  MatchFun("Input",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto d_4;
  c_4 :
  Arg(1);
  Tdrop();
  goto b_4;
  d_4 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto z_3;
  a_4 :
  BuildFun("stdin",0);
  MatchVard(0,1);
  z_3 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  BuildVard(0,1);
  Rpush(e_4);
  goto m_9;
  e_4 :
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
  m_9 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  n_9 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  o_9 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(g_4);
  Epushd(1,0);
  Tdupl();
  l_4 :
  MatchFun("Cons",2);
  Cpush(m_4);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto n_4;
  m_4 :
  Arg(1);
  Tdrop();
  goto l_4;
  n_4 :
  Tpop();
  Epopd(1,0);
  Cpop();
  goto f_4;
  g_4 :
  BuildFun("stdout",0);
  MatchVard(0,1);
  f_4 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_4);
  goto t_9;
  o_4 :
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
  Rpush(p_4);
  goto t_9;
  p_4 :
  AllBuild();
  AllBuild();
  Cpush(r_4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  s_4 :
  MatchFun("Cons",2);
  Cpush(t_4);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto u_4;
  t_4 :
  Arg(1);
  Tdrop();
  goto s_4;
  u_4 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(v_4);
  goto p_9;
  v_4 :
  OneNextSon();
  Rpush(w_4);
  goto t_9;
  w_4 :
  AllBuild();
  AllBuild();
  Cpop();
  goto q_4;
  r_4 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(x_4);
  goto q_9;
  x_4 :
  OneNextSon();
  Rpush(y_4);
  goto t_9;
  y_4 :
  AllBuild();
  AllBuild();
  q_4 :
  Epopd(0,1);
  Return();
  p_9 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  q_9 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  r_9 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(a_5);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(b_5);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  c_5 :
  MatchFun("Cons",2);
  Cpush(g_8);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto i_8;
  g_8 :
  Arg(1);
  Tdrop();
  goto c_5;
  i_8 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  b_5 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_8);
  goto t_9;
  j_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  k_8 :
  MatchFun("Cons",2);
  Cpush(l_8);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto m_8;
  l_8 :
  Arg(1);
  Tdrop();
  goto k_8;
  m_8 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_8);
  goto t_9;
  n_8 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  r_8 :
  MatchFun("Cons",2);
  Cpush(t_8);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto u_8;
  t_8 :
  Arg(1);
  Tdrop();
  goto r_8;
  u_8 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto t_9;
  v_8 :
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
  Rpush(w_8);
  goto j_9;
  w_8 :
  Cpop();
  goto z_4;
  a_5 :
  z_4 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(x_8);
  goto k_9;
  x_8 :
  Epopd(0,2);
  Return();
  s_9 :
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
  Rpush(y_8);
  goto j_9;
  y_8 :
  BuildInt(1);
  Rpush(z_9);
  goto k_9;
  z_9 :
  Epopd(0,0);
  Return();
  t_9 :
  MatchFun("TNil",0);
  Return();
  u_9 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  v_9 :
  Epushd(0,0);
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
  BuildVard(1,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,2);
  Rpush(a_10);
  goto w_9;
  a_10 :
  MatchInt(0);
  Epopd(0,0);
  Return();
  w_9 :
  Epushd(0,0);
  _ST_mod();
  Epopd(0,0);
  Return();
  x_9 :
  Epushd(0,0);
  _ST_minus();
  Epopd(0,0);
  Return();
  y_9 :
  Epushd(0,0);
  _ST_gt();
  Epopd(0,0);
  Return();
  b_10 :
DOIT_END
