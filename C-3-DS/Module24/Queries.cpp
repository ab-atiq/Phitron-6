#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;

    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_head(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void insert_tail(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print(node *&head)
{
    node *tem = head;
    while (tem != NULL)
    {
        cout << tem->value << " ";
        tem = tem->next;
    }
}
void delete_node(node *&head, int v)
{
    if (v == 0)
    {
        node *delnode = head;
        head = head->next;
        delete delnode;
        return;
    }
    node *tem = head;
    for (int i = 0; i < v - 1; i++)
    {
        tem = tem->next;
    }
    node *delnode = tem->next;
    tem->next = tem->next->next;
    delete delnode;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int q;
    int cnt = 0;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            cnt++;
            insert_head(head, tail, v);
            print(head);
        }
        else if (x == 1)
        {
            cnt++;
            insert_tail(head, tail, v);
            print(head);
        }
        else if (x == 2)
        {
            if (cnt > v)
            {
                cnt--;
                delete_node(head, v);
                print(head);
            }
            else
            {
                print(head);
            }
        }
        cout << endl;
    }

    return 0;
}