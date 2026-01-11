// https://leetcode.com/problems/range-sum-of-bst/solutions/7032564/simple-recursion-beats-100-by-piaaaas-3h1d/

class Solution {
public:
    int sum = 0;
    void helper(TreeNode* root, int low, int high)
    {
        if(root == NULL) return;
        if(root->val >=low && root->val <=high)
            sum += root->val;

        helper(root->left,low,high);
        helper(root->right,low,high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        helper(root,low,high);
        return sum;
    }
};