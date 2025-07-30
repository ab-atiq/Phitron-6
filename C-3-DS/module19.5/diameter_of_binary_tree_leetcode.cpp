// https://leetcode.com/problems/diameter-of-binary-tree/description/
class Solution
{
public:
    int mx = 0;
    int height(TreeNode *node)
    {
        if (node == NULL)
            return 0;
        int l = height(node->left);
        int r = height(node->right);
        mx = max(mx, l + r);
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        height(root);
        return mx;
    }
};