#include "car.h"
#include <iostream>

using namespace std;

int main() {
  CCar* pC = 0;
  pC = new CCar();
  pC->supply(10);
  pC->move();
  pC->move();

  pC->is_available();
  pC->supply(-100);
  pC->is_available();
  
  pC->init_fuel();
  delete pC;
  cout << "complete" << endl;
  return 0;
}