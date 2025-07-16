#include<stdio.h>
int main(){
    int x,*p,**q;
    x=32;
    p=x;
    q=&p;

    printf("%d",**q);
    return 0;
}
