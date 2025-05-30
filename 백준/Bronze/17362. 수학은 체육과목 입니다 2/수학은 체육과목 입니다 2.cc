#include <iostream>

using namespace std;

int main()

{

    int N, result;

    cin >> N;

    result = (N-1)%8;

    

    if (result <5)

        cout << result+1;

    else

        cout << 9-result;   

    

    return 0;

}