#include <iostream>

using namespace std;

int main()

{

    int num, result;

    char think;

    cin >> result;

    while (true)

    {

        cin >> think;

        if (think== '=')

            break;

        else

        {

            cin >> num;

            if (think == '+')

                result += num;

            else if (think == '-')

                result -= num;

            else if (think == '*')

                result *= num;

            else if (think == '/' )

                result /= num; 

        }

    }

    cout << result;

    return 0;

}