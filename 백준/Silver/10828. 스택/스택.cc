#include <iostream>

#include <string>

#include <stack>

using namespace std;

int main()

{

    int N;

    cin >> N;

    string sen;

    int num;

    stack <int> arr;

    

    for (int i=0;i<N;i++)

    {

        cin >> sen;

        if (sen == "push")

            cin >> num;

        

        if (sen == "push")

            arr.push(num);

        else if (sen=="pop")

        {

            if (arr.size() != 0)

            {

                cout << arr.top() << '\n';

                arr.pop();

            }

            else

                cout << "-1" << '\n';

        }

        else if (sen == "size")

        {

            cout << arr.size() << '\n';

        }

        else if (sen == "empty")

        {

            if (arr.size() !=0)

                cout << "0" << '\n';

            else

                cout << "1" << '\n';    

        }

        else if (sen == "top")

        {

            if (arr.size() !=0)

                cout << arr.top() << '\n';

            else

                cout << "-1" << '\n';    

        }

    }

    

    return 0;

}