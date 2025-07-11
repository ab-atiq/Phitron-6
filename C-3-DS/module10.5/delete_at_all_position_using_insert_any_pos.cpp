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

// Function to calculate the size of a doubly linked list
int size_of_list(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    // if (tail == NULL) // tail is NULL means list is empty
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node; // Update tail pointer
}

void print_list_forward(Node *head)
{
    cout << "List (forward): ";
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
    cout << "List (backward): ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// method 1: delete the head node of a doubly linked list. if initial list is empty, do nothing and getting segmentation fault
// void delete_at_head(Node *&head, Node *&tail)
// {
//     if (head == NULL) // Check if the list is empty
//         return;

//     Node *deleteNode = head;
//     head = head->next;
//     delete deleteNode;

//     if (head == NULL) // If the list becomes empty after deletion. That means, Initially, there was only one node in the list and we deleted it. After deletion, both head and tail should be NULL.
//     {
//         tail = NULL;
//         return;
//     }
//     head->prev = NULL;
// }

// method 2: delete the head node of a doubly linked list with handling corner case
void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty. Nothing to delete at head.\n";
        return;
    }

    Node *tmp = head;

    // Only one node
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        head->prev = NULL;
    }

    delete tmp;
}

// method 1: delete the tail node of a doubly linked list. if initial list is empty, do nothing and getting segmentation fault
void delete_at_tail(Node *&head, Node *&tail)
{
    if (tail == NULL) // Check if the list is empty
        return;

    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

// method 2: delete the tail node of a doubly linked list with handling corner case
// void delete_at_tail(Node *&head, Node *&tail)
// {
//     if (tail == NULL) // Check if the list is empty
//     {
//         cout << "List is empty. Nothing to delete at tail.\n";
//         return;
//     }

//     Node *deleteNode = tail;

//     // Only one node
//     if (head == tail)
//     {
//         head = NULL;
//         tail = NULL;
//     }
//     else
//     {
//         tail = tail->prev;
//         tail->next = NULL;
//     }

//     delete deleteNode;
// }

// method 1: delete a node at any position in a doubly linked list including head or tail
void delete_at_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        cout << "Empty list.\n";
        return;
    }

    if (idx < 0 || idx >= size_of_list(head))
    {
        cout << "Invalid index.\n";
        return;
    }

    if (idx == 0) // If the index is 0, delete the head node
    {
        cout << "Deleting head node.\n";
        delete_at_head(head, tail);
        return;
    }

    if (idx == size_of_list(head) - 1) // If the index is equal to the size of the list, delete the tail node
    {
        cout << "Deleting tail node.\n";
        delete_at_tail(head, tail);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;

    // Best practice: Check if tmp->next is NULL before accessing prev
    if (tmp->next == NULL)
    {
        return;
    }
    tmp->next->prev = tmp;
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

    // delete_at_head(head, tail);
    // delete_at_tail(head, tail);

    int idx;
    cin >> idx;
    delete_at_any_pos(head, tail, idx);

    print_list_forward(head);
    print_list_backward(tail);
    return 0;
}

// method 2: delete a node at any position in a doubly linked list including head or tail. control in main function