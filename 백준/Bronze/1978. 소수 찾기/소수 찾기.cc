#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, result =0;
    bool tmp;
    cin >> N;
    vector <int> package(N);
    
    for (int i=0;i<N;i++)
        cin >> package[i];
        
    for (int i=0;i<N;i++)
    {
        tmp = true;
        if (package[i]==1)
            tmp = false;
        for (int j=2;j<package[i];j++)
        {
            if (package[i] % j==0)
            {
                tmp = false;
                break;
            }
        }
        if (tmp)
            result += 1;    
    }    
    cout << result;
    return 0;
}