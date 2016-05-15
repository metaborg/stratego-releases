module strategy
imports terms 
signature
  sorts SVar Strat SDef
  operations
    Id      :                                  Strat (* id *)
    Fail    :                                  Strat (* fail *)

    Test    : Strat                         -> Strat (* test s *)
    Not     : Strat                         -> Strat (* not s *)

    Seq     : Strat * Strat                 -> Strat (* s1 ;  s2 *)
    Choice  : Strat * Strat                 -> Strat (* s1 +  s2 *)
    LChoice : Strat * Strat                 -> Strat (* s1 <+ s2 *)
    
    SVar    : String                        -> SVar
    Rec     : String * Strat                -> Strat (* rec x (s) *)
    Let     : SDef * Strat                  -> Strat (* let sdef in s2*)
    SDef    : String * List(String) * Strat -> SDef  (* f(xs) = s *)
    Call    : SVar * List(Strat)            -> Strat (* f(ss) *)

    Path    : Int * Strat                   -> Strat (* i(s) *)
    Cong    : String * List(Strat)          -> Strat (* f(s1,...,sn) *)
    One     : Strat                         -> Strat (* one(s) *)
    Some    : Strat                         -> Strat (* some(s) *)
    All     : Strat                         -> Strat (* all(s) *)

    Match    : Term                         -> Strat (* ?t *)
    Build    : Term                         -> Strat (* !t *)

    Scope   : List(String) * Strat          -> Strat (* {xs: s} *)
    Where   : Strat                         -> Strat (* where s *)

    Prim    : String -> Strat
