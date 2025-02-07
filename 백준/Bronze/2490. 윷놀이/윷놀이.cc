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

# switch문이 아니라 그냥 '+'한 후 무한 if문으로도 가능
# arr안 쓰고 변수 하나로 sum시키는 방법도 가능(아래와 같음)
/*
for (int j = 0; j < 4; j++) {
            int num;
            cin >> num;
            total += num;
        }
*/
