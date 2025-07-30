// https://www.codingninjas.com/studio/problems/code-find-a-node_5682
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;

    bool left = isNodePresent(root->left, x);
    bool right = isNodePresent(root->right, x);

    if (left || right)
        return true;
    else
        return false;
    // return left || right;

    // return isNodePresent(root->left, x) || isNodePresent(root->right, x);
}