#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge_list; // vector of pairs

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
        edge_list.push_back({b, a});
    }

    cout << "Ouput:" << endl;
    for (auto p : edge_list)
    {
        cout << p.first << " " << p.second << endl;
    }

    // for (int i = 0; i < 2 * e; i++)
    // {
    //     cout << edge_list[i].first << " " << edge_list[i].second << endl;
    // }
    return 0;
}

/*
input: (no chage for 0 or 1 index base input)
6 7
0 2
0 3
0 1
1 3
2 5
2 4
1 4
output:
0 2
2 0
0 3
3 0
0 1
1 0
1 3
3 1
2 5
5 2
2 4
4 2
1 4
4 1


input: (no chage for 0 or 1 index base input)
6 10
1 2
1 5
2 5
2 4
2 3
5 4
5 6
3 4
3 6
4 6

Edges list:
1 2
2 1
1 5
5 1
2 5
5 2
2 4
4 2
2 3
3 2
5 4
4 5
5 6
6 5
3 4
4 3
3 6
6 3
4 6
6 4

*/

// vector<pair<int,int>> → সহজ ও readable (standard edge list)

// vector<vector<int>> → flexible, future এ যদি edge-এর সাথে weight রাখো (৩টা element), তখন কাজে লাগবে

// 👉 Best practice: যদি শুধু 2 nodes (u,v) রাখতে হয়, তাহলে pair ব্যবহার করো।
// কিন্তু যদি (u,v,weight) বা আরও ডাটা রাখতে হয়, তাহলে vector<int> ব্যবহার করতে পারো।

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> edge_list; // vector of vector

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
        edge_list.push_back({b, a});
    }

    cout << "Output:" << endl;
    for (auto edge : edge_list)
    {
        cout << edge[0] << " " << edge[1] << endl;
    }

    return 0;
}
