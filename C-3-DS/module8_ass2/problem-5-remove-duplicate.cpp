// remove duplicate elements from singly linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void removeDuplicates(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        Node *temp = current;
        while (temp->next != NULL)
        {
            if (current->data == temp->next->data)
            {
                Node *duplicate = temp->next;
                temp->next = temp->next->next;
                delete (duplicate);
            }
            else
            {
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

void printList(Node *head)
{
    if (!head)
    {
        cout << endl;
        return;
    }
    Node *current = head;
    while (current)
    {
        cout << current->data;
        if (current->next)
            cout << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int data;
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_at_tail(head, tail, data);
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}