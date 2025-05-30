#include <iostream>
#include <vector>
int main()
{
	int N, M, q;
	int num, col, row, k;
	std::ios::sync_with_stdio(false);
	std::cin.tie(0); std::cout.tie(0);
	std::cin >> N >> M >> q;
	std::vector<std::vector<int>> arr(N, std::vector<int>(M, 0));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			std::cin >> arr[i][j];

	while (q--)
	{
		std::cin >> num >> col >> row;
		if (num == 0)
		{
			std::cin >> k;
			arr[col][row] = k;
		}
		else if (num == 1)
			swap(arr[row], arr[col]);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}