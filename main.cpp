#include <iostream>
#include <regex>
#include "LOGIC.h"

//declare functions
void logic_gate_menu();
void print_logic_menu();
int menu_selection();

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

void logic_gate_menu() {
  print_logic_menu();
  int input = menu_selection();
}

void print_logic_menu() {
  std::cout << "\n----- Select a Logic Gate -----\n";
  std::cout << "|\t\t\t\t|\n";
  std::cout << "|\t1. AND\t\t|\n";
  std::cout << "|\t2. OR\t\t|\n";
  std::cout << "|\t3. XOR\t\t|\n";
  std::cout << "|\t4. NOR\t\t|\n";
  std::cout << "|\t5. XNOR\t\t\t|\n";
  std::cout << "|\t6. NOT\t\t|\n";
  std::cout << "|\t7. NAND\t\t|\n";
  std::cout << "|\t8. Return to Main Menu\t\t|\n";
  std::cout << "|\t\t\t\t|\n";
  std::cout << "---------------------------------\n";
}

int menu_selection() {
  int input;
  bool valid_input = false;
  int menu_items = 8;

  do {
    std::cout << "\nSelect Item: ";
    std::cin >> input;
    valid_input = isdigit(input);
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {
      if (input >=1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid input!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}