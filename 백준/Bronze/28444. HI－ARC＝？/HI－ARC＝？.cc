#include <iostream>

int main() {
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << arr[0] * arr[1] - arr[2] * arr[3] * arr[4];


	return 0;
}