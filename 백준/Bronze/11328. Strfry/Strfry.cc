#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int arr[26];
	bool result;
	std::string str, str_copy;
	for (int i = 0; i < N; i++) {
		fill(begin(arr), end(arr), 0);
		result = true;
		cin >> str >> str_copy;
		for (int j = 0; j < str.length(); j++)
			arr[int(str[j]) - 97] += 1;
		for (int j = 0; j < str_copy.length(); j++)
			arr[int(str_copy[j]) - 97] -= 1;

		for (int j = 0; j < 26; j++)
			if (arr[j] == 0)
				continue;
			else {
				cout << "Impossible\n";
				result = false;
				break;
			}
		if (result)
			cout << "Possible\n";
	}
	return 0;
}