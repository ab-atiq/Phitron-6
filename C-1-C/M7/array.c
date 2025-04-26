#include <stdio.h>
int main()
{
    int arr[10]; // array initialization with garbage value
    // array accessing and value update
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    printf("%d %d %d", arr[0], arr[1], arr[2]); // print array element

    int arr1[5];
    // user input
    scanf("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);
    // output from user
    printf("%d %d %d %d %d", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

    int arr2[5];
    // user input using for loop
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // output from user using for loop
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}