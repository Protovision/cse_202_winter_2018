#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	const double pi = std::atan(1) * 4;
	double x;

	std::cout << std::left;
	std::cout << std::setw(15) << "x" <<
			std::setw(15) << "cos(x * pi)" <<
			std::endl;
	for (x = 0; x <= 2.0; x += 0.25) {
		std::cout << std::setw(15) << x <<
				std::setw(15) << std::cos(x * pi) <<
				std::endl;
	}
	return 0;	
}
