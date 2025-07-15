#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, result= -1;
	cin >> N >> M;
	vector <int> arr(N);
	vector <int> range;

	for (auto& u : arr)
		cin >> u;

	for (int i=0;i<N;i++)
		for (int j=0;j<i;j++)
			for (int k = 0; k < j; k++)
				range.push_back(arr[i] + arr[j] + arr[k]);
	
	sort(range.begin(), range.end());

	for (int i = 0; i < range.size(); i++)
	{
		if (range[i] <= M)
			result = i;
		else
			break;
	}

	if (result != -1) {}
		cout << range[result];

	return 0;
}