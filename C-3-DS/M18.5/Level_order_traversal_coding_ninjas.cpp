#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v; // To store the level-order traversal
    if (!root)     // If the root is NULL, return an empty vector
        return v;

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        // Get the front node from the queue
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // Store the current node's value
        v.push_back(f->val);

        // Push the left and right children of the node (if they exist)
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return v;
}
