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

// Function to find the maximum value in the linked list
int find_max(Node *head)
{
    int max_val = INT_MIN; // Initialize with the smallest integer value
    Node *tmp = head;
    while (tmp != NULL)
    {
        max_val = max(max_val, tmp->val); // Update max_val if the current node's value is greater
        tmp = tmp->next;
    }
    return max_val;
}

int main()
{
    Node *head = NULL;

    // Input the linked list
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, val);
    }

    // Find the maximum value in the linked list
    int max_value = find_max(head);

    // Print the maximum value
    cout << max_value << endl;

    return 0;
}
