#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, a=0, num;
    cin >> N;
    int b = N;
    while (a <= N)
    {
        num = -1;
        
        if (b%5==0 && a%3==0)
        {
            num = b/5 + a/3;
            break;
        }
        a += 1;
        b -= 1;
    }
    cout << num;
    
    return 0;
}