#include "GATE.h"

bool input_test(std::string num) {
  if (num == "1" || num == "0") {
    return true;
  } else {
    std::cout << "\nInvalid Input!\n";
    return false;
  }
}

bool input_byte_test(std::string byte) {
  bool valid_input = true;
  if (byte.size() == 8) {
    for (std::string::iterator i = byte.begin(); i < byte.end(); i++) {
      if (*i == 1 || *i == 0) {
        valid_input = true;
      } else {
        valid_input = false;
        std::cout << "\nInvalid Input!\n";
        break;
        return false;
      }
    }
  } else {
    std::cout << "\nInvalid Input!\n";
    return false;
  }

  if (valid_input == true) {
    return true;
  }
}