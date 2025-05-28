/* #include <iostream>
#include <algorithm>
using namespace std;

void sort_it(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort_it(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
} */

#include <iostream>
#include <algorithm>
using namespace std;

int *sort_it(int n)
{
    int *arr = new int[n]; // Dynamically allocate array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // accending order sort - O(n^2)
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    // sort(arr, arr + n); // accending sort - O(n*log (n))

    // descending order sort - O(n^2)
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    sort(arr, arr + n, greater<int>()); // descending sort - O(n*log (n))
    return arr;                         // Return pointer to sorted array
}

int main()
{
    int n;
    cin >> n;

    int *return_arr = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << return_arr[i] << " ";
    }
    cout << endl;

    delete[] return_arr; // Free memory
    return 0;
}