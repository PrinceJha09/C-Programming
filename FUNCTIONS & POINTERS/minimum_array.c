#include<stdio.h>
int main(){
int n;
printf("Enter number of elements in array:");
scanf("\n%d",&n);
int arr[n];
int min;
for(int i=0;i<=n-1;i++){
    printf("enter %dth element:",i);
    scanf("\n%d",&arr[i]);
    min=arr[0];
}
for(int i=0;i<=n-1;i++){
    if (min>arr[i]){
        min=arr[i];
    }
}
printf("\nMinimum of all elemnets of array is %d",min);
    return 0;
}