#include "Point.hpp"

static Fixed abs_cross_product(Point const a, Point const b, Point const p)
{
	return (b.getX() - a.getX()) * (p.getY() - a.getY()) - 
			(b.getY() - a.getY()) * (p.getX() - a.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abs_ab = abs_cross_product(a, b, point);
	Fixed abs_bc = abs_cross_product(b, c, point);
	Fixed abs_ca = abs_cross_product(c, a, point);

	bool has_neg = (abs_ab < 0) || (abs_bc < 0) || (abs_ca < 0);
	bool has_pos = (abs_ab > 0) || (abs_bc > 0) || (abs_ca > 0);

	return !(has_neg && has_pos) && (abs_ab != 0) && (abs_bc != 0) && (abs_ca != 0);
}