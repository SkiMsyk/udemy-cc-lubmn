#include <iostream>

using namespace std;

int main() {
  int *p = 0;
  int i;
  p = new int[10];
  for (i=0; i<10; i++) {
    p[i] = i;
    cout << p[i] << endl;
  }
  delete[] p; //配列の領域の解放はこのように記述する
  return 0; 
}