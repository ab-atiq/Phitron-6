#include<stdio.h>
int main(){
    int i=255,x;
    int j=(x=-3,x-1);

    printf("%d %d\n",i,j);
    printf("%df\n",i/j*100);

    i=(char)i;
    printf("%d\t",i);
    printf("%d\tc",i*1000);

    return 0;
}
