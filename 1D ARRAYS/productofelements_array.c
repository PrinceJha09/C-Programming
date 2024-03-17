#include<stdio.h>
int main(){
int n;
printf("Enter number of elements in array:");
scanf("\n%d",&n);
int arr[n];
int product=1;
for(int i=0;i<=n-1;i++){
    printf("enter %dth element:",i);
    scanf("\n%d",&arr[i]);
    product=product*arr[i];
}
printf("\nProduct of all elemnets of array is %d",product);
    return 0;
}