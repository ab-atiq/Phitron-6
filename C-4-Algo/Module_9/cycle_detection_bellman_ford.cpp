#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, e;
vector<Edge> edge_list;
vector<int> dis(100, INT_MAX);

// complexity O(v * e)
void bellman_ford()
{
    dis[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }
    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;

        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Negative weight cycle detected" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // cout << a << b << c << endl;
        edge_list.push_back(Edge(a, b, c));
    }

    bellman_ford();

    return 0;
}

/*
4 4
0 1 5
1 2 3
2 3 2
2 1 -6
Negative weight cycle detected

4 4
0 1 5
1 2 3
2 3 2
1 2 -6
*/