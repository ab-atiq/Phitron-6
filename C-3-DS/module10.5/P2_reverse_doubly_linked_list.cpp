/*
Question: Take a doubly linked list as input and reverse it. After that print the linked list.

Sample Input
10 20 30 -1
Sample Output
30 20 10

Sample Input
10 20 30 40 -1
Sample Output
40 30 20 10
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void print_list_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_list_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// reverse the doubly linked list using two pointers
void reverse_list_two_pointers(Node *&head, Node *&tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->prev != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

// reverse the singly linked list using recursion - module 10 - but, it will not work for doubly linked list. because prev pointer is not set properly
void reverse_singly_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_singly_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

// reverse the doubly linked list using recursion
// void reverse_doubly_linked_list(Node *&head, Node *&tail, Node *tmp)
// {
//     // Base case: if the current node is NULL, return
//     if (tmp == NULL)
//         return;

//     if (tmp->next == NULL)
//     {
//         head = tmp;
//         return;
//     }
//     reverse_doubly_linked_list(head, tail, tmp->next);
//     tmp->next->prev = tmp;
//     // Set the next pointer of the next node to point back to the current node. so prev pointer work properly
//     tmp->prev = tmp->next;
//     tmp->next = NULL;
//     tail = tmp;
// }

void reverse_doubly_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp == NULL)
        return;

    if (tmp->next == NULL)
    {
        head = tmp;
        head->prev = NULL; // ✅ important fix
        return;
    }

    reverse_doubly_linked_list(head, tail, tmp->next);

    tmp->next->next = tmp;
    tmp->prev = tmp->next;
    tmp->next = NULL;

    // ✅ Only update tail once at the beginning
    if (tmp->prev->next == tmp)
    {
        tail = tmp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    print_list_forward(head);
    print_list_backward(tail);

    // reverse_list_two_pointers(head, tail);

    // reverse_singly_linked_list(head, tail, head); // can not print reverse because prev pointer is not set properly

    reverse_doubly_linked_list(head, tail, head); // reverse the doubly linked list using recursion

    print_list_forward(head);
    print_list_backward(tail);

    return 0;
}