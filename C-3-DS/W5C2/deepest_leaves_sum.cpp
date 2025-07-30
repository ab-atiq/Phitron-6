/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    int max_height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 0; // level start from 0

        int l = max_height(root->left);
        int r = max_height(root->right);

        // maximum of left or right. Then add that node height.
        return max(l, r) + 1;
    }
    int deepestLeavesSum(TreeNode *root)
    {
        int mx_level = max_height(root);

        int sum = 0;

        queue<pair<TreeNode *, int>> q;

        // level start from 0
        q.push({root, 0});

        while (!q.empty())
        {
            // node ta k queue theke pick kora
            pair<TreeNode *, int> parent_pair = q.front();
            q.pop();

            TreeNode *parent_node = parent_pair.first;
            int parent_node_level = parent_pair.second;

            // node ta niye kaj kora
            if (parent_node_level == mx_level)
            {
                sum += parent_node->val;
            }

            // children push
            if (parent_node->left)
            {
                q.push({parent_node->left, parent_node_level + 1});
            }

            if (parent_node->right)
            {
                q.push({parent_node->right, parent_node_level + 1});
            }
        }
        return sum;
    }
};