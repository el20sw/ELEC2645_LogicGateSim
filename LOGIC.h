#ifndef LOGIC_H
#define LOGIC_H

#include "GATES/AND.h"
#include "GATES/OR.h"
#include "GATES/NOT.h"

class LOGIC : public AND, public OR, public NOT {
  public:
    void AND();
    void OR();
    void NOT();
};

#endif

