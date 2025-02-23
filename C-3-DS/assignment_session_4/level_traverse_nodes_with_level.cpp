#include <iostream>
#include <queue>
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

void print_level_order_nodes_with_level(Node *root)
{
    if (root == NULL)
        return;

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        // 1.  ber kore ana
        pair<Node *, int> p = q.front();
        q.pop();

        // 2.  oi node ke niye kaj
        cout << p.first->val << " " << p.second << endl;

        // 3.  children push kora
        if (p.first->left)
            q.push({p.first->left, p.second + 1});
        if (p.first->right)
            q.push({p.first->right, p.second + 1});
    }
}

int main()
{
    Node *root = input_tree();
    print_level_order_nodes_with_level(root);
    return 0;
}

// input: 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// level order traverse with level:
// 10 0
// 20 1
// 30 1
// 40 2
// 50 2
// 60 2