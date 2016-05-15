module prop-truth
imports prop

rules

  T1  : Not(True) -> False       T2  : Not(False) -> True

  T3  : And(True, x) -> x        T5  : And(False, x) -> False  
  T4  : And(x, True) -> x        T6  : And(x, False) -> False  
  
  T7  : Or(True, x) -> True      T9  : Or(False, x) -> x
  T8  : Or(x, True) -> True      T10 : Or(x, False) -> x

  T11 : Impl(True, x) -> x       T14 : Impl(False, False) -> True
  T12 : Impl(x, True) -> True    T15 : Impl(True, False) -> False
  T13 : Impl(False, x) -> True

  T16 : Eq(False, x) -> Not(x)   T18 : Eq(True, x) -> x
  T17 : Eq(x, False) -> Not(x)   T19 : Eq(x, True) -> x