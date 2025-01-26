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

// Function to insert a value at the tail of the linked list
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

// Function to calculate the size of the linked list
int get_size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head1 = NULL; // First linked list
    Node *head2 = NULL; // Second linked list

    // Input the first linked list
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, val);
    }

    // Input the second linked list
    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, val);
    }

    // Compare sizes of the two linked lists
    int size1 = get_size(head1);
    int size2 = get_size(head2);

    if (size1 == size2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
