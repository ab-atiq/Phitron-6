// https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
// User function Template for C++

class Solution
{
public:
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        vector<int> dist(V);
        for (int i = 0; i < V; i++)
            dist[i] = 1e8;
        dist[src] = 0;
        for (int i = 0; i < V - 1; i++)
        {
            for (auto ed : edges)
            {
                int a = ed[0];
                int b = ed[1];
                int c = ed[2];
                if (dist[a] != 1e8 && dist[a] + c < dist[b])
                    dist[b] = dist[a] + c;
            }
        }
        for (auto ed : edges)
        {
            int a = ed[0];
            int b = ed[1];
            int c = ed[2];
            if (dist[a] != 1e8 && dist[a] + c < dist[b])
            {
                dist[b] = dist[a] + c;
                return {-1};
            }
        }
        return dist;
    }
};
