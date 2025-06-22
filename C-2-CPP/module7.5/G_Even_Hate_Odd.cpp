#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n % 2 != 0)
        {
            // If n is odd, even=odd is impossible
            cout << -1 << endl;
        }
        else
        {
            // Need to make both counts = n/2
            int needed = n / 2;
            // Convert from the larger side
            cout << abs(even - needed) << endl;
        }
    }

    return 0;
}
