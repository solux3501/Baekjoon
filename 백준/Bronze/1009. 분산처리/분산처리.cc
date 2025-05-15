#include <iostream>

using namespace std;

int main(void) 

{

    int num;

    cin >> num;

    

    for (int i=0;i<num;i++)

    {

        int a, b, result=1;

        cin >> a >> b;

        

        for (int j=0;j<b;j++)

        {

            result = (result*a)%10;

        }

        if (result==0)

            cout << 10 <<endl;

        else     

            cout << result <<endl;

    }

    return 0;

}
완료5543, 5354
