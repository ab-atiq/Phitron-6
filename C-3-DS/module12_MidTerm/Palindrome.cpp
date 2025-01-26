#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node *pre = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

bool check_palindrome(Node *head, Node *tail)
{
    while (head != tail && head != tail->next)
    {
        if (head->val != tail->val)
        {
            return false;
        }
        head = head->next;
        tail = tail->pre;
    }
    return true;
}
void print_DLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val, sz = 0;
    while (cin >> val && val != -1)
    {
        sz++;
        insert_at_tail(head, tail, val);
    }
    // print_DLL(head);
    if (check_palindrome(head, tail))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}