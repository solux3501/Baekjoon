import sys
input = sys.stdin.readline

bag1 = []
bag2 = []

n, k = map(int, input().split())

for i in map(int, input().split()):
    bag1.append(i)

for i in map(int, input().split()):
    bag2.append(i)

p1 = sum(bag1)
p2 = sum(bag2)


for x in range(k):
    l1 = len(bag1)
    l2 = len(bag2)
    if l1 == 0 and l2 == 0:
        break

    if l1 == 0 or (p2 >= p1):
        p2 -= bag2[-1]
        bag2.pop()
    else :
        p1 -= bag1[-1]
        bag1.pop()


print(max(p1, p2))

