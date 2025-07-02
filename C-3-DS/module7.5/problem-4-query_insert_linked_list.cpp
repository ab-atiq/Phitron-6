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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void insert_at_any_pos(Node *head, Node *tail, int idx, int val)
{
    Node *newnode = new Node(val);

    // // not show in module
    // if (head == NULL && idx == 1) // if the head is null and we want to insert at index 1 then we can do it
    // {
    //     head = newnode; // this will not work because we are passing by value
    //     tail = newnode; // this will not work because we are passing by value
    //     return;         // returning because the process is done
    // }

    // // not show in module
    // if (idx == 1) // if index is 1 based then we want to insert at the head
    // {
    //     newnode->next = head; // first step
    //     head = newnode;       // second step
    //     return;               // returning because the process is done
    // }

    // if (idx >= get_size(head) + 1) // if index is greater than the size of the linked list then we will insert at the tail
    // {
    //     return;
    // }

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    newnode->next = tmp->next; // first step
    tmp->next = newnode;       // second step
}

int get_size(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val)
    {
        if (val == -1) // assuming -1 is the termination condition
            break;
        insert_at_tail(head, tail, val);
    }
    // print_linked_list(head);

    int q;
    cin >> q;
    int idx, insert_val;
    while (q--)
    {
        cin >> idx >> insert_val;
        int sz = get_size(head);
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, insert_val);
            print_linked_list(head);
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, insert_val);
            print_linked_list(head);
        }
        else
        {
            insert_at_any_pos(head, tail, idx, insert_val);
            print_linked_list(head);
        }
    }
    return 0;
}

/*
10 20 30 -1
7
1 40
5 50
4 50
0 100
7 40
1 110
7 40

output:
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40

*/