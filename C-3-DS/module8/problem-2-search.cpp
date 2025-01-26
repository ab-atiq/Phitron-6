// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.
#include <iostream>
#include <climits>

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

void find_x_value_index(Node *head, int x)
{
    Node *tmp = head;
    int cnt = 0, flag = 0;
    while (tmp != NULL)
    {
        if (tmp->data == x)
        {
            cout << cnt << endl;
            flag = 1;
            break;
        }
        cnt++;
        tmp = tmp->next;
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
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
        int x;
        cin >> x;
        find_x_value_index(head, x);
    }

    return 0;
}