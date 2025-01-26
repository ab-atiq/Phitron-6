#include <iostream>

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
}