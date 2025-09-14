#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> li;
    while (1)
    {

        int x;
        cin >> x;
        if (x == -1)
            break;

        li.push_back(x);
    }

    int mx = INT_MIN;
    int mn = INT_MAX;

    // int sz = li.size();

    for (auto it = li.begin(); it != li.end(); ++it)
    {

        cout << *it << " ";
    }

    cout << mx - mn << endl;

    return 0;
}