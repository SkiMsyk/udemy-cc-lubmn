#include <iostream>

using namespace std;

int main() {
  int *p = 0;
  p = new int(); // type int の領域の動的確保
  *p = 123;
  cout << *p << endl;
  delete p; // 領域のリリース 絶対やらなきゃダメ
  return 0;
}