module list-set-test
imports list-set sunit

strategies 

  main = 
    test-suite(!"list-set-test",
	testing(!"test1", test1);
	testing(!"test2", test2);
	testing(!"test3", test3);
	testing(!"test4", test4)
     )

  test1 = 
	<union> (["a","b"],["c","d"]) => ["a","b","c","d"]

  test2 =
	<union> (["a","b"],["b","d"]) => ["a","b","d"]    

  test3 = 
	<diff> (["a","b"],["c","d"]) => ["a","b"]

  test4 =
	<diff> (["a","b"],["b","d"]) => ["a"]


