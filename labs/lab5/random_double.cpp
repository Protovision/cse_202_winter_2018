#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

double random_double(double min, double max)
{
	return min + (double)rand() / RAND_MAX * (max - min);
}

int main(int argc, char* argv[])
{
	int count;
	double min, max;

	count = atoi(argv[1]);
	min = atof(argv[2]);
	max = atof(argv[3]);
	srand(time(0));
	for (int i = 0; i < count; ++i)
		cout << random_double(min, max) << endl;
	return 0;
}
