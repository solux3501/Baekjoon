#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N, tmp, sum = 0;
    deque <long long> arr;
    cin >> N;
    
    for (int i=0;i<N;i++)
    {
        cin >> tmp;
        if (tmp ==0)
            arr.pop_back();
        else
            arr.push_back(tmp);    
    }
    
    for (int i=0;i<arr.size();i++)
        sum += arr[i];
    cout << sum;
    return 0;
}