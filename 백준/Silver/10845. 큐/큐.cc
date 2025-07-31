#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    int N, num;
    cin >> N;
    string sen;
    deque <int> arr;
    
    for (int i=0;i<N;i++)
    {
        cin >> sen;
        if (sen == "push")
        {
            cin >> num;
            arr.push_back(num);
        }
        else if (sen == "front")
        {
            if (arr.size() >0)
                cout << arr.front() << '\n';
            else
                cout << "-1" << '\n';    
        }
        else if (sen == "back")
        {
            if (arr.size() > 0)
                cout << arr.back() << '\n';
            else
                cout << "-1" << '\n';        
        }
        else if (sen == "size")
            cout << arr.size() << '\n';
        else if (sen == "pop")
        {
            if (arr.size() > 0)
            {
                cout << arr.front() << '\n';
                arr.pop_front();
            }
            else
                cout << "-1" << '\n';
        }
        else if (sen == "empty")
        {
            if (arr.size()==0)
                cout << "1" << '\n';
            else
                cout << "0" << '\n';       
        }
    }

    return 0;
}