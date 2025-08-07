#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int N;
    vector <int> arr(6);
    int t,p , t_m = 0;
    
    cin >> N;
    for(auto &u: arr)
        cin >> u;
    cin >> t >> p;
    
    for (auto &u: arr)
        t_m += ceil(u* 1.0/t);
        
    cout << t_m << '\n';
    cout << N/p << ' ' << N%p;        

    
    return 0;
}