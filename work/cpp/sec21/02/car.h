#ifndef _CAR_H_
#define _CAR_H_

class CCar {
  public:
    CCar();
    ~CCar();
    void move();
    void supply(int fuel);
    void init_fuel();
    bool is_available();
  private:
    int m_fuel;
    int m_migration;
};

#endif // _CAR_H_