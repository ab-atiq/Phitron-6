#include<stdio.h>
#define PI 3.1416
int main(){
    float r,area;
    printf("Enter radius: ");
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area is: %0.2f",area);
    return 0;
}
