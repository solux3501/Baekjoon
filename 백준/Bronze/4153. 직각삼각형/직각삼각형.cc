#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	vector <int> arr(3);
	while (true)
	{
		for (auto& u : arr)
			cin >> u;

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;
		else
		{
			sort(arr.begin(), arr.end());
			if (pow(arr[2], 2) == pow(arr[0], 2) + pow(arr[1], 2))
				cout << "right"<<'\n';
			else
				cout << "wrong" << '\n';
		}
	}

	return 0;
}