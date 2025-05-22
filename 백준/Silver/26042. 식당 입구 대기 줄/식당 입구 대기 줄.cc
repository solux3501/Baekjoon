#include <iostream>

#include <queue>

int main()

{

    int N, check, num; 

    int size = 0, stu = 100000;

    std::queue <int> q;

    std::cin >> N;

    for (int i=0;i<N;i++)

    {

         std::cin >> check;

         if (check ==1 )

         {

             std::cin >> num;

             q.push(num);

         }

         else

              q.pop();

         

         if (size < q.size())

         {

             size = q.size();

             stu = q.back();

         }

         else if (size == q.size())

             if (stu > q.back())

                 stu = q.back();     

    }

    std::cout << size << ' ' << stu;

    

    return 0;

}