#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sen;
    int tmp, tmp2;
    for (int i=0;i<3;i++)
    {
        cin >> sen;
        if (sen[0] >= '0' && sen[0] <= '9')
        {
            tmp = stoi(sen);
            tmp2 = i;
        }
    }
    tmp += (3-tmp2);
    
    if (tmp % 15 == 0)
        cout << "FizzBuzz";
    else if (tmp %3 == 0 && tmp % 5 !=0)
        cout << "Fizz";
    else if (tmp %3 != 0 && tmp % 5 ==0)
        cout << "Buzz";
    else   
        cout << tmp;            
    return 0;
}