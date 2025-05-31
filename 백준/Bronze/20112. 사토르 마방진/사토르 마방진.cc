#include <iostream>
#include <string>

int main()
{
	int N;
	std::string tmp;
	bool result = true;
	char arr[101][101];
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		for (int j = 0; j < tmp.length(); j++)
			arr[i][j] = tmp[j];
	}
	
	for (int i=0;i<N;i++)
		for (int j = i+1; j < N; j++)
		{
			if (arr[i][j] != arr[j][i])
			{
				result = false;
				break;
			}
		}

	if (result == true)
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}