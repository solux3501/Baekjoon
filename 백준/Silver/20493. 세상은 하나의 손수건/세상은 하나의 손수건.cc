#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, T, tmp = 0;
	int x = 0, y = 0, dir = 0;
	cin >> N >> T;
	int arr[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
	int s; string go;

	while (N--)
	{
		cin >> s >> go;
		x += arr[dir][0] * (s-tmp);
		y += arr[dir][1] * (s - tmp);
		tmp = s;
		if (go == "left")
		{
			dir += 1;
			if (dir > 3)
				dir -= 4;
		}
		else
		{
			dir -= 1;
			if (dir < 0)
				dir += 4;
		}
	}
	x += arr[dir][0] * (T - s);
	y += arr[dir][1] * (T - s);

	cout << x << ' ' << y << '\n';

	return 0;
}