#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(i_1);
  goto main;
  main :
  BuildFun("A",0);
  Tpush();
  BuildFun("B",0);
  Tpush();
  BuildFun("F",2);
  Rpush(a_0);
  goto e_0;
  a_0 :
  BuildFun("A",0);
  Tpush();
  BuildFun("C",0);
  Tpush();
  BuildFun("F",2);
  Rpush(b_0);
  goto e_0;
  b_0 :
  BuildFun("B",0);
  Tpush();
  BuildFun("C",0);
  Tpush();
  BuildFun("F",2);
  Rpush(c_0);
  goto e_0;
  c_0 :
  Return();
  e_0 :
  Rpush(d_0);
  goto g_0;
  d_0 :
  Rpush(i_0);
  goto f_0;
  i_0 :
  Rpush(j_0);
  goto g_0;
  j_0 :
  Return();
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  TestFun(0,1,"F",2,&&n_0);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  TestFun(0,3,"B",0,&&s_0);
  TestFun(0,2,"A",0,&&v_0);
  Cpush(x_0);
  Rpush(z_0);
  goto b_1;
  z_0 :
  Cpop();
  goto w_0;
  x_0 :
  Rpush(a_1);
  goto c_1;
  a_1 :
  w_0 :
  goto u_0;
  v_0 :
  Rpush(d_1);
  goto c_1;
  d_1 :
  u_0 :
  goto r_0;
  s_0 :
  TestFun(0,2,"A",0,&&f_1);
  Rpush(g_1);
  goto b_1;
  g_1 :
  goto e_1;
  f_1 :
  goto fail;
  e_1 :
  r_0 :
  goto m_0;
  n_0 :
  goto fail;
  m_0 :
  goto l_0;
  c_1 :
  BuildFun("B",0);
  Return();
  l_0 :
  goto k_0;
  b_1 :
  BuildFun("A",0);
  Return();
  k_0 :
  Epopd(0,3);
  Return();
  g_0 :
  Tdupl();
  Epushd(0,2);
  MoveTop(0,1);
  BuildFun("stderr",0);
  BuildVard(0,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tdupl();
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  MoveTop(0,2);
  Tpop();
  BuildFun("stderr",0);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(h_1);
  goto h_0;
  h_1 :
  Epopd(0,2);
  Tpop();
  Return();
  h_0 :
  _ST_printnl();
  Return();
  i_1 :
DOIT_END
