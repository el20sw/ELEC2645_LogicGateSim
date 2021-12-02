#include "testing.h"

//test AND gate
bool test_AND(int a, int b, int expected) {
  LOGIC testAND;
  std::cout << "AND(" << a << "," << b << ") = ";
  testAND.set_inputAND(a, b);
  testAND.operateAND();
  int val = testAND.get_outputAND();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_AND_tests() {
  std::cout << "\nTesting AND gate...\n" << std::endl;
  int passed = 0;
  if (test_AND(0, 0, 0)) passed ++;
  if (test_AND(0, 1, 0)) passed ++;
  if (test_AND(1, 0, 0)) passed ++;
  if (test_AND(1, 1, 1)) passed ++;
  std::cout << "\nAND gate passed " << passed << " tests.\n";
  return passed;
}

//test OR gate
bool test_OR(int a, int b, int expected) {
  LOGIC testOR;
  std::cout << "OR(" << a << "," << b << ") = ";
  testOR.set_inputOR(a, b);
  testOR.operateOR();
  int val = testOR.get_outputOR();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_OR_tests() {
  std::cout << "\nTesting OR gate...\n" << std::endl;
  int passed = 0;
  if (test_OR(0, 0, 0)) passed ++;
  if (test_OR(0, 1, 1)) passed ++;
  if (test_OR(1, 0, 1)) passed ++;
  if (test_OR(1, 1, 1)) passed ++;
  std::cout << "\nOR gate passed " << passed << " tests.\n";
  return passed;
}

//test XOR gate
bool test_XOR(int a, int b, int expected) {
  LOGIC testXOR;
  std::cout << "XOR(" << a << "," << b << ") = ";
  testXOR.set_inputXOR(a, b);
  testXOR.operateXOR();
  int val = testXOR.get_outputXOR();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_XOR_tests() {
  std::cout << "\nTesting XOR gate...\n" << std::endl;
  int passed = 0;
  if (test_XOR(0, 0, 0)) passed ++;
  if (test_XOR(0, 1, 1)) passed ++;
  if (test_XOR(1, 0, 1)) passed ++;
  if (test_XOR(1, 1, 0)) passed ++;
  std::cout << "\nXOR gate passed " << passed << " tests.\n";
  return passed;
}

//test NOR gate
bool test_NOR(int a, int b, int expected) {
  LOGIC testNOR;
  std::cout << "NOR(" << a << "," << b << ") = ";
  testNOR.set_inputNOR(a, b);
  testNOR.operateNOR();
  int val = testNOR.get_outputNOR();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_NOR_tests() {
  std::cout << "\nTesting NOR gate...\n" << std::endl;
  int passed = 0;
  if (test_NOR(0, 0, 1)) passed ++;
  if (test_NOR(0, 1, 0)) passed ++;
  if (test_NOR(1, 0, 0)) passed ++;
  if (test_NOR(1, 1, 0)) passed ++;
  std::cout << "\nNOR gate passed " << passed << " tests.\n";
  return passed;
}

//test XNOR gate
bool test_XNOR(int a, int b, int expected) {
  LOGIC testXNOR;
  std::cout << "XNOR(" << a << "," << b << ") = ";
  testXNOR.set_inputXNOR(a, b);
  testXNOR.operateXNOR();
  int val = testXNOR.get_outputXNOR();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_XNOR_tests() {
  std::cout << "\nTesting XNOR gate...\n" << std::endl;
  int passed = 0;
  if (test_XNOR(0, 0, 1)) passed ++;
  if (test_XNOR(0, 1, 0)) passed ++;
  if (test_XNOR(1, 0, 0)) passed ++;
  if (test_XNOR(1, 1, 1)) passed ++;
  std::cout << "\nXNOR gate passed " << passed << " tests.\n";
  return passed;
}

//test NOT gate
bool test_NOT(int a, int expected) {
  LOGIC testNOT;
  std::cout << "NOT(" << a << ") = ";
  testNOT.set_inputNOT(a);
  testNOT.operateNOT();
  int val = testNOT.get_outputNOT();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_NOT_tests() {
  std::cout << "\nTesting NOT gate...\n" << std::endl;
  int passed = 0;
  if (test_NOT(0, 1)) passed ++;
  if (test_NOT(1, 0)) passed ++;
  std::cout << "\nNOT gate passed " << passed << " tests.\n";
  return passed;
}

//test NAND gate
bool test_NAND(int a, int b, int expected) {
  LOGIC testNAND;
  std::cout << "NAND(" << a << "," << b << ") = ";
  testNAND.set_inputNAND(a, b);
  testNAND.operateNAND();
  int val = testNAND.get_outputNAND();
  
  if (val == expected) {
    std::cout << val << " : passed\n";
    return true;
  } else {
    std::cout << "FAILED! " << val << " (expecting " << expected << ").\n";
    return false;
  }
}

int run_NAND_tests() {
  std::cout << "\nTesting NAND gate...\n" << std::endl;
  int passed = 0;
  if (test_NAND(0, 0, 1)) passed ++;
  if (test_NAND(0, 1, 1)) passed ++;
  if (test_NAND(1, 0, 1)) passed ++;
  if (test_NAND(1, 1, 0)) passed ++;
  std::cout << "\nNAND gate passed " << passed << " tests.\n";
  return passed;
}