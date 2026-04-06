# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

n = int(input())
num_list = [int(i) for i in input().split()]
min_idx = max_idx = -1
min_val = 1000000 # 1e6
max_val = -1000000 # -1e6

# solution 1
# cnt_i = -1
# for num in num_list:
#     cnt_i+=1 # 0 index based
#     if num<min_val:
#         min_val = num
#         min_idx = cnt_i
        
#     if num>max_val:
#         max_val=num
#         max_idx=cnt_i
        
# num_list[max_idx]=min_val
# num_list[min_idx]=max_val
# for n in num_list:
#     print(n,end=" ")


# solution 2
for i, num in enumerate(num_list):
    if num<min_val:
        min_val=num
        min_idx=i
        
    if num>max_val:
        max_val=num
        max_idx=i
num_list[min_idx]=max_val
num_list[max_idx]=min_val

for n in num_list:
    print(n, end=" ")