#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// head or tail node can not delete from this function. Also, not track tail pointer because all middle nodes does not need to track tail pointer
void delete_at_any_pos(Node *head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

// can delete any node including last or tail node. but, can not delete head
// void delete_at_any_pos(Node *&head, int idx)
// {
//     Node *tmp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         tmp = tmp->next;
//     }

//     Node *deletenode = tmp->next;
//     tmp->next = tmp->next->next;
//     delete deletenode;

//     if (tmp->next == NULL)
//     {
//         return;
//     }
//     tmp->next->prev = tmp;
// }

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_any_pos(head, 1);
    print_forward(head);
    return 0;
}