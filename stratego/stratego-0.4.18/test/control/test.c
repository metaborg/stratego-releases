#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(h_0);
  goto main;
  main :
  Epushd(0,3);
  Cpush(g_0);
  Epushd(1,1);
  MatchFun("F",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(1,1);
  Tpop();
  BuildVard(0,1);
  Epopd(1,1);
  Cpop();
  goto f_0;
  g_0 :
  Epushd(1,1);
  MatchFun("F",2);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("G",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  BuildVard(0,3);
  Epopd(1,1);
  f_0 :
  Epopd(0,3);
  Return();
  h_0 :
DOIT_END
