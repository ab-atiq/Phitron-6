#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insert_any_pos(node *&head, node *&tail, int idx, int val)
{
    node *newnode = new node(val);
    node *tmp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp == NULL)
        {
            return; // if index is out of bound
        }
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}
// insert at tail
void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int size_liked_list(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
void print_forword(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_backword(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        node *head = NULL;
        node *tail = NULL;
        int x, val;
        cin >> x >> val;
        int sz = size_liked_list(head);
        if (x == 0)
        {
            insert_head(head, tail, val);
            print_forword(head);
            print_backword(tail); // tail pass in print_backword function
        }
        else if (sz < x || x < 0) // if x is out of bound
        {
            cout << "Invalid" << endl;
        }
        else if (x == sz) // insert tail
        {
            insert_at_tail(head, tail, val);
            print_forword(head);
            print_backword(tail); // tail pass in print_backword function
        }
        else
        {
            insert_any_pos(head, tail, x, val);
            print_forword(head);
            print_backword(tail); // tail pass in print_backword function
        }
    }
    return 0;
}