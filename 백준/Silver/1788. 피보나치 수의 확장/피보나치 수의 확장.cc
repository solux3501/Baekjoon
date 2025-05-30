#include <iostream>
#include <cmath>
using namespace std;

int arr[1000001] = { 0, };
int main(void)
{
    int N;
    cin >> N;
    arr[0] = 0;
    arr[1] = 1;


    if (N == 0)
        cout << 0 << '\n';
    else if (N % 2 == 0 && N < 0)
        cout << -1 << '\n';
    else
        cout << 1 << '\n';

    N = abs(N);
    for (int i = 2; i <= N; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000000;

    cout << arr[N];

    return 0;
}