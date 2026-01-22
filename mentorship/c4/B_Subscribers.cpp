/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/
// https://atcoder.jp/contests/abc304/tasks/abc304_b
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 0 && n < 1000)
    {
        printf("%d\n", n);
    }
    else if (n >= 1000 && n < 10000)
    {
        printf("%d\n", n / 10 * 10); // ones place truncated
    }
    else if (n >= 10000 && n < 100000)
    {
        printf("%d\n", n / 100 * 100); // tens place truncated
    }
    else if (n >= 100000 && n < 1000000)
    {
        printf("%d\n", n / 1000 * 1000); // hundreds place truncated
    }
    else if (n >= 1000000 && n < 10000000)
    {
        printf("%d\n", n / 10000 * 10000); // thousands place truncated
    }
    else if (n >= 10000000 && n < 100000000)
    {
        printf("%d\n", n / 100000 * 100000); // ten-thousands place truncated
    }
    else if (n >= 100000000 && n < 1000000000)
    {
        printf("%d\n", n / 1000000 * 1000000); // hundred-thousands place truncated
    }

    return 0;
}

// small code
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N < 1000)
        printf("%d\n", N);
    else if (N < 10000)
        printf("%d\n", N / 10 * 10);
    else if (N < 100000)
        printf("%d\n", N / 100 * 100);
    else if (N < 1000000)
        printf("%d\n", N / 1000 * 1000);
    else if (N < 10000000)
        printf("%d\n", N / 10000 * 10000);
    else if (N < 100000000)
        printf("%d\n", N / 100000 * 100000);
    else
        printf("%d\n", N / 1000000 * 1000000);

    return 0;
}

// sort of string manipulation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int sz = n.size();
    if (sz <= 3)
    {
        cout << n << endl;
    }
    else
    {
        cout << n[0] << n[1] << n[2];
        for (int i = 3; i < sz; i++)
        {
            cout << "0";
        }
    }
    return 0;
}