// https://leetcode.com/problems/increasing-order-search-tree/solutions/7033393/beginner-friendly-using-inorder-runtime-c7ksh/

class Solution
{
public:
    vector<int> ans;
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    TreeNode *make_tree()
    {
        TreeNode *root = new TreeNode(ans[0]);
        TreeNode *temp = root;
        for (int i = 1; i < ans.size(); i++)
        {
            TreeNode *right = new TreeNode(ans[i]);
            temp->right = right;
            temp = temp->right;
        }
        return root;
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        inorder(root);
        return make_tree();
    }
};