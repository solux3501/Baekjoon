#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, tmp = 0, result = 0;
    string sen;
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        tmp = i;
        sen = to_string(i);

        for (int j = 0; j < sen.length(); j++)
            tmp += (sen[j] - '0');

        if (tmp == N) {
            result = i;
            break;
        }
            
    }
    cout << result;

    return 0;
}