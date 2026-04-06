# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

n, q = input().split()
n, q = int(n), int(q)

arr = [int(x) for x in input().split()]
prefix_sum = [0] * (n + 1) # [0, 0, 0, 0, 0, 0, 0] n+1 size with 0s, and 1-index list
# print(prefix_sum)
for i in range(1, n + 1):
    prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1]

for _ in range(q):
    l, r = input().split()
    l, r = int(l), int(r)
    result = prefix_sum[r] - prefix_sum[l - 1]
    print(result)