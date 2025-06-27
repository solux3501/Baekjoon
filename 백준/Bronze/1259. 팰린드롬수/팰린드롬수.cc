#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string sen;
	bool check = true;
	while (true)
	{
		cin >> N;
		if (N == 0)
			break;

		sen = to_string(N);
		check = true;

		for (int i = 0; i < (sen.length() / 2)+1; i++)
		{
			if (sen[i] == sen[sen.length() - (i + 1)])
				continue;
			else
			{
				check = false;
				break;
			}
		}
		if (check)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}