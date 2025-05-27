/*
// Fully Manual, No STL, No vector
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Initialize min and max values and their indices
    int min_val = a[0], max_val = a[0]; // we don't need to swap minimum and maximum index.
    int min_idx = 0, max_idx = 0;

    // Find min and max values and their positions
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min_val)
        {
            min_val = a[i];
            min_idx = i;
        }
        if (a[i] > max_val)
        {
            max_val = a[i];
            max_idx = i;
        }
    }

    // maximum value assign minimum index and minimum value assign maximum index
    a[min_idx] = max_val;
    a[max_idx] = min_val;

    // Swap min and max elements
    // int temp = a[min_idx];
    // a[min_idx] = a[max_idx];
    // a[max_idx] = temp;

    // Swap funtion
    // swap(a[min_idx], a[max_idx]);

    // Output the result
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

#include <iostream>
#include <algorithm> // for min_element and max_element
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Find iterators to min and max elements
    // auto min_it = min_element(a, a + n);
    // auto max_it = max_element(a, a + n);
    // use exact data type of pointer
    int *min_it = min_element(a, a + n);
    int *max_it = max_element(a, a + n);

    // Swap the min and max elements
    iter_swap(min_it, max_it);

    // Print the updated array
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
