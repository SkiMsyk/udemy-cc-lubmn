#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
  stack<int> s;
  queue<int> q;
  int data[] = { 1,2,3 };
  int i;

  for(i=0; i<3; i++) {
    s.push(data[i]);
    q.push(data[i]);
  }

  cout << "stack : start -> ";
  while (!s.empty()) {
    cout << s.top() << " -> ";
    s.pop();
  }
  cout << " end." << endl;

  cout << "queue : start -> ";
  while (!q.empty()) {
    cout << q.front() << " -> ";
    q.pop();
  }
  cout << " end." << endl;

  return 0;
}