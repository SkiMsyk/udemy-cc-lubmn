#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include <iostream>
#include <string>

using namespace std;
class Chicken : public Bird {
  public:
    // 仮想関数
    void sing() { cout << "chicken-chicken" << endl; }

    // 通常関数
    void fly() { cout << "The chicken tried to fly, but couldn't (T T)" << endl; }
};

#endif // _CHICKEN_H_