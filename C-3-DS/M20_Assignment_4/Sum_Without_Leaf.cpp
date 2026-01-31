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

// recursive function to calculate sum of all nodes except leaf nodes.
// int sum_except_leaf_nodes(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     // Check if the current node is a leaf node
//     if (root->left == NULL && root->right == NULL)
//         return 0;

//     int leftSum = sum_except_leaf_nodes(root->left);
//     int rightSum = sum_except_leaf_nodes(root->right);

//     return root->val + leftSum + rightSum; // Return the sum of the current node and its children
// }

int sum = 0;
void sum_except_leaf_nodes(Node *root)
{
    if (root == NULL)
        return;

    // Check if the current node is a leaf node
    if (root->left == NULL && root->right == NULL)
        sum += 0;
    else
        sum += root->val;

    sum_except_leaf_nodes(root->left);
    sum_except_leaf_nodes(root->right);
}

/*
int ans=0; // same as implemented above
int sum(Node * root){
    if(root==NULL){
        return ans;
    }
    if(root->left==NULL && root->right==NULL){
        return ans;
    }
    int l=sum(root->left);
    int r=sum(root->right);
    return l+r+root->val;
}
*/

// iterative (level order) function to calculate sum of all nodes except leaf nodes.
/*
int sum_except_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int sum = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        // method 1: if not a leaf node
        // if (cur->left != NULL || cur->right != NULL)
        //     sum += cur->val;

        // method 2: add value first, then subtract if leaf node
        sum += cur->val;
        if (cur->left == NULL && cur->right == NULL)
            sum -= cur->val;

        if (cur->left)
            q.push(cur->left);
        if (cur->right)
            q.push(cur->right);
    }
    return sum;
}
*/

/*
int travel(Node* root) {
    if (!root) return 0;

    int sum = 0;
    if (root->left || root->right) // means not a leaf node
    {
        sum += root->val;
    }

    sum += travel(root->left);
    sum += travel(root->right);

    return sum;
}
*/

int main()
{
    Node *root = input_tree();
    // cout << sum_except_leaf_nodes(root);

    sum_except_leaf_nodes(root);
    cout << sum << "\n";
    return 0;
}
