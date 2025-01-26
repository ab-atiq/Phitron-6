// Function to find and print the middle element(s) of the linked list
void printMiddle(Node *head)
{
    // Step 1: Count the total number of nodes in the list
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    // Step 2: Find the middle indices
    int mid1 = (count - 1) / 2; // First middle index
    int mid2 = count / 2;       // Second middle index (only used if count is even)

    // Step 3: Traverse the list again and print the middle element(s)
    temp = head;
    for (int i = 0; i < mid1; ++i)
    {
        temp = temp->next;
    }
    cout << temp->data; // Print the first middle element
    if (mid1 != mid2)
    {
        // If the list has even length, print the second middle element
        cout << " " << temp->next->data;
    }
    cout << endl;
}