#include <iostream>

int main(void)
{
	int J, Y;
	std::cin >> J >> Y;

	if (J == 0)
	{
		if (Y == 0)
		{
			std::cout << "=";
		}
		else if (Y == 5)
		{
			std::cout << "<";
		}
		else
		{
			std::cout << ">";
		}
	}
	else if (J == 2)
	{
		if (Y == 0)
		{
			std::cout << "<";
		}
		else if (Y == 2)
		{
			std::cout << "=";
		}
		else
		{
			std::cout << ">";
		}
	}
	else if (J == 5)
	{
		if (Y == 2)
		{
			std::cout << "<";
		}
		else if (Y == 5)
		{
			std::cout << "=";
		}
		else
		{
			std::cout << ">";
		}
	}
	else
	{
		if (Y == 0 || Y == 2 || Y == 5)
		{
			std::cout << "<";
		}
		else
		{
			std::cout << "=";
		}
	}

	return 0;
}