#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);  cout.tie(0);
	int A, B;
	while (1)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		else
			cout << A + B << endl;
	}

	return 0;
}