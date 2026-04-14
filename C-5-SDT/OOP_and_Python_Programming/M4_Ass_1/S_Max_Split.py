# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
# my solution
st = input() 

l_cnt = r_cnt = 0
new_str_list = []
start_idx = 0
st+='E' # just for index out of range
for i in range(0, len(st)):
    if(l_cnt==r_cnt and l_cnt!=0 and r_cnt!=0):
        # new_str_list.append(st[start_idx:l_cnt+r_cnt+start_idx])
        # start_idx = l_cnt + r_cnt
        new_str_list.append(st[start_idx:i])
        start_idx = i
        l_cnt = r_cnt = 0
        # continue
        
    if(st[i]=='L'):
        l_cnt += 1
    elif(st[i]=='R'):
        r_cnt += 1

print(len(new_str_list))
for s in new_str_list:
    print(s)
    
# chatgpt - 1
""" 
st = input()

l_cnt = r_cnt = 0
new_str_list = []
start_idx = 0

for i in range(len(st)):
    if st[i] == 'L':
        l_cnt += 1
    elif st[i] == 'R':
        r_cnt += 1

    # যখন balanced হবে
    if l_cnt == r_cnt and l_cnt != 0:
        new_str_list.append(st[start_idx:i+1])
        start_idx = i + 1
        l_cnt = r_cnt = 0

# output
print(len(new_str_list))
for s in new_str_list:
    print(s) 
"""


# chatgpt - 2 - optimize solution
""" 
s = input().strip()

count = 0
current = ""
result = []

for ch in s:
    current += ch
    
    if ch == 'L':
        count += 1
    else:  # ch == 'R'
        count -= 1
    
    # যখন balanced হয়ে যায়
    if count == 0:
        result.append(current)
        current = ""

# output
print(len(result))
for part in result:
    print(part)
"""