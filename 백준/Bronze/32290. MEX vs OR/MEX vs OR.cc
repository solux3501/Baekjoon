#include <iostream>
using namespace std;

int main() {
	int l, r, x;
	int arr[1001];
	int result;
	int check = 0;
	cin >> l >> r >> x;

	for (int i = l; i < r+1 ; i++)
		arr[i] = (i | x);
	for (int i = l; i < r + 1; i++)
	{
		if (check == arr[i])
			check += 1;
	}
	cout << check;

	return 0;
}