/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

/* #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        // this->next = NULL;
        this->next = nullptr; // Using nullptr as per C++20 standard
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    // if (head == NULL)
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;

    int fre[1001] = {0}; // Frequency array to track duplicates
    int num;

    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        if (fre[num] == 0)
        {
            fre[num] = 1;
            insert_at_tail(Head, Tail, num);
        }
    }

    // Print the linked list
    Node *tmp = Head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    return 0;
} */

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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// selection sort for linked list
void sort_linked_list(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;

    int num;

    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insert_at_tail(Head, Tail, num);
    }
    // sort_linked_list(Head); // sort will change sequence so it will not work

    // method 1: Print the linked list without duplicates
    // Node *tmp = Head;
    // while (tmp != NULL)
    // {
    //     cout << tmp->val << " "; // just print first occurrence
    //     int val = tmp->val;
    //     while (tmp != NULL && tmp->val == val)
    //     {
    //         tmp = tmp->next;
    //     }
    // }

    // method 2: Create a new linked list without duplicates
    // Node *NewHead = NULL;
    // Node *NewTail = NULL;
    // Node *tmp = Head;
    // while (tmp != NULL)
    // {
    //     insert_at_tail(NewHead, NewTail, tmp->val);
    //     int val = tmp->val;
    //     while (tmp != NULL && tmp->val == val)
    //     {
    //         tmp = tmp->next;
    //     }
    // }
    // // print new linked list
    // Node *tmp2 = NewHead;
    // while (tmp2 != NULL)
    // {
    //     cout << tmp2->val << " ";
    //     tmp2 = tmp2->next;
    // }

    // method 3: Modify the existing linked list to remove duplicates
    // Node *tmp = Head;
    // while (tmp != NULL && tmp->next != NULL)
    // {
    //     if (tmp->val == tmp->next->val)
    //     {
    //         Node *toDelete = tmp->next;
    //         tmp->next = tmp->next->next;
    //         delete toDelete; // free memory
    //     }
    //     else
    //     {
    //         tmp = tmp->next;
    //     }
    // }

    // method 4: remove duplicates without sorting
    Node *tmp = Head;
    while (tmp != NULL)
    {
        Node *runner = tmp;
        while (runner->next != NULL)
        {
            if (runner->next->val == tmp->val)
            {
                Node *toDelete = runner->next;
                runner->next = runner->next->next;
                delete toDelete; // free memory
            }
            else
            {
                runner = runner->next;
            }
        }
        tmp = tmp->next;
    }
    // print modified linked list
    Node *tmp2 = Head;
    while (tmp2 != NULL)
    {
        cout << tmp2->val << " ";
        tmp2 = tmp2->next;
    }
    return 0;
}