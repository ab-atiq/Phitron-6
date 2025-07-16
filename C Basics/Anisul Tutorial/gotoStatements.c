#include<stdio.h>
int main()
{
    while(1)
    {
        int i,maxNumber=100,number,sum=0;
        float avg;

        for(i=1; i<=maxNumber; i++)
        {
            printf("Enter a number %d: ",i);
            scanf("%d",&number);

            if(number<0)
            {
                goto label;
            }

            sum+=number;
        }
label:
        avg=(float)sum/(i-1);
        printf("Sum is: %d\n",sum);
        printf("Average is: %f\n",avg);

    }
        return 0;
}
