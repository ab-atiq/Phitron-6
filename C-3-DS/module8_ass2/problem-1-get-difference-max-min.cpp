// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

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

int count_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

int max_find(Node *head)
{
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        mx = max(tmp->val, mx);
        tmp = tmp->next;
    }
    // cout << endl;
    return mx;
}

int min_find(Node *head)
{
    int mn = INT_MAX;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        mn = min(tmp->val, mn);
        tmp = tmp->next;
    }
    // cout << endl;
    return mn;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        // if (val == -1)
        // {
        //     break;
        // }
        insert_at_tail(head1, tail1, val);
    }
    // print_list(head1);
    // cout << count_linked_list(head1) << endl;
    // cout << max_find(head1) << endl;
    // cout << min_find(head1) << endl;
    cout << max_find(head1) - min_find(head1) << endl;
    return 0;
}

// method 2
/* #include <bits/stdc++.h>

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
} */