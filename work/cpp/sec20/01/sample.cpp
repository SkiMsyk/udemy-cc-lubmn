#include "sample.h"
#include <iostream>

using namespace std;

void Sample::f1() {
  cout << "f1" << endl;
  a = 1;
  b = 1;
  f2();
}

void Sample::f2() {
  a = 2;
  b = 2;
  cout << "a = " << a << ",\t" << "b = " << b << endl;
}