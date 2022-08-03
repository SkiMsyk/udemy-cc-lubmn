#include "ambulance.h"
#include <iostream>

using namespace std;

// init m_ambulance_count as 0
int Ambulance::m_ambulance_count = 0;

Ambulance::Ambulance() : m_number(119) {
  m_ambulance_id = m_ambulance_count;
  m_ambulance_count++;
  cout << "Ambulance instance is generated : " << m_ambulance_count << endl;
}

Ambulance::~Ambulance() {
  cout << "Ambulance instance is deleted : " << m_ambulance_count << endl;
}

void Ambulance::savePeople() {
  cout << "Save People!!! by " << m_ambulance_id << endl;
}

void Ambulance::showAmbulanceCount() {
  cout << "Current Ambulance instance amount : " << m_ambulance_count << endl;
}