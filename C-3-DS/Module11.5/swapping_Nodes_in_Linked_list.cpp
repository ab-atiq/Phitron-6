class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *left_pointer = head, *right_pointer = head;
        for (int i = 0; i < k - 1; i++)
        {
            right_pointer = right_pointer->next;
        }

        ListNode *temp_pointer = right_pointer;
        while (right_pointer->next != NULL)
        {
            left_pointer = left_pointer->next;
            right_pointer = right_pointer->next;
        }

        swap(temp_pointer->val, left_pointer->val);

        return head;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int list_size(ListNode *head)
    {
        int cnt = 0;
        while (head != NULL)
        {
            head = head->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *temp = head;
        for (int i = 0; i < k - 1; i++)
        {
            temp = temp->next;
        }

        // temp now points to the kth node from the beginning
        ListNode *kth_node_begin = temp;
        int sz = list_size(head);
        int ith_index_from_last = sz - k; // ith index from last is (sz - k)

        temp = head;
        for (int i = 0; i < ith_index_from_last; i++)
        {
            temp = temp->next;
        }
        
        // temp now points to the kth node from the last
        ListNode *kth_node_last = temp;

        // Swap the values of the two nodes
        swap(kth_node_begin->val, kth_node_last->val);

        return head;
    }
};