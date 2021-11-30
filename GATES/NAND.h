#ifndef NAND_H
#define NAND_H

#include "NOT.h"
#include "AND.h"

class NAND : virtual public AND, virtual public NOT {
  public:
    void inputNAND();
    bool operateNAND();
    void outputNAND();

  private:
    bool _input;
    bool _input1;
    bool _input2;
    bool _output;
    int output;
};

#endif