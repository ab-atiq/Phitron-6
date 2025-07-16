#include<stdio.h>
int main()
{
    int arr[]={23,34,45,56,67};
    display(arr);
}

void display(int n[])
{
    for(int i=0; i<5; i++)
    {
    printf("%d ",n[i]);
    }
}
