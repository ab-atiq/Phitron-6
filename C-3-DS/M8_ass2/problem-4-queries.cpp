#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    // corner case
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    // tail=newnode; //update kore dite
    tail = tail->next;
}

void insert_at_head(Node *&head, Node *&tail, int value) // reference dite hobe
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode; // update
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    if (head == NULL)
    {
        tail = NULL;
    }
}

void delete_at_any_position(Node *&head, int value)
{
    Node *temp = head;
    for (int i = 1; i < value; i++)
    {
        temp = temp->next;
    }
    Node *deletenode = temp->next;
    temp->next = temp->next->next; // temp = dile temp e assign hoye jabe,connection hobe na
    delete deletenode;
}

// void delete_at_tail(Node *&head,Node *&tail,int index){
//     Node *temp=head;
//    for(int i=1;i<index;i++){
//         temp=temp->next;
//     }
//     Node *deletenode=temp->next;
//     temp->next=temp->next->next;
//     //temp = dile temp e assign hoye jabe,connection hobe na
//     delete deletenode;
//     tail=temp;

// }

void delete_at_tail(Node *head, Node *&tail, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, value;
        cin >> x >> value;
        if (x == 0)
        {
            insert_at_head(head, tail, value);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, value);
        }
        else
        {
            int sz = size(head);
            if (value == 0) // head delete
            {
                delete_at_head(head, tail);
            }
            else if (value == sz - 1)
            {
                delete_at_tail(head, tail, sz - 1);
            }

            else if (value < sz - 1) // delete at any position
            {
                delete_at_any_position(head, value);
            }
        }

        print_linked_list(head);
    }
    return 0;
}
