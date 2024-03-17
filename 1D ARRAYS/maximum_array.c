#include<stdio.h>
int main(){
int n;
printf("Enter number of elements in array:");
scanf("\n%d",&n);
int arr[n];
int max;
for(int i=0;i<=n-1;i++){
    printf("enter %dth element:",i);
    scanf("\n%d",&arr[i]);
    max=arr[0];
}
for(int i=0;i<=n-1;i++){
    if (max<arr[i]){
        max=arr[i];
    }
}
printf("\nMaximum of all elemnets of array is %d",max);
    return 0;
}