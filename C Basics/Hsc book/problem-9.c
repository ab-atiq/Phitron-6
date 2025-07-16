#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("How much height number this iteration will count: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("Total summation is: %d",sum);
    return 0;
}
