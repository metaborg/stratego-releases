module list-sort-test
imports list-sort sunit

strategies

  main = 
    test-suite(!"list-sort-test",
	tuple-uniq-test
     )

  tuple-uniq-test =
    apply-test(!"tuple-uniq-test"
              ,uniq
              ,![1,2,3,5,3,7,1,4,9,2]
              ,![1,2,3,5,7,4,9]
              )