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
for(int i=0;i<=1;i++){
    int sum=0;  
    for(int j=0;j<=c-1;j++){  
    sum+=arr[i][j];
    max=sum;
    }
}
int a;
for(int i=0;i<=r-1;i++){
    int sum=0;
    for(int j=0;j<=c-1;j++){
    sum += arr[i][j];
    if (max<sum){
        max=sum;
        a=i;
    }
    }
}
printf("%d",a);
return 0;
}