#include "rat.h"
#include <iostream>

using namespace std;

// init m_count as 0
int Rat::m_count = 0;

// constructor
Rat::Rat() : m_id(0) {
  m_id = m_count;
  m_count++;
}

// destructor
Rat::~Rat() {
  cout << "Rat instance m_id = [" << m_id << "] is deleted" << endl;
  m_count--;
}

void Rat::showNum() {
  cout << "Current rat count : " << m_count << endl;
}

void Rat::squeak() {
  cout << m_id << " : " << "Hello!" << endl;
}