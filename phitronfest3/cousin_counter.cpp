#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left, *right;
    Node(int v) : val(v), left(NULL), right(NULL) {}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vals;
    int x;
    while (cin >> x)
        vals.push_back(x);

    if (vals.empty() || vals[0] == -1)
    {
        cout << "\n";
        return 0;
    }

    // Step 1: Build tree from level order
    Node *root = new Node(vals[0]);
    queue<Node *> q;
    q.push(root);
    int idx = 1;

    while (!q.empty() && idx < (int)vals.size())
    {
        Node *cur = q.front();
        q.pop();
        if (idx < vals.size() && vals[idx] != -1)
        {
            cur->left = new Node(vals[idx]);
            q.push(cur->left);
        }
        idx++;
        if (idx < vals.size() && vals[idx] != -1)
        {
            cur->right = new Node(vals[idx]);
            q.push(cur->right);
        }
        idx++;
    }

    // Step 2 & 3: BFS with cousin counting
    queue<pair<Node *, Node *>> bfs; // (node, parent)
    bfs.push({root, nullptr});

    while (!bfs.empty())
    {
        int sz = bfs.size();
        unordered_map<Node *, int> siblingCount;
        vector<pair<Node *, Node *>> levelNodes;

        // First pass: gather info
        for (int i = 0; i < sz; i++)
        {
            auto [node, par] = bfs.front();
            bfs.pop();
            levelNodes.push_back({node, par});
            siblingCount[par]++;

            if (node->left)
                bfs.push({node->left, node});
            if (node->right)
                bfs.push({node->right, node});
        }

        // Second pass: assign cousin counts
        for (auto &pr : levelNodes)
        {
            Node *node = pr.first;
            Node *par = pr.second;
            int cousins = sz - siblingCount[par];
            node->val = cousins;
        }
    }

    // Step 4: Print in level order
    queue<Node *> out;
    out.push(root);
    while (!out.empty())
    {
        Node *cur = out.front();
        out.pop();
        cout << cur->val << " ";
        if (cur->left)
            out.push(cur->left);
        if (cur->right)
            out.push(cur->right);
    }
    cout << "\n";

    return 0;
}
