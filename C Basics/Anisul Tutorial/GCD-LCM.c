#include<stdio.h>
int main()
{
    int n1,n2,rem,num1,num2,gcd,lcd;
    printf("Enter number: ");
    scanf("%d",&n1);
    printf("Enter number: ");
    scanf("%d",&n2);

    num1=n1;
    num2=n2;

    while(n2!=0)
    {
        rem = n1%n2;
        n1=n2;
        n2=rem;
    }

    gcd = n1;
    lcd = num1*num2/gcd;

    printf("GCD is : %d\n",gcd);
    printf("LCD is : %d",lcd);

    return 0;
}
