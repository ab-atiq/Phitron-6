# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
tc = int(input())

while tc > 0:
    tc -= 1
    
    n = int(input())
    
    # 1-based indexing (same as your C++ code)
    arr = [0] * (n + 1)
    
    values = list(map(int, input().split()))
    for i in range(1, n + 1):
        arr[i] = values[i - 1]
    
    # find smallest result
    # small_sum = float('inf')
    small_sum = 10**9
    
    for i in range(1, n):
        for j in range(i + 1, n + 1):
            cal = arr[i] + arr[j] + (j - i)
            small_sum = min(small_sum, cal)
    
    print(small_sum)