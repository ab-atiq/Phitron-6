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

int count_nodes_level_order(Node *root)
{
    if (root == NULL)
        return 0;

    int count = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.  ber kore ana
        Node *f = q.front();
        q.pop();

        // 2.  oi node ke niye kaj
        // cout << f->val << " ";
        count++;

        // 3.  children push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return count;
}

int main()
{
    Node *root = input_tree();
    cout << count_nodes_level_order(root) << endl;
    return 0;
}

/*
input:
10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1

output:
6
*/