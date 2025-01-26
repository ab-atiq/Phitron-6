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

// Function to calculate the depth of the tree
int max_depth(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + max(max_depth(root->left), max_depth(root->right));
}

// Function to count the total number of nodes
int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + count_nodes(root->left) + count_nodes(root->right);
}

bool is_perfect_tree(Node *root)
{
    if (root == NULL)
        return true; // An empty tree is considered perfect

    int depth = max_depth(root);
    int total_nodes = count_nodes(root);

    // Check the formula for a perfect binary tree
    return total_nodes == (pow(2, depth) - 1);
}

int main()
{
    Node *root = input_tree();

    if (is_perfect_tree(root))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
