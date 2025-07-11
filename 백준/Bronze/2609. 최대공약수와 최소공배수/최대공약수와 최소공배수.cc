#include <iostream>
using namespace std;

int main()
{

	int a, b, tmp;
	int a1=1, b1=1, result=1;
	cin >> a >> b;
	tmp = min(a, b);
	for (int i = 1; i <= tmp; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			result = i;
			a1 = a / i;
			b1 = b / i;
		}
	}
	cout << result << '\n';
	cout << result * a1 * b1;
	return 0;
}