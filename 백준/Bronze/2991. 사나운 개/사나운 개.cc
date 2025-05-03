#include <iostream>
#include <vector>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int A, B, C, D;
	int tmp, dog;
	std::vector<int> v;

	std::cin >> A >> B >> C >> D;
	for (int i = 0; i < 3; i++) {
		std::cin >> tmp;
		v.push_back(tmp-1);
	}
	B += A;
	D += C;

	for (int i = 0; i < v.size(); i++) {
		dog = 0;
		if (v[i] % B < A)
			dog += 1;
		if (v[i] % D < C)
			dog += 1;
		std::cout << dog << std::endl;

	}
    return 0;
}