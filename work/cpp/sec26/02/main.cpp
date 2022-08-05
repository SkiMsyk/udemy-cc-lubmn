#include "sample.h"
#include <iostream>

using namespace std;

int main() {
  Sample s;
  cout << "const : " << s.m_cst << endl;
  s.setStr("ABC");
  cout << s.getStr() << endl;
  return 0;
}