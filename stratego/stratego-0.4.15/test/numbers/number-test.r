module number-test
imports io term 
rules

  Double : 0.6 -> 1.2

strategies

  main = stdio(Double; 1.2; id#(id))