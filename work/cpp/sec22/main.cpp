#include "rat.h"
#include <iostream>

using namespace std;

int main() {
  Rat *r1, *r2, *r3;

  Rat::showNum();
  r1 = new Rat();
  r1->squeak();

  r2 = new Rat();
  r3 = new Rat();
  Rat::showNum();
  
  r2->squeak();
  r3->squeak();
  delete r1;
  delete r2;
  Rat::showNum();
  delete r3;
  Rat::showNum();
  return 0;
}