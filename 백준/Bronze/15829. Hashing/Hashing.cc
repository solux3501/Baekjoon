#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int N;
	long long tmp, result = 0;
	string sen;
	cin >> N;
	cin >> sen;

	for (int i = 0; i < N; i++)
	{
		tmp = int(sen[i]) - 'a' + 1;
		for (int j = 0; j < i; j++)
			tmp = (tmp * 31) % 1234567891;
		result = (result + tmp) % 1234567891;
	}
	cout << result;
	return 0;
}