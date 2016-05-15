module abox-format
imports abox io options

strategies

  main = iowrap(ABox)

  ABox = 
  rec box(
	S(is-string)
	+ H(list(SOption(box)), list(box))
	+ V(list(SOption(box)), list(box))
	+ HV(list(SOption(box)), list(box))
	+ ALT(box,box)
	<+ debug(!"Not an ABox: ")
  )

  SOption(box) =
	SOpt(SpaceSymbol, is-int)
	+ SOptb(SpaceSymbol, box)
	<+ debug(!"Not an SOption: ")

  SpaceSymbol =	
	VS + HS + IS
	<+ debug(!"Not a SpaceSymbol: ")