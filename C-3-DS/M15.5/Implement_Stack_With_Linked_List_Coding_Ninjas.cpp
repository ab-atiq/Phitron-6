/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{

public:
    Node *head = NULL;
    int siz = 0;
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        return siz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        siz++;
        // Node *newnode = new Node(data);
        // // push item in top. So, we can make any node next of previous node. (NOTE: add item in tail we connect previous node with newNode, But, here we will connect nextNode with Previous node )
        // if (head == NULL)
        // {
        //     head = newnode; // head point new node
        // }
        // else
        // {
        //     newnode->next = head; // Exception, because we usually connect head->next = newNode. But, here is reverse, newNode->next=head
        //     head = newnode;       // point last node as head
        // }

        Node *newnode = new Node(data, head); // directly next pointer added
        head = newnode;
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        siz--;
        Node *deletenode = head; // head point last input in stack. So, delete head now.
        head = head->next;
        delete deletenode;
    }

    int getTop()
    {
        if (head == NULL)
            return -1;

        return head->data; // top present in head
    }
};
