#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T, score, result;
	string sen;
	cin >> T;
	while (T--)
	{
		result = 0;
		score = 0;
		cin >> sen;

		for (int i = 0; i < sen.length(); i++)
		{
			if (sen[i] == 'O')
			{
				score += 1;
			}
			else if (sen[i] == 'X')
				score = 0;
			result += score;
		}
		cout << result << '\n';
	}
}