import sys

input = sys.stdin.readline

from collections import deque

num = int(input())

card = deque([i+1 for i in range(num)])

while len(card) != 1 :

    card.popleft()

    card.rotate(-1)

print(card[0])

    