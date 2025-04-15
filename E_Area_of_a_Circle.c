#include <stdio.h>

int main(){
    double R; scanf("%lf", &R);
    double pi = 3.141592653;
    double Area = pi * R * R;
    printf("%.9lf\n", Area);
    return 0;
}