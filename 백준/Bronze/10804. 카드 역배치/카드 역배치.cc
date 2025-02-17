#include <iostream>

#include <algorithm>

using namespace std;

int main(void)

{

    int arr[20], s, e;

    for (int i=0;i<20;i++) 

    

    {

        arr[i] = i+1;

    }

    

    for (int i=0;i<10;i++)

    {

        cin >> s;

        cin >> e;

        reverse(begin(arr)+s-1, begin(arr)+e);        

    }

    

    for (int i=0;i<20;i++)

    {

        cout << arr[i] << " ";

    }

    

    return 0;

}