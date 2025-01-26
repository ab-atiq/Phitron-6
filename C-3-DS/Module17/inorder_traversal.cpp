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

void find_leaf_node(Node *root)
{
    if (root == NULL)
        return;
    find_leaf_node(root->left);  // left
    cout << root->val << " ";    // root
    find_leaf_node(root->right); // right
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    find_leaf_node(root); // preorder traversal: 40 20 10 50 30 60

    return 0;
}