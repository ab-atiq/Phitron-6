/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/


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
        long long int h[n];
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int left = 0, right = n - 1;
        long long int maxArea = 0;

        while (left < right)
        {
            long long int height = min(h[left], h[right]);
            long long int width = right - left;
            long long int area = height * width;
            maxArea = max(maxArea, area);

            // Move the pointer with the smaller height
            if (h[left] < h[right])
                left++;
            else
                right--;
        }

        cout << maxArea << "\n";
    }

    return 0;
}
