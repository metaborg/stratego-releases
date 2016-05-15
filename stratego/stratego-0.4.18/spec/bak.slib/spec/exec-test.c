#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(d_3);
  goto main;
  main :
  Tset(ATmakeString("exec-test"));
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(a_0);
  goto w_3;
  a_0 :
  Epopd(0,2);
  Tpop();
  Rpush(b_0);
  goto x_3;
  b_0 :
  Rpush(c_0);
  goto c_4;
  c_0 :
  Rpush(d_0);
  goto y_3;
  d_0 :
  Rpush(e_0);
  goto a_4;
  e_0 :
  Return();
  w_3 :
  _ST_printnl();
  Return();
  x_3 :
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
  Return();
  y_3 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(f_0);
  goto w_3;
  f_0 :
  Epopd(0,2);
  Tpop();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(g_0);
  goto w_3;
  g_0 :
  Epopd(0,2);
  Tpop();
  OneNextSon();
  Rpush(h_0);
  goto z_3;
  h_0 :
  AllBuild();
  AllBuild();
  Return();
  z_3 :
  Epushd(0,1);
  MoveTop(0,1);
  v_0 :
  TestFun(0,1,"TNil",0,&&fail);
  Rpush(j_0);
  goto u_9;
  j_0 :
  goto i_0;
  u_9 :
  Return();
  i_0 :
  Epopd(0,1);
  Return();
  a_4 :
  Cpush(l_0);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  x_0 :
  TestInt(0,1,0,&&fail);
  Rpush(n_0);
  goto v_9;
  n_0 :
  goto m_0;
  v_9 :
  Return();
  m_0 :
  Epopd(0,1);
  OneNextSon();
  Rpush(o_0);
  goto z_3;
  o_0 :
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Rpush(p_0);
  goto b_4;
  p_0 :
  goto k_0;
  l_0 :
  Tset(MakeInt(1));
  Rpush(r_0);
  goto b_4;
  r_0 :
  goto q_0;
  k_0 :
  Cpop();
  q_0 :
  Return();
  b_4 :
  _ST_exit();
  Return();
  c_4 :
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Rpush(s_0);
  goto g_4;
  s_0 :
  Tpop();
  Cpush(u_0);
  Tdupl();
  Cpush(y_0);
  Epushd(1,5);
  Tset(App2("TCons",ATmakeString("test"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  MoveTop(1,1);
  x_1 :
  TestFun(1,1,"TCons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  y_1 :
  TestFun(1,3,"TCons",2,&&fail);
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  z_1 :
  TestFun(1,5,"TNil",0,&&fail);
  Rpush(a_1);
  goto w_9;
  a_1 :
  goto z_0;
  w_9 :
  Epushd(2,6);
  Rpush(b_1);
  goto g_4;
  b_1 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Tset(ATmakeString("test2"));
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_1);
  goto z_3;
  c_1 :
  AllBuild();
  AllBuild();
  Rpush(d_1);
  goto g_4;
  d_1 :
  MoveTop(2,1);
  r_1 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  s_1 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  t_1 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(f_1);
  goto x_9;
  f_1 :
  goto e_1;
  x_9 :
  Rpush(g_1);
  goto g_4;
  g_1 :
  Tdupl();
  Epushd(3,9);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(h_1);
  goto k_4;
  h_1 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Rpush(i_1);
  goto k_4;
  i_1 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  o_1 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  p_1 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  q_1 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(k_1);
  goto a_10;
  k_1 :
  goto j_1;
  a_10 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(l_1);
  goto i_4;
  l_1 :
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  Tdupl();
  NotNULLd(3,8);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(4,1),App0("TNil"))));
  Rpush(m_1);
  goto j_4;
  m_1 :
  Tpop();
  Epopd(4,1);
  Return();
  j_1 :
  Epopd(3,9);
  Tpop();
  Return();
  e_1 :
  MoveTop(2,6);
  Move(0,1,2,6);
  Epopd(2,6);
  Return();
  z_0 :
  Epopd(1,5);
  goto w_0;
  y_0 :
  Tset(ATmakeString("  failed"));
  Rpush(u_1);
  goto g_4;
  u_1 :
  Rpush(v_1);
  goto h_4;
  v_1 :
  goto n_1;
  w_0 :
  Cpop();
  n_1 :
  Tset(App2("TCons",ATmakeString("test2"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  Tdupl();
  Tset(App2("TCons",ATmakeString("test2"),App2("TCons",ATmakeString(".trm"),App0("TNil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(a_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto w_1;
  a_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,2);
  MoveTop(1,1);
  Tset(App0("stderr"));
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))));
  Tdupl();
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))));
  MoveTop(1,2);
  Tpop();
  NotNULLd(1,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(1,2),App0("TNil"))));
  Rpush(c_2);
  goto w_3;
  c_2 :
  Epopd(1,2);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,2);
  MoveTop(1,1);
  Tset(App0("stderr"));
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))));
  Tdupl();
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))));
  MoveTop(1,2);
  Tpop();
  NotNULLd(1,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(1,2),App0("TNil"))));
  Rpush(d_2);
  goto w_3;
  d_2 :
  Epopd(1,2);
  Tpop();
  Rpush(e_2);
  goto h_4;
  e_2 :
  goto b_2;
  w_1 :
  Cpop();
  b_2 :
  Tpop();
  Rpush(f_2);
  goto d_4;
  f_2 :
  goto t_0;
  u_0 :
  Rpush(h_2);
  goto f_4;
  h_2 :
  goto g_2;
  t_0 :
  Cpop();
  g_2 :
  Epopd(0,2);
  Return();
  d_4 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Rpush(i_2);
  goto e_4;
  i_2 :
  Epopd(0,1);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_2);
  goto z_3;
  j_2 :
  AllBuild();
  AllBuild();
  Return();
  e_4 :
  _ST_add();
  Return();
  f_4 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Rpush(k_2);
  goto e_4;
  k_2 :
  Epopd(0,1);
  OneNextSon();
  Rpush(l_2);
  goto z_3;
  l_2 :
  AllBuild();
  AllBuild();
  Return();
  g_4 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stderr"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(m_2);
  goto w_3;
  m_2 :
  Epopd(0,2);
  Tpop();
  Return();
  h_4 :
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  o_4 :
  TestFun(0,2,"TCons",2,&&fail);
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  p_4 :
  TestFun(0,4,"TCons",2,&&fail);
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  q_4 :
  TestFun(0,6,"TNil",0,&&fail);
  Rpush(o_2);
  goto w_10;
  o_2 :
  goto n_2;
  w_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  n_2 :
  Epopd(0,6);
  Return();
  i_4 :
  _ST_ReadFromFile();
  Return();
  j_4 :
  _ST_WriteToBinaryFile();
  Return();
  k_4 :
  Epushd(0,5);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(q_2);
  goto l_4;
  q_2 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(r_2);
  goto l_4;
  r_2 :
  OneNextSon();
  Rpush(s_2);
  goto z_3;
  s_2 :
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  s_4 :
  TestFun(0,1,"TCons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  t_4 :
  TestFun(0,3,"TCons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  u_4 :
  TestFun(0,5,"TNil",0,&&fail);
  Rpush(t_2);
  goto x_10;
  t_2 :
  goto p_2;
  x_10 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(u_2);
  y_10 :
  Cpush(w_2);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_2);
  goto y_10;
  x_2 :
  AllBuild();
  goto v_2;
  w_2 :
  Rpush(z_2);
  goto m_4;
  z_2 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto y_2;
  v_2 :
  Cpop();
  y_2 :
  Return();
  u_2 :
  Rpush(a_3);
  goto n_4;
  a_3 :
  Return();
  p_2 :
  Epopd(0,5);
  Return();
  l_4 :
  _ST_explode_string();
  Return();
  m_4 :
  Epushd(0,1);
  MoveTop(0,1);
  w_4 :
  TestFun(0,1,"Nil",0,&&fail);
  Rpush(c_3);
  goto z_10;
  c_3 :
  goto b_3;
  z_10 :
  Return();
  b_3 :
  Epopd(0,1);
  Return();
  n_4 :
  _ST_implode_string();
  Return();
  d_3 :
DOIT_END
