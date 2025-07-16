#include<stdio.h>
int main()
{
    int num[10],sum1,sum2=0;

    num[0]=12;
    num[1]=12;
    num[2]=12;
    num[3]=12;
    num[4]=12;
    num[5]=12;
    num[6]=12;
    num[7]=12;
    num[8]=12;
    num[9]=12;

    sum1 = num[0]+num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8]+num[9];
    printf("Sum is: %d\n",sum1);

    // use for loop
    for(int i=0; i<10; i++)
    {
        sum2=sum2+num[i];
    }

    printf("Sum is using for loop: %d",sum2);
    return;
}
