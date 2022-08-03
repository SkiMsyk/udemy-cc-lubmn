#ifndef __AMBULANCE_H_
#define __AMBULANCE_H_

#include "car.h"

class Ambulance : public Car {
  public:
    // constructor
    Ambulance();
    // destructor
    virtual ~Ambulance();
    // instance method
    void savePeople();
    // class method
    static void showAmbulanceCount();
  private:
    // instance variable
    int m_number;
    int m_ambulance_id;
    // class variable
    static int m_ambulance_count;
};

#endif // __AMBULANCE_H_