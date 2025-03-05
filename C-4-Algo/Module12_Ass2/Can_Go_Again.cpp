#include <bits/stdc++.h>
using namespace std;
long long int dis[1001];

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

vector<Edge> adj_list;
int n, e;
int cycle = false;

void bellmanFord()
{

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : adj_list)
        {
            int a = ed.a, b = ed.b, c = ed.c;
            if (dis[a] != 1e18 && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    for (auto ed : adj_list)
    {
        int a = ed.a, b = ed.b, c = ed.c;
        if (dis[a] != 1e18 && dis[a] + c < dis[b])
        {
            cycle = true;
        }
    }
}

int main()
{
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj_list.push_back(Edge(a, b, w));
    }

    int src, tc;
    cin >> src >> tc;
    dis[src] = 0;
    bellmanFord();
    while (tc--)
    {
        int dest;
        cin >> dest;
        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
        else
        {
            if (dis[dest] == 1e18)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[dest] << endl;
            }
        }
    }
    return 0;
}