# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
# solution 1
# n = int(input())
# digs = input()
# dig_lst = []
# for i in range(n):
#     dig_lst.append(int(digs[i]))
# sum_digs = sum(dig_lst)
# print(sum_digs)

# solution 2
n = int(input())
digs = input()
sum=0
for i in range(n):
    # sum += int(digs[i])
    sum += ord(digs[i]) - ord('0')
print(sum)