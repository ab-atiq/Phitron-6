# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
def is_lucky(num):
    num_str = str(num)
    for digit in num_str:
        # if digit not in ['4', '7']:
        #     return False
        if digit != '4' and digit != '7':
            return False
    return True


ab = input().split()
a = int(ab[0])
b = int(ab[1])
lucky_numbers = []

for i in range(a, b + 1):
    if is_lucky(i):
        lucky_numbers.append(i)
        
if len(lucky_numbers) == 0:
    print(-1)
else:
    # print(' '.join(map(str, lucky_numbers)))
    for num in lucky_numbers:
        print(num, end=' ')