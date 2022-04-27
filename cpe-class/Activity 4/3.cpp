#include <iostream>
#include <cmath>

// 3. Area of a Circle (πr²)

int main () {
	double radius, area;

	std::cout << "Enter the radius of Circle: ";
	std::cin >> radius;
	area = 3.14 * radius * radius;
	std::cout << "Area of circle with radius " 
		  << radius << " is " << area; 

	return 0;

}
