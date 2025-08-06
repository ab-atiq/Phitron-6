// https://leetcode.com/problems/search-in-a-binary-search-tree/solutions/7032531/simple-traverse-with-recursion-beats-100-d37b/

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return NULL;
        if (root->val == val)
            return root;
        if (val < root->val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
    }
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // Base Case: 
        // If the root is nullptr, it means the tree or subtree doesn't contain the value, so we return nullptr.
        //  If the root's value matches the target value, we return the root.

        if (root == nullptr || root->val == val) {
            return root; // If the node is null or matches the value, return it
        }


        // Recursive Case:

        // If the target value is less than the current node's value, search in the left subtree (root->left).
        // Otherwise, search in the right subtree (root->right).
        if (val < root->val) {
            return searchBST(root->left, val); // Search in the left subtree
        } else {
            return searchBST(root->right, val); // Search in the right subtree
        }
    }
};