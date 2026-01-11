/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/

TreeNode<int> *insertionInBST(TreeNode<int> *root, int val)
{
    // If the tree is empty, create a new node and return it as the root
    if (root == nullptr)
    {
        return new TreeNode<int>(val);
    }

    // If the value is less than the current node's value, insert into the left subtree
    if (val < root->val)
    {
        root->left = insertionInBST(root->left, val);
    }

    // If the value is greater than or equal to the current node's value, insert into the right subtree
    else
    {
        root->right = insertionInBST(root->right, val);
    }

    // Return the root of the modified BST
    return root;
}