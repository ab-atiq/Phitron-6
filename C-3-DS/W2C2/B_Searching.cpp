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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int find_index(Node *head, int val)
{
    int index = 0;
    while (head != NULL)
    {
        if (head->val == val)
        {
            return index; // Return the index if the value is found
        }
        head = head->next;
        index++;
    }
    return -1; // Return -1 if the value is not found
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Input the linked list
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        // Insert at tail
        insert_at_tail(head, tail, val);
    }
    // Print the linked list
    // print_list(head);

    int target_value;
    cin >> target_value;
    
    // check
    int found_index = find_index(head, target_value);
    if (found_index != -1)
    {
        cout << found_index << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}