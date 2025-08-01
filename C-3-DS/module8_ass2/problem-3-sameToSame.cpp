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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (cin >> val && val != -1)
    {
        // if (val == -1)
        // {
        //     break;
        // }
        insert_at_tail(head2, tail2, val);
    }
    // cout << count_linked_list(head2) << endl;
    // print_list(head2);
    // cout << sz << endl;
    int sz1 = count_linked_list(head1);
    int sz2 = count_linked_list(head2);
    if (sz1 != sz2)
    {
        // cout << "Linked List Not Same" << endl;
        cout << "NO" << endl;
    }
    else
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        int flag = 0;
        // while (tmp1 != NULL || tmp2 != NULL) // size not check previous
        while (tmp1 != NULL && tmp2 != NULL)
        {
            // cout << tmp1->val << " " << tmp2->val << endl;
            if (tmp1->val != tmp2->val)
            {
                flag = 1;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        if (flag == 0)
        {
            // cout << "Linked list same" << endl;
            cout << "YES" << endl;
        }
        else
        {
            // cout << "Linked List Not Same" << endl;
            cout << "NO" << endl;
        }
    }
    return 0;
}

/* #include <iostream>

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

void checkSLLSameOrNot(Node *head, Node *head1)
{
    Node *tmp = head;
    Node *tmp1 = head1;
    int flag = 0;
    while (tmp != NULL && tmp1 != NULL)
    {
        if (tmp->data != tmp1->data)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    if (flag == 0 && tmp == NULL && tmp1 == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int data;
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, data);
    }

    checkSLLSameOrNot(head, head1);

    return 0;
} */