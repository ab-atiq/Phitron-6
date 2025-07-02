// Just for checking my skill - Atiqur rahman
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    //  Terminated due to timeout - O(N)
    // Node *tmp = head;
    // while (tmp->next != NULL)
    // {
    //     tmp = tmp->next;
    // }
    // tmp->next = newNode;

    // O(1)
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    if (head == NULL)
    {
        tail = newNode;
    }
    head = newNode;
}

void delete_any_idx(Node *&head, Node *&tail, int idx, int sz)
{
    Node *&tmp = head;
    // if (idx == 0)
    // {
    //     head = head->next;
    //     return;
    // }
    for (int i = 0; i < idx; i++)
    {
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
}

int size_linked_list(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        // cout << head->val << " ";
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // terminated due to timeout handle
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *Head1 = NULL;
    Node *Tail1 = NULL;

    // int num;
    // while (1)
    // {
    //     cin >> num;
    //     if (num == -1)
    //     {
    //         break;
    //     }
    //     insert_at_tail(Head1, Tail1, num);
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int sz = size_linked_list(Head1);
        int option;
        cin >> option;
        if (option == 0)
        {
            int val;
            cin >> val;
            insert_at_head(Head1, Tail1, val);
        }
        else if (option == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(Head1, Tail1, val);
        }
        else if (option == 2)
        {
            int idx;
            cin >> idx;
            if (idx >= sz)
            {
                // no operation
            }
            else
            {
                delete_any_idx(Head1, Tail1, idx, sz);
            }
        }
        print_linked_list(Head1);
    }

    return 0;
}