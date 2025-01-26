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

void forward_DLL(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void backward_DLL(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->pre;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q, sz = 0;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        int idx = X, val = V;
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            Node *newNode = new Node(val);

            if (head == NULL && tail == NULL)
            { // Case: Empty list
                head = newNode;
                tail = newNode;
            }
            else if (idx == 0)
            { // Case: Insert at the beginning
                newNode->next = head;
                head->pre = newNode;
                head = newNode;
            }
            else if (idx == sz)
            { // Case: Insert at the end
                tail->next = newNode;
                newNode->pre = tail;
                tail = newNode;
            }
            else
            { // Case: Insert at middle
                Node *temp = head;
                for (int i = 0; i < idx - 1; i++)
                { // Navigate to (idx - 1)
                    temp = temp->next;
                }
                newNode->next = temp->next;
                newNode->pre = temp;
                temp->next->pre = newNode;
                temp->next = newNode;
            }

            sz++;               // Increment the size of the list
            forward_DLL(head);  // Print the list from left to right
            backward_DLL(tail); // Print the list from right to left
        }
    }

    return 0;
}