#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

class Crow : public Bird {
  public:
    // virtual function (inheritance)
    void sing() { cout << "crow-crow" << endl; }

    // normal function
    void fly() { cout << "the crow will fly." << endl;}
};

#endif // _CROW_H_