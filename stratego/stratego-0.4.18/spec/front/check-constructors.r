module check-constructors
imports sugar

strategies

  CheckConstructorsIO = iowrap(CheckConstructors)

rules

  CheckConstructors :
    Specification([
      Signature([Operations(ods)]), 
      Rules(rls),
      Strategies(sdefs)
    ]) -> 
    Specification([
      Signature([Operations(ods)]), 
      Rules(rls),
      Strategies(sdefs)
    ])
  where <(filter(check-constructors(!ods)),
	  filter(check-constructors(!ods)))> (rls, sdefs) => ([], [])

  check-constructors(ods) :
    RDef(f, xs, r) -> RDef(f, xs, r)
    where ?msg <= <concat-strings>["warning: in rule ", f, ": "];
          <manytd(CheckCons(!msg, ods))> r

  check-constructors(ods) :
    SDef(f, xs, r) -> SDef(f, xs, r)
    where ?msg <= <concat-strings>["warning: in definition ", f, ": "];
          <manytd(CheckCons(!msg, ods))> r

  CheckCons(msg, ods) :   
    Op(c, args) -> Op(c, args)
    where not(ods; 
              fetch({ts: OpDecl(?c, ConstType(id); ![]; ?ts + 
                                    FunType(?ts,id));
                         <zip(id)>(args, ts)})
             ); 
          <concat-strings; debug(msg)> 
	  ["constructor ", c, "/", <length; int-to-string> args, 
	   " not declared"]