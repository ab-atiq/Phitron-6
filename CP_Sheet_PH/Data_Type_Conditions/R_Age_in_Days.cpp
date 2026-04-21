/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age_in_days;
    cin >> age_in_days;
    int years = age_in_days / 365;
    // int remaining_days = age_in_days % 365; // This is another way to calculate remaining days after calculating years
    int remaining_days = age_in_days - years * 365;

    int months = remaining_days / 30;
    // remaining_days = remaining_days % 30; // This is another way to calculate remaining days after calculating months
    remaining_days = remaining_days - months * 30;
    cout << years << " years\n"
         << months << " months\n"
         << remaining_days << " days" << endl;
    return 0;
}