#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int N, num1, num2, num3, tmp;
	cin >> N;
	map <int, int> arr1, arr2, arr3;
	string sentence;
	char sen_temp;
	bool check;
	set <string> result;

	for (int i = 0; i < N; i++)
	{
		result.clear();
		arr1.clear();
		arr2.clear();
		arr3.clear();
		cin >> num1;

		for (int j = 0; j < num1; j++)
		{
			cin >> tmp;
			arr1[j] = tmp;
		}

		cin >> num2;

		for (int j = 0; j < num2; j++)
		{
			cin >> tmp;
			arr2[j] = tmp;
		}

		cin >> num3;

		for (int j = 0; j < num3; j++)
		{
			cin >> tmp;
			arr3[j] = tmp;
		}


		for (int x = 0; x < arr1.size(); x++)
			for (int y = 0; y < arr2.size(); y++)
				for (int z = 0; z < arr3.size(); z++)
				{
					check = true;
					//cout << sentence << endl;
					sentence = (to_string)(arr1[x] + arr2[y] + arr3[z]);
					for (char sen_temp : sentence)
						if (sen_temp == '5' || sen_temp == '8')
							continue;
						else
						{
							check = false;
							break;
						}
					if (check)
						result.insert(sentence);
				}
		cout << result.size() << '\n';
	}


	return 0;
}