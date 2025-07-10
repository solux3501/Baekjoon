#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    deque <int> yose(N);
    
    for (int i=0;i<N;i++)
        yose[i] = i+1;
    
    cout << '<';
    
    while (yose.size() != 1)
    {
        for (int i=0;i<K-1;i++)
        {
            yose.push_back(yose.front());
            yose.pop_front();
        }
        cout << yose.front() << ", ";
        yose.pop_front();
    }    
    cout << yose.front() << '>';

    return 0;
}