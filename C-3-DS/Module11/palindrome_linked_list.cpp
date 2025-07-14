class Solution
{
public:
    void insert_at_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newnode = new ListNode(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void reverse(ListNode *&head, ListNode *tmp)
    {
        if (tmp->next == NULL)
        {
            head = tmp;
            return;
        }
        reverse(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *newhead = NULL;
        ListNode *newtail = NULL;

        // copy original linked list to new linked list
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            insert_at_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }

        // reverse the new linked list
        reverse(newhead, newhead);

        // compare original linked list with reversed linked list
        tmp = head;
        ListNode *tmp2 = newhead;

        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};

// Using vector

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> v;

        // Store the values of the linked list in a vector
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }

        // copy vector v to vector v2
        vector<int> v2;
        v2 = v;

        // reverse vector v2
        reverse(v2.begin(), v2.end());

        // compare vector v with reversed vector v2
        // return v == v2; // shorter way to check equality

        // detail check
        if (v == v2)
            return true;
        else
            return false;
    }
};