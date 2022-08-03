#include "vec.h"

Vec::Vec() {
  init();
}

void Vec::setValue(int x, int y){
  m_x = x;
  m_y = y;
}

int Vec::getX() {
  return m_x;
}

int Vec::getY() {
  return m_y;
}

void Vec::init() {
  m_x = 0;
  m_y = 0;
}