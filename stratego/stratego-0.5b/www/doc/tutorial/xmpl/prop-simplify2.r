module prop-simplify2
imports prop-simplify

strategies

 disj-nf' = downup2(push-not, push-and)
 conj-nf' = downup2(push-not, push-or)

 push-and = rec y(try((DAOL + DAOR); all(y)))
 push-or  = rec y(try((DOAL + DOAR); all(y)))
 push-not = repeat(DN); try(DMA + DMO)