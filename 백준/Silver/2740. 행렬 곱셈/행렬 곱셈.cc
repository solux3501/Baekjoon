#include <iostream>
#include <vector>
#include <string>

int main() {
    int row1, col1;
    std::cin >> row1 >> col1;
    std::vector<std::vector<int>> v1(row1, std::vector<int> (col1));

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++) 
        {
            std::cin >> v1[i][j];
        }
    }
    int row2, col2;
    std::cin >> row2 >> col2;
    std::vector <std::vector<int>> v2(row2, std::vector<int> (col2));
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            std::cin >> v2[i][j];
        }
    }
    std::vector <std::vector<int>> v3(row1, std::vector<int>(col2));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                v3[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            std::cout << v3[i][j] << " ";
        }
		std::cout << std::endl;
    }


    return 0;
}