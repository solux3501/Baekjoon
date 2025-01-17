import sys
input = sys.stdin.readline

data = list(input().rstrip())
check = 0
Flag = True
def isP(data, check) :
    if len(data) == 1 :
        return print(2*check+len(data))
    else :
        for i in range(len(data)//2) :
            #print(data[i], data[len(data)-(i+1)])
            if data[i] != data[len(data)-(i+1)] :
                check += 1
                return isP(data[1:], check)
        else :
            return print(2*check+len(data))

isP(data, check)
