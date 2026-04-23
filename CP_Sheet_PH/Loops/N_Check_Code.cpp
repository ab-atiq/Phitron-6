/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string digs;
    cin >> digs;

    if (digs[a] == '-')
    {
        bool chk = true;

        // Check first part
        for (int i = 0; i < a; i++)
        {
            if (digs[i] >= '0' && digs[i] <= '9')
            {
                continue;
            }
            else
            {
                chk = false;
                break;
            }
        }

        // Check second part
        for (int i = a + 1; i < a + b + 1; i++)
        {
            if (digs[i] >= '0' && digs[i] <= '9')
            {
                continue;
            }
            else
            {
                chk = false;
                break;
            }
        }

        if (chk)
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
 */

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    // Check if (A+1)-th position is '-'
    if (S[A] != '-')
    {
        cout << "No";
        return 0;
    }

    // Check all other characters are digits
    for (int i = 0; i < S.size(); i++)
    {
        if (i == A)
            continue; // skip '-'

        if (!(S[i] >= '0' && S[i] <= '9'))
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
