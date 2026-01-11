// Function to calculate the size of the linked list
int getSize(Node *head)
{
    int size = 0;
    Node *current = head;
    while (current != nullptr)
    {
        size++;
        current = current->next;
    }
    return size;
}