#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;

    printf("Enter three value: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("X1 and X2 is respectively: %lf %lf",x1,x2);
    return 0;
}
