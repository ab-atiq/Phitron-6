/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// https://www.codechef.com/problems/PHONEYR

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int last_two_dig = x % 100;

    // Option-1: if else statement approach
    // if (last_two_dig < 10)
    // {
    //     cout << "K0" << last_two_dig << endl;
    // }
    // else
    // {
    //     cout << "K" << last_two_dig << endl;
    // }

    // Option-2: short-cut -> Eliminates the if-else statement entirely
    // Uses setfill('0') to set the fill character to '0'
    // Uses setw(2) to ensure the number is always printed with at least 2 digits
    // cout << "K" << setfill('0') << setw(2) << last_two_dig << endl;

    // Option-3: Ternary operator approach
    cout << "K" << (last_two_dig < 10 ? "0" : "") << last_two_dig << endl;

    // Option-4: Using printf for formatted output
    // %02d formats the integer to be at least 2 digits, padding with leading zeros if necessary.
    printf("K%02d\n", last_two_dig);

    // Option-5: String
    // string year;
    // cin >> year;
    // cout << "K" << year[2] << year[3];

    // Option-6: Divide
    // int x;
    // cin >> x;
    // int temp = x;
    // vector<int> arr;
    // while (temp)
    // {
    //     int digit = temp % 10;
    //     arr.push_back(digit);
    //     temp = temp / 10;
    // }

    // cout << "K" << arr[1] << arr[0] << endl;
    return 0;
}

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    // If x = 1234:
    // - x / 100 = 12
    // - 12 * 100 = 1200
    // - 1234 - 1200 = 34 → ✅ last two digits

    int lastTwoDigits = x - (x / 100) * 100;
    printf("K%02d\n", lastTwoDigits);
    return 0;
}