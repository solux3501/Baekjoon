#include <iostream>

#include <algorithm>

#include <set>

#include <vector>

using namespace std;

int main()

{

    ios::sync_with_stdio(false);

    cin.tie(0);  cout.tie(0);

    int A, B, tmp;

    cin >> A;

    vector <int> arr(A);

    set <int> answer;

    

    for (int i=0;i<A;i++)

        cin >> arr[i];

        

    for (int i=0;i<A;i++)

        answer.insert(arr[i]);

        

    cin >> B;

    for (int i=0;i<B;i++)

    {

        cin >> tmp;

        if (answer.find(tmp) != answer.end())

            cout << 1 << '\n';

        else

            cout << 0 << '\n';    

    }        

    return 0;

}