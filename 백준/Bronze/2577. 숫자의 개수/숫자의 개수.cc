#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int A, B, C;
	long long result;
	string itos;

	cin >> A >> B >> C;
	result = A * B * C;
	itos = to_string(result);

	for (int i = '0'; i <= '9'; i++)
	{
		cout << count(itos.begin(), itos.end(), i) << '\n';
	}
    return 0;
}