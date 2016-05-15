module lambda-reduce
imports lambda-laws
strategies

  eta-nf = bottomup(try(Eta))

  strict = 
    rec x(try(App(x, x) + Let(id, x, x)); 
          try((Beta + Subs1 + Subs2 
                    + Subs3 + Subs4); x))

  left-outer = 
    rec x(Beta + Subs1 + Subs3 + Subs4
          <+ App(x, id) 
          <+ App(id, x) 
          <+ Let(id,id,x))

  lmom-nf = repeat(left-outerx)
