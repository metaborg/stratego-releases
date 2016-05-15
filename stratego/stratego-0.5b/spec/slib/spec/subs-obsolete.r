module subs-obsolete
imports substitution
strategies

  subs'(isvar, mklst) = 
    obsolete(!"subs'/2");
    subs(isvar, mklst)

  subs(isvar) =
    obsolete(!"subs/1");
    //subs-args; 
    //\(sbs, t) -> <subs(isvar, !sbs)> t \
    substitute(isvar) 

  subs(isvar, mklst) = 
    obsolete(!"subs/2");
    split(mklst, id); substitute(isvar)

  subs_proper(isvar, ren) = 
    obsolete(!"subs_proper/2");
    substitute(isvar, ren)

  subs_proper'(isvar, ren, mklst) = 
    obsolete(!"subs_proper'/2");
    split(mklst, id); substitute(isvar, ren)
