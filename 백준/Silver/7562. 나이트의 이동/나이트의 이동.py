import sys
from collections import deque

input = sys.stdin.readline
num = int(input())

dx = [-2, -1, 1, 2, 2, 1, -1, -2]
dy = [1, 2, 2, 1, -1, -2, -2, -1]

for i in range(num) :
    size = int(input())
    visit = [[0 for i in range(size)] for j in range(size)]
    x, y = map(int, input().split())
    tar_x, tar_y = map(int, input().split())
    cnt = 0

    que = deque()
    que.append([x, y])
    visit[x][y] = 0

    while que :
        temp_x, temp_y = que.popleft()
        if x == tar_x and y == tar_y :
            break

        for i in range(8) :
            if 0 <= temp_x + dx[i] < size and 0 <= temp_y + dy[i] < size and visit[temp_x + dx[i]][temp_y + dy[i]] == 0 :
                visit[temp_x + dx[i]][temp_y + dy[i]] = visit[temp_x][temp_y] + 1
                que.append([temp_x + dx[i], temp_y + dy[i]])
    print(visit[tar_x][tar_y])

