#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col==1 || col==row || row==n ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
