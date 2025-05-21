#include <iostream>
#include <math.h>

int main()
{
	int x, y;
	double N, result;
	std::cin >> x >> y;
	N = (y-x) / 400.0;
	result = 1 / (1+pow(10,N));
	std::cout << result;

	return 0;
}