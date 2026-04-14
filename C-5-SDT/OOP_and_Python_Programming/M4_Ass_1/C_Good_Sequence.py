# https://atcoder.jp/contests/arc087/tasks/arc087_a
n = int(input())
num_lst = [int(x) for x in input().split()]
# print(num_lst)
freq = {}
for num in num_lst:
    freq[num] = freq.get(num,0) + 1
# print(freq)
need_remove = 0
for key, val in freq.items():
    if(key==1):
        need_remove += freq[key] - 1 # just keep one 1, remove other all 1
        
    extra = freq[key] % key
    need_remove += extra
print(need_remove)