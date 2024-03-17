#include<stdio.h>
int main(){
    int m;
    printf("Enter number of rows:");
    scanf("%d",&m);
    int a=m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=a;j++){
            printf("* ");
        }
        a--;
        printf("\n");
    }
}