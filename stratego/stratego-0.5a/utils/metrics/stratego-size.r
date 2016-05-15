module stratego-size
imports lib stratego

signature
  constructors
    Size         : Measure * Measure * Measure -> Metrics
    Rules        : Int -> Measure
    Strategies   : Int -> Measure
    Constructors : Int -> Measure

strategies

  measure-spec-component = iowrap(measure-spec)

  number-of-rules =
    collect(RDef(id,id,id)); length

  number-of-strategies =
    collect(SDef(id,id,id)); length

  number-of-constructors =
    collect(OpDecl(id,id)); length

rules

  measure-spec :
    spec -> Size(Constructors(<number-of-constructors> spec),
		 Rules(<number-of-rules> spec),
                 Strategies(<number-of-strategies> spec))



