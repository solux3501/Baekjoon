#include <iostream>

#include <vector>

#include <cmath>

using namespace std;

int main()

{

    int N, M, tmp;

    int result;

    cin >> N >> M;

    vector <int> x(1);

    vector <int> y(1);

    

    for (int i=1;i<N;i++)

    {

        cin >> tmp;

        x.push_back(tmp+x[i-1]);

        //cout << x[i] << '\n';

    }

    

    for(int i=1;i<M;i++)

    {

        cin >> tmp;

        y.push_back(tmp+y[i-1]);

    }

    

    result = ceil(sqrt(pow(x[N-1],2) +pow(y[M-1],2)));   

    cout  << result;

    

    return 0;

}
2문제 완료, 3문지 완료
