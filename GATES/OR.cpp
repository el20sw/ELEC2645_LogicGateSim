#include <iostream>
#include "OR.h"

void OR::inputOR() {
  int input1, input2;
  std::cout << "\nEnter input A: ";
  std::cin >> input1;
  std::cout << "\nEnter input B: ";
  std::cin >> input2;
  _input1 = (bool)input1;
  _input2 = (bool)input2;
}

bool OR::operateOR() {
  return _output = _input1 || _input2;
}

void OR::outputOR() {
  int output = (int)_output;
  std::cout << "\n" << (int)_input1 << " OR " << (int)_input2 << " = " << output << std::endl;
}

void OR::set_inputOR(bool input1, bool input2) {
  _input1 = input1;
  _input2 = input2;
}

bool OR::get_outputOR() {
  return _output;
}