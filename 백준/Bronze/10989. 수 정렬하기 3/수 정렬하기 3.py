import sys

input = sys.stdin.readline

num = int(input())

list1 = [[i, 0] for i in range(10001)]

for i in range(num) :

    tmp = int(input())

    list1[tmp][1] += 1

        

for i in range(len(list1)) :

    while list1[i][1] > 0 :

        print(int(list1[i][0]))

        list1[i][1] -= 1