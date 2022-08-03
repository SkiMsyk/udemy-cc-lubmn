#include "car.h"
#include <iostream>

using namespace std;

// init m_car_count as 0
int Car::m_car_count = 0;

// constructor
Car::Car() : m_fuel(0), m_migration(0) {
  m_car_id = m_car_count;
  m_car_count++;
  cout << "Car instance generated id = " << m_car_id << endl;
}

// destructor
Car::~Car() {
  cout << "Car instance is deleted. id = " << m_car_id << endl;
}

// class method
void Car::showCarCount() {
  cout << "Current Car instance amount : " << m_car_count << endl;
}

// instance method
int Car::getId() {
  return m_car_id;
}

void Car::move() {
  if(m_fuel > 0) {
    m_fuel--;
    m_migration++;
    cout << m_car_id << " : moved" << endl;
  } else {
    cout << m_car_id << " : fuel is empty" << endl;
  }
}

void Car::supply(int fuel) {
  // m_fuel += fuel;
  cout << m_car_id << " : current fuel amount is " << m_fuel << endl;
}
