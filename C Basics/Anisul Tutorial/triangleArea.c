#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s=(a+b+c)/2;
    printf("%f\n",s);
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",area);
    return 0;
}
