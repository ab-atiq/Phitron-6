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
    if (idx == 0) // insert at head
    {
        newnode->next = head;
        head = newnode;
        if (tail == NULL) // if the list was empty
        {
            tail = newnode;
        }
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL) // if idx is greater than the size of the list
    {
        cout << "Invalid index" << endl;
        delete newnode; // avoid memory leak
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    if (newnode->next == NULL) // if we inserted at the end
    {
        tail = newnode;
    }
}


