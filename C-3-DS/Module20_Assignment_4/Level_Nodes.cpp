#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_kth_level(Node *root, int k)
{
    if (root == NULL) // If the tree is empty
    {
        cout << "Invalid";
        return;
    }

    // To store the nodes at the kth level of the tree
    vector<int> level_nodes;

    // level order traversal
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *node = q.front().first;
        int level = q.front().second;
        q.pop();

        // If the current node is at the kth level
        if (level == k)
            level_nodes.push_back(node->val);

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    if (level_nodes.empty()) // If no nodes are present at the kth level of the tree
        cout << "Invalid";
    else
    {
        for (int val : level_nodes)
            cout << val << " ";
    }
}

int main()
{
    Node *root = input_tree();
    int k;
    cin >> k;

    print_kth_level(root, k);
    return 0;
}
