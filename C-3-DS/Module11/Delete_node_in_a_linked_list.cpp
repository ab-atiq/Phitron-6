class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // Since we cannot delete the node directly, we copy the value of the next node into the current node
        node->val = node->next->val;
        // Then we skip the next node by pointing the current node's next to the next of the next node
        node->next = node->next->next;
    }
};