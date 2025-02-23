#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
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

vector<int> leaf_nodes;
void find_leaf_node(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        // cout << root->val << " "; // leaf node
        leaf_nodes.push_back(root->val);
        return;
    }
    find_leaf_node(root->left); // left
    // cout << root->val << " "; // root
    find_leaf_node(root->right); // right
}

int main()
{
    Node *root = input_tree();
    find_leaf_node(root);

    cout << "Leaf nodes: ";
    for (int i : leaf_nodes)
        cout << i << " ";
    cout << endl;

    sort(leaf_nodes.begin(), leaf_nodes.end(), greater<int>());
    cout << "Leaf nodes in descending order: ";
    for (int i : leaf_nodes)
        cout << i << " ";
    cout << endl;
    return 0;
}

// input: 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// output:
// Leaf nodes: 40 50 60
// Leaf nodes in descending order: 60 50 40
