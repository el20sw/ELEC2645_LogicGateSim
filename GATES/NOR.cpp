#include <iostream>
#include "NOR.h"

void NOR::inputNOR() {
  int input1, input2;
  std::cout << "\nEnter input A: ";
  std::cin >> input1;
  std::cout << "\nEnter input B: ";
  std::cin >> input2;
  _input1 = (bool)input1;
  _input2 = (bool)input2;
}

bool NOR::operateNOR() {
  OR foo1;
  foo1.set_inputOR(_input1, _input2);
  foo1.operateOR();
  _input = foo1.get_outputOR();

  NOT foo2;
  foo2.set_inputNOT(_input);
  return _output = foo2.operateNOT();
}

void NOR::outputNOR() {
  int output = (int)_output;
  std::cout << "\n" << _input1 << " NOR " << _input2 << " = " << output << std::endl;
}

void NOR::set_inputNOR(bool input1, bool input2) {
  _input1 = input1;
  _input2 = input2;
}

bool NOR::get_outputNOR() {
  return _output;
}