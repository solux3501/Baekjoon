#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[8] = { 0, };
	int tmp;
	bool check = true;
	string result = "mixed";
	for (int i = 0; i < 8; i++)
	{
		cin >> tmp;
		arr[i] = tmp;
	}
	
	if (arr[0] == 1)
	{
		for (int i = 1; i < 8; i++)
		{
			if (arr[i] != i + 1)
			{
				check = false;
				break;
			}
		}
		if (check)
			result = "ascending";
	}
	else if (arr[0] == 8)
	{
		for (int i = 1; i < 8; i++)
		{
			if (arr[i] != 8-i)
			{
				check = false;
				break;
			}
		}
		if (check)
			result = "descending";
	}
	cout << result;

	return 0;
}