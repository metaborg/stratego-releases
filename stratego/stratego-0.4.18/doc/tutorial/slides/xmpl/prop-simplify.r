module prop-simplify
imports prop-laws prop-truth simple-traversal 
strategies

 T = T1 + T2 + T3 + T4 + T5 + 
     T6 + T7 + T8 + T9 + T10 +
     T11 + T12 + T13 + T14 + 
     T15 + T16 + T17 + T18 + T19

 desugar = topdown(try(DefI + DefE))

 eval    = bottomup(repeat(T))

 impl-nf = topdown(repeat(DefN + DefA2 
                          + DefO1 + DefE))

 disj-nf = 
   innermost(DAOL + DAOR + DN + DMA + DMO)

 conj-nf = 
   innermost(DOAL + DOAR + DN + DMA + DMO)