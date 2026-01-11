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

// 2nd solution:
int flag = 0;
void test(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        if (flag != 1) // update
            flag = 0;
        return;
    }
    if (root->data == x)
    {
        flag = 1;
        return;
    }

    test(root->left, x);
    test(root->right, x);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    test(root, x);
    return flag;
}