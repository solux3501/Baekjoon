#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, K, result = 1;
	cin >> N >> K;

	for (int i = 1; i <= K; i++)
	{
		result = result * (N - i + 1) / i;
	}

	cout << result;
	return 0;
}