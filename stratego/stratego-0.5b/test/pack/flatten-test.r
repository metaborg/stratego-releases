module flatten-test
imports lib pack pack-graph

signature
  constructors
    Imports : List(String) -> Section
    Module  : String * List(a) -> Module(a)

strategies

  main = stdio(flatten-terms)

  flatten-terms = 
	flatten(\ Imports(xs) -> xs \, 
		{n : ?(n, Module(n, _))},
		\ Module(n, c) -> <filter(not(Imports(id)))> c \ )

