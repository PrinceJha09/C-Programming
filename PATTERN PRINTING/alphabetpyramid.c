#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int s=65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=65;k<=s;k++){
            printf("%c ",k);
        }
        s=s+2;
        
        printf("\n");
    }
}