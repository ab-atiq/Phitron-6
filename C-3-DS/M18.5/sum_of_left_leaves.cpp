// https://leetcode.com/problems/sum-of-left-leaves/solutions/7006699/simple-recursion-beginner-friendly-beats-px7k/
class Solution
{
public:
    int ans = 0;
    void sum(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root->left) // checking if it has left child
        {
            // checking if the left child is a leaf or not.
            if (root->left->left == NULL && root->left->right == NULL)
                ans += root->left->val;
        }
        sum(root->left);
        sum(root->right);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        sum(root);
        return ans;
    }
};

class Solution
{
public:
    int cnt_left(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int sum = 0;

        if (root->left != NULL) 
        {
            if (root->left->left == NULL && root->left->right == NULL)
            {
                sum += root->left->val; 
            }
        }

        sum += cnt_left(root->left);
        sum += cnt_left(root->right);

        return sum;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        return cnt_left(root);
    }
};
