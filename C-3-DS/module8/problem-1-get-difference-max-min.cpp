#include <iostream>
#include <climits>

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

void dif_max_min(Node *head)
{
    Node *tmp = head;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    while (tmp != NULL)
    {
        // cout << tmp->data << endl;
        if (tmp->data > max_val)
        {
            max_val = tmp->data;
        }
        if (tmp->data < min_val)
        {
            min_val = tmp->data;
        }
        tmp = tmp->next;
    }
    cout << max_val - min_val << endl;
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

    dif_max_min(head);

    return 0;
}