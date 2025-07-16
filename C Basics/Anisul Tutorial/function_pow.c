#include<stdio.h>
int main()
{
    int n,power;
    printf("Enter a value: ");
    scanf("%d",&n);

    power = pow_function(n);
    printf("Power is: %d",power);
}

int pow_function(n)
{
    return n*n;
}
