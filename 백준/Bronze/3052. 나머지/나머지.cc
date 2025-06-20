#include <iostream>
#include <set>
using namespace std;

int main()
{
	int tmp;
	set <int> div;

	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		tmp = tmp % 42;
		div.insert(tmp);
	}
	cout << div.size();

	return 0;
}