#include "BITSET_LOGIC.h"

//global variables
std::bitset<8> input1;
std::bitset<8> input2;
std::bitset<8> output;

void set_input_byte1() {
  std::string input1_string;
  bool input1_test = false;

  do {
    std::cout << "\nEnter byte A: ";
    std::cin >> input1_string;
    input1_test = input_byte_test(input1_string);
    if (input1_test == true) {
      std::bitset<8> input1((input1_string));
    }
  } while (input1_test == false);
}

std::string get_input_byte1() {
  return input1.to_string();
}