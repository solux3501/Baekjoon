#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string sen;
	cin >> sen;
	int result = stoi(sen, nullptr, 16);
	cout << result;



	return 0;
}