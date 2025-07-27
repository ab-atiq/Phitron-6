// https://leetcode.com/problems/maximum-depth-of-binary-tree/solutions/7006797/simple-clean-recursion-beats-100-by-piaa-gpiu/

class Solution
{
public:
    int max_depth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        int l = max_depth(root->left);
        int r = max_depth(root->right);
        return max(l, r) + 1;
    }
    int maxDepth(TreeNode *root)
    {
        return max_depth(root);
    }
};