/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/
int count_leaf_nodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    // any node left and right child does not exist then that node is child node
    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    return count_leaf_nodes(root);
}