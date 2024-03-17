#include<stdio.h>
#include<limits.h>
int main(){
int n;
printf("Enter number of elements in array:");
scanf("\n%d",&n);
int arr[n];
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=n-1;i++){
    printf("enter %dth element:",i);
    scanf("\n%d",&arr[i]);
}
for(int i=0;i<=n-1;i++){
    if (max<arr[i]){
        max=arr[i];
    }
}
for(int i=0;i<=n-1;i++){
    if(arr[i]!=max && smax<arr[i]){
        smax=arr[i];
    }
}
printf("\nSecond Maximum of all elemnets of array is %d",smax);
    return 0;
}