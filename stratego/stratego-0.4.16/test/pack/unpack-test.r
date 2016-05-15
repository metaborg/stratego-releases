module unpack-test
imports lib pack

signature
  operations
    Imports : List(String) -> Section

strategies

  main = stdio(unpack-terms)

  unpack-terms = 
	unpack(map, \ Module(n,_) -> n \, !"mod")

