#include<stdio.h>
int main(){
    int a=0,b=1,i,f,n;
    printf("Enter fibonacci series= ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=2;i<n;i++){
        f=a+b;
        a=b;
        b=f;
        printf("%d ",f);
    }
    return 0;
}
