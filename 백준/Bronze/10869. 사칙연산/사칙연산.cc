#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);  cout.tie(0);
	int A, B;
	cin >> A >> B;

	cout << A + B << '\n';
	cout << A - B << '\n';
	cout << A * B << '\n';
	cout << A / B << '\n';
	cout << A % B ;

	return 0;
}