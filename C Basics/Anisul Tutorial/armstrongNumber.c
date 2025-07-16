#include<stdio.h>
int main()
{
    int num,rem,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    printf("All digit cubic sum Number is : %d\n",sum);

    if(num==sum)
    {
        printf("This number is Armstrong.");
    }
    else
    {
        printf("This is not Armstrong.");
    }

    return 0;
}
