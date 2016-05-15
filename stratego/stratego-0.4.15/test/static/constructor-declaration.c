#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(a_0);
  goto main;
  main :
  Epushd(0,5);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildFun("Nil",0);
  MatchFun("ZZZ",2);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Arg(1);
  MatchVard(0,4);
  Tpop();
  BuildVard(0,5);
  Tpush();
  BuildFun("BBB",1);
  Epopd(0,5);
  Return();
  a_0 :
DOIT_END
