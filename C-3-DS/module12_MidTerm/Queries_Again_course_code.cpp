#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node *pre = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
}

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
    newnode->pre = tail;
    tail = newnode;
}

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    if (tmp->next != NULL) // If the node is not the last node
        tmp->next->pre = newNode;
    tmp->next = newNode;
    newNode->pre = tmp;
}

void forward_DLL(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void backward_DLL(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->pre;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q, sz = 0;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        int idx = X, val = V;
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (idx == 0)
            {
                insert_at_head(head, tail, val);
            }
            else if (idx == sz)
            {
                insert_at_tail(head, tail, val);
            }
            else
            {
                insert_at_any_pos(head, idx, val);
            }

            sz++;               // Increment the size of the list
            forward_DLL(head);  // Print the list from left to right
            backward_DLL(tail); // Print the list from right to left
        }
    }

    return 0;
}