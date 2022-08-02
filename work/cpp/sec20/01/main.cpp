#include "sample.h"
#include <iostream>

using namespace std;

int main() {
  Sample s;
  s.a = 1;
  // s.b = 2; //　これはエラー
  s.f1();
  // s.f2(); // これはエラー
}