// https://leetcode.com/problems/binary-tree-right-side-view/description/
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        bool fre[105] = {false};

        queue<pair<TreeNode *, int>> q;
        if (root)
            q.push({root, 1});

        while (!q.empty())
        {
            pair<TreeNode *, int> parent = q.front();
            q.pop();

            TreeNode *node = parent.first;
            int level = parent.second;

            if (fre[level] == false)
            {
                ans.push_back(node->val);
                fre[level] = true;
            }

            // Push right child first, then left child to ensure right view
            if (node->right)
                q.push({node->right, level + 1});

            if (node->left)
                q.push({node->left, level + 1});
        }
        return ans;
    }
};
