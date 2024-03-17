#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int first=n-1;
    int nsp=1;
    int second=n+1;
    for(int i=1;i<=2*n-1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int j=1;j<=n-1;j++){
        for(int k=1;k<=first;k++){
            printf("%d",k);
        }
        for(int l=1;l<=nsp;l++){
            printf(" ");
        }
        for(int m=second;m<=2*n-1;m++){
            printf("%d",m);
        }
        first--;
        nsp+=2;
        second++;
        printf("\n");
    }
}