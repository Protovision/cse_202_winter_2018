#include <iostream>
#include <limits>

int main()
{
	std::cout << "short int: " <<
				std::numeric_limits<short int>::min() << " to " <<
				std::numeric_limits<short int>::max() << std::endl;
	
	std::cout << "int: " <<
				std::numeric_limits<int>::min() << " to " <<
				std::numeric_limits<int>::max() << std::endl;
	
	std::cout << "long int: " <<
				std::numeric_limits<long int>::min() << " to " <<
				std::numeric_limits<long int>::max() << std::endl;

	std::cout << "float: " <<
				-std::numeric_limits<float>::max() << " to " <<
				std::numeric_limits<float>::max() << std::endl;

	std::cout << "double: " <<
				-std::numeric_limits<double>::max() << " to " <<
				std::numeric_limits<double>::max() << std::endl;

	std::cout << "long double: " <<
				-std::numeric_limits<long double>::max() << " to " <<
				std::numeric_limits<long double>::max() << std::endl;

	return 0;

}
