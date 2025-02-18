#include <iostream>

#include <string>

using namespace std;

int main(void){

    int cnt = 0;

    string data1, data2;

    bool ex_data1[1001]={false}, ex_data2[1001]={false};

    cin >> data1;

    cin >> data2;

    

    for (int i=0;i<data1.size();i++)

    {

        for (int j=0;j<data2.size();j++)

            {

                if (data1[i]==data2[j] && ex_data1[i]==false && ex_data2[j]==false)

                    {

                    cnt += 1;

                    ex_data1[i]=true;

                    ex_data2[j]=true;

                    break;

                    }

            }

    }

    cout << (data1.size()+data2.size() - 2*cnt);    

    return 0;

}

