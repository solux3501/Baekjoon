#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, num;
    string sen;
    cin >> T;
    
    while(T--)
    {
        cin >> num >> sen;
        
        for(int i=0;i<sen.size();i++)
            for (int j=0;j<num;j++)
                cout << sen[i];
            cout << endl;    
    }     

    return 0;
}