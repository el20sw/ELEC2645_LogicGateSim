#include <iostream>
#include "NOT.h"

void NOT::inputNOT() {
  int input1;
  std::cout << "\nEnter input: ";
  std::cin >> input1;
  _input1 = (bool)input1;
}

bool NOT::operateNOT() {
  return _output = !_input1;
}

void NOT::outputNOT() {
  int output = (int)_output;
  std::cout << "\nNOT " << _input1 << " = " << output << std::endl;
}