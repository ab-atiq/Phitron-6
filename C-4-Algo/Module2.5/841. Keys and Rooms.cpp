// https://leetcode.com/problems/keys-and-rooms/description/
// https://leetcode.com/problems/keys-and-rooms/solutions/7080245/simple-bfs-beginner-friendly-beats-100-b-lvt4/


// pias
class Solution
{
public:
    bool vis[1005];
    void bfs(int src, vector<vector<int>> &rooms)
    {
        queue<int> q;
        q.push(src);
        vis[src] = true;
        while (!q.empty())
        {
            int par = q.front();
            q.pop();
            for (int child : rooms[par])
            {
                if (!vis[child])
                {
                    q.push(child);
                    vis[child] = true;
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        memset(vis, false, sizeof(vis));
        int n = rooms.size();
        bfs(0, rooms);
        for (int i = 0; i < n; i++)
            if (vis[i] == false)
                return false;
        return true;
    }
};

// pass visited array into bfs - atiq
/*
class Solution {
public:
    void bfs(int src, vector<vector<int>>& rooms, vector<bool>& visited) {
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int adj_node : rooms[node]) {
                if (!visited[adj_node]) {
                    visited[adj_node] = true;
                    q.push(adj_node);
                }
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);

        bfs(0, rooms, visited);

        for (bool v : visited) {
            if (!v)
                return false;
        }
        return true;
    }
};

*/