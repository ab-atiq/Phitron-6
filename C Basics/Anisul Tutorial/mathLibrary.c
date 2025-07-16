#include<stdio.h>
int main()
{
    double x,y,z;
    printf("Enter value: ");
    scanf("%lf %lf %lf",&x,&y,&z);
    double power = pow(x,y);
    double Log = log(x);
    double Log10 = log10(y);
    double exponen = exp(x);
    double Sin = sin(z);
    double Tan = tan(z);
    double Cos = cos(z);
    printf("Power is : %.2lf\n",power);
    printf("Log value is : %.2lf\n",Log);
    printf("Log10 value is : %.2lf\n",Log10);
    printf("e^x is : %.2lf\n",exponen);
    printf("sin(z) is : %.2lf\n",Sin);
    printf("sin(z) is : %.2lf\n",Cos);
    printf("sin(z) is : %.2lf\n",Tan);
    return 0;
}
