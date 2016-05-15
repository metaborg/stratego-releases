module lift-expr
imports lib pico

strategies
 
  main = iowrap(argument-simplification)

  argument-simplification =
    alltd(simplify-assignment)

  simplify-assignment' = 
    topdown(repeat(LiftFromOperator + LiftArgFromCall));
    topdown(repeat(LiftBlock))

rules

  simplify-assignment :
    exp@Exp(Assign(Var(_),_)) -> 
    Comment("original expression: ", exp, s)
    where <simplify-assignment'> exp => s

  LiftFromOperator : 
    Exp(Assign(Var(x), op#(es))) ->
    Block(vdecs, <conc>(ss, [Exp(Assign(Var(x), op#(es')))]))
    where <operator> op;
          <lift-arguments> es => (vdecs, ss, es')

  LiftArgFromCall : 
    Exp(Assign(Var(x), Call(f, es))) ->
    Block(vdecs, <conc>(ss, [Exp(Assign(Var(x), Call(f,es')))]))
    where <lift-arguments> es => (vdecs, ss, es')

  LiftComplex :
    e -> ([VarDecl(a)], [Exp(Assign(Var(a), e))], Var(a))
    where <complex> e; new => a

  LiftSimple :
    e -> ([], [], e)
    where <simple> e

  LiftBlock :
    Block(decs1, ss1) -> Block(<conc>(decs1, decs2), ss4)
    where <at-suffix(?[Block(decs2, ss2) | ss3]; 
                     <conc>(ss2, ss3))> ss1 => ss4

strategies

  complex = not(simple)
            
  simple = ?Var(_) + ?Int(_)

  operator = "Add" + "Mul" + "Sub"

  lift-arguments =
    map(LiftComplex + LiftSimple); 
    tuple-unzip(id); 
    (concat, concat, id);
    not(([],id,id))
