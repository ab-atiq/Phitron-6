/*
✅ Problem Summary:
    Each problem solved gives 1 balloon.

    The first time a problem is solved gives 1 extra balloon.

    You’re given a string s of problem IDs (A–Z) for each test case.

    Output the total balloons given out per test case.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool seen[26] = {false}; // Track if a problem has been solved before. Initialize the seen array to false for all 26 letters (A-Z)

        int total = 0;

        for (char c : s)
        {
            int idx = c - 'A';
            if (!seen[idx])
            {
                total += 2; // First time solved
                seen[idx] = true;
            }
            else
            {
                total += 1; // Already solved before
            }
        }

        cout << total << endl;
    }

    return 0;
}
