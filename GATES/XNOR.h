#ifndef XNOR_H
#define XNOR_H

#include "NOT.h"
#include "XOR.h"

class XNOR : virtual public NOT, virtual public XOR {
  public:
    void inputXNOR();
    bool operateXNOR();
    void outputXNOR();

  private:
    bool _input1;
    bool _input2;
    bool _input;
    bool _output;
    int output;
};

#endif