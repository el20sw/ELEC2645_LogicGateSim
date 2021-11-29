#ifndef LOGIC_H
#define LOGIC_H

#include "GATES/AND.h"
#include "GATES/OR.h"
#include "GATES/NOT.h"
#include "GATES/XOR.h"

class LOGIC : virtual public AND, virtual public OR, virtual public NOT, virtual public XOR {
  public:
    void AND();
    void OR();
    void NOT();
    void XOR();
};

#endif

