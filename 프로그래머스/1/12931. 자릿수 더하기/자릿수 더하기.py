def solution(n):
    l1 = list(map(int, str(n)))
    answer = 0
    for i in l1:
        answer += i

    return answer