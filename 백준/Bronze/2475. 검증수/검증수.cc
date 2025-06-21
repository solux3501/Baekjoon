#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int tmp, result=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> tmp;
		tmp = pow(tmp, 2);
		result += tmp;
	}
	result %= 10;
	cout << result;


	return 0;
}