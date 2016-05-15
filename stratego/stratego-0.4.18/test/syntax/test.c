#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(u_1);
  goto main;
  main :
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Rpush(c_0);
  goto w_1;
  c_0 :
  Rpush(g_0);
  r_3 :
  Cpush(i_0);
  Epushd(1,1);
  MatchFun("F",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  AllBuild();
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  goto h_0;
  i_0 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  d_0 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  e_0 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  f_0 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(k_0);
  goto u_3;
  k_0 :
  goto j_0;
  u_3 :
  Move(1,2,2,4);
  Return();
  j_0 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_0);
  v_3 :
  Cpush(s_0);
  Rpush(t_0);
  goto c_2;
  t_0 :
  Tset(App0("Nil"));
  goto r_0;
  s_0 :
  Epushd(2,3);
  MoveTop(2,1);
  q_0 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_0);
  goto w_3;
  v_0 :
  goto u_0;
  w_3 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(w_0);
  goto r_3;
  w_0 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(y_0);
  goto v_3;
  y_0 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  n_0 :
  TestFun(3,3,"TCons",2,&&fail);
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  o_0 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  p_0 :
  TestFun(3,7,"TNil",0,&&fail);
  Rpush(c_1);
  goto z_3;
  c_1 :
  goto b_1;
  z_3 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(d_1);
  a_4 :
  Cpush(f_1);
  Rpush(g_1);
  goto c_2;
  g_1 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto e_1;
  f_1 :
  Ccontinue(h_1);
  Epushd(4,3);
  MoveTop(4,1);
  m_0 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_1);
  goto b_4;
  j_1 :
  goto i_1;
  b_4 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Tdupl();
  k_1 :
  MatchFun("Cons",2);
  Cpush(l_1);
  Arg(0);
  Epushd(5,1);
  MoveTop(5,1);
  Move(4,2,5,1);
  Epopd(5,1);
  Tpop();
  Cpop();
  goto m_1;
  l_1 :
  Arg(1);
  Tdrop();
  goto k_1;
  m_1 :
  Tpop();
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(n_1);
  goto a_4;
  n_1 :
  Return();
  i_1 :
  Epopd(4,3);
  goto e_1;
  h_1 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_1);
  goto a_4;
  o_1 :
  AllBuild();
  e_1 :
  Cpop();
  Return();
  d_1 :
  Return();
  b_1 :
  Epopd(3,7);
  Return();
  u_0 :
  Epopd(2,3);
  r_0 :
  Cpop();
  Return();
  l_0 :
  Epopd(1,2);
  h_0 :
  Cpop();
  Return();
  g_0 :
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Rpush(p_1);
  goto x_1;
  p_1 :
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Rpush(q_1);
  goto y_1;
  q_1 :
  a_0 :
  Cpop();
  Return();
  w_1 :
  _ST_ReadFromFile();
  Return();
  x_1 :
  _ST_WriteToTextFile();
  Return();
  y_1 :
  Tdupl();
  Rpush(r_1);
  goto z_1;
  r_1 :
  Tset(ATmakeInt(1));
  Rpush(s_1);
  goto b_2;
  s_1 :
  Tpop();
  Return();
  z_1 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Rpush(t_1);
  goto a_2;
  t_1 :
  Epopd(0,1);
  Tpop();
  Return();
  a_2 :
  _ST_printnl();
  Return();
  b_2 :
  _ST_exit();
  Return();
  c_2 :
  MatchFun("Nil",0);
  TravInit();
  AllBuild();
  Return();
  u_1 :
DOIT_END
