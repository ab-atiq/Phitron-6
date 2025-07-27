class Solution
{
public:
    vector<int> v;
    void postorder(TreeNode *root)
    {
        if (root == NULL)
            return;

        postorder(root->left);  // left
        postorder(root->right); // right
        // cout << root->val << " "; // root
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        postorder(root);
        return v;
    }
};