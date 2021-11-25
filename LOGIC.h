#ifndef LOGIC_H
#define LOGIC_H

#include "AND.h"
#include "OR.h"

class LOGIC : public AND, public OR {
  public:
    void AND();
    void OR();
};

#endif