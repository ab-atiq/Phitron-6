# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
sz = int(input())
num_lst = [int(x) for x in input().split()]

cnt = 0
flag = True
while flag:
    total_num_div = 0
    for i, n in enumerate(num_lst):
        # pass
        if n%2==0:
            total_num_div+=1
            num_lst[i]=n/2
        else:
            break
    if total_num_div == sz:
        cnt += 1
    else:
        flag = False
        
print(cnt)