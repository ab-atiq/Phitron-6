#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> lst;
    int n;

    vector<int> freq(1001, 0);
    while (cin >> n)
    {
        if (n == -1)
            break;
        if (freq[n] == 0)
        {
            lst.push_back(n);
            freq[n] = freq[n] + 1;
        }
    }
    lst.sort();
    for (int i : lst)
        cout << i << " ";

    // while (cin >> n && n != -1)
    // {
    //     lst.push_back(n);
    // }
    // lst.sort();
    // lst.unique();
    // for (int it : lst)
    //     cout << it << " ";

    return 0;
}