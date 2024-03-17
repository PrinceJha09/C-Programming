#include<stdio.h>
int main(){
int n; //4 bytes
printf("neter the size of arrays:");
scanf("%d",&n);
int arr[n]; // 4*n bytes
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]); //this is dynamic memory allocation
}
    return 0;
}