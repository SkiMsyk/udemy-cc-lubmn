#include "car.h"
#include "ambulance.h"

int main() {
  Car c;
  c.supply(10);
  c.move();
  c.move();
  Car::showCarCount();
  
  Ambulance a;
  a.supply(10);
  a.move();
  a.savePeople();
  Ambulance::showAmbulanceCount();

  return 0;
}