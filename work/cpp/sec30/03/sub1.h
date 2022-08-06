#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"

class Sub1 : public Sup1 {
  public:
    Sub1() { cout << "Sub1 constructor " << endl;}

    // Sup1のデストラクタがnon virtualなのでこれは呼ばれない
    ~Sub1() { cout << "Sub1 destructor " << endl;}
};

#endif // _SUB1_H_