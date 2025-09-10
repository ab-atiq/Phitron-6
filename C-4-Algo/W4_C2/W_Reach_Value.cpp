/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2025-03-03   21:33:47
 * Source:
 */

// bottom up approach
#include <bits/stdc++.h>
using namespace std;

long long int input;

bool fun(long long int n)
{
    if (n > input)
        return false;

    if (n == input)
        return true;

    bool t1 = fun(n * 10);
    bool t2 = fun(n * 20);

    return t1 || t2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> input;
        if (fun(1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

// top down approach
#include <bits/stdc++.h>
using namespace std;

long long int input;

bool fun(long long int n)
{
    if (n == 1) // base case: reached starting value
        return true;

    if (n < 1) // went below 1, not possible
        return false;

    bool t1 = false, t2 = false;

    if (n % 10 == 0) // only divide if divisible
        t1 = fun(n / 10);

    if (n % 20 == 0)
        t2 = fun(n / 20);

    return t1 || t2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> input;
        if (fun(input))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}


/* 
input:
5
1
2
10
25
200

output:
YES
NO
YES
NO
YES

*/