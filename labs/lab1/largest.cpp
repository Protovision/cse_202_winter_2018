#include <iostream>

int main()
{
	double n, max;

	if (!(std::cin >> n)) return 0;
	max = n;
	while (std::cin >> n) {
		if (n > max) max = n;
	}
	std::cout << max << std::endl;
	return 0;
}
