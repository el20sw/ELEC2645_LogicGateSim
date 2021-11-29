#include <iostream>
#include "XOR.h"

void XOR::inputXOR() {
  int input1, input2;
  std::cout << "\nEnter input A: ";
  std::cin >> input1;
  std::cout << "\nEnter input B: ";
  std::cin >> input2;
  _input1 = (bool)input1;
  _input2 = (bool)input2;
}

bool XOR::operateXOR() {
  return _output = _input1 ^ _input2;
}

void XOR::outputXOR() {
  int output = (int)_output;
  std::cout << "\n" << (int)_input1 << " XOR " << (int)_input2 << " = " << output << std::endl;
}