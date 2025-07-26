#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, x, y;
	cin >> N;
	vector <pair<int, int>> dim(N);

	for (auto& u : dim)
	{
		cin >> x >> y;
		u.first = y;
		u.second = x;
	}

	sort(dim.begin(), dim.end());

	for (auto& u : dim)
	{
		cout << u.second << ' ' << u.first << '\n';
	}


	

	return 0;
}