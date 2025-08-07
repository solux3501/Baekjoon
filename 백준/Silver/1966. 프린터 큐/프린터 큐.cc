#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int T, M, N, max_tmp, cnt;
    cin >> T;
    
    while(T--)
    {
        cin >> M >> N;
        deque <int> arr(M);
        
        for (auto &u: arr)
            cin >> u;
            
        cnt = 0;
        while(true)
        {
            max_tmp = *max_element(arr.begin(), arr.end());
            
            if (arr[0] == max_tmp)
            {
                cnt += 1;
                if ( N==0)
                    break;
                arr.pop_front();    
            }
            else
            {
                arr.push_back(arr[0]);
                arr.pop_front();
            }
            N -= 1;
            if (N<0)
                N += arr.size();
        }
        cout << cnt << '\n';    
    }

    return 0;
}