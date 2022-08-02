#include "car.h"
#include <iostream>

using namespace std;

CCar:: CCar() : m_fuel(0), m_migration(0) {
  cout << "CCar instance is created" << endl;
}

CCar::~CCar() {
  cout << "CCar instance is deleted" << endl;
}

void CCar::move() {
  if (m_fuel > 0) {
    m_migration++;
    m_fuel--;
  }
  cout << "Migration: " << m_migration << endl;
  cout << "Gasoline: " << m_fuel << endl;
}

void CCar::supply(int fuel) {
  if (fuel >= 0) {
    m_fuel += fuel;
  }
  cout << "燃料" << m_fuel << endl;
}