#ifndef NOT_H
#define NOT_H

class NOT {
  public:
    void inputNOT();
    void set_inputNOT(bool input);
    bool operateNOT();
    void outputNOT();
    

  private:
    bool _input1;
    bool _output;
    int output;
};

#endif