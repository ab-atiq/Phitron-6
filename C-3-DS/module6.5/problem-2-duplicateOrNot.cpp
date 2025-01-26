// Function to check if the linked list contains duplicates
bool containsDuplicate(Node *head)
{
    // Since the maximum value is 100, we can use a frequency vector of size 101
    vector<int> frequency(101, 0); // SC- O(1)
    Node *current = head;

    while (current != nullptr) // TC- O(n)
    {
        if (frequency[current->data] > 0)
        {
            return true; // Duplicate found
        }
        frequency[current->data]++;
        current = current->next;
    }
    return false; // No duplicates
}