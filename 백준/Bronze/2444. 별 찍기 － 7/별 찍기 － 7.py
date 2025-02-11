A = int(input())
for i in range(1, 2*A) :
    print(" "*abs(A-i)+"*"*(2*A-1-abs(2*A-2*i)))