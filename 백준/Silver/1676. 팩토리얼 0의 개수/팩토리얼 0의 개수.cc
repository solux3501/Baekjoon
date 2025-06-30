#include <iostream>

using namespace std;

int main()

{

    int N, tmp, count=0;

    int arr[2] ={0,};

    long long result = 1;

    cin >> N;

    

    for (int i=1;i<=N;i++)

    {

    tmp = i;

        while(tmp%2==0)

        {

            arr[0] += 1;

            tmp /= 2;

        }

        while(tmp%5==0)

        {

            arr[1] += 1;

            tmp /= 5;

        }

    }

    cout << min(arr[0], arr[1]);

    return 0;

}