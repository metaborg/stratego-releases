module pico
signature
  sorts Id Expr Stat Decl Block
  // subsorts Block < Stat
  constructors
    Var     : Id  -> Exp 
    Int     : Int -> Exp

    Call    : Id * List(Exp) -> Exp

    Seq     : List(Stat) * Exp -> Exp
    
    UMin    : Exp       -> Exp
    Pow     : Exp * Exp -> Exp
    Mul     : Exp * Exp -> Exp
    Add     : Exp * Exp -> Exp
    Sub     : Exp * Exp -> Exp
    Eq      : Exp * Exp -> Exp
    Neq     : Exp * Exp -> Exp
    And     : Exp * Exp -> Exp
    Or      : Exp * Exp -> Exp
    Assign  : Exp * Exp -> Exp
    AsAdd   : Exp * Exp -> Exp
    AsMul   : Exp * Exp -> Exp
    AsMin   : Exp * Exp -> Exp
    AsPow   : Exp * Exp -> Exp

    Exp     : Exp -> Stat 
    While   : Exp * Stat -> Stat
    If      : Exp * Stat * Stat -> Stat

    Block   : List(Decl) * List(Stat) -> Block

    VarDecl : Id -> Decl
    FunDecl : Id * List(Id) * Block -> Decl

    Comment : String * Exp * Stat -> Stat