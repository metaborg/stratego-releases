module test6
imports lib
strategies

  main = 
    !F(A(),B());
    debug;
    bla;
    debug

  bla =
    ?F(x,y);
    !G(y,x)