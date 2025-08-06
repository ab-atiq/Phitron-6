#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main()
{
    int N;
    cin >> N;
    list<pair<string, int>> l;
    for (int i = 0; i < N; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        l.push_back(make_pair(s, x));
    }

    // l.sort(l.begin(), l.end(), cmp); // This line is incorrect; list does not have a sort method with a comparator.

    // list to vector
    vector<pair<string, int>> v(l.begin(), l.end());
    sort(v.begin(), v.end(), cmp);

    // after sorting - copy back to list
    l.clear();
    l.assign(v.begin(), v.end());

    // print list
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}


// --------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first < r.first)
        return true;
    else if (l.first > r.first)
        return false;
    else if (l.first == r.first)
    {
        if (l.second > r.second)
            return true;
        else if (l.second < r.second)
            return false;
        else
            // if both are equal, return false/true doesn't matter.
            // return false;
            return true;
    }
    return true; // This line is redundant, but kept for clarity and function return type warning.
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
    }
    sort(v.begin(), v.end(), cmp);
    // print pair of vector - 1
    // for (const auto &p : v)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }
    // print pair of vector - 2
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    // print pair of vector - 3
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}