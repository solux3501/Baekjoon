import sys
from collections import deque
input = sys.stdin.readline
que = deque()

n, m = map(int,input().split()) # 주차 공간, 차량 수 입력
cost = 0

Parking = []
visit = [0] * (n)
for i in range(n) :
    Parking.append(int(input()))  # 주차 공간 비용

info_car = [0]
for i in range(m) :
    info_car.append(int(input()))  # info_car은 차 번호, 무게 저장

for i in range(2*m) :
    car_num = int(input()) #차량 번호 확인
    if car_num > 0 :
        for j in range(n) :
            if visit[j] > 0 :
                continue
            else :
                cost += Parking[j] * info_car[car_num]
                visit[j] = car_num
                break
        else :
            que.append(car_num)
    else :
        car_num = -car_num
        for j in range(n) :
            if visit[j] == car_num :
                if que :
                    temp = que.popleft()
                    cost += Parking[j] * info_car[temp]
                    visit[j] = temp
                else :
                    visit[j] = 0
print(cost)