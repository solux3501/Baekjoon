#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

int main()
{
	int N, num, tmp,q_tmp, count;
	int result = 0;
	std::cin >> N >> num;
	std::deque<int> q;
	std::vector<int> v;
	for (int i = 0; i < N; i++)
		q.push_back(i + 1);

	for (int i = 0; i < num; i++)
	{
		std::cin >> tmp;
		v.push_back(tmp);
	}

	for (int i = 0; i < num; i++)
	{
		tmp = v[i];
		count = 0;
		
		while (tmp != q.front())
		{
			q_tmp = q.front();
			q.pop_front();
			q.push_back(q_tmp);
			count += 1;
			//std::cout << q_tmp << ' ' << result << '\n';
		}
		q.pop_front();

		if (count <= q.size() + 1 - count)
			result += count;
		else
			result += q.size() + 1 - count;
	}
	std::cout << result;

	return 0;
}