#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int tmp;
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector <int> checklist(9);

	for (auto& u : checklist)
		cin >> u;
	tmp = *max_element(checklist.begin(), checklist.end());
	cout << tmp << '\n';
	auto it = find(checklist.begin(), checklist.end(), tmp);
	cout << it - checklist.begin()+1;

	return 0;
}
