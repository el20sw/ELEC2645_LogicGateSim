#ifndef OR_H
#define OR_H

class OR {
  public:
    virtual void inputOR();
    void get_inputOR();
    void set_inputOR();
    virtual bool operateOR();
    void outputOR();

  private:
    bool _input1;
    bool _input2;
    bool _output;
    int output;
};

#endif