#include <iostream>

#include <algorithm>

#include <numeric>

using namespace std;

int main(void)

{

    int arr[5], sum;

    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<5;i++)

    {

        cin >> arr[i];

    }

    sort(arr, arr+size);

    sum = accumulate(arr, arr+size, 0);

    

    cout << sum/size << endl;

    cout << arr[2] << endl;

    return 0;

}