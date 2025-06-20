#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int A, B;
	double result;
	cin >> A >> B;

	result = A * 1.0 / B;
	cout << std::setprecision(10);
	cout << result;
}