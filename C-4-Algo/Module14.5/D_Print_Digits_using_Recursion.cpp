#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    if (n == 0)
    {
        cout << 0 << " ";
        return;
    }

    if (n / 10 != 0)
        printDigits(n / 10);

    cout << n % 10 << " ";
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0;
        else
            printDigits(n);
        cout << endl;
    }

    return 0;
}