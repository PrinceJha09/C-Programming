#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        printf("* ");
    }
    printf("\n");
    for(int j=1;j<=n-1;j++){
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        for(int l=1;l<=nsp;l++){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}