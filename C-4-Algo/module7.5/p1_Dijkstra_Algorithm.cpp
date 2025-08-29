// https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

// Solution 1
class Solution
{
public:
    int dis[1005];

    void diajka(int src, vector<vector<pair<int, int>>> &adj)
    {

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push({0, src});
        dis[src] = 0;

        while (!pq.empty())
        {
            pair<int, int> par = pq.top();
            pq.pop();

            int par_dis = par.first;
            int par_node = par.second;

            for (auto child : adj[par_node])
            {
                int child_node = child.first;
                int child_dis = child.second;

                if (par_dis + child_dis < dis[child_node])
                {
                    dis[child_node] = par_dis + child_dis;
                    pq.push({dis[child_node], child_node});
                }
            }
        }
    }

    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src)
    {
        // Code here
        for (int i = 0; i < 1005; i++)
        {
            dis[i] = INT_MAX;
        }
        diajka(src, adj);

        vector<int> v;

        for (int i = 0; i < adj.size(); i++)
        {
            v.push_back(dis[i]);
        }

        return v;
    }
};

// solution 2

class Solution
{
public:
    vector<int> dis;
    vector<vector<pair<int, int>>> adj;

    void dijkstraUtil(int src)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dis[src] = 0;
        pq.push({0, src});
        while (!pq.empty())
        {
            pair<int, int> p = pq.top();
            pq.pop();
            int par_node = p.second;
            int par_dis = p.first;
            for (auto child : adj[par_node])
            {
                int child_node = child.first;
                int child_dis = child.second;
                if (par_dis + child_dis < dis[child_node])
                {
                    dis[child_node] = par_dis + child_dis;
                    pq.push({dis[child_node], child_node});
                }
            }
        }
    }

    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        // initialize
        dis.assign(V, INT_MAX);
        adj.assign(V, {});

        // build adjacency list
        for (auto &e : edges)
        {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); // undirected
        }

        // run dijkstra
        dijkstraUtil(src);

        // return result
        vector<int> v;
        for (int i = 0; i < V; i++)
        {
            v.push_back(dis[i]);
        }
        return v;
    }
};
