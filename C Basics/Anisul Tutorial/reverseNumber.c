#include<stdio.h>
int main(){
    int num,rem,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("Reverse number is: %d",sum);
    return 0;
}
