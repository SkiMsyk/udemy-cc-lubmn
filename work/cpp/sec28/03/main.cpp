#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main() {
  vector<string> v;
  list<string> l;

  v.push_back("HELLO");
  v.push_back("WORLD");
  
  l.push_back("hello");
  l.push_back("world");
  l.push_back("!");

  vector<string>::iterator i;
  list<string>::iterator j;

  for(i=v.begin(); i != v.end(); i++) {
    cout << *i << endl;
  }

  j = l.begin();
  l.remove(*j); // list element can be removed, vector can't.

  for(j=l.begin(); j!=l.end(); j++) {
    cout << *j << endl;
  }
}