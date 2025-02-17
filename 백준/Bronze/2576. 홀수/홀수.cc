#include <iostream>

using namespace std;

int main(void)

{

    int Arr[7];

    int min_odd = 100, sum_odd = 0;

    for (int i=0;i<7;i++)

        cin >> Arr[i];

    

    for (int i=0;i<7;i++) {

        if (Arr[i]%2 == 1) {

            sum_odd += Arr[i];

            min_odd = min(min_odd, Arr[i]);

        }

    }

    if (sum_odd == 0) {

        cout << -1;

    } else {

        cout << sum_odd << endl;

        cout << min_odd;

    }     

        

    return 0;

}