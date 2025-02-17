#include <iostream>

#include <algorithm>

using namespace std;

int main(void)

{

    int num, arr[2000001], result, cnt=0;

    cin >> num;

    int s=0, e=num-1;

    for (int i=0;i<num;i++)

        cin >> arr[i];

    cin >> result;

    sort(arr, arr+num);

    

    while (1) 

    {

        if (s >= e) 

            break;

        else if (arr[s]+arr[e] == result) {

            cnt += 1;

            s += 1;

            e -= 1;

            }

        else if (arr[s]+arr[e] > result)

            e -= 1;

        else if (arr[s]+arr[e] < result)

            s += 1;    

    }

    cout << cnt;

    

    return 0;

}