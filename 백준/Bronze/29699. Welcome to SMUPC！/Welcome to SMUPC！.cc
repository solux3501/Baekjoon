#include <iostream>

int main(void) {

	char lable[100] = "WelcomeToSMUPC";
	int num;
	std::cin >> num;
	num = (num-1) % 14;
	std::cout << lable[num];
	return 0;
}