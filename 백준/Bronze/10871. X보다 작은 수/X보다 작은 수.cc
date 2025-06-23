#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, X, tmp;
	cin >> N >> X;
	vector <int> arr;
	
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}

	for (int i = 0; i < N; i++)
		if (arr[i] < X)
			cout << arr[i] << ' ';

	return 0;
}