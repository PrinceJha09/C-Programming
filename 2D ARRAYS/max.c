#include<stdio.h>
int main(){
int r;
printf("enter no of rows");
scanf("%d",&r);
int c;
printf("enter no of columns");
scanf("%d",&c);
int arr[r][c];
int max;
for(int i=0;i<=r-1;i++){
    for(int j=0;j<=c-1;j++){
    scanf("\n%d",&arr[i][j]);
    }
}
max=arr[0][0];
int a,b;
for(int i=0;i<=r-1;i++){
    for(int j=0;j<=c-1;j++){
    if (max<arr[i][j]){
        max=arr[i][j];
        a=i;b=j;
    }
    }
}
printf("\nMaximum of all elemnets of array is %d and its index is (%d,%d)",max,a,b);
    return 0;
}