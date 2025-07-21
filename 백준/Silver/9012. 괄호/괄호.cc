#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		string sen;
		vector <char> arr;
		int tmp = 0;
		bool check = true;
		cin >> sen;

		for (int i = 0; i < sen.length(); i++)
		{
			arr.push_back(sen[i]);
		}

		for (int i = 0; i < sen.length(); i++)
		{
			if (arr[i] == '(')
				tmp += 1;
			else if (arr[i] == ')')
				tmp -= 1;

			if (tmp < 0)
			{
				check = false;
				break;
			}
		}
		if (check && tmp == 0)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}