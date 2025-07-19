#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N, tmp;
	cin >> N;
	map <int, int> arr;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (arr.find(tmp) == arr.end())
			arr[tmp] = 1;
		else
			arr[tmp] += 1;
	}
	
	for (auto &u : arr)
	{
		for (int j = 0; j < u.second; j++)
			cout << u.first << '\n';
	}

	return 0;
}