#include <iostream>
using namespace std;

int main(void) {
	
	for (int j = 0; j < 3; j++)
	{
		int arr[4];
		int count = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < 4; i++)
		{
			if (arr[i] == 0)
			{
				count += 1;
			}
		}

		switch (count)
		{
		case 0:
			cout << "E" << endl;
			break;
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		case 4:
			cout << "D" << endl;
			break;
		}
	}
	return 0;
}