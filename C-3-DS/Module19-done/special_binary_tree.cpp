#include <bits/stdc++.h>
bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return true;

    // if root has only one child, then it is not a special binary tree
    if ((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
        return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    return l && r; // return true if both left and right subtrees are special binary trees
}