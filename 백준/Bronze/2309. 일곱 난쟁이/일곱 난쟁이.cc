#include <iostream>

#include <algorithm>

#include <numeric>

using namespace std;

int main(void)

{

    int arr[9], s=0, e=8, find;

    for (int i=0;i<9;i++)

        cin >> arr[i];

    sort(begin(arr), end(arr));

    find = accumulate(begin(arr), end(arr), -100);

    

    while (1) {

        if (arr[s]+arr[e] == find)

            break;

        else if (arr[s]+arr[e] < find)

            s += 1;

        else

            e -= 1;

        } 

    for (int i=0;i<9;i++)

    {

        if (i != s && i != e) {

            cout << arr[i] << endl;

        }

    }               

    return 0;

}