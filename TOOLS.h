#ifndef TOOLS_H
#define TOOLS_H

#include "LOGIC.h"
#include "GATES/GATE.h"

void get_two_input(bool &inputA, bool &inputB);
void get_carry_in(bool &carry_in);

void half_adder(bool inputA, bool inputB, bool &sum, bool &carry_out);
void full_adder(bool inputA, bool inputB, bool carry_in, bool &sum, bool &carry_out);
void ripple_carry_adder();

#endif