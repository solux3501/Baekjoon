from collections import Counter
import sys
input = sys.stdin.readline

n = int(input())
list1 = list(map(int, input().split()))
counter = Counter(list1)

m = int(input())
list2 = list(map(int, input().split()))

for i in range(m) :
    if list2[i] in counter :
        print(counter[list2[i]], end=' ')
    else :
        print("0", end=' ')