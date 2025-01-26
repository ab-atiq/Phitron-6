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

void find_leaf_nodes(Node *root, vector<int> &leaf_nodes)
{
    if (root == NULL)
        return;

    // If the current node is a leaf node, add it to the vector
    if (root->left == NULL && root->right == NULL)
    {
        leaf_nodes.push_back(root->val);
        return;
    }

    find_leaf_nodes(root->left, leaf_nodes);
    find_leaf_nodes(root->right, leaf_nodes);
}

int main()
{
    Node *root = input_tree(); // Input the tree

    vector<int> leaf_nodes;
    find_leaf_nodes(root, leaf_nodes);

    // Sort leaf nodes in descending order
    sort(leaf_nodes.rbegin(), leaf_nodes.rend());

    // Print the leaf nodes
    for (int val : leaf_nodes)
    {
        cout << val << " ";
    }

    return 0;
}
