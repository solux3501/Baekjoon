#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N, tmp, T;
    cin >> N;
    map <int, int> arr;
    for (int i=0;i<N;i++)
    {
        cin >> tmp;
        if (arr[tmp] > 0)
            arr[tmp] += 1;
        else
            arr[tmp] = 1;
    }
    cin >> T;
    vector <int> result;
    
    for (int i=0;i<T;i++)
    {
        cin >> tmp;
        if (arr[tmp] > 0)
            cout << arr[tmp] << ' ';
        else
            cout << 0 << ' ';    
    }

    return 0;
}