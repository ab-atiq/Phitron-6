/*
Question: Take two doubly linked lists as input and check if they are the same or not.
Sample Input:
10 20 30 40 50 -1
10 20 30 40 50 -1
Sample Output:
YES

Sample Input:
10 20 30 40 50 -1
10 20 30 40 -1
Sample Output:
NO

Sample Input:
10 20 30 40 -1
10 20 30 40 50 -1
Sample Output:
NO

Sample Input:
10 20 30 40 -1
40 30 20 10 -1
Sample Output:
NO

Sample Input:
1 2 3 4 5 -1
5 4 1 2 6 -1
Sample Output:
NO

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

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

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

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }

    // linked list 1
    // print_list(head1);
    // linked list 2
    // print_list(head2);

    // Method 1: Check if both linked lists are the same
    // Node *temp1 = head1;
    // Node *temp2 = head2;
    // bool are_same = true;
    // while (temp1 != NULL && temp2 != NULL)
    // {
    //     if (temp1->val != temp2->val)
    //     {
    //         are_same = false;
    //         break;
    //     }
    //     temp1 = temp1->next;
    //     temp2 = temp2->next;
    // }

    // if (temp1 != NULL || temp2 != NULL) // If one list is longer than the other.
    // {
    //     are_same = false;
    // }

    // if (are_same)
    // {
    //     // cout << "Both linked lists are same." << endl;
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     // cout << "Both linked lists are not same." << endl;
    //     cout << "NO" << endl;
    // }

    // Method 2: Check if both linked lists are the same using size check
    int size1 = size_of_list(head1), size2 = size_of_list(head2);
    if (size1 != size2)
    {
        cout << "NO" << endl;
        return 0;
    }
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            cout << "NO" << endl;
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    cout << "YES" << endl;

    return 0;
}