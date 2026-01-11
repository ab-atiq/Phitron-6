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

void insert_at_any_pos(Node *head, int idx, int val) // we will not modify the head pointer so we will pass it by value instead of reference.
{
    Node *newnode = new Node(val);

    // not show in module
    if (head == NULL && idx == 1) // if the head is null and we want to insert at index 1 then we can do it
    {
        head = newnode; // this will not work because we are passing by value
        return;         // returning because the process is done
    }

    // now show in module
    // if( idx > likedListSize) {
    //     cout << "Invalid index" << endl;
    //     return;
    // }

    // not show in module
    if (idx == 1) // if index is 1 based then we want to insert at the head
    {
        newnode->next = head; // first step
        head = newnode;       // second step
        return;               // returning because the process is done
    }

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
        if (tmp = NULL)
        {
            // cout << "Invalid index" << endl;
            return; // solved in practice module
        }
    }
    newnode->next = tmp->next; // first step
    tmp->next = newnode;       // second step
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 2, 200);
    print_linked_list(head);
    return 0;
}