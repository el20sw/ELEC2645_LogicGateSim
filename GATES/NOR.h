#ifndef NOR_H
#define NOR_H

#include "NOT.h"
#include "OR.h"

class NOR : virtual public NOT, virtual public OR {
  public:
    void inputNOR();
    bool operateNOR();
    void outputNOR();
  
  private:
    bool _input1;
    bool _input2;
    bool _input;
    bool _output;
    int output;
};

#endif