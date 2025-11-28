// https://codeforces.com/contest/1676/problem/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string ticket;
    while (t--)
    {
        cin >> ticket;

        // shotcut way
        // int sum1 = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        // int sum2 = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        int digit1 = ticket[0] - '0';
        int digit2 = ticket[1] - '0';
        int digit3 = ticket[2] - '0';
        int digit4 = ticket[3] - '0';
        int digit5 = ticket[4] - '0';
        int digit6 = ticket[5] - '0';

        int sum1 = digit1 + digit2 + digit3;
        int sum2 = digit4 + digit5 + digit6;

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
