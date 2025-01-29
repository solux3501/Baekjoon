import sys
from collections import deque
input = sys.stdin.readline

n, w, L = map(int, input().split())
data = deque(map(int, input().split()))
bridge_cost = [0] * w
time = 0
i = 0
while data :
    if sum(bridge_cost[1:]) + data[0] > L :
        bridge_cost = bridge_cost[1:]
        bridge_cost.append(0)
    else :
        bridge_cost = bridge_cost[1:]
        bridge_cost.append(data.popleft())
    time += 1
print(time+w)


