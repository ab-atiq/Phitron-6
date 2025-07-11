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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    // if (tail == NULL) // tail is NULL means list is empty
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node; // Update head pointer
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

/*
void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{
    if (index < 0 || index > size_of_list(head))
        return; // Invalid index

    if (index == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }

    // if (index == List_Size)
    // {
    //     insert_at_tail(head, tail, val);
    //     return;
    // }

    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    // this line also handles the case when index is equal to size_of_list(head). we can insert at tail checking list size before loop
    if (temp == NULL)
    {
        // Insert at tail
        insert_at_tail(head, tail, val);
        return;
    }

    new_node->next = temp->next;
    new_node->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = new_node;
    }
    temp->next = new_node;

    if (new_node->next == NULL)
    {
        tail = new_node; // Update tail if inserted at the end
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        int size = size_of_list(head);
        // cout << "Size " << size << endl;

        insert_at_any_position(head, tail, x, val);
        // linked list
        print_list_forward(head);
        print_list_backward(tail);
    }

    return 0;
}
*/

void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    // Best practice: Check if temp is NULL before accessing next
    // if (temp->next != NULL) // If not inserting at the end
    // {
    temp->next->prev = new_node;
    // }

    temp->next = new_node;

    // if (new_node->next == NULL)
    // {
    //     tail = new_node; // Update tail if inserted at the end
    // }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, val; // x means index, val means value to be inserted
        cin >> x >> val;
        int size = size_of_list(head);
        // cout << "Size " << size << endl;
        if (x < 0 || x > size)
        {
            cout << "Invalid index: " << x << endl;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (x == size)
        {
            insert_at_tail(head, tail, val);
        }
        else
        {
            insert_at_any_position(head, tail, x, val);
        }
        // linked list
        print_list_forward(head);
        print_list_backward(tail);
    }

    return 0;
}