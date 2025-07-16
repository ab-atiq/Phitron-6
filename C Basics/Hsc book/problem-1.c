#include<stdio.h>
main()
{
    int a,b,c,sum=0;
    printf("Enter three number for sum: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
    printf("Summation is: %d",sum);
    return 0;
}
