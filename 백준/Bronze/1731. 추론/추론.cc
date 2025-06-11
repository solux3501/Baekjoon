#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long N, result;
    int check;
    cin >> N;
    vector <int> arr(N);
    
    for (auto &u : arr)
        cin >> u;
    
    auto it = arr.end()-1;
    result = *it;
    
    if (double(arr[2])/arr[1] == double(arr[1])/arr[0])
        result *= double(arr[2]/arr[1]);
    else if (arr[2]-arr[1] == arr[1]-arr[0])
        result += (arr[2]-arr[1]);
    cout << result;    
        
    return 0;
}