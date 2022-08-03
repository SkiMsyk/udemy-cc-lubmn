#include <iostream>
#include "calc.h"

using namespace std;

int main() {
  Calc *x, *y;
  x = new Calc(); // default constructor
  y = new Calc(1, 2); // constructor with arguments
  cout << 3 << " + " << 4 << " = " << x->add(3,4) << endl;
  cout << y->getA() << " + " << y->getB() << " = " << y->add() << endl;
  
  delete x;
  delete y;

  return 0;
}