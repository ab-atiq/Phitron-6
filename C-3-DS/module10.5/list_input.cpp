#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst;
    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        lst.push_back(val);
    }
    for (int val : lst)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}