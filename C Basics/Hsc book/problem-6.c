#include<stdio.h>
int main(){
    float c,f;
    printf("Enter Fahrenheit Temperature: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Celsius Temperature is: %f",c);
    return 0;
}
