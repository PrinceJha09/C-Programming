#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int num=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int j=1;j<=n-1;j++){
        int a=1;
        for(int k=1;k<=num;k++){
            printf("%d ",a);
            a++;
        }
        for(int l=1;l<=nsp;l++){
            printf("  ");
            a++;
        }
        for(int m=1;m<=num;m++){
            printf("%d ",a);
            a++;
        }
        num--;
        nsp+=2;
        printf("\n");
    }
}