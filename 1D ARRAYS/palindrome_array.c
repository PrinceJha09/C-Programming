#include<stdio.h>
int main(){
int n;
printf("Enter number of elements in array:");
scanf("\n%d",&n);
int arr[n];
int a=1;
for(int i=0;i<=n-1;i++){
    printf("enter %dth element:",i);
    scanf("\n%d",&arr[i]);
}
for(int i=0,j=n-1;i<j;i++,j--){
    if(arr[i]==arr[j]){
        continue;
    }
    else {
        a=0;
        break;
        }
}  
if(a==0) printf("not a plaindromne");
else printf("yes, a palindrome");      
    return 0;
}