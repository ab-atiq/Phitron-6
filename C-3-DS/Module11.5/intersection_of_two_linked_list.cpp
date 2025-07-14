/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        // Traverse both lists until they meet or both reach the end
        // If one list reaches the end, switch to the other list
        while (tempA != tempB) {
            if (tempA == NULL)
                tempA = headB;// If tempA reaches the end, switch to headB
            else
                tempA = tempA->next;

            if (tempB == NULL)
                tempB = headA; // If tempB reaches the end, switch to headA
            else
                tempB = tempB->next;
        }
        return tempA;
    }
};