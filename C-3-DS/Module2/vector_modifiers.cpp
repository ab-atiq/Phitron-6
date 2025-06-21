#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // vector<int> v2;
    // v2 = v; // all element copy from v to v2.

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // v.push_back(121);
    // v.pop_back();

    // range based for loop
    // for (int x : v2)
    // {
    //     cout << x << " ";
    // }

    // vector<int> v2 = {100, 200, 300};

    // v.insert(v.begin() + 2, 200);
    // v.insert(v.begin() + 2, v2.begin(), v2.end());

    // v.erase(v.begin() + 2); // single value erase or delete from vector
    // v.erase(v.begin() + 1, v.begin() + 5);

    // replace(v.begin(), v.end(), 2, 100);
    // replace(v.begin(), v.end() - 1, 2, 100);

    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    // auto it = find(v.begin(), v.end(), 10);
    // cout << *it << endl;

    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // vector iterator 
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}