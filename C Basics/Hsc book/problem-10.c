#include<stdio.h>
main(){
    int i,n,sum=0;

    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
