#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N), Q(N), perm(N);
    for (int i = 0; i < N; i++)
        cin >> P[i];
    for (int i = 0; i < N; i++)
        cin >> Q[i];

    for (int i = 0; i < N; i++)
        perm[i] = i + 1;

    int rankP = 0, rankQ = 0, rank = 0;

    do
    {
        rank++;
        if (perm == P)
            rankP = rank;
        if (perm == Q)
            rankQ = rank;
    } while (next_permutation(perm.begin(), perm.end()));

    cout << abs(rankP - rankQ) << "\n";

    return 0;
}
