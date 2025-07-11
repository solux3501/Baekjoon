#include <iostream>
using namespace std;
int main()
{
	int arr[15][14];
	int a, b, T;
	cin >> T;
	for (int i=0;i<15;i++)
		for (int j = 0; j < 14; j++)
		{
			if (i == 0)
				arr[i][j] = j+1;
			else if (j == 0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}

	while (T--)
	{
		cin >> a;
		cin >> b;

		cout << arr[a][b-1]<< '\n';
	}
	return 0;
}