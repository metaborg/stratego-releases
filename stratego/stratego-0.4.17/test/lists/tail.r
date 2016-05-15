module tail
imports lib

rules

  RA : [x, y | z] -> [x, y, x | z]


  S2D0 : (n, [46|ys])  -> (n, 10, ys)

strategies

  main = stdio([id, id | id]; RA; [id, id, id | id ])

