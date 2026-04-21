/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double percent, offer_price, price;
    cin >> percent >> offer_price;
    // price = (offer_price * 100) / (100 - percent);
    // price = offer_price / (1 - (percent / 100));
    double reduce = (1 - (percent / 100));
    price = offer_price / reduce;

    cout << fixed << setprecision(2) << price << endl;
    return 0;
}