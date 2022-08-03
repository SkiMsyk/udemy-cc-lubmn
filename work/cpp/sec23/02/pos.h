#ifndef _POS_H_
#define _POS_H_

#include "vec.h"

class Pos : public Vec {
  public:
    void resetPosition();
    void move(int dx, int dy);
};

#endif // _POS_H_