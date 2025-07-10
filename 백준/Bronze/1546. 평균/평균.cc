#include <iostream>

#include <cmath>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int N, setting;

    float avg = 0;

    cin >> N;

    vector <float> arr(N);

    

    for (auto &u : arr)

        cin >> u;

        

    setting = *max_element(arr.begin(), arr.end());

    

    for (auto &u : arr)

    {

        u = (u/setting) * 100;

        avg += u;

    }    

    avg = avg / N;

    cout << avg;

    return 0;

}