#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

int main()

{

    ios::sync_with_stdio(false);

    cin.tie(0);  cout.tie(0);

    long long num=0;

    int movie;

    cin >> movie;

    string tmp;

    

    while(true)

    {

        num += 1;

        tmp = to_string(num);

        if (tmp.find("666") != string::npos)

            movie -= 1;

        else

            continue;

            

        if (movie ==0)

            break;    

    }

    cout << tmp;

    return 0;

}