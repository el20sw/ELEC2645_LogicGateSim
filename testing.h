// file with functions for testing logic gates

#ifndef TESTING_H
#define TESTING_H

#include "LOGIC.h"

//test AND gate
bool test_AND(int a, int b, int expected);
int run_AND_tests();

//test OR gate
bool test_OR(int a, int b, int expected);
int run_OR_tests();

//test XOR gate
bool test_XOR(int a, int b, int expected);
int run_XOR_tests();

//test NOR gate
bool test_NOR(int a, int b, int expected);
int run_NOR_tests();

//test XNOR gate
bool test_XNOR(int a, int b, int expected);
int run_XNOR_tests();

//test NOR gate
bool test_NOT(int a, int expected);
int run_NOT_tests();

//test NAND gate
bool test_NAND(int a, int b, int expected);
int run_NAND_tests();

#endif