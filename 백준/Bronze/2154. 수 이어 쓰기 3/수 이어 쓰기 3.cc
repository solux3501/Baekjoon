#include <iostream>
#include <string>

int main()
{
	int num;
	std::string loc;
	std::string origin;
	std::cin >> num;
	int result=0, check;
	bool go=true;
	origin = std::to_string(num);

	for (int i = 1; i <= num; i++)
		loc += std::to_string(i);
	
	for (int i = 0; i < loc.size(); i++)
	{

		for (int j = 0; j < origin.size(); j++)
		{
			check = 0;
			while (loc[i+check] == origin[j+check])
			{
				check += 1;
				if (check == origin.size())
				{
					go = false;
					result = i+1;
					break;
				}
			}
			if (!go) break;
		}
		if (!go) break;
	}
	std::cout << result;

	return 0;
}