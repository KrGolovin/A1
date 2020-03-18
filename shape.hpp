#ifndef A1_SHAPE_HPP
#define A1_SHAPE_HPP

#include "base-types.hpp"

class Shape {
public:
  virtual ~Shape() = default;

  virtual double getArea() const = 0;

  virtual rectangle_t getFrameRect() const = 0;

  void move(const point_t &);

  void move(double, double);

  point_t getPos() const;

protected:
  Shape(const point_t &center);

  point_t center_;
};

Shape::Shape(const point_t &center) :
        center_(center) {}

void Shape::move(const point_t &destinationPoint) {
  center_ = destinationPoint;
}

void Shape::move(double dX, double dY) {
  center_.x_ += dX;
  center_.y_ += dY;
}

point_t Shape::getPos() const {
  return center_;
}

#endif //A1_SHAPE_HPP
