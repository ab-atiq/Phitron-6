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

// Function to insert a value at the tail of the linked list - O(N)
// void insert_at_tail(Node *&head, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         return;
//     }

//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newnode;
// }

// O(1)
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
    Node *tail1 = NULL; // Tail of the first linked list
    Node *head2 = NULL; // Second linked list
    Node *tail2 = NULL; // Tail of the second linked list

    // Input the first linked list
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }

    // Input the second linked list
    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }

    // Compare sizes of the two linked lists
    int size1 = get_size(head1);
    int size2 = get_size(head2);

    if (size1 != size2)
    {
        cout << "NOT Same" << endl;
        return 0;
    }

    // for coneceptual session
    // two linked list same or not
    int same = 1; // Assume they are the same initially
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            same = 0; // Found a difference
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (same)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "NOT Same" << endl;
    }

    return 0;
}

/*
10 20 30 40 -1
10 20 30 40 -1

same

10 20 30 40 -1
10 20 30 -1

not same
*/