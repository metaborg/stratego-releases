module lambda
signature
  sorts Exp
  constructors
    Var    : String -> Exp
    App    : Exp * Exp -> Exp
    Abs    : String * Exp -> Exp
    Let    : String * Exp * Exp -> Exp