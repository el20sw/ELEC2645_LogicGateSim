#include <iostream>
#include "NAND.h"

void NAND::inputNAND() {
  int input1, input2;
  std::cout << "\nEnter input A: ";
  std::cin >> input1;
  std::cout << "\nEnter input B: ";
  std::cin >> input2;
  _input1 = (bool)input1;
  _input2 = (bool)input2;
}

bool NAND::operateNAND() {
  AND foo1;
  foo1.set_inputAND(_input1, _input2);
  foo1.operateAND();
  _input = foo1.get_outputAND();

  NOT foo2;
  foo2.set_inputNOT(_input);
  return _output = foo2.operateNOT();
}

void NAND::outputNAND() {
  int output = (int)_output;
  std::cout << "\n" << _input1 << " NAND " << _input2 << " = " << output << std::endl;
}