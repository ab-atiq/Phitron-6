# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

lst = input().split()
for i, word in enumerate(lst):
    if i == len(lst) - 1:
        print(word[::-1])    
    else:
        print(word[::-1], end=' ')