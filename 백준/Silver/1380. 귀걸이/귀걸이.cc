#include <iostream>
#include <string>
int main() {
	int zero;
	int sc = 0;
	while (1)
	{
		std::cin >> zero;
		if (zero == 0)
			break;
		else
		{
			sc += 1;
			int num;
			char alpha;
			int arr[100] = { 0, };
			std::string name[100];
			std::string tmp_name;
			std::cin.ignore();
			for (int i = 0; i < zero; i++)
			{
				std::getline(std::cin, tmp_name);
				name[i] = tmp_name;
			}
			
			for (int i = 0; i < 2 * zero - 1; i++)
			{
				std::cin >> num >> alpha;
				arr[num-1] += 1;
			}

			for (int i = 0; i < zero; i++)
			{
				if (arr[i]==1)
					std::cout << sc << " " << name[i] <<std::endl;
			}
			
		}
	}
	return 0;
}