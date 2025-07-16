#include<stdio.h>
int main(){
    float c,f;
    printf("Enter Celsius Temperature: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Fahrenheit Temperature is: %0.2f",f);
    return 0;
}
