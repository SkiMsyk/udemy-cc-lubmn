#include "a.h"
#include "b.h"
#include <iostream>

using namespace std;

A::A() {
  m_pB = new B(this); // this = itself instance
}

A::~A() {
  delete m_pB;
}

void A::foo() {
  cout << "foo" << endl;
}

void A::bar() {
  m_pB->hoge();
}