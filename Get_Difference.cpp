// Just for checking my skill - Atiqur rahman
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

    //  Terminated due to timeout - O(N)
    // Node *tmp = head;
    // while (tmp->next != NULL)
    // {
    //     tmp = tmp->next;
    // }
    // tmp->next = newNode;

    // O(1)
    tail->next = newNode;
    tail = newNode;
}

// void print_linked_list(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

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
    // print_linked_list(Head);
    Node *head = Head;
    int mn = INT_MAX, mx = INT_MIN;
    while (head != NULL)
    {
        if (mn > head->val)
        {
            mn = head->val;
        }
        if (mx < head->val)
        {
            mx = head->val;
        }
        // cout << head->val << " ";
        head = head->next;
    }

    // cout << mn << " " << mx << endl;
    cout << mx - mn << endl;

    return 0;
}