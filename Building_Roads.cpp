#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> sz;
// find function for dsu
int find(int src)
{
    // if (par[src] == src) // ✅ fixed: was par[src] == -1
    if (par[src] == -1)
        return src;

    int leader = find(par[src]);
    par[src] = leader;
    return leader;
}

int n, m;

// creating function for union
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    // if (leader1 == leader2)
    //     return; // ✅ optional but safe

    if (sz[leader1] >= sz[leader2])
    {
        par[leader2] = leader1;
        sz[leader1] += sz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        sz[leader2] += sz[leader1];
    }
}
int main()
{
    cin >> n >> m;

    sz.assign(n + 1, 1);
    par.assign(n + 1, -1);
    // for (int i = 1; i <= n; i++)
    //     par[i] = -1;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        if (find(a) != find(b))
            dsu_union(a, b);
    }

    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
        {
            result.push_back(i);
        }
    }

    int cnt = result.size();
    cout << cnt - 1 << endl;

    // print the actual edges to connect components
    for (int i = 1; i < cnt; i++)
    {
        cout << result[i - 1] << " " << result[i] << "\n";
    }
    return 0;
}
