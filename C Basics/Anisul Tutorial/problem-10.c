#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            printf("%c",row+64);
        }
        printf("\n");
    }
}
