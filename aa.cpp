#include <bits/stdc++.h>
using namespace std;

// creating node
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

// inserting node at tail or in a blank linked list
void insert_at_head(Node *&head, int val)
{
    // creating the node first
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        return; // returning if the process is done
    }

    new_node->next = head;
    head = new_node;
}

// printing the list
void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; // initially the tail and the head is null because the linked list is blank we have to insert data

    // taking input from the user until i get -1;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break; // will break the loop if x == -1
        }
        insert_at_head(head, x);
    }

    print_list(head);
    return 0;
}