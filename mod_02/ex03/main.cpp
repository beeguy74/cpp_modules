#include <iostream>
#include "Point.hpp"

bool    bsp(Point const x, Point const y, Point const z, 
                                        Point const needle);

int main() {
	Point	x(1.0f, 5.0f);
	Point	y(6.0f, 5.0f);
	Point	z(6.0f, 0.0f);
	float	nX;
	float	nY;

	std::cout << "Our triange:\n";
	std::cout << "x(1.0, 5.0); y(6.0, 5.0); z(6.0, 0.0);\n";
	std::cout << "x         y\n";
	std::cout << "  5.----.\n";
	std::cout << "  4 \\   |\n";
	std::cout << "  3  \\  |\n";
	std::cout << "  2   \\ |\n";
	std::cout << "  1    \\|\n";
	std::cout << "  0123456 z" << std::endl;
	std::cout << "Enter point:" << std::endl;
	std::cout << "X coordinate:" << std::endl;
	std::cin >> nX;
	std::cout << "Y coordinate:" << std::endl;
	std::cin >> nY;

	Point needle(nX, nY);
	std::cout << (bsp(x, y, z, needle) ? "yes" : "no") << std::endl;
	return 0;
}