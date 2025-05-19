#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
	std::vector<int> v;
	v.push_back(2);
	for (int i=2;i<1000;i++)
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j == i - 1)
				v.push_back(i);
		} // 모든 소수를 v에 삽입

	int N, tmp;
	bool check;
	std::cin >> N;
	for (int z = 0; z < N; z++)
	{
		check = false;
		std::cin >> tmp;
		for (int i = 0; v[i] < v.back(); i++)
			for (int j = 0; v[j] <= v[i]; j++)
				for (int k = 0; v[k] <= v[j]; k++)
				{
					if (tmp == (v[i] + v[j] + v[k]) && check == false)
					{
						std::cout << v[k] << " " << v[j] << " " << v[i] << std::endl;
						check = true;
						break;
					}
				}
		if (check == false)
			std::cout << 0 << std::endl;
	}
	return 0;
}