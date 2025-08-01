// https://leetcode.com/problems/invert-binary-tree/description/
class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return root;

        swap(root->left, root->right); // Swap the left and right node

        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};