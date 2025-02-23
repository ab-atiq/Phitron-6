#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            current->left = new Node(l);
            q.push(current->left);
        }

        if (r != -1)
        {
            current->right = new Node(r);
            q.push(current->right);
        }
    }

    return root;
}

void findLeafFrequencies(Node *node, vector<int> &freq)
{
    if (node == NULL)
        return;

    if (node->left == NULL && node->right == NULL)
    {
        freq[node->val]++;
        return;
    }

    findLeafFrequencies(node->left, freq);
    findLeafFrequencies(node->right, freq);
}

int main()
{
    Node *root = inputTree();

    vector<int> freq(101, 0);
    findLeafFrequencies(root, freq);

    int maxFreq = 0, minLeaf = INT_MAX; // minLeaf = 101
    for (int i = 1; i <= 100; ++i)
    {
        // if (freq[i] > maxFreq || (freq[i] == maxFreq && i < minLeaf))
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            minLeaf = i;
        }
        // if (freq[i] == maxFreq && i < minLeaf)
        // {
        //     minLeaf = i;
        // }
    }
    cout << minLeaf << endl;

    return 0;
}
