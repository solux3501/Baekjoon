#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string sen, tmp = "";
    vector <string> result;
    while (cin >> sen)
        result.push_back(sen);
    cout << result.size();
    return 0;
}