#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int tmp = 0;
	cin >> N;
	vector <pair<int, int>> arr(N);
	vector <int> rank(N, 0);
	int weight, height;

	for (auto& u : arr)
	{
		cin >> weight >> height;
		u.first = weight;
		u.second = height;
	}
	
	for (int i = 0; i < N; i++)
	{
		tmp = 1;
		for (int j = 0; j < N; j++)
		{
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				tmp += 1;
		}
		rank[i] = tmp;
	}

	for (int i = 0; i < N; i++)
		cout << rank[i] << ' ';

	return 0;
}