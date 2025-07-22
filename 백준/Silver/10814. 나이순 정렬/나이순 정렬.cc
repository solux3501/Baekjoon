#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    map<int, vector<string>> arr;
    int age;
    string name;
    
    for (int i=0;i<N;i++)
    {
        cin >> age >> name;
        arr[age].push_back(name);
    }
    
    for (auto u: arr)
    {
        for (auto u2 : u.second)
        {
            cout << u.first << ' ' << u2 << '\n';
        }
    }
    
    return 0;
}