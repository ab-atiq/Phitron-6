// https://leetcode.com/problems/leaf-similar-trees/submissions/

class Solution
{
public:
    void pre_order(TreeNode *root, vector<int> &pre)
    {
        if (root == NULL)
            return;
        if (!root->left && !root->right)
            pre.push_back(root->val);

        pre_order(root->left, pre);
        pre_order(root->right, pre);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> pre1, pre2;
        pre_order(root1, pre1);
        pre_order(root2, pre2);
        return pre1 == pre2;
    }
};

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
    // Helper function to get the leaf nodes of the tree
    void getLeafNodes(TreeNode *root, vector<int> &leaf)
    {
        // If the root is null, return
        if (!root)
            return;

        // If the root is a leaf node, add it to the vector
        if (!root->left && !root->right)
            leaf.push_back(root->val);

        // Recursively call the function for the left and right subtrees
        getLeafNodes(root->left, leaf);
        getLeafNodes(root->right, leaf);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        // Create two vectors to store the leaf nodes of the two trees
        vector<int> leaf1, leaf2;

        // Call the helper function to get the leaf nodes of the first tree
        getLeafNodes(root1, leaf1);
        // Call the helper function to get the leaf nodes of the second tree
        getLeafNodes(root2, leaf2);

        // If the two vectors are equal, return true
        return leaf1 == leaf2;
    }
};