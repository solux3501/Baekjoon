#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, tmp;
	cin >> N >> M;
	int count_W = 0, count_B = 0;
	bool check_W = true, check_B = false;
	vector <vector<char>> origin(N, vector<char>(M, '1'));
	vector <vector<int>> chess(N, vector<int>(M, -1));
	vector <int> result;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			cin >> origin[i][j];
		}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			if (origin[i][j] == 'W')
				chess[i][j] = 1;
			else if (origin[i][j] == 'B')
				chess[i][j] = 0;
		}

	for (int i = 0; i < N - 7; i++)
		for (int j = 0; j < M - 7; j++)
		{
			count_B = 0;
			count_W = 0;
			for (int x = i; x < i + 8; x++)
				for (int y = j; y < j + 8; y++)
				{
					if ((x + y) % 2 != chess[x][y])
						count_B += 1;

					if ((x + y) % 2 == chess[x][y])
						count_W += 1;
				}
			//cout << min({ count_B, count_W }) << endl;
			result.push_back(min({ count_B, count_W }));
		}
	cout << *min_element(result.begin(), result.end());

	return 0;
}