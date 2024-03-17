#include<stdio.h>
int main(){
    int m;
    printf("Enter number of rows:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        // for(int j=m;j>=i;j--){
        //     printf("* ");
        // }
        for(int j=1;j<=m+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}