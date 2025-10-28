def solution(arr):
    answer = []
    m = arr[0]
    for i in arr :
        if m > i :
            m = i
    if len(arr) == 1 :
        arr[0] = -1
    else :
        arr.remove(m)
    
    return arr