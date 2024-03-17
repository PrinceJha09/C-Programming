#include<stdio.h>
int main(){
int n;
printf("enter size of matrix");
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1;j++){
    scanf("\n%d",&arr[i][j]);
    }
}
for(int i=0;i<=n-1;i++){
    for(int j=i;j<=n-1;j++){
    int temp = arr[i][j];
    arr[i][j]=arr[j][i];
    arr[j][i]=temp;
    }
}
for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1;j++){
    printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}