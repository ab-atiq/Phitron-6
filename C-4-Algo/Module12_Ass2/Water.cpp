#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // find max and second max values index
        int maxIdx = 0, secondMaxIdx = -1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[maxIdx])
            {
                secondMaxIdx = maxIdx;
                maxIdx = i;
            }
            else if (secondMaxIdx == -1 || arr[i] > arr[secondMaxIdx])
            {
                secondMaxIdx = i;
            }
        }

        // print 0 to n order
        if (maxIdx >= secondMaxIdx)
            cout << secondMaxIdx << " " << maxIdx << endl;
        else
            cout << maxIdx << " " << secondMaxIdx << endl;
    }
    return 0;
}

// Another solution - Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<long long> H(N);

        for (int i = 0; i < N; i++)
        {
            cin >> H[i];
        }

        int first = -1, second = -1;

        for (int i = 0; i < N; i++)
        {
            if (first == -1 || H[i] > H[first])
            {
                second = first;
                first = i;
            }
            else if (second == -1 || H[i] > H[second])
            {
                second = i;
            }
        }

        if (first < second)
            cout << first << " " << second << "\n";
        else
            cout << second << " " << first << "\n";
    }

    return 0;
}