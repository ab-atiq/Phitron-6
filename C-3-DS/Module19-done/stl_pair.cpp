#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1;
    p1.first = 10;
    p1.second = 20;
    cout << p1.first << " " << p1.second << endl;

    pair<string, int> p2("Hello", 40);
    cout << p2.first << " " << p2.second << endl;

    pair<int, string> p3;
    p3 = make_pair(50, "World");
    cout << p3.first << " " << p3.second << endl;

    pair<char, double> p4;
    p4 = {'A', 80.5};
    cout << p4.first << " " << p4.second << endl;

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

/*  
input: 
3
1 2
3 4
5 6
output:
1 2
3 4
5 6
*/