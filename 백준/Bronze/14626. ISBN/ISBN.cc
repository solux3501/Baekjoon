#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int tmp = 0, check =0, result = 0;
    string isbn;
    cin >> isbn;
    
    for (int i=0;i<isbn.length();i++)
    {
        if (isbn[i] != '*')
        {
            if (i%2==0)
                tmp += (int)isbn[i] - '0';
            else
                tmp += 3 * ((int)isbn[i] - '0');
        }
        else
            check = i;
    }
    while (true)
    {
        if (check %2==0)
        {
            if ((tmp+result)%10 ==0)
                break;
        }
        else
        {
            if ((tmp+3*result)%10 ==0)
                break;
        }
        result += 1;
    }
    cout << result;
    return 0;
}