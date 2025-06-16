#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);  cout.tie(0);

	int T, H, W, N;
	int x, y;
	cin >> T;

	while (T--)
	{
		cin >> H >> W >> N;
		N = N - 1;
		x = N / H;
		y = N % H;
		x += 1; y += 1;
		if (x < 10)
		{
			cout << y << '0' << x << '\n';
		}
		else
			cout << y << x << '\n';

	}

	return 0;
}