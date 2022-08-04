#include <iostream>

using namespace std;

bool judge(int);

int main() {
  int n;
  cout << "Input integer : ";
  cin >> n;
  if(judge(n)) {
    cout << "greater than equal to 0" << endl;
  } else {
    cout << "less than 0" << endl; 
  }
}

bool judge(int n) {
  if(n >= 0) {
    return true;
  } else {
    return false;
  }
}