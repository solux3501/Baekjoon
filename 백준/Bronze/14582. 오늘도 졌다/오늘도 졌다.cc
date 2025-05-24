#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector <int> v1(9);
	vector <int> v2(9);
	vector <int> v3(18);
	bool win = false, lose = false;

	for (int i = 0; i < 9; i++)
		cin >> v1[i];
	for (int i = 0; i < 9; i++)
		cin >> v2[i];

	for (int i = 0; i < v3.size(); i++)
		if (i % 2 == 0)
		{
			if (i == 0)
				v3[i] = v1[i / 2];
			else
				v3[i] = v3[i - 1] + v1[i / 2];
		}
		else
			v3[i] = v3[i - 1] - v2[i / 2];

	for (int i = 0; i < v3.size(); i++)
	{
		if (v3[i] > 0)
			win = true;
		if (win && v3[i] < 0)
			lose = true;
	}
	if (lose && v3[17] < 0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}