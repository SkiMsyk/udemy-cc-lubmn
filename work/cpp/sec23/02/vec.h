#ifndef _VEC_H_
#define _VEC_H_

class Vec {
  protected:
    int m_x;
    int m_y;
  public:
    Vec(); // constructor
    void setValue(int x, int y);
    int getX();
    int getY();
  protected:
    void init(); // initialization
};

#endif // _VEC_H_