#include<stdio.h>
int  main(){
    int m;
    printf("enter number of rows");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if((i+j)>=m+1 && (i+j)<=2*m))
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}