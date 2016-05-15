#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(e_1);
  goto main;
  main :
  BuildStr("a");
  Tpush();
  BuildStr("b");
  Tpush();
  BuildStr("Id");
  Tpush();
  BuildFun("sort",1);
  Tpush();
  BuildFun("lex",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildStr("E");
  Tpush();
  BuildFun("sort",1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("prod",3);
  Tpush();
  BuildStr("x");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("appl",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Rpush(a_0);
  goto f_0;
  a_0 :
  Cpush(c_0);
  Epushd(0,7);
  MoveTop(0,1);
  TestFun(0,1,"Cons",2,&&h_0);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  TestStr(0,2,"a",&&j_0);
  TestFun(0,3,"Cons",2,&&l_0);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  TestFun(0,5,"Cons",2,&&v_0);
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  TestFun(0,7,"Nil",0,&&x_0);
  Rpush(y_0);
  goto c_1;
  y_0 :
  goto w_0;
  x_0 :
  goto fail;
  w_0 :
  goto t_0;
  v_0 :
  goto fail;
  t_0 :
  goto k_0;
  l_0 :
  goto fail;
  k_0 :
  goto i_0;
  j_0 :
  goto fail;
  i_0 :
  goto e_0;
  h_0 :
  goto fail;
  e_0 :
  goto d_0;
  c_1 :
  BuildVard(0,6);
  Rpush(a_1);
  goto f_0;
  a_1 :
  Return();
  d_0 :
  Epopd(0,7);
  Cpop();
  goto b_0;
  c_0 :
  BuildStr("failed");
  Rpush(b_1);
  goto f_0;
  b_1 :
  b_0 :
  Return();
  f_0 :
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
  Rpush(d_1);
  goto g_0;
  d_1 :
  Epopd(0,2);
  Tpop();
  Return();
  g_0 :
  _ST_printnl();
  Return();
  e_1 :
DOIT_END
