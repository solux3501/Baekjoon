#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int limit = 1, floor = 1, tmp=1;

	while (true)
	{
		if (N <= limit)
			break;
		limit += floor * 6;
		floor += 1;
	}
	cout << floor;
	return 0;
}