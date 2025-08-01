// https://leetcode.com/problems/root-equals-sum-of-children/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool checkTree(TreeNode *root)
    {
        // int rootVal = root->val;
        // int leftVal = root->left->val;
        // int rightVal = root->right->val;

        // return rootVal == (leftVal + rightVal);

        // Since the tree has exactly three nodes (root, left, and right)
        // Check if root's value equals the sum of its left and right children
        return root->val == (root->left->val + root->right->val);
    }
};