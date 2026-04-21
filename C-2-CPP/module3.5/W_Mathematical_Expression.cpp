// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    char s, eq;
    cin >> a >> s >> b >> eq >> c;
    // scanf("%lld %c %lld %c %lld", &a, &s, &b, &eq, &c); // faster than cin

    long long int res;
    if (s == '+')
    {
        res = a + b;
    }
    else if (s == '-')
    {
        res = a - b;
    }
    else
    {
        res = a * b;
    }

    if (res == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << res << endl;
    }
    return 0;
}

// solution using switch case
#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    long long int result;

    switch (S)
    {
    case '+':
        result = A + B;
        break;
    case '-':
        result = A - B;
        break;
    case '*':
        result = A * B;
        break;
    }

    if (result == C)
        cout << "Yes" << endl;
    else
        cout << result << endl;

    return 0;
}
