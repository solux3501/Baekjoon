#include <iostream>

#include <map>

#include <string>

int main() {

    std::map<char, std::pair<int, int>> arr;    

    char tmp;

    int result = 0;

    int x,y;

    

    for (int i=0;i<4;i++)

    {

        for (int j=0;j<4;j++)

        {

            std::cin >> tmp;

            if (tmp == '.')

                continue;

            else

            {

                x = (int(tmp)-65)/4;

                y = (int(tmp)-65)%4;

                result += (abs(i-x)+abs(j-y));

            }    

        }

    }

    

    std::cout << result;

    return 0;

}