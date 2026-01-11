// not provide in batch - 7

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insert_at_head(Node *&head, int data)
{
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(Node *&head, int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

void insert_at_any_position(Node *&head, int data, int position)
{
    if (position == 0)
    {
        insert_at_head(head, data);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        Node *new_node = new Node(data);
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = nullptr;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, value);
    }
    int idx, value;
    while (cin >> idx >> value)
    {
        if (idx < 0 || idx > size(head))
        {
            cout << "Invalid position" << endl;
        }
        else if (idx == 0)
        {
            insert_at_head(head, value);
            display(head);
        }
        else if (idx == size(head))
        {
            insert_at_tail(head, value);
            display(head);
        }
        else
        {
            insert_at_any_position(head, value, idx);
            display(head);
        }
    }
    return 0;
}