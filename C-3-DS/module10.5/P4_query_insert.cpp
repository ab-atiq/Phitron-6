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
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

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

void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{
    // if (index < 0 || index > size_of_list(head))
    //     return; // Invalid index

    // if (index == 0)
    // {
    //     insert_at_head(head, tail, val);
    //     return;
    // }

    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    // this line also handles the case when index is equal to size_of_list(head)
    // if (temp == NULL)
    // {
    //     // Insert at tail
    //     insert_at_tail(head, tail, val);
    //     return;
    // }

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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val; // idx == X, val == V
        cin >> idx >> val;
        int size = size_of_list(head);
        // cout << "Size " << size << endl;

        if (idx < 0 || idx > size)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_list_forward(head);
            print_list_backward(tail);
        }
        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
            print_list_forward(head);
            print_list_backward(tail);
        }
        else
        {
            insert_at_any_position(head, tail, idx, val);
            print_list_forward(head);
            print_list_backward(tail);
        }
    }

    // int val;
    // while (cin >> val)
    // {
    //     if (val == -1)
    //     {
    //         break; // Exit on -1 input
    //     }
    //     insert_at_head(head, tail, val);
    // }
    // print_list(head);

    return 0;
}