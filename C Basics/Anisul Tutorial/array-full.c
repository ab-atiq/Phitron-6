#include<stdio.h>
int main()
{
    int array[100],i,n,sum=0;
    printf("Enter how much enter number: ");
    scanf("%d",&n);
    printf("Please Enter %d Numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + array[i];
    }
    printf("Total sum of array is: %d\n",sum);
    printf("Average is : %.2f\n",(float)sum/n);
    return;
}
