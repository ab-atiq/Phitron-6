# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
inp = input()
rev_inp = inp[::-1]
if inp == rev_inp:
    print(rev_inp)
    print("YES")
else:
    print(int(rev_inp))
    print("NO")