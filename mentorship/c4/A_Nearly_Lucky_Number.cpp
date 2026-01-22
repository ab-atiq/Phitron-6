/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/110/A
#include <stdio.h>

int isLucky(long long x)
{
    if (x == 0)
        return 0;
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
            return 0;
        x /= 10;
    }
    return 1;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long cnt = 0;

    while (n > 0)
    {
        int d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n /= 10;
    }

    if (isLucky(cnt))
        printf("YES");
    else
        printf("NO");

    return 0;
}

// optimized code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    int cnt_lucky_num = 0;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            cnt_lucky_num++;
        }
        n = n / 10;
    }

    // maximum input 10^18 digit can be maximum 19 digits
    // 1 to 19 lucky digits possible only 4 or 7
    if (cnt_lucky_num == 4 || cnt_lucky_num == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

// another approach using string
#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long x)
{
    if (x == 0)
        return false;
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main()
{
    string n;
    cin >> n;

    long long cnt = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
            cnt++;
    }

    cout << (isLucky(cnt) ? "YES" : "NO");
    return 0;
}

// character array
#include <stdio.h>
#include <string.h>

int isLucky(long long x)
{
    if (x == 0)
        return 0;
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
            return 0;
        x /= 10;
    }
    return 1;
}

int main()
{
    char n[25];
    scanf("%s", n);

    long long cnt = 0;

    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == '4' || n[i] == '7')
            cnt++;
    }

    if (isLucky(cnt))
        printf("YES");
    else
        printf("NO");

    return 0;
}
