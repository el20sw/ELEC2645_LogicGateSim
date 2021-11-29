#include "LOGIC.h"

void LOGIC::AND() {
  LOGIC foo;
  foo.inputAND();
  foo.operateAND();
  foo.outputAND();
}

void LOGIC::OR() {
  LOGIC foo;
  foo.inputOR();
  foo.operateOR();
  foo.outputOR();
}

void LOGIC::NOT() {
  LOGIC foo;
  foo.inputNOT();
  foo.operateNOT();
  foo.outputNOT();
}

void LOGIC::XOR() {
  LOGIC foo;
  foo.inputXOR();
  foo.operateXOR();
  foo.outputXOR();
}
