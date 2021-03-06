module list-zip-test
imports list-zip sunit

strategies

  main = 
    test-suite(!"list-zip-test",
	tuple-zip-test;
        tuple-unzip-test
     )

  tuple-zip-test =
    apply-test(!"tuple-zip-test"
              ,tuple-zip(id)
              ,!([1,2,3], [4,5,6], [7,8,9])
              ,![(1,4,7), (2,5,8), (3,6,9)]
              )

  tuple-unzip-test =
    apply-test(!"tuple-unzip-test"
              ,tuple-unzip(id)
              ,![(1,4,7), (2,5,8), (3,6,9)]
              ,!([1,2,3], [4,5,6], [7,8,9])
              )