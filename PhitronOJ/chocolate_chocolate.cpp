#include <bits/stdc++.h>
using namespace std;

int getMoreChocolate(int wrappers)
{
    if (wrappers < 3)
        return 0; // Base case

    int extra = wrappers / 3;     // Chocolates from wrappers
    int remaining = wrappers % 3; // Leftover wrappers

    return extra + getMoreChocolate(extra + remaining);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;

        int choco = N / 5; // Direct chocolates
        int total = choco + getMoreChocolate(choco);

        cout << total << "\n";
    }
}