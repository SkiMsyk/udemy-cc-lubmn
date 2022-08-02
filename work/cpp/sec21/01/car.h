#ifndef _CAR_H_
#define _CAR_H_

class CCar {
  public:
    CCar(); // Constructor: インスタンス生成時に一度だけ実行される
    ~CCar(); // Destructor: インスタンス削除時に一度だけ実行される
    void move();
    void supply(int fuel);
  private:
    int m_fuel;
    int m_migration;
};
#endif // _CAR_H_