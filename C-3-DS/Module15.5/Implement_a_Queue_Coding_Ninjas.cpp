#include <bits/stdc++.h>
class Node
{
public:
    int val;
    Node *next;

    // Constructor to initialize Node
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Queue
{
public:
    Node *headNode; // Head/Front of the queue
    Node *tailNode; // Tail/Rear of the queue

    // Constructor to initialize the queue
    Queue()
    {
        headNode = tailNode = NULL;
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return headNode == NULL;
    }

    // Function to enqueue an element to the queue
    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (tailNode == NULL)
        {
            headNode = tailNode = newNode; // If the queue is empty, both front and rear point to the new node
        }
        else
        {
            tailNode->next = newNode; // Add new node at the rear
            tailNode = newNode;       // Update the rear pointer
        }
    }

    // Function to dequeue and return the front element of the queue
    int dequeue()
    {
        if (isEmpty())
        {
            return -1; // If the queue is empty, return -1
        }

        int removedData = headNode->val;

        Node *temp = headNode;
        headNode = headNode->next; // Move the front pointer to the next node
        if (headNode == NULL)
        {
            tailNode = NULL; // If the queue is empty after dequeue, set rear to NULL
        }
        delete temp; // Free the memory of the dequeued node
        return removedData;
    }

    // Function to get the front element without removing it
    int front()
    {
        if (isEmpty())
        {
            return -1; // If the queue is empty, return -1
        }
        return headNode->val; // Return the value at the front node
    }
};
