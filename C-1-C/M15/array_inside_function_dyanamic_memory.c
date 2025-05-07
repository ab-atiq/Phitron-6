#include <stdio.h>
#include <stdlib.h>

int *get_array(int *size)
{
    printf("Enter the size of the array: ");
    scanf("%d", size);
    int *arr = (int *)malloc(*size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter the elements of the array: ");
    for (int i = 0; i < *size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main()
{
    int size;
    int *arr = get_array(&size);
    printf("The array elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}

/*
Enter the size of the array: 5
Enter the elements of the array: 1 2 3 4 5
The array elements are: 1 2 3 4 5
*/