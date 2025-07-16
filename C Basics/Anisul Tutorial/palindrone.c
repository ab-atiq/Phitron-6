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
        sum=sum*10+rem;
        temp=temp/10;
    }

    printf("Reverse Number is : %d\n",sum);

    if(num==sum)
    {
        printf("This number is palindrome.");
    }
    else
    {
        printf("This is not palindrome.");
    }

    return 0;
}
