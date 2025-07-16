#include<stdio.h>
int main(){
    char i = 255,x=6;
    printf("%d %d\n",i,x);

    i=i<<x;
    printf("%d\n",i);

    i=i>>x;
    printf("%d\n",i);

    return 0;
}
