#include "circle.hpp"
#include <cmath>
#include <cassert>

double Circle::getArea() const {
  return M_PI * pow(radius_, 2);
}

rectangle_t Circle::getFrameRect() const {
  return {2 * radius_, 2 * radius_, center_};
}

Circle::Circle(const point_t &center, double radius) {
  assert(radius_ > 0.0);
}

