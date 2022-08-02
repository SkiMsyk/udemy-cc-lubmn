#include "car.h"

int main() {
  CCar c;
  c.supply(10);
  c.move();
  c.move();
  return 0;
  // mainの実行が終了したときにはインスタンスは破棄される
} 