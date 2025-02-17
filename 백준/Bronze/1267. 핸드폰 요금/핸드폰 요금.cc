#include <iostream>

#include <cmath>

using namespace std;

int main(void)

{

    float Arr[20], num;

    int Y_cost = 0, M_cost = 0;

    cin >> num;

    

    for (int i=0;i<num;i++)

        cin >> Arr[i];

    

    for (int i=0;i<num;i++)

    {

        Y_cost += floor(Arr[i]/30+1) * 10;

        M_cost += floor(Arr[i]/60+1) * 15;

    }    

    

    if (Y_cost > M_cost)

        cout << "M " << M_cost;

    else if (Y_cost < M_cost)

        cout << "Y " << Y_cost;

    else if (Y_cost == M_cost)

        cout << "Y M " << Y_cost;

    return 0;

}