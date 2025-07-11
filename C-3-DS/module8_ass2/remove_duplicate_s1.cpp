// We use counting short method ( T=O(N+K), S =O(N+K)) not use selection short method ( T=O(N*N), S =O(1))
void remove_duplicates(Node *head) //But in this code (T = O(N), S = O(max(V)) );
{
    int count[1001] = {0};
    Node *curr = head;
    Node *prev = NULL;

    while (curr)
    {
        if (count[curr->val])
        {
            prev->next = curr->next; // We've seen this value before
            delete curr;
            curr = prev->next;
        }
        else
        {
            count[curr->val]++; // First time seeing this value
            prev = curr;
            curr = curr->next;
        }
    }
}