#include<stdio.h>
int main(){
int r;
printf("enter no of rows");
scanf("%d",&r);
int c;
printf("enter no of columns");
scanf("%d",&c);
int arr[r][c];

for(int i=0;i<=r-1;i++){
    for(int j=0;j<=c-1;j++){
    scanf("\n%d",&arr[i][j]);
    }
}
int brr[c][r];
for(int i=0;i<=c-1;i++){
    for(int j=0;j<=r-1;j++){
    brr[i][j]=arr[j][i];
    }
}
for(int i=0;i<=c-1;i++){
    for(int j=0;j<=r-1;j++){
    printf("%d ",brr[i][j]);
    }
    printf("\n");
}
return 0;
}