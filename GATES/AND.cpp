#include <iostream>
#include "AND.h"


void AND::inputAND() {
  int input1, input2;
  std::cout << "\nEnter input A: ";
  std::cin >> input1;
  std::cout << "\nEnter input B: ";
  std::cin >> input2;
  _input1 = (bool)input1;
  _input2 = (bool)input2;
}

bool AND::operateAND() {
  return _output = _input1 && _input2;
}

void AND::outputAND() {
  int output = (int)_output;
  std::cout << "\n" << _input1 << " AND " << _input2 << " = " << output << std::endl;
}

void AND::set_inputAND(bool input1, bool input2) {
  _input1 = input1;
  _input2 = input2;
}

bool AND::get_outputAND() {
  return _output;
}