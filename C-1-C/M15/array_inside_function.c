#include <stdio.h>

void input_array(int arr[], int size)
{
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size]; // Static allocation (VLA in C99+)

    input_array(arr, size); // Pass the array to be filled

    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
Enter array size: 5
Enter 5 elements: 1 2 3 4 5
Array elements: 1 2 3 4 5
*/

/*

#include <stdio.h>

int input_array(int arr[], int max_size) {
    int size; // size inside function
    printf("Enter size (<= %d): ", max_size);
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    return size; // Return actual size used
}

int main() {
    int arr[1000]; // Fixed max size
    int size = input_array(arr, 1000);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/