#include <iostream>

int main()
{
	double a, b;

	if (!(std::cin >> a) || !(std::cin >> b))
		return 0;
	if (a >= b) std::cout << a << std::endl;
	else std::cout << b << std::endl;
	return 0;
}
