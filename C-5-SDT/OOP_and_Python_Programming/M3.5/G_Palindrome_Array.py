# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
n = int(input())
st = input()
# wrong ans 
# rev_st = st[::-1] # 10^5 * 2 
# # print(st)
# # print(rev_st)
# if st == rev_st:
#     print("YES")
# else:    
#     print("NO")

lst = st.split()
rev_lst = lst[::-1]
if lst == rev_lst:
    print("YES")
else:
    print("NO")