#include <iostream>
#include "LOGIC.h"

//declare functions

int main() {
  int choice;
  std::cout << "\nAND(1) or OR(2): ";
  std::cin >> choice;
  LOGIC logic;
  switch (choice) {
    case 1:
      logic.AND();
      break;
    case 2:
      logic.OR();
      break;
  }
}