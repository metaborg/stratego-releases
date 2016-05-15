module prop
signature
  sorts Prop
  constructors
    False : Prop
    True  : Prop
    Atom  : String -> Prop
    Not   : Prop -> Prop
    And   : Prop * Prop -> Prop
    Or    : Prop * Prop -> Prop
    Impl  : Prop * Prop -> Prop
    Eq    : Prop * Prop -> Prop

