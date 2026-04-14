# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
a,b = [int(x) for x in input().split()]
digs = input()
if digs[a] == '-':
    chk = True # check other digits without '-'
    for i in range(a):
        if digs[i] >= '0' and digs[i] <= '9':
            pass
        else:
            chk = False
            break
    for i in range(a+1, a+b+1):
        if digs[i] >= '0' and digs[i] <= '9':
            pass
        else:
            chk = False
            break
    if chk:
        print("Yes")
    else:        
        print("No")
        
else:
    print("No")