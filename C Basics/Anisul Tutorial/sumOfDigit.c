#include<stdio.h>
int main()
{
    int n1,rem,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n1);
    temp=n1;
    while(temp!=0)
    {
        rem = temp%10;
        sum += rem;
        temp = temp/10;
    }
    printf("Sum of digit is : %d",sum);
    return 0;
}
