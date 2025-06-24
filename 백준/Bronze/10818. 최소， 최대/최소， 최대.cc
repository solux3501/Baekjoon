#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int N;

    cin >> N;

    vector <int> arr(N);

    

    for (auto &u : arr)

        cin >> u;

    

    cout << *min_element(arr.begin(), arr.end()) << ' ';

    cout << *max_element(arr.begin(), arr.end()) << endl;

    

    return 0;

}