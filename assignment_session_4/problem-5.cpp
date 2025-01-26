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

// Function to collect left boundary nodes (deepest to root)
void collect_left_boundary(Node *root, vector<int> &left_boundary)
{
    Node *current = root;
    while (current != NULL)
    {
        left_boundary.push_back(current->val);
        if (current->left != NULL)
            current = current->left;
        else
            current = current->right;
    }
}

// Function to collect right boundary nodes (root to deepest)
void collect_right_boundary(Node *root, vector<int> &right_boundary)
{
    Node *current = root;
    while (current != NULL)
    {
        right_boundary.push_back(current->val);
        if (current->right != NULL)
            current = current->right;
        else
            current = current->left;
    }
}

int main()
{
    Node *root = input_tree();

    if (!root)
        return 0;

    vector<int> left_boundary, right_boundary;

    // Collect left and right boundaries
    collect_left_boundary(root->left, left_boundary);
    collect_right_boundary(root->right, right_boundary);

    // Print left boundary
    // reverse(left_boundary.begin(), left_boundary.end());
    // for (int val : left_boundary)
    //     cout << val << " ";

    for (auto i = left_boundary.rbegin(); i != left_boundary.rend(); i++)
        cout << *i << " ";

    // Print root (if present)
    cout << root->val << " ";

    // Print right boundary
    for (int val : right_boundary)
        cout << val << " ";
    return 0;
}

// input:
/*
10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
*/

// output: 90 40 20 10 30 50 60