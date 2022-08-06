#ifndef _SUB2_H_
#define _SUB2_H_

#include "sup2.h"

class Sub2 : public Sup2 {
  public:
    Sub2() { cout << "Sub2 constructor " << endl;}
    ~Sub2() { cout << "Sub2 destructor " << endl;}
};

#endif // _SUB2_H_