/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc301/tasks/abc301_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    int totalT = 0, totalA = 0;

    // Count total wins
    for (char c : S)
    {
        if (c == 'T')
            totalT++;
        else
            totalA++;
    }

    // If unequal, return winner
    if (totalT > totalA)
    {
        cout << "T\n";
        return 0;
    }
    if (totalA > totalT)
    {
        cout << "A\n";
        return 0;
    }

    // Equal wins → find who reached the final score first
    int t = 0, a = 0;
    int target = totalT;

    for (char c : S)
    {
        if (c == 'T')
            t++;
        else
            a++;

        if (t == target)
        {
            cout << "T\n";
            return 0;
        }
        if (a == target)
        {
            cout << "A\n";
            return 0;
        }
    }

    return 0;
}
