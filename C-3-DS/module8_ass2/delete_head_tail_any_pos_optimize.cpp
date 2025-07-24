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

void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    if (head == NULL)
    {
        tail = NULL;
    }
}

void delete_at_tail(Node *&head, Node *&tail)
{
    if (tail == NULL)
    {
        return;
    }
    if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}

void delete_at_any_pos(Node *&head, Node *&tail, int idx)
{
    if (idx == 0)
    {
        delete_at_head(head, tail);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < idx && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        cout << "Invalid index" << endl;
        return;
    }
    Node *deletenode = temp->next;
    temp->next = deletenode->next;
    if (deletenode == tail)
    {
        tail = temp;
    }
    delete deletenode;
}
