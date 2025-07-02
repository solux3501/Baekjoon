#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    vector <int> num(M+1);
    vector <bool> check(M+1, true);
    
    for (int i=0;i<=M;i++)
        num[i] = i;
    
    check[0] = false;
    check[1] = false;
    
    for (int i=2;i<=M;i++)
        for (int j=1;j<=M;j++)
        {    
            if (i*j > M)
                break;
            else
            {
                if (j==1)
                    continue;
                else
                    check[i*j] = false;    
            }    
        }        
    
    for (int i=N;i<=M;i++)
        if(check[i])
            cout << i << '\n';
    
    return 0;
}