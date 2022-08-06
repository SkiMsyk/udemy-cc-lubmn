#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;
class Bird {
  public:
    // 仮想関数
    virtual void sing() { cout << "piyo-piyo" << endl; }

    // 通常関数
    void fly() { cout << "I can fly !! " << endl; }
};

#endif // _BIRD_H_