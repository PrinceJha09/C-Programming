#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            char ch=(char)(k+64);
            printf("%c ",ch);
        }
        for(int l=1;l<=i-1;l++){
            char ch=(char)(a+64);
            printf("%c ",ch);
            a--;
        }
        printf("\n");
    }

}