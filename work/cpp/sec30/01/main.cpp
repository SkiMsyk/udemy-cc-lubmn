#include "bird.h"
#include "crow.h"
#include "chicken.h"

using namespace std;

int main() {
  Bird *b1, *b2;
  
  b1 = new Crow;
  b1->sing();
  b1->fly();

  b2 = new Chicken;
  b2->sing();
  b2->fly();

  delete b1, b2;
  return 0;
}