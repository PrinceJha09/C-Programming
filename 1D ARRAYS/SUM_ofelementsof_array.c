#include<stdio.h>
int main(){
int n;
printf("Enter number of elements in array:");
scanf("\n%d",&n);
int arr[n];
int sum=0;
for(int i=0;i<=n-1;i++){
    printf("enter %dth element:",i);
    scanf("\n%d",&arr[i]);
    sum=sum+arr[i];
}
printf("\nSum of all elemnets of array is %d",sum);
    return 0;
}