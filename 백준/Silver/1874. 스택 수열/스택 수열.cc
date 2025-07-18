#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int N, tmp, check = 1;
    cin >> N;
    stack <int> s;
    vector <char> result;
    
    for (int i=0;i<N;i++)
    {
        cin >> tmp;
        
        while (check <= tmp)
        {
            s.push(check);
            check += 1;
            result.push_back('+');
        }
        
        if (tmp == s.top())
        {
            s.pop();
            result.push_back('-');
        }
    }
    if (s.size()==0)
        {
            for (int i=0;i<result.size();i++)
                cout << result[i] << '\n';
        }
    else
        cout << "NO";
    return 0;
}