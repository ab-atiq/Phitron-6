#include<stdio.h>
int main()
{
    int arr[]= {23,53,56,64,12,74,100},position=-1,i,n;

    int size = sizeof(arr) / sizeof(arr[0]); // array length identify
    printf("Size of array is : %d\n",size);
    printf("Enter a number that present or absent in array: ");
    scanf("%d",&n);

    for(i=0; i<size; i++)
    {
        if(arr[i]==n)
        {
            position=i+1;
            break;
        }
    }

    if(position == -1)
    {
        printf("%d is absent in array.",n);
    }
    else
    {
        printf("%d value is present in %d index.",n,i);
    }

    return 0;
}
