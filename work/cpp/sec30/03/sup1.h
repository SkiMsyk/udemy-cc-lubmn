#ifndef _SUP1_H_
#define _SUP1_H_

#include <iostream>

using namespace std;

class Sup1 {
  public:
    Sup1() { cout << "Sup1 constructor" << endl; }

    // non virtual
    ~Sup1() { cout << "Sup1 destructor" << endl; }
};

#endif //_SUP1_H_