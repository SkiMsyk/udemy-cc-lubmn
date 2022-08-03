#include "pos.h"

void Pos::resetPosition() {
  init();
}

void Pos::move(int dx, int dy) {
  m_x += dx;
  m_y += dy;
} 