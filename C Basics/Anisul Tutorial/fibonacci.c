#include<stdio.h>
int main()
{
    int a=0,b=1,sum=0,n,c;
    printf("Where Fibonacci series stop: ");
    scanf("%d",&n);
    printf("Fibonacci series is : ");
    //printf("%d + %d +",a,b);

    for(int i=1; i<=n; i++)
    {
        sum=sum+a;

        if(i!=n)
        {
            printf(" %d +",a);
        }
        else
        {
            printf(" %d ",a);
        }

        c=a+b;
        a=b;
        b=c;
    }
    printf("\nSum is: %d",sum);
    return 0;
}
