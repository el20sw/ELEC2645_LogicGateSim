#include <iostream>
#include <regex>
#include "LOGIC.h"
#include "TOOLS.h"
#include "testing.h"

//declare functions
void logic_gate_menu();
void print_logic_menu();
int logic_menu_selection();
void select_menu_item(int input);
void go_back_to_logic_menu();
void menu_AND();
void menu_OR();
void menu_XOR();
void menu_NOR();
void menu_XNOR();
void menu_NOT();
void menu_NAND();
bool is_integer(std::string num);

void menu_TOOLS();
void print_tools_menu();
int tools_menu_selection();
void select_tool_item(int input);
void go_back_to_tools_menu();
void half_adder_tool();
void full_adder_tool();

int main(int argc, char const *argv[]) {
  /*
  //calling testing functions
  run_tests();
  */
  logic_gate_menu();

  return 0;
}

void logic_gate_menu() {
  print_logic_menu();
  int input = logic_menu_selection();
  select_menu_item(input);
}

void print_logic_menu() {
  std::cout << "\n----- Select a Logic Gate -----\n";
  std::cout << "|\t\t\t\t\t\t\t|\n";
  std::cout << "|\t1. AND\t\t\t\t\t|\n";
  std::cout << "|\t2. OR\t\t\t\t\t|\n";
  std::cout << "|\t3. XOR\t\t\t\t\t|\n";
  std::cout << "|\t4. NOR\t\t\t\t\t|\n";
  std::cout << "|\t5. XNOR\t\t\t\t\t|\n";
  std::cout << "|\t6. NOT\t\t\t\t\t|\n";
  std::cout << "|\t7. NAND\t\t\t\t\t|\n";
  std::cout << "|\t8. TOOLS\t\t\t\t|\n";
  std::cout << "|\t9. Exit current menu\t|\n";
  std::cout << "|\t\t\t\t\t\t\t|\n";
  std::cout << "-------------------------------\n";
}

int logic_menu_selection() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 9;

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

bool is_integer(std::string num) {
  return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void select_menu_item(int input) {
  switch(input) {
    case 1:
      menu_AND();
      break;
    case 2:
      menu_OR();
      break;
    case 3:
      menu_XOR();
      break;
    case 4:
      menu_NOR();
      break;
    case 5:
      menu_XNOR();
      break;
    case 6:
      menu_NOT();
      break;
    case 7:
      menu_NAND();
      break;
    case 8:
      menu_TOOLS();
      break;
    case 9:
      break;
  }
}

void go_back_to_logic_menu() {
  std::string input;
  do {
    std::cout << "\nEnter 'b' or 'B' to exit current menu: ";
    std::cin >> input;
  } while (input != "b" && input != "B");
  logic_gate_menu();
}

void menu_AND() {
  std::cout << "\n>> AND Gate\n";
  LOGIC logic;
  logic.AND();
  go_back_to_logic_menu();
}

void menu_OR() {
  std::cout << "\n>> OR Gate\n";
  LOGIC logic;
  logic.OR();
  go_back_to_logic_menu();
}

void menu_XOR() {
  std::cout << "\n>> XOR Gate\n";
  LOGIC logic;
  logic.XOR();
  go_back_to_logic_menu();
}

void menu_NOR() {
  std::cout << "\n>> NOR Gate\n";
  LOGIC logic;
  logic.NOR();
  go_back_to_logic_menu();
}

void menu_XNOR() {
  std::cout << "\n>> XNOR Gate\n";
  LOGIC logic;
  logic.XNOR();
  go_back_to_logic_menu();
}

void menu_NOT() {
  std::cout << "\n>> NOT Gate\n";
  LOGIC logic;
  logic.NOT();
  go_back_to_logic_menu();
}

void menu_NAND() {
  std::cout << "\n>> NAND Gate\n";
  LOGIC logic;
  logic.NAND();
  go_back_to_logic_menu();
}

void menu_TOOLS() {
  print_tools_menu();
  int input = tools_menu_selection();
  select_tool_item(input);
  go_back_to_tools_menu();
}

void print_tools_menu() {
  std::cout << "\n------ Select a Logic Tool ------\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout << "|\t1. Half-Adder\t\t\t\t|\n";
  std::cout << "|\t2. Full-Adder\t\t\t\t|\n";
  std::cout << "|\t3. Exit current menu\t\t|\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout << "---------------------------------\n";
}

int tools_menu_selection() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 3;

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void go_back_to_tools_menu() {
  std::string input;
  do {
    std::cout << "\nEnter 'b' or 'B' to exit current menu: ";
    std::cin >> input;
  } while (input != "b" && input != "B");
  menu_TOOLS();
}

void select_tool_item(int input) {
  switch(input) {
    case 1:
      half_adder_tool();
      break;
    case 2:
      full_adder_tool();
      break;
    case 3:
      break;
  }
}

void half_adder_tool() {
  bool inputA, inputB, sum, carry_out;

  get_two_input(inputA, inputB);
  half_adder(inputA, inputB, sum, carry_out);
  std::cout << "\nSum = " << sum << "\nCarry Out = " << carry_out << std::endl;
}

void full_adder_tool() {
  bool inputA, inputB, carry_in, sum, carry_out;

  get_carry_in(carry_in);
  get_two_input(inputA, inputB);
  full_adder(inputA, inputB, carry_in, sum, carry_out);
  std::cout << "\nSum = " << sum << "\nCarry Out = " << carry_out << std::endl;
}