// sort the pairs according to the string values in ascending order. If there are multiple pairs with the same string, you need to sort them according to the integer value in descending order.
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

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
    vector<pair<string, int>> v(l.begin(), l.end());
    sort(v.begin(), v.end(), cmp);
    // l.sort(l.begin(), l.end(), cmp);
    l.clear();
    l.assign(v.begin(), v.end());
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}