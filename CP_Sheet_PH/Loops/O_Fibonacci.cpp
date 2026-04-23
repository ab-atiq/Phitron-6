/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        long long int a = 0, b = 1, cur;
        for (int i = 3; i <= n; i++)
        {
            cur = a + b;
            a = b;
            b = cur;
        }
        cout << b << endl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> fib = {0, 1};

    for (int i = 2; i < n; i++)
    {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    cout << fib[n - 1];

    return 0;
} */