#ifndef _CAR_H_
#define _CAR_H_

class Car {
  public:
    // instance method
    Car();
    ~Car();
    int getId();
    void move();
    void supply(int fuel);
    // class method
    static void showCarCount();
  private:
    // instance variable
    int m_fuel;
    int m_migration;
    int m_car_id;
    // class variable
    static int m_car_count;
};

#endif // _CAR_H_