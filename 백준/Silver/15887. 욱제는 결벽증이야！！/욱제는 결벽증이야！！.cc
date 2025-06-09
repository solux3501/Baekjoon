#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, tmp, check = 1, result = 0;
	cin >> N;
	vector <int> arr(N);
	vector <pair<int, int>> LR(N*N);
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	while (1)
	{
		auto it = find(arr.begin(), arr.end(), check);
		tmp = distance(arr.begin(), it);

		if (check != arr[check - 1])
		{
			reverse(arr.begin() + check - 1, arr.begin() + tmp + 1);
			LR[result].first = check;
			LR[result].second = tmp+1;
			result += 1;
		}
		else
        {
            if (check == N)
                break;
			check += 1;
        }
	}
	cout << result << '\n';
	for (int i = 0; i < result; i++)
		cout << LR[i].first << ' ' << LR[i].second << '\n';


	return 0;
}