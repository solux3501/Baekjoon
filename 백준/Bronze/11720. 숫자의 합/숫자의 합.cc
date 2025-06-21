#include <iostream>
using namespace std;

int main()
{
	int N, result = 0;
	char sen[100];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> sen[i];
		result += sen[i]-48;
	}
	cout << result;

	return 0;
}