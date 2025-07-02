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

    int tc;
    cin >> tc;
    while (tc--)
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

        int target;
        cin >> target;

        Node *head = Head;
        int idx = 0;
        bool found = false;
        while (head != NULL)
        {
            if (target == head->val)
            {
                found = true;
                break;
            }
            idx++;
            // cout << head->val << " ";
            head = head->next;
        }

        if (found)
        {
            cout << idx << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}