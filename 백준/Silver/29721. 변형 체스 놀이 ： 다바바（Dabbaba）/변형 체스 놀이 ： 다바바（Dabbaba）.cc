#include <iostream>
#include <set>
#include <vector>

int main(void) {
	int N, M, x, y, tmp;
	std::set<std::pair<int, int>> v;
	std::vector<std::pair<int, int>> check = { {-2, 0}, {2, 0}, {0, 2}, {0, -2} };
	std::cin >> N >> M;
    tmp = M;
	while (M--)
	{
		std::cin >> x >> y;
        v.insert({x, y});
		for (auto& p : check)
			if (x + p.first > 0 && N >= x + p.first && y + p.second > 0 && N >= y + p.second)
				v.insert({ x + p.first , y + p.second });
	}
	std::cout << v.size()-tmp;
	return 0;
}

