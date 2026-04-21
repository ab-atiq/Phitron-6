# solution 1
# int_list = [int(x) for x in input().split()]
# result = 1
# for num in int_list:
#     # result = (result * num) % 100
#     # print(result)
#     result = (result * num)
    
# mod = result % 100
# if(mod < 10):
#     print("0" + str(mod))
# else:
#     print(mod)

# solution 2
int_list = [int(x) for x in input().split()]
result = 1
for num in int_list:
    result = (result * num) % 100
    # print(result)
if(result < 10):
    result = "0" + str(result)
    print(result)
else:
    print(result)
