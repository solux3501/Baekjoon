#include <iostream>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	if (N >= 12 && N <= 16 && M == 0)
		cout << 320;
	else
		cout << 280;

	return 0;
}