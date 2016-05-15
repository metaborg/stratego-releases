module terms
imports list-cons
signature
  sorts Term 
  operations
    Wld :                        Term (* _ *)
    Var : String              -> Term (* x *)
    Int : Int                 -> Term (* 0, 1, 2 ... *)
    Str : String              -> Term (* "", "a", ... *)
    Op  : String * List(Term) -> Term (* f(t1,...,tn) *)