// https://leetcode.com/problems/same-tree/description/
// method 1: pias

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL)
            return false;
        if (q == NULL)
            return false;

        if (p->val != q->val)
            return false;
        bool l = isSameTree(p->left, q->left);
        bool r = isSameTree(p->right, q->right);
        return l && r;
    }
};

// method 2: my code
class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &leaf)
    {
        if (root == NULL)
        {
            leaf.push_back(-1);

            // track -1 for NULL

            return;
        }

        leaf.push_back(root->val);
        preorder(root->left, leaf);
        preorder(root->right, leaf);
    }

    void inorder(TreeNode *root, vector<int> &leaf)
    {
        if (root == NULL)
        {
            leaf.push_back(-1);

            // track -1 for NULL

            return;
        }
        inorder(root->left, leaf);
        leaf.push_back(root->val);
        inorder(root->right, leaf);
        // leaf.push_back(root->val);
    }

    void postorder(TreeNode *root, vector<int> &leaf)
    {
        if (root == NULL)
        {
            leaf.push_back(-1); // track -1 for NULL
            return;
        }
        postorder(root->left, leaf);
        postorder(root->right, leaf);
        leaf.push_back(root->val);
    }

    void level_order(TreeNode *root, vector<int> &result)
    {
        if (root == NULL)
        {
            result.push_back(-1); // Handle case for empty tree
            return;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            // 1. Extract the front node
            TreeNode *f = q.front();
            q.pop();

            // 2. Process the current node
            result.push_back(f->val);

            // 3. Push children or add -1 for missing children
            if (f->left)
            {
                q.push(f->left); // Push left child if it exists
            }
            else
            {
                result.push_back(-1); // Add -1 for missing left child
            }

            if (f->right)
            {
                q.push(f->right); // Push right child if it exists
            }
            else
            {
                result.push_back(-1); // Add -1 for missing right child
            }
        }
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> v1, v2, v3, v4, v5, v6, v7, v8;

        preorder(p, v1);
        preorder(q, v2);

        postorder(p, v3);
        postorder(q, v4);

        inorder(p, v5);
        inorder(q, v6);

        level_order(p, v7);
        level_order(q, v8);

        return (v1 == v2) && (v3 == v4) && (v5 == v6) && (v7 == v8);
    }
};