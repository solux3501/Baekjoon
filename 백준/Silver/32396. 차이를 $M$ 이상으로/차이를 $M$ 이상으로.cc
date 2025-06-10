#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long N, K, count=1, change=0;
	cin >> N >> K;
	vector <long long> arr(N);
	vector <long long> result;

	for (auto& u : arr)
		cin >> u;

	for (int i = 1; i < N; i++)
	{
		if (abs(arr[i] - arr[i - 1]) >= K)
		{
			result.push_back(count);
			count = 1;
		}
		else
			count += 1;
	}
	result.push_back(count);
	for (int i = 0; i < result.size(); i++)
		change += result[i] / 2;

	cout << change;

	return 0;
}