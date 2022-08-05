#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

using namespace std;

class Sample {
  private:
    string m_str;
  public:
    Sample();
    void setStr(const string str); // arguments as const
    string getStr() const; // member method as const
  public:
    static const int m_cst = 100; // const
};

#endif // _SAMPLE_H_