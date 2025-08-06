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
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
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

        // 3. children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int count_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    // any node left and right child does not exist then that node is child node
    if (root->left == NULL && root->right == NULL)
        // return 1;
        // return root->val; // sum of leaf nodes
        return 0; // sum of without leaf nodes

    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    // return l + r; // sum of leaf nodes
    return l + r + root->val; // sum of without leaf nodes
}

int main()
{
    Node *root = input_tree();
    cout << count_leaf_nodes(root);
    return 0;
}

/*
input:
10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1

output:
3
*/