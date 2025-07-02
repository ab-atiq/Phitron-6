#include <iostream>
using namespace std;

// Node definition for singly linked list
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at the end of the linked list
void insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// Function to check if the linked list is sorted in ascending order
bool isSorted(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        // Empty list or single node is always sorted
        return true;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        if (current->data > current->next->data)
        {
            return false; // Found an unsorted pair
        }
        current = current->next;
    }
    return true; // List is sorted
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int value;

    // Input the linked list
    while (cin >> value && value != -1)
    {
        insert(head, tail, value);
    }

    // Check if the linked list is sorted
    if (isSorted(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
