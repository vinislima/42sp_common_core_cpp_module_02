#include <iostream>
#include "Point.hpp"

int main(void)
{

	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);

	Point p1(10, 15);
	if(bsp(a, b, c, p1))
		std::cout << "P1 (10,15) is inside" << std::endl;
	else
		std::cout << "P1 (10, 15) is outside" <<std::endl;

	Point p2(30, 15);
	if (bsp(a, b, c, p2))
		std::cout << "P2 (30, 15) is inside" << std::endl;
	else
		std::cout << "P2 (30, 15) is outside" << std::endl;

	Point p3(10, 0); // No meio da base
	if (bsp(a, b, c, p3))
		std::cout << "P3 (10, 0) is inside" << std::endl;
	else
		std::cout << "P3 (10, 0) is outside (Edge/Vertex)" << std::endl;

	return (0);
}