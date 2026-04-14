# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

# solution 1 - using variables to store last two Fibonacci numbers
# n = int(input())
# # base cases
# if n == 1:
#     print(0)
# elif n == 2:
#     print(1)
# else:
#     a = 0   # fib(1)
#     b = 1   # fib(2)
    
#     for i in range(3, n + 1):
#         c = a + b
#         a = b
#         b = c
    
#     print(b)
    
# solution 2 - using list to store Fibonacci numbers
n = int(input())

fib = [0, 1]

for i in range(2, n):
    fib.append(fib[i-1] + fib[i-2])

print(fib[n-1])