#include "sub.h"
#include "sup.h"

int main() { 
  Sup *sup;
  Sub *sub;
  sup = new Sup();
  sub = new Sub();
  sup->func();
  sub->func();
  delete sup, sub;
  return 0;
}