#include "car.h"
#include <iostream>

using namespace std;

// Constructor
CCar::CCar() : m_fuel(10), m_migration(0) {
  cout << "CCar instance is created" << endl;
}

// Destructor
CCar::~CCar() {
  cout << "CCar instance is deleted" << endl;
}

bool CCar::is_available() {
  if (m_fuel > 0) {
    cout << "is available" << endl;
  } else {
    cout << "is not available" << endl;
  }
  return m_fuel > 0;
}

void CCar::init_fuel() {
  cout << "current fuel : " << m_fuel << endl;
  m_fuel = 0;
  cout << "fuel is initialized : " << m_fuel << endl;
}

void CCar::move() {
  if (is_available()) {
    m_fuel--;
    m_migration++;

    cout << "fuel : " << m_fuel << endl;
    cout << "migration : " << m_migration << endl;
  } else {
    init_fuel();
  }
}

void CCar::supply(int fuel) {
  if (is_available()) {
    m_fuel += fuel;
  } else {
    init_fuel();
    
  }
  cout << "fuel amount : " << m_fuel << endl;
}