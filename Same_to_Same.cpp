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
    // terminated due to timeout handle
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *Head1 = NULL;
    Node *Tail1 = NULL;
    Node *Head2 = NULL;
    Node *Tail2 = NULL;
    int num;
    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insert_at_tail(Head1, Tail1, num);
    }
    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insert_at_tail(Head2, Tail2, num);
    }
    // print_linked_list(Head);

    bool same = true;
    while (Head1 != NULL && Head2 != NULL)
    {
        if (Head1->val != Head2->val)
        {
            same = false;
            break;
        }

        // cout << head->val << " ";
        Head1 = Head1->next;
        Head2 = Head2->next;
    }

    if (Head1 != NULL || Head2 != NULL)
    {
        same = false;
    }

    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}