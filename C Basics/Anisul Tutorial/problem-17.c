#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",row);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",row);
        }
        printf("\n");
    }
}


