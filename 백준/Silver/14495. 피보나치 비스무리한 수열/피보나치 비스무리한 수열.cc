#include <iostream>

#include <vector>

using namespace std;

long long fi(long long tmp, vector <long long>& arr)
{
    return arr[tmp - 1] + arr[tmp - 3];
}

int main()
{
    int N;
    cin >> N;
    vector <long long> arr(N + 1, 1);
    arr[0] = 0;
    for (int i = 4; i <= N; i++)
        arr[i] = fi(i, arr);
    cout << arr[N];
    return 0;
}