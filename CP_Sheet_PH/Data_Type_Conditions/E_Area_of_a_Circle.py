# area of circle = pi * r^2 and precision is 9 digits after the decimal point
import math
r = float(input())
# print(math.pi)
area = math.pi * r * r
# area = 3.141592653 * r * r
print(f"{area:.9f}") # .9f means 9 digits after the decimal point