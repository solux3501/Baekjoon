#include <iostream>

#include <deque>

#include <cmath>

#include <algorithm>

using namespace std;

int main()

{

    int N;

    float tmp, result = 0;

    cin >> N;

    deque <int> arr(N);

    tmp = round(0.15*N);

    

    for (auto &u : arr)

        cin >> u;

        

    sort(arr.begin(), arr.end());

    

    while(tmp--)

    {

        arr.pop_back();

        arr.pop_front();

    }    

    for (auto &u : arr)

        result += u;

    if (arr.size() >0)    

        result /= arr.size();

    

    cout << round(result);    

    return 0;

}