#include <iostream>
using namespace std;

int main()
{
	int N, M;

	while (true)
	{
		cin >> N >> M;
		if (N == 0 && M == 0)
			break;
		else
		{
			if (N <= M)
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
		}

	}


	return 0;
}