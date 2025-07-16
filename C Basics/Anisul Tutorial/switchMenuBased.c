#include<stdio.h>
int main()
{
    int n;
    float c,f;

    printf("Please, Select a option: \n");
    printf("1. Celsius to Fahrenheit. \n");
    printf("2. Fahrenheit to Celsius.\n");
    printf("Enter 1 or 2 :");
    scanf("%d",&n);

    switch (n)
    {5/9
    case 1:
        printf("Enter Celsius Temperature:");
        scanf("%f",&c);
        f= c*1.8+32;
        printf("Fahrenheit temperature is: %.2f\n",f);
        break;

    case 2:
        printf("Enter Fahrenheit Temperature:");
        scanf("%f",&f);
        c = (f-32)*5/9;
        printf("Celsius temperature is: %.2f\n",c);
        break;

    default:
        printf("Oh! You enter wrong. Please enter 1 or 2.\n");
        break;
    }
    return 0;
}
