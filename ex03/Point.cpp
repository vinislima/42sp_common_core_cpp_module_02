#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Point &src) : _x(src._x), _y(src._y) {}

Point::~Point() {}

Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs) {}
	return *this;
}

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}
