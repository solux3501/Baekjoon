#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, tmp_len;
	string sen;
	set <pair<int, string>> arr;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> sen;
		tmp_len = sen.length();
		arr.insert({ tmp_len, sen });
	}

	for (auto& u : arr)
		cout << u.second << endl;

	return 0;
}