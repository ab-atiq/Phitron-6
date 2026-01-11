/*
Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.

Sample Input:
1 4 5 2 7 -1
Sample Output:
1 2 4 5 7

Sample Input:
20 40 30 10 50 60 -1
Sample Output:
10 20 30 40 50 60
*/

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

    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    // print_list_forward(head);
    // print_list_backward(tail);

    // Sort the doubly linked list in ascending order - using selection sort
    Node *current = head;
    while (current->next != NULL)
    {
        Node *next_node = current->next;
        while (next_node != NULL)
        {
            if (current->val > next_node->val)
            {
                // Swap values
                swap(current->val, next_node->val);
            }
            next_node = next_node->next;
        }
        current = current->next;
    }

    print_list_forward(head);
    print_list_backward(tail);
    return 0;
}