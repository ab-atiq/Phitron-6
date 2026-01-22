/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/P1149

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int your_ans, correct_ans, max_diff;
    cin >> your_ans >> correct_ans >> max_diff;
    if (abs(your_ans - correct_ans) <= max_diff)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}