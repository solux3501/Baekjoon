#include <iostream>

using namespace std;

int main(void)

{

    long s, e;

    cin >> s >> e;

    if (s>e)

        swap(s, e);

    

    if (e-s-1 > 0)

        cout << e-s-1 << endl;

    else 

        cout << 0 << endl;    

    for (long i=s+1;i<e;i++)

    {

        cout << i << " ";

    }

    return 0;

}