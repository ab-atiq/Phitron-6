/*
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

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }

    Node *evenHead = NULL;
    Node *evenTail = NULL;

    Node *oddHead = NULL;
    Node *oddTail = NULL;
    
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val % 2 == 0)
        {
            insert_at_tail(evenHead, evenTail, temp->val);
        }
        else
        {
            insert_at_tail(oddHead, oddTail, temp->val);
        }
        temp = temp->next;
    }

    // just print even then odd nodes singly linked list
    // // print even list
    // Node *evenTemp = evenHead;
    // while (evenTemp != NULL)
    // {
    //     cout << evenTemp->val << " ";
    //     evenTemp = evenTemp->next;
    // }

    // // print odd list
    // Node *oddTemp = oddHead;
    // while (oddTemp != NULL)
    // {
    //     cout << oddTemp->val << " ";
    //     oddTemp = oddTemp->next;
    // }
    // cout << endl;

    // merge even and odd list
    if (evenTail != NULL)
    {
        evenTail->next = oddHead;
    }
    else
    {
        evenHead = oddHead;
    }
    // print merged list
    Node *mergedTemp = evenHead;
    while (mergedTemp != NULL)
    {
        cout << mergedTemp->val << " ";
        mergedTemp = mergedTemp->next;
    }
    cout << endl;
    return 0;
} 
*/

/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> evenList;
    list<int> oddList;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
        {
            evenList.push_back(val);
        }
        else
        {
            oddList.push_back(val);
        }
    }
    for (auto val : evenList)
    {
        cout << val << " ";
    }
    for (auto val : oddList)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}