#include <iostream>
#include <string>
#include "c.h"

using namespace std;

int main() {
  Calc<int> i1;
  Calc<string> i2;
  i1.set(1, 2);
  i2.set("A", "B");
  cout << i1.add() << endl << i2.add() << endl;
  return 0;
}