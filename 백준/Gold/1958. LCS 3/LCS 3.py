import sys
input = sys.stdin.readline

data1 = list(input().rstrip())
data2 = list(input().rstrip())
data3 = list(input().rstrip())
l1, l2, l3 = len(data1), len(data2), len(data3)
visit = [[[0 for i in range(l3+1)] for j in range(l2+1)] for k in range(l1+1)]

for k in range(l1+1) :
    for j in range(l2+1) :
        for i in range(l3+1) :
            if i==0 or j==0 or k==0 :
                continue
            elif data1[k-1] == data2[j-1] and data1[k-1] == data3[i-1] and data3[i-1] == data2[j-1] :
                visit[k][j][i] = visit[k-1][j-1][i-1] + 1
            else :
                visit[k][j][i] = max(visit[k-1][j][i], visit[k][j-1][i], visit[k][j][i-1])
print(max(visit[k][j]))