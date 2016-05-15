module string-test
imports string sunit

strategies 

  main = 
    test-suite(!"string-test",
	basename-test
    )

  basename-test = 
    apply-test(!"basename-test", basename, !"./number.r", !"./number")