#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bids(n);

    for (int i = 0; i < n; i++)
    {
        cin >> bids[i];
    }

    int maxBid = -1, secondMax = -1, winnerIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (bids[i] > maxBid)
        {
            secondMax = maxBid;
            maxBid = bids[i];
            winnerIndex = i + 1;
        }
        else if (bids[i] > secondMax)
        {
            secondMax = bids[i];
        }
    }

    cout << winnerIndex << " " << secondMax << endl;
    return 0;
}
