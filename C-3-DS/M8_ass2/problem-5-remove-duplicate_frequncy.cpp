/* #include <bits/stdc++.h>
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

void removeDuplicates(Node *&head)
{
    vector<int> freq(1001, 0);
    Node *current = head;
    Node *prev = NULL;

    while (current != NULL)
    {
        if (freq[current->data] == 0)
        {
            freq[current->data] = 1;
            prev = current;
            current = current->next;
        }
        else
        {
            // Duplicate found, remove the current node
            Node *temp = current;
            current = current->next;
            if (prev != NULL)
                prev->next = current;
            else
                head = current;
            delete temp;
        }
    }
}

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data;
        if (current->next)
            cout << " ";
        current = current->next;
    }
    cout << endl;
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
            break;
        insert_at_tail(head, tail, data);
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}
 */

#include <bits/stdc++.h>
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

// void removeDuplicates(Node *&head) {
//     vector<int> freq(1001, 0);
//     Node *current = head;
//     Node *prev = NULL;

//     while (current != NULL) {
//         if (freq[current->data] == 0) {
//             freq[current->data] = 1;
//             prev = current;
//             current = current->next;
//         } else {
//             // Duplicate found, remove the current node
//             Node *temp = current;
//             current = current->next;
//             if (prev != NULL)
//                 prev->next = current;
//             else
//                 head = current;
//             delete temp;
//         }
//     }
// }

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data;
        if (current->next)
            cout << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    vector<int> freq(1001, 0);

    while (true)
    {
        int data;
        cin >> data;
        if (data == -1)
            break;
        if (freq[data] == 0)
        {
            freq[data] = 1;
            insert_at_tail(head, tail, data);
        }
    }

    // removeDuplicates(head);
    printList(head);

    return 0;
}
