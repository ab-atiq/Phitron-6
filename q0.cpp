#include <bits/stdc++.h>
using namespace std;

vector<int> adj_mat[1005];
bool vis_arr[1005];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis_arr[source] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << " ";

        for (int child : adj_mat[parent])
        {
            if (!vis_arr[child])
            {
                q.push(child);
                vis_arr[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);
    }

    // Reset visitation array
    fill(vis_arr, vis_arr + 1005, false);

    int start_node = 0; // Change this if needed
    bfs(start_node);

    return 0;
}
