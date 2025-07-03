#include <iostream>

#include <deque>

using namespace std;

int main()

{

    int N, tmp;

    cin >> N;

    deque <int> arr(N);

    for (int i=0;i<N;i++)

        arr[i] = i + 1;

        

    while (arr.size() !=1)

    {

        arr.pop_front();

        tmp = arr.front();

        arr.pop_front();

        arr.push_back(tmp);

    }    

    cout << arr.front();

    return 0;

}