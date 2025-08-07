/* #include <bits/stdc++.h>
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
 */

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

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0; // 0 - based height
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

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

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    // level_order(root);
    int mx_dep = max_height(root);
    int total_Nodes = count_nodes(root);
    int cal = pow(2, mx_dep + 1) - 1; // make 0 based height to 1 based height using mx_dep + 1
    // cout << "Total nodes: " << total_Nodes << endl;
    // cout << "Perfect binary nodes: " << cal << endl;
    if (total_Nodes == cal)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

/*
input 1
1 2 3 4 5 -1 6 7 -1 -1 -1 -1 8 -1 -1 -1 -1

Total nodes: 8
Perfect binary nodes: 15



input 2
1 2 3 4 5 9 6 7 8 10 11 12 13 14 8 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

Total nodes: 15
Perfect binary nodes: 15

*/