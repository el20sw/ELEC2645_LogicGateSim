#include <iostream>
#include "XNOR.h"

void XNOR::inputXNOR() {
  int input1, input2;
  std::cout << "\nEnter input A: ";
  std::cin >> input1;
  std::cout << "\nEnter input B: ";
  std::cin >> input2;
  _input1 = (bool)input1;
  _input2 = (bool)input2;
}

bool XNOR::operateXNOR() {
  XOR foo1;
  foo1.set_inputXOR(_input1, _input2);
  foo1.operateXOR();
  _input = foo1.get_outputXOR();

  NOT foo2;
  foo2.set_inputNOT(_input);
  return _output = foo2.operateNOT();
}

void XNOR::outputXNOR() {
  int output = (int)_output;
  std::cout << "\n" << _input1 << " XNOR " << _input2 << " = " << output << std::endl;
}

void XNOR::set_inputXNOR(bool input1, bool input2) {
  _input1 = input1;
  _input2 = input2;
}

bool XNOR::get_outputXNOR() {
  return _output;
}