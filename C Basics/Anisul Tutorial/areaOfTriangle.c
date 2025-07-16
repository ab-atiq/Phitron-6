#include<stdio.h>
int main()
{
    float base,height,area;
    scanf("%f %f",&base,&height);
    area = (float)1/2 * base * height;
    printf("Area is: %.2f",area);
    return 0;
}
