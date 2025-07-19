#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, M, K;
	int day = 1;
	cin >> N >> M >> K;

	day = ceil(1.0*(K-M)/(N-M));

	cout << day;
	return 0;
}