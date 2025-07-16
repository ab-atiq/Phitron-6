#include<stdio.h>
int main()
{
    int fact,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact = factorial(n) ;
    printf("Factorial value is: %d",fact);

}

factorial( n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }

}
