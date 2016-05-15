#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(p_5);
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
  d_41 :
  Cpush(h_0);
  Cpush(j_0);
  Rpush(k_0);
  goto w_45;
  k_0 :
  Cpop();
  goto i_0;
  j_0 :
  Rpush(l_0);
  goto x_45;
  l_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_0);
  goto d_41;
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
  goto y_45;
  p_0 :
  Cpop();
  goto n_0;
  o_0 :
  Cpush(r_0);
  Rpush(s_0);
  goto d_46;
  s_0 :
  Epushd(1,1);
  Tdupl();
  Rpush(t_0);
  goto f_46;
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
  o_42 :
  Cpush(w_0);
  Epushd(3,0);
  MatchFun("cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_0);
  goto o_42;
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
  goto o_42;
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
  goto m_46;
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
  goto n_46;
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
  goto n_46;
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
  goto q_46;
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
  goto p_46;
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
  goto o_42;
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
  goto l_46;
  w_1 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(x_1);
  goto f_46;
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
  goto g_46;
  y_1 :
  Rpush(z_1);
  goto j_46;
  z_1 :
  Cpop();
  goto q_0;
  r_0 :
  Rpush(a_2);
  goto k_46;
  a_2 :
  q_0 :
  n_0 :
  Epopd(0,0);
  Return();
  w_45 :
  MatchFun("Nil",0);
  Return();
  x_45 :
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
  y_45 :
  Epushd(0,0);
  Epushd(1,0);
  Tdupl();
  n_3 :
  MatchFun("Cons",2);
  Cpush(o_3);
  Arg(0);
  Cpush(r_3);
  Rpush(s_3);
  goto z_45;
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
  goto a_46;
  t_3 :
  Epopd(0,0);
  Return();
  z_45 :
  MatchFun("Help",0);
  Return();
  a_46 :
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
  goto b_46;
  x_3 :
  BuildInt(1);
  Rpush(y_3);
  goto c_46;
  y_3 :
  Tpop();
  Epopd(0,1);
  Return();
  b_46 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  c_46 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  d_46 :
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
  goto e_46;
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
  e_46 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  f_46 :
  Epushd(0,0);
  _ST_dtime();
  Epopd(0,0);
  Return();
  g_46 :
  Epushd(0,1);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(g_4);
  Epushd(1,0);
  Tdupl();
  h_4 :
  MatchFun("Cons",2);
  Cpush(i_4);
  Arg(0);
  MatchFun("Output",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto j_4;
  i_4 :
  Arg(1);
  Tdrop();
  goto h_4;
  j_4 :
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
  Rpush(k_4);
  goto l_46;
  k_4 :
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
  Rpush(l_4);
  goto l_46;
  l_4 :
  AllBuild();
  AllBuild();
  Cpush(n_4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,0);
  Tdupl();
  o_4 :
  MatchFun("Cons",2);
  Cpush(p_4);
  Arg(0);
  MatchFun("Binary",0);
  Tpop();
  Cpop();
  goto q_4;
  p_4 :
  Arg(1);
  Tdrop();
  goto o_4;
  q_4 :
  Tpop();
  Epopd(1,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(r_4);
  goto h_46;
  r_4 :
  OneNextSon();
  Rpush(s_4);
  goto l_46;
  s_4 :
  AllBuild();
  AllBuild();
  Cpop();
  goto m_4;
  n_4 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(t_4);
  goto i_46;
  t_4 :
  OneNextSon();
  Rpush(u_4);
  goto l_46;
  u_4 :
  AllBuild();
  AllBuild();
  m_4 :
  Epopd(0,1);
  Return();
  h_46 :
  Epushd(0,0);
  _ST_WriteToBinaryFile();
  Epopd(0,0);
  Return();
  i_46 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  j_46 :
  Epushd(0,2);
  Tdupl();
  Epushd(1,0);
  Cpush(w_4);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(x_4);
  Tdupl();
  Epushd(2,0);
  Tdupl();
  y_4 :
  MatchFun("Cons",2);
  Cpush(z_4);
  Arg(0);
  MatchFun("Silent",0);
  Tpop();
  Cpop();
  goto a_5;
  z_4 :
  Arg(1);
  Tdrop();
  goto y_4;
  a_5 :
  Tpop();
  Epopd(2,0);
  Cpop();
  Crestore();
  Cjump();
  x_4 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_5);
  goto l_46;
  b_5 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  c_5 :
  MatchFun("Cons",2);
  Cpush(d_5);
  Arg(0);
  MatchFun("Runtime",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Cpop();
  goto e_5;
  d_5 :
  Arg(1);
  Tdrop();
  goto c_5;
  e_5 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_5);
  goto l_46;
  f_5 :
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(2,0);
  Tdupl();
  g_5 :
  MatchFun("Cons",2);
  Cpush(h_5);
  Arg(0);
  MatchFun("Program",1);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Cpop();
  goto i_5;
  h_5 :
  Arg(1);
  Tdrop();
  goto g_5;
  i_5 :
  Tpop();
  Epopd(2,0);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_5);
  goto l_46;
  j_5 :
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
  Rpush(k_5);
  goto b_46;
  k_5 :
  Cpop();
  goto v_4;
  w_4 :
  v_4 :
  Epopd(1,0);
  Tpop();
  BuildInt(0);
  Rpush(l_5);
  goto c_46;
  l_5 :
  Epopd(0,2);
  Return();
  k_46 :
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
  Rpush(m_5);
  goto b_46;
  m_5 :
  BuildInt(1);
  Rpush(n_5);
  goto c_46;
  n_5 :
  Epopd(0,0);
  Return();
  l_46 :
  MatchFun("TNil",0);
  Return();
  m_46 :
  Epushd(0,0);
  _ST_add();
  Epopd(0,0);
  Return();
  n_46 :
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
  Rpush(o_5);
  goto o_46;
  o_5 :
  MatchInt(0);
  Epopd(0,0);
  Return();
  o_46 :
  Epushd(0,0);
  _ST_mod();
  Epopd(0,0);
  Return();
  p_46 :
  Epushd(0,0);
  _ST_minus();
  Epopd(0,0);
  Return();
  q_46 :
  Epushd(0,0);
  _ST_gt();
  Epopd(0,0);
  Return();
  p_5 :
DOIT_END
