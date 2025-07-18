import sys

input = sys.stdin.readline

num = int(input())

data = []

stack = []

pm = []

count = 0

i = 1

for _ in range(num) :

    data.append(int(input()))

while count != num :

    if i <= data[count] :

        stack.append(i)

        i += 1

        pm.append("+")

        if stack[-1] == data[count] :

            stack.pop()

            count += 1

            pm.append("-")

    elif i > data[count] :

        if stack[-1] == data[count] :

            stack.pop()

            count += 1

            pm.append("-") 

        else :

            print("NO")

            break           

else :

    for i in pm :

        print(i)              