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
class Solution {
public:
    int size(ListNode* head) {
        int count = 0;
        while (head) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = size(head);
        int idx = sz - n;
        if(idx == 0){
            head = head->next;
        }else{
            ListNode* current = head;
            for(int i = 0; i < idx - 1; i++) {
                current = current->next;
            }
            // check if the next node exists before trying to remove it
            if(current->next) {
                current->next = current->next->next;
            }
        }
        return head;
    }
};