#include<stdio.h>
int main(){
int r;
printf("enter no of rows");
scanf("%d",&r);
int c;
printf("enter no of columns");
scanf("%d",&c);
int a[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        a[i][j]=10;
    }
}    
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
    return 0;
}