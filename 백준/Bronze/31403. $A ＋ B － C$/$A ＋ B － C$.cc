#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C, result;
	string tmp = "";
	cin >> A;
	cin >> B;
	cin >> C;

	cout << A + B - C << endl;

	tmp += to_string(A);
	tmp += to_string(B);
	result = stoi(tmp) - C;
	cout << result;
	return 0;
}